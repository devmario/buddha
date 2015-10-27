// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Source/Uno/Memory.cpp'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.String.h>
#include <Uno/_arc.h>
#include <Uno/Support.h>
#include <Xli/Atomic.h>
#include <Xli/Console.h>
#include <Xli/CoreLib.h>
#include <Xli/Exception.h>
#include <Xli/HashMap.h>
#include <Xli/Mutex.h>
#include <Xli/StringBuilder.h>
#include <Xli/Thread.h>
#include <Xli/Traits.h>
#include <Xli/Unicode.h>
#include <XliPlatform/MessageBox.h>


static Xli::MutexHandle uWeakMutex;


#ifdef U_DEBUG_MEM
static Xli::HashMap<uObject*, bool>* uHeapObjects;
#endif

static void* uMainThreadPtr;
static Xli::TlsHandle uThreadDataTls;

static uThreadData* uGetThreadData()
{
    void* data = Xli::GetTlsValue(uThreadDataTls);

    if (!data)
    {
        data = new uThreadData;



        Xli::SetTlsValue(uThreadDataTls, data);
    }

    return (uThreadData*)data;
}

static void uFreeThreadData(void* data)
{



    delete (uThreadData*)data;
}

static bool uTryClearWeakObject(uObject *);






void uInitObjectModel();
void uFreeObjectModel();

void uInitSupport();
void uFreeSupport();

uRuntime::uRuntime()
{
    if (uMainThreadPtr != NULL)
        uFatalError("There is only room for one Uno Runtime object in this process.");






    uWeakMutex = Xli::CreateMutex();


#ifdef U_DEBUG_MEM
    uHeapObjects = new Xli::HashMap<uObject*, bool>();
#endif

    uMainThreadPtr = Xli::GetCurrentThread();
    uThreadDataTls = Xli::CreateTls(uFreeThreadData);

    uAutoReleasePool pool;



    uInitSupport();
    uInitObjectModel();
}

uRuntime::~uRuntime()
{
    uFreeSupport();
    uFreeObjectModel();




    Xli::DeleteTls(uThreadDataTls);


    Xli::DeleteMutex(uWeakMutex);


#ifdef U_DEBUG_MEM
    delete uHeapObjects;
#endif
}

void uFatalError(const char* msg)
{
    Xli::Error->WriteFormat("Runtime Error: %s\n", msg ? msg : "(null)");
    Xli::MessageBox::Show(NULL, "The application has crashed.", "Fatal Error", Xli::DialogButtonsOK, Xli::DialogHintsError);
    exit(1);
}

uStackFrame::uStackFrame(const char* type, const char* function)
{
    uThreadData* thread = uGetThreadData();
    uCallStackFrame& frame = thread->CallStack[thread->CallStack.Add()];
    frame.Type = type;
    frame.Function = function;
}

uStackFrame::~uStackFrame()
{
    uGetThreadData()->CallStack.RemoveLast();
}

uString* uGetStackTrace()
{
    Xli::StringBuilder sb;
    uThreadData* thread = uGetThreadData();

    for (int i = thread->CallStack.Length() - 1; i >= 0; i--)
    {
        if (sb.GetLength() > 0)
            sb += '\n';

        uCallStackFrame& frame = thread->CallStack[i];
        sb += "   at ";
        sb += frame.Type;
        sb += '.';
        sb += frame.Function;
    }

    return uStringFromXliString(sb.ToString());
}

uAutoReleasePool::uAutoReleasePool()
{
    uThreadData* thread = uGetThreadData();
    uAutoReleaseFrame& frame = thread->AutoReleaseStack[thread->AutoReleaseStack.Add()];
    frame.StartIndex = thread->AutoReleasePool.Length();

#ifdef U_DEBUG_MEM
    frame.AllocCount = 0;
    frame.AllocSize = 0;
    frame.FreeCount = 0;
    frame.FreeSize = 0;
#endif
}

uAutoReleasePool::~uAutoReleasePool()
{
    uThreadData* thread = uGetThreadData();
    uAutoReleaseFrame& frame = thread->AutoReleaseStack[thread->AutoReleaseStack.Length() - 1];

    // Note: Rewritten because that uAutoReleaseObject() might be called from uReleaseObject() inside this loop.
    // TODO: It may be faster if uAutoReleaseObject() were able to handle this, i.e. not adding anything to pool while flushing it.
    for (int i = frame.StartIndex; i < (int)thread->AutoReleasePool.Length(); i++)
    {
        uObject* obj = thread->AutoReleasePool[i];

#ifdef U_DEBUG_MEM
        frame.AllocCount++;
        frame.AllocSize += obj->__obj_alloc_size;
#endif
        uReleaseObject(obj);
    }

#if U_DEBUG_MEM >= 1
    Xli::Error->WriteFormat("ARC FRAME: Alloc'd %d objects (%d bytes), Free'd %d objects (%d bytes)\n", frame.AllocCount, frame.AllocSize, frame.FreeCount, frame.FreeSize);
#endif

    thread->AutoReleasePool.Resize(frame.StartIndex);
    thread->AutoReleaseStack.RemoveLast();
}

