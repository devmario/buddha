#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Uno_Action.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.IntPtr.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.Future.h>
#include <app/Uno.Threading.FutureState.h>
#include <app/Uno.Threading.IDispatcher.h>
#include <app/Uno.Threading.Mutex.h>
#include <app/Uno.Threading.POSIXMutex.h>
#include <app/Uno.Threading.POSIXThread.h>
#include <app/Uno.Threading.SyncDispatcher.h>
#include <app/Uno.Threading.Thread.h>
#include <app/Uno.ULong.h>
#include <posix_mutex.h>
#include <posix_thread.h>

namespace app {
namespace Uno {
namespace Threading {

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Threading/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Future__uType* Future__typeof()
{
    static ::uStaticStrong<Future__uType*> type;
    if (type != NULL) return type;

    type = (Future__uType*)::uAllocClassType(sizeof(Future__uType), "Uno.Threading.Future", false, 0, 0, 0);

    return type;
}

void Future___ObjInit(Future* __this)
{
}

int Future__get_State(Future* __this)
{
    return __this->_State;
}

void Future__set_State(Future* __this, int value)
{
    __this->_State = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Threading/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* FutureState__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Threading.FutureState", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Pending", 0LL,
        "Resolved", 1LL,
        "Rejected", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Threading/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDispatcher__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Threading.IDispatcher");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Threading/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Mutex__uType* Mutex__typeof()
{
    static ::uStaticStrong<Mutex__uType*> type;
    if (type != NULL) return type;

    type = (Mutex__uType*)::uAllocClassType(sizeof(Mutex__uType), "Uno.Threading.Mutex", false, 0, 0, 0);

    return type;
}

void Mutex___ObjInit(Mutex* __this)
{
}

Mutex* Mutex__Create(::uStatic* __this)
{
    {
        return (Mutex*)::app::Uno::Threading::POSIXMutex__New_1(NULL);
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Feature not supported in this backend")));
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Threading/0.12.0/Implementation/Cpp/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

POSIXMutex__uType* POSIXMutex__typeof()
{
    static ::uStaticStrong<POSIXMutex__uType*> type;
    if (type != NULL) return type;

    type = (POSIXMutex__uType*)::uAllocClassType(sizeof(POSIXMutex__uType), "Uno.Threading.POSIXMutex", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Threading::Mutex__typeof());
    type->__fp_Finalize = (void(*)(::uObject*))POSIXMutex__Finalize;
    type->__fp_Lock = (void(*)(::app::Uno::Threading::Mutex*))POSIXMutex__Lock;
    type->__fp_Unlock = (void(*)(::app::Uno::Threading::Mutex*))POSIXMutex__Unlock;

    return type;
}

void POSIXMutex__Finalize(POSIXMutex* __this)
{
    if (::app::Uno::IntPtr__op_Inequality(NULL, __this->_handle, ::app::Uno::IntPtr__Zero))
    {
        __this->FreeMutex(__this->_handle);
    }
}

void POSIXMutex___ObjInit_1(POSIXMutex* __this)
{
    ::app::Uno::Threading::Mutex___ObjInit(__this);
    __this->_handle = init_mutex();
}

void POSIXMutex__FreeMutex(POSIXMutex* __this, void* handle)
{
    free_mutex(handle);
}

void POSIXMutex__Lock(POSIXMutex* __this)
{
    if (::app::Uno::IntPtr__op_Equality(NULL, __this->_handle, ::app::Uno::IntPtr__Zero))
    {
        U_THROW(::app::Uno::Exception__New_1(NULL));
    }

    __this->LockImpl(__this->_handle);
}

void POSIXMutex__LockImpl(POSIXMutex* __this, void* handle)
{
    pthread_mutex_lock( (pthread_mutex_t*)handle );
}

POSIXMutex* POSIXMutex__New_1(::uStatic* __this)
{
    POSIXMutex* inst = (POSIXMutex*)::uAllocObject(sizeof(POSIXMutex), POSIXMutex__typeof());
    inst->_ObjInit_1();
    return inst;
}

void POSIXMutex__Unlock(POSIXMutex* __this)
{
    if (::app::Uno::IntPtr__op_Equality(NULL, __this->_handle, ::app::Uno::IntPtr__Zero))
    {
        U_THROW(::app::Uno::Exception__New_1(NULL));
    }

    __this->UnlockImpl(__this->_handle);
}

void POSIXMutex__UnlockImpl(POSIXMutex* __this, void* handle)
{
    pthread_mutex_unlock( (pthread_mutex_t*)handle );
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Threading/0.12.0/Implementation/Cpp/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::List__Uno_Action*> POSIXThread___callbacks;

POSIXThread__uType* POSIXThread__typeof()
{
    static ::uStaticStrong<POSIXThread__uType*> type;
    if (type != NULL) return type;

    type = (POSIXThread__uType*)::uAllocClassType(sizeof(POSIXThread__uType), "Uno.Threading.POSIXThread", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Threading::Thread__typeof());
    type->__fp_Finalize = (void(*)(::uObject*))POSIXThread__Finalize;
    type->__fp_Start = (void(*)(::app::Uno::Threading::Thread*))POSIXThread__Start;

    return type;
}

void POSIXThread__Finalize(POSIXThread* __this)
{
}

void POSIXThread___ObjInit_1(POSIXThread* __this, ::uDelegate* callback)
{
    __this->_posixHandle = 0ull;
    ::app::Uno::Threading::Thread___ObjInit(__this, callback);
}

void POSIXThread___TypeInit(::uStatic* __this)
{
    POSIXThread___callbacks = ::app::Uno::Collections::List__Uno_Action__New_1(NULL);
}

POSIXThread* POSIXThread__New_1(::uStatic* __this, ::uDelegate* callback)
{
    POSIXThread* inst = (POSIXThread*)::uAllocObject(sizeof(POSIXThread), POSIXThread__typeof());
    inst->_ObjInit_1(callback);
    return inst;
}

void POSIXThread__Sleep_1(::uStatic* __this, int millis)
{
    ::uULong microSeconds = (::uULong)millis * 1000ull;
    POSIXThread__SleepImpl(NULL, microSeconds);
}

void POSIXThread__SleepImpl(::uStatic* __this, ::uULong microSeconds)
{
    thread_sleep(microSeconds);
}

void POSIXThread__Start(POSIXThread* __this)
{
    __this->StartImpl(&__this->_posixHandle, __this->_callback);
}

void POSIXThread__StartImpl(POSIXThread* __this, ::uULong* handle, ::uDelegate* callback)
{
    if (*handle != 0ull)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Cannot start throw more than once")));
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(POSIXThread___callbacks)->Add(callback);
    int result = thread_start(handle, callback);
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Threading/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SyncDispatcher__uType* SyncDispatcher__typeof()
{
    static ::uStaticStrong<SyncDispatcher__uType*> type;
    if (type != NULL) return type;

    type = (SyncDispatcher__uType*)::uAllocClassType(sizeof(SyncDispatcher__uType), "Uno.Threading.SyncDispatcher", false, 1, 0, 0);

    type->__interface_0.__fp_Invoke = (void(*)(void*, ::uDelegate*))SyncDispatcher__Invoke;

    type->SetInterfaces(
        ::app::Uno::Threading::IDispatcher__typeof(), offsetof(SyncDispatcher__uType, __interface_0));

    return type;
}

void SyncDispatcher___ObjInit(SyncDispatcher* __this)
{
}

void SyncDispatcher__Invoke(SyncDispatcher* __this, ::uDelegate* action)
{
    ::uPtr< ::uDelegate*>(action)->InvokeVoid();
}

SyncDispatcher* SyncDispatcher__New_1(::uStatic* __this)
{
    SyncDispatcher* inst = (SyncDispatcher*)::uAllocObject(sizeof(SyncDispatcher), SyncDispatcher__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Threading/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Thread__uType* Thread__typeof()
{
    static ::uStaticStrong<Thread__uType*> type;
    if (type != NULL) return type;

    type = (Thread__uType*)::uAllocClassType(sizeof(Thread__uType), "Uno.Threading.Thread", false, 0, 1, 0);

    type->SetStrongRefs(
        "_callback", offsetof(Thread, _callback));

    return type;
}

void Thread___ObjInit(Thread* __this, ::uDelegate* callback)
{
    __this->_callback = callback;
}

Thread* Thread__Create(::uStatic* __this, ::uDelegate* callback)
{
    {
        return (Thread*)::app::Uno::Threading::POSIXThread__New_1(NULL, callback);
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Feature not supported in this backend")));
}

void Thread__Sleep(::uStatic* __this, int millis)
{
    {
        ::app::Uno::Threading::POSIXThread__Sleep_1(NULL, millis);
        return;
    }

    U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Feature not supported in this backend")));
}

}}}
