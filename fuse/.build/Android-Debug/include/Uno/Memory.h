// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Source/Uno/Memory.h'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __UNO_MEMORY_H__
#define __UNO_MEMORY_H__

#include <Uno/_config.h>

// Forward declarations
struct uArray;
struct uArrayType;
struct uClassType;
struct uDelegate;
struct uField;
struct uFunction;
struct uInterfaceType;
struct uObject;
struct uStatic;
struct uString;
struct uType;
struct uWeakObject;
template <typename T> struct uStrong;
template <typename T> struct uWeak;

/**
    \addtogroup Memory
    @{
*/
class uRuntime
{
    uRuntime(const uRuntime& copy);
    uRuntime& operator =(const uRuntime& copy);

public:
    uRuntime();
    ~uRuntime();
};

XLI_NORETURN void uFatalError(const char* msg);

class uStackFrame
{
    uStackFrame(const uStackFrame& copy);
    uStackFrame& operator = (const uStackFrame& copy);

public:
    uStackFrame(const char* type, const char* function);
    ~uStackFrame();
};

uString* uGetStackTrace();

class uAutoReleasePool
{
    uAutoReleasePool(const uAutoReleasePool& copy);
    uAutoReleasePool& operator = (const uAutoReleasePool& copy);

public:
    uAutoReleasePool();
    ~uAutoReleasePool();
};

void uRetainValue(uType* type, void* valueAddr);
void uReleaseValue(uType* type, void* valueAddr);

void uRetainObject(uObject* obj);
void uReleaseObject(uObject* obj);
void uAutoReleaseObject(uObject* obj);

void uGarbageCollect();

struct uWeakStateIntercept
{
    enum Event { OnRelease = 0, OnLoad = 1 };

    //  Callback is called on two occasions, both times while holding the
    //  internal uWeakObject's mutex:
    //
    //  1.  Called from uReleaseObject, with Event::OnRelease, when the object's
    //      reference count reaches zero.
    //
    //      Returning true from the callback at this point allows deletion to
    //      proceed normally.
    //
    //      Returning false defers object deletion, at which point, the object
    //      is considered a Zombie. Weak references may bring a Zombie object
    //      back to life (see point 2, below).
    //
    //      NOTE: If the object's reference count reaches zero while it is
    //      considered a Zombie, object deletion proceeds without further
    //      notice.
    //
    //
    //  2.  Called from uLoadWeakObject, with Event::OnLoad, when attempting to
    //      obtain strong reference to a Zombie object (see point 1).
    //
    //      If the callback returns true, the object is brought back to life and
    //      no longer considered a Zombie. Namely, the next time the reference
    //      count reaches zero the callback will be invoked again, per point 1.
    //
    //      Returning false from the callback signals that object deletion is
    //      pending; uLoadWeakObject will return NULL.
    //
    //
    //  For a given object, the callback will be invoked at least once with
    //  Event::OnRelease, before object deletion takes place. Any subsequent
    //  calls with Event::OnRelease will be preceded by exacly one call with
    //  Event::OnLoad as the first argument.

    typedef bool (*Callback)(Event, uObject *);

    static void SetCallback(uWeakObject* obj, Callback callback);
};

void uStoreWeakObject(uWeakObject** addr, uObject* obj);
uObject* uLoadWeakObject(uWeakObject* ptr);

uObject*** uGetGlobalStrongRefs();
uWeakObject*** uGetGlobalWeakRefs();

#ifdef U_DEBUG_MEM
const char** uGetGlobalStrongNames();
const char** uGetGlobalWeakNames();
void uDumpAllStrongRefs(const char* filename);
#endif

template <typename T> struct uStaticStrong
{
    T _obj;

    uStaticStrong<T>& operator =(T obj)
    {
        uAutoReleaseObject((uObject*)_obj);
        uRetainObject((uObject*)(_obj = obj));
        return *this;
    }

    uStaticStrong<T>& operator =(const uStaticStrong<T>& copy) { return *this = copy._obj; }
    uStaticStrong<T>& operator =(const uStrong<T>& copy) { return *this = copy._obj; }
    uStaticStrong<T>& operator =(const uWeak<T>& copy) { return *this = (T)uLoadWeakObject(copy._obj); }

    operator T() { return _obj; }
    T operator ->() { return _obj; }
};

template <typename T> struct uStrong
{
    T _obj;

    uStrong() { _obj = NULL; }
    uStrong(const uStrong& copy) { uRetainObject((uObject*)(_obj = copy._obj)); }
    ~uStrong() { uReleaseObject((uObject*)_obj); }

    uStrong<T>& operator =(T obj)
    {
        uAutoReleaseObject((uObject*)_obj);
        uRetainObject((uObject*)(_obj = obj));
        return *this;
    }

    uStrong<T>& operator =(const uStaticStrong<T>& copy) { return *this = copy._obj; }
    uStrong<T>& operator =(const uStrong<T>& copy) { return *this = copy._obj; }
    uStrong<T>& operator =(const uWeak<T>& copy) { return *this = (T)uLoadWeakObject(copy._obj); }

    operator T() { return _obj; }
    T operator ->() { return _obj; }
};

template <typename T> struct uWeak
{
    uWeakObject* _obj;

    uWeak() { _obj = NULL; }
    ~uWeak() { uStoreWeakObject(&_obj, NULL); }

    uWeak<T>& operator =(T obj)
    {
        uStoreWeakObject(&_obj, (uObject*)obj);
        return *this;
    }

    uWeak<T>& operator =(const uStaticStrong<T>& copy) { return *this = copy._obj; }
    uWeak<T>& operator =(const uStrong<T>& copy) { return *this = copy._obj; }
    uWeak<T>& operator =(const uWeak<T>& copy) { _obj = copy._obj; return *this; }

    operator T() { return (T)uLoadWeakObject(_obj); }
    T operator ->() { return (T)uLoadWeakObject(_obj); }
};
/** @} */

#endif