void uAutoReleaseObject(uObject* obj)
{
    uThreadData* thread = uGetThreadData();

    if (thread->AutoReleaseStack.Length() == 0)
        uFatalError(XLI_FUNCTION);

    if (obj)
    {
        thread->AutoReleasePool.Add(obj);

#ifdef U_DEBUG_MEM
        int releaseCount = 0;

        for (int i = 0; i < thread->AutoReleasePool.Length(); i++)
            if (thread->AutoReleasePool[i] == obj)
                releaseCount++;

        int retainCount = obj->__obj_retains - releaseCount;

        if (retainCount < 0)
            Xli::Error->WriteFormat("*** BAD RELEASE: '%s', object id: %d (%d retains) ***\n", obj->__obj_type->TypeName, obj->__obj_id, retainCount);
#endif
    }
}

void uRetainValue(uType* type, void* valueAddr)
{
    for (int i = 0; i < type->StrongRefCount; i++)
        uRetainObject(*(uObject**)((uByte*)valueAddr + type->StrongRefOffsets[i]));
}

void uReleaseValue(uType* type, void* valueAddr)
{
    for (int i = 0; i < type->StrongRefCount; i++)
        uReleaseObject(*(uObject**)((uByte*)valueAddr + type->StrongRefOffsets[i]));

    for (int i = 0; i < type->WeakRefCount; i++)
        uStoreWeakObject((uWeakObject**)((uByte*)valueAddr + type->WeakRefOffsets[i]), NULL);
}

void uRetainObject(uObject* obj)
{
    if (obj)
    {
        Xli::AtomicIncrement(&obj->__obj_retains);

#if U_DEBUG_MEM >= 3
        Xli::Error->WriteFormat("Retained '%s' (%d bytes) (%d retains)\n", obj->__obj_type->TypeName, obj->__obj_alloc_size, obj->__obj_retains);
#endif
    }
}

void uReleaseObject(uObject* obj)
{
    if (obj)
    {
        if (Xli::AtomicDecrement(&obj->__obj_retains) == 0)
        {
            if (!uTryClearWeakObject(obj))
                return;

#ifdef U_DEBUG_MEM
            uThreadData* thread = uGetThreadData();

            if (thread->AutoReleaseStack.Length() > 0 &&
                thread->AutoReleaseStack.Last().AllocCount > 0)
            {
                thread->AutoReleaseStack.Last().FreeCount++;
                thread->AutoReleaseStack.Last().FreeSize += obj->__obj_alloc_size;
            }
#endif
            uType* type = obj->__obj_type;

            switch (type->TypeType)
            {
            case uTypeTypeClass:
                do
                {
                    if (type->__fp_Finalize)
                    {
                        try { (*type->__fp_Finalize)(obj); }
                        catch (...) { Xli::Error->WriteFormat("Runtime Error: Unhandled exception in finalizer for '%s'\n", type->TypeName); }
                    }

                    uReleaseValue(type, obj);
                    type = type->BaseType;

                } while (type);

                break;

            case uTypeTypeEnum:
                break;

            case uTypeTypeStruct:
                // Note: This must be a boxed value, so append size of object header
                uReleaseValue(type, (uByte*)obj + sizeof(uObject));
                break;

            case uTypeTypeDelegate:
                uReleaseObject(((uDelegate*)obj)->_obj);
                uReleaseObject(((uDelegate*)obj)->_prev);
                break;

            case uTypeTypeArray:
                {
                    uArray* array = (uArray*)obj;
                    uArrayType* arrayType = (uArrayType*)type;
                    uType* elmType = arrayType->ElementType;

                    switch (elmType->TypeType)
                    {
                    case uTypeTypeClass:
                    case uTypeTypeInterface:
                    case uTypeTypeDelegate:
                    case uTypeTypeArray:
                        for (uObject** objAddr = (uObject**)array->_ptr; array->_len--; objAddr++)
                            uReleaseObject(*objAddr);
                        break;

                    case uTypeTypeEnum:
                        break;

                    case uTypeTypeStruct:
                        for (uByte* valueAddr = (uByte*)array->_ptr; array->_len--; valueAddr += elmType->ValueSize)
                            uReleaseValue(elmType, valueAddr);
                        break;

                    default:
                        uFatalError(XLI_FUNCTION);
                    }
                }
                break;

            default:
                uFatalError(XLI_FUNCTION);
            }

#if U_DEBUG_MEM >= 2
            Xli::Error->WriteFormat("Freeing '%s' (%d bytes)\n", obj->__obj_type->TypeName, obj->__obj_alloc_size);
#endif

#ifdef U_DEBUG_MEM
            uEnterCritical();
            uHeapObjects->Remove(obj);
            uExitCritical();
#endif

            U_FREE_OBJECT(obj);
        }
        else if ((*(uUInt*)&obj->__obj_retains) & 0xF0000000)
        {
            // Object must be corrupt if one of the four first bits are set
            uFatalError(XLI_FUNCTION);
        }
        else
        {
#if U_DEBUG_MEM >= 3
            Xli::Error->WriteFormat("Released '%s' (%d bytes) (%d retains)\n", obj->__obj_type->TypeName, obj->__obj_alloc_size, obj->__obj_retains);
#endif
        }
    }
}

