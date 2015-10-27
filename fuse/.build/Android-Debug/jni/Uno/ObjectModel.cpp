// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Source/Uno/ObjectModel.cpp'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/Uno.Int.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.IndexOutOfRangeException.h>
#include <app/Uno.InvalidCastException.h>
#include <app/Uno.NullReferenceException.h>
#include <app/Uno.Type.h>
#include <Uno/_gc.h>
#include <Xli/HashMap.h>
#include <Xli/Mutex.h>
#include <Xli/Unicode.h>
#include <cstdarg>





static Xli::MutexHandle uMutex;
static Xli::HashMap<const char*, uString*>* uConstStrings;
static uClassType* uObjectTypePtr;
static uClassType* uTypeTypePtr;
static uType* uVoidTypePtr;

static void uInitTypeObjects();

void uInitObjectModel()
{
    uMutex = Xli::CreateMutex();
    uConstStrings = new Xli::HashMap<const char*, uString*>();

    // Create 'Uno.Object', 'Uno.Type' and 'Uno.Void' uType objects
    uObjectTypePtr = (uClassType*)U_MALLOC_TYPE(sizeof(uClassType));
    uTypeTypePtr = (uClassType*)U_MALLOC_TYPE(sizeof(uClassType));
    uVoidTypePtr = (uType*)U_MALLOC_TYPE(sizeof(uType));

    memset(uObjectTypePtr, 0, sizeof(uClassType));
    uObjectTypePtr->TypeType = uTypeTypeClass;
    uObjectTypePtr->TypeName = "Uno.Object";
    uObjectTypePtr->TypeSize = sizeof(uClassType);
    uObjectTypePtr->ValueSize = sizeof(uObject*);
    uObjectTypePtr->__fp_Equals = ::app::Uno::Object__Equals;
    uObjectTypePtr->__fp_GetHashCode = ::app::Uno::Object__GetHashCode;
    uObjectTypePtr->__fp_ToString = ::app::Uno::Object__ToString;
    uObjectTypePtr->__obj_type = uTypeTypePtr;
    uObjectTypePtr->__obj_retains = 1;

    memcpy(uTypeTypePtr, uObjectTypePtr, sizeof(uClassType));
    uTypeTypePtr->TypeName = "Uno.Type";
    uTypeTypePtr->BaseType = uObjectTypePtr;
    uTypeTypePtr->__fp_ToString = (uString*(*)(uObject*))::app::Uno::Type__ToString;

    memcpy(uVoidTypePtr, uObjectTypePtr, sizeof(uType));
    uVoidTypePtr->TypeName = "Uno.Void";
    uVoidTypePtr->TypeType = uTypeTypeVoid;
    uVoidTypePtr->TypeSize = sizeof(uType);
    uVoidTypePtr->ValueSize = 0;
















    uInitTypeObjects();
}

void uFreeObjectModel()
{
    delete uConstStrings;
    U_FREE_TYPE(uObjectTypePtr);
    U_FREE_TYPE(uTypeTypePtr);
    U_FREE_TYPE(uVoidTypePtr);
    Xli::DeleteMutex(uMutex);
}

uClassType* uObject__typeof()
{
    return uObjectTypePtr;
}

uClassType* uType__typeof()
{
    return uTypeTypePtr;
}

uType* uVoid__typeof()
{
    return uVoidTypePtr;
}

static uType* uAllocType(
    size_t typeSize,
    uTypeType typeType,
    const char* name,
    size_t valueSize,
    int interfaceCount = 0,
    int strongRefCount = 0,
    int weakRefCount = 0)
{
#ifdef U_DEBUG_MEM
#define U_REF_NAME_SIZE sizeof(const char*)
#else
#define U_REF_NAME_SIZE 0
#endif

    uType* result = 
        (uType*)uAllocObject(
            typeSize 
                + interfaceCount * (sizeof(uType*) + sizeof(size_t))
                + strongRefCount * (U_REF_NAME_SIZE + sizeof(size_t))
                + weakRefCount * (U_REF_NAME_SIZE + sizeof(size_t)),
            uTypeTypePtr);
    uByte* ptr = (uByte*)result + typeSize;

#undef U_REF_NAME_SIZE

    result->TypeSize = typeSize;
    result->TypeType = typeType;
    result->TypeName = name;
    result->ValueSize = valueSize;
    result->InterfaceCount = interfaceCount;
    result->StrongRefCount = strongRefCount;
    result->WeakRefCount = weakRefCount;

    result->InterfaceTypes = (uInterfaceType**)ptr;
    ptr += interfaceCount * sizeof(uInterfaceType*);

    result->InterfaceOffsets = (size_t*)ptr;
    ptr += interfaceCount * sizeof(size_t);

    result->StrongRefOffsets = (size_t*)ptr;
    ptr += strongRefCount * sizeof(size_t);

    result->WeakRefOffsets = (size_t*)ptr;
    ptr += weakRefCount * sizeof(size_t);

#ifdef U_DEBUG_MEM
    result->StrongRefNames = (const char**)ptr;
    ptr += strongRefCount * sizeof(const char*);

    result->WeakRefNames = (const char**)ptr;
    ptr += weakRefCount * sizeof(const char*);   
#endif

    
    return result;
}

void uType::SetBaseType(uType* baseType)
{
    // Copy vtable
    static size_t offset = offsetof(uType, __fp_GetHashCode);
    memcpy((uByte*)this + offset, (const uByte*)baseType + offset, baseType->TypeSize - offset);
    BaseType = baseType;
}

void uType::SetInterfaces(uInterfaceType* type, size_t offset, ...)
{
    InterfaceTypes[0] = type;
    InterfaceOffsets[0] = offset;

    va_list ap;
    va_start(ap, offset);

    for (int i = 1; i < InterfaceCount; i++)
    {
        InterfaceTypes[i] = va_arg(ap, uInterfaceType*);
        InterfaceOffsets[i] = va_arg(ap, size_t);
    }

    va_end(ap);
}

void uType::SetStrongRefs(const char* name, size_t offset, ...)
{
#ifdef U_DEBUG_MEM
    StrongRefNames[0] = name;
#endif
    StrongRefOffsets[0] = offset;

    va_list ap;
    va_start(ap, offset);

    for (int i = 1; i < StrongRefCount; i++)
    {
#ifdef U_DEBUG_MEM
        StrongRefNames[i] =
#endif
        va_arg(ap, const char*);
        StrongRefOffsets[i] = va_arg(ap, size_t);
    }

    va_end(ap);
}

void uType::SetWeakRefs(const char* name, size_t offset, ...)
{
#ifdef U_DEBUG_MEM
    WeakRefNames[0] = name;
#endif
    WeakRefOffsets[0] = offset;

    va_list ap;
    va_start(ap, offset);

    for (int i = 1; i < WeakRefCount; i++)
    {
#ifdef U_DEBUG_MEM
        WeakRefNames[i] =
#endif
        va_arg(ap, const char*);
        WeakRefOffsets[i] = va_arg(ap, size_t);
    }

    va_end(ap);
}

bool uIs(const uObject* obj, const uType* type)
{
    if (obj != NULL && type != NULL)
    {
        uType* objType = obj->__obj_type;

        switch (type->TypeType)
        {
            case uTypeTypeInterface:
                do
                {
                    for (int i = 0; i < objType->InterfaceCount; i++)
                        if (objType->InterfaceTypes[i] == type)
                            return true;

                    objType = objType->BaseType;
                }
                while (objType);
                break;

            default:
                do
                {
                    if (objType == type)
                        return true;

                    objType = objType->BaseType;
                }
                while (objType);
                break;
        }
    }

    return false;
}

uClassType* uAllocClassType(size_t typeSize, const char* name, bool isStatic, int interfaceCount, int strongRefCount, int weakRefCount)
{
    uClassType* result =
        (uClassType*)uAllocType(
            typeSize, uTypeTypeClass, name, isStatic ? 0 : sizeof(uObject*),
            interfaceCount, strongRefCount, weakRefCount);

    if (!isStatic)
        result->SetBaseType(uObjectTypePtr);

    return result;
}

uString* uNewStringAnsi(const char* cstr, int length)
{
    uString* result = uAllocString(length);

    for (int i = 0; i < length; i++)
        result->_ptr[i] = (uChar)cstr[i];

    return result;
}

uString* uNewStringAnsi(const char* cstr)
{
    return cstr == NULL ? NULL : uNewStringAnsi(cstr, strlen(cstr));
}

uString* uNewStringUtf8(const char* mutf8, int length)
{
    Xli::Utf16String utf16 = Xli::Unicode::Utf8To16(mutf8, length, Xli::UnicodeFlagsModifiedUtf8 | Xli::UnicodeFlagsIgnoreError);
    int len = utf16.Length();

    uString* result = uAllocString(len);
    memcpy(result->_ptr, utf16.Ptr(), sizeof(uChar) * len);
    return result;
}

uString* uNewStringUtf8(const char* mutf8)
{
    return mutf8 == NULL ? NULL : uNewStringUtf8(mutf8, strlen(mutf8));
}

uString* uNewStringFromArray(const uArray* array)
{
    if (!array)
        uThrowable::ThrowNullReference(XLI_FUNCTION, XLI_LINE);

    uString* result = uAllocString(array->_len);
    memcpy(result->_ptr, array->_ptr, sizeof(uChar) * array->_len);
    return result;
}

uString* uGetConstString(const char* mutf8)
{
    Xli::MutexLock lock(uMutex);

    uString* result;
    if (!uConstStrings->TryGetValue(mutf8, result))
    {
        result = uNewStringUtf8(mutf8);
        uConstStrings->Add(mutf8, result);
        uRetainObject(result);
    }

    return result;
}

static bool uCompareCharArrays(const uChar* a, const uChar* b, int len, bool ignoreCase)
{
    if (ignoreCase)
    {
        for (int i = 0; i < len; i++)
            if (a[i] != b[i] && Xli::Unicode::ToUpper(a[i]) != Xli::Unicode::ToUpper(b[i]))
                return false;

        return true;
    }

    return memcmp(a, b, sizeof(uChar) * len) == 0;
}

bool uCompareStrings(const uString* a, const uString* b, bool ignoreCase)
{
    return a == b || (a != NULL && b != NULL && a->_len == b->_len && uCompareCharArrays(a->_ptr, b->_ptr, a->_len, ignoreCase));
}

const char* uStringToCStr(const uString* str)
{
    return str ? Xli::Unicode::Utf16To8(str->_ptr, str->_len).SwapPtr() : NULL;
}

void uFreeCStr(const char* cstr)
{
    U_FREE_CSTR((void *)cstr);
}

uEnumType* uAllocEnumType(const char* name, uStructType* baseType, int literalCount)
{
    uEnumType* result = 
        (uEnumType*)uAllocType(
            sizeof(uEnumType) + literalCount * (sizeof(uString*) + sizeof(uLong)), 
            uTypeTypeEnum, name, baseType->ValueSize);
    
    result->SetBaseType(uObjectTypePtr); // We want to copy vtable from uObject, so assign baseType after this.
    result->BaseType = baseType; 
    result->LiteralCount = literalCount;
    result->LiteralStrings = (uString**)((uByte*)result + sizeof(uEnumType));
    result->LiteralValues = (uLong*)((uByte*)result->LiteralStrings + literalCount * sizeof(uString*));
    return result;
}

// uLong can represent all enum types
void uEnumType::SetLiterals(const char* name, uLong value, ...)
{
    LiteralStrings[0] = uGetConstString(name);
    LiteralValues[0] = value; 

    va_list ap;
    va_start(ap, value);

    for (int i = 1; i < LiteralCount; i++)
    {
        LiteralStrings[i] = uGetConstString(va_arg(ap, const char*));
        LiteralValues[i] = va_arg(ap, uLong);
    }

    va_end(ap);
}

static uLong uLoadLong(uEnumType* type, void* addr)
{
    // See if value is unsigned (Uno.Byte/Uno.U...)
    uChar fifth = type->BaseType->TypeName[4];
    bool isUnsigned = fifth == 'B' || fifth == 'U';

    switch (type->ValueSize)
    {
        case 1: return isUnsigned
            ? (uLong)*(uByte*)addr
            : (uLong)*(uSByte*)addr;
        case 2: return isUnsigned
            ? (uLong)*(uUShort*)addr
            : (uLong)*(uShort*)addr;
        case 4: return isUnsigned
            ? (uLong)*(uUInt*)addr
            : (uLong)*(int*)addr;
        case 8: return isUnsigned
            ? (uLong)*(uULong*)addr
            : *(uLong*)addr;
        default: 
            uFatalError(XLI_FUNCTION);
    }
}

static bool uStoreLong(uEnumType* type, void* addr, uLong value)
{
    // See if value is unsigned (Uno.Byte/Uno.U...)
    uChar fifth = type->BaseType->TypeName[4];
    bool isUnsigned = fifth == 'B' || fifth == 'U';

    switch (type->ValueSize)
    {
        case 1: isUnsigned
            ? *(uByte*)addr = (uByte)value
            : *(uSByte*)addr = (uSByte)value;
            return true;
        case 2: isUnsigned
            ? *(uShort*)addr = (uShort)value
            : *(uUShort*)addr = (uUShort)value;
            return true;
        case 4: isUnsigned
            ? *(int*)addr = (int)value
            : *(uUInt*)addr = (uUInt)value;
            return true;
        case 8: isUnsigned
            ? *(uULong*)addr = (uULong)value
            : *(uLong*)addr = value;
            return true;
        default: 
            memset(addr, 0, type->ValueSize);
            return false;
    }
}

bool uTryParseEnum(uType* type, uString* value, bool ignoreCase, void* result, size_t size)
{
    if (type == NULL || 
        value == NULL || 
        type->TypeType != uTypeTypeEnum || 
        type->ValueSize != size)
        return false;

    uEnumType* enumType = (uEnumType*)type;
    for (int i = 0; i < enumType->LiteralCount; i++)
        if (uCompareStrings(enumType->LiteralStrings[i], value, ignoreCase))
            return uStoreLong(enumType, result, enumType->LiteralValues[i]);

    memset(result, 0, size);
    return false;
}

uString* uGetEnumString(uType* type, void* value, size_t size)
{
    if (value == NULL || type == NULL)
        uThrowable::ThrowNullReference(XLI_FUNCTION, XLI_LINE);

    if (type->TypeType != uTypeTypeEnum || 
        type->ValueSize != size || 
        type->BaseType == NULL)
        uThrowable::ThrowInvalidCast(XLI_FUNCTION, XLI_LINE);

    uEnumType* enumType = (uEnumType*)type;
    uLong litVal = uLoadLong(enumType, value);

    for (int i = 0; i < enumType->LiteralCount; i++)
        if (litVal == enumType->LiteralValues[i])
            return enumType->LiteralStrings[i];

    // Call base.ToString()
    return (*((uStructType*)type->BaseType)->__fp_ToString_value)(value);
}

static int uStruct__GetHashCode(uObject* obj)
{
    uStructType* type = (uStructType*)obj->__obj_type;
    return type->__fp_GetHashCode_value
        ? (*type->__fp_GetHashCode_value)((uByte*)obj + sizeof(uObject))
        : ::app::Uno::Object__GetHashCode(obj);
}

static bool uStruct__Equals(uObject* obj1, uObject* obj2)
{
    uStructType* type = (uStructType*)obj1->__obj_type;
    return type->__fp_Equals_value
        ? (*type->__fp_Equals_value)((uByte*)obj1 + sizeof(uObject), obj2)
        : ::app::Uno::Object__Equals(obj1, obj2);
}

static uString* uStruct__ToString(uObject* obj)
{
    uStructType* type = (uStructType*)obj->__obj_type;
    return type->__fp_ToString_value
        ? (*type->__fp_ToString_value)((uByte*)obj + sizeof(uObject))
        : ::app::Uno::Object__ToString(obj);
}

uStructType* uAllocStructType(size_t typeSize, const char* name, size_t valueSize, int interfaceCount, int strongRefCount, int weakRefCount)
{
    uStructType* result = 
        (uStructType*)uAllocType(
                typeSize, uTypeTypeStruct, name, valueSize,
                interfaceCount, strongRefCount, weakRefCount);

    result->SetBaseType(uObjectTypePtr);
    result->__fp_GetHashCode = uStruct__GetHashCode;
    result->__fp_Equals = uStruct__Equals;
    result->__fp_ToString = uStruct__ToString;
    return result;
}

uObject* uBoxValue(uType* type, const void* valueAddr, size_t valueSize)
{
#ifdef U_DEBUG_UNSAFE
    if (!type || type->ValueSize != valueSize)
        uFatalError(XLI_FUNCTION);

    switch (type->TypeType)
    {
        case uTypeTypeEnum:
        case uTypeTypeStruct:
            break;
        default:
            uFatalError(XLI_FUNCTION);
    }
#endif

    uObject* result = uAllocObject(sizeof(uObject) + valueSize, type);
    memcpy((uByte*)result + sizeof(uObject), valueAddr, valueSize);
    uRetainValue(type, (void*)valueAddr);
    return result;
}

void uUnboxObject(uType* type, uObject* obj, void* valueAddr, size_t valueSize)
{
#ifdef U_DEBUG_UNSAFE
    if (!type || type->ValueSize != valueSize)
        uFatalError(XLI_FUNCTION);
#endif

    switch (type->TypeType)
    {
        case uTypeTypeEnum:
        case uTypeTypeStruct:
            break;
        default:
            *(uObject**)valueAddr = obj;
            return;
    }

    memcpy(valueAddr, (uByte*)uPtr(obj) + sizeof(uObject), valueSize);
    uRetainValue(type, valueAddr);
}

uInterfaceType* uAllocInterfaceType(const char* name)
{
    uInterfaceType* result = (uInterfaceType*)uAllocType(sizeof(uInterfaceType), uTypeTypeInterface, name, sizeof(uObject*));
    result->SetBaseType(uObjectTypePtr);
    return result;
}

void* uGetInterfacePtr(const uObject* obj, const uInterfaceType* type)
{
    uType* objType = obj->__obj_type;

    do
    {
        for (int i = 0; i < objType->InterfaceCount; i++)
            if (objType->InterfaceTypes[i] == type)
                return (void*)((uByte*)objType + objType->InterfaceOffsets[i]);

        objType = objType->BaseType;
    }
    while (objType);

    uFatalError(XLI_FUNCTION);
}

uDelegateType* uAllocDelegateType(const char* name, int paramCount)
{
    uDelegateType* result = 
        (uDelegateType*)uAllocType(
            sizeof(uDelegateType) + paramCount * sizeof(uType*), 
            uTypeTypeDelegate, name, sizeof(uDelegate*));
    
    result->SetBaseType(::app::Uno::Delegate__typeof());
    result->ParameterCount = paramCount;
    result->ParameterTypes = (uType**)((uByte*)result + sizeof(uDelegateType));
    return result;
}

void uDelegateType::SetSignature(uType* returnType, ...)
{
    ReturnType = returnType;

    va_list ap;
    va_start(ap, returnType);

    for (int i = 0; i < ParameterCount; i++)
        ParameterTypes[i] = va_arg(ap, uType*);

    va_end(ap);
}

uDelegate* uNewDelegateNonVirt(uDelegateType* delegateType, const void* funcPtr, uObject* objInst, size_t objOffset)
{
    uDelegate* result = (uDelegate*)uAllocObject(sizeof(uDelegate), delegateType);
    result->_func = funcPtr;
    result->_obj = objInst;
    result->_offset = objOffset;
    uRetainObject(objInst);
    return result;
}

uDelegate* uNewDelegateVirt(uDelegateType* delegateType, uObject* objInst, size_t funcOffset)
{
    uDelegate* result = (uDelegate*)uAllocObject(sizeof(uDelegate), delegateType);
    result->_obj = objInst;
    result->_offset = funcOffset;
    uRetainObject(objInst);
    return result;
}

uDelegate* uNewDelegateInterface(uDelegateType* delegateType, uObject* objInst, uInterfaceType* interfaceType, size_t funcOffset)
{
    if (!objInst)
    {
        uThrowable::ThrowNullReference(XLI_FUNCTION, XLI_LINE);
        return NULL;
    }

    uType* objType = objInst->__obj_type;

    do
    {
        for (int i = 0; i < objType->InterfaceCount; i++)
            if (objType->InterfaceTypes[i] == interfaceType)
                return uNewDelegateVirt(delegateType, objInst, objType->InterfaceOffsets[i] + funcOffset);

        objType = objType->BaseType;
    }
    while (objType);

    uFatalError(XLI_FUNCTION);
}

uArrayType* uGetArrayType(uType* elementType)
{
    if (elementType->ArrayType)
        return elementType->ArrayType;

    Xli::MutexLock lock(uMutex);

    size_t nameLen = strlen(elementType->TypeName);
    char* arrayName = (char*)U_MALLOC_CSTR(nameLen + 3); // Memory leak
    memcpy(arrayName, elementType->TypeName, nameLen);
    memcpy(arrayName + nameLen, "[]", 3);

    uArrayType* result = (uArrayType*)uAllocType(sizeof(uArrayType), uTypeTypeArray, arrayName, sizeof(uArray*));
    result->SetBaseType(uObjectTypePtr);
    result->ElementType = elementType;
    uRetainObject(result);

    return elementType->ArrayType = result;
}

uArray* uNewArray(uType* elementType, int length, const void* optionalData)
{
    size_t elementSize = elementType->ValueSize;
    uArray* result = (uArray*)uAllocObject(sizeof(uArray) + elementSize * length, uGetArrayType(elementType));
    result->_ptr = (uByte*)result + sizeof(uArray);
    result->_len = length;

    if (optionalData)
        memcpy(result->_ptr, optionalData, elementSize * length);

    return result;
}

uArray* uNewArrayRetainEach(uType* elementType, int length, uObject** data)
{
    size_t elementSize = elementType->ValueSize;
    uArray* result = (uArray*)uAllocObject(sizeof(uArray) + elementSize * length, uGetArrayType(elementType));
    result->_ptr = (uByte*)result + sizeof(uArray);
    result->_len = length;

    for (int i = 0; i < length; ++i)
    {
        result->ItemStrong<uObject*>(i) = data[i];
    }

    return result;
}

void uCopyArray(const uArray* srcArray, int srcIndex, uArray* dstArray, int dstIndex, int length)
{
    if (length < 0 ||
        !srcArray || srcIndex < 0 || srcIndex + length > srcArray->_len ||
        !dstArray || dstIndex < 0 || dstIndex + length > dstArray->_len ||
        srcArray->__obj_type != dstArray->__obj_type)
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));

    uType* elmType = ((uArrayType*)srcArray->__obj_type)->ElementType;
    size_t elmSize = elmType->ValueSize;

    uByte* dst = (uByte*)dstArray->_ptr + elmSize * dstIndex;
    const uByte* src = (const uByte*)srcArray->_ptr + elmSize * srcIndex;

    switch (elmType->TypeType)
    {
    case uTypeTypeEnum:
        break;

    case uTypeTypeStruct:
        for (int i = 0; i < length; i++)
            for (int j = 0; j < elmType->StrongRefCount; j++)
                uAutoReleaseObject((uObject*)(dst + i * elmSize + elmType->StrongRefOffsets[j]));

        memcpy(dst, src, elmSize * length);
        for (int i = 0; i < length; i++)
            for (int j = 0; j < elmType->StrongRefCount; j++)
                uRetainObject((uObject*)(dst + i * elmSize + elmType->StrongRefOffsets[j]));
        break;

    default:
        for (int i = 0; i < length; i++)
            uAutoReleaseObject((uObject*)dst + i);

        memcpy(dst, src, elmSize * length);
        for (int i = 0; i < length; i++)
            uRetainObject((uObject*)dst + i);

        break;
    }
}

uThrowable::uThrowable(::app::Uno::Exception* exception, const char* func, int line)
    : Exception(exception)
    , Function(func)
    , Line(line)
{
    uRetainObject((uObject*)Exception);
}

uThrowable::uThrowable(const uThrowable& copy)
    : Exception(copy.Exception)
    , Function(copy.Function)
    , Line(copy.Line)
{
    uRetainObject((uObject*)Exception);
}

uThrowable::~uThrowable() XLI_NOEXCEPT
{
    uReleaseObject((uObject*)Exception);
}

const char* uThrowable::what() const XLI_NOEXCEPT
{
    return "Uno.Exception";
}

void uThrowable::ThrowNullReference(const char* file, int line)
{
    throw uThrowable(::app::Uno::NullReferenceException__New_3(NULL), file, line);
}

void uThrowable::ThrowInvalidCast(const char* file, int line)
{
    throw uThrowable(::app::Uno::InvalidCastException__New_3(NULL), file, line);
}

void uThrowable::ThrowIndexOutOfRange(const char* file, int line)
{
    throw uThrowable(::app::Uno::IndexOutOfRangeException__New_3(NULL), file, line);
}

namespace app { namespace Android { namespace android { namespace animation { struct Animator__uType; Animator__uType* Animator__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace animation { struct TimeAnimator__uType; TimeAnimator__uType* TimeAnimator__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace animation { struct ValueAnimator__uType; ValueAnimator__uType* ValueAnimator__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace app { struct Activity__uType; Activity__uType* Activity__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace app { struct Fragment__uType; Fragment__uType* Fragment__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace app { struct TaskStackBuilder__uType; TaskStackBuilder__uType* TaskStackBuilder__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace content { namespace res { struct AssetManager__uType; AssetManager__uType* AssetManager__typeof(); } } } } }
namespace app { namespace Android { namespace android { namespace content { namespace res { struct ColorStateList__uType; ColorStateList__uType* ColorStateList__typeof(); } } } } }
namespace app { namespace Android { namespace android { namespace content { namespace res { struct Configuration__uType; Configuration__uType* Configuration__typeof(); } } } } }
namespace app { namespace Android { namespace android { namespace content { namespace res { struct Resources__uType; Resources__uType* Resources__typeof(); } } } } }
namespace app { namespace Android { namespace android { namespace content { struct ComponentName__uType; ComponentName__uType* ComponentName__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace content { struct Context__uType; Context__uType* Context__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace content { struct ContextWrapper__uType; ContextWrapper__uType* ContextWrapper__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace content { struct Intent__uType; Intent__uType* Intent__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { namespace shapes { struct ArcShape__uType; ArcShape__uType* ArcShape__typeof(); } } } } } }
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { namespace shapes { struct RectShape__uType; RectShape__uType* RectShape__typeof(); } } } } } }
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { namespace shapes { struct RoundRectShape__uType; RoundRectShape__uType* RoundRectShape__typeof(); } } } } } }
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { namespace shapes { struct Shape__uType; Shape__uType* Shape__typeof(); } } } } } }
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct Drawable__uType; Drawable__uType* Drawable__typeof(); } } } } }
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct LayerDrawable__uType; LayerDrawable__uType* LayerDrawable__typeof(); } } } } }
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct ShapeDrawable__uType; ShapeDrawable__uType* ShapeDrawable__typeof(); } } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Bitmap__uType; Bitmap__uType* Bitmap__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct BitmapDLRConfig__uType; BitmapDLRConfig__uType* BitmapDLRConfig__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct BitmapFactory__uType; BitmapFactory__uType* BitmapFactory__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Canvas__uType; Canvas__uType* Canvas__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Color__uType; Color__uType* Color__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Matrix__uType; Matrix__uType* Matrix__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Paint__uType; Paint__uType* Paint__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct PaintDLRStyle__uType; PaintDLRStyle__uType* PaintDLRStyle__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct PorterDuffDLRMode__uType; PorterDuffDLRMode__uType* PorterDuffDLRMode__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Rect__uType; Rect__uType* Rect__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct RectF__uType; RectF__uType* RectF__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct SurfaceTexture__uType; SurfaceTexture__uType* SurfaceTexture__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Typeface__uType; Typeface__uType* Typeface__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace net { struct Uri__uType; Uri__uType* Uri__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace opengl { struct GLUtils__uType; GLUtils__uType* GLUtils__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace os { struct BuildDLRVERSION__uType; BuildDLRVERSION__uType* BuildDLRVERSION__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace os { struct Bundle__uType; Bundle__uType* Bundle__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace os { struct Parcel__uType; Parcel__uType* Parcel__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace os { struct Vibrator__uType; Vibrator__uType* Vibrator__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace test { namespace mock { struct MockContext__uType; MockContext__uType* MockContext__typeof(); } } } } }
namespace app { namespace Android { namespace android { namespace text { struct Layout__uType; Layout__uType* Layout__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace text { struct LayoutDLRAlignment__uType; LayoutDLRAlignment__uType* LayoutDLRAlignment__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace text { struct StaticLayout__uType; StaticLayout__uType* StaticLayout__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace text { struct TextPaint__uType; TextPaint__uType* TextPaint__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace text { struct TextUtilsDLRTruncateAt__uType; TextUtilsDLRTruncateAt__uType* TextUtilsDLRTruncateAt__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace util { struct TypedValue__uType; TypedValue__uType* TypedValue__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace view { namespace inputmethod { struct InputMethodManager__uType; InputMethodManager__uType* InputMethodManager__typeof(); } } } } }
namespace app { namespace Android { namespace android { namespace view { struct ActionMode__uType; ActionMode__uType* ActionMode__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace view { struct ActionProvider__uType; ActionProvider__uType* ActionProvider__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace view { struct Choreographer__uType; Choreographer__uType* Choreographer__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace view { struct ContextThemeWrapper__uType; ContextThemeWrapper__uType* ContextThemeWrapper__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace view { struct Gravity__uType; Gravity__uType* Gravity__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace view { struct KeyEvent__uType; KeyEvent__uType* KeyEvent__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent__uType; MotionEvent__uType* MotionEvent__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace view { struct Surface__uType; Surface__uType* Surface__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace view { struct SurfaceView__uType; SurfaceView__uType* SurfaceView__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace view { struct TextureView__uType; TextureView__uType* TextureView__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace view { struct View__uType; View__uType* View__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace view { struct ViewDLRMeasureSpec__uType; ViewDLRMeasureSpec__uType* ViewDLRMeasureSpec__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace view { struct ViewGroup__uType; ViewGroup__uType* ViewGroup__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace view { struct ViewGroupDLRLayoutParams__uType; ViewGroupDLRLayoutParams__uType* ViewGroupDLRLayoutParams__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace view { struct ViewGroupDLRMarginLayoutParams__uType; ViewGroupDLRMarginLayoutParams__uType* ViewGroupDLRMarginLayoutParams__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace view { struct WindowManagerDLRLayoutParams__uType; WindowManagerDLRLayoutParams__uType* WindowManagerDLRLayoutParams__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace webkit { struct WebChromeClient__uType; WebChromeClient__uType* WebChromeClient__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace webkit { struct WebView__uType; WebView__uType* WebView__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace webkit { struct WebViewClient__uType; WebViewClient__uType* WebViewClient__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace widget { struct AbsoluteLayout__uType; AbsoluteLayout__uType* AbsoluteLayout__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace widget { struct AbsSeekBar__uType; AbsSeekBar__uType* AbsSeekBar__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace widget { struct Button__uType; Button__uType* Button__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace widget { struct CompoundButton__uType; CompoundButton__uType* CompoundButton__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace widget { struct EditText__uType; EditText__uType* EditText__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace widget { struct FrameLayout__uType; FrameLayout__uType* FrameLayout__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace widget { struct FrameLayoutDLRLayoutParams__uType; FrameLayoutDLRLayoutParams__uType* FrameLayoutDLRLayoutParams__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace widget { struct HorizontalScrollView__uType; HorizontalScrollView__uType* HorizontalScrollView__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace widget { struct ImageView__uType; ImageView__uType* ImageView__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace widget { struct ImageViewDLRScaleType__uType; ImageViewDLRScaleType__uType* ImageViewDLRScaleType__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace widget { struct ProgressBar__uType; ProgressBar__uType* ProgressBar__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace widget { struct RelativeLayout__uType; RelativeLayout__uType* RelativeLayout__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace widget { struct RelativeLayoutDLRLayoutParams__uType; RelativeLayoutDLRLayoutParams__uType* RelativeLayoutDLRLayoutParams__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace widget { struct ScrollView__uType; ScrollView__uType* ScrollView__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace widget { struct SeekBar__uType; SeekBar__uType* SeekBar__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace widget { struct Switch__uType; Switch__uType* Switch__typeof(); } } } }
namespace app { namespace Android { namespace android { namespace widget { struct TextView__uType; TextView__uType* TextView__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Primitives { struct ConstCharPtr__uType; ConstCharPtr__uType* ConstCharPtr__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Primitives { struct JavaVMPtr__uType; JavaVMPtr__uType* JavaVMPtr__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Primitives { struct jfieldID__uType; jfieldID__uType* jfieldID__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Primitives { struct jmethodID__uType; jmethodID__uType* jmethodID__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Primitives { struct JNIEnvPtr__uType; JNIEnvPtr__uType* JNIEnvPtr__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Primitives { struct JNINativeMethod__uType; JNINativeMethod__uType* JNINativeMethod__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Primitives { struct jweak__uType; jweak__uType* jweak__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Primitives { struct ujboolean__uType; ujboolean__uType* ujboolean__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Primitives { struct ujbyte__uType; ujbyte__uType* ujbyte__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Primitives { struct ujchar__uType; ujchar__uType* ujchar__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Primitives { struct ujclass__uType; ujclass__uType* ujclass__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Primitives { struct ujdouble__uType; ujdouble__uType* ujdouble__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Primitives { struct ujfloat__uType; ujfloat__uType* ujfloat__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Primitives { struct ujint__uType; ujint__uType* ujint__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Primitives { struct ujlong__uType; ujlong__uType* ujlong__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Primitives { struct ujobject__uType; ujobject__uType* ujobject__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Primitives { struct ujshort__uType; ujshort__uType* ujshort__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Primitives { struct ujstring__uType; ujstring__uType* ujstring__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Primitives { struct ujvalue__uType; ujvalue__uType* ujvalue__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Primitives { struct uweakptr__uType; uweakptr__uType* uweakptr__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Types { struct Arrays__uType; Arrays__uType* Arrays__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Types { struct Bridge__uType; Bridge__uType* Bridge__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Types { struct ByteBuffer__uType; ByteBuffer__uType* ByteBuffer__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Types { struct String__uType; String__uType* String__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Wrappers { struct BindingIDAttribute__uType; BindingIDAttribute__uType* BindingIDAttribute__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Wrappers { struct BindingSubclassAttribute__uType; BindingSubclassAttribute__uType* BindingSubclassAttribute__typeof(); } } } }
namespace app { namespace Android { namespace Base { namespace Wrappers { struct JWrapper__uType; JWrapper__uType* JWrapper__typeof(); } } } }
namespace app { namespace Android { namespace Base { struct AndroidBindingMacros__uType; AndroidBindingMacros__uType* AndroidBindingMacros__typeof(); } } }
namespace app { namespace Android { namespace Base { struct JNI__uType; JNI__uType* JNI__typeof(); } } }
namespace app { namespace Android { namespace Base { struct Permissions__uType; Permissions__uType* Permissions__typeof(); } } }
namespace app { namespace Android { namespace Base { struct PlatPermission__uType; PlatPermission__uType* PlatPermission__typeof(); } } }
namespace app { namespace Android { namespace Base { struct Versions__uType; Versions__uType* Versions__typeof(); } } }
namespace app { namespace Android { namespace com { namespace fuse { namespace ExperimentalHttp { struct HttpRequest__uType; HttpRequest__uType* HttpRequest__typeof(); } } } } }
namespace app { namespace Android { namespace com { namespace fuse { namespace Native { struct Camera__uType; Camera__uType* Camera__typeof(); } } } } }
namespace app { namespace Android { namespace com { namespace fuse { namespace Native { struct CameraTask__uType; CameraTask__uType* CameraTask__typeof(); } } } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_animation_Animator__uType; Android_android_animation_Animator__uType* Android_android_animation_Animator__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_animation_TimeAnimatorDLRTimeListener__uType; Android_android_animation_TimeAnimatorDLRTimeListener__uType* Android_android_animation_TimeAnimatorDLRTimeListener__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_content_Context__uType; Android_android_content_Context__uType* Android_android_content_Context__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_graphics_drawable_Drawable__uType; Android_android_graphics_drawable_Drawable__uType* Android_android_graphics_drawable_Drawable__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_graphics_drawable_shapes_Shape__uType; Android_android_graphics_drawable_shapes_Shape__uType* Android_android_graphics_drawable_shapes_Shape__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_net_Uri__uType; Android_android_net_Uri__uType* Android_android_net_Uri__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_os_IBinder__uType; Android_android_os_IBinder__uType* Android_android_os_IBinder__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_os_IBinderDLRDeathRecipient__uType; Android_android_os_IBinderDLRDeathRecipient__uType* Android_android_os_IBinderDLRDeathRecipient__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_os_IInterface__uType; Android_android_os_IInterface__uType* Android_android_os_IInterface__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_os_Vibrator__uType; Android_android_os_Vibrator__uType* Android_android_os_Vibrator__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_text_Editable__uType; Android_android_text_Editable__uType* Android_android_text_Editable__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_text_GetChars__uType; Android_android_text_GetChars__uType* Android_android_text_GetChars__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_text_InputFilter__uType; Android_android_text_InputFilter__uType* Android_android_text_InputFilter__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_text_Layout__uType; Android_android_text_Layout__uType* Android_android_text_Layout__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_text_Spannable__uType; Android_android_text_Spannable__uType* Android_android_text_Spannable__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_text_Spanned__uType; Android_android_text_Spanned__uType* Android_android_text_Spanned__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_text_TextWatcher__uType; Android_android_text_TextWatcher__uType* Android_android_text_TextWatcher__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_util_AttributeSet__uType; Android_android_util_AttributeSet__uType* Android_android_util_AttributeSet__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_view_ActionMode__uType; Android_android_view_ActionMode__uType* Android_android_view_ActionMode__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_view_ActionProvider__uType; Android_android_view_ActionProvider__uType* Android_android_view_ActionProvider__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_view_ChoreographerDLRFrameCallback__uType; Android_android_view_ChoreographerDLRFrameCallback__uType* Android_android_view_ChoreographerDLRFrameCallback__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_view_ContextMenuDLRContextMenuInfo__uType; Android_android_view_ContextMenuDLRContextMenuInfo__uType* Android_android_view_ContextMenuDLRContextMenuInfo__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_view_Menu__uType; Android_android_view_Menu__uType* Android_android_view_Menu__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_view_MenuItem__uType; Android_android_view_MenuItem__uType* Android_android_view_MenuItem__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_view_MenuItemDLROnActionExpandListener__uType; Android_android_view_MenuItemDLROnActionExpandListener__uType* Android_android_view_MenuItemDLROnActionExpandListener__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_view_MenuItemDLROnMenuItemClickListener__uType; Android_android_view_MenuItemDLROnMenuItemClickListener__uType* Android_android_view_MenuItemDLROnMenuItemClickListener__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_view_SubMenu__uType; Android_android_view_SubMenu__uType* Android_android_view_SubMenu__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_view_SurfaceHolder__uType; Android_android_view_SurfaceHolder__uType* Android_android_view_SurfaceHolder__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_view_SurfaceHolderDLRCallback__uType; Android_android_view_SurfaceHolderDLRCallback__uType* Android_android_view_SurfaceHolderDLRCallback__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_view_SurfaceHolderDLRCallback2__uType; Android_android_view_SurfaceHolderDLRCallback2__uType* Android_android_view_SurfaceHolderDLRCallback2__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_view_TextureViewDLRSurfaceTextureListener__uType; Android_android_view_TextureViewDLRSurfaceTextureListener__uType* Android_android_view_TextureViewDLRSurfaceTextureListener__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_view_ViewDLROnFocusChangeListener__uType; Android_android_view_ViewDLROnFocusChangeListener__uType* Android_android_view_ViewDLROnFocusChangeListener__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_view_ViewDLROnTouchListener__uType; Android_android_view_ViewDLROnTouchListener__uType* Android_android_view_ViewDLROnTouchListener__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_view_ViewGroup__uType; Android_android_view_ViewGroup__uType* Android_android_view_ViewGroup__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_widget_AbsSeekBar__uType; Android_android_widget_AbsSeekBar__uType* Android_android_widget_AbsSeekBar__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_widget_CompoundButton__uType; Android_android_widget_CompoundButton__uType* Android_android_widget_CompoundButton__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_widget_CompoundButtonDLROnCheckedChangeListener__uType; Android_android_widget_CompoundButtonDLROnCheckedChangeListener__uType* Android_android_widget_CompoundButtonDLROnCheckedChangeListener__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_widget_SeekBarDLROnSeekBarChangeListener__uType; Android_android_widget_SeekBarDLROnSeekBarChangeListener__uType* Android_android_widget_SeekBarDLROnSeekBarChangeListener__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_android_widget_TextViewDLROnEditorActionListener__uType; Android_android_widget_TextViewDLROnEditorActionListener__uType* Android_android_widget_TextViewDLROnEditorActionListener__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_java_io_InputStream__uType; Android_java_io_InputStream__uType* Android_java_io_InputStream__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_java_lang_CharSequence__uType; Android_java_lang_CharSequence__uType* Android_java_lang_CharSequence__typeof(); } } }
namespace app { namespace Android { namespace Fallbacks { struct Android_java_lang_Runnable__uType; Android_java_lang_Runnable__uType* Android_java_lang_Runnable__typeof(); } } }
namespace app { namespace Android { namespace java { namespace io { struct FileDescriptor__uType; FileDescriptor__uType* FileDescriptor__typeof(); } } } }
namespace app { namespace Android { namespace java { namespace io { struct InputStream__uType; InputStream__uType* InputStream__typeof(); } } } }
namespace app { namespace Android { namespace java { namespace lang { namespace reflect { struct AccessibleObject__uType; AccessibleObject__uType* AccessibleObject__typeof(); } } } } }
namespace app { namespace Android { namespace java { namespace lang { namespace reflect { struct Field__uType; Field__uType* Field__typeof(); } } } } }
namespace app { namespace Android { namespace java { namespace lang { struct Class__uType; Class__uType* Class__typeof(); } } } }
namespace app { namespace Android { namespace java { namespace lang { struct Object__uType; Object__uType* Object__typeof(); } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String__uType; String__uType* String__typeof(); } } } }
namespace app { namespace Android { namespace java { namespace lang { struct System__uType; System__uType* System__typeof(); } } } }
namespace app { namespace Android { namespace java { namespace lang { struct Thread__uType; Thread__uType* Thread__typeof(); } } } }
namespace app { namespace Android { namespace java { namespace net { struct URL__uType; URL__uType* URL__typeof(); } } } }
namespace app { namespace Android { namespace Runtime { struct BooleanArray__uType; BooleanArray__uType* BooleanArray__typeof(); } } }
namespace app { namespace Android { namespace Runtime { struct ByteArray__uType; ByteArray__uType* ByteArray__typeof(); } } }
namespace app { namespace Android { namespace Runtime { struct CharArray__uType; CharArray__uType* CharArray__typeof(); } } }
namespace app { namespace Android { namespace Runtime { struct DoubleArray__uType; DoubleArray__uType* DoubleArray__typeof(); } } }
namespace app { namespace Android { namespace Runtime { struct FloatArray__uType; FloatArray__uType* FloatArray__typeof(); } } }
namespace app { namespace Android { namespace Runtime { struct IntArray__uType; IntArray__uType* IntArray__typeof(); } } }
namespace app { namespace Android { namespace Runtime { struct LongArray__uType; LongArray__uType* LongArray__typeof(); } } }
namespace app { namespace Android { namespace Runtime { struct NativeActivityHelper__uType; NativeActivityHelper__uType* NativeActivityHelper__typeof(); } } }
namespace app { namespace Android { namespace Runtime { struct ObjectArray__Android_android_content_Intent__uType; ObjectArray__Android_android_content_Intent__uType* ObjectArray__Android_android_content_Intent__typeof(); } } }
namespace app { namespace Android { namespace Runtime { struct ObjectArray__Android_android_graphics_drawable_Drawable__uType; ObjectArray__Android_android_graphics_drawable_Drawable__uType* ObjectArray__Android_android_graphics_drawable_Drawable__typeof(); } } }
namespace app { namespace Android { namespace Runtime { struct ObjectArray__Android_android_text_InputFilter__uType; ObjectArray__Android_android_text_InputFilter__uType* ObjectArray__Android_android_text_InputFilter__typeof(); } } }
namespace app { namespace Android { namespace Runtime { struct ObjectArray__Android_android_view_MenuItem__uType; ObjectArray__Android_android_view_MenuItem__uType* ObjectArray__Android_android_view_MenuItem__typeof(); } } }
namespace app { namespace Android { namespace Runtime { struct ObjectArray__Android_java_lang_Object__uType; ObjectArray__Android_java_lang_Object__uType* ObjectArray__Android_java_lang_Object__typeof(); } } }
namespace app { namespace Android { namespace Runtime { struct ObjectArray__Android_java_lang_String__uType; ObjectArray__Android_java_lang_String__uType* ObjectArray__Android_java_lang_String__typeof(); } } }
namespace app { namespace Android { namespace Runtime { struct ObjectArrayAUX__uType; ObjectArrayAUX__uType* ObjectArrayAUX__typeof(); } } }
namespace app { namespace Android { namespace Runtime { struct RunnableAction__uType; RunnableAction__uType* RunnableAction__typeof(); } } }
namespace app { namespace Android { namespace Runtime { struct ShortArray__uType; ShortArray__uType* ShortArray__typeof(); } } }
namespace app { namespace Android { namespace Runtime { struct UnoHelper__uType; UnoHelper__uType* UnoHelper__typeof(); } } }
namespace app { namespace Android { struct Bootstrapper__uType; Bootstrapper__uType* Bootstrapper__typeof(); } }
namespace app { namespace Experimental { namespace Audio { struct Channel__uType; Channel__uType* Channel__typeof(); } } }
namespace app { namespace Experimental { namespace Audio { struct ChannelHandle__uType; ChannelHandle__uType* ChannelHandle__typeof(); } } }
namespace app { namespace Experimental { namespace Audio { struct ChannelImpl__uType; ChannelImpl__uType* ChannelImpl__typeof(); } } }
namespace app { namespace Experimental { namespace Audio { struct Player__uType; Player__uType* Player__typeof(); } } }
namespace app { namespace Experimental { namespace Audio { struct PlayerHandle__uType; PlayerHandle__uType* PlayerHandle__typeof(); } } }
namespace app { namespace Experimental { namespace Audio { struct PlayerImpl__uType; PlayerImpl__uType* PlayerImpl__typeof(); } } }
namespace app { namespace Experimental { namespace Audio { struct Sound__uType; Sound__uType* Sound__typeof(); } } }
namespace app { namespace Experimental { namespace Audio { struct SoundHandle__uType; SoundHandle__uType* SoundHandle__typeof(); } } }
namespace app { namespace Experimental { namespace Audio { struct SoundImpl__uType; SoundImpl__uType* SoundImpl__typeof(); } } }
namespace app { namespace Experimental { namespace Cache { struct ProxyStream__uType; ProxyStream__uType* ProxyStream__typeof(); } } }
namespace app { namespace Experimental { namespace Http { namespace Internal { struct DateUtil__uType; DateUtil__uType* DateUtil__typeof(); } } } }
namespace app { namespace Experimental { namespace Http { struct BinaryLoader__uType; BinaryLoader__uType* BinaryLoader__typeof(); } } }
namespace app { namespace Experimental { namespace Http { struct HttpLoader__uType; HttpLoader__uType* HttpLoader__typeof(); } } }
namespace app { namespace Experimental { namespace Http { struct HttpResponseHeader__uType; HttpResponseHeader__uType* HttpResponseHeader__typeof(); } } }
namespace app { namespace Experimental { namespace Http { struct Loader__uType; Loader__uType* Loader__typeof(); } } }
namespace app { namespace Experimental { namespace Http { struct LoaderConst__uType; LoaderConst__uType* LoaderConst__typeof(); } } }
namespace app { namespace Experimental { namespace Http { struct TextLoader__uType; TextLoader__uType* TextLoader__typeof(); } } }
namespace app { namespace Experimental { namespace Physics { struct BasicBoundedRegion2D__uType; BasicBoundedRegion2D__uType* BasicBoundedRegion2D__typeof(); } } }
namespace app { namespace Experimental { namespace Physics { struct ElasticForce__float2__uType; ElasticForce__float2__uType* ElasticForce__float2__typeof(); } } }
namespace app { namespace Experimental { namespace Physics { struct Friction__float2__uType; Friction__float2__uType* Friction__float2__typeof(); } } }
namespace app { namespace Experimental { namespace Physics { struct PointerVelocity__float__uType; PointerVelocity__float__uType* PointerVelocity__float__typeof(); } } }
namespace app { namespace Experimental { namespace Physics { struct PointerVelocity__float2__uType; PointerVelocity__float2__uType* PointerVelocity__float2__typeof(); } } }
namespace app { namespace Experimental { namespace Physics { struct SmoothSnap__float__uType; SmoothSnap__float__uType* SmoothSnap__float__typeof(); } } }
namespace app { namespace Experimental { namespace Physics { struct SmoothSnap__float2__uType; SmoothSnap__float2__uType* SmoothSnap__float2__typeof(); } } }
namespace app { namespace Experimental { namespace TextureLoader { struct Callback__uType; Callback__uType* Callback__typeof(); } } }
namespace app { namespace Experimental { namespace TextureLoader { struct InvalidContentTypeException__uType; InvalidContentTypeException__uType* InvalidContentTypeException__typeof(); } } }
namespace app { namespace Experimental { namespace TextureLoader { struct TextureLoader__uType; TextureLoader__uType* TextureLoader__typeof(); } } }
namespace app { namespace Experimental { namespace TextureLoader { struct TextureLoaderImpl__uType; TextureLoaderImpl__uType* TextureLoaderImpl__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct AndroidSeekBar__uType; AndroidSeekBar__uType* AndroidSeekBar__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct BindingView__uType; BindingView__uType* BindingView__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct BitmapFactory__uType; BitmapFactory__uType* BitmapFactory__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct Blitter__uType; Blitter__uType* Blitter__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct Button__uType; Button__uType* Button__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct CheckBox__uType; CheckBox__uType* CheckBox__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct Circle__uType; Circle__uType* Circle__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct CompoundButton__uType; CompoundButton__uType* CompoundButton__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct CompoundButton_Listener__uType; CompoundButton_Listener__uType* CompoundButton_Listener__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct ContentControl__uType; ContentControl__uType* ContentControl__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct ControlView__Fuse_Controls_Button__uType; ControlView__Fuse_Controls_Button__uType* ControlView__Fuse_Controls_Button__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct ControlView__Fuse_Controls_Circle__uType; ControlView__Fuse_Controls_Circle__uType* ControlView__Fuse_Controls_Circle__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct ControlView__Fuse_Controls_Image__uType; ControlView__Fuse_Controls_Image__uType* ControlView__Fuse_Controls_Image__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct ControlView__Fuse_Controls_MapView__uType; ControlView__Fuse_Controls_MapView__uType* ControlView__Fuse_Controls_MapView__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct ControlView__Fuse_Controls_Rectangle__uType; ControlView__Fuse_Controls_Rectangle__uType* ControlView__Fuse_Controls_Rectangle__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct ControlView__Fuse_Controls_Slider__uType; ControlView__Fuse_Controls_Slider__uType* ControlView__Fuse_Controls_Slider__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct ControlView__Fuse_Controls_TextControl__uType; ControlView__Fuse_Controls_TextControl__uType* ControlView__Fuse_Controls_TextControl__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct ControlView__Fuse_Controls_TextInput__uType; ControlView__Fuse_Controls_TextInput__uType* ControlView__Fuse_Controls_TextInput__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct ControlView__Fuse_Controls_ToggleControl__uType; ControlView__Fuse_Controls_ToggleControl__uType* ControlView__Fuse_Controls_ToggleControl__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct ControlView__Fuse_Controls_WebView__uType; ControlView__Fuse_Controls_WebView__uType* ControlView__Fuse_Controls_WebView__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct EditorActionArgs__uType; EditorActionArgs__uType* EditorActionArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct EditorActionListener__uType; EditorActionListener__uType* EditorActionListener__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct FocusChangedListener__uType; FocusChangedListener__uType* FocusChangedListener__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct FocusManager__uType; FocusManager__uType* FocusManager__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct GLSurfaceTextureListener__uType; GLSurfaceTextureListener__uType* GLSurfaceTextureListener__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct GraphicsView__uType; GraphicsView__uType* GraphicsView__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct Helpers__uType; Helpers__uType* Helpers__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct HorizontalScrollView__uType; HorizontalScrollView__uType* HorizontalScrollView__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct Image__uType; Image__uType* Image__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct Image_ImageLoader__uType; Image_ImageLoader__uType* Image_ImageLoader__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct Image_ImageLoader_BitmapLoader__uType; Image_ImageLoader_BitmapLoader__uType* Image_ImageLoader_BitmapLoader__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct InputDispatch__uType; InputDispatch__uType* InputDispatch__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct InputDispatch_TouchListener__uType; InputDispatch_TouchListener__uType* InputDispatch_TouchListener__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct LeafView__uType; LeafView__uType* LeafView__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct MapView__uType; MapView__uType* MapView__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct NativeStyle__uType; NativeStyle__uType* NativeStyle__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct NativeStyle_Template__uType; NativeStyle_Template__uType* NativeStyle_Template__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct NativeStyle_Template_Template1__uType; NativeStyle_Template_Template1__uType* NativeStyle_Template_Template1__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct NativeStyle_Template_Template2__uType; NativeStyle_Template_Template2__uType* NativeStyle_Template_Template2__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct NativeStyle_Template_Template3__uType; NativeStyle_Template_Template3__uType* NativeStyle_Template_Template3__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct NativeStyle_Template_Template3_Factory__uType; NativeStyle_Template_Template3_Factory__uType* NativeStyle_Template_Template3_Factory__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct NativeStyle_Template_Template3_Factory1__uType; NativeStyle_Template_Template3_Factory1__uType* NativeStyle_Template_Template3_Factory1__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct NativeTemplate__uType; NativeTemplate__uType* NativeTemplate__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct NativeView__uType; NativeView__uType* NativeView__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct NativeViewHost__uType; NativeViewHost__uType* NativeViewHost__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct ParentView__Fuse_Controls_ContentControl__uType; ParentView__Fuse_Controls_ContentControl__uType* ParentView__Fuse_Controls_ContentControl__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct ParentView__Fuse_Controls_GraphicsView__uType; ParentView__Fuse_Controls_GraphicsView__uType* ParentView__Fuse_Controls_GraphicsView__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct ParentView__Fuse_Controls_NativeViewHost__uType; ParentView__Fuse_Controls_NativeViewHost__uType* ParentView__Fuse_Controls_NativeViewHost__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct ParentView__Fuse_Controls_Panel__uType; ParentView__Fuse_Controls_Panel__uType* ParentView__Fuse_Controls_Panel__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct ParentView__Fuse_Controls_ScrollView__uType; ParentView__Fuse_Controls_ScrollView__uType* ParentView__Fuse_Controls_ScrollView__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct PlainTextEdit__uType; PlainTextEdit__uType* PlainTextEdit__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct ProgressChangedListener__uType; ProgressChangedListener__uType* ProgressChangedListener__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct RadioButton__uType; RadioButton__uType* RadioButton__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct Rectangle__uType; Rectangle__uType* Rectangle__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct RelativeLayout__uType; RelativeLayout__uType* RelativeLayout__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct RootView__uType; RootView__uType* RootView__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct RootViewContainer__uType; RootViewContainer__uType* RootViewContainer__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct ScrollView__uType; ScrollView__uType* ScrollView__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct SeekBar__uType; SeekBar__uType* SeekBar__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct Shape__Fuse_Controls_Circle__uType; Shape__Fuse_Controls_Circle__uType* Shape__Fuse_Controls_Circle__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct Shape__Fuse_Controls_Rectangle__uType; Shape__Fuse_Controls_Rectangle__uType* Shape__Fuse_Controls_Rectangle__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct SurfaceCallback__uType; SurfaceCallback__uType* SurfaceCallback__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct SurfaceView__uType; SurfaceView__uType* SurfaceView__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct Switch__uType; Switch__uType* Switch__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct TextChangedListener__uType; TextChangedListener__uType* TextChangedListener__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct TextEdit__uType; TextEdit__uType* TextEdit__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct TextRenderer__uType; TextRenderer__uType* TextRenderer__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct TextureView__uType; TextureView__uType* TextureView__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct TextView__uType; TextView__uType* TextView__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct TextViewBase__Fuse_Controls_TextControl__uType; TextViewBase__Fuse_Controls_TextControl__uType* TextViewBase__Fuse_Controls_TextControl__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct TextViewBase__Fuse_Controls_TextInput__uType; TextViewBase__Fuse_Controls_TextInput__uType* TextViewBase__Fuse_Controls_TextInput__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct ToggleButton__uType; ToggleButton__uType* ToggleButton__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct TypefaceCache__uType; TypefaceCache__uType* TypefaceCache__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct VerticalScrollView__uType; VerticalScrollView__uType* VerticalScrollView__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct View__uType; View__uType* View__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct WebChromeClient__uType; WebChromeClient__uType* WebChromeClient__typeof(); } } }
namespace app { namespace Fuse { namespace Android { struct WebView__uType; WebView__uType* WebView__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct Animator__uType; Animator__uType* Animator__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct AnimatorState__uType; AnimatorState__uType* AnimatorState__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct AverageMasterProperty__bool__uType; AverageMasterProperty__bool__uType* AverageMasterProperty__bool__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct AverageMasterProperty__float__uType; AverageMasterProperty__float__uType* AverageMasterProperty__float__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct AverageMasterProperty__float4__uType; AverageMasterProperty__float4__uType* AverageMasterProperty__float4__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct AverageMasterProperty__Fuse_Elements_Visibility__uType; AverageMasterProperty__Fuse_Elements_Visibility__uType* AverageMasterProperty__Fuse_Elements_Visibility__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct AverageMasterTransform__uType; AverageMasterTransform__uType* AverageMasterTransform__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct AverageMixer__uType; AverageMixer__uType* AverageMixer__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct Change__bool__uType; Change__bool__uType* Change__bool__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct Change__float__uType; Change__float__uType* Change__float__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct Change__float4__uType; Change__float4__uType* Change__float4__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct Change__Fuse_Elements_Visibility__uType; Change__Fuse_Elements_Visibility__uType* Change__Fuse_Elements_Visibility__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct ContinuousTrackChangeState__bool__uType; ContinuousTrackChangeState__bool__uType* ContinuousTrackChangeState__bool__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct ContinuousTrackChangeState__float__uType; ContinuousTrackChangeState__float__uType* ContinuousTrackChangeState__float__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct ContinuousTrackChangeState__float4__uType; ContinuousTrackChangeState__float4__uType* ContinuousTrackChangeState__float4__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct ContinuousTrackChangeState__Fuse_Elements_Visibility__uType; ContinuousTrackChangeState__Fuse_Elements_Visibility__uType* ContinuousTrackChangeState__Fuse_Elements_Visibility__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__bool__uType; Converter__bool__uType* Converter__bool__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__double__uType; Converter__double__uType* Converter__double__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__float__uType; Converter__float__uType* Converter__float__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__float2__uType; Converter__float2__uType* Converter__float2__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__float3__uType; Converter__float3__uType* Converter__float3__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__float4__uType; Converter__float4__uType* Converter__float4__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__Fuse_Elements_Visibility__uType; Converter__Fuse_Elements_Visibility__uType* Converter__Fuse_Elements_Visibility__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct ConverterDouble__uType; ConverterDouble__uType* ConverterDouble__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct ConverterFloat__uType; ConverterFloat__uType* ConverterFloat__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct ConverterFloat2__uType; ConverterFloat2__uType* ConverterFloat2__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct ConverterFloat3__uType; ConverterFloat3__uType* ConverterFloat3__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct ConverterFloat4__uType; ConverterFloat4__uType* ConverterFloat4__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams__uType; CreateStateParams__uType* CreateStateParams__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct DiscreteMasterProperty__bool__uType; DiscreteMasterProperty__bool__uType* DiscreteMasterProperty__bool__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct DiscreteMasterProperty__float__uType; DiscreteMasterProperty__float__uType* DiscreteMasterProperty__float__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct DiscreteMasterProperty__float4__uType; DiscreteMasterProperty__float4__uType* DiscreteMasterProperty__float4__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct DiscreteMasterProperty__Fuse_Elements_Visibility__uType; DiscreteMasterProperty__Fuse_Elements_Visibility__uType* DiscreteMasterProperty__Fuse_Elements_Visibility__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct DiscreteMasterTransform__uType; DiscreteMasterTransform__uType* DiscreteMasterTransform__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct DiscreteMixer__uType; DiscreteMixer__uType* DiscreteMixer__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct DiscreteSingleTrack__uType; DiscreteSingleTrack__uType* DiscreteSingleTrack__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct DiscreteTrackChangeState__bool__uType; DiscreteTrackChangeState__bool__uType* DiscreteTrackChangeState__bool__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct DiscreteTrackChangeState__float__uType; DiscreteTrackChangeState__float__uType* DiscreteTrackChangeState__float__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct DiscreteTrackChangeState__float4__uType; DiscreteTrackChangeState__float4__uType* DiscreteTrackChangeState__float4__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct DiscreteTrackChangeState__Fuse_Elements_Visibility__uType; DiscreteTrackChangeState__Fuse_Elements_Visibility__uType* DiscreteTrackChangeState__Fuse_Elements_Visibility__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct EasingFunctions__uType; EasingFunctions__uType* EasingFunctions__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct EasingTrack__uType; EasingTrack__uType* EasingTrack__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct FastMatrixTransform__uType; FastMatrixTransform__uType* FastMatrixTransform__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct MasterBase__bool__uType; MasterBase__bool__uType* MasterBase__bool__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct MasterBase__float__uType; MasterBase__float__uType* MasterBase__float__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct MasterBase__float4__uType; MasterBase__float4__uType* MasterBase__float4__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Fuse_Elements_Visibility__uType; MasterBase__Fuse_Elements_Visibility__uType* MasterBase__Fuse_Elements_Visibility__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Fuse_Transform__uType; MasterBase__Fuse_Transform__uType* MasterBase__Fuse_Transform__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__bool__uType; MasterBase1_GFWResult__bool__uType* MasterBase1_GFWResult__bool__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__float__uType; MasterBase1_GFWResult__float__uType* MasterBase1_GFWResult__float__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__float4__uType; MasterBase1_GFWResult__float4__uType* MasterBase1_GFWResult__float4__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__Fuse_Elements_Visibility__uType; MasterBase1_GFWResult__Fuse_Elements_Visibility__uType* MasterBase1_GFWResult__Fuse_Elements_Visibility__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct MasterBase1_GFWResult__Fuse_Transform__uType; MasterBase1_GFWResult__Fuse_Transform__uType* MasterBase1_GFWResult__Fuse_Transform__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__bool__uType; MasterProperty__bool__uType* MasterProperty__bool__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__float__uType; MasterProperty__float__uType* MasterProperty__float__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__float4__uType; MasterProperty__float4__uType* MasterProperty__float4__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct MasterProperty__Fuse_Elements_Visibility__uType; MasterProperty__Fuse_Elements_Visibility__uType* MasterProperty__Fuse_Elements_Visibility__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct MasterTransform__uType; MasterTransform__uType* MasterTransform__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct Mixer__uType; Mixer__uType* Mixer__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct MixerBase__uType; MixerBase__uType* MixerBase__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__bool__uType; MixerHandle__bool__uType* MixerHandle__bool__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__float__uType; MixerHandle__float__uType* MixerHandle__float__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__float4__uType; MixerHandle__float4__uType* MixerHandle__float4__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Elements_Visibility__uType; MixerHandle__Fuse_Elements_Visibility__uType* MixerHandle__Fuse_Elements_Visibility__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct MixerHandle__Fuse_Transform__uType; MixerHandle__Fuse_Transform__uType* MixerHandle__Fuse_Transform__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct Move__uType; Move__uType* Move__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct Nothing__uType; Nothing__uType* Nothing__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct NothingAnimatorState__uType; NothingAnimatorState__uType* NothingAnimatorState__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct OpenAnimator__uType; OpenAnimator__uType* OpenAnimator__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct OpenAnimatorState__uType; OpenAnimatorState__uType* OpenAnimatorState__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct Player__uType; Player__uType* Player__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct PlayerPart__uType; PlayerPart__uType* PlayerPart__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct Resize__uType; Resize__uType* Resize__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct ResizeAnimatorState__uType; ResizeAnimatorState__uType* ResizeAnimatorState__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct Rotate__uType; Rotate__uType* Rotate__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct Scale__uType; Scale__uType* Scale__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct Skew__uType; Skew__uType* Skew__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct Spin__uType; Spin__uType* Spin__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct SpinState__uType; SpinState__uType* SpinState__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct TrackAnimator__uType; TrackAnimator__uType* TrackAnimator__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct TrackAnimatorState__uType; TrackAnimatorState__uType* TrackAnimatorState__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct TransformAnimator__Fuse_Rotation__uType; TransformAnimator__Fuse_Rotation__uType* TransformAnimator__Fuse_Rotation__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct TransformAnimator__Fuse_Scaling__uType; TransformAnimator__Fuse_Scaling__uType* TransformAnimator__Fuse_Scaling__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct TransformAnimator__Fuse_Shear__uType; TransformAnimator__Fuse_Shear__uType* TransformAnimator__Fuse_Shear__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct TransformAnimator__Fuse_Translation__uType; TransformAnimator__Fuse_Translation__uType* TransformAnimator__Fuse_Translation__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct TransformAnimatorState__Fuse_Rotation__uType; TransformAnimatorState__Fuse_Rotation__uType* TransformAnimatorState__Fuse_Rotation__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct TransformAnimatorState__Fuse_Scaling__uType; TransformAnimatorState__Fuse_Scaling__uType* TransformAnimatorState__Fuse_Scaling__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct TransformAnimatorState__Fuse_Shear__uType; TransformAnimatorState__Fuse_Shear__uType* TransformAnimatorState__Fuse_Shear__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct TransformAnimatorState__Fuse_Translation__uType; TransformAnimatorState__Fuse_Translation__uType* TransformAnimatorState__Fuse_Translation__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct TriggerAnimation__uType; TriggerAnimation__uType* TriggerAnimation__typeof(); } } }
namespace app { namespace Fuse { namespace Animations { struct TriggerAnimationState__uType; TriggerAnimationState__uType* TriggerAnimationState__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle__uType; BasicStyle__uType* BasicStyle__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Animations_Change___float4_Value_Property__uType; BasicStyle_Fuse_Animations_Change___float4_Value_Property__uType* BasicStyle_Fuse_Animations_Change___float4_Value_Property__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Controls_Button_string_Text_Property__uType; BasicStyle_Fuse_Controls_Button_string_Text_Property__uType* BasicStyle_Fuse_Controls_Button_string_Text_Property__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property__uType; BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property__uType* BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Controls_TextControl_string_Value_Property__uType; BasicStyle_Fuse_Controls_TextControl_string_Value_Property__uType* BasicStyle_Fuse_Controls_TextControl_string_Value_Property__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__uType; BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__uType* BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__uType; BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__uType* BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__uType; BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__uType* BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Elements_Element_float_Height_Property__uType; BasicStyle_Fuse_Elements_Element_float_Height_Property__uType* BasicStyle_Fuse_Elements_Element_float_Height_Property__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Elements_Element_float_Opacity_Property__uType; BasicStyle_Fuse_Elements_Element_float_Opacity_Property__uType* BasicStyle_Fuse_Elements_Element_float_Opacity_Property__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Elements_Element_float_Width_Property__uType; BasicStyle_Fuse_Elements_Element_float_Width_Property__uType* BasicStyle_Fuse_Elements_Element_float_Width_Property__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property__uType; BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property__uType* BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Translation_float_X_Property__uType; BasicStyle_Fuse_Translation_float_X_Property__uType* BasicStyle_Fuse_Translation_float_X_Property__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property__uType; BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property__uType* BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Template__uType; BasicStyle_Template__uType* BasicStyle_Template__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Template_Template1__uType; BasicStyle_Template_Template1__uType* BasicStyle_Template_Template1__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Template1__uType; BasicStyle_Template1__uType* BasicStyle_Template1__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Template2__uType; BasicStyle_Template2__uType* BasicStyle_Template2__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Template3__uType; BasicStyle_Template3__uType* BasicStyle_Template3__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Template4__uType; BasicStyle_Template4__uType* BasicStyle_Template4__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicStyle_Template5__uType; BasicStyle_Template5__uType* BasicStyle_Template5__typeof(); } } }
namespace app { namespace Fuse { namespace BasicTheme { struct BasicTheme__uType; BasicTheme__uType* BasicTheme__typeof(); } } }
namespace app { namespace Fuse { namespace Camera { struct AndroidCameraImpl__uType; AndroidCameraImpl__uType* AndroidCameraImpl__typeof(); } } }
namespace app { namespace Fuse { namespace Camera { struct AndroidCameraImpl_DispatchTakePicture__uType; AndroidCameraImpl_DispatchTakePicture__uType* AndroidCameraImpl_DispatchTakePicture__typeof(); } } }
namespace app { namespace Fuse { namespace Camera { struct AndroidCameraImpl_TakePictureTask__uType; AndroidCameraImpl_TakePictureTask__uType* AndroidCameraImpl_TakePictureTask__typeof(); } } }
namespace app { namespace Fuse { namespace Camera { struct Camera__uType; Camera__uType* Camera__typeof(); } } }
namespace app { namespace Fuse { namespace Camera { struct PictureResult__uType; PictureResult__uType* PictureResult__typeof(); } } }
namespace app { namespace Fuse { namespace Camera { struct TakePictureOptions__uType; TakePictureOptions__uType* TakePictureOptions__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct CircleVisual__uType; CircleVisual__uType* CircleVisual__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct ControlVisual__Fuse_Controls_Circle__uType; ControlVisual__Fuse_Controls_Circle__uType* ControlVisual__Fuse_Controls_Circle__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct ControlVisual__Fuse_Controls_Ellipse__uType; ControlVisual__Fuse_Controls_Ellipse__uType* ControlVisual__Fuse_Controls_Ellipse__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct ControlVisual__Fuse_Controls_Image__uType; ControlVisual__Fuse_Controls_Image__uType* ControlVisual__Fuse_Controls_Image__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct ControlVisual__Fuse_Controls_Path__uType; ControlVisual__Fuse_Controls_Path__uType* ControlVisual__Fuse_Controls_Path__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct ControlVisual__Fuse_Controls_Rectangle__uType; ControlVisual__Fuse_Controls_Rectangle__uType* ControlVisual__Fuse_Controls_Rectangle__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct ControlVisual__Fuse_Controls_RegularPolygon__uType; ControlVisual__Fuse_Controls_RegularPolygon__uType* ControlVisual__Fuse_Controls_RegularPolygon__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct ControlVisual__Fuse_Controls_Star__uType; ControlVisual__Fuse_Controls_Star__uType* ControlVisual__Fuse_Controls_Star__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct ControlVisual__Fuse_Controls_TextControl__uType; ControlVisual__Fuse_Controls_TextControl__uType* ControlVisual__Fuse_Controls_TextControl__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct ControlVisual__Fuse_Controls_TextInput__uType; ControlVisual__Fuse_Controls_TextInput__uType* ControlVisual__Fuse_Controls_TextInput__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct DefaultTextVisual__uType; DefaultTextVisual__uType* DefaultTextVisual__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct EllipseVisual__uType; EllipseVisual__uType* EllipseVisual__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle__uType; GraphicsStyle__uType* GraphicsStyle__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property__uType; GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property__uType* GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property__uType; GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property__uType* GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property__uType; GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property__uType* GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property__uType; GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property__uType* GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle_Template__uType; GraphicsStyle_Template__uType* GraphicsStyle_Template__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle_Template1__uType; GraphicsStyle_Template1__uType* GraphicsStyle_Template1__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle_Template2__uType; GraphicsStyle_Template2__uType* GraphicsStyle_Template2__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle_Template3__uType; GraphicsStyle_Template3__uType* GraphicsStyle_Template3__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle_Template4__uType; GraphicsStyle_Template4__uType* GraphicsStyle_Template4__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle_Template5__uType; GraphicsStyle_Template5__uType* GraphicsStyle_Template5__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle_Template6__uType; GraphicsStyle_Template6__uType* GraphicsStyle_Template6__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle_Template7__uType; GraphicsStyle_Template7__uType* GraphicsStyle_Template7__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct GraphicsStyle_Template8__uType; GraphicsStyle_Template8__uType* GraphicsStyle_Template8__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct ImageElementDraw__uType; ImageElementDraw__uType* ImageElementDraw__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct ImageVisual__uType; ImageVisual__uType* ImageVisual__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct LinearSliderBehavior__uType; LinearSliderBehavior__uType* LinearSliderBehavior__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct PathShapeVisual__Fuse_Controls_Ellipse__uType; PathShapeVisual__Fuse_Controls_Ellipse__uType* PathShapeVisual__Fuse_Controls_Ellipse__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct PathShapeVisual__Fuse_Controls_Path__uType; PathShapeVisual__Fuse_Controls_Path__uType* PathShapeVisual__Fuse_Controls_Path__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct PathShapeVisual__Fuse_Controls_RegularPolygon__uType; PathShapeVisual__Fuse_Controls_RegularPolygon__uType* PathShapeVisual__Fuse_Controls_RegularPolygon__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct PathShapeVisual__Fuse_Controls_Star__uType; PathShapeVisual__Fuse_Controls_Star__uType* PathShapeVisual__Fuse_Controls_Star__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct PathVisual__uType; PathVisual__uType* PathVisual__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct RectangleVisual__uType; RectangleVisual__uType* RectangleVisual__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct RegularPolygonVisual__uType; RegularPolygonVisual__uType* RegularPolygonVisual__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct ShapeVisual__Fuse_Controls_Circle__uType; ShapeVisual__Fuse_Controls_Circle__uType* ShapeVisual__Fuse_Controls_Circle__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct ShapeVisual__Fuse_Controls_Ellipse__uType; ShapeVisual__Fuse_Controls_Ellipse__uType* ShapeVisual__Fuse_Controls_Ellipse__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct ShapeVisual__Fuse_Controls_Path__uType; ShapeVisual__Fuse_Controls_Path__uType* ShapeVisual__Fuse_Controls_Path__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct ShapeVisual__Fuse_Controls_Rectangle__uType; ShapeVisual__Fuse_Controls_Rectangle__uType* ShapeVisual__Fuse_Controls_Rectangle__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct ShapeVisual__Fuse_Controls_RegularPolygon__uType; ShapeVisual__Fuse_Controls_RegularPolygon__uType* ShapeVisual__Fuse_Controls_RegularPolygon__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct ShapeVisual__Fuse_Controls_Star__uType; ShapeVisual__Fuse_Controls_Star__uType* ShapeVisual__Fuse_Controls_Star__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct StarVisual__uType; StarVisual__uType* StarVisual__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct TextVisual__uType; TextVisual__uType* TextVisual__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Graphics { struct Visual__uType; Visual__uType* Visual__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct DefaultTextRenderer__uType; DefaultTextRenderer__uType* DefaultTextRenderer__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct DefaultTextRenderer_FontKey__uType; DefaultTextRenderer_FontKey__uType* DefaultTextRenderer_FontKey__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct ProperTextTransform__uType; ProperTextTransform__uType* ProperTextTransform__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WordWrapInfo__uType; WordWrapInfo__uType* WordWrapInfo__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WordWrapper__uType; WordWrapper__uType* WordWrapper__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WordWrapperWord__uType; WordWrapperWord__uType* WordWrapperWord__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WrappedLine__uType; WrappedLine__uType* WrappedLine__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct LineCache__uType; LineCache__uType* LineCache__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct LineCacheLine__uType; LineCacheLine__uType* LineCacheLine__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct LineCachePasswordTransform__uType; LineCachePasswordTransform__uType* LineCachePasswordTransform__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct TextEditVisual__uType; TextEditVisual__uType* TextEditVisual__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct TextEditVisual_DegreeSpan__uType; TextEditVisual_DegreeSpan__uType* TextEditVisual_DegreeSpan__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct TextEditVisual_SwipeGestureHelper__uType; TextEditVisual_SwipeGestureHelper__uType* TextEditVisual_SwipeGestureHelper__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct TextPosition__uType; TextPosition__uType* TextPosition__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct TextSpan__uType; TextSpan__uType* TextSpan__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { namespace TextEdit { struct TextWindow__uType; TextWindow__uType* TextWindow__typeof(); } } } }
namespace app { namespace Fuse { namespace Controls { struct BackButton__uType; BackButton__uType* BackButton__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct BeginRemoveArgsImpl__uType; BeginRemoveArgsImpl__uType* BeginRemoveArgsImpl__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct Button__uType; Button__uType* Button__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct Circle__uType; Circle__uType* Circle__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct ContentControl__uType; ContentControl__uType* ContentControl__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct Control__uType; Control__uType* Control__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct DefaultSwitchBehavior__uType; DefaultSwitchBehavior__uType* DefaultSwitchBehavior__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct DockPanel__uType; DockPanel__uType* DockPanel__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct Ellipse__uType; Ellipse__uType* Ellipse__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct GraphicsView__uType; GraphicsView__uType* GraphicsView__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct Grid__uType; Grid__uType* Grid__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct Image__uType; Image__uType* Image__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct MapView__uType; MapView__uType* MapView__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct MultiLayout__uType; MultiLayout__uType* MultiLayout__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct NativeViewHost__uType; NativeViewHost__uType* NativeViewHost__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct NavigationBar__uType; NavigationBar__uType* NavigationBar__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct Number__uType; Number__uType* Number__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct Page__uType; Page__uType* Page__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct PageControl_Template__uType; PageControl_Template__uType* PageControl_Template__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct PageIndicator__uType; PageIndicator__uType* PageIndicator__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct Panel__uType; Panel__uType* Panel__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct Path__uType; Path__uType* Path__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct Placeholder__uType; Placeholder__uType* Placeholder__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct PlainTextEdit__uType; PlainTextEdit__uType* PlainTextEdit__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct PropertyBinding__bool__uType; PropertyBinding__bool__uType* PropertyBinding__bool__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct PropertyBinding__string__uType; PropertyBinding__string__uType* PropertyBinding__string__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct RangeControl__uType; RangeControl__uType* RangeControl__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct Rectangle__uType; Rectangle__uType* Rectangle__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct RegularPolygon__uType; RegularPolygon__uType* RegularPolygon__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct ScrollPropertyChangedArgs__uType; ScrollPropertyChangedArgs__uType* ScrollPropertyChangedArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct ScrollView__uType; ScrollView__uType* ScrollView__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct Shape__uType; Shape__uType* Shape__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct Slider__uType; Slider__uType* Slider__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct StackPanel__uType; StackPanel__uType* StackPanel__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct Star__uType; Star__uType* Star__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct Switch__uType; Switch__uType* Switch__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct Text__uType; Text__uType* Text__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct TextBlock__uType; TextBlock__uType* TextBlock__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct TextControl__uType; TextControl__uType* TextControl__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct TextInput__uType; TextInput__uType* TextInput__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct Toggle__uType; Toggle__uType* Toggle__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct ToggleControl__uType; ToggleControl__uType* ToggleControl__typeof(); } } }
namespace app { namespace Fuse { namespace Controls { struct WebView__uType; WebView__uType* WebView__typeof(); } } }
namespace app { namespace Fuse { namespace Designer { struct AdvancedAttribute__uType; AdvancedAttribute__uType* AdvancedAttribute__typeof(); } } }
namespace app { namespace Fuse { namespace Designer { struct ColorAttribute__uType; ColorAttribute__uType* ColorAttribute__typeof(); } } }
namespace app { namespace Fuse { namespace Designer { struct DefaultComponentAttribute__uType; DefaultComponentAttribute__uType* DefaultComponentAttribute__typeof(); } } }
namespace app { namespace Fuse { namespace Designer { struct DesignerNameAttribute__uType; DesignerNameAttribute__uType* DesignerNameAttribute__typeof(); } } }
namespace app { namespace Fuse { namespace Designer { struct GroupAttribute__uType; GroupAttribute__uType* GroupAttribute__typeof(); } } }
namespace app { namespace Fuse { namespace Designer { struct HideAttribute__uType; HideAttribute__uType* HideAttribute__typeof(); } } }
namespace app { namespace Fuse { namespace Designer { struct InlineAttribute__uType; InlineAttribute__uType* InlineAttribute__typeof(); } } }
namespace app { namespace Fuse { namespace Designer { struct IntervalAttribute__uType; IntervalAttribute__uType* IntervalAttribute__typeof(); } } }
namespace app { namespace Fuse { namespace Designer { struct RangeAttribute__uType; RangeAttribute__uType* RangeAttribute__typeof(); } } }
namespace app { namespace Fuse { namespace Designer { struct SpawnableAttribute__uType; SpawnableAttribute__uType* SpawnableAttribute__typeof(); } } }
namespace app { namespace Fuse { namespace Designer { struct ThicknessAttribute__uType; ThicknessAttribute__uType* ThicknessAttribute__typeof(); } } }
namespace app { namespace Fuse { namespace Desktop { struct NativeStyle_Template__uType; NativeStyle_Template__uType* NativeStyle_Template__typeof(); } } }
namespace app { namespace Fuse { namespace Desktop { struct NativeStyle_Template1__uType; NativeStyle_Template1__uType* NativeStyle_Template1__typeof(); } } }
namespace app { namespace Fuse { namespace Desktop { struct NativeStyle_Template1_Factory__uType; NativeStyle_Template1_Factory__uType* NativeStyle_Template1_Factory__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { namespace Internal { struct Float2Buffer__uType; Float2Buffer__uType* Float2Buffer__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Internal { struct FloatBuffer__uType; FloatBuffer__uType* FloatBuffer__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Internal { struct TypedBuffer__uType; TypedBuffer__uType* TypedBuffer__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Internal { struct UShortBuffer__uType; UShortBuffer__uType* UShortBuffer__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct Circle__uType; Circle__uType* Circle__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct ConcaveWedgeCoverage__uType; ConcaveWedgeCoverage__uType* ConcaveWedgeCoverage__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct ConvexWedgeCoverage__uType; ConvexWedgeCoverage__uType* ConvexWedgeCoverage__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct Coverage__uType; Coverage__uType* Coverage__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct FillCoverage__uType; FillCoverage__uType* FillCoverage__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct LimitCoverage__uType; LimitCoverage__uType* LimitCoverage__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct OneLimitCoverage__uType; OneLimitCoverage__uType* OneLimitCoverage__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct Rectangle__uType; Rectangle__uType* Rectangle__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct StrokeCoverage__uType; StrokeCoverage__uType* StrokeCoverage__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct Wedge__uType; Wedge__uType* Wedge__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct WedgeCoverage__uType; WedgeCoverage__uType* WedgeCoverage__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct ActiveRegionDict__uType; ActiveRegionDict__uType* ActiveRegionDict__typeof(); } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct Dict__Fuse_Drawing_Tesselation_ActiveRegion__uType; Dict__Fuse_Drawing_Tesselation_ActiveRegion__uType* Dict__Fuse_Drawing_Tesselation_ActiveRegion__typeof(); } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct DictNode__Fuse_Drawing_Tesselation_ActiveRegion__uType; DictNode__Fuse_Drawing_Tesselation_ActiveRegion__uType* DictNode__Fuse_Drawing_Tesselation_ActiveRegion__typeof(); } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion__uType; DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion__uType* DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion__typeof(); } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct LinkedListEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___uType; LinkedListEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___uType* LinkedListEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___typeof(); } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct LinkedListEnumerable__Fuse_Drawing_Tesselation_Face__uType; LinkedListEnumerable__Fuse_Drawing_Tesselation_Face__uType* LinkedListEnumerable__Fuse_Drawing_Tesselation_Face__typeof(); } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__uType; LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__uType* LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof(); } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__uType; LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__uType* LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__typeof(); } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__uType; LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__uType* LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__typeof(); } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__uType; LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__uType* LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__typeof(); } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__uType; LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__uType* LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__typeof(); } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct PriorityQueue__Fuse_Drawing_Tesselation_Vertex__uType; PriorityQueue__Fuse_Drawing_Tesselation_Vertex__uType* PriorityQueue__Fuse_Drawing_Tesselation_Vertex__typeof(); } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { namespace Collections { struct VertexQueue__uType; VertexQueue__uType* VertexQueue__typeof(); } } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct ActiveRegion__uType; ActiveRegion__uType* ActiveRegion__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct EdgeLoopEnumerable__uType; EdgeLoopEnumerable__uType* EdgeLoopEnumerable__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct EdgesEnumerable__uType; EdgesEnumerable__uType* EdgesEnumerable__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Face__uType; Face__uType* Face__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct FacesEnumerable__uType; FacesEnumerable__uType* FacesEnumerable__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Geom__uType; Geom__uType* Geom__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct HalfEdge__uType; HalfEdge__uType* HalfEdge__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Mesh__uType; Mesh__uType* Mesh__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct MeshBuilder__uType; MeshBuilder__uType* MeshBuilder__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct OriginEnumerable__uType; OriginEnumerable__uType* OriginEnumerable__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Sweep__uType; Sweep__uType* Sweep__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct Vertex__uType; Vertex__uType* Vertex__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Tesselation { struct VerticesEnumerable__uType; VerticesEnumerable__uType* VerticesEnumerable__typeof(); } } } }
namespace app { namespace Fuse { namespace Drawing { struct BezierOp__uType; BezierOp__uType* BezierOp__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct BlendModeHelpers__uType; BlendModeHelpers__uType* BlendModeHelpers__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct Border__uType; Border__uType* Border__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct Brush__uType; Brush__uType* Brush__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct Brushes__uType; Brushes__uType* Brushes__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct ButtCap__uType; ButtCap__uType* ButtCap__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct Cache__float2__uType; Cache__float2__uType* Cache__float2__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct Cache__Fuse_Drawing_Contour__uType; Cache__Fuse_Drawing_Contour__uType* Cache__Fuse_Drawing_Contour__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct ClosePath__uType; ClosePath__uType* ClosePath__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct Colors__uType; Colors__uType* Colors__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct Contour__uType; Contour__uType* Contour__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct ContourEnumerable__uType; ContourEnumerable__uType* ContourEnumerable__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct ContourEnumerator__uType; ContourEnumerator__uType* ContourEnumerator__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct ContourTerminator__uType; ContourTerminator__uType* ContourTerminator__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct CurveTo__uType; CurveTo__uType* CurveTo__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct DynamicBrush__uType; DynamicBrush__uType* DynamicBrush__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct EllipseFactory__uType; EllipseFactory__uType* EllipseFactory__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct GradientStop__uType; GradientStop__uType* GradientStop__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct HorizontalLineTo__uType; HorizontalLineTo__uType* HorizontalLineTo__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct ImageFill__uType; ImageFill__uType* ImageFill__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct ImageFill_DrawParams__uType; ImageFill_DrawParams__uType* ImageFill_DrawParams__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct LinearGradient__uType; LinearGradient__uType* LinearGradient__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct LinearGradientDrawable__uType; LinearGradientDrawable__uType* LinearGradientDrawable__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct LineCapImpl__uType; LineCapImpl__uType* LineCapImpl__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct LineTo__uType; LineTo__uType* LineTo__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct MoveTo__uType; MoveTo__uType* MoveTo__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct NonConsecutiveEnumerable__uType; NonConsecutiveEnumerable__uType* NonConsecutiveEnumerable__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct NonConsecutiveEnumerator__uType; NonConsecutiveEnumerator__uType* NonConsecutiveEnumerator__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct NonConsecutiveExtension__uType; NonConsecutiveExtension__uType* NonConsecutiveExtension__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct PathGeometry__uType; PathGeometry__uType* PathGeometry__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct PathGeometryExtensions__uType; PathGeometryExtensions__uType* PathGeometryExtensions__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct PathGeometryParser__uType; PathGeometryParser__uType* PathGeometryParser__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct PathGeometryRenderer__uType; PathGeometryRenderer__uType* PathGeometryRenderer__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct Polygon__uType; Polygon__uType* Polygon__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct PolygonDrawable__uType; PolygonDrawable__uType* PolygonDrawable__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct PolygonFiller__uType; PolygonFiller__uType* PolygonFiller__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct RegularPolygonFactory__uType; RegularPolygonFactory__uType* RegularPolygonFactory__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct RendererContext__uType; RendererContext__uType* RendererContext__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct RoundCap__uType; RoundCap__uType* RoundCap__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct SmoothCurveTo__uType; SmoothCurveTo__uType* SmoothCurveTo__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct SolidColor__uType; SolidColor__uType* SolidColor__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct StarFactory__uType; StarFactory__uType* StarFactory__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct StaticBrush__uType; StaticBrush__uType* StaticBrush__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct StaticSolidColor__uType; StaticSolidColor__uType* StaticSolidColor__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke__uType; Stroke__uType* Stroke__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct Token__uType; Token__uType* Token__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct Util__uType; Util__uType* Util__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct VerticalLineTo__uType; VerticalLineTo__uType* VerticalLineTo__typeof(); } } }
namespace app { namespace Fuse { namespace Drawing { struct WindingRules__uType; WindingRules__uType* WindingRules__typeof(); } } }
namespace app { namespace Fuse { namespace Effects { struct BasicEffect__uType; BasicEffect__uType* BasicEffect__typeof(); } } }
namespace app { namespace Fuse { namespace Effects { struct Blur__uType; Blur__uType* Blur__typeof(); } } }
namespace app { namespace Fuse { namespace Effects { struct Desaturate__uType; Desaturate__uType* Desaturate__typeof(); } } }
namespace app { namespace Fuse { namespace Effects { struct DropShadow__uType; DropShadow__uType* DropShadow__typeof(); } } }
namespace app { namespace Fuse { namespace Effects { struct Effect__uType; Effect__uType* Effect__typeof(); } } }
namespace app { namespace Fuse { namespace Effects { struct EffectHelpers__uType; EffectHelpers__uType* EffectHelpers__typeof(); } } }
namespace app { namespace Fuse { namespace Effects { struct Halftone__uType; Halftone__uType* Halftone__typeof(); } } }
namespace app { namespace Fuse { namespace Effects { struct Mask__uType; Mask__uType* Mask__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { namespace Internal { struct ElementDraw__uType; ElementDraw__uType* ElementDraw__typeof(); } } } }
namespace app { namespace Fuse { namespace Elements { namespace Internal { struct Scale9Rectangle__uType; Scale9Rectangle__uType* Scale9Rectangle__typeof(); } } } }
namespace app { namespace Fuse { namespace Elements { struct AlignmentHelpers__uType; AlignmentHelpers__uType* AlignmentHelpers__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct BoxSizing__uType; BoxSizing__uType* BoxSizing__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct Cache__uType; Cache__uType* Cache__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct CacheHelper__uType; CacheHelper__uType* CacheHelper__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct CacheTile__uType; CacheTile__uType* CacheTile__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct DisplayHelpers__uType; DisplayHelpers__uType* DisplayHelpers__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct Element__uType; Element__uType* Element__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct Element_GMSCacheItem__uType; Element_GMSCacheItem__uType* Element_GMSCacheItem__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct ElementAtlas__uType; ElementAtlas__uType* ElementAtlas__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct ElementAtlasFramebuffer__uType; ElementAtlasFramebuffer__uType* ElementAtlasFramebuffer__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct ElementAtlasFramebufferPool__uType; ElementAtlasFramebufferPool__uType* ElementAtlasFramebufferPool__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct ElementAtlasFramebufferPoolEntry__uType; ElementAtlasFramebufferPoolEntry__uType* ElementAtlasFramebufferPoolEntry__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct ElementAtlasFramebufferPoolImpl__uType; ElementAtlasFramebufferPoolImpl__uType* ElementAtlasFramebufferPoolImpl__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct ElementBatch__uType; ElementBatch__uType* ElementBatch__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct ElementBatchEntry__uType; ElementBatchEntry__uType* ElementBatchEntry__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct ElementBatcher__uType; ElementBatcher__uType* ElementBatcher__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct LayoutArgs__uType; LayoutArgs__uType* LayoutArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct LimitBoxSizing__uType; LimitBoxSizing__uType* LimitBoxSizing__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct LimitBoxSizingData__uType; LimitBoxSizingData__uType* LimitBoxSizingData__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct NoImplicitMaxBoxSizing__uType; NoImplicitMaxBoxSizing__uType* NoImplicitMaxBoxSizing__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct ShadowBoxSizing__uType; ShadowBoxSizing__uType* ShadowBoxSizing__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct ShadowBoxSizing_ShadowData__uType; ShadowBoxSizing_ShadowData__uType* ShadowBoxSizing_ShadowData__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct SingleNodeDrawable__uType; SingleNodeDrawable__uType* SingleNodeDrawable__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct StandardBoxSizing__uType; StandardBoxSizing__uType* StandardBoxSizing__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct TextureAtlas__uType; TextureAtlas__uType* TextureAtlas__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct TransformOrigins__uType; TransformOrigins__uType* TransformOrigins__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct TransformOrigins_AnchorOrigin__uType; TransformOrigins_AnchorOrigin__uType* TransformOrigins_AnchorOrigin__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct TransformOrigins_BoxCenter__uType; TransformOrigins_BoxCenter__uType* TransformOrigins_BoxCenter__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct TransformOrigins_CenterOrigin__uType; TransformOrigins_CenterOrigin__uType* TransformOrigins_CenterOrigin__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct TransformOrigins_TopLeftOrigin__uType; TransformOrigins_TopLeftOrigin__uType* TransformOrigins_TopLeftOrigin__typeof(); } } }
namespace app { namespace Fuse { namespace Elements { struct Viewport__uType; Viewport__uType* Viewport__typeof(); } } }
namespace app { namespace Fuse { namespace Entities { namespace Designer { struct PreloadedResources__uType; PreloadedResources__uType* PreloadedResources__typeof(); } } } }
namespace app { namespace Fuse { namespace Entities { struct Entity__uType; Entity__uType* Entity__typeof(); } } }
namespace app { namespace Fuse { namespace Entities { struct Transform3D__uType; Transform3D__uType* Transform3D__typeof(); } } }
namespace app { namespace Fuse { namespace Gestures { namespace Internal { struct EdgeSwiper__uType; EdgeSwiper__uType* EdgeSwiper__typeof(); } } } }
namespace app { namespace Fuse { namespace Gestures { struct Clicked__uType; Clicked__uType* Clicked__typeof(); } } }
namespace app { namespace Fuse { namespace Gestures { struct ClickedArgs__uType; ClickedArgs__uType* ClickedArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Gestures { struct Clicker__uType; Clicker__uType* Clicker__typeof(); } } }
namespace app { namespace Fuse { namespace Gestures { struct ClickerTrigger__uType; ClickerTrigger__uType* ClickerTrigger__typeof(); } } }
namespace app { namespace Fuse { namespace Gestures { struct DegreeSpan__uType; DegreeSpan__uType* DegreeSpan__typeof(); } } }
namespace app { namespace Fuse { namespace Gestures { struct KeepFocusInView__uType; KeepFocusInView__uType* KeepFocusInView__typeof(); } } }
namespace app { namespace Fuse { namespace Gestures { struct KeepInViewCommon__uType; KeepInViewCommon__uType* KeepInViewCommon__typeof(); } } }
namespace app { namespace Fuse { namespace Gestures { struct ScrollableGoto__uType; ScrollableGoto__uType* ScrollableGoto__typeof(); } } }
namespace app { namespace Fuse { namespace Gestures { struct Scroller__uType; Scroller__uType* Scroller__typeof(); } } }
namespace app { namespace Fuse { namespace Gestures { struct SwipeGestureHelper__uType; SwipeGestureHelper__uType* SwipeGestureHelper__typeof(); } } }
namespace app { namespace Fuse { namespace Gestures { struct Trackball__uType; Trackball__uType* Trackball__typeof(); } } }
namespace app { namespace Fuse { namespace Gestures { struct WhileClickerTrigger__uType; WhileClickerTrigger__uType* WhileClickerTrigger__typeof(); } } }
namespace app { namespace Fuse { namespace Gestures { struct WhilePressed__uType; WhilePressed__uType* WhilePressed__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct Capturer__uType; Capturer__uType* Capturer__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct CustomPointerEventArgs__uType; CustomPointerEventArgs__uType* CustomPointerEventArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct Focus__uType; Focus__uType* Focus__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct FocusGained__uType; FocusGained__uType* FocusGained__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct FocusGainedArgs__uType; FocusGainedArgs__uType* FocusGainedArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct FocusLost__uType; FocusLost__uType* FocusLost__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct FocusLostArgs__uType; FocusLostArgs__uType* FocusLostArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct FocusPredictStrategy__uType; FocusPredictStrategy__uType* FocusPredictStrategy__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct HitTestHelpers__uType; HitTestHelpers__uType* HitTestHelpers__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct IsFocusableChangedArgs__uType; IsFocusableChangedArgs__uType* IsFocusableChangedArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct IsFocusableChangedEvent__uType; IsFocusableChangedEvent__uType* IsFocusableChangedEvent__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct Keyboard__uType; Keyboard__uType* Keyboard__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct KeyEventArgs__uType; KeyEventArgs__uType* KeyEventArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct KeyPressed__uType; KeyPressed__uType* KeyPressed__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct KeyPressedArgs__uType; KeyPressedArgs__uType* KeyPressedArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct KeyReleased__uType; KeyReleased__uType* KeyReleased__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct KeyReleasedArgs__uType; KeyReleasedArgs__uType* KeyReleasedArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct Pointer__uType; Pointer__uType* Pointer__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct Pointer_PELHolder__uType; Pointer_PELHolder__uType* Pointer_PELHolder__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct Pointer_PointerRecord__uType; Pointer_PointerRecord__uType* Pointer_PointerRecord__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct PointerEntered__uType; PointerEntered__uType* PointerEntered__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct PointerEnteredArgs__uType; PointerEnteredArgs__uType* PointerEnteredArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct PointerEventArgs__uType; PointerEventArgs__uType* PointerEventArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct PointerEventData__uType; PointerEventData__uType* PointerEventData__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct PointerLeft__uType; PointerLeft__uType* PointerLeft__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct PointerLeftArgs__uType; PointerLeftArgs__uType* PointerLeftArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct PointerMoved__uType; PointerMoved__uType* PointerMoved__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct PointerMovedArgs__uType; PointerMovedArgs__uType* PointerMovedArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct PointerPressed__uType; PointerPressed__uType* PointerPressed__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct PointerPressedArgs__uType; PointerPressedArgs__uType* PointerPressedArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct PointerReleased__uType; PointerReleased__uType* PointerReleased__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct PointerReleasedArgs__uType; PointerReleasedArgs__uType* PointerReleasedArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct PointerWheelMoved__uType; PointerWheelMoved__uType* PointerWheelMoved__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct PointerWheelMovedArgs__uType; PointerWheelMovedArgs__uType* PointerWheelMovedArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct SelectionQuery__uType; SelectionQuery__uType* SelectionQuery__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct TextEntered__uType; TextEntered__uType* TextEntered__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct TextEnteredArgs__uType; TextEnteredArgs__uType* TextEnteredArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct TextService__uType; TextService__uType* TextService__typeof(); } } }
namespace app { namespace Fuse { namespace Input { struct TraverseNodeExtensions__uType; TraverseNodeExtensions__uType* TraverseNodeExtensions__typeof(); } } }
namespace app { namespace Fuse { namespace Internal { namespace Drawing { struct SolidRectangle__uType; SolidRectangle__uType* SolidRectangle__typeof(); } } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__bool__uType; Blender__bool__uType* Blender__bool__typeof(); } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__double__uType; Blender__double__uType* Blender__double__typeof(); } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__float__uType; Blender__float__uType* Blender__float__typeof(); } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__float2__uType; Blender__float2__uType* Blender__float2__typeof(); } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__float3__uType; Blender__float3__uType* Blender__float3__typeof(); } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__float4__uType; Blender__float4__uType* Blender__float4__typeof(); } } }
namespace app { namespace Fuse { namespace Internal { struct Blender__Fuse_Elements_Visibility__uType; Blender__Fuse_Elements_Visibility__uType* Blender__Fuse_Elements_Visibility__typeof(); } } }
namespace app { namespace Fuse { namespace Internal { struct BlenderMap__uType; BlenderMap__uType* BlenderMap__typeof(); } } }
namespace app { namespace Fuse { namespace Internal { struct DoubleBlender__uType; DoubleBlender__uType* DoubleBlender__typeof(); } } }
namespace app { namespace Fuse { namespace Internal { struct Float2Blender__uType; Float2Blender__uType* Float2Blender__typeof(); } } }
namespace app { namespace Fuse { namespace Internal { struct Float3Blender__uType; Float3Blender__uType* Float3Blender__typeof(); } } }
namespace app { namespace Fuse { namespace Internal { struct Float4Blender__uType; Float4Blender__uType* Float4Blender__typeof(); } } }
namespace app { namespace Fuse { namespace Internal { struct FloatBlender__uType; FloatBlender__uType* FloatBlender__typeof(); } } }
namespace app { namespace Fuse { namespace Internal { struct FrustumMatrix__uType; FrustumMatrix__uType* FrustumMatrix__typeof(); } } }
namespace app { namespace Fuse { namespace Internal { struct ImageContainer__uType; ImageContainer__uType* ImageContainer__typeof(); } } }
namespace app { namespace Fuse { namespace Internal { struct RectExtensions__uType; RectExtensions__uType* RectExtensions__typeof(); } } }
namespace app { namespace Fuse { namespace Internal { struct SizingContainer__uType; SizingContainer__uType* SizingContainer__typeof(); } } }
namespace app { namespace Fuse { namespace Internal { struct Statistics__uType; Statistics__uType* Statistics__typeof(); } } }
namespace app { namespace Fuse { namespace iOS { struct Blitter__uType; Blitter__uType* Blitter__typeof(); } } }
namespace app { namespace Fuse { namespace iOS { struct Button__uType; Button__uType* Button__typeof(); } } }
namespace app { namespace Fuse { namespace iOS { struct ControlView__Fuse_Controls_TextInput__uType; ControlView__Fuse_Controls_TextInput__uType* ControlView__Fuse_Controls_TextInput__typeof(); } } }
namespace app { namespace Fuse { namespace iOS { struct NativeStyle_Template__uType; NativeStyle_Template__uType* NativeStyle_Template__typeof(); } } }
namespace app { namespace Fuse { namespace iOS { struct NativeStyle_Template_Template1__uType; NativeStyle_Template_Template1__uType* NativeStyle_Template_Template1__typeof(); } } }
namespace app { namespace Fuse { namespace iOS { struct NativeStyle_Template_Template2__uType; NativeStyle_Template_Template2__uType* NativeStyle_Template_Template2__typeof(); } } }
namespace app { namespace Fuse { namespace iOS { struct NativeStyle_Template_Template3__uType; NativeStyle_Template_Template3__uType* NativeStyle_Template_Template3__typeof(); } } }
namespace app { namespace Fuse { namespace iOS { struct NativeStyle_Template_Template3_Factory__uType; NativeStyle_Template_Template3_Factory__uType* NativeStyle_Template_Template3_Factory__typeof(); } } }
namespace app { namespace Fuse { namespace iOS { struct NativeStyle_Template_Template3_Factory1__uType; NativeStyle_Template_Template3_Factory1__uType* NativeStyle_Template_Template3_Factory1__typeof(); } } }
namespace app { namespace Fuse { namespace iOS { struct NativeView__uType; NativeView__uType* NativeView__typeof(); } } }
namespace app { namespace Fuse { namespace iOS { struct NativeViewHost__uType; NativeViewHost__uType* NativeViewHost__typeof(); } } }
namespace app { namespace Fuse { namespace iOS { struct ParentView__Fuse_Controls_NativeViewHost__uType; ParentView__Fuse_Controls_NativeViewHost__uType* ParentView__Fuse_Controls_NativeViewHost__typeof(); } } }
namespace app { namespace Fuse { namespace iOS { struct PlainTextInput__uType; PlainTextInput__uType* PlainTextInput__typeof(); } } }
namespace app { namespace Fuse { namespace iOS { struct StatusBarConfig__uType; StatusBarConfig__uType* StatusBarConfig__typeof(); } } }
namespace app { namespace Fuse { namespace iOS { struct TextInput__uType; TextInput__uType* TextInput__typeof(); } } }
namespace app { namespace Fuse { namespace iOS { struct TextRenderer__uType; TextRenderer__uType* TextRenderer__typeof(); } } }
namespace app { namespace Fuse { namespace iOS { struct View__uType; View__uType* View__typeof(); } } }
namespace app { namespace Fuse { namespace Layouts { struct Column__uType; Column__uType* Column__typeof(); } } }
namespace app { namespace Fuse { namespace Layouts { struct ColumnLayout__uType; ColumnLayout__uType* ColumnLayout__typeof(); } } }
namespace app { namespace Fuse { namespace Layouts { struct DefaultLayout__uType; DefaultLayout__uType* DefaultLayout__typeof(); } } }
namespace app { namespace Fuse { namespace Layouts { struct DefinitionBase__uType; DefinitionBase__uType* DefinitionBase__typeof(); } } }
namespace app { namespace Fuse { namespace Layouts { struct DefinitionBase_ParseDataItem__uType; DefinitionBase_ParseDataItem__uType* DefinitionBase_ParseDataItem__typeof(); } } }
namespace app { namespace Fuse { namespace Layouts { struct DockLayout__uType; DockLayout__uType* DockLayout__typeof(); } } }
namespace app { namespace Fuse { namespace Layouts { struct GridLayout__uType; GridLayout__uType* GridLayout__typeof(); } } }
namespace app { namespace Fuse { namespace Layouts { struct Layout__uType; Layout__uType* Layout__typeof(); } } }
namespace app { namespace Fuse { namespace Layouts { struct Layouts__uType; Layouts__uType* Layouts__typeof(); } } }
namespace app { namespace Fuse { namespace Layouts { struct Row__uType; Row__uType* Row__typeof(); } } }
namespace app { namespace Fuse { namespace Layouts { struct StackLayout__uType; StackLayout__uType* StackLayout__typeof(); } } }
namespace app { namespace Fuse { namespace Layouts { struct WrapLayout__uType; WrapLayout__uType* WrapLayout__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct ActivatingAnimation__uType; ActivatingAnimation__uType* ActivatingAnimation__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct BackForwardNavigationTrigger__uType; BackForwardNavigationTrigger__uType* BackForwardNavigationTrigger__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct DeactivatingAnimation__uType; DeactivatingAnimation__uType* DeactivatingAnimation__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct DefaultNavigationAnimator__uType; DefaultNavigationAnimator__uType* DefaultNavigationAnimator__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct DefaultNavigationAnimatorPlayer__uType; DefaultNavigationAnimatorPlayer__uType* DefaultNavigationAnimatorPlayer__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct DirectNavigation__uType; DirectNavigation__uType* DirectNavigation__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct EdgeNavigation__uType; EdgeNavigation__uType* EdgeNavigation__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct EndSeekArgs__uType; EndSeekArgs__uType* EndSeekArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct EnterExitAnimation__uType; EnterExitAnimation__uType* EnterExitAnimation__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct EnteringAnimation__uType; EnteringAnimation__uType* EnteringAnimation__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct ExitingAnimation__uType; ExitingAnimation__uType* ExitingAnimation__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct GoBack__uType; GoBack__uType* GoBack__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct GoForward__uType; GoForward__uType* GoForward__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct LoadUrl__uType; LoadUrl__uType* LoadUrl__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct NavigatedArgs__uType; NavigatedArgs__uType* NavigatedArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct NavigateTo__uType; NavigateTo__uType* NavigateTo__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct NavigateToggle__uType; NavigateToggle__uType* NavigateToggle__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct Navigation__uType; Navigation__uType* Navigation__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct NavigationAnimation__uType; NavigationAnimation__uType* NavigationAnimation__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct NavigationArgs__uType; NavigationArgs__uType* NavigationArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct NavigationPageProperty__uType; NavigationPageProperty__uType* NavigationPageProperty__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct NavigationStateArgs__uType; NavigationStateArgs__uType* NavigationStateArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct NavigationTriggerAction__uType; NavigationTriggerAction__uType* NavigationTriggerAction__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct NavigationTween__uType; NavigationTween__uType* NavigationTween__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct NavTriggerUtil__uType; NavTriggerUtil__uType* NavTriggerUtil__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct PlayerFactory__uType; PlayerFactory__uType* PlayerFactory__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct ProgressSpan__uType; ProgressSpan__uType* ProgressSpan__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct ProgressTimer__uType; ProgressTimer__uType* ProgressTimer__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct Reload__uType; Reload__uType* Reload__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct SeekNavigationAnimatorPlayer__uType; SeekNavigationAnimatorPlayer__uType* SeekNavigationAnimatorPlayer__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct StopLoading__uType; StopLoading__uType* StopLoading__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct StructuredNavigation__uType; StructuredNavigation__uType* StructuredNavigation__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct SwipeNavigate__uType; SwipeNavigate__uType* SwipeNavigate__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct UpdateSeekArgs__uType; UpdateSeekArgs__uType* UpdateSeekArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct WebViewNavigationExtensions__uType; WebViewNavigationExtensions__uType* WebViewNavigationExtensions__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct WebViewNavigationTrigger__uType; WebViewNavigationTrigger__uType* WebViewNavigationTrigger__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct WhileActive__uType; WhileActive__uType* WhileActive__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct WhileInactive__uType; WhileInactive__uType* WhileInactive__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct WhileInEnterState__uType; WhileInEnterState__uType* WhileInEnterState__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct WhileInExitState__uType; WhileInExitState__uType* WhileInExitState__typeof(); } } }
namespace app { namespace Fuse { namespace Navigation { struct WhileNavigationTrigger__uType; WhileNavigationTrigger__uType* WhileNavigationTrigger__typeof(); } } }
namespace app { namespace Fuse { namespace Physics { struct Body__uType; Body__uType* Body__typeof(); } } }
namespace app { namespace Fuse { namespace Physics { struct Draggable__uType; Draggable__uType* Draggable__typeof(); } } }
namespace app { namespace Fuse { namespace Physics { struct EnteredForceField__uType; EnteredForceField__uType* EnteredForceField__typeof(); } } }
namespace app { namespace Fuse { namespace Physics { struct ExitedForceField__uType; ExitedForceField__uType* ExitedForceField__typeof(); } } }
namespace app { namespace Fuse { namespace Physics { struct ForceField__uType; ForceField__uType* ForceField__typeof(); } } }
namespace app { namespace Fuse { namespace Physics { struct ForceFieldEventArgs__uType; ForceFieldEventArgs__uType* ForceFieldEventArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Physics { struct ForceFieldEventTrigger__uType; ForceFieldEventTrigger__uType* ForceFieldEventTrigger__typeof(); } } }
namespace app { namespace Fuse { namespace Physics { struct ForceFieldTrigger__uType; ForceFieldTrigger__uType* ForceFieldTrigger__typeof(); } } }
namespace app { namespace Fuse { namespace Physics { struct InForceFieldAnimation__uType; InForceFieldAnimation__uType* InForceFieldAnimation__typeof(); } } }
namespace app { namespace Fuse { namespace Physics { struct PointAttractor__uType; PointAttractor__uType* PointAttractor__typeof(); } } }
namespace app { namespace Fuse { namespace Physics { struct Spring__uType; Spring__uType* Spring__typeof(); } } }
namespace app { namespace Fuse { namespace Physics { struct WhileDragging__uType; WhileDragging__uType* WhileDragging__typeof(); } } }
namespace app { namespace Fuse { namespace Physics { struct World__uType; World__uType* World__typeof(); } } }
namespace app { namespace Fuse { namespace Preview { struct SelectionManager__uType; SelectionManager__uType* SelectionManager__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { namespace FuseJS { struct Camera__uType; Camera__uType* Camera__typeof(); } } } }
namespace app { namespace Fuse { namespace Reactive { namespace FuseJS { struct Email__uType; Email__uType* Email__typeof(); } } } }
namespace app { namespace Fuse { namespace Reactive { namespace FuseJS { struct FileReaderImpl__uType; FileReaderImpl__uType* FileReaderImpl__typeof(); } } } }
namespace app { namespace Fuse { namespace Reactive { namespace FuseJS { struct FuseJSHttp__uType; FuseJSHttp__uType* FuseJSHttp__typeof(); } } } }
namespace app { namespace Fuse { namespace Reactive { namespace FuseJS { struct Globals__uType; Globals__uType* Globals__typeof(); } } } }
namespace app { namespace Fuse { namespace Reactive { namespace FuseJS { struct Http__uType; Http__uType* Http__typeof(); } } } }
namespace app { namespace Fuse { namespace Reactive { namespace FuseJS { struct InterApp__uType; InterApp__uType* InterApp__typeof(); } } } }
namespace app { namespace Fuse { namespace Reactive { namespace FuseJS { struct Lifecycle__uType; Lifecycle__uType* Lifecycle__typeof(); } } } }
namespace app { namespace Fuse { namespace Reactive { namespace FuseJS { struct Maps__uType; Maps__uType* Maps__typeof(); } } } }
namespace app { namespace Fuse { namespace Reactive { namespace FuseJS { struct Phone__uType; Phone__uType* Phone__typeof(); } } } }
namespace app { namespace Fuse { namespace Reactive { namespace FuseJS { struct Storage__uType; Storage__uType* Storage__typeof(); } } } }
namespace app { namespace Fuse { namespace Reactive { namespace FuseJS { struct Timer__uType; Timer__uType* Timer__typeof(); } } } }
namespace app { namespace Fuse { namespace Reactive { namespace FuseJS { struct Timer_Closure__uType; Timer_Closure__uType* Timer_Closure__typeof(); } } } }
namespace app { namespace Fuse { namespace Reactive { namespace FuseJS { struct Timer_Time__uType; Timer_Time__uType* Timer_Time__typeof(); } } } }
namespace app { namespace Fuse { namespace Reactive { namespace FuseJS { struct Vibration__uType; Vibration__uType* Vibration__typeof(); } } } }
namespace app { namespace Fuse { namespace Reactive { struct AsyncArray__uType; AsyncArray__uType* AsyncArray__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct AsyncFunction__uType; AsyncFunction__uType* AsyncFunction__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct AsyncObject__uType; AsyncObject__uType* AsyncObject__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct Binding__uType; Binding__uType* Binding__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct CallEventHandler__uType; CallEventHandler__uType* CallEventHandler__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct CallObjectEventHandler__uType; CallObjectEventHandler__uType* CallObjectEventHandler__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct Case__uType; Case__uType* Case__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct Console__uType; Console__uType* Console__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct CrossThreadExceptionHandler__uType; CrossThreadExceptionHandler__uType* CrossThreadExceptionHandler__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct DataBinding__bool__uType; DataBinding__bool__uType* DataBinding__bool__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct DataBinding__float__uType; DataBinding__float__uType* DataBinding__float__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct DataBinding__Fuse_Resources_ImageSource__uType; DataBinding__Fuse_Resources_ImageSource__uType* DataBinding__Fuse_Resources_ImageSource__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct DataBinding__string__uType; DataBinding__string__uType* DataBinding__string__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct DataToResourceBinding__Fuse_Resources_ImageSource__uType; DataToResourceBinding__Fuse_Resources_ImageSource__uType* DataToResourceBinding__Fuse_Resources_ImageSource__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct DebugLog__uType; DebugLog__uType* DebugLog__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct Dispatcher__uType; Dispatcher__uType* Dispatcher__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct Dispatcher_Arg2Dispatch__int__object__uType; Dispatcher_Arg2Dispatch__int__object__uType* Dispatcher_Arg2Dispatch__int__object__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct Dispatcher_Arg2Dispatch__object__int__uType; Dispatcher_Arg2Dispatch__object__int__uType* Dispatcher_Arg2Dispatch__object__int__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct Dispatcher_ArgDispatch__int__uType; Dispatcher_ArgDispatch__int__uType* Dispatcher_ArgDispatch__int__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct Dispatcher_ArgDispatch__object____uType; Dispatcher_ArgDispatch__object____uType* Dispatcher_ArgDispatch__object____typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct Dispatcher_ArgDispatch__object__uType; Dispatcher_ArgDispatch__object__uType* Dispatcher_ArgDispatch__object__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct Dispatcher_ArgDispatch__string__uType; Dispatcher_ArgDispatch__string__uType* Dispatcher_ArgDispatch__string__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct Dispatcher_UIThreadDispatcher__uType; Dispatcher_UIThreadDispatcher__uType* Dispatcher_UIThreadDispatcher__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct Each__uType; Each__uType* Each__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct EnumArray__uType; EnumArray__uType* EnumArray__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct EnumObservable__uType; EnumObservable__uType* EnumObservable__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct EventBinding__uType; EventBinding__uType* EventBinding__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct FileSourceTell__uType; FileSourceTell__uType* FileSourceTell__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct JavaScript__uType; JavaScript__uType* JavaScript__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct JSFileSource__uType; JSFileSource__uType* JSFileSource__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct Marshal__uType; Marshal__uType* Marshal__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct Marshal_Float2Enum__uType; Marshal_Float2Enum__uType* Marshal_Float2Enum__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct Marshal_Float3Enum__uType; Marshal_Float3Enum__uType* Marshal_Float3Enum__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct Marshal_VectorEnum__uType; Marshal_VectorEnum__uType* Marshal_VectorEnum__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct Match__uType; Match__uType* Match__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct Observable__uType; Observable__uType* Observable__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct ObservableSubscription__uType; ObservableSubscription__uType* ObservableSubscription__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct PathSubscription__uType; PathSubscription__uType* PathSubscription__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct ScriptEventArgs__uType; ScriptEventArgs__uType* ScriptEventArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct ScriptEvents__uType; ScriptEvents__uType* ScriptEvents__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct SubscriptionSetExclusive__uType; SubscriptionSetExclusive__uType* SubscriptionSetExclusive__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct TellObject__uType; TellObject__uType* TellObject__typeof(); } } }
namespace app { namespace Fuse { namespace Reactive { struct ThreadWorker__uType; ThreadWorker__uType* ThreadWorker__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct DisposalManager__uType; DisposalManager__uType* DisposalManager__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct FileImageSource__uType; FileImageSource__uType* FileImageSource__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct FileImageSourceCache__uType; FileImageSourceCache__uType* FileImageSourceCache__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct FileImageSourceImpl__uType; FileImageSourceImpl__uType* FileImageSourceImpl__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct FileResource__uType; FileResource__uType* FileResource__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct HttpImageSource__uType; HttpImageSource__uType* HttpImageSource__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct HttpImageSourceCache__uType; HttpImageSourceCache__uType* HttpImageSourceCache__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct HttpImageSourceImpl__uType; HttpImageSourceImpl__uType* HttpImageSourceImpl__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct ImageSource__uType; ImageSource__uType* ImageSource__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct ImageSourceErrorArgs__uType; ImageSourceErrorArgs__uType* ImageSourceErrorArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct LoadingImageSource__uType; LoadingImageSource__uType* LoadingImageSource__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct MemoryPolicy__uType; MemoryPolicy__uType* MemoryPolicy__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct MultiDensityImageSource__uType; MultiDensityImageSource__uType* MultiDensityImageSource__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct ProxyImageSource__uType; ProxyImageSource__uType* ProxyImageSource__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct ResourceBinding__float4__uType; ResourceBinding__float4__uType* ResourceBinding__float4__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct ResourceRegistry__uType; ResourceRegistry__uType* ResourceRegistry__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct ResourceSetter__bool__uType; ResourceSetter__bool__uType* ResourceSetter__bool__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct ResourceSetter__float__uType; ResourceSetter__float__uType* ResourceSetter__float__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct ResourceSetter__float2__uType; ResourceSetter__float2__uType* ResourceSetter__float2__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct ResourceSetter__float3__uType; ResourceSetter__float3__uType* ResourceSetter__float3__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct ResourceSetter__float4__uType; ResourceSetter__float4__uType* ResourceSetter__float4__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct ResourceSetter__object__uType; ResourceSetter__object__uType* ResourceSetter__object__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct ResourceSetter__string__uType; ResourceSetter__string__uType* ResourceSetter__string__typeof(); } } }
namespace app { namespace Fuse { namespace Resources { struct TextureImageSource__uType; TextureImageSource__uType* TextureImageSource__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { namespace Duktape { struct CallbackClosure__uType; CallbackClosure__uType* CallbackClosure__typeof(); } } } }
namespace app { namespace Fuse { namespace Scripting { namespace Duktape { struct Context__uType; Context__uType* Context__typeof(); } } } }
namespace app { namespace Fuse { namespace Scripting { namespace Duktape { struct duktape__uType; duktape__uType* duktape__typeof(); } } } }
namespace app { namespace Fuse { namespace Scripting { namespace Duktape { struct JSArray__uType; JSArray__uType* JSArray__typeof(); } } } }
namespace app { namespace Fuse { namespace Scripting { namespace Duktape { struct JSFunction__uType; JSFunction__uType* JSFunction__typeof(); } } } }
namespace app { namespace Fuse { namespace Scripting { namespace Duktape { struct JSObject__uType; JSObject__uType* JSObject__typeof(); } } } }
namespace app { namespace Fuse { namespace Scripting { struct Array__uType; Array__uType* Array__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct BoolChangedArgs__uType; BoolChangedArgs__uType* BoolChangedArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct Context__uType; Context__uType* Context__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct DoubleChangedArgs__uType; DoubleChangedArgs__uType* DoubleChangedArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct Error__uType; Error__uType* Error__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct FactoryClosure__string__uType; FactoryClosure__string__uType* FactoryClosure__string__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct FileModule__uType; FileModule__uType* FileModule__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct Function__uType; Function__uType* Function__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct NameRegistry__uType; NameRegistry__uType* NameRegistry__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct NativeEvent__uType; NativeEvent__uType* NativeEvent__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct NativeEvent_EventClosure__uType; NativeEvent_EventClosure__uType* NativeEvent_EventClosure__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct NativeFunction__uType; NativeFunction__uType* NativeFunction__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct NativeFunctionClosure__uType; NativeFunctionClosure__uType* NativeFunctionClosure__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct NativeMember__uType; NativeMember__uType* NativeMember__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct NativeModule__uType; NativeModule__uType* NativeModule__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct NativePromise__bool__bool__uType; NativePromise__bool__bool__uType* NativePromise__bool__bool__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType; NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType* NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct NativePromise__string__string__uType; NativePromise__string__string__uType* NativePromise__string__string__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct NativePromise2_ContextClosure__bool__bool__uType; NativePromise2_ContextClosure__bool__bool__uType* NativePromise2_ContextClosure__bool__bool__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType; NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType* NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct NativePromise2_ContextClosure__string__string__uType; NativePromise2_ContextClosure__string__string__uType* NativePromise2_ContextClosure__string__string__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct NativePromise2_PromiseClosure__bool__bool__uType; NativePromise2_PromiseClosure__bool__bool__uType* NativePromise2_PromiseClosure__bool__bool__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType; NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType* NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct NativePromise2_PromiseClosure__string__string__uType; NativePromise2_PromiseClosure__string__string__uType* NativePromise2_PromiseClosure__string__string__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct Object__uType; Object__uType* Object__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct ScriptException__uType; ScriptException__uType* ScriptException__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct StringChangedArgs__uType; StringChangedArgs__uType* StringChangedArgs__typeof(); } } }
namespace app { namespace Fuse { namespace Scripting { struct Value__uType; Value__uType* Value__typeof(); } } }
namespace app { namespace Fuse { namespace Shapes { struct Circle__uType; Circle__uType* Circle__typeof(); } } }
namespace app { namespace Fuse { namespace Shapes { struct Ellipse__uType; Ellipse__uType* Ellipse__typeof(); } } }
namespace app { namespace Fuse { namespace Shapes { struct Path__uType; Path__uType* Path__typeof(); } } }
namespace app { namespace Fuse { namespace Shapes { struct PathShape__uType; PathShape__uType* PathShape__typeof(); } } }
namespace app { namespace Fuse { namespace Shapes { struct Rectangle__uType; Rectangle__uType* Rectangle__typeof(); } } }
namespace app { namespace Fuse { namespace Shapes { struct RegularPolygon__uType; RegularPolygon__uType* RegularPolygon__typeof(); } } }
namespace app { namespace Fuse { namespace Shapes { struct Shape__uType; Shape__uType* Shape__typeof(); } } }
namespace app { namespace Fuse { namespace Shapes { struct Star__uType; Star__uType* Star__typeof(); } } }
namespace app { namespace Fuse { namespace Storage { struct ApplicationDir__uType; ApplicationDir__uType* ApplicationDir__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct BringIntoView__uType; BringIntoView__uType* BringIntoView__typeof(); } } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct BringToFront__uType; BringToFront__uType* BringToFront__typeof(); } } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct Call__uType; Call__uType* Call__typeof(); } } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct Callback__uType; Callback__uType* Callback__typeof(); } } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct Collapse__uType; Collapse__uType* Collapse__typeof(); } } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct DebugAction__uType; DebugAction__uType* DebugAction__typeof(); } } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct GiveFocus__uType; GiveFocus__uType* GiveFocus__typeof(); } } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct Hide__uType; Hide__uType* Hide__typeof(); } } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct LaunchEmail__uType; LaunchEmail__uType* LaunchEmail__typeof(); } } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct LaunchMaps__uType; LaunchMaps__uType* LaunchMaps__typeof(); } } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct LaunchUri__uType; LaunchUri__uType* LaunchUri__typeof(); } } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct Pause__uType; Pause__uType* Pause__typeof(); } } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct PlaybackAction__uType; PlaybackAction__uType* PlaybackAction__typeof(); } } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct PlayTo__uType; PlayTo__uType* PlayTo__typeof(); } } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct Pulse__uType; Pulse__uType* Pulse__typeof(); } } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct Resume__uType; Resume__uType* Resume__typeof(); } } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct SendToBack__uType; SendToBack__uType* SendToBack__typeof(); } } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct Set__float__uType; Set__float__uType* Set__float__typeof(); } } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct Show__uType; Show__uType* Show__typeof(); } } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct Stop__uType; Stop__uType* Stop__typeof(); } } } }
namespace app { namespace Fuse { namespace Triggers { namespace Actions { struct TriggerAction__uType; TriggerAction__uType* TriggerAction__typeof(); } } } }
namespace app { namespace Fuse { namespace Triggers { struct LayoutAnimation__uType; LayoutAnimation__uType* LayoutAnimation__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { struct LayoutAnimation_PositionChangeMode__uType; LayoutAnimation_PositionChangeMode__uType* LayoutAnimation_PositionChangeMode__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { struct LayoutAnimation_ResizeChangeMode__uType; LayoutAnimation_ResizeChangeMode__uType* LayoutAnimation_ResizeChangeMode__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { struct ProgressAnimation__uType; ProgressAnimation__uType* ProgressAnimation__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { struct State__uType; State__uType* State__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { struct StateGroup__uType; StateGroup__uType* StateGroup__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { struct Trigger__uType; Trigger__uType* Trigger__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { struct WhileBool__uType; WhileBool__uType* WhileBool__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { struct WhileDisabled__uType; WhileDisabled__uType* WhileDisabled__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { struct WhileEnabled__uType; WhileEnabled__uType* WhileEnabled__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { struct WhileEnabledDisabledTrigger__uType; WhileEnabledDisabledTrigger__uType* WhileEnabledDisabledTrigger__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { struct WhileFailed__uType; WhileFailed__uType* WhileFailed__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { struct WhileFalse__uType; WhileFalse__uType* WhileFalse__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { struct WhileFocused__uType; WhileFocused__uType* WhileFocused__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { struct WhileFocusWithin__uType; WhileFocusWithin__uType* WhileFocusWithin__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { struct WhileInteracting__uType; WhileInteracting__uType* WhileInteracting__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { struct WhileKeyboardVisible__uType; WhileKeyboardVisible__uType* WhileKeyboardVisible__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { struct WhileKeyboardVisible_RelativeToKeyboardMode__uType; WhileKeyboardVisible_RelativeToKeyboardMode__uType* WhileKeyboardVisible_RelativeToKeyboardMode__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { struct WhileLoading__uType; WhileLoading__uType* WhileLoading__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { struct WhileTrigger__uType; WhileTrigger__uType* WhileTrigger__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { struct WhileTrue__uType; WhileTrue__uType* WhileTrue__typeof(); } } }
namespace app { namespace Fuse { namespace Triggers { struct WhileValue__bool__uType; WhileValue__bool__uType* WhileValue__bool__typeof(); } } }
namespace app { namespace Fuse { namespace Vibration { struct Vibrate__uType; Vibrate__uType* Vibrate__typeof(); } } }
namespace app { namespace Fuse { namespace Vibration { struct Vibration__uType; Vibration__uType* Vibration__typeof(); } } }
namespace app { namespace Fuse { struct App__uType; App__uType* App__typeof(); } }
namespace app { namespace Fuse { struct App_FrameCallback__uType; App_FrameCallback__uType* App_FrameCallback__typeof(); } }
namespace app { namespace Fuse { struct App_TimeListener__uType; App_TimeListener__uType* App_TimeListener__typeof(); } }
namespace app { namespace Fuse { struct AppBase__uType; AppBase__uType* AppBase__typeof(); } }
namespace app { namespace Fuse { struct BeginRemoveArgs__uType; BeginRemoveArgs__uType* BeginRemoveArgs__typeof(); } }
namespace app { namespace Fuse { struct Behavior__uType; Behavior__uType* Behavior__typeof(); } }
namespace app { namespace Fuse { struct CacheFramebuffer__uType; CacheFramebuffer__uType* CacheFramebuffer__typeof(); } }
namespace app { namespace Fuse { struct DataContextChangedArgs__uType; DataContextChangedArgs__uType* DataContextChangedArgs__typeof(); } }
namespace app { namespace Fuse { struct Diagnostics__uType; Diagnostics__uType* Diagnostics__typeof(); } }
namespace app { namespace Fuse { struct DrawArgs__uType; DrawArgs__uType* DrawArgs__typeof(); } }
namespace app { namespace Fuse { struct DrawContext__uType; DrawContext__uType* DrawContext__typeof(); } }
namespace app { namespace Fuse { struct DrawHelpers__uType; DrawHelpers__uType* DrawHelpers__typeof(); } }
namespace app { namespace Fuse { struct FastMatrix__uType; FastMatrix__uType* FastMatrix__typeof(); } }
namespace app { namespace Fuse { struct FixedViewport__uType; FixedViewport__uType* FixedViewport__typeof(); } }
namespace app { namespace Fuse { struct Font__uType; Font__uType* Font__typeof(); } }
namespace app { namespace Fuse { struct Fonts__uType; Fonts__uType* Fonts__typeof(); } }
namespace app { namespace Fuse { struct FramebufferPool__uType; FramebufferPool__uType* FramebufferPool__typeof(); } }
namespace app { namespace Fuse { struct FramebufferPoolImpl__uType; FramebufferPoolImpl__uType* FramebufferPoolImpl__typeof(); } }
namespace app { namespace Fuse { struct FrustumViewport__uType; FrustumViewport__uType* FrustumViewport__typeof(); } }
namespace app { namespace Fuse { struct GraphicsTheme__uType; GraphicsTheme__uType* GraphicsTheme__typeof(); } }
namespace app { namespace Fuse { struct HitTestContext__uType; HitTestContext__uType* HitTestContext__typeof(); } }
namespace app { namespace Fuse { struct HitTestResult__uType; HitTestResult__uType* HitTestResult__typeof(); } }
namespace app { namespace Fuse { struct KeyboardBootstrapper__uType; KeyboardBootstrapper__uType* KeyboardBootstrapper__typeof(); } }
namespace app { namespace Fuse { struct Launcher__uType; Launcher__uType* Launcher__typeof(); } }
namespace app { namespace Fuse { struct MobileBootstrapping__uType; MobileBootstrapping__uType* MobileBootstrapping__typeof(); } }
namespace app { namespace Fuse { struct Node__uType; Node__uType* Node__typeof(); } }
namespace app { namespace Fuse { struct Node_HitTestRecord__uType; Node_HitTestRecord__uType* Node_HitTestRecord__typeof(); } }
namespace app { namespace Fuse { struct NodeBounds__uType; NodeBounds__uType* NodeBounds__typeof(); } }
namespace app { namespace Fuse { struct NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__uType; NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__uType* NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__typeof(); } }
namespace app { namespace Fuse { struct NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__uType; NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__uType* NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__typeof(); } }
namespace app { namespace Fuse { struct NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__uType; NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__uType* NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__typeof(); } }
namespace app { namespace Fuse { struct NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__uType; NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__uType* NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__typeof(); } }
namespace app { namespace Fuse { struct NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__uType; NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__uType* NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__typeof(); } }
namespace app { namespace Fuse { struct NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__uType; NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__uType* NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__typeof(); } }
namespace app { namespace Fuse { struct NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__uType; NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__uType* NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__typeof(); } }
namespace app { namespace Fuse { struct NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__uType; NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__uType* NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__typeof(); } }
namespace app { namespace Fuse { struct NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__uType; NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__uType* NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__typeof(); } }
namespace app { namespace Fuse { struct NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__uType; NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__uType* NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__typeof(); } }
namespace app { namespace Fuse { struct NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__uType; NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__uType* NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__typeof(); } }
namespace app { namespace Fuse { struct NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__uType; NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__uType* NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__typeof(); } }
namespace app { namespace Fuse { struct NodeEventArgs__uType; NodeEventArgs__uType* NodeEventArgs__typeof(); } }
namespace app { namespace Fuse { struct OrthographicFrustum__uType; OrthographicFrustum__uType* OrthographicFrustum__typeof(); } }
namespace app { namespace Fuse { struct PlacedArgs__uType; PlacedArgs__uType* PlacedArgs__typeof(); } }
namespace app { namespace Fuse { struct Properties__uType; Properties__uType* Properties__typeof(); } }
namespace app { namespace Fuse { struct PropertyHandle__uType; PropertyHandle__uType* PropertyHandle__typeof(); } }
namespace app { namespace Fuse { struct RenderTargetEntry__uType; RenderTargetEntry__uType* RenderTargetEntry__typeof(); } }
namespace app { namespace Fuse { struct RequestBringIntoViewArgs__uType; RequestBringIntoViewArgs__uType* RequestBringIntoViewArgs__typeof(); } }
namespace app { namespace Fuse { struct RootViewport__uType; RootViewport__uType* RootViewport__typeof(); } }
namespace app { namespace Fuse { struct Rotation__uType; Rotation__uType* Rotation__typeof(); } }
namespace app { namespace Fuse { struct Scaling__uType; Scaling__uType* Scaling__typeof(); } }
namespace app { namespace Fuse { struct Shear__uType; Shear__uType* Shear__typeof(); } }
namespace app { namespace Fuse { struct Stage__uType; Stage__uType* Stage__typeof(); } }
namespace app { namespace Fuse { struct Style__uType; Style__uType* Style__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Android_Button__float4__uType; StyleProperty__Fuse_Android_Button__float4__uType* StyleProperty__Fuse_Android_Button__float4__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Button__string__uType; StyleProperty__Fuse_Controls_Button__string__uType* StyleProperty__Fuse_Controls_Button__string__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__uType; StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__uType* StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_GraphicsView__float4__uType; StyleProperty__Fuse_Controls_GraphicsView__float4__uType* StyleProperty__Fuse_Controls_GraphicsView__float4__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Grid__float__uType; StyleProperty__Fuse_Controls_Grid__float__uType* StyleProperty__Fuse_Controls_Grid__float__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__uType; StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__uType* StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__uType; StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__uType* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__uType; StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__uType* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__uType; StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__uType* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__uType; StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__uType* StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Number__float__uType; StyleProperty__Fuse_Controls_Number__float__uType* StyleProperty__Fuse_Controls_Number__float__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Number__string__uType; StyleProperty__Fuse_Controls_Number__string__uType* StyleProperty__Fuse_Controls_Number__string__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__uType; StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__uType* StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__uType; StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__uType* StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Panel__Fuse_Node__uType; StyleProperty__Fuse_Controls_Panel__Fuse_Node__uType* StyleProperty__Fuse_Controls_Panel__Fuse_Node__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__uType; StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__uType* StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_RangeControl__double__uType; StyleProperty__Fuse_Controls_RangeControl__double__uType* StyleProperty__Fuse_Controls_RangeControl__double__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Rectangle__float4__uType; StyleProperty__Fuse_Controls_Rectangle__float4__uType* StyleProperty__Fuse_Controls_Rectangle__float4__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__uType; StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__uType* StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Shape__float__uType; StyleProperty__Fuse_Controls_Shape__float__uType* StyleProperty__Fuse_Controls_Shape__float__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__uType; StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__uType* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__uType; StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__uType* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_StackPanel__float__uType; StyleProperty__Fuse_Controls_StackPanel__float__uType* StyleProperty__Fuse_Controls_StackPanel__float__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__uType; StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__uType* StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_TextControl__float__uType; StyleProperty__Fuse_Controls_TextControl__float__uType* StyleProperty__Fuse_Controls_TextControl__float__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_TextControl__float4__uType; StyleProperty__Fuse_Controls_TextControl__float4__uType* StyleProperty__Fuse_Controls_TextControl__float4__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__uType; StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__uType* StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__uType; StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__uType* StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_TextControl__Fuse_Font__uType; StyleProperty__Fuse_Controls_TextControl__Fuse_Font__uType* StyleProperty__Fuse_Controls_TextControl__Fuse_Font__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_TextControl__string__uType; StyleProperty__Fuse_Controls_TextControl__string__uType* StyleProperty__Fuse_Controls_TextControl__string__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_TextInput__bool__uType; StyleProperty__Fuse_Controls_TextInput__bool__uType* StyleProperty__Fuse_Controls_TextInput__bool__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_TextInput__float4__uType; StyleProperty__Fuse_Controls_TextInput__float4__uType* StyleProperty__Fuse_Controls_TextInput__float4__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__uType; StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__uType* StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_ToggleControl__bool__uType; StyleProperty__Fuse_Controls_ToggleControl__bool__uType* StyleProperty__Fuse_Controls_ToggleControl__bool__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Elements_Element__bool__uType; StyleProperty__Fuse_Elements_Element__bool__uType* StyleProperty__Fuse_Elements_Element__bool__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Elements_Element__float__uType; StyleProperty__Fuse_Elements_Element__float__uType* StyleProperty__Fuse_Elements_Element__float__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Elements_Element__float2__uType; StyleProperty__Fuse_Elements_Element__float2__uType* StyleProperty__Fuse_Elements_Element__float2__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Elements_Element__float4__uType; StyleProperty__Fuse_Elements_Element__float4__uType* StyleProperty__Fuse_Elements_Element__float4__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__uType; StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__uType* StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__uType; StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__uType* StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__uType; StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__uType* StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__uType; StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__uType* StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_iOS_Button__float4__uType; StyleProperty__Fuse_iOS_Button__float4__uType* StyleProperty__Fuse_iOS_Button__float4__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Node__bool__uType; StyleProperty__Fuse_Node__bool__uType* StyleProperty__Fuse_Node__bool__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Node__Fuse_Node__uType; StyleProperty__Fuse_Node__Fuse_Node__uType* StyleProperty__Fuse_Node__Fuse_Node__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Node__string__uType; StyleProperty__Fuse_Node__string__uType* StyleProperty__Fuse_Node__string__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Shapes_Rectangle__float4__uType; StyleProperty__Fuse_Shapes_Rectangle__float4__uType* StyleProperty__Fuse_Shapes_Rectangle__float4__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Shapes_Shape__float__uType; StyleProperty__Fuse_Shapes_Shape__float__uType* StyleProperty__Fuse_Shapes_Shape__float__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__uType; StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__uType* StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__uType; StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__uType* StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__typeof(); } }
namespace app { namespace Fuse { struct StyleProperty__uType; StyleProperty__uType* StyleProperty__typeof(); } }
namespace app { namespace Fuse { struct StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__uType; StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__uType* StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__typeof(); } }
namespace app { namespace Fuse { struct StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__uType; StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__uType* StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__typeof(); } }
namespace app { namespace Fuse { struct Theme__uType; Theme__uType* Theme__typeof(); } }
namespace app { namespace Fuse { struct Time__uType; Time__uType* Time__typeof(); } }
namespace app { namespace Fuse { struct Transform__uType; Transform__uType* Transform__typeof(); } }
namespace app { namespace Fuse { struct Translation__uType; Translation__uType* Translation__typeof(); } }
namespace app { namespace Fuse { struct TranslationModes__uType; TranslationModes__uType* TranslationModes__typeof(); } }
namespace app { namespace Fuse { struct TranslationModes_LocalMode__uType; TranslationModes_LocalMode__uType* TranslationModes_LocalMode__typeof(); } }
namespace app { namespace Fuse { struct TranslationModes_ParentSizeMode__uType; TranslationModes_ParentSizeMode__uType* TranslationModes_ParentSizeMode__typeof(); } }
namespace app { namespace Fuse { struct TranslationModes_SizeMode__uType; TranslationModes_SizeMode__uType* TranslationModes_SizeMode__typeof(); } }
namespace app { namespace Fuse { struct UnhandledExceptionArgs__uType; UnhandledExceptionArgs__uType* UnhandledExceptionArgs__typeof(); } }
namespace app { namespace Fuse { struct UpdateListener__uType; UpdateListener__uType* UpdateListener__typeof(); } }
namespace app { namespace Fuse { struct UpdateManager__uType; UpdateManager__uType* UpdateManager__typeof(); } }
namespace app { namespace OpenGL { struct GL__uType; GL__uType* GL__typeof(); } }
namespace app { namespace OpenGL { struct GLBufferHandle__uType; GLBufferHandle__uType* GLBufferHandle__typeof(); } }
namespace app { namespace OpenGL { struct GLFramebufferHandle__uType; GLFramebufferHandle__uType* GLFramebufferHandle__typeof(); } }
namespace app { namespace OpenGL { struct GLProgramHandle__uType; GLProgramHandle__uType* GLProgramHandle__typeof(); } }
namespace app { namespace OpenGL { struct GLRenderbufferHandle__uType; GLRenderbufferHandle__uType* GLRenderbufferHandle__typeof(); } }
namespace app { namespace OpenGL { struct GLShaderHandle__uType; GLShaderHandle__uType* GLShaderHandle__typeof(); } }
namespace app { namespace OpenGL { struct GLTextureHandle__uType; GLTextureHandle__uType* GLTextureHandle__typeof(); } }
namespace app { namespace Uno { namespace Collections { struct ConcurrentCollection__Fuse_Animations_IMixerMaster__uType; ConcurrentCollection__Fuse_Animations_IMixerMaster__uType* ConcurrentCollection__Fuse_Animations_IMixerMaster__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct ConcurrentCollection__Uno_EventHandler__uType; ConcurrentCollection__Uno_EventHandler__uType* ConcurrentCollection__Uno_EventHandler__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__uType; ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__uType* ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct ConcurrentCollection1_DeferLockImpl__Uno_EventHandler__uType; ConcurrentCollection1_DeferLockImpl__Uno_EventHandler__uType* ConcurrentCollection1_DeferLockImpl__Uno_EventHandler__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster__uType; ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster__uType* ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct ConcurrentCollection1_ModItem__Uno_EventHandler__uType; ConcurrentCollection1_ModItem__Uno_EventHandler__uType* ConcurrentCollection1_ModItem__Uno_EventHandler__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Android_android_view_View__Fuse_Node__uType; Dictionary__Android_android_view_View__Fuse_Node__uType* Dictionary__Android_android_view_View__Fuse_Node__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__char__float__uType; Dictionary__char__float__uType* Dictionary__char__float__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType; Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType* Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__char__Uno_Content_Fonts_RenderedGlyph__uType; Dictionary__char__Uno_Content_Fonts_RenderedGlyph__uType* Dictionary__char__Uno_Content_Fonts_RenderedGlyph__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__framebuffer__bool__uType; Dictionary__framebuffer__bool__uType* Dictionary__framebuffer__bool__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__framebuffer__int__uType; Dictionary__framebuffer__int__uType* Dictionary__framebuffer__int__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType; Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType* Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType; Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType; Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType* Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_IFlush__bool__uType; Dictionary__Fuse_IFlush__bool__uType* Dictionary__Fuse_IFlush__bool__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType; Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType* Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Fuse_Node__bool__uType; Dictionary__Fuse_Node__bool__uType* Dictionary__Fuse_Node__bool__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Fuse_Input_Capturer__uType; Dictionary__int__Fuse_Input_Capturer__uType* Dictionary__int__Fuse_Input_Capturer__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Fuse_Input_Pointer_PointerRecord__uType; Dictionary__int__Fuse_Input_Pointer_PointerRecord__uType* Dictionary__int__Fuse_Input_Pointer_PointerRecord__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Fuse_Scripting_Callback__uType; Dictionary__int__Fuse_Scripting_Callback__uType* Dictionary__int__Fuse_Scripting_Callback__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__string__uType; Dictionary__int__string__uType* Dictionary__int__string__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___uType; Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType; Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType* Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__object__object__uType; Dictionary__object__object__uType* Dictionary__object__object__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__object__string__uType; Dictionary__object__string__uType* Dictionary__object__string__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Android_android_graphics_Bitmap__uType; Dictionary__string__Android_android_graphics_Bitmap__uType* Dictionary__string__Android_android_graphics_Bitmap__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Android_android_graphics_Typeface__uType; Dictionary__string__Android_android_graphics_Typeface__uType* Dictionary__string__Android_android_graphics_Typeface__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__bool__uType; Dictionary__string__bool__uType* Dictionary__string__bool__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Experimental_Audio_Channel__uType; Dictionary__string__Experimental_Audio_Channel__uType* Dictionary__string__Experimental_Audio_Channel__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Experimental_Audio_Player__uType; Dictionary__string__Experimental_Audio_Player__uType* Dictionary__string__Experimental_Audio_Player__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Experimental_Audio_Sound__uType; Dictionary__string__Experimental_Audio_Sound__uType* Dictionary__string__Experimental_Audio_Sound__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__float__uType; Dictionary__string__float__uType* Dictionary__string__float__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__int__uType; Dictionary__string__int__uType* Dictionary__string__int__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__object__uType; Dictionary__string__object__uType* Dictionary__string__object__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__string__uType; Dictionary__string__string__uType* Dictionary__string__string__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_BundleFile__uType; Dictionary__string__Uno_BundleFile__uType* Dictionary__string__Uno_BundleFile__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType; Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType* Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Collections_List_object___uType; Dictionary__string__Uno_Collections_List_object___uType* Dictionary__string__Uno_Collections_List_object___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Collections_List_Uno_Action___uType; Dictionary__string__Uno_Collections_List_Uno_Action___uType* Dictionary__string__Uno_Collections_List_Uno_Action___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType; Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType* Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType; Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType* Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__uType; Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__uType* Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_Type__object__uType; Dictionary__Uno_Type__object__uType* Dictionary__Uno_Type__object__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType; Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType* Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType; Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType* Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__Android_android_view_View__Fuse_Node__uType; Dictionary2_Bucket__Android_android_view_View__Fuse_Node__uType* Dictionary2_Bucket__Android_android_view_View__Fuse_Node__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__char__float__uType; Dictionary2_Bucket__char__float__uType* Dictionary2_Bucket__char__float__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType; Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__uType* Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__uType; Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__uType* Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__framebuffer__bool__uType; Dictionary2_Bucket__framebuffer__bool__uType* Dictionary2_Bucket__framebuffer__bool__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__framebuffer__int__uType; Dictionary2_Bucket__framebuffer__int__uType* Dictionary2_Bucket__framebuffer__int__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType; Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__uType* Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType; Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType; Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__uType* Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__Fuse_IFlush__bool__uType; Dictionary2_Bucket__Fuse_IFlush__bool__uType* Dictionary2_Bucket__Fuse_IFlush__bool__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType; Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType* Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__Fuse_Node__bool__uType; Dictionary2_Bucket__Fuse_Node__bool__uType* Dictionary2_Bucket__Fuse_Node__bool__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__int__Fuse_Input_Capturer__uType; Dictionary2_Bucket__int__Fuse_Input_Capturer__uType* Dictionary2_Bucket__int__Fuse_Input_Capturer__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord__uType; Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord__uType* Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__int__Fuse_Scripting_Callback__uType; Dictionary2_Bucket__int__Fuse_Scripting_Callback__uType* Dictionary2_Bucket__int__Fuse_Scripting_Callback__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__int__string__uType; Dictionary2_Bucket__int__string__uType* Dictionary2_Bucket__int__string__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer___uType; Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType; Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___uType* Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__object__object__uType; Dictionary2_Bucket__object__object__uType* Dictionary2_Bucket__object__object__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__object__string__uType; Dictionary2_Bucket__object__string__uType* Dictionary2_Bucket__object__string__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__string__Android_android_graphics_Bitmap__uType; Dictionary2_Bucket__string__Android_android_graphics_Bitmap__uType* Dictionary2_Bucket__string__Android_android_graphics_Bitmap__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__string__Android_android_graphics_Typeface__uType; Dictionary2_Bucket__string__Android_android_graphics_Typeface__uType* Dictionary2_Bucket__string__Android_android_graphics_Typeface__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__string__bool__uType; Dictionary2_Bucket__string__bool__uType* Dictionary2_Bucket__string__bool__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__string__Experimental_Audio_Channel__uType; Dictionary2_Bucket__string__Experimental_Audio_Channel__uType* Dictionary2_Bucket__string__Experimental_Audio_Channel__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__string__Experimental_Audio_Player__uType; Dictionary2_Bucket__string__Experimental_Audio_Player__uType* Dictionary2_Bucket__string__Experimental_Audio_Player__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__string__Experimental_Audio_Sound__uType; Dictionary2_Bucket__string__Experimental_Audio_Sound__uType* Dictionary2_Bucket__string__Experimental_Audio_Sound__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__string__float__uType; Dictionary2_Bucket__string__float__uType* Dictionary2_Bucket__string__float__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__string__int__uType; Dictionary2_Bucket__string__int__uType* Dictionary2_Bucket__string__int__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__string__object__uType; Dictionary2_Bucket__string__object__uType* Dictionary2_Bucket__string__object__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__string__string__uType; Dictionary2_Bucket__string__string__uType* Dictionary2_Bucket__string__string__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__string__Uno_BundleFile__uType; Dictionary2_Bucket__string__Uno_BundleFile__uType* Dictionary2_Bucket__string__Uno_BundleFile__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType; Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType* Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__string__Uno_Collections_List_object___uType; Dictionary2_Bucket__string__Uno_Collections_List_object___uType* Dictionary2_Bucket__string__Uno_Collections_List_object___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___uType; Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___uType* Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType; Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__uType* Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType; Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType* Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float__uType; Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float__uType* Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__Uno_Type__object__uType; Dictionary2_Bucket__Uno_Type__object__uType* Dictionary2_Bucket__Uno_Type__object__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType; Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__uType* Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType; Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType* Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__uType; Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__uType* Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType; Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType; Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType* Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__int__Fuse_Input_Capturer__uType; Dictionary2_Enumerator__int__Fuse_Input_Capturer__uType* Dictionary2_Enumerator__int__Fuse_Input_Capturer__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__uType; Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__uType* Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType; Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__Experimental_Audio_Channel__uType; Dictionary2_Enumerator__string__Experimental_Audio_Channel__uType* Dictionary2_Enumerator__string__Experimental_Audio_Channel__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__string__uType; Dictionary2_Enumerator__string__string__uType* Dictionary2_Enumerator__string__string__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__Uno_Collections_List_object___uType; Dictionary2_Enumerator__string__Uno_Collections_List_object___uType* Dictionary2_Enumerator__string__Uno_Collections_List_object___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__string__string__uType; Dictionary2_KeyCollection__string__string__uType* Dictionary2_KeyCollection__string__string__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection_Enumerator__string__string__uType; Dictionary2_KeyCollection_Enumerator__string__string__uType* Dictionary2_KeyCollection_Enumerator__string__string__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType; Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType; Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType* Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__string__Uno_Collections_List_object___uType; Dictionary2_ValueCollection__string__Uno_Collections_List_object___uType* Dictionary2_ValueCollection__string__Uno_Collections_List_object___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType; Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType; Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___uType* Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object___uType; Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object___uType* Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct EmptyEnumerable__float2__uType; EmptyEnumerable__float2__uType* EmptyEnumerable__float2__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct EmptyEnumerator__float2__uType; EmptyEnumerator__float2__uType* EmptyEnumerator__float2__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct EnumerableExtensions__uType; EnumerableExtensions__uType* EnumerableExtensions__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct EnumerableExtensions_LinkedList__float2__uType; EnumerableExtensions_LinkedList__float2__uType* EnumerableExtensions_LinkedList__float2__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct EnumerableExtensions_LinkedList__Fuse_Drawing_Border__uType; EnumerableExtensions_LinkedList__Fuse_Drawing_Border__uType* EnumerableExtensions_LinkedList__Fuse_Drawing_Border__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__uType; EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__uType* EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__uType; EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__uType* EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct HashSet__framebuffer__uType; HashSet__framebuffer__uType* HashSet__framebuffer__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct HashSet__Fuse_IFlush__uType; HashSet__Fuse_IFlush__uType* HashSet__Fuse_IFlush__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct HashSet__Fuse_Node__uType; HashSet__Fuse_Node__uType* HashSet__Fuse_Node__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct HashSet1_Enumerator__Fuse_IFlush__uType; HashSet1_Enumerator__Fuse_IFlush__uType* HashSet1_Enumerator__Fuse_IFlush__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct HashSet1_Enumerator__Fuse_Node__uType; HashSet1_Enumerator__Fuse_Node__uType* HashSet1_Enumerator__Fuse_Node__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct IListExtensions__uType; IListExtensions__uType* IListExtensions__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__uType; KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__uType* KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType; KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__uType* KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType; KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__uType* KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__int__Fuse_Input_Capturer__uType; KeyValuePair__int__Fuse_Input_Capturer__uType* KeyValuePair__int__Fuse_Input_Capturer__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__uType; KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__uType* KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___uType; KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___uType* KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__string__Experimental_Audio_Channel__uType; KeyValuePair__string__Experimental_Audio_Channel__uType* KeyValuePair__string__Experimental_Audio_Channel__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__string__string__uType; KeyValuePair__string__string__uType* KeyValuePair__string__string__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__string__Uno_Collections_List_object___uType; KeyValuePair__string__Uno_Collections_List_object___uType* KeyValuePair__string__Uno_Collections_List_object___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType; LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType* LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType; LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__uType* LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__byte____uType; List__byte____uType* List__byte____typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__char__uType; List__char__uType* List__char__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Experimental_Audio_Channel__uType; List__Experimental_Audio_Channel__uType* List__Experimental_Audio_Channel__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__float2__uType; List__float2__uType* List__float2__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__framebuffer__uType; List__framebuffer__uType* List__framebuffer__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_Animator__uType; List__Fuse_Animations_Animator__uType* List__Fuse_Animations_Animator__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_IMixerMaster__uType; List__Fuse_Animations_IMixerMaster__uType* List__Fuse_Animations_IMixerMaster__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_bool___uType; List__Fuse_Animations_MixerHandle_bool___uType* List__Fuse_Animations_MixerHandle_bool___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_float___uType; List__Fuse_Animations_MixerHandle_float___uType* List__Fuse_Animations_MixerHandle_float___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_float4___uType; List__Fuse_Animations_MixerHandle_float4___uType* List__Fuse_Animations_MixerHandle_float4___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___uType; List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___uType* List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Animations_MixerHandle_Fuse_Transform___uType; List__Fuse_Animations_MixerHandle_Fuse_Transform___uType* List__Fuse_Animations_MixerHandle_Fuse_Transform___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Behavior__uType; List__Fuse_Behavior__uType* List__Fuse_Behavior__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_CacheFramebuffer__uType; List__Fuse_CacheFramebuffer__uType* List__Fuse_CacheFramebuffer__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Controls_Internal_WordWrapperWord__uType; List__Fuse_Controls_Internal_WordWrapperWord__uType* List__Fuse_Controls_Internal_WordWrapperWord__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Controls_Internal_WrappedLine__uType; List__Fuse_Controls_Internal_WrappedLine__uType* List__Fuse_Controls_Internal_WrappedLine__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Controls_TextEdit_LineCacheLine__uType; List__Fuse_Controls_TextEdit_LineCacheLine__uType* List__Fuse_Controls_TextEdit_LineCacheLine__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_Brush__uType; List__Fuse_Drawing_Brush__uType* List__Fuse_Drawing_Brush__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_Contour__uType; List__Fuse_Drawing_Contour__uType* List__Fuse_Drawing_Contour__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_PathGeometry__uType; List__Fuse_Drawing_PathGeometry__uType* List__Fuse_Drawing_PathGeometry__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Drawing_Stroke__uType; List__Fuse_Drawing_Stroke__uType* List__Fuse_Drawing_Stroke__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Effects_Effect__uType; List__Fuse_Effects_Effect__uType* List__Fuse_Effects_Effect__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Elements_Element__uType; List__Fuse_Elements_Element__uType* List__Fuse_Elements_Element__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Elements_ElementAtlas__uType; List__Fuse_Elements_ElementAtlas__uType* List__Fuse_Elements_ElementAtlas__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Elements_ElementBatch__uType; List__Fuse_Elements_ElementBatch__uType* List__Fuse_Elements_ElementBatch__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Elements_ElementBatchEntry__uType; List__Fuse_Elements_ElementBatchEntry__uType* List__Fuse_Elements_ElementBatchEntry__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Elements_IElementBatchDrawable__uType; List__Fuse_Elements_IElementBatchDrawable__uType* List__Fuse_Elements_IElementBatchDrawable__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Entities_Entity__uType; List__Fuse_Entities_Entity__uType* List__Fuse_Entities_Entity__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_Capturer__uType; List__Fuse_Input_Capturer__uType* List__Fuse_Input_Capturer__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_FocusGainedHandler__uType; List__Fuse_Input_FocusGainedHandler__uType* List__Fuse_Input_FocusGainedHandler__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_FocusLostHandler__uType; List__Fuse_Input_FocusLostHandler__uType* List__Fuse_Input_FocusLostHandler__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_IsFocusableChangedHandler__uType; List__Fuse_Input_IsFocusableChangedHandler__uType* List__Fuse_Input_IsFocusableChangedHandler__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_KeyPressedHandler__uType; List__Fuse_Input_KeyPressedHandler__uType* List__Fuse_Input_KeyPressedHandler__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_KeyReleasedHandler__uType; List__Fuse_Input_KeyReleasedHandler__uType* List__Fuse_Input_KeyReleasedHandler__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_Pointer_PELHolder__uType; List__Fuse_Input_Pointer_PELHolder__uType* List__Fuse_Input_Pointer_PELHolder__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_PointerEnteredHandler__uType; List__Fuse_Input_PointerEnteredHandler__uType* List__Fuse_Input_PointerEnteredHandler__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_PointerLeftHandler__uType; List__Fuse_Input_PointerLeftHandler__uType* List__Fuse_Input_PointerLeftHandler__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_PointerMovedHandler__uType; List__Fuse_Input_PointerMovedHandler__uType* List__Fuse_Input_PointerMovedHandler__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_PointerPressedHandler__uType; List__Fuse_Input_PointerPressedHandler__uType* List__Fuse_Input_PointerPressedHandler__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_PointerReleasedHandler__uType; List__Fuse_Input_PointerReleasedHandler__uType* List__Fuse_Input_PointerReleasedHandler__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_PointerWheelMovedHandler__uType; List__Fuse_Input_PointerWheelMovedHandler__uType* List__Fuse_Input_PointerWheelMovedHandler__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_TextEnteredHandler__uType; List__Fuse_Input_TextEnteredHandler__uType* List__Fuse_Input_TextEnteredHandler__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_iOS_StatusBarConfig__uType; List__Fuse_iOS_StatusBarConfig__uType* List__Fuse_iOS_StatusBarConfig__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_IViewport__uType; List__Fuse_IViewport__uType* List__Fuse_IViewport__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Layouts_Column__uType; List__Fuse_Layouts_Column__uType* List__Fuse_Layouts_Column__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Layouts_DefinitionBase_ParseDataItem__uType; List__Fuse_Layouts_DefinitionBase_ParseDataItem__uType* List__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Layouts_Row__uType; List__Fuse_Layouts_Row__uType* List__Fuse_Layouts_Row__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Navigation_INavigationAnimator__uType; List__Fuse_Navigation_INavigationAnimator__uType* List__Fuse_Navigation_INavigationAnimator__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Navigation_IPageResourceBinding__uType; List__Fuse_Navigation_IPageResourceBinding__uType* List__Fuse_Navigation_IPageResourceBinding__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Node__uType; List__Fuse_Node__uType* List__Fuse_Node__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Physics_Body__uType; List__Fuse_Physics_Body__uType* List__Fuse_Physics_Body__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Physics_IRule__uType; List__Fuse_Physics_IRule__uType* List__Fuse_Physics_IRule__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Reactive_FuseJS_Timer_Time__uType; List__Fuse_Reactive_FuseJS_Timer_Time__uType* List__Fuse_Reactive_FuseJS_Timer_Time__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Reactive_JavaScript__uType; List__Fuse_Reactive_JavaScript__uType* List__Fuse_Reactive_JavaScript__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_RenderTargetEntry__uType; List__Fuse_RenderTargetEntry__uType* List__Fuse_RenderTargetEntry__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Resources_ImageSource__uType; List__Fuse_Resources_ImageSource__uType* List__Fuse_Resources_ImageSource__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Resources_IMemoryResource__uType; List__Fuse_Resources_IMemoryResource__uType* List__Fuse_Resources_IMemoryResource__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Resources_ISoftDisposable__uType; List__Fuse_Resources_ISoftDisposable__uType* List__Fuse_Resources_ISoftDisposable__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Scripting_INameListener__uType; List__Fuse_Scripting_INameListener__uType* List__Fuse_Scripting_INameListener__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Scripting_NativeMember__uType; List__Fuse_Scripting_NativeMember__uType* List__Fuse_Scripting_NativeMember__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Stage__uType; List__Fuse_Stage__uType* List__Fuse_Stage__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Style__uType; List__Fuse_Style__uType* List__Fuse_Style__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_StyleProperty__uType; List__Fuse_StyleProperty__uType* List__Fuse_StyleProperty__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Transform__uType; List__Fuse_Transform__uType* List__Fuse_Transform__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Triggers_Actions_TriggerAction__uType; List__Fuse_Triggers_Actions_TriggerAction__uType* List__Fuse_Triggers_Actions_TriggerAction__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_UpdateListener__uType; List__Fuse_UpdateListener__uType* List__Fuse_UpdateListener__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__int__uType; List__int__uType* List__int__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__object__uType; List__object__uType* List__object__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__string__uType; List__string__uType* List__string__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Action__uType; List__Uno_Action__uType* List__Uno_Action__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_CharPunctuationChecker_PunctuationRange__uType; List__Uno_CharPunctuationChecker_PunctuationRange__uType* List__Uno_CharPunctuationChecker_PunctuationRange__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___uType; List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___uType* List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___uType; List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___uType* List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_EventHandler__uType; List__Uno_EventHandler__uType* List__Uno_EventHandler__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Graphics_PolygonFace__uType; List__Uno_Graphics_PolygonFace__uType* List__Uno_Graphics_PolygonFace__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Net_Http_HttpMessageHandlerRequest__uType; List__Uno_Net_Http_HttpMessageHandlerRequest__uType* List__Uno_Net_Http_HttpMessageHandlerRequest__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Platform_Key__uType; List__Uno_Platform_Key__uType* List__Uno_Platform_Key__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Recti__uType; List__Uno_Recti__uType* List__Uno_Recti__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Runtime_Implementation_Internal_FormatStringToken__uType; List__Uno_Runtime_Implementation_Internal_FormatStringToken__uType* List__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_UX_FileSource__uType; List__Uno_UX_FileSource__uType* List__Uno_UX_FileSource__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_UX_IFactory__uType; List__Uno_UX_IFactory__uType* List__Uno_UX_IFactory__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_UX_ITemplate__uType; List__Uno_UX_ITemplate__uType* List__Uno_UX_ITemplate__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_UX_Resource__uType; List__Uno_UX_Resource__uType* List__Uno_UX_Resource__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__byte____uType; List1_Enumerator__byte____uType* List1_Enumerator__byte____typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Experimental_Audio_Channel__uType; List1_Enumerator__Experimental_Audio_Channel__uType* List1_Enumerator__Experimental_Audio_Channel__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__float2__uType; List1_Enumerator__float2__uType* List1_Enumerator__float2__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_bool___uType; List1_Enumerator__Fuse_Animations_MixerHandle_bool___uType* List1_Enumerator__Fuse_Animations_MixerHandle_bool___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_float___uType; List1_Enumerator__Fuse_Animations_MixerHandle_float___uType* List1_Enumerator__Fuse_Animations_MixerHandle_float___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_float4___uType; List1_Enumerator__Fuse_Animations_MixerHandle_float4___uType* List1_Enumerator__Fuse_Animations_MixerHandle_float4___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___uType; List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___uType* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___uType; List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___uType* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Behavior__uType; List1_Enumerator__Fuse_Behavior__uType* List1_Enumerator__Fuse_Behavior__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_CacheFramebuffer__uType; List1_Enumerator__Fuse_CacheFramebuffer__uType* List1_Enumerator__Fuse_CacheFramebuffer__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Controls_Internal_WrappedLine__uType; List1_Enumerator__Fuse_Controls_Internal_WrappedLine__uType* List1_Enumerator__Fuse_Controls_Internal_WrappedLine__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__uType; List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__uType* List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Drawing_Brush__uType; List1_Enumerator__Fuse_Drawing_Brush__uType* List1_Enumerator__Fuse_Drawing_Brush__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Drawing_Contour__uType; List1_Enumerator__Fuse_Drawing_Contour__uType* List1_Enumerator__Fuse_Drawing_Contour__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Drawing_Stroke__uType; List1_Enumerator__Fuse_Drawing_Stroke__uType* List1_Enumerator__Fuse_Drawing_Stroke__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Effects_Effect__uType; List1_Enumerator__Fuse_Effects_Effect__uType* List1_Enumerator__Fuse_Effects_Effect__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Elements_Element__uType; List1_Enumerator__Fuse_Elements_Element__uType* List1_Enumerator__Fuse_Elements_Element__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Elements_ElementAtlas__uType; List1_Enumerator__Fuse_Elements_ElementAtlas__uType* List1_Enumerator__Fuse_Elements_ElementAtlas__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Elements_ElementBatch__uType; List1_Enumerator__Fuse_Elements_ElementBatch__uType* List1_Enumerator__Fuse_Elements_ElementBatch__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Elements_ElementBatchEntry__uType; List1_Enumerator__Fuse_Elements_ElementBatchEntry__uType* List1_Enumerator__Fuse_Elements_ElementBatchEntry__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Elements_IElementBatchDrawable__uType; List1_Enumerator__Fuse_Elements_IElementBatchDrawable__uType* List1_Enumerator__Fuse_Elements_IElementBatchDrawable__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Input_Capturer__uType; List1_Enumerator__Fuse_Input_Capturer__uType* List1_Enumerator__Fuse_Input_Capturer__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Layouts_Column__uType; List1_Enumerator__Fuse_Layouts_Column__uType* List1_Enumerator__Fuse_Layouts_Column__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__uType; List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__uType* List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Layouts_Row__uType; List1_Enumerator__Fuse_Layouts_Row__uType* List1_Enumerator__Fuse_Layouts_Row__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Navigation_IPageResourceBinding__uType; List1_Enumerator__Fuse_Navigation_IPageResourceBinding__uType* List1_Enumerator__Fuse_Navigation_IPageResourceBinding__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Node__uType; List1_Enumerator__Fuse_Node__uType* List1_Enumerator__Fuse_Node__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Physics_Body__uType; List1_Enumerator__Fuse_Physics_Body__uType* List1_Enumerator__Fuse_Physics_Body__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Physics_IRule__uType; List1_Enumerator__Fuse_Physics_IRule__uType* List1_Enumerator__Fuse_Physics_IRule__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Reactive_JavaScript__uType; List1_Enumerator__Fuse_Reactive_JavaScript__uType* List1_Enumerator__Fuse_Reactive_JavaScript__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Resources_ImageSource__uType; List1_Enumerator__Fuse_Resources_ImageSource__uType* List1_Enumerator__Fuse_Resources_ImageSource__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Scripting_NativeMember__uType; List1_Enumerator__Fuse_Scripting_NativeMember__uType* List1_Enumerator__Fuse_Scripting_NativeMember__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Style__uType; List1_Enumerator__Fuse_Style__uType* List1_Enumerator__Fuse_Style__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Transform__uType; List1_Enumerator__Fuse_Transform__uType* List1_Enumerator__Fuse_Transform__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__uType; List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__uType* List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__int__uType; List1_Enumerator__int__uType* List1_Enumerator__int__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__string__uType; List1_Enumerator__string__uType* List1_Enumerator__string__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Action__uType; List1_Enumerator__Uno_Action__uType* List1_Enumerator__Uno_Action__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__uType; List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__uType* List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__uType; List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__uType* List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_UX_FileSource__uType; List1_Enumerator__Uno_UX_FileSource__uType* List1_Enumerator__Uno_UX_FileSource__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_UX_IFactory__uType; List1_Enumerator__Uno_UX_IFactory__uType* List1_Enumerator__Uno_UX_IFactory__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Behavior__uType; ObservableList__Fuse_Behavior__uType* ObservableList__Fuse_Behavior__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Drawing_Brush__uType; ObservableList__Fuse_Drawing_Brush__uType* ObservableList__Fuse_Drawing_Brush__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Drawing_Stroke__uType; ObservableList__Fuse_Drawing_Stroke__uType* ObservableList__Fuse_Drawing_Stroke__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Effects_Effect__uType; ObservableList__Fuse_Effects_Effect__uType* ObservableList__Fuse_Effects_Effect__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Entities_Entity__uType; ObservableList__Fuse_Entities_Entity__uType* ObservableList__Fuse_Entities_Entity__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Layouts_Column__uType; ObservableList__Fuse_Layouts_Column__uType* ObservableList__Fuse_Layouts_Column__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Layouts_Row__uType; ObservableList__Fuse_Layouts_Row__uType* ObservableList__Fuse_Layouts_Row__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Node__uType; ObservableList__Fuse_Node__uType* ObservableList__Fuse_Node__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Resources_ImageSource__uType; ObservableList__Fuse_Resources_ImageSource__uType* ObservableList__Fuse_Resources_ImageSource__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Style__uType; ObservableList__Fuse_Style__uType* ObservableList__Fuse_Style__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Transform__uType; ObservableList__Fuse_Transform__uType* ObservableList__Fuse_Transform__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Uno_UX_FileSource__uType; ObservableList__Uno_UX_FileSource__uType* ObservableList__Uno_UX_FileSource__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Uno_UX_IFactory__uType; ObservableList__Uno_UX_IFactory__uType* ObservableList__Uno_UX_IFactory__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Uno_UX_ITemplate__uType; ObservableList__Uno_UX_ITemplate__uType* ObservableList__Uno_UX_ITemplate__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Uno_UX_Resource__uType; ObservableList__Uno_UX_Resource__uType* ObservableList__Uno_UX_Resource__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Queue__object____uType; Queue__object____uType* Queue__object____typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Action_bool___uType; Queue__Uno_Action_bool___uType* Queue__Uno_Action_bool___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Action_Fuse_Camera_PictureResult___uType; Queue__Uno_Action_Fuse_Camera_PictureResult___uType* Queue__Uno_Action_Fuse_Camera_PictureResult___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Action_string___uType; Queue__Uno_Action_string___uType* Queue__Uno_Action_string___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Action_Uno_Exception___uType; Queue__Uno_Action_Uno_Exception___uType* Queue__Uno_Action_Uno_Exception___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Exception__uType; Queue__Uno_Exception__uType* Queue__Uno_Exception__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Threading_Promise_bool___uType; Queue__Uno_Threading_Promise_bool___uType* Queue__Uno_Threading_Promise_bool___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___uType; Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___uType* Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Threading_Promise_string___uType; Queue__Uno_Threading_Promise_string___uType* Queue__Uno_Threading_Promise_string___typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType; SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType* SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType; SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType* SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType; SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType* SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__uType; SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__uType* SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType; SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType* SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType; SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType* SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType; SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType* SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType; SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType* SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct UnionEnumerable__float2__uType; UnionEnumerable__float2__uType* UnionEnumerable__float2__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct UnionEnumerator__float2__uType; UnionEnumerator__float2__uType* UnionEnumerator__float2__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct WhereEnumerable__Fuse_Drawing_Tesselation_Face__uType; WhereEnumerable__Fuse_Drawing_Tesselation_Face__uType* WhereEnumerable__Fuse_Drawing_Tesselation_Face__typeof(); } } }
namespace app { namespace Uno { namespace Collections { struct WhereEnumerator__Fuse_Drawing_Tesselation_Face__uType; WhereEnumerator__Fuse_Drawing_Tesselation_Face__uType* WhereEnumerator__Fuse_Drawing_Tesselation_Face__typeof(); } } }
namespace app { namespace Uno { namespace Compiler { namespace ExportTargetInterop { struct DontCopyStructAttribute__uType; DontCopyStructAttribute__uType* DontCopyStructAttribute__typeof(); } } } }
namespace app { namespace Uno { namespace Compiler { namespace ExportTargetInterop { struct DotNetTypeAttribute__uType; DotNetTypeAttribute__uType* DotNetTypeAttribute__typeof(); } } } }
namespace app { namespace Uno { namespace Compiler { namespace ExportTargetInterop { struct ExportConditionAttribute__uType; ExportConditionAttribute__uType* ExportConditionAttribute__typeof(); } } } }
namespace app { namespace Uno { namespace Compiler { namespace ExportTargetInterop { struct ExportNameAttribute__uType; ExportNameAttribute__uType* ExportNameAttribute__typeof(); } } } }
namespace app { namespace Uno { namespace Compiler { namespace ExportTargetInterop { struct GlslIntrinsicAttribute__uType; GlslIntrinsicAttribute__uType* GlslIntrinsicAttribute__typeof(); } } } }
namespace app { namespace Uno { namespace Compiler { namespace ExportTargetInterop { struct NativeClassAttribute__uType; NativeClassAttribute__uType* NativeClassAttribute__typeof(); } } } }
namespace app { namespace Uno { namespace Compiler { namespace ExportTargetInterop { struct TargetSpecificImplementationAttribute__uType; TargetSpecificImplementationAttribute__uType* TargetSpecificImplementationAttribute__typeof(); } } } }
namespace app { namespace Uno { namespace Compiler { namespace ExportTargetInterop { struct TargetSpecificTypeAttribute__uType; TargetSpecificTypeAttribute__uType* TargetSpecificTypeAttribute__typeof(); } } } }
namespace app { namespace Uno { namespace Compiler { namespace ShaderGenerator { struct ShaderStageInlineAttribute__uType; ShaderStageInlineAttribute__uType* ShaderStageInlineAttribute__typeof(); } } } }
namespace app { namespace Uno { namespace Compiler { struct CallerFilePathAttribute__uType; CallerFilePathAttribute__uType* CallerFilePathAttribute__typeof(); } } }
namespace app { namespace Uno { namespace Compiler { struct CallerLineNumberAttribute__uType; CallerLineNumberAttribute__uType* CallerLineNumberAttribute__typeof(); } } }
namespace app { namespace Uno { namespace Compiler { struct CallerMemberNameAttribute__uType; CallerMemberNameAttribute__uType* CallerMemberNameAttribute__typeof(); } } }
namespace app { namespace Uno { namespace Compiler { struct IgnoreMainClassAttribute__uType; IgnoreMainClassAttribute__uType* IgnoreMainClassAttribute__typeof(); } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct BitmapFont__uType; BitmapFont__uType* BitmapFont__typeof(); } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct BitmapFont_CharPair__uType; BitmapFont_CharPair__uType* BitmapFont_CharPair__typeof(); } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct BitmapFont_GlyphInfo__uType; BitmapFont_GlyphInfo__uType* BitmapFont_GlyphInfo__typeof(); } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct CppFontFace__uType; CppFontFace__uType* CppFontFace__typeof(); } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct CppFontFaceHandle__uType; CppFontFaceHandle__uType* CppFontFaceHandle__typeof(); } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct DefaultTextTransform__uType; DefaultTextTransform__uType* DefaultTextTransform__typeof(); } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct FontFace__uType; FontFace__uType* FontFace__typeof(); } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct FontFaceHelpers__uType; FontFaceHelpers__uType* FontFaceHelpers__typeof(); } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct RenderedGlyph__uType; RenderedGlyph__uType* RenderedGlyph__typeof(); } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct SdfFontShader__uType; SdfFontShader__uType* SdfFontShader__typeof(); } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct SpriteFontShader__uType; SpriteFontShader__uType* SpriteFontShader__typeof(); } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct TextRenderer__uType; TextRenderer__uType* TextRenderer__typeof(); } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct TextShader__uType; TextShader__uType* TextShader__typeof(); } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct TextShaderData__uType; TextShaderData__uType* TextShaderData__typeof(); } } } }
namespace app { namespace Uno { namespace Content { namespace Fonts { struct TextTransform__uType; TextTransform__uType* TextTransform__typeof(); } } } }
namespace app { namespace Uno { namespace Content { namespace Images { struct Bitmap__uType; Bitmap__uType* Bitmap__typeof(); } } } }
namespace app { namespace Uno { namespace Data { namespace Json { struct AtomicValue__bool__uType; AtomicValue__bool__uType* AtomicValue__bool__typeof(); } } } }
namespace app { namespace Uno { namespace Data { namespace Json { struct Boolean__uType; Boolean__uType* Boolean__typeof(); } } } }
namespace app { namespace Uno { namespace Data { namespace Json { struct Null__uType; Null__uType* Null__typeof(); } } } }
namespace app { namespace Uno { namespace Data { namespace Json { struct Value__uType; Value__uType* Value__typeof(); } } } }
namespace app { namespace Uno { namespace Diagnostics { struct Clock__uType; Clock__uType* Clock__typeof(); } } }
namespace app { namespace Uno { namespace Diagnostics { struct Debug__uType; Debug__uType* Debug__typeof(); } } }
namespace app { namespace Uno { namespace Geometry { struct Box__uType; Box__uType* Box__typeof(); } } }
namespace app { namespace Uno { namespace Geometry { struct Collision__uType; Collision__uType* Collision__typeof(); } } }
namespace app { namespace Uno { namespace Geometry { struct Collision2D__uType; Collision2D__uType* Collision2D__typeof(); } } }
namespace app { namespace Uno { namespace Geometry { struct CubicBezier__uType; CubicBezier__uType* CubicBezier__typeof(); } } }
namespace app { namespace Uno { namespace Geometry { struct Ray__uType; Ray__uType* Ray__typeof(); } } }
namespace app { namespace Uno { namespace Geometry { struct Vertex__uType; Vertex__uType* Vertex__typeof(); } } }
namespace app { namespace Uno { namespace Geometry { struct VertexEnumerable__uType; VertexEnumerable__uType* VertexEnumerable__typeof(); } } }
namespace app { namespace Uno { namespace Geometry { struct VertexEnumerator__uType; VertexEnumerator__uType* VertexEnumerator__typeof(); } } }
namespace app { namespace Uno { namespace Graphics { struct DeviceBuffer__uType; DeviceBuffer__uType* DeviceBuffer__typeof(); } } }
namespace app { namespace Uno { namespace Graphics { struct FormatHelpers__uType; FormatHelpers__uType* FormatHelpers__typeof(); } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer__uType; Framebuffer__uType* Framebuffer__typeof(); } } }
namespace app { namespace Uno { namespace Graphics { struct GraphicsContext__uType; GraphicsContext__uType* GraphicsContext__typeof(); } } }
namespace app { namespace Uno { namespace Graphics { struct IndexBuffer__uType; IndexBuffer__uType* IndexBuffer__typeof(); } } }
namespace app { namespace Uno { namespace Graphics { struct RenderTarget__uType; RenderTarget__uType* RenderTarget__typeof(); } } }
namespace app { namespace Uno { namespace Graphics { struct SamplerState__uType; SamplerState__uType* SamplerState__typeof(); } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D__uType; Texture2D__uType* Texture2D__typeof(); } } }
namespace app { namespace Uno { namespace Graphics { struct TextureHelpers__uType; TextureHelpers__uType* TextureHelpers__typeof(); } } }
namespace app { namespace Uno { namespace Graphics { struct VertexAttributeInfo__uType; VertexAttributeInfo__uType* VertexAttributeInfo__typeof(); } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer__uType; VertexBuffer__uType* VertexBuffer__typeof(); } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader__uType; BinaryReader__uType* BinaryReader__typeof(); } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter__uType; BinaryWriter__uType* BinaryWriter__typeof(); } } }
namespace app { namespace Uno { namespace IO { struct CppXliStream__uType; CppXliStream__uType* CppXliStream__typeof(); } } }
namespace app { namespace Uno { namespace IO { struct CppXliStreamHandle__uType; CppXliStreamHandle__uType* CppXliStreamHandle__typeof(); } } }
namespace app { namespace Uno { namespace IO { struct Directory__uType; Directory__uType* Directory__typeof(); } } }
namespace app { namespace Uno { namespace IO { struct EndOfStreamException__uType; EndOfStreamException__uType* EndOfStreamException__typeof(); } } }
namespace app { namespace Uno { namespace IO { struct File__uType; File__uType* File__typeof(); } } }
namespace app { namespace Uno { namespace IO { struct FileSystemImpl__uType; FileSystemImpl__uType* FileSystemImpl__typeof(); } } }
namespace app { namespace Uno { namespace IO { struct IOException__uType; IOException__uType* IOException__typeof(); } } }
namespace app { namespace Uno { namespace IO { struct MemoryStream__uType; MemoryStream__uType* MemoryStream__typeof(); } } }
namespace app { namespace Uno { namespace IO { struct Path__uType; Path__uType* Path__typeof(); } } }
namespace app { namespace Uno { namespace IO { struct Stream__uType; Stream__uType* Stream__typeof(); } } }
namespace app { namespace Uno { namespace IO { struct StreamReader__uType; StreamReader__uType* StreamReader__typeof(); } } }
namespace app { namespace Uno { namespace IO { struct StreamWriter__uType; StreamWriter__uType* StreamWriter__typeof(); } } }
namespace app { namespace Uno { namespace IO { struct TextReader__uType; TextReader__uType* TextReader__typeof(); } } }
namespace app { namespace Uno { namespace IO { struct TextWriter__uType; TextWriter__uType* TextWriter__typeof(); } } }
namespace app { namespace Uno { namespace Net { namespace Http { namespace Implementation { struct AndroidHttpRequest__uType; AndroidHttpRequest__uType* AndroidHttpRequest__typeof(); } } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct AbsolutePathParser__uType; AbsolutePathParser__uType* AbsolutePathParser__typeof(); } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct HashParser__uType; HashParser__uType* HashParser__typeof(); } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct HostInfo__uType; HostInfo__uType* HostInfo__typeof(); } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct HostInfoParser__uType; HostInfoParser__uType* HostInfoParser__typeof(); } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpDefaultDispatcher__uType; HttpDefaultDispatcher__uType* HttpDefaultDispatcher__typeof(); } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageCache__uType; HttpMessageCache__uType* HttpMessageCache__typeof(); } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandler__uType; HttpMessageHandler__uType* HttpMessageHandler__typeof(); } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandler_StaticData__uType; HttpMessageHandler_StaticData__uType* HttpMessageHandler_StaticData__typeof(); } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandlerRequest__uType; HttpMessageHandlerRequest__uType* HttpMessageHandlerRequest__typeof(); } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandlerRequest_DispatchClosure__string__uType; HttpMessageHandlerRequest_DispatchClosure__string__uType* HttpMessageHandlerRequest_DispatchClosure__string__typeof(); } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandlerRequest_DispatchClosure__uType; HttpMessageHandlerRequest_DispatchClosure__uType* HttpMessageHandlerRequest_DispatchClosure__typeof(); } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandlerRequest_ProgressClosure__uType; HttpMessageHandlerRequest_ProgressClosure__uType* HttpMessageHandlerRequest_ProgressClosure__typeof(); } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpStatusReasonPhrase__uType; HttpStatusReasonPhrase__uType* HttpStatusReasonPhrase__typeof(); } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct InvalidResponseTypeException__uType; InvalidResponseTypeException__uType* InvalidResponseTypeException__typeof(); } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct InvalidStateException__uType; InvalidStateException__uType* InvalidStateException__typeof(); } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct QueryParser__uType; QueryParser__uType* QueryParser__typeof(); } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct SchemeParser__uType; SchemeParser__uType* SchemeParser__typeof(); } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct SchemeParserResult__uType; SchemeParserResult__uType* SchemeParserResult__typeof(); } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct Uri__uType; Uri__uType* Uri__typeof(); } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct UriFormatException__uType; UriFormatException__uType* UriFormatException__typeof(); } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct UriScheme__uType; UriScheme__uType* UriScheme__typeof(); } } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct UserInfoParser__uType; UserInfoParser__uType* UserInfoParser__typeof(); } } } }
namespace app { namespace Uno { namespace Platform { struct ClosingEventArgs__uType; ClosingEventArgs__uType* ClosingEventArgs__typeof(); } } }
namespace app { namespace Uno { namespace Platform { struct FrameChangedEventArgs__uType; FrameChangedEventArgs__uType* FrameChangedEventArgs__typeof(); } } }
namespace app { namespace Uno { namespace Platform { struct KeyEventArgs__uType; KeyEventArgs__uType* KeyEventArgs__typeof(); } } }
namespace app { namespace Uno { namespace Platform { struct PointerEventArgs__uType; PointerEventArgs__uType* PointerEventArgs__typeof(); } } }
namespace app { namespace Uno { namespace Platform { struct SystemUI__uType; SystemUI__uType* SystemUI__typeof(); } } }
namespace app { namespace Uno { namespace Platform { struct SystemUIWillResizeEventArgs__uType; SystemUIWillResizeEventArgs__uType* SystemUIWillResizeEventArgs__typeof(); } } }
namespace app { namespace Uno { namespace Platform { struct TextInputEventArgs__uType; TextInputEventArgs__uType* TextInputEventArgs__typeof(); } } }
namespace app { namespace Uno { namespace Platform { struct TimerEventArgs__uType; TimerEventArgs__uType* TimerEventArgs__typeof(); } } }
namespace app { namespace Uno { namespace Platform { struct ViewNativeHandle__uType; ViewNativeHandle__uType* ViewNativeHandle__typeof(); } } }
namespace app { namespace Uno { namespace Platform { struct Window__uType; Window__uType* Window__typeof(); } } }
namespace app { namespace Uno { namespace Platform2 { namespace Implementation { struct InvokedFromNativeCodeAttribute__uType; InvokedFromNativeCodeAttribute__uType* InvokedFromNativeCodeAttribute__typeof(); } } } }
namespace app { namespace Uno { namespace Platform2 { struct Application__uType; Application__uType* Application__typeof(); } } }
namespace app { namespace Uno { namespace Platform2 { struct Display__uType; Display__uType* Display__typeof(); } } }
namespace app { namespace Uno { namespace Platform2 { struct Display_PrivateState__uType; Display_PrivateState__uType* Display_PrivateState__typeof(); } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct ArrayEnumerable__float2__uType; ArrayEnumerable__float2__uType* ArrayEnumerable__float2__typeof(); } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__uType; ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__uType* ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__typeof(); } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct ArrayEnumerable__Fuse_Drawing_Border__uType; ArrayEnumerable__Fuse_Drawing_Border__uType* ArrayEnumerable__Fuse_Drawing_Border__typeof(); } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct ArrayEnumerable__Fuse_Drawing_Contour__uType; ArrayEnumerable__Fuse_Drawing_Contour__uType* ArrayEnumerable__Fuse_Drawing_Contour__typeof(); } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct ArrayEnumerable__Fuse_Drawing_PolygonDrawable__uType; ArrayEnumerable__Fuse_Drawing_PolygonDrawable__uType* ArrayEnumerable__Fuse_Drawing_PolygonDrawable__typeof(); } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct ArrayEnumerator__float2__uType; ArrayEnumerator__float2__uType* ArrayEnumerator__float2__typeof(); } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__uType; ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__uType* ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__typeof(); } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct ArrayEnumerator__Fuse_Drawing_Border__uType; ArrayEnumerator__Fuse_Drawing_Border__uType* ArrayEnumerator__Fuse_Drawing_Border__typeof(); } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct ArrayEnumerator__Fuse_Drawing_Contour__uType; ArrayEnumerator__Fuse_Drawing_Contour__uType* ArrayEnumerator__Fuse_Drawing_Contour__typeof(); } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType; ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType* ArrayEnumerator__Fuse_Drawing_PolygonDrawable__typeof(); } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct BootstrapHints__uType; BootstrapHints__uType* BootstrapHints__typeof(); } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct Bootstrapper__uType; Bootstrapper__uType* Bootstrapper__typeof(); } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct BufferConverters__uType; BufferConverters__uType* BufferConverters__typeof(); } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct BundleRegistry__uType; BundleRegistry__uType* BundleRegistry__typeof(); } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct FormatStringItem__uType; FormatStringItem__uType* FormatStringItem__typeof(); } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct FormatStringLiteral__uType; FormatStringLiteral__uType* FormatStringLiteral__typeof(); } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct FormatStringToken__uType; FormatStringToken__uType* FormatStringToken__typeof(); } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct FormatStringTokenizer__uType; FormatStringTokenizer__uType* FormatStringTokenizer__typeof(); } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct NumericFormatter__uType; NumericFormatter__uType* NumericFormatter__typeof(); } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct WindowHelpers__uType; WindowHelpers__uType* WindowHelpers__typeof(); } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace ShaderBackends { namespace OpenGL { struct GLCompiledProgram__uType; GLCompiledProgram__uType* GLCompiledProgram__typeof(); } } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace ShaderBackends { namespace OpenGL { struct GLDrawCall__uType; GLDrawCall__uType* GLDrawCall__typeof(); } } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace ShaderBackends { namespace OpenGL { struct GLException__uType; GLException__uType* GLException__typeof(); } } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace ShaderBackends { namespace OpenGL { struct GLHelpers__uType; GLHelpers__uType* GLHelpers__typeof(); } } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace ShaderBackends { namespace OpenGL { struct GLInterop__uType; GLInterop__uType* GLInterop__typeof(); } } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace ShaderBackends { namespace OpenGL { struct GLProgram__uType; GLProgram__uType* GLProgram__typeof(); } } } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { struct ArrayCopyImpl__uType; ArrayCopyImpl__uType* ArrayCopyImpl__typeof(); } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { struct ArraySortImpl__uType; ArraySortImpl__uType* ArraySortImpl__typeof(); } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { struct BufferImpl__uType; BufferImpl__uType* BufferImpl__typeof(); } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { struct ClockImpl__uType; ClockImpl__uType* ClockImpl__typeof(); } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { struct DebugImpl__uType; DebugImpl__uType* DebugImpl__typeof(); } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { struct GenericEqualsImpl__uType; GenericEqualsImpl__uType* GenericEqualsImpl__typeof(); } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { struct GraphicsContextHandle__uType; GraphicsContextHandle__uType* GraphicsContextHandle__typeof(); } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { struct GraphicsContextImpl__uType; GraphicsContextImpl__uType* GraphicsContextImpl__typeof(); } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { struct PlatformWindowHandle__uType; PlatformWindowHandle__uType* PlatformWindowHandle__typeof(); } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { struct PlatformWindowImpl__uType; PlatformWindowImpl__uType* PlatformWindowImpl__typeof(); } } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { struct TextEncodingImpl__uType; TextEncodingImpl__uType* TextEncodingImpl__typeof(); } } } }
namespace app { namespace Uno { namespace Text { struct Base64__uType; Base64__uType* Base64__typeof(); } } }
namespace app { namespace Uno { namespace Text { struct StringBuilder__uType; StringBuilder__uType* StringBuilder__typeof(); } } }
namespace app { namespace Uno { namespace Text { struct StringBuilderElement__uType; StringBuilderElement__uType* StringBuilderElement__typeof(); } } }
namespace app { namespace Uno { namespace Threading { struct Future__bool__uType; Future__bool__uType* Future__bool__typeof(); } } }
namespace app { namespace Uno { namespace Threading { struct Future__Fuse_Camera_PictureResult__uType; Future__Fuse_Camera_PictureResult__uType* Future__Fuse_Camera_PictureResult__typeof(); } } }
namespace app { namespace Uno { namespace Threading { struct Future__string__uType; Future__string__uType* Future__string__typeof(); } } }
namespace app { namespace Uno { namespace Threading { struct Future__uType; Future__uType* Future__typeof(); } } }
namespace app { namespace Uno { namespace Threading { struct Future1_Closure__bool__bool__uType; Future1_Closure__bool__bool__uType* Future1_Closure__bool__bool__typeof(); } } }
namespace app { namespace Uno { namespace Threading { struct Future1_Closure__bool__Uno_Exception__uType; Future1_Closure__bool__Uno_Exception__uType* Future1_Closure__bool__Uno_Exception__typeof(); } } }
namespace app { namespace Uno { namespace Threading { struct Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult__uType; Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult__uType* Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult__typeof(); } } }
namespace app { namespace Uno { namespace Threading { struct Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception__uType; Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception__uType* Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception__typeof(); } } }
namespace app { namespace Uno { namespace Threading { struct Future1_Closure__string__string__uType; Future1_Closure__string__string__uType* Future1_Closure__string__string__typeof(); } } }
namespace app { namespace Uno { namespace Threading { struct Future1_Closure__string__Uno_Exception__uType; Future1_Closure__string__Uno_Exception__uType* Future1_Closure__string__Uno_Exception__typeof(); } } }
namespace app { namespace Uno { namespace Threading { struct Mutex__uType; Mutex__uType* Mutex__typeof(); } } }
namespace app { namespace Uno { namespace Threading { struct POSIXMutex__uType; POSIXMutex__uType* POSIXMutex__typeof(); } } }
namespace app { namespace Uno { namespace Threading { struct POSIXThread__uType; POSIXThread__uType* POSIXThread__typeof(); } } }
namespace app { namespace Uno { namespace Threading { struct Promise__bool__uType; Promise__bool__uType* Promise__bool__typeof(); } } }
namespace app { namespace Uno { namespace Threading { struct Promise__Fuse_Camera_PictureResult__uType; Promise__Fuse_Camera_PictureResult__uType* Promise__Fuse_Camera_PictureResult__typeof(); } } }
namespace app { namespace Uno { namespace Threading { struct Promise__string__uType; Promise__string__uType* Promise__string__typeof(); } } }
namespace app { namespace Uno { namespace Threading { struct SyncDispatcher__uType; SyncDispatcher__uType* SyncDispatcher__typeof(); } } }
namespace app { namespace Uno { namespace Threading { struct Thread__uType; Thread__uType* Thread__typeof(); } } }
namespace app { namespace Uno { namespace Time { namespace Calendars { struct Era__uType; Era__uType* Era__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Calendars { struct GregorianYearMonthDayCalculator__uType; GregorianYearMonthDayCalculator__uType* GregorianYearMonthDayCalculator__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Calendars { struct TimeOfDayCalculator__uType; TimeOfDayCalculator__uType* TimeOfDayCalculator__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Calendars { struct WeekYearCalculator__uType; WeekYearCalculator__uType* WeekYearCalculator__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Calendars { struct YearMonthDayCalculator__uType; YearMonthDayCalculator__uType* YearMonthDayCalculator__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType; FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType* FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType; FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType* FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__uType; FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__uType* FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct LocalDateTimePattern__uType; LocalDateTimePattern__uType* LocalDateTimePattern__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct LocalDateTimePattern_LocalDateTimeBucket__uType; LocalDateTimePattern_LocalDateTimeBucket__uType* LocalDateTimePattern_LocalDateTimeBucket__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct LocalTimePattern__uType; LocalTimePattern__uType* LocalTimePattern__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct LocalTimePattern_LocalTimeBucket__uType; LocalTimePattern_LocalTimeBucket__uType* LocalTimePattern_LocalTimeBucket__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType; NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType* NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType; NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType* NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType; NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType* NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct OffsetPattern__uType; OffsetPattern__uType* OffsetPattern__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct OffsetPattern_OffsetBucket__uType; OffsetPattern_OffsetBucket__uType* OffsetPattern_OffsetBucket__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__uType; PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__uType* PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__uType; PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__uType* PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__uType; PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__uType* PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__uType; PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__uType* PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__uType; PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__uType* PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__uType; PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__uType* PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType; RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType* RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType; SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType* SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType; SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType* SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType; SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType* SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType; SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType* SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof(); } } } }
namespace app { namespace Uno { namespace Time { namespace Text { struct SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType; SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType* SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof(); } } } }
namespace app { namespace Uno { namespace Time { struct CalendarSystem__uType; CalendarSystem__uType* CalendarSystem__typeof(); } } }
namespace app { namespace Uno { namespace Time { struct Constants__uType; Constants__uType* Constants__typeof(); } } }
namespace app { namespace Uno { namespace Time { struct Converter__uType; Converter__uType* Converter__typeof(); } } }
namespace app { namespace Uno { namespace Time { struct DateTimeZone__uType; DateTimeZone__uType* DateTimeZone__typeof(); } } }
namespace app { namespace Uno { namespace Time { struct DeviceTimeZone__uType; DeviceTimeZone__uType* DeviceTimeZone__typeof(); } } }
namespace app { namespace Uno { namespace Time { struct Duration__uType; Duration__uType* Duration__typeof(); } } }
namespace app { namespace Uno { namespace Time { struct FixedDateTimeZone__uType; FixedDateTimeZone__uType* FixedDateTimeZone__typeof(); } } }
namespace app { namespace Uno { namespace Time { struct HashCodeHelper__uType; HashCodeHelper__uType* HashCodeHelper__typeof(); } } }
namespace app { namespace Uno { namespace Time { struct Instant__uType; Instant__uType* Instant__typeof(); } } }
namespace app { namespace Uno { namespace Time { struct LocalDateTime__uType; LocalDateTime__uType* LocalDateTime__typeof(); } } }
namespace app { namespace Uno { namespace Time { struct LocalTime__uType; LocalTime__uType* LocalTime__typeof(); } } }
namespace app { namespace Uno { namespace Time { struct Offset__uType; Offset__uType* Offset__typeof(); } } }
namespace app { namespace Uno { namespace Time { struct Period__uType; Period__uType* Period__typeof(); } } }
namespace app { namespace Uno { namespace Time { struct Preconditions__uType; Preconditions__uType* Preconditions__typeof(); } } }
namespace app { namespace Uno { namespace Time { struct ZonedDateTime__uType; ZonedDateTime__uType* ZonedDateTime__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct BundleFileSource__uType; BundleFileSource__uType* BundleFileSource__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct FileSource__uType; FileSource__uType* FileSource__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Property__bool__uType; Property__bool__uType* Property__bool__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Property__float__uType; Property__float__uType* Property__float__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Property__float4__uType; Property__float4__uType* Property__float4__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_Visibility__uType; Property__Fuse_Elements_Visibility__uType* Property__Fuse_Elements_Visibility__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Resources_ImageSource__uType; Property__Fuse_Resources_ImageSource__uType* Property__Fuse_Resources_ImageSource__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Property__string__uType; Property__string__uType* Property__string__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Resource__uType; Resource__uType* Resource__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct StreamExtensions__uType; StreamExtensions__uType* StreamExtensions__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_BackButton__uType; Template__Fuse_Controls_BackButton__uType* Template__Fuse_Controls_BackButton__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_Button__uType; Template__Fuse_Controls_Button__uType* Template__Fuse_Controls_Button__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_Circle__uType; Template__Fuse_Controls_Circle__uType* Template__Fuse_Controls_Circle__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_Ellipse__uType; Template__Fuse_Controls_Ellipse__uType* Template__Fuse_Controls_Ellipse__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_GraphicsView__uType; Template__Fuse_Controls_GraphicsView__uType* Template__Fuse_Controls_GraphicsView__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_Image__uType; Template__Fuse_Controls_Image__uType* Template__Fuse_Controls_Image__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_NativeViewHost__uType; Template__Fuse_Controls_NativeViewHost__uType* Template__Fuse_Controls_NativeViewHost__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_NavigationBar__uType; Template__Fuse_Controls_NavigationBar__uType* Template__Fuse_Controls_NavigationBar__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_Page__uType; Template__Fuse_Controls_Page__uType* Template__Fuse_Controls_Page__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_Path__uType; Template__Fuse_Controls_Path__uType* Template__Fuse_Controls_Path__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_PlainTextEdit__uType; Template__Fuse_Controls_PlainTextEdit__uType* Template__Fuse_Controls_PlainTextEdit__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_Rectangle__uType; Template__Fuse_Controls_Rectangle__uType* Template__Fuse_Controls_Rectangle__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_RegularPolygon__uType; Template__Fuse_Controls_RegularPolygon__uType* Template__Fuse_Controls_RegularPolygon__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_ScrollView__uType; Template__Fuse_Controls_ScrollView__uType* Template__Fuse_Controls_ScrollView__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_Slider__uType; Template__Fuse_Controls_Slider__uType* Template__Fuse_Controls_Slider__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_Star__uType; Template__Fuse_Controls_Star__uType* Template__Fuse_Controls_Star__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_Switch__uType; Template__Fuse_Controls_Switch__uType* Template__Fuse_Controls_Switch__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_Text__uType; Template__Fuse_Controls_Text__uType* Template__Fuse_Controls_Text__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_TextBlock__uType; Template__Fuse_Controls_TextBlock__uType* Template__Fuse_Controls_TextBlock__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_TextControl__uType; Template__Fuse_Controls_TextControl__uType* Template__Fuse_Controls_TextControl__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct Template__Fuse_Controls_TextInput__uType; Template__Fuse_Controls_TextInput__uType* Template__Fuse_Controls_TextInput__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct UXAttachedPropertyGetterAttribute__uType; UXAttachedPropertyGetterAttribute__uType* UXAttachedPropertyGetterAttribute__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct UXAttachedPropertySetterAttribute__uType; UXAttachedPropertySetterAttribute__uType* UXAttachedPropertySetterAttribute__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct UXAttachedPropertyStyleSetterAttribute__uType; UXAttachedPropertyStyleSetterAttribute__uType* UXAttachedPropertyStyleSetterAttribute__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct UXAutoGenericAttribute__uType; UXAutoGenericAttribute__uType* UXAutoGenericAttribute__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct UXContentAttribute__uType; UXContentAttribute__uType* UXContentAttribute__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct UXContentModeAttribute__uType; UXContentModeAttribute__uType* UXContentModeAttribute__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct UXGlobalResourceAttribute__uType; UXGlobalResourceAttribute__uType* UXGlobalResourceAttribute__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct UXImplicitPropertySetterAttribute__uType; UXImplicitPropertySetterAttribute__uType* UXImplicitPropertySetterAttribute__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct UXLineNumberAttribute__uType; UXLineNumberAttribute__uType* UXLineNumberAttribute__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct UXNameAttribute__uType; UXNameAttribute__uType* UXNameAttribute__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct UXParameterAttribute__uType; UXParameterAttribute__uType* UXParameterAttribute__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct UXPrimaryAttribute__uType; UXPrimaryAttribute__uType* UXPrimaryAttribute__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct UXSourceFileNameAttribute__uType; UXSourceFileNameAttribute__uType* UXSourceFileNameAttribute__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct UXStyleListAttribute__uType; UXStyleListAttribute__uType* UXStyleListAttribute__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct UXValueBindingAliasAttribute__uType; UXValueBindingAliasAttribute__uType* UXValueBindingAliasAttribute__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct UXValueBindingArgumentAttribute__uType; UXValueBindingArgumentAttribute__uType* UXValueBindingArgumentAttribute__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct UXValueChangedEventAttribute__uType; UXValueChangedEventAttribute__uType* UXValueChangedEventAttribute__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__bool__uType; ValueChangedArgs__bool__uType* ValueChangedArgs__bool__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__double__uType; ValueChangedArgs__double__uType* ValueChangedArgs__double__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__float__uType; ValueChangedArgs__float__uType* ValueChangedArgs__float__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__Fuse_Resources_ImageSource__uType; ValueChangedArgs__Fuse_Resources_ImageSource__uType* ValueChangedArgs__Fuse_Resources_ImageSource__typeof(); } } }
namespace app { namespace Uno { namespace UX { struct ValueChangedArgs__string__uType; ValueChangedArgs__string__uType* ValueChangedArgs__string__typeof(); } } }
namespace app { namespace Uno { struct Application__uType; Application__uType* Application__typeof(); } }
namespace app { namespace Uno { struct ArgumentException__uType; ArgumentException__uType* ArgumentException__typeof(); } }
namespace app { namespace Uno { struct ArgumentNullException__uType; ArgumentNullException__uType* ArgumentNullException__typeof(); } }
namespace app { namespace Uno { struct ArgumentOutOfRangeException__uType; ArgumentOutOfRangeException__uType* ArgumentOutOfRangeException__typeof(); } }
namespace app { namespace Uno { struct Array__uType; Array__uType* Array__typeof(); } }
namespace app { namespace Uno { struct Attribute__uType; Attribute__uType* Attribute__typeof(); } }
namespace app { namespace Uno { struct AttributeUsageAttribute__uType; AttributeUsageAttribute__uType* AttributeUsageAttribute__typeof(); } }
namespace app { namespace Uno { struct Bool__uType; Bool__uType* Bool__typeof(); } }
namespace app { namespace Uno { struct Buffer__uType; Buffer__uType* Buffer__typeof(); } }
namespace app { namespace Uno { struct BundleFile__uType; BundleFile__uType* BundleFile__typeof(); } }
namespace app { namespace Uno { struct Byte__uType; Byte__uType* Byte__typeof(); } }
namespace app { namespace Uno { struct Byte4__uType; Byte4__uType* Byte4__typeof(); } }
namespace app { namespace Uno { struct Char__uType; Char__uType* Char__typeof(); } }
namespace app { namespace Uno { struct CharPunctuationChecker__uType; CharPunctuationChecker__uType* CharPunctuationChecker__typeof(); } }
namespace app { namespace Uno { struct CharPunctuationChecker_PunctuationRange__uType; CharPunctuationChecker_PunctuationRange__uType* CharPunctuationChecker_PunctuationRange__typeof(); } }
namespace app { namespace Uno { struct Color__uType; Color__uType* Color__typeof(); } }
namespace app { namespace Uno { struct ColorHelper__uType; ColorHelper__uType* ColorHelper__typeof(); } }
namespace app { namespace Uno { struct DateTime__uType; DateTime__uType* DateTime__typeof(); } }
namespace app { namespace Uno { struct Delegate__uType; Delegate__uType* Delegate__typeof(); } }
namespace app { namespace Uno { struct Double__uType; Double__uType* Double__typeof(); } }
namespace app { namespace Uno { struct EventArgs__uType; EventArgs__uType* EventArgs__typeof(); } }
namespace app { namespace Uno { struct Exception__uType; Exception__uType* Exception__typeof(); } }
namespace app { namespace Uno { struct FlagsAttribute__uType; FlagsAttribute__uType* FlagsAttribute__typeof(); } }
namespace app { namespace Uno { struct Float__uType; Float__uType* Float__typeof(); } }
namespace app { namespace Uno { struct Float2__uType; Float2__uType* Float2__typeof(); } }
namespace app { namespace Uno { struct Float2x2__uType; Float2x2__uType* Float2x2__typeof(); } }
namespace app { namespace Uno { struct Float3__uType; Float3__uType* Float3__typeof(); } }
namespace app { namespace Uno { struct Float3x3__uType; Float3x3__uType* Float3x3__typeof(); } }
namespace app { namespace Uno { struct Float4__uType; Float4__uType* Float4__typeof(); } }
namespace app { namespace Uno { struct Float4x4__uType; Float4x4__uType* Float4x4__typeof(); } }
namespace app { namespace Uno { struct FormatException__uType; FormatException__uType* FormatException__typeof(); } }
namespace app { namespace Uno { struct GC__uType; GC__uType* GC__typeof(); } }
namespace app { namespace Uno { struct Generic__uType; Generic__uType* Generic__typeof(); } }
namespace app { namespace Uno { struct IndexOutOfRangeException__uType; IndexOutOfRangeException__uType* IndexOutOfRangeException__typeof(); } }
namespace app { namespace Uno { struct Int__uType; Int__uType* Int__typeof(); } }
namespace app { namespace Uno { struct Int2__uType; Int2__uType* Int2__typeof(); } }
namespace app { namespace Uno { struct Int4__uType; Int4__uType* Int4__typeof(); } }
namespace app { namespace Uno { struct IntPtr__uType; IntPtr__uType* IntPtr__typeof(); } }
namespace app { namespace Uno { struct InvalidCastException__uType; InvalidCastException__uType* InvalidCastException__typeof(); } }
namespace app { namespace Uno { struct InvalidOperationException__uType; InvalidOperationException__uType* InvalidOperationException__typeof(); } }
namespace app { namespace Uno { struct Long__uType; Long__uType* Long__typeof(); } }
namespace app { namespace Uno { struct Math__uType; Math__uType* Math__typeof(); } }
namespace app { namespace Uno { struct Matrix__uType; Matrix__uType* Matrix__typeof(); } }
namespace app { namespace Uno { struct NotImplementedException__uType; NotImplementedException__uType* NotImplementedException__typeof(); } }
namespace app { namespace Uno { struct NotSupportedException__uType; NotSupportedException__uType* NotSupportedException__typeof(); } }
namespace app { namespace Uno { struct NullReferenceException__uType; NullReferenceException__uType* NullReferenceException__typeof(); } }
namespace app { namespace Uno { struct ObjectDisposedException__uType; ObjectDisposedException__uType* ObjectDisposedException__typeof(); } }
namespace app { namespace Uno { struct OverflowException__uType; OverflowException__uType* OverflowException__typeof(); } }
namespace app { namespace Uno { struct Quaternion__uType; Quaternion__uType* Quaternion__typeof(); } }
namespace app { namespace Uno { struct Rect__uType; Rect__uType* Rect__typeof(); } }
namespace app { namespace Uno { struct Recti__uType; Recti__uType* Recti__typeof(); } }
namespace app { namespace Uno { struct SByte__uType; SByte__uType* SByte__typeof(); } }
namespace app { namespace Uno { struct Short__uType; Short__uType* Short__typeof(); } }
namespace app { namespace Uno { struct String__uType; String__uType* String__typeof(); } }
namespace app { namespace Uno { struct UInt__uType; UInt__uType* UInt__typeof(); } }
namespace app { namespace Uno { struct ULong__uType; ULong__uType* ULong__typeof(); } }
namespace app { namespace Uno { struct UShort__uType; UShort__uType* UShort__typeof(); } }
namespace app { namespace Uno { struct UShort2__uType; UShort2__uType* UShort2__typeof(); } }
namespace app { namespace Uno { struct Vector__uType; Vector__uType* Vector__typeof(); } }
namespace app { namespace Uno { struct WeakReference__Fuse_Resources_FileImageSourceImpl__uType; WeakReference__Fuse_Resources_FileImageSourceImpl__uType* WeakReference__Fuse_Resources_FileImageSourceImpl__typeof(); } }
namespace app { namespace Uno { struct WeakReference__Fuse_Resources_HttpImageSourceImpl__uType; WeakReference__Fuse_Resources_HttpImageSourceImpl__uType* WeakReference__Fuse_Resources_HttpImageSourceImpl__typeof(); } }
namespace app { namespace Uno { struct WeakReferenceAttribute__uType; WeakReferenceAttribute__uType* WeakReferenceAttribute__typeof(); } }
namespace app { struct AudioModule__uType; AudioModule__uType* AudioModule__typeof(); }
namespace app { struct ButtonText__uType; ButtonText__uType* ButtonText__typeof(); }
namespace app { struct MainView__uType; MainView__uType* MainView__typeof(); }
namespace app { struct MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__uType; MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__uType* MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__typeof(); }
namespace app { struct MainView_Fuse_Controls_TextControl_string_Value_Property__uType; MainView_Fuse_Controls_TextControl_string_Value_Property__uType* MainView_Fuse_Controls_TextControl_string_Value_Property__typeof(); }
namespace app { struct MainView_Fuse_Elements_Element_float_Opacity_Property__uType; MainView_Fuse_Elements_Element_float_Opacity_Property__uType* MainView_Fuse_Elements_Element_float_Opacity_Property__typeof(); }
namespace app { struct MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__uType; MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__uType* MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__typeof(); }
namespace app { struct MainView_Fuse_Triggers_WhileBool_bool_Value_Property__uType; MainView_Fuse_Triggers_WhileBool_bool_Value_Property__uType* MainView_Fuse_Triggers_WhileBool_bool_Value_Property__typeof(); }
namespace app { struct MainView_Template__uType; MainView_Template__uType* MainView_Template__typeof(); }
namespace app { struct MainView_Template1__uType; MainView_Template1__uType* MainView_Template1__typeof(); }

static void uInitTypeObjects()
{
    static uType*(*functions[])() =
    {
        (::uType*(*)())&::app::Android::android::animation::Animator__typeof,
        (::uType*(*)())&::app::Android::android::animation::TimeAnimator__typeof,
        (::uType*(*)())&::app::Android::android::animation::ValueAnimator__typeof,
        (::uType*(*)())&::app::Android::android::app::Activity__typeof,
        (::uType*(*)())&::app::Android::android::app::Fragment__typeof,
        (::uType*(*)())&::app::Android::android::app::TaskStackBuilder__typeof,
        (::uType*(*)())&::app::Android::android::content::ComponentName__typeof,
        (::uType*(*)())&::app::Android::android::content::Context__typeof,
        (::uType*(*)())&::app::Android::android::content::ContextWrapper__typeof,
        (::uType*(*)())&::app::Android::android::content::Intent__typeof,
        (::uType*(*)())&::app::Android::android::content::res::AssetManager__typeof,
        (::uType*(*)())&::app::Android::android::content::res::ColorStateList__typeof,
        (::uType*(*)())&::app::Android::android::content::res::Configuration__typeof,
        (::uType*(*)())&::app::Android::android::content::res::Resources__typeof,
        (::uType*(*)())&::app::Android::android::graphics::Bitmap__typeof,
        (::uType*(*)())&::app::Android::android::graphics::BitmapDLRConfig__typeof,
        (::uType*(*)())&::app::Android::android::graphics::BitmapFactory__typeof,
        (::uType*(*)())&::app::Android::android::graphics::Canvas__typeof,
        (::uType*(*)())&::app::Android::android::graphics::Color__typeof,
        (::uType*(*)())&::app::Android::android::graphics::drawable::Drawable__typeof,
        (::uType*(*)())&::app::Android::android::graphics::drawable::LayerDrawable__typeof,
        (::uType*(*)())&::app::Android::android::graphics::drawable::ShapeDrawable__typeof,
        (::uType*(*)())&::app::Android::android::graphics::drawable::shapes::ArcShape__typeof,
        (::uType*(*)())&::app::Android::android::graphics::drawable::shapes::RectShape__typeof,
        (::uType*(*)())&::app::Android::android::graphics::drawable::shapes::RoundRectShape__typeof,
        (::uType*(*)())&::app::Android::android::graphics::drawable::shapes::Shape__typeof,
        (::uType*(*)())&::app::Android::android::graphics::Matrix__typeof,
        (::uType*(*)())&::app::Android::android::graphics::Paint__typeof,
        (::uType*(*)())&::app::Android::android::graphics::PaintDLRStyle__typeof,
        (::uType*(*)())&::app::Android::android::graphics::PorterDuffDLRMode__typeof,
        (::uType*(*)())&::app::Android::android::graphics::Rect__typeof,
        (::uType*(*)())&::app::Android::android::graphics::RectF__typeof,
        (::uType*(*)())&::app::Android::android::graphics::SurfaceTexture__typeof,
        (::uType*(*)())&::app::Android::android::graphics::Typeface__typeof,
        (::uType*(*)())&::app::Android::android::net::Uri__typeof,
        (::uType*(*)())&::app::Android::android::opengl::GLUtils__typeof,
        (::uType*(*)())&::app::Android::android::os::BuildDLRVERSION__typeof,
        (::uType*(*)())&::app::Android::android::os::Bundle__typeof,
        (::uType*(*)())&::app::Android::android::os::Parcel__typeof,
        (::uType*(*)())&::app::Android::android::os::Vibrator__typeof,
        (::uType*(*)())&::app::Android::android::test::mock::MockContext__typeof,
        (::uType*(*)())&::app::Android::android::text::Layout__typeof,
        (::uType*(*)())&::app::Android::android::text::LayoutDLRAlignment__typeof,
        (::uType*(*)())&::app::Android::android::text::StaticLayout__typeof,
        (::uType*(*)())&::app::Android::android::text::TextPaint__typeof,
        (::uType*(*)())&::app::Android::android::text::TextUtilsDLRTruncateAt__typeof,
        (::uType*(*)())&::app::Android::android::util::TypedValue__typeof,
        (::uType*(*)())&::app::Android::android::view::ActionMode__typeof,
        (::uType*(*)())&::app::Android::android::view::ActionProvider__typeof,
        (::uType*(*)())&::app::Android::android::view::Choreographer__typeof,
        (::uType*(*)())&::app::Android::android::view::ContextThemeWrapper__typeof,
        (::uType*(*)())&::app::Android::android::view::Gravity__typeof,
        (::uType*(*)())&::app::Android::android::view::inputmethod::InputMethodManager__typeof,
        (::uType*(*)())&::app::Android::android::view::KeyEvent__typeof,
        (::uType*(*)())&::app::Android::android::view::MotionEvent__typeof,
        (::uType*(*)())&::app::Android::android::view::Surface__typeof,
        (::uType*(*)())&::app::Android::android::view::SurfaceView__typeof,
        (::uType*(*)())&::app::Android::android::view::TextureView__typeof,
        (::uType*(*)())&::app::Android::android::view::View__typeof,
        (::uType*(*)())&::app::Android::android::view::ViewDLRMeasureSpec__typeof,
        (::uType*(*)())&::app::Android::android::view::ViewGroup__typeof,
        (::uType*(*)())&::app::Android::android::view::ViewGroupDLRLayoutParams__typeof,
        (::uType*(*)())&::app::Android::android::view::ViewGroupDLRMarginLayoutParams__typeof,
        (::uType*(*)())&::app::Android::android::view::WindowManagerDLRLayoutParams__typeof,
        (::uType*(*)())&::app::Android::android::webkit::WebChromeClient__typeof,
        (::uType*(*)())&::app::Android::android::webkit::WebView__typeof,
        (::uType*(*)())&::app::Android::android::webkit::WebViewClient__typeof,
        (::uType*(*)())&::app::Android::android::widget::AbsoluteLayout__typeof,
        (::uType*(*)())&::app::Android::android::widget::AbsSeekBar__typeof,
        (::uType*(*)())&::app::Android::android::widget::Button__typeof,
        (::uType*(*)())&::app::Android::android::widget::CompoundButton__typeof,
        (::uType*(*)())&::app::Android::android::widget::EditText__typeof,
        (::uType*(*)())&::app::Android::android::widget::FrameLayout__typeof,
        (::uType*(*)())&::app::Android::android::widget::FrameLayoutDLRLayoutParams__typeof,
        (::uType*(*)())&::app::Android::android::widget::HorizontalScrollView__typeof,
        (::uType*(*)())&::app::Android::android::widget::ImageView__typeof,
        (::uType*(*)())&::app::Android::android::widget::ImageViewDLRScaleType__typeof,
        (::uType*(*)())&::app::Android::android::widget::ProgressBar__typeof,
        (::uType*(*)())&::app::Android::android::widget::RelativeLayout__typeof,
        (::uType*(*)())&::app::Android::android::widget::RelativeLayoutDLRLayoutParams__typeof,
        (::uType*(*)())&::app::Android::android::widget::ScrollView__typeof,
        (::uType*(*)())&::app::Android::android::widget::SeekBar__typeof,
        (::uType*(*)())&::app::Android::android::widget::Switch__typeof,
        (::uType*(*)())&::app::Android::android::widget::TextView__typeof,
        (::uType*(*)())&::app::Android::Base::AndroidBindingMacros__typeof,
        (::uType*(*)())&::app::Android::Base::JNI__typeof,
        (::uType*(*)())&::app::Android::Base::Permissions__typeof,
        (::uType*(*)())&::app::Android::Base::PlatPermission__typeof,
        (::uType*(*)())&::app::Android::Base::Primitives::ConstCharPtr__typeof,
        (::uType*(*)())&::app::Android::Base::Primitives::JavaVMPtr__typeof,
        (::uType*(*)())&::app::Android::Base::Primitives::jfieldID__typeof,
        (::uType*(*)())&::app::Android::Base::Primitives::jmethodID__typeof,
        (::uType*(*)())&::app::Android::Base::Primitives::JNIEnvPtr__typeof,
        (::uType*(*)())&::app::Android::Base::Primitives::JNINativeMethod__typeof,
        (::uType*(*)())&::app::Android::Base::Primitives::jweak__typeof,
        (::uType*(*)())&::app::Android::Base::Primitives::ujboolean__typeof,
        (::uType*(*)())&::app::Android::Base::Primitives::ujbyte__typeof,
        (::uType*(*)())&::app::Android::Base::Primitives::ujchar__typeof,
        (::uType*(*)())&::app::Android::Base::Primitives::ujclass__typeof,
        (::uType*(*)())&::app::Android::Base::Primitives::ujdouble__typeof,
        (::uType*(*)())&::app::Android::Base::Primitives::ujfloat__typeof,
        (::uType*(*)())&::app::Android::Base::Primitives::ujint__typeof,
        (::uType*(*)())&::app::Android::Base::Primitives::ujlong__typeof,
        (::uType*(*)())&::app::Android::Base::Primitives::ujobject__typeof,
        (::uType*(*)())&::app::Android::Base::Primitives::ujshort__typeof,
        (::uType*(*)())&::app::Android::Base::Primitives::ujstring__typeof,
        (::uType*(*)())&::app::Android::Base::Primitives::ujvalue__typeof,
        (::uType*(*)())&::app::Android::Base::Primitives::uweakptr__typeof,
        (::uType*(*)())&::app::Android::Base::Types::Arrays__typeof,
        (::uType*(*)())&::app::Android::Base::Types::Bridge__typeof,
        (::uType*(*)())&::app::Android::Base::Types::ByteBuffer__typeof,
        (::uType*(*)())&::app::Android::Base::Types::String__typeof,
        (::uType*(*)())&::app::Android::Base::Versions__typeof,
        (::uType*(*)())&::app::Android::Base::Wrappers::BindingIDAttribute__typeof,
        (::uType*(*)())&::app::Android::Base::Wrappers::BindingSubclassAttribute__typeof,
        (::uType*(*)())&::app::Android::Base::Wrappers::JWrapper__typeof,
        (::uType*(*)())&::app::Android::Bootstrapper__typeof,
        (::uType*(*)())&::app::Android::com::fuse::ExperimentalHttp::HttpRequest__typeof,
        (::uType*(*)())&::app::Android::com::fuse::Native::Camera__typeof,
        (::uType*(*)())&::app::Android::com::fuse::Native::CameraTask__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_animation_Animator__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_animation_TimeAnimatorDLRTimeListener__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_content_Context__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_graphics_drawable_Drawable__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_graphics_drawable_shapes_Shape__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_net_Uri__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_os_IBinder__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_os_IBinderDLRDeathRecipient__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_os_IInterface__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_os_Vibrator__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_text_Editable__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_text_GetChars__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_text_InputFilter__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_text_Layout__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_text_Spannable__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_text_Spanned__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_text_TextWatcher__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_util_AttributeSet__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_view_ActionMode__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_view_ActionProvider__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_view_ChoreographerDLRFrameCallback__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_view_ContextMenuDLRContextMenuInfo__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_view_Menu__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_view_MenuItem__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_view_MenuItemDLROnActionExpandListener__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_view_MenuItemDLROnMenuItemClickListener__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_view_SubMenu__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_view_SurfaceHolder__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_view_ViewDLROnFocusChangeListener__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_view_ViewDLROnTouchListener__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_view_ViewGroup__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_widget_AbsSeekBar__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_widget_CompoundButton__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_widget_CompoundButtonDLROnCheckedChangeListener__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_widget_SeekBarDLROnSeekBarChangeListener__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_android_widget_TextViewDLROnEditorActionListener__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_java_io_InputStream__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof,
        (::uType*(*)())&::app::Android::Fallbacks::Android_java_lang_Runnable__typeof,
        (::uType*(*)())&::app::Android::java::io::FileDescriptor__typeof,
        (::uType*(*)())&::app::Android::java::io::InputStream__typeof,
        (::uType*(*)())&::app::Android::java::lang::Class__typeof,
        (::uType*(*)())&::app::Android::java::lang::Object__typeof,
        (::uType*(*)())&::app::Android::java::lang::reflect::AccessibleObject__typeof,
        (::uType*(*)())&::app::Android::java::lang::reflect::Field__typeof,
        (::uType*(*)())&::app::Android::java::lang::String__typeof,
        (::uType*(*)())&::app::Android::java::lang::System__typeof,
        (::uType*(*)())&::app::Android::java::lang::Thread__typeof,
        (::uType*(*)())&::app::Android::java::net::URL__typeof,
        (::uType*(*)())&::app::Android::Runtime::BooleanArray__typeof,
        (::uType*(*)())&::app::Android::Runtime::ByteArray__typeof,
        (::uType*(*)())&::app::Android::Runtime::CharArray__typeof,
        (::uType*(*)())&::app::Android::Runtime::DoubleArray__typeof,
        (::uType*(*)())&::app::Android::Runtime::FloatArray__typeof,
        (::uType*(*)())&::app::Android::Runtime::IntArray__typeof,
        (::uType*(*)())&::app::Android::Runtime::LongArray__typeof,
        (::uType*(*)())&::app::Android::Runtime::NativeActivityHelper__typeof,
        (::uType*(*)())&::app::Android::Runtime::ObjectArray__Android_android_content_Intent__typeof,
        (::uType*(*)())&::app::Android::Runtime::ObjectArray__Android_android_graphics_drawable_Drawable__typeof,
        (::uType*(*)())&::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter__typeof,
        (::uType*(*)())&::app::Android::Runtime::ObjectArray__Android_android_view_MenuItem__typeof,
        (::uType*(*)())&::app::Android::Runtime::ObjectArray__Android_java_lang_Object__typeof,
        (::uType*(*)())&::app::Android::Runtime::ObjectArray__Android_java_lang_String__typeof,
        (::uType*(*)())&::app::Android::Runtime::ObjectArrayAUX__typeof,
        (::uType*(*)())&::app::Android::Runtime::RunnableAction__typeof,
        (::uType*(*)())&::app::Android::Runtime::ShortArray__typeof,
        (::uType*(*)())&::app::Android::Runtime::UnoHelper__typeof,
        (::uType*(*)())&::app::AudioModule__typeof,
        (::uType*(*)())&::app::ButtonText__typeof,
        (::uType*(*)())&::app::Experimental::Audio::Channel__typeof,
        (::uType*(*)())&::app::Experimental::Audio::ChannelHandle__typeof,
        (::uType*(*)())&::app::Experimental::Audio::ChannelImpl__typeof,
        (::uType*(*)())&::app::Experimental::Audio::Player__typeof,
        (::uType*(*)())&::app::Experimental::Audio::PlayerHandle__typeof,
        (::uType*(*)())&::app::Experimental::Audio::PlayerImpl__typeof,
        (::uType*(*)())&::app::Experimental::Audio::Sound__typeof,
        (::uType*(*)())&::app::Experimental::Audio::SoundHandle__typeof,
        (::uType*(*)())&::app::Experimental::Audio::SoundImpl__typeof,
        (::uType*(*)())&::app::Experimental::Cache::ProxyStream__typeof,
        (::uType*(*)())&::app::Experimental::Http::BinaryLoader__typeof,
        (::uType*(*)())&::app::Experimental::Http::HttpLoader__typeof,
        (::uType*(*)())&::app::Experimental::Http::HttpResponseHeader__typeof,
        (::uType*(*)())&::app::Experimental::Http::Internal::DateUtil__typeof,
        (::uType*(*)())&::app::Experimental::Http::Loader__typeof,
        (::uType*(*)())&::app::Experimental::Http::LoaderConst__typeof,
        (::uType*(*)())&::app::Experimental::Http::TextLoader__typeof,
        (::uType*(*)())&::app::Experimental::Physics::BasicBoundedRegion2D__typeof,
        (::uType*(*)())&::app::Experimental::Physics::ElasticForce__float2__typeof,
        (::uType*(*)())&::app::Experimental::Physics::Friction__float2__typeof,
        (::uType*(*)())&::app::Experimental::Physics::PointerVelocity__float__typeof,
        (::uType*(*)())&::app::Experimental::Physics::PointerVelocity__float2__typeof,
        (::uType*(*)())&::app::Experimental::Physics::SmoothSnap__float__typeof,
        (::uType*(*)())&::app::Experimental::Physics::SmoothSnap__float2__typeof,
        (::uType*(*)())&::app::Experimental::TextureLoader::Callback__typeof,
        (::uType*(*)())&::app::Experimental::TextureLoader::InvalidContentTypeException__typeof,
        (::uType*(*)())&::app::Experimental::TextureLoader::TextureLoader__typeof,
        (::uType*(*)())&::app::Experimental::TextureLoader::TextureLoaderImpl__typeof,
        (::uType*(*)())&::app::Fuse::Android::AndroidSeekBar__typeof,
        (::uType*(*)())&::app::Fuse::Android::BindingView__typeof,
        (::uType*(*)())&::app::Fuse::Android::BitmapFactory__typeof,
        (::uType*(*)())&::app::Fuse::Android::Blitter__typeof,
        (::uType*(*)())&::app::Fuse::Android::Button__typeof,
        (::uType*(*)())&::app::Fuse::Android::CheckBox__typeof,
        (::uType*(*)())&::app::Fuse::Android::Circle__typeof,
        (::uType*(*)())&::app::Fuse::Android::CompoundButton__typeof,
        (::uType*(*)())&::app::Fuse::Android::CompoundButton_Listener__typeof,
        (::uType*(*)())&::app::Fuse::Android::ContentControl__typeof,
        (::uType*(*)())&::app::Fuse::Android::ControlView__Fuse_Controls_Button__typeof,
        (::uType*(*)())&::app::Fuse::Android::ControlView__Fuse_Controls_Circle__typeof,
        (::uType*(*)())&::app::Fuse::Android::ControlView__Fuse_Controls_Image__typeof,
        (::uType*(*)())&::app::Fuse::Android::ControlView__Fuse_Controls_MapView__typeof,
        (::uType*(*)())&::app::Fuse::Android::ControlView__Fuse_Controls_Rectangle__typeof,
        (::uType*(*)())&::app::Fuse::Android::ControlView__Fuse_Controls_Slider__typeof,
        (::uType*(*)())&::app::Fuse::Android::ControlView__Fuse_Controls_TextControl__typeof,
        (::uType*(*)())&::app::Fuse::Android::ControlView__Fuse_Controls_TextInput__typeof,
        (::uType*(*)())&::app::Fuse::Android::ControlView__Fuse_Controls_ToggleControl__typeof,
        (::uType*(*)())&::app::Fuse::Android::ControlView__Fuse_Controls_WebView__typeof,
        (::uType*(*)())&::app::Fuse::Android::EditorActionArgs__typeof,
        (::uType*(*)())&::app::Fuse::Android::EditorActionListener__typeof,
        (::uType*(*)())&::app::Fuse::Android::FocusChangedListener__typeof,
        (::uType*(*)())&::app::Fuse::Android::FocusManager__typeof,
        (::uType*(*)())&::app::Fuse::Android::GLSurfaceTextureListener__typeof,
        (::uType*(*)())&::app::Fuse::Android::GraphicsView__typeof,
        (::uType*(*)())&::app::Fuse::Android::Helpers__typeof,
        (::uType*(*)())&::app::Fuse::Android::HorizontalScrollView__typeof,
        (::uType*(*)())&::app::Fuse::Android::Image__typeof,
        (::uType*(*)())&::app::Fuse::Android::Image_ImageLoader__typeof,
        (::uType*(*)())&::app::Fuse::Android::Image_ImageLoader_BitmapLoader__typeof,
        (::uType*(*)())&::app::Fuse::Android::InputDispatch__typeof,
        (::uType*(*)())&::app::Fuse::Android::InputDispatch_TouchListener__typeof,
        (::uType*(*)())&::app::Fuse::Android::LeafView__typeof,
        (::uType*(*)())&::app::Fuse::Android::MapView__typeof,
        (::uType*(*)())&::app::Fuse::Android::NativeStyle__typeof,
        (::uType*(*)())&::app::Fuse::Android::NativeStyle_Template__typeof,
        (::uType*(*)())&::app::Fuse::Android::NativeStyle_Template_Template1__typeof,
        (::uType*(*)())&::app::Fuse::Android::NativeStyle_Template_Template2__typeof,
        (::uType*(*)())&::app::Fuse::Android::NativeStyle_Template_Template3__typeof,
        (::uType*(*)())&::app::Fuse::Android::NativeStyle_Template_Template3_Factory__typeof,
        (::uType*(*)())&::app::Fuse::Android::NativeStyle_Template_Template3_Factory1__typeof,
        (::uType*(*)())&::app::Fuse::Android::NativeTemplate__typeof,
        (::uType*(*)())&::app::Fuse::Android::NativeView__typeof,
        (::uType*(*)())&::app::Fuse::Android::NativeViewHost__typeof,
        (::uType*(*)())&::app::Fuse::Android::ParentView__Fuse_Controls_ContentControl__typeof,
        (::uType*(*)())&::app::Fuse::Android::ParentView__Fuse_Controls_GraphicsView__typeof,
        (::uType*(*)())&::app::Fuse::Android::ParentView__Fuse_Controls_NativeViewHost__typeof,
        (::uType*(*)())&::app::Fuse::Android::ParentView__Fuse_Controls_Panel__typeof,
        (::uType*(*)())&::app::Fuse::Android::ParentView__Fuse_Controls_ScrollView__typeof,
        (::uType*(*)())&::app::Fuse::Android::PlainTextEdit__typeof,
        (::uType*(*)())&::app::Fuse::Android::ProgressChangedListener__typeof,
        (::uType*(*)())&::app::Fuse::Android::RadioButton__typeof,
        (::uType*(*)())&::app::Fuse::Android::Rectangle__typeof,
        (::uType*(*)())&::app::Fuse::Android::RelativeLayout__typeof,
        (::uType*(*)())&::app::Fuse::Android::RootView__typeof,
        (::uType*(*)())&::app::Fuse::Android::RootViewContainer__typeof,
        (::uType*(*)())&::app::Fuse::Android::ScrollView__typeof,
        (::uType*(*)())&::app::Fuse::Android::SeekBar__typeof,
        (::uType*(*)())&::app::Fuse::Android::Shape__Fuse_Controls_Circle__typeof,
        (::uType*(*)())&::app::Fuse::Android::Shape__Fuse_Controls_Rectangle__typeof,
        (::uType*(*)())&::app::Fuse::Android::SurfaceCallback__typeof,
        (::uType*(*)())&::app::Fuse::Android::SurfaceView__typeof,
        (::uType*(*)())&::app::Fuse::Android::Switch__typeof,
        (::uType*(*)())&::app::Fuse::Android::TextChangedListener__typeof,
        (::uType*(*)())&::app::Fuse::Android::TextEdit__typeof,
        (::uType*(*)())&::app::Fuse::Android::TextRenderer__typeof,
        (::uType*(*)())&::app::Fuse::Android::TextureView__typeof,
        (::uType*(*)())&::app::Fuse::Android::TextView__typeof,
        (::uType*(*)())&::app::Fuse::Android::TextViewBase__Fuse_Controls_TextControl__typeof,
        (::uType*(*)())&::app::Fuse::Android::TextViewBase__Fuse_Controls_TextInput__typeof,
        (::uType*(*)())&::app::Fuse::Android::ToggleButton__typeof,
        (::uType*(*)())&::app::Fuse::Android::TypefaceCache__typeof,
        (::uType*(*)())&::app::Fuse::Android::VerticalScrollView__typeof,
        (::uType*(*)())&::app::Fuse::Android::View__typeof,
        (::uType*(*)())&::app::Fuse::Android::WebChromeClient__typeof,
        (::uType*(*)())&::app::Fuse::Android::WebView__typeof,
        (::uType*(*)())&::app::Fuse::Animations::Animator__typeof,
        (::uType*(*)())&::app::Fuse::Animations::AnimatorState__typeof,
        (::uType*(*)())&::app::Fuse::Animations::AverageMasterProperty__bool__typeof,
        (::uType*(*)())&::app::Fuse::Animations::AverageMasterProperty__float__typeof,
        (::uType*(*)())&::app::Fuse::Animations::AverageMasterProperty__float4__typeof,
        (::uType*(*)())&::app::Fuse::Animations::AverageMasterProperty__Fuse_Elements_Visibility__typeof,
        (::uType*(*)())&::app::Fuse::Animations::AverageMasterTransform__typeof,
        (::uType*(*)())&::app::Fuse::Animations::AverageMixer__typeof,
        (::uType*(*)())&::app::Fuse::Animations::Change__bool__typeof,
        (::uType*(*)())&::app::Fuse::Animations::Change__float__typeof,
        (::uType*(*)())&::app::Fuse::Animations::Change__float4__typeof,
        (::uType*(*)())&::app::Fuse::Animations::Change__Fuse_Elements_Visibility__typeof,
        (::uType*(*)())&::app::Fuse::Animations::ContinuousTrackChangeState__bool__typeof,
        (::uType*(*)())&::app::Fuse::Animations::ContinuousTrackChangeState__float__typeof,
        (::uType*(*)())&::app::Fuse::Animations::ContinuousTrackChangeState__float4__typeof,
        (::uType*(*)())&::app::Fuse::Animations::ContinuousTrackChangeState__Fuse_Elements_Visibility__typeof,
        (::uType*(*)())&::app::Fuse::Animations::Converter__bool__typeof,
        (::uType*(*)())&::app::Fuse::Animations::Converter__double__typeof,
        (::uType*(*)())&::app::Fuse::Animations::Converter__float__typeof,
        (::uType*(*)())&::app::Fuse::Animations::Converter__float2__typeof,
        (::uType*(*)())&::app::Fuse::Animations::Converter__float3__typeof,
        (::uType*(*)())&::app::Fuse::Animations::Converter__float4__typeof,
        (::uType*(*)())&::app::Fuse::Animations::Converter__Fuse_Elements_Visibility__typeof,
        (::uType*(*)())&::app::Fuse::Animations::ConverterDouble__typeof,
        (::uType*(*)())&::app::Fuse::Animations::ConverterFloat__typeof,
        (::uType*(*)())&::app::Fuse::Animations::ConverterFloat2__typeof,
        (::uType*(*)())&::app::Fuse::Animations::ConverterFloat3__typeof,
        (::uType*(*)())&::app::Fuse::Animations::ConverterFloat4__typeof,
        (::uType*(*)())&::app::Fuse::Animations::CreateStateParams__typeof,
        (::uType*(*)())&::app::Fuse::Animations::DiscreteMasterProperty__bool__typeof,
        (::uType*(*)())&::app::Fuse::Animations::DiscreteMasterProperty__float__typeof,
        (::uType*(*)())&::app::Fuse::Animations::DiscreteMasterProperty__float4__typeof,
        (::uType*(*)())&::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Elements_Visibility__typeof,
        (::uType*(*)())&::app::Fuse::Animations::DiscreteMasterTransform__typeof,
        (::uType*(*)())&::app::Fuse::Animations::DiscreteMixer__typeof,
        (::uType*(*)())&::app::Fuse::Animations::DiscreteSingleTrack__typeof,
        (::uType*(*)())&::app::Fuse::Animations::DiscreteTrackChangeState__bool__typeof,
        (::uType*(*)())&::app::Fuse::Animations::DiscreteTrackChangeState__float__typeof,
        (::uType*(*)())&::app::Fuse::Animations::DiscreteTrackChangeState__float4__typeof,
        (::uType*(*)())&::app::Fuse::Animations::DiscreteTrackChangeState__Fuse_Elements_Visibility__typeof,
        (::uType*(*)())&::app::Fuse::Animations::EasingFunctions__typeof,
        (::uType*(*)())&::app::Fuse::Animations::EasingTrack__typeof,
        (::uType*(*)())&::app::Fuse::Animations::FastMatrixTransform__typeof,
        (::uType*(*)())&::app::Fuse::Animations::MasterBase__bool__typeof,
        (::uType*(*)())&::app::Fuse::Animations::MasterBase__float__typeof,
        (::uType*(*)())&::app::Fuse::Animations::MasterBase__float4__typeof,
        (::uType*(*)())&::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility__typeof,
        (::uType*(*)())&::app::Fuse::Animations::MasterBase__Fuse_Transform__typeof,
        (::uType*(*)())&::app::Fuse::Animations::MasterBase1_GFWResult__bool__typeof,
        (::uType*(*)())&::app::Fuse::Animations::MasterBase1_GFWResult__float__typeof,
        (::uType*(*)())&::app::Fuse::Animations::MasterBase1_GFWResult__float4__typeof,
        (::uType*(*)())&::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_Visibility__typeof,
        (::uType*(*)())&::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Transform__typeof,
        (::uType*(*)())&::app::Fuse::Animations::MasterProperty__bool__typeof,
        (::uType*(*)())&::app::Fuse::Animations::MasterProperty__float__typeof,
        (::uType*(*)())&::app::Fuse::Animations::MasterProperty__float4__typeof,
        (::uType*(*)())&::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility__typeof,
        (::uType*(*)())&::app::Fuse::Animations::MasterTransform__typeof,
        (::uType*(*)())&::app::Fuse::Animations::Mixer__typeof,
        (::uType*(*)())&::app::Fuse::Animations::MixerBase__typeof,
        (::uType*(*)())&::app::Fuse::Animations::MixerHandle__bool__typeof,
        (::uType*(*)())&::app::Fuse::Animations::MixerHandle__float__typeof,
        (::uType*(*)())&::app::Fuse::Animations::MixerHandle__float4__typeof,
        (::uType*(*)())&::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility__typeof,
        (::uType*(*)())&::app::Fuse::Animations::MixerHandle__Fuse_Transform__typeof,
        (::uType*(*)())&::app::Fuse::Animations::Move__typeof,
        (::uType*(*)())&::app::Fuse::Animations::Nothing__typeof,
        (::uType*(*)())&::app::Fuse::Animations::NothingAnimatorState__typeof,
        (::uType*(*)())&::app::Fuse::Animations::OpenAnimator__typeof,
        (::uType*(*)())&::app::Fuse::Animations::OpenAnimatorState__typeof,
        (::uType*(*)())&::app::Fuse::Animations::Player__typeof,
        (::uType*(*)())&::app::Fuse::Animations::PlayerPart__typeof,
        (::uType*(*)())&::app::Fuse::Animations::Resize__typeof,
        (::uType*(*)())&::app::Fuse::Animations::ResizeAnimatorState__typeof,
        (::uType*(*)())&::app::Fuse::Animations::Rotate__typeof,
        (::uType*(*)())&::app::Fuse::Animations::Scale__typeof,
        (::uType*(*)())&::app::Fuse::Animations::Skew__typeof,
        (::uType*(*)())&::app::Fuse::Animations::Spin__typeof,
        (::uType*(*)())&::app::Fuse::Animations::SpinState__typeof,
        (::uType*(*)())&::app::Fuse::Animations::TrackAnimator__typeof,
        (::uType*(*)())&::app::Fuse::Animations::TrackAnimatorState__typeof,
        (::uType*(*)())&::app::Fuse::Animations::TransformAnimator__Fuse_Rotation__typeof,
        (::uType*(*)())&::app::Fuse::Animations::TransformAnimator__Fuse_Scaling__typeof,
        (::uType*(*)())&::app::Fuse::Animations::TransformAnimator__Fuse_Shear__typeof,
        (::uType*(*)())&::app::Fuse::Animations::TransformAnimator__Fuse_Translation__typeof,
        (::uType*(*)())&::app::Fuse::Animations::TransformAnimatorState__Fuse_Rotation__typeof,
        (::uType*(*)())&::app::Fuse::Animations::TransformAnimatorState__Fuse_Scaling__typeof,
        (::uType*(*)())&::app::Fuse::Animations::TransformAnimatorState__Fuse_Shear__typeof,
        (::uType*(*)())&::app::Fuse::Animations::TransformAnimatorState__Fuse_Translation__typeof,
        (::uType*(*)())&::app::Fuse::Animations::TriggerAnimation__typeof,
        (::uType*(*)())&::app::Fuse::Animations::TriggerAnimationState__typeof,
        (::uType*(*)())&::app::Fuse::App__typeof,
        (::uType*(*)())&::app::Fuse::App_FrameCallback__typeof,
        (::uType*(*)())&::app::Fuse::App_TimeListener__typeof,
        (::uType*(*)())&::app::Fuse::AppBase__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicStyle__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicStyle_Fuse_Animations_Change___float4_Value_Property__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicStyle_Fuse_Controls_Button_string_Text_Property__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicStyle_Fuse_Controls_TextControl_float4_TextColor_Property__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicStyle_Fuse_Controls_TextControl_string_Value_Property__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_SolidColor_float4_Color_Property__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicStyle_Fuse_Drawing_Stroke_float_Width_Property__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicStyle_Fuse_Effects_DropShadow_float4_Color_Property__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicStyle_Fuse_Elements_Element_float_Height_Property__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicStyle_Fuse_Elements_Element_float_Opacity_Property__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicStyle_Fuse_Elements_Element_float_Width_Property__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicStyle_Fuse_Input_Focus_bool_Focus_IsFocusable_Property__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicStyle_Fuse_Translation_float_X_Property__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicStyle_Fuse_Triggers_Actions_TriggerAction_bool_IsActive_Property__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicStyle_Template__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicStyle_Template_Template1__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicStyle_Template1__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicStyle_Template2__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicStyle_Template3__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicStyle_Template4__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicStyle_Template5__typeof,
        (::uType*(*)())&::app::Fuse::BasicTheme::BasicTheme__typeof,
        (::uType*(*)())&::app::Fuse::BeginRemoveArgs__typeof,
        (::uType*(*)())&::app::Fuse::Behavior__typeof,
        (::uType*(*)())&::app::Fuse::CacheFramebuffer__typeof,
        (::uType*(*)())&::app::Fuse::Camera::AndroidCameraImpl__typeof,
        (::uType*(*)())&::app::Fuse::Camera::AndroidCameraImpl_DispatchTakePicture__typeof,
        (::uType*(*)())&::app::Fuse::Camera::AndroidCameraImpl_TakePictureTask__typeof,
        (::uType*(*)())&::app::Fuse::Camera::Camera__typeof,
        (::uType*(*)())&::app::Fuse::Camera::PictureResult__typeof,
        (::uType*(*)())&::app::Fuse::Camera::TakePictureOptions__typeof,
        (::uType*(*)())&::app::Fuse::Controls::BackButton__typeof,
        (::uType*(*)())&::app::Fuse::Controls::BeginRemoveArgsImpl__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Button__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Circle__typeof,
        (::uType*(*)())&::app::Fuse::Controls::ContentControl__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Control__typeof,
        (::uType*(*)())&::app::Fuse::Controls::DefaultSwitchBehavior__typeof,
        (::uType*(*)())&::app::Fuse::Controls::DockPanel__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Ellipse__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::CircleVisual__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Circle__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Ellipse__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Image__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Path__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Rectangle__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_RegularPolygon__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_Star__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_TextControl__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::ControlVisual__Fuse_Controls_TextInput__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::DefaultTextVisual__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::EllipseVisual__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::GraphicsStyle__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::GraphicsStyle_Fuse_Controls_ScrollView_bool_KeepFocusInView_Property__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::GraphicsStyle_Fuse_Controls_ScrollView_bool_UserScroll_Property__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::GraphicsStyle_Fuse_Gestures_Scroller_bool_UserScroll_Property__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::GraphicsStyle_Fuse_Triggers_WhileBool_bool_Value_Property__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::GraphicsStyle_Template__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::GraphicsStyle_Template1__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::GraphicsStyle_Template2__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::GraphicsStyle_Template3__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::GraphicsStyle_Template4__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::GraphicsStyle_Template5__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::GraphicsStyle_Template6__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::GraphicsStyle_Template7__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::GraphicsStyle_Template8__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::ImageElementDraw__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::ImageVisual__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::LinearSliderBehavior__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_Ellipse__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_Path__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_RegularPolygon__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::PathShapeVisual__Fuse_Controls_Star__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::PathVisual__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::RectangleVisual__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::RegularPolygonVisual__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Circle__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Ellipse__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Path__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Rectangle__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_RegularPolygon__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::ShapeVisual__Fuse_Controls_Star__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::StarVisual__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::TextVisual__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Graphics::Visual__typeof,
        (::uType*(*)())&::app::Fuse::Controls::GraphicsView__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Grid__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Image__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Internal::DefaultTextRenderer__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Internal::ProperTextTransform__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Internal::WordWrapInfo__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Internal::WordWrapper__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Internal::WordWrapperWord__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Internal::WrappedLine__typeof,
        (::uType*(*)())&::app::Fuse::Controls::MapView__typeof,
        (::uType*(*)())&::app::Fuse::Controls::MultiLayout__typeof,
        (::uType*(*)())&::app::Fuse::Controls::NativeViewHost__typeof,
        (::uType*(*)())&::app::Fuse::Controls::NavigationBar__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Number__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Page__typeof,
        (::uType*(*)())&::app::Fuse::Controls::PageControl_Template__typeof,
        (::uType*(*)())&::app::Fuse::Controls::PageIndicator__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Panel__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Path__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Placeholder__typeof,
        (::uType*(*)())&::app::Fuse::Controls::PlainTextEdit__typeof,
        (::uType*(*)())&::app::Fuse::Controls::PropertyBinding__bool__typeof,
        (::uType*(*)())&::app::Fuse::Controls::PropertyBinding__string__typeof,
        (::uType*(*)())&::app::Fuse::Controls::RangeControl__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Rectangle__typeof,
        (::uType*(*)())&::app::Fuse::Controls::RegularPolygon__typeof,
        (::uType*(*)())&::app::Fuse::Controls::ScrollPropertyChangedArgs__typeof,
        (::uType*(*)())&::app::Fuse::Controls::ScrollView__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Shape__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Slider__typeof,
        (::uType*(*)())&::app::Fuse::Controls::StackPanel__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Star__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Switch__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Text__typeof,
        (::uType*(*)())&::app::Fuse::Controls::TextBlock__typeof,
        (::uType*(*)())&::app::Fuse::Controls::TextControl__typeof,
        (::uType*(*)())&::app::Fuse::Controls::TextEdit::LineCache__typeof,
        (::uType*(*)())&::app::Fuse::Controls::TextEdit::LineCacheLine__typeof,
        (::uType*(*)())&::app::Fuse::Controls::TextEdit::LineCachePasswordTransform__typeof,
        (::uType*(*)())&::app::Fuse::Controls::TextEdit::TextEditVisual__typeof,
        (::uType*(*)())&::app::Fuse::Controls::TextEdit::TextEditVisual_DegreeSpan__typeof,
        (::uType*(*)())&::app::Fuse::Controls::TextEdit::TextEditVisual_SwipeGestureHelper__typeof,
        (::uType*(*)())&::app::Fuse::Controls::TextEdit::TextPosition__typeof,
        (::uType*(*)())&::app::Fuse::Controls::TextEdit::TextSpan__typeof,
        (::uType*(*)())&::app::Fuse::Controls::TextEdit::TextWindow__typeof,
        (::uType*(*)())&::app::Fuse::Controls::TextInput__typeof,
        (::uType*(*)())&::app::Fuse::Controls::Toggle__typeof,
        (::uType*(*)())&::app::Fuse::Controls::ToggleControl__typeof,
        (::uType*(*)())&::app::Fuse::Controls::WebView__typeof,
        (::uType*(*)())&::app::Fuse::DataContextChangedArgs__typeof,
        (::uType*(*)())&::app::Fuse::Designer::AdvancedAttribute__typeof,
        (::uType*(*)())&::app::Fuse::Designer::ColorAttribute__typeof,
        (::uType*(*)())&::app::Fuse::Designer::DefaultComponentAttribute__typeof,
        (::uType*(*)())&::app::Fuse::Designer::DesignerNameAttribute__typeof,
        (::uType*(*)())&::app::Fuse::Designer::GroupAttribute__typeof,
        (::uType*(*)())&::app::Fuse::Designer::HideAttribute__typeof,
        (::uType*(*)())&::app::Fuse::Designer::InlineAttribute__typeof,
        (::uType*(*)())&::app::Fuse::Designer::IntervalAttribute__typeof,
        (::uType*(*)())&::app::Fuse::Designer::RangeAttribute__typeof,
        (::uType*(*)())&::app::Fuse::Designer::SpawnableAttribute__typeof,
        (::uType*(*)())&::app::Fuse::Designer::ThicknessAttribute__typeof,
        (::uType*(*)())&::app::Fuse::Desktop::NativeStyle_Template__typeof,
        (::uType*(*)())&::app::Fuse::Desktop::NativeStyle_Template1__typeof,
        (::uType*(*)())&::app::Fuse::Desktop::NativeStyle_Template1_Factory__typeof,
        (::uType*(*)())&::app::Fuse::Diagnostics__typeof,
        (::uType*(*)())&::app::Fuse::DrawArgs__typeof,
        (::uType*(*)())&::app::Fuse::DrawContext__typeof,
        (::uType*(*)())&::app::Fuse::DrawHelpers__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::BezierOp__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::BlendModeHelpers__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Border__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Brush__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Brushes__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::ButtCap__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Cache__float2__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Cache__Fuse_Drawing_Contour__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::ClosePath__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Colors__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Contour__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::ContourEnumerable__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::ContourEnumerator__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::ContourTerminator__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::CurveTo__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::DynamicBrush__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::EllipseFactory__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::GradientStop__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::HorizontalLineTo__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::ImageFill__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::ImageFill_DrawParams__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Internal::Float2Buffer__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Internal::FloatBuffer__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Internal::TypedBuffer__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Internal::UShortBuffer__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::LinearGradient__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::LinearGradientDrawable__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::LineCapImpl__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::LineTo__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::MoveTo__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::NonConsecutiveEnumerable__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::NonConsecutiveEnumerator__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::NonConsecutiveExtension__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::PathGeometry__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::PathGeometryExtensions__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::PathGeometryParser__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::PathGeometryRenderer__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Polygon__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::PolygonDrawable__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::PolygonFiller__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Primitives::Circle__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Primitives::ConcaveWedgeCoverage__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Primitives::ConvexWedgeCoverage__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Primitives::Coverage__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Primitives::FillCoverage__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Primitives::LimitCoverage__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Primitives::OneLimitCoverage__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Primitives::Rectangle__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Primitives::StrokeCoverage__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Primitives::Wedge__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Primitives::WedgeCoverage__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::RegularPolygonFactory__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::RendererContext__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::RoundCap__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::SmoothCurveTo__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::SolidColor__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::StarFactory__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::StaticBrush__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::StaticSolidColor__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Stroke__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::ActiveRegion__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::Collections::Dict__Fuse_Drawing_Tesselation_ActiveRegion__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::Collections::DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Face__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::Collections::PriorityQueue__Fuse_Drawing_Tesselation_Vertex__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::Collections::VertexQueue__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::EdgeLoopEnumerable__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::EdgesEnumerable__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::Face__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::FacesEnumerable__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::Geom__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::HalfEdge__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::Mesh__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::MeshBuilder__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::OriginEnumerable__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::Sweep__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::Vertex__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Tesselation::VerticesEnumerable__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Token__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::Util__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::VerticalLineTo__typeof,
        (::uType*(*)())&::app::Fuse::Drawing::WindingRules__typeof,
        (::uType*(*)())&::app::Fuse::Effects::BasicEffect__typeof,
        (::uType*(*)())&::app::Fuse::Effects::Blur__typeof,
        (::uType*(*)())&::app::Fuse::Effects::Desaturate__typeof,
        (::uType*(*)())&::app::Fuse::Effects::DropShadow__typeof,
        (::uType*(*)())&::app::Fuse::Effects::Effect__typeof,
        (::uType*(*)())&::app::Fuse::Effects::EffectHelpers__typeof,
        (::uType*(*)())&::app::Fuse::Effects::Halftone__typeof,
        (::uType*(*)())&::app::Fuse::Effects::Mask__typeof,
        (::uType*(*)())&::app::Fuse::Elements::AlignmentHelpers__typeof,
        (::uType*(*)())&::app::Fuse::Elements::BoxSizing__typeof,
        (::uType*(*)())&::app::Fuse::Elements::Cache__typeof,
        (::uType*(*)())&::app::Fuse::Elements::CacheHelper__typeof,
        (::uType*(*)())&::app::Fuse::Elements::CacheTile__typeof,
        (::uType*(*)())&::app::Fuse::Elements::DisplayHelpers__typeof,
        (::uType*(*)())&::app::Fuse::Elements::Element__typeof,
        (::uType*(*)())&::app::Fuse::Elements::Element_GMSCacheItem__typeof,
        (::uType*(*)())&::app::Fuse::Elements::ElementAtlas__typeof,
        (::uType*(*)())&::app::Fuse::Elements::ElementAtlasFramebuffer__typeof,
        (::uType*(*)())&::app::Fuse::Elements::ElementAtlasFramebufferPool__typeof,
        (::uType*(*)())&::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry__typeof,
        (::uType*(*)())&::app::Fuse::Elements::ElementAtlasFramebufferPoolImpl__typeof,
        (::uType*(*)())&::app::Fuse::Elements::ElementBatch__typeof,
        (::uType*(*)())&::app::Fuse::Elements::ElementBatchEntry__typeof,
        (::uType*(*)())&::app::Fuse::Elements::ElementBatcher__typeof,
        (::uType*(*)())&::app::Fuse::Elements::Internal::ElementDraw__typeof,
        (::uType*(*)())&::app::Fuse::Elements::Internal::Scale9Rectangle__typeof,
        (::uType*(*)())&::app::Fuse::Elements::LayoutArgs__typeof,
        (::uType*(*)())&::app::Fuse::Elements::LimitBoxSizing__typeof,
        (::uType*(*)())&::app::Fuse::Elements::LimitBoxSizingData__typeof,
        (::uType*(*)())&::app::Fuse::Elements::NoImplicitMaxBoxSizing__typeof,
        (::uType*(*)())&::app::Fuse::Elements::ShadowBoxSizing__typeof,
        (::uType*(*)())&::app::Fuse::Elements::ShadowBoxSizing_ShadowData__typeof,
        (::uType*(*)())&::app::Fuse::Elements::SingleNodeDrawable__typeof,
        (::uType*(*)())&::app::Fuse::Elements::StandardBoxSizing__typeof,
        (::uType*(*)())&::app::Fuse::Elements::TextureAtlas__typeof,
        (::uType*(*)())&::app::Fuse::Elements::TransformOrigins__typeof,
        (::uType*(*)())&::app::Fuse::Elements::TransformOrigins_AnchorOrigin__typeof,
        (::uType*(*)())&::app::Fuse::Elements::TransformOrigins_BoxCenter__typeof,
        (::uType*(*)())&::app::Fuse::Elements::TransformOrigins_CenterOrigin__typeof,
        (::uType*(*)())&::app::Fuse::Elements::TransformOrigins_TopLeftOrigin__typeof,
        (::uType*(*)())&::app::Fuse::Elements::Viewport__typeof,
        (::uType*(*)())&::app::Fuse::Entities::Designer::PreloadedResources__typeof,
        (::uType*(*)())&::app::Fuse::Entities::Entity__typeof,
        (::uType*(*)())&::app::Fuse::Entities::Transform3D__typeof,
        (::uType*(*)())&::app::Fuse::FastMatrix__typeof,
        (::uType*(*)())&::app::Fuse::FixedViewport__typeof,
        (::uType*(*)())&::app::Fuse::Font__typeof,
        (::uType*(*)())&::app::Fuse::Fonts__typeof,
        (::uType*(*)())&::app::Fuse::FramebufferPool__typeof,
        (::uType*(*)())&::app::Fuse::FramebufferPoolImpl__typeof,
        (::uType*(*)())&::app::Fuse::FrustumViewport__typeof,
        (::uType*(*)())&::app::Fuse::Gestures::Clicked__typeof,
        (::uType*(*)())&::app::Fuse::Gestures::ClickedArgs__typeof,
        (::uType*(*)())&::app::Fuse::Gestures::Clicker__typeof,
        (::uType*(*)())&::app::Fuse::Gestures::ClickerTrigger__typeof,
        (::uType*(*)())&::app::Fuse::Gestures::DegreeSpan__typeof,
        (::uType*(*)())&::app::Fuse::Gestures::Internal::EdgeSwiper__typeof,
        (::uType*(*)())&::app::Fuse::Gestures::KeepFocusInView__typeof,
        (::uType*(*)())&::app::Fuse::Gestures::KeepInViewCommon__typeof,
        (::uType*(*)())&::app::Fuse::Gestures::ScrollableGoto__typeof,
        (::uType*(*)())&::app::Fuse::Gestures::Scroller__typeof,
        (::uType*(*)())&::app::Fuse::Gestures::SwipeGestureHelper__typeof,
        (::uType*(*)())&::app::Fuse::Gestures::Trackball__typeof,
        (::uType*(*)())&::app::Fuse::Gestures::WhileClickerTrigger__typeof,
        (::uType*(*)())&::app::Fuse::Gestures::WhilePressed__typeof,
        (::uType*(*)())&::app::Fuse::GraphicsTheme__typeof,
        (::uType*(*)())&::app::Fuse::HitTestContext__typeof,
        (::uType*(*)())&::app::Fuse::HitTestResult__typeof,
        (::uType*(*)())&::app::Fuse::Input::Capturer__typeof,
        (::uType*(*)())&::app::Fuse::Input::CustomPointerEventArgs__typeof,
        (::uType*(*)())&::app::Fuse::Input::Focus__typeof,
        (::uType*(*)())&::app::Fuse::Input::FocusGained__typeof,
        (::uType*(*)())&::app::Fuse::Input::FocusGainedArgs__typeof,
        (::uType*(*)())&::app::Fuse::Input::FocusLost__typeof,
        (::uType*(*)())&::app::Fuse::Input::FocusLostArgs__typeof,
        (::uType*(*)())&::app::Fuse::Input::FocusPredictStrategy__typeof,
        (::uType*(*)())&::app::Fuse::Input::HitTestHelpers__typeof,
        (::uType*(*)())&::app::Fuse::Input::IsFocusableChangedArgs__typeof,
        (::uType*(*)())&::app::Fuse::Input::IsFocusableChangedEvent__typeof,
        (::uType*(*)())&::app::Fuse::Input::Keyboard__typeof,
        (::uType*(*)())&::app::Fuse::Input::KeyEventArgs__typeof,
        (::uType*(*)())&::app::Fuse::Input::KeyPressed__typeof,
        (::uType*(*)())&::app::Fuse::Input::KeyPressedArgs__typeof,
        (::uType*(*)())&::app::Fuse::Input::KeyReleased__typeof,
        (::uType*(*)())&::app::Fuse::Input::KeyReleasedArgs__typeof,
        (::uType*(*)())&::app::Fuse::Input::Pointer__typeof,
        (::uType*(*)())&::app::Fuse::Input::Pointer_PELHolder__typeof,
        (::uType*(*)())&::app::Fuse::Input::Pointer_PointerRecord__typeof,
        (::uType*(*)())&::app::Fuse::Input::PointerEntered__typeof,
        (::uType*(*)())&::app::Fuse::Input::PointerEnteredArgs__typeof,
        (::uType*(*)())&::app::Fuse::Input::PointerEventArgs__typeof,
        (::uType*(*)())&::app::Fuse::Input::PointerEventData__typeof,
        (::uType*(*)())&::app::Fuse::Input::PointerLeft__typeof,
        (::uType*(*)())&::app::Fuse::Input::PointerLeftArgs__typeof,
        (::uType*(*)())&::app::Fuse::Input::PointerMoved__typeof,
        (::uType*(*)())&::app::Fuse::Input::PointerMovedArgs__typeof,
        (::uType*(*)())&::app::Fuse::Input::PointerPressed__typeof,
        (::uType*(*)())&::app::Fuse::Input::PointerPressedArgs__typeof,
        (::uType*(*)())&::app::Fuse::Input::PointerReleased__typeof,
        (::uType*(*)())&::app::Fuse::Input::PointerReleasedArgs__typeof,
        (::uType*(*)())&::app::Fuse::Input::PointerWheelMoved__typeof,
        (::uType*(*)())&::app::Fuse::Input::PointerWheelMovedArgs__typeof,
        (::uType*(*)())&::app::Fuse::Input::SelectionQuery__typeof,
        (::uType*(*)())&::app::Fuse::Input::TextEntered__typeof,
        (::uType*(*)())&::app::Fuse::Input::TextEnteredArgs__typeof,
        (::uType*(*)())&::app::Fuse::Input::TextService__typeof,
        (::uType*(*)())&::app::Fuse::Input::TraverseNodeExtensions__typeof,
        (::uType*(*)())&::app::Fuse::Internal::Blender__bool__typeof,
        (::uType*(*)())&::app::Fuse::Internal::Blender__double__typeof,
        (::uType*(*)())&::app::Fuse::Internal::Blender__float__typeof,
        (::uType*(*)())&::app::Fuse::Internal::Blender__float2__typeof,
        (::uType*(*)())&::app::Fuse::Internal::Blender__float3__typeof,
        (::uType*(*)())&::app::Fuse::Internal::Blender__float4__typeof,
        (::uType*(*)())&::app::Fuse::Internal::Blender__Fuse_Elements_Visibility__typeof,
        (::uType*(*)())&::app::Fuse::Internal::BlenderMap__typeof,
        (::uType*(*)())&::app::Fuse::Internal::DoubleBlender__typeof,
        (::uType*(*)())&::app::Fuse::Internal::Drawing::SolidRectangle__typeof,
        (::uType*(*)())&::app::Fuse::Internal::Float2Blender__typeof,
        (::uType*(*)())&::app::Fuse::Internal::Float3Blender__typeof,
        (::uType*(*)())&::app::Fuse::Internal::Float4Blender__typeof,
        (::uType*(*)())&::app::Fuse::Internal::FloatBlender__typeof,
        (::uType*(*)())&::app::Fuse::Internal::FrustumMatrix__typeof,
        (::uType*(*)())&::app::Fuse::Internal::ImageContainer__typeof,
        (::uType*(*)())&::app::Fuse::Internal::RectExtensions__typeof,
        (::uType*(*)())&::app::Fuse::Internal::SizingContainer__typeof,
        (::uType*(*)())&::app::Fuse::Internal::Statistics__typeof,
        (::uType*(*)())&::app::Fuse::iOS::Blitter__typeof,
        (::uType*(*)())&::app::Fuse::iOS::Button__typeof,
        (::uType*(*)())&::app::Fuse::iOS::ControlView__Fuse_Controls_TextInput__typeof,
        (::uType*(*)())&::app::Fuse::iOS::NativeStyle_Template__typeof,
        (::uType*(*)())&::app::Fuse::iOS::NativeStyle_Template_Template1__typeof,
        (::uType*(*)())&::app::Fuse::iOS::NativeStyle_Template_Template2__typeof,
        (::uType*(*)())&::app::Fuse::iOS::NativeStyle_Template_Template3__typeof,
        (::uType*(*)())&::app::Fuse::iOS::NativeStyle_Template_Template3_Factory__typeof,
        (::uType*(*)())&::app::Fuse::iOS::NativeStyle_Template_Template3_Factory1__typeof,
        (::uType*(*)())&::app::Fuse::iOS::NativeView__typeof,
        (::uType*(*)())&::app::Fuse::iOS::NativeViewHost__typeof,
        (::uType*(*)())&::app::Fuse::iOS::ParentView__Fuse_Controls_NativeViewHost__typeof,
        (::uType*(*)())&::app::Fuse::iOS::PlainTextInput__typeof,
        (::uType*(*)())&::app::Fuse::iOS::StatusBarConfig__typeof,
        (::uType*(*)())&::app::Fuse::iOS::TextInput__typeof,
        (::uType*(*)())&::app::Fuse::iOS::TextRenderer__typeof,
        (::uType*(*)())&::app::Fuse::iOS::View__typeof,
        (::uType*(*)())&::app::Fuse::KeyboardBootstrapper__typeof,
        (::uType*(*)())&::app::Fuse::Launcher__typeof,
        (::uType*(*)())&::app::Fuse::Layouts::Column__typeof,
        (::uType*(*)())&::app::Fuse::Layouts::ColumnLayout__typeof,
        (::uType*(*)())&::app::Fuse::Layouts::DefaultLayout__typeof,
        (::uType*(*)())&::app::Fuse::Layouts::DefinitionBase__typeof,
        (::uType*(*)())&::app::Fuse::Layouts::DefinitionBase_ParseDataItem__typeof,
        (::uType*(*)())&::app::Fuse::Layouts::DockLayout__typeof,
        (::uType*(*)())&::app::Fuse::Layouts::GridLayout__typeof,
        (::uType*(*)())&::app::Fuse::Layouts::Layout__typeof,
        (::uType*(*)())&::app::Fuse::Layouts::Layouts__typeof,
        (::uType*(*)())&::app::Fuse::Layouts::Row__typeof,
        (::uType*(*)())&::app::Fuse::Layouts::StackLayout__typeof,
        (::uType*(*)())&::app::Fuse::Layouts::WrapLayout__typeof,
        (::uType*(*)())&::app::Fuse::MobileBootstrapping__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::ActivatingAnimation__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::BackForwardNavigationTrigger__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::DeactivatingAnimation__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::DefaultNavigationAnimator__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::DefaultNavigationAnimatorPlayer__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::DirectNavigation__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::EdgeNavigation__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::EndSeekArgs__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::EnterExitAnimation__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::EnteringAnimation__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::ExitingAnimation__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::GoBack__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::GoForward__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::LoadUrl__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::NavigatedArgs__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::NavigateTo__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::NavigateToggle__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::Navigation__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::NavigationAnimation__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::NavigationArgs__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::NavigationPageProperty__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::NavigationStateArgs__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::NavigationTriggerAction__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::NavigationTween__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::NavTriggerUtil__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::PlayerFactory__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::ProgressSpan__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::ProgressTimer__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::Reload__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::SeekNavigationAnimatorPlayer__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::StopLoading__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::StructuredNavigation__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::SwipeNavigate__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::UpdateSeekArgs__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::WebViewNavigationExtensions__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::WebViewNavigationTrigger__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::WhileActive__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::WhileInactive__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::WhileInEnterState__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::WhileInExitState__typeof,
        (::uType*(*)())&::app::Fuse::Navigation::WhileNavigationTrigger__typeof,
        (::uType*(*)())&::app::Fuse::Node__typeof,
        (::uType*(*)())&::app::Fuse::Node_HitTestRecord__typeof,
        (::uType*(*)())&::app::Fuse::NodeBounds__typeof,
        (::uType*(*)())&::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__typeof,
        (::uType*(*)())&::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__typeof,
        (::uType*(*)())&::app::Fuse::NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__typeof,
        (::uType*(*)())&::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__typeof,
        (::uType*(*)())&::app::Fuse::NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__typeof,
        (::uType*(*)())&::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__typeof,
        (::uType*(*)())&::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__typeof,
        (::uType*(*)())&::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__typeof,
        (::uType*(*)())&::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__typeof,
        (::uType*(*)())&::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__typeof,
        (::uType*(*)())&::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__typeof,
        (::uType*(*)())&::app::Fuse::NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__typeof,
        (::uType*(*)())&::app::Fuse::NodeEventArgs__typeof,
        (::uType*(*)())&::app::Fuse::OrthographicFrustum__typeof,
        (::uType*(*)())&::app::Fuse::Physics::Body__typeof,
        (::uType*(*)())&::app::Fuse::Physics::Draggable__typeof,
        (::uType*(*)())&::app::Fuse::Physics::EnteredForceField__typeof,
        (::uType*(*)())&::app::Fuse::Physics::ExitedForceField__typeof,
        (::uType*(*)())&::app::Fuse::Physics::ForceField__typeof,
        (::uType*(*)())&::app::Fuse::Physics::ForceFieldEventArgs__typeof,
        (::uType*(*)())&::app::Fuse::Physics::ForceFieldEventTrigger__typeof,
        (::uType*(*)())&::app::Fuse::Physics::ForceFieldTrigger__typeof,
        (::uType*(*)())&::app::Fuse::Physics::InForceFieldAnimation__typeof,
        (::uType*(*)())&::app::Fuse::Physics::PointAttractor__typeof,
        (::uType*(*)())&::app::Fuse::Physics::Spring__typeof,
        (::uType*(*)())&::app::Fuse::Physics::WhileDragging__typeof,
        (::uType*(*)())&::app::Fuse::Physics::World__typeof,
        (::uType*(*)())&::app::Fuse::PlacedArgs__typeof,
        (::uType*(*)())&::app::Fuse::Preview::SelectionManager__typeof,
        (::uType*(*)())&::app::Fuse::Properties__typeof,
        (::uType*(*)())&::app::Fuse::PropertyHandle__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::AsyncArray__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::AsyncFunction__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::AsyncObject__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::Binding__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::CallEventHandler__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::CallObjectEventHandler__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::Case__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::Console__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::CrossThreadExceptionHandler__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::DataBinding__bool__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::DataBinding__float__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::DataBinding__Fuse_Resources_ImageSource__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::DataBinding__string__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::DataToResourceBinding__Fuse_Resources_ImageSource__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::DebugLog__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::Dispatcher__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::Dispatcher_Arg2Dispatch__int__object__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::Dispatcher_Arg2Dispatch__object__int__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::Dispatcher_ArgDispatch__int__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::Dispatcher_ArgDispatch__object____typeof,
        (::uType*(*)())&::app::Fuse::Reactive::Dispatcher_ArgDispatch__object__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::Dispatcher_ArgDispatch__string__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::Dispatcher_UIThreadDispatcher__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::Each__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::EnumArray__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::EnumObservable__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::EventBinding__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::FileSourceTell__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::FuseJS::Camera__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::FuseJS::Email__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::FuseJS::FileReaderImpl__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::FuseJS::FuseJSHttp__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::FuseJS::Globals__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::FuseJS::Http__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::FuseJS::InterApp__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::FuseJS::Lifecycle__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::FuseJS::Maps__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::FuseJS::Phone__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::FuseJS::Storage__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::FuseJS::Timer__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::FuseJS::Timer_Closure__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::FuseJS::Timer_Time__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::FuseJS::Vibration__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::JavaScript__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::JSFileSource__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::Marshal__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::Marshal_Float2Enum__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::Marshal_Float3Enum__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::Marshal_VectorEnum__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::Match__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::Observable__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::ObservableSubscription__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::PathSubscription__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::ScriptEventArgs__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::ScriptEvents__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::SubscriptionSetExclusive__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::TellObject__typeof,
        (::uType*(*)())&::app::Fuse::Reactive::ThreadWorker__typeof,
        (::uType*(*)())&::app::Fuse::RenderTargetEntry__typeof,
        (::uType*(*)())&::app::Fuse::RequestBringIntoViewArgs__typeof,
        (::uType*(*)())&::app::Fuse::Resources::DisposalManager__typeof,
        (::uType*(*)())&::app::Fuse::Resources::FileImageSource__typeof,
        (::uType*(*)())&::app::Fuse::Resources::FileImageSourceCache__typeof,
        (::uType*(*)())&::app::Fuse::Resources::FileImageSourceImpl__typeof,
        (::uType*(*)())&::app::Fuse::Resources::FileResource__typeof,
        (::uType*(*)())&::app::Fuse::Resources::HttpImageSource__typeof,
        (::uType*(*)())&::app::Fuse::Resources::HttpImageSourceCache__typeof,
        (::uType*(*)())&::app::Fuse::Resources::HttpImageSourceImpl__typeof,
        (::uType*(*)())&::app::Fuse::Resources::ImageSource__typeof,
        (::uType*(*)())&::app::Fuse::Resources::ImageSourceErrorArgs__typeof,
        (::uType*(*)())&::app::Fuse::Resources::LoadingImageSource__typeof,
        (::uType*(*)())&::app::Fuse::Resources::MemoryPolicy__typeof,
        (::uType*(*)())&::app::Fuse::Resources::MultiDensityImageSource__typeof,
        (::uType*(*)())&::app::Fuse::Resources::ProxyImageSource__typeof,
        (::uType*(*)())&::app::Fuse::Resources::ResourceBinding__float4__typeof,
        (::uType*(*)())&::app::Fuse::Resources::ResourceRegistry__typeof,
        (::uType*(*)())&::app::Fuse::Resources::ResourceSetter__bool__typeof,
        (::uType*(*)())&::app::Fuse::Resources::ResourceSetter__float__typeof,
        (::uType*(*)())&::app::Fuse::Resources::ResourceSetter__float2__typeof,
        (::uType*(*)())&::app::Fuse::Resources::ResourceSetter__float3__typeof,
        (::uType*(*)())&::app::Fuse::Resources::ResourceSetter__float4__typeof,
        (::uType*(*)())&::app::Fuse::Resources::ResourceSetter__object__typeof,
        (::uType*(*)())&::app::Fuse::Resources::ResourceSetter__string__typeof,
        (::uType*(*)())&::app::Fuse::Resources::TextureImageSource__typeof,
        (::uType*(*)())&::app::Fuse::RootViewport__typeof,
        (::uType*(*)())&::app::Fuse::Rotation__typeof,
        (::uType*(*)())&::app::Fuse::Scaling__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::Array__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::BoolChangedArgs__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::Context__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::DoubleChangedArgs__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::Duktape::CallbackClosure__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::Duktape::Context__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::Duktape::duktape__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::Duktape::JSArray__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::Duktape::JSFunction__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::Duktape::JSObject__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::Error__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::FactoryClosure__string__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::FileModule__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::Function__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::NameRegistry__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::NativeEvent__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::NativeEvent_EventClosure__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::NativeFunction__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::NativeFunctionClosure__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::NativeMember__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::NativeModule__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::NativePromise__bool__bool__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::NativePromise__string__string__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::NativePromise2_ContextClosure__bool__bool__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::NativePromise2_ContextClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::NativePromise2_ContextClosure__string__string__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::NativePromise2_PromiseClosure__bool__bool__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::NativePromise2_PromiseClosure__string__string__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::Object__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::ScriptException__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::StringChangedArgs__typeof,
        (::uType*(*)())&::app::Fuse::Scripting::Value__typeof,
        (::uType*(*)())&::app::Fuse::Shapes::Circle__typeof,
        (::uType*(*)())&::app::Fuse::Shapes::Ellipse__typeof,
        (::uType*(*)())&::app::Fuse::Shapes::Path__typeof,
        (::uType*(*)())&::app::Fuse::Shapes::PathShape__typeof,
        (::uType*(*)())&::app::Fuse::Shapes::Rectangle__typeof,
        (::uType*(*)())&::app::Fuse::Shapes::RegularPolygon__typeof,
        (::uType*(*)())&::app::Fuse::Shapes::Shape__typeof,
        (::uType*(*)())&::app::Fuse::Shapes::Star__typeof,
        (::uType*(*)())&::app::Fuse::Shear__typeof,
        (::uType*(*)())&::app::Fuse::Stage__typeof,
        (::uType*(*)())&::app::Fuse::Storage::ApplicationDir__typeof,
        (::uType*(*)())&::app::Fuse::Style__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Android_Button__float4__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_Button__string__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_GraphicsView__float4__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_Grid__float__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_Number__float__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_Number__string__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_Panel__Fuse_Node__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_Rectangle__float4__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_Shape__float__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__float__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float4__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Font__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_TextControl__string__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Controls_ToggleControl__bool__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Elements_Element__bool__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Elements_Element__float__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Elements_Element__float2__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Elements_Element__float4__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_iOS_Button__float4__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Node__bool__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Node__Fuse_Node__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Node__string__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Shapes_Rectangle__float4__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Shapes_Shape__float__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__typeof,
        (::uType*(*)())&::app::Fuse::StyleProperty__typeof,
        (::uType*(*)())&::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__typeof,
        (::uType*(*)())&::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__typeof,
        (::uType*(*)())&::app::Fuse::Theme__typeof,
        (::uType*(*)())&::app::Fuse::Time__typeof,
        (::uType*(*)())&::app::Fuse::Transform__typeof,
        (::uType*(*)())&::app::Fuse::Translation__typeof,
        (::uType*(*)())&::app::Fuse::TranslationModes__typeof,
        (::uType*(*)())&::app::Fuse::TranslationModes_LocalMode__typeof,
        (::uType*(*)())&::app::Fuse::TranslationModes_ParentSizeMode__typeof,
        (::uType*(*)())&::app::Fuse::TranslationModes_SizeMode__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Actions::BringIntoView__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Actions::BringToFront__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Actions::Call__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Actions::Callback__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Actions::Collapse__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Actions::DebugAction__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Actions::GiveFocus__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Actions::Hide__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Actions::LaunchEmail__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Actions::LaunchMaps__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Actions::LaunchUri__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Actions::Pause__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Actions::PlaybackAction__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Actions::PlayTo__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Actions::Pulse__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Actions::Resume__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Actions::SendToBack__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Actions::Set__float__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Actions::Show__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Actions::Stop__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Actions::TriggerAction__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::LayoutAnimation__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::LayoutAnimation_PositionChangeMode__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::LayoutAnimation_ResizeChangeMode__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::ProgressAnimation__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::State__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::StateGroup__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::Trigger__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::WhileBool__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::WhileDisabled__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::WhileEnabled__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::WhileEnabledDisabledTrigger__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::WhileFailed__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::WhileFalse__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::WhileFocused__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::WhileFocusWithin__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::WhileInteracting__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::WhileKeyboardVisible__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::WhileKeyboardVisible_RelativeToKeyboardMode__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::WhileLoading__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::WhileTrigger__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::WhileTrue__typeof,
        (::uType*(*)())&::app::Fuse::Triggers::WhileValue__bool__typeof,
        (::uType*(*)())&::app::Fuse::UnhandledExceptionArgs__typeof,
        (::uType*(*)())&::app::Fuse::UpdateListener__typeof,
        (::uType*(*)())&::app::Fuse::UpdateManager__typeof,
        (::uType*(*)())&::app::Fuse::Vibration::Vibrate__typeof,
        (::uType*(*)())&::app::Fuse::Vibration::Vibration__typeof,
        (::uType*(*)())&::app::MainView__typeof,
        (::uType*(*)())&::app::MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__typeof,
        (::uType*(*)())&::app::MainView_Fuse_Controls_TextControl_string_Value_Property__typeof,
        (::uType*(*)())&::app::MainView_Fuse_Elements_Element_float_Opacity_Property__typeof,
        (::uType*(*)())&::app::MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__typeof,
        (::uType*(*)())&::app::MainView_Fuse_Triggers_WhileBool_bool_Value_Property__typeof,
        (::uType*(*)())&::app::MainView_Template__typeof,
        (::uType*(*)())&::app::MainView_Template1__typeof,
        (::uType*(*)())&::app::OpenGL::GL__typeof,
        (::uType*(*)())&::app::OpenGL::GLBufferHandle__typeof,
        (::uType*(*)())&::app::OpenGL::GLFramebufferHandle__typeof,
        (::uType*(*)())&::app::OpenGL::GLProgramHandle__typeof,
        (::uType*(*)())&::app::OpenGL::GLRenderbufferHandle__typeof,
        (::uType*(*)())&::app::OpenGL::GLShaderHandle__typeof,
        (::uType*(*)())&::app::OpenGL::GLTextureHandle__typeof,
        (::uType*(*)())&::app::Uno::Application__typeof,
        (::uType*(*)())&::app::Uno::ArgumentException__typeof,
        (::uType*(*)())&::app::Uno::ArgumentNullException__typeof,
        (::uType*(*)())&::app::Uno::ArgumentOutOfRangeException__typeof,
        (::uType*(*)())&::app::Uno::Array__typeof,
        (::uType*(*)())&::app::Uno::Attribute__typeof,
        (::uType*(*)())&::app::Uno::AttributeUsageAttribute__typeof,
        (::uType*(*)())&::app::Uno::Bool__typeof,
        (::uType*(*)())&::app::Uno::Buffer__typeof,
        (::uType*(*)())&::app::Uno::BundleFile__typeof,
        (::uType*(*)())&::app::Uno::Byte__typeof,
        (::uType*(*)())&::app::Uno::Byte4__typeof,
        (::uType*(*)())&::app::Uno::Char__typeof,
        (::uType*(*)())&::app::Uno::CharPunctuationChecker__typeof,
        (::uType*(*)())&::app::Uno::CharPunctuationChecker_PunctuationRange__typeof,
        (::uType*(*)())&::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster__typeof,
        (::uType*(*)())&::app::Uno::Collections::ConcurrentCollection__Uno_EventHandler__typeof,
        (::uType*(*)())&::app::Uno::Collections::ConcurrentCollection1_DeferLockImpl__Fuse_Animations_IMixerMaster__typeof,
        (::uType*(*)())&::app::Uno::Collections::ConcurrentCollection1_DeferLockImpl__Uno_EventHandler__typeof,
        (::uType*(*)())&::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster__typeof,
        (::uType*(*)())&::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__Android_android_view_View__Fuse_Node__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__char__float__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__char__Uno_Content_Fonts_RenderedGlyph__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__framebuffer__bool__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__framebuffer__int__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__Fuse_IFlush__bool__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__Fuse_Node__bool__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__int__Fuse_Scripting_Callback__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__int__string__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__object__object__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__object__string__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__string__Android_android_graphics_Bitmap__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__string__Android_android_graphics_Typeface__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__string__bool__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__string__Experimental_Audio_Channel__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__string__Experimental_Audio_Player__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__string__Experimental_Audio_Sound__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__string__float__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__string__int__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__string__object__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__string__string__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__string__Uno_BundleFile__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object___typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__string__Uno_Collections_List_Uno_Action___typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__Uno_Type__object__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__Android_android_view_View__Fuse_Node__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__char__float__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_BitmapFont_GlyphInfo__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__char__Uno_Content_Fonts_RenderedGlyph__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__framebuffer__bool__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__framebuffer__int__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__Fuse_Controls_Internal_DefaultTextRenderer_FontKey__Uno_Content_Fonts_BitmapFont__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__Fuse_Font__Fuse_Controls_Internal_DefaultTextRenderer__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__Fuse_IFlush__bool__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__Fuse_Node__bool__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Capturer__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__int__Fuse_Scripting_Callback__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__int__string__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__object__object__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__object__string__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__string__Android_android_graphics_Bitmap__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__string__Android_android_graphics_Typeface__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__string__bool__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__string__Experimental_Audio_Channel__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__string__Experimental_Audio_Player__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__string__Experimental_Audio_Sound__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__string__float__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__string__int__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__string__object__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__string__string__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__string__Uno_BundleFile__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_object___typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Collections_List_Uno_Action___typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__string__Uno_Runtime_Implementation_ShaderBackends_OpenGL_GLCompiledProgram__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__Uno_Content_Fonts_BitmapFont_CharPair__float__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__Uno_Type__object__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_Content_Fonts_FontFace__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Bucket__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Enumerator__char__Uno_Content_Fonts_RenderedGlyph__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Capturer__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Enumerator__string__Experimental_Audio_Channel__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Enumerator__string__string__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Collections_List_object___typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_KeyCollection__string__string__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_KeyCollection_Enumerator__string__string__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Collections_List_object___typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_Fuse_Scripting_INameListener___typeof,
        (::uType*(*)())&::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__string__Uno_Collections_List_object___typeof,
        (::uType*(*)())&::app::Uno::Collections::EmptyEnumerable__float2__typeof,
        (::uType*(*)())&::app::Uno::Collections::EmptyEnumerator__float2__typeof,
        (::uType*(*)())&::app::Uno::Collections::EnumerableExtensions__typeof,
        (::uType*(*)())&::app::Uno::Collections::EnumerableExtensions_LinkedList__float2__typeof,
        (::uType*(*)())&::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Border__typeof,
        (::uType*(*)())&::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__typeof,
        (::uType*(*)())&::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__typeof,
        (::uType*(*)())&::app::Uno::Collections::HashSet__framebuffer__typeof,
        (::uType*(*)())&::app::Uno::Collections::HashSet__Fuse_IFlush__typeof,
        (::uType*(*)())&::app::Uno::Collections::HashSet__Fuse_Node__typeof,
        (::uType*(*)())&::app::Uno::Collections::HashSet1_Enumerator__Fuse_IFlush__typeof,
        (::uType*(*)())&::app::Uno::Collections::HashSet1_Enumerator__Fuse_Node__typeof,
        (::uType*(*)())&::app::Uno::Collections::IListExtensions__typeof,
        (::uType*(*)())&::app::Uno::Collections::KeyValuePair__char__Uno_Content_Fonts_RenderedGlyph__typeof,
        (::uType*(*)())&::app::Uno::Collections::KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__typeof,
        (::uType*(*)())&::app::Uno::Collections::KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper__typeof,
        (::uType*(*)())&::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Capturer__typeof,
        (::uType*(*)())&::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Pointer_PointerRecord__typeof,
        (::uType*(*)())&::app::Uno::Collections::KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer___typeof,
        (::uType*(*)())&::app::Uno::Collections::KeyValuePair__string__Experimental_Audio_Channel__typeof,
        (::uType*(*)())&::app::Uno::Collections::KeyValuePair__string__string__typeof,
        (::uType*(*)())&::app::Uno::Collections::KeyValuePair__string__Uno_Collections_List_object___typeof,
        (::uType*(*)())&::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof,
        (::uType*(*)())&::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__byte____typeof,
        (::uType*(*)())&::app::Uno::Collections::List__char__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Experimental_Audio_Channel__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__float2__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__framebuffer__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Animations_Animator__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Animations_IMixerMaster__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool___typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float___typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4___typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform___typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Behavior__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_CacheFramebuffer__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Controls_Internal_WordWrapperWord__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Drawing_Brush__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Drawing_Contour__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Drawing_PathGeometry__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Drawing_Stroke__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Effects_Effect__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Elements_Element__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Elements_ElementAtlas__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Elements_ElementBatch__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Entities_Entity__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Input_Capturer__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Input_FocusGainedHandler__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Input_FocusLostHandler__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Input_IsFocusableChangedHandler__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Input_KeyPressedHandler__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Input_KeyReleasedHandler__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Input_PointerEnteredHandler__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Input_PointerLeftHandler__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Input_PointerMovedHandler__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Input_PointerPressedHandler__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Input_PointerReleasedHandler__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Input_PointerWheelMovedHandler__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Input_TextEnteredHandler__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_IViewport__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Layouts_Column__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Layouts_Row__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Node__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Physics_Body__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Physics_IRule__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Reactive_FuseJS_Timer_Time__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Reactive_JavaScript__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_RenderTargetEntry__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Resources_ImageSource__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Resources_IMemoryResource__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Resources_ISoftDisposable__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Scripting_INameListener__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Scripting_NativeMember__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Stage__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Style__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_StyleProperty__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Transform__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Fuse_UpdateListener__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__int__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__object__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__string__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Uno_Action__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Uno_EventHandler__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Uno_Graphics_PolygonFace__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Uno_Platform_Key__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Uno_Recti__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Uno_UX_FileSource__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Uno_UX_IFactory__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Uno_UX_ITemplate__typeof,
        (::uType*(*)())&::app::Uno::Collections::List__Uno_UX_Resource__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__byte____typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Experimental_Audio_Channel__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__float2__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_bool___typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_float___typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_float4___typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Behavior__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_CacheFramebuffer__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Controls_Internal_WrappedLine__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Brush__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Contour__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Stroke__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Effects_Effect__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Elements_Element__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementAtlas__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementBatch__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementBatchEntry__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Elements_IElementBatchDrawable__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Input_Capturer__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_Column__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_Row__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Navigation_IPageResourceBinding__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Node__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Physics_Body__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Physics_IRule__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Reactive_JavaScript__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Resources_ImageSource__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Scripting_NativeMember__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Style__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Transform__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__int__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__string__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Uno_Action__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Uno_UX_FileSource__typeof,
        (::uType*(*)())&::app::Uno::Collections::List1_Enumerator__Uno_UX_IFactory__typeof,
        (::uType*(*)())&::app::Uno::Collections::ObservableList__Fuse_Behavior__typeof,
        (::uType*(*)())&::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush__typeof,
        (::uType*(*)())&::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke__typeof,
        (::uType*(*)())&::app::Uno::Collections::ObservableList__Fuse_Effects_Effect__typeof,
        (::uType*(*)())&::app::Uno::Collections::ObservableList__Fuse_Entities_Entity__typeof,
        (::uType*(*)())&::app::Uno::Collections::ObservableList__Fuse_Layouts_Column__typeof,
        (::uType*(*)())&::app::Uno::Collections::ObservableList__Fuse_Layouts_Row__typeof,
        (::uType*(*)())&::app::Uno::Collections::ObservableList__Fuse_Node__typeof,
        (::uType*(*)())&::app::Uno::Collections::ObservableList__Fuse_Resources_ImageSource__typeof,
        (::uType*(*)())&::app::Uno::Collections::ObservableList__Fuse_Style__typeof,
        (::uType*(*)())&::app::Uno::Collections::ObservableList__Fuse_Transform__typeof,
        (::uType*(*)())&::app::Uno::Collections::ObservableList__Uno_UX_FileSource__typeof,
        (::uType*(*)())&::app::Uno::Collections::ObservableList__Uno_UX_IFactory__typeof,
        (::uType*(*)())&::app::Uno::Collections::ObservableList__Uno_UX_ITemplate__typeof,
        (::uType*(*)())&::app::Uno::Collections::ObservableList__Uno_UX_Resource__typeof,
        (::uType*(*)())&::app::Uno::Collections::Queue__object____typeof,
        (::uType*(*)())&::app::Uno::Collections::Queue__Uno_Action_bool___typeof,
        (::uType*(*)())&::app::Uno::Collections::Queue__Uno_Action_Fuse_Camera_PictureResult___typeof,
        (::uType*(*)())&::app::Uno::Collections::Queue__Uno_Action_string___typeof,
        (::uType*(*)())&::app::Uno::Collections::Queue__Uno_Action_Uno_Exception___typeof,
        (::uType*(*)())&::app::Uno::Collections::Queue__Uno_Exception__typeof,
        (::uType*(*)())&::app::Uno::Collections::Queue__Uno_Threading_Promise_bool___typeof,
        (::uType*(*)())&::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult___typeof,
        (::uType*(*)())&::app::Uno::Collections::Queue__Uno_Threading_Promise_string___typeof,
        (::uType*(*)())&::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__typeof,
        (::uType*(*)())&::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__typeof,
        (::uType*(*)())&::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__typeof,
        (::uType*(*)())&::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof,
        (::uType*(*)())&::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__typeof,
        (::uType*(*)())&::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__typeof,
        (::uType*(*)())&::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__typeof,
        (::uType*(*)())&::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof,
        (::uType*(*)())&::app::Uno::Collections::UnionEnumerable__float2__typeof,
        (::uType*(*)())&::app::Uno::Collections::UnionEnumerator__float2__typeof,
        (::uType*(*)())&::app::Uno::Collections::WhereEnumerable__Fuse_Drawing_Tesselation_Face__typeof,
        (::uType*(*)())&::app::Uno::Collections::WhereEnumerator__Fuse_Drawing_Tesselation_Face__typeof,
        (::uType*(*)())&::app::Uno::Color__typeof,
        (::uType*(*)())&::app::Uno::ColorHelper__typeof,
        (::uType*(*)())&::app::Uno::Compiler::CallerFilePathAttribute__typeof,
        (::uType*(*)())&::app::Uno::Compiler::CallerLineNumberAttribute__typeof,
        (::uType*(*)())&::app::Uno::Compiler::CallerMemberNameAttribute__typeof,
        (::uType*(*)())&::app::Uno::Compiler::ExportTargetInterop::DontCopyStructAttribute__typeof,
        (::uType*(*)())&::app::Uno::Compiler::ExportTargetInterop::DotNetTypeAttribute__typeof,
        (::uType*(*)())&::app::Uno::Compiler::ExportTargetInterop::ExportConditionAttribute__typeof,
        (::uType*(*)())&::app::Uno::Compiler::ExportTargetInterop::ExportNameAttribute__typeof,
        (::uType*(*)())&::app::Uno::Compiler::ExportTargetInterop::GlslIntrinsicAttribute__typeof,
        (::uType*(*)())&::app::Uno::Compiler::ExportTargetInterop::NativeClassAttribute__typeof,
        (::uType*(*)())&::app::Uno::Compiler::ExportTargetInterop::TargetSpecificImplementationAttribute__typeof,
        (::uType*(*)())&::app::Uno::Compiler::ExportTargetInterop::TargetSpecificTypeAttribute__typeof,
        (::uType*(*)())&::app::Uno::Compiler::IgnoreMainClassAttribute__typeof,
        (::uType*(*)())&::app::Uno::Compiler::ShaderGenerator::ShaderStageInlineAttribute__typeof,
        (::uType*(*)())&::app::Uno::Content::Fonts::BitmapFont__typeof,
        (::uType*(*)())&::app::Uno::Content::Fonts::BitmapFont_CharPair__typeof,
        (::uType*(*)())&::app::Uno::Content::Fonts::BitmapFont_GlyphInfo__typeof,
        (::uType*(*)())&::app::Uno::Content::Fonts::CppFontFace__typeof,
        (::uType*(*)())&::app::Uno::Content::Fonts::CppFontFaceHandle__typeof,
        (::uType*(*)())&::app::Uno::Content::Fonts::DefaultTextTransform__typeof,
        (::uType*(*)())&::app::Uno::Content::Fonts::FontFace__typeof,
        (::uType*(*)())&::app::Uno::Content::Fonts::FontFaceHelpers__typeof,
        (::uType*(*)())&::app::Uno::Content::Fonts::RenderedGlyph__typeof,
        (::uType*(*)())&::app::Uno::Content::Fonts::SdfFontShader__typeof,
        (::uType*(*)())&::app::Uno::Content::Fonts::SpriteFontShader__typeof,
        (::uType*(*)())&::app::Uno::Content::Fonts::TextRenderer__typeof,
        (::uType*(*)())&::app::Uno::Content::Fonts::TextShader__typeof,
        (::uType*(*)())&::app::Uno::Content::Fonts::TextShaderData__typeof,
        (::uType*(*)())&::app::Uno::Content::Fonts::TextTransform__typeof,
        (::uType*(*)())&::app::Uno::Content::Images::Bitmap__typeof,
        (::uType*(*)())&::app::Uno::Data::Json::AtomicValue__bool__typeof,
        (::uType*(*)())&::app::Uno::Data::Json::Boolean__typeof,
        (::uType*(*)())&::app::Uno::Data::Json::Null__typeof,
        (::uType*(*)())&::app::Uno::Data::Json::Value__typeof,
        (::uType*(*)())&::app::Uno::DateTime__typeof,
        (::uType*(*)())&::app::Uno::Delegate__typeof,
        (::uType*(*)())&::app::Uno::Diagnostics::Clock__typeof,
        (::uType*(*)())&::app::Uno::Diagnostics::Debug__typeof,
        (::uType*(*)())&::app::Uno::Double__typeof,
        (::uType*(*)())&::app::Uno::EventArgs__typeof,
        (::uType*(*)())&::app::Uno::Exception__typeof,
        (::uType*(*)())&::app::Uno::FlagsAttribute__typeof,
        (::uType*(*)())&::app::Uno::Float__typeof,
        (::uType*(*)())&::app::Uno::Float2__typeof,
        (::uType*(*)())&::app::Uno::Float2x2__typeof,
        (::uType*(*)())&::app::Uno::Float3__typeof,
        (::uType*(*)())&::app::Uno::Float3x3__typeof,
        (::uType*(*)())&::app::Uno::Float4__typeof,
        (::uType*(*)())&::app::Uno::Float4x4__typeof,
        (::uType*(*)())&::app::Uno::FormatException__typeof,
        (::uType*(*)())&::app::Uno::GC__typeof,
        (::uType*(*)())&::app::Uno::Generic__typeof,
        (::uType*(*)())&::app::Uno::Geometry::Box__typeof,
        (::uType*(*)())&::app::Uno::Geometry::Collision__typeof,
        (::uType*(*)())&::app::Uno::Geometry::Collision2D__typeof,
        (::uType*(*)())&::app::Uno::Geometry::CubicBezier__typeof,
        (::uType*(*)())&::app::Uno::Geometry::Ray__typeof,
        (::uType*(*)())&::app::Uno::Geometry::Vertex__typeof,
        (::uType*(*)())&::app::Uno::Geometry::VertexEnumerable__typeof,
        (::uType*(*)())&::app::Uno::Geometry::VertexEnumerator__typeof,
        (::uType*(*)())&::app::Uno::Graphics::DeviceBuffer__typeof,
        (::uType*(*)())&::app::Uno::Graphics::FormatHelpers__typeof,
        (::uType*(*)())&::app::Uno::Graphics::Framebuffer__typeof,
        (::uType*(*)())&::app::Uno::Graphics::GraphicsContext__typeof,
        (::uType*(*)())&::app::Uno::Graphics::IndexBuffer__typeof,
        (::uType*(*)())&::app::Uno::Graphics::RenderTarget__typeof,
        (::uType*(*)())&::app::Uno::Graphics::SamplerState__typeof,
        (::uType*(*)())&::app::Uno::Graphics::Texture2D__typeof,
        (::uType*(*)())&::app::Uno::Graphics::TextureHelpers__typeof,
        (::uType*(*)())&::app::Uno::Graphics::VertexAttributeInfo__typeof,
        (::uType*(*)())&::app::Uno::Graphics::VertexBuffer__typeof,
        (::uType*(*)())&::app::Uno::IndexOutOfRangeException__typeof,
        (::uType*(*)())&::app::Uno::Int__typeof,
        (::uType*(*)())&::app::Uno::Int2__typeof,
        (::uType*(*)())&::app::Uno::Int4__typeof,
        (::uType*(*)())&::app::Uno::IntPtr__typeof,
        (::uType*(*)())&::app::Uno::InvalidCastException__typeof,
        (::uType*(*)())&::app::Uno::InvalidOperationException__typeof,
        (::uType*(*)())&::app::Uno::IO::BinaryReader__typeof,
        (::uType*(*)())&::app::Uno::IO::BinaryWriter__typeof,
        (::uType*(*)())&::app::Uno::IO::CppXliStream__typeof,
        (::uType*(*)())&::app::Uno::IO::CppXliStreamHandle__typeof,
        (::uType*(*)())&::app::Uno::IO::Directory__typeof,
        (::uType*(*)())&::app::Uno::IO::EndOfStreamException__typeof,
        (::uType*(*)())&::app::Uno::IO::File__typeof,
        (::uType*(*)())&::app::Uno::IO::FileSystemImpl__typeof,
        (::uType*(*)())&::app::Uno::IO::IOException__typeof,
        (::uType*(*)())&::app::Uno::IO::MemoryStream__typeof,
        (::uType*(*)())&::app::Uno::IO::Path__typeof,
        (::uType*(*)())&::app::Uno::IO::Stream__typeof,
        (::uType*(*)())&::app::Uno::IO::StreamReader__typeof,
        (::uType*(*)())&::app::Uno::IO::StreamWriter__typeof,
        (::uType*(*)())&::app::Uno::IO::TextReader__typeof,
        (::uType*(*)())&::app::Uno::IO::TextWriter__typeof,
        (::uType*(*)())&::app::Uno::Long__typeof,
        (::uType*(*)())&::app::Uno::Math__typeof,
        (::uType*(*)())&::app::Uno::Matrix__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::AbsolutePathParser__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::HashParser__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::HostInfo__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::HostInfoParser__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::HttpDefaultDispatcher__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::HttpMessageCache__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::HttpMessageHandler__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::HttpMessageHandler_StaticData__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::HttpMessageHandlerRequest__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::HttpMessageHandlerRequest_DispatchClosure__string__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::HttpMessageHandlerRequest_DispatchClosure__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::HttpMessageHandlerRequest_ProgressClosure__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::HttpStatusReasonPhrase__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::Implementation::AndroidHttpRequest__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::InvalidResponseTypeException__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::InvalidStateException__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::QueryParser__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::SchemeParser__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::SchemeParserResult__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::Uri__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::UriFormatException__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::UriScheme__typeof,
        (::uType*(*)())&::app::Uno::Net::Http::UserInfoParser__typeof,
        (::uType*(*)())&::app::Uno::NotImplementedException__typeof,
        (::uType*(*)())&::app::Uno::NotSupportedException__typeof,
        (::uType*(*)())&::app::Uno::NullReferenceException__typeof,
        (::uType*(*)())&::app::Uno::ObjectDisposedException__typeof,
        (::uType*(*)())&::app::Uno::OverflowException__typeof,
        (::uType*(*)())&::app::Uno::Platform::ClosingEventArgs__typeof,
        (::uType*(*)())&::app::Uno::Platform::FrameChangedEventArgs__typeof,
        (::uType*(*)())&::app::Uno::Platform::KeyEventArgs__typeof,
        (::uType*(*)())&::app::Uno::Platform::PointerEventArgs__typeof,
        (::uType*(*)())&::app::Uno::Platform::SystemUI__typeof,
        (::uType*(*)())&::app::Uno::Platform::SystemUIWillResizeEventArgs__typeof,
        (::uType*(*)())&::app::Uno::Platform::TextInputEventArgs__typeof,
        (::uType*(*)())&::app::Uno::Platform::TimerEventArgs__typeof,
        (::uType*(*)())&::app::Uno::Platform::ViewNativeHandle__typeof,
        (::uType*(*)())&::app::Uno::Platform::Window__typeof,
        (::uType*(*)())&::app::Uno::Platform2::Application__typeof,
        (::uType*(*)())&::app::Uno::Platform2::Display__typeof,
        (::uType*(*)())&::app::Uno::Platform2::Display_PrivateState__typeof,
        (::uType*(*)())&::app::Uno::Platform2::Implementation::InvokedFromNativeCodeAttribute__typeof,
        (::uType*(*)())&::app::Uno::Quaternion__typeof,
        (::uType*(*)())&::app::Uno::Rect__typeof,
        (::uType*(*)())&::app::Uno::Recti__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::ArrayCopyImpl__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::ArraySortImpl__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::BufferImpl__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::ClockImpl__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::DebugImpl__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::GenericEqualsImpl__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::GraphicsContextHandle__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::GraphicsContextImpl__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__float2__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_Border__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_Contour__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_PolygonDrawable__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__float2__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Drawing_Border__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Drawing_Contour__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Drawing_PolygonDrawable__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::Internal::BootstrapHints__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::Internal::Bootstrapper__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::Internal::BufferConverters__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::Internal::BundleRegistry__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::Internal::FormatStringItem__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::Internal::FormatStringLiteral__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::Internal::FormatStringToken__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::Internal::FormatStringTokenizer__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::Internal::NumericFormatter__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::Internal::WindowHelpers__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::PlatformWindowHandle__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::PlatformWindowImpl__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof,
        (::uType*(*)())&::app::Uno::Runtime::Implementation::TextEncodingImpl__typeof,
        (::uType*(*)())&::app::Uno::SByte__typeof,
        (::uType*(*)())&::app::Uno::Short__typeof,
        (::uType*(*)())&::app::Uno::String__typeof,
        (::uType*(*)())&::app::Uno::Text::Base64__typeof,
        (::uType*(*)())&::app::Uno::Text::StringBuilder__typeof,
        (::uType*(*)())&::app::Uno::Text::StringBuilderElement__typeof,
        (::uType*(*)())&::app::Uno::Threading::Future__bool__typeof,
        (::uType*(*)())&::app::Uno::Threading::Future__Fuse_Camera_PictureResult__typeof,
        (::uType*(*)())&::app::Uno::Threading::Future__string__typeof,
        (::uType*(*)())&::app::Uno::Threading::Future__typeof,
        (::uType*(*)())&::app::Uno::Threading::Future1_Closure__bool__bool__typeof,
        (::uType*(*)())&::app::Uno::Threading::Future1_Closure__bool__Uno_Exception__typeof,
        (::uType*(*)())&::app::Uno::Threading::Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult__typeof,
        (::uType*(*)())&::app::Uno::Threading::Future1_Closure__Fuse_Camera_PictureResult__Uno_Exception__typeof,
        (::uType*(*)())&::app::Uno::Threading::Future1_Closure__string__string__typeof,
        (::uType*(*)())&::app::Uno::Threading::Future1_Closure__string__Uno_Exception__typeof,
        (::uType*(*)())&::app::Uno::Threading::Mutex__typeof,
        (::uType*(*)())&::app::Uno::Threading::POSIXMutex__typeof,
        (::uType*(*)())&::app::Uno::Threading::POSIXThread__typeof,
        (::uType*(*)())&::app::Uno::Threading::Promise__bool__typeof,
        (::uType*(*)())&::app::Uno::Threading::Promise__Fuse_Camera_PictureResult__typeof,
        (::uType*(*)())&::app::Uno::Threading::Promise__string__typeof,
        (::uType*(*)())&::app::Uno::Threading::SyncDispatcher__typeof,
        (::uType*(*)())&::app::Uno::Threading::Thread__typeof,
        (::uType*(*)())&::app::Uno::Time::Calendars::Era__typeof,
        (::uType*(*)())&::app::Uno::Time::Calendars::GregorianYearMonthDayCalculator__typeof,
        (::uType*(*)())&::app::Uno::Time::Calendars::TimeOfDayCalculator__typeof,
        (::uType*(*)())&::app::Uno::Time::Calendars::WeekYearCalculator__typeof,
        (::uType*(*)())&::app::Uno::Time::Calendars::YearMonthDayCalculator__typeof,
        (::uType*(*)())&::app::Uno::Time::CalendarSystem__typeof,
        (::uType*(*)())&::app::Uno::Time::Constants__typeof,
        (::uType*(*)())&::app::Uno::Time::Converter__typeof,
        (::uType*(*)())&::app::Uno::Time::DateTimeZone__typeof,
        (::uType*(*)())&::app::Uno::Time::DeviceTimeZone__typeof,
        (::uType*(*)())&::app::Uno::Time::Duration__typeof,
        (::uType*(*)())&::app::Uno::Time::FixedDateTimeZone__typeof,
        (::uType*(*)())&::app::Uno::Time::HashCodeHelper__typeof,
        (::uType*(*)())&::app::Uno::Time::Instant__typeof,
        (::uType*(*)())&::app::Uno::Time::LocalDateTime__typeof,
        (::uType*(*)())&::app::Uno::Time::LocalTime__typeof,
        (::uType*(*)())&::app::Uno::Time::Offset__typeof,
        (::uType*(*)())&::app::Uno::Time::Period__typeof,
        (::uType*(*)())&::app::Uno::Time::Preconditions__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::LocalDateTimePattern__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::LocalTimePattern__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::OffsetPattern__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::OffsetPattern_OffsetBucket__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof,
        (::uType*(*)())&::app::Uno::Time::Text::SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof,
        (::uType*(*)())&::app::Uno::Time::ZonedDateTime__typeof,
        (::uType*(*)())&::app::Uno::UInt__typeof,
        (::uType*(*)())&::app::Uno::ULong__typeof,
        (::uType*(*)())&::app::Uno::UShort__typeof,
        (::uType*(*)())&::app::Uno::UShort2__typeof,
        (::uType*(*)())&::app::Uno::UX::BundleFileSource__typeof,
        (::uType*(*)())&::app::Uno::UX::FileSource__typeof,
        (::uType*(*)())&::app::Uno::UX::Property__bool__typeof,
        (::uType*(*)())&::app::Uno::UX::Property__float__typeof,
        (::uType*(*)())&::app::Uno::UX::Property__float4__typeof,
        (::uType*(*)())&::app::Uno::UX::Property__Fuse_Elements_Visibility__typeof,
        (::uType*(*)())&::app::Uno::UX::Property__Fuse_Resources_ImageSource__typeof,
        (::uType*(*)())&::app::Uno::UX::Property__string__typeof,
        (::uType*(*)())&::app::Uno::UX::Resource__typeof,
        (::uType*(*)())&::app::Uno::UX::StreamExtensions__typeof,
        (::uType*(*)())&::app::Uno::UX::Template__Fuse_Controls_BackButton__typeof,
        (::uType*(*)())&::app::Uno::UX::Template__Fuse_Controls_Button__typeof,
        (::uType*(*)())&::app::Uno::UX::Template__Fuse_Controls_Circle__typeof,
        (::uType*(*)())&::app::Uno::UX::Template__Fuse_Controls_Ellipse__typeof,
        (::uType*(*)())&::app::Uno::UX::Template__Fuse_Controls_GraphicsView__typeof,
        (::uType*(*)())&::app::Uno::UX::Template__Fuse_Controls_Image__typeof,
        (::uType*(*)())&::app::Uno::UX::Template__Fuse_Controls_NativeViewHost__typeof,
        (::uType*(*)())&::app::Uno::UX::Template__Fuse_Controls_NavigationBar__typeof,
        (::uType*(*)())&::app::Uno::UX::Template__Fuse_Controls_Page__typeof,
        (::uType*(*)())&::app::Uno::UX::Template__Fuse_Controls_Path__typeof,
        (::uType*(*)())&::app::Uno::UX::Template__Fuse_Controls_PlainTextEdit__typeof,
        (::uType*(*)())&::app::Uno::UX::Template__Fuse_Controls_Rectangle__typeof,
        (::uType*(*)())&::app::Uno::UX::Template__Fuse_Controls_RegularPolygon__typeof,
        (::uType*(*)())&::app::Uno::UX::Template__Fuse_Controls_ScrollView__typeof,
        (::uType*(*)())&::app::Uno::UX::Template__Fuse_Controls_Slider__typeof,
        (::uType*(*)())&::app::Uno::UX::Template__Fuse_Controls_Star__typeof,
        (::uType*(*)())&::app::Uno::UX::Template__Fuse_Controls_Switch__typeof,
        (::uType*(*)())&::app::Uno::UX::Template__Fuse_Controls_Text__typeof,
        (::uType*(*)())&::app::Uno::UX::Template__Fuse_Controls_TextBlock__typeof,
        (::uType*(*)())&::app::Uno::UX::Template__Fuse_Controls_TextControl__typeof,
        (::uType*(*)())&::app::Uno::UX::Template__Fuse_Controls_TextInput__typeof,
        (::uType*(*)())&::app::Uno::UX::UXAttachedPropertyGetterAttribute__typeof,
        (::uType*(*)())&::app::Uno::UX::UXAttachedPropertySetterAttribute__typeof,
        (::uType*(*)())&::app::Uno::UX::UXAttachedPropertyStyleSetterAttribute__typeof,
        (::uType*(*)())&::app::Uno::UX::UXAutoGenericAttribute__typeof,
        (::uType*(*)())&::app::Uno::UX::UXContentAttribute__typeof,
        (::uType*(*)())&::app::Uno::UX::UXContentModeAttribute__typeof,
        (::uType*(*)())&::app::Uno::UX::UXGlobalResourceAttribute__typeof,
        (::uType*(*)())&::app::Uno::UX::UXImplicitPropertySetterAttribute__typeof,
        (::uType*(*)())&::app::Uno::UX::UXLineNumberAttribute__typeof,
        (::uType*(*)())&::app::Uno::UX::UXNameAttribute__typeof,
        (::uType*(*)())&::app::Uno::UX::UXParameterAttribute__typeof,
        (::uType*(*)())&::app::Uno::UX::UXPrimaryAttribute__typeof,
        (::uType*(*)())&::app::Uno::UX::UXSourceFileNameAttribute__typeof,
        (::uType*(*)())&::app::Uno::UX::UXStyleListAttribute__typeof,
        (::uType*(*)())&::app::Uno::UX::UXValueBindingAliasAttribute__typeof,
        (::uType*(*)())&::app::Uno::UX::UXValueBindingArgumentAttribute__typeof,
        (::uType*(*)())&::app::Uno::UX::UXValueChangedEventAttribute__typeof,
        (::uType*(*)())&::app::Uno::UX::ValueChangedArgs__bool__typeof,
        (::uType*(*)())&::app::Uno::UX::ValueChangedArgs__double__typeof,
        (::uType*(*)())&::app::Uno::UX::ValueChangedArgs__float__typeof,
        (::uType*(*)())&::app::Uno::UX::ValueChangedArgs__Fuse_Resources_ImageSource__typeof,
        (::uType*(*)())&::app::Uno::UX::ValueChangedArgs__string__typeof,
        (::uType*(*)())&::app::Uno::Vector__typeof,
        (::uType*(*)())&::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl__typeof,
        (::uType*(*)())&::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl__typeof,
        (::uType*(*)())&::app::Uno::WeakReferenceAttribute__typeof,
        NULL
    };

    for (int i = 0; functions[i]; i++)
        (*functions[i])(); 
}