void uGarbageCollect()
{








}

#ifdef U_DEBUG_MEM

static void uDumpObject(FILE *fp, uObject *obj, const char *label)
{
    fprintf(fp, "\tobject_at_%x [label=\"%s refcount: %d\"]\n",
            obj, label, obj->__obj_retains);
}

static void uDumpGlobalRef(FILE *fp, uObject **obj, const char *label)
{
    fprintf(fp, "\tglobal_ref_at_%x [label=\"%s\"]\n",
            obj, label);
    if (*obj)
        fprintf(fp, "\tglobal_ref_at_%x -> object_at_%x\n", obj, *obj);
}

static void uDumpStrongRef(FILE *fp, uObject *obj, uObject *target)
{
    if (target)
        fprintf(fp, "\tobject_at_%x -> object_at_%x\n", obj, target);
}

static void uDumpStrongRefs(FILE *fp, uObject *obj, void *base, uType *type)
{
    for (int i = 0; i < type->StrongRefCount; i++)
    {
        uObject *target = *(uObject**)((uByte*)base + type->StrongRefOffsets[i]);
        uDumpStrongRef(fp, obj, target);
    }
}

static void uDumpObjectAndStrongRefs(FILE *fp, uObject *obj)
{
    uType *type = obj->GetType();

    uDumpObject(fp, obj, type->TypeName);

    switch (type->TypeType)
    {
    case uTypeTypeClass:
        do
        {
	    uDumpStrongRefs(fp, obj, obj, type);
            type = type->BaseType;
        } while (type);
	    break;

    case uTypeTypeEnum:
        break;

    case uTypeTypeStruct:
    {
        uByte* valueAddr = (uByte*)obj + sizeof(uObject);
        uDumpStrongRefs(fp, obj, valueAddr, type);
	    break;
    }

    case uTypeTypeDelegate:
    {
        uDelegate *delegate = (uDelegate*)obj;
        uDumpStrongRef(fp, obj, delegate->_obj);
        uDumpStrongRef(fp, obj, delegate->_prev);
        break;
    }

    case uTypeTypeArray:
    {
        uArray *array = (uArray *)obj;
        uArrayType *arrayType = (uArrayType *)type;
        uType *elmType = arrayType->ElementType;

        switch (elmType->TypeType)
        {
            case uTypeTypeClass:
            case uTypeTypeInterface:
            case uTypeTypeDelegate:
            case uTypeTypeArray:
            {
	        for (int i = 0; i < array->_len; ++i)
		{
		    uObject *target = ((uObject **)array->_ptr)[i];
                    uDumpStrongRef(fp, obj, target);
		}
            }
            break;

            case uTypeTypeEnum:
                break;
            case uTypeTypeStruct:
            {
                for (int i = 0; i < array->_len; ++i)
                {
                    uByte *valueAddr = (uByte *)array->_ptr + i * elmType->ValueSize;
                    uDumpStrongRefs(fp, obj, valueAddr, elmType);
                }
            }
            break;

            default:
                uFatalError(XLI_FUNCTION);
            }
        }
        break;

    default:
        uFatalError(XLI_FUNCTION);
    }
}

void uDumpAllStrongRefs(const char *path)
{
    FILE *fp = fopen(path, "w");
    if (!fp)
        return;

    fprintf(fp, "digraph object_dump {\n");

    uEnterCritical();

    for (int i = uHeapObjects->Begin();
         i != uHeapObjects->End();
	 i = uHeapObjects->Next(i))
    {
        uDumpObjectAndStrongRefs(fp, uHeapObjects->GetKey(i));
    }

    uObject ***globalStrongRefs = uGetGlobalStrongRefs();
    const char **globalStrongRefNames = uGetGlobalStrongNames();
    for (int i = 0; globalStrongRefs[i] != NULL && globalStrongRefNames[i] != NULL; ++i)
    {
        uDumpGlobalRef(fp, globalStrongRefs[i], globalStrongRefNames[i]);
    }

    uExitCritical();

    fprintf(fp, "}\n");
    fclose(fp);
}

#endif

void uWeakStateIntercept::SetCallback(uWeakObject* weak, uWeakStateIntercept::Callback cb)
{
    if (!weak || !cb || weak->ZombieState != uWeakObject::Healthy)
        uFatalError(XLI_FUNCTION);

    weak->ZombieState = uWeakObject::Infected;
    weak->ZombieStateIntercept = cb;
}

template <class RT, class T0>
static RT uCallWithWeakRefLock(RT(*func)(T0), T0 t0)
{



    Xli::MutexLock lock(uWeakMutex);
    return func(t0);

}

static bool uTryClearWeakObject_inner(uObject *obj)
{
    if (obj->__obj_retains != 0)
        return false;

    if (obj->__obj_weak->ZombieState == uWeakObject::Infected)
    {
        obj->__obj_weak->ZombieState = uWeakObject::Zombie;
        if (!obj->__obj_weak->ZombieStateIntercept(uWeakStateIntercept::OnRelease, obj))
            return false;
    }

    obj->__obj_weak->ZombieState = uWeakObject::Dead;
    obj->__obj_weak->Object = NULL;

    return true;
}

static bool uTryClearWeakObject(uObject *obj)
{
    if (!obj->__obj_weak)
        return true;

    if (!uCallWithWeakRefLock(&uTryClearWeakObject_inner, obj))
        return false;

    if (obj->__obj_weak)
    {




        if (Xli::AtomicDecrement(&obj->__obj_weak->RefCount) == 0)
            U_FREE_WEAKREF(obj->__obj_weak);

        obj->__obj_weak = NULL;
    }

    return true;
}

static void uAllocWeakObject(uObject *obj)
{
    if (obj->__obj_weak)
        return;

    uWeakObject *weak = (uWeakObject*)U_MALLOC_WEAKREF(sizeof(uWeakObject));
    weak->Object = obj;
    weak->RefCount = 1;
    weak->ZombieState = uWeakObject::Healthy;
    weak->ZombieStateIntercept = 0;

    obj->__obj_weak = weak;









}

void uStoreWeakObject(uWeakObject** addr, uObject* obj)
{
    if (*addr && Xli::AtomicDecrement(&(*addr)->RefCount) == 0)
        U_FREE_WEAKREF(*addr);

    if (!obj)
    {
        *addr = NULL;
        return;
    }

    if (!obj->__obj_weak)
        uCallWithWeakRefLock(&uAllocWeakObject, obj);

    Xli::AtomicIncrement(&obj->__obj_weak->RefCount);
    *addr = obj->__obj_weak;
}

static uObject* uLoadWeakObject_inner(uWeakObject* weak)
{
    if (weak->ZombieState == uWeakObject::Zombie)
    {
        if (!weak->ZombieStateIntercept(uWeakStateIntercept::OnLoad, weak->Object))
        {
            weak->ZombieState = uWeakObject::Dead;
            weak->Object = NULL;

            return NULL;
        }

        weak->ZombieState = uWeakObject::Infected;
    }

    uRetainObject(weak->Object);
    return weak->Object;
}

uObject* uLoadWeakObject(uWeakObject* weak)
{
    if (!weak)
        return NULL;

    uObject* obj = uCallWithWeakRefLock(&uLoadWeakObject_inner, weak);

    uAutoReleaseObject(obj);
    return obj;
}

static uObject *uInitObject(uType *objType, void *allocObj, size_t allocSize)
{
    uObject *object = (uObject *)allocObj;

    object->__obj_type = objType;
    object->__obj_retains = 1;

#ifdef U_DEBUG_MEM
    object->__obj_alloc_size = allocSize;
    object->__obj_id = objType->ObjectCount++;
#endif

#if U_DEBUG_MEM >= 2
    Xli::Error->WriteFormat("Alloc'd '%s' (%d bytes)\n", objType->TypeName, allocSize);
#endif

#ifdef U_DEBUG_MEM
    uEnterCritical();
    (*uHeapObjects)[object] = true;
    uExitCritical();
#endif

    uAutoReleaseObject(object);
    return object;
}

uObject* uAllocObject(size_t objSize, uType* objType)
{
    return uInitObject(objType, U_MALLOC_OBJECT(objSize, objType), objSize);
}

uString* uAllocString(int length)
{
    size_t allocSize = sizeof(uString) + sizeof(uChar) * length + sizeof(uChar);
    uType *stringType = ::app::Uno::String__typeof();

    uString* result = (uString *)uInitObject(stringType, U_MALLOC_STRING(allocSize), allocSize);

    result->_ptr = (uChar*)((uByte*)result + sizeof(uString));
    result->_len = length;
    return result;
}


















































































































































































































