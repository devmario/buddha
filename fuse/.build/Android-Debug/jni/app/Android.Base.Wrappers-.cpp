#include <app/Android.Base.JNI.h>
#include <app/Android.Base.JNI_RefType.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Primitives.uweakptr.h>
#include <app/Android.Base.Types.Bridge.h>
#include <app/Android.Base.Wrappers.BindingIDAttribute.h>
#include <app/Android.Base.Wrappers.BindingSubclassAttribute.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>
//~
        bool __JWrapper_Callbacks_Registered = false;
        void __JWrapper_Finalizer(JNIEnv *env , jclass clazz, jlong ptr)
        {
        uWeakObject* weak = (uWeakObject*)ptr;
        uAutoReleasePool pool;
        ::app::Android::Base::Wrappers::JWrapper* wrapper = (::app::Android::Base::Wrappers::JWrapper*)uLoadWeakObject(weak);
        uStoreWeakObject(&weak, 0);
        }
        void __Register_Finalizer()
        {
            JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
            JNINativeMethod nativeFunc = {(char* const)"Finalize", (char* const)"(J)V", (void *)&__JWrapper_Finalizer};
            jclass cls = reinterpret_cast<jclass>(jni->NewGlobalRef(::app::Android::Base::JNI__LoadClass(NULL, ::app::Android::Base::JNI__GetEnvPtr(NULL), "com.Bindings.UnoHelper")));
            jint attached = ::app::Android::Base::JNI__GetEnvPtr(NULL)->RegisterNatives(cls, &nativeFunc, 1);
            if (attached < 0) {
                U_THROW(::app::Uno::Exception__New_2(NULL, uNewStringUtf8("Could not register the instantiation callback function",54)));
            }
        }
//~
        bool __JWrapper_WeakCallback(uWeakStateIntercept::Event e, uObject* obj)
        {
            ::app::Android::Base::JNI__CheckException(NULL);
            ::app::Android::Base::Wrappers::JWrapper* wrapper = (::app::Android::Base::Wrappers::JWrapper*)obj;
            jobject jobj = wrapper->_javaObject;
            if (!jobj) return true;

            bool subclassed = wrapper->_subclassed;

            if (e == uWeakStateIntercept::OnLoad) {
                // retain went from 0 to 1
                if (subclassed) {
                    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
                    wrapper->_javaObject = jni->NewGlobalRef(jobj);
                    jni->DeleteWeakGlobalRef(jobj);
                    return true;
                } else {
                    return true;
                }
            } else {
                // retain went from 1 to 0
                if (subclassed) {
                    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
                    wrapper->_javaObject = jni->NewWeakGlobalRef(jobj);
                    jni->DeleteGlobalRef(jobj);
                    return false;
                } else {
                    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
                    jni->DeleteGlobalRef(jobj);
                    return true;
                }
            }
            return false;
        }

namespace app {
namespace Android {
namespace Base {
namespace Wrappers {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Android/Source/Base/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BindingIDAttribute__uType* BindingIDAttribute__typeof()
{
    static ::uStaticStrong<BindingIDAttribute__uType*> type;
    if (type != NULL) return type;

    type = (BindingIDAttribute__uType*)::uAllocClassType(sizeof(BindingIDAttribute__uType), "Android.Base.Wrappers.BindingIDAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void BindingIDAttribute___ObjInit_1(BindingIDAttribute* __this, ::uString* id)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

BindingIDAttribute* BindingIDAttribute__New_1(::uStatic* __this, ::uString* id)
{
    BindingIDAttribute* inst = (BindingIDAttribute*)::uAllocObject(sizeof(BindingIDAttribute), BindingIDAttribute__typeof());
    inst->_ObjInit_1(id);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Android/Source/Base/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BindingSubclassAttribute__uType* BindingSubclassAttribute__typeof()
{
    static ::uStaticStrong<BindingSubclassAttribute__uType*> type;
    if (type != NULL) return type;

    type = (BindingSubclassAttribute__uType*)::uAllocClassType(sizeof(BindingSubclassAttribute__uType), "Android.Base.Wrappers.BindingSubclassAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void BindingSubclassAttribute___ObjInit_1(BindingSubclassAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

BindingSubclassAttribute* BindingSubclassAttribute__New_1(::uStatic* __this)
{
    BindingSubclassAttribute* inst = (BindingSubclassAttribute*)::uAllocObject(sizeof(BindingSubclassAttribute), BindingSubclassAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Android/Source/Base/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IJWrapper__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.Base.Wrappers.IJWrapper");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Android/Source/Base/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

JWrapper__uType* JWrapper__typeof()
{
    static ::uStaticStrong<JWrapper__uType*> type;
    if (type != NULL) return type;

    type = (JWrapper__uType*)::uAllocClassType(sizeof(JWrapper__uType), "Android.Base.Wrappers.JWrapper", false, 2, 1, 0);

    type->__fp_Finalize = (void(*)(::uObject*))JWrapper__Finalize;
    type->__interface_1.__fp_Dispose = (void(*)(void*))JWrapper__Uno_IDisposable_Dispose;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(JWrapper__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(JWrapper__uType, __interface_1));

    type->SetStrongRefs(
        "_javaClassName", offsetof(JWrapper, _javaClassName));

    return type;
}

void JWrapper__Finalize(JWrapper* __this)
{
    __this->Dispose(false);
}

void JWrapper___DisposeJavaObject(JWrapper* __this)
{
    if (!__this->_javaObject) return;
    ::app::Android::Base::JNI__DeleteGlobalRef(NULL, __this->_javaObject);
    __this->_javaObject = 0;
}

jobject JWrapper___GetJavaObject(JWrapper* __this)
{
    return __this->_javaObject;
}

bool JWrapper___IsSubclassed(JWrapper* __this)
{
    return __this->_subclassed;
}

void JWrapper___ObjInit(JWrapper* __this, jobject obj, ::uType* typePtr, bool typeHasFallbackClass, bool resolveType)
{
    __this->_ObjInit_1(obj, typePtr, typeHasFallbackClass, resolveType, false);
}

void JWrapper___ObjInit_1(JWrapper* __this, jobject obj, ::uType* typePtr, bool typeHasFallbackClass, bool resolveType, bool stackArg)
{
    __this->_onConstruct();
    ::app::Android::Base::Types::Bridge__SetWrapperType(NULL, __this, obj, typePtr, typeHasFallbackClass, resolveType);
    __this->SetInternalObj(obj, stackArg);
}

void JWrapper___onConstruct(JWrapper* __this)
{
    __this->_weakptr = 0;
}

void JWrapper__Dispose(JWrapper* __this, bool disposing)
{
    if (!__this->disposed)
    {
        if (disposing)
        {
            __this->_DisposeJavaObject();
        }

        __this->disposed = true;
    }
}

JWrapper* JWrapper__New_1(::uStatic* __this, jobject obj, ::uType* typePtr, bool typeHasFallbackClass, bool resolveType)
{
    JWrapper* inst = (JWrapper*)::uAllocObject(sizeof(JWrapper), JWrapper__typeof());
    inst->_ObjInit(obj, typePtr, typeHasFallbackClass, resolveType);
    return inst;
}

JWrapper* JWrapper__New_2(::uStatic* __this, jobject obj, ::uType* typePtr, bool typeHasFallbackClass, bool resolveType, bool stackArg)
{
    JWrapper* inst = (JWrapper*)::uAllocObject(sizeof(JWrapper), JWrapper__typeof());
    inst->_ObjInit_1(obj, typePtr, typeHasFallbackClass, resolveType, stackArg);
    return inst;
}

bool JWrapper__op_Equality(::uStatic* __this, JWrapper* a, JWrapper* b)
{
    if (((::uObject*)a == NULL) || ((::uObject*)b == NULL))
    {
        return (::uObject*)b == (::uObject*)a;
    }
    else
    {
        return ::app::Android::Base::JNI__IsSameObject(NULL, ::uPtr< JWrapper*>(a)->_GetJavaObject(), ::uPtr< JWrapper*>(b)->_GetJavaObject());
    }
}

void JWrapper__SetInternalObj(JWrapper* __this, jobject obj, bool stackArg)
{
    if (!__JWrapper_Callbacks_Registered)
    {
        __JWrapper_Callbacks_Registered = true;
        __Register_Finalizer();
    }

    if (!__this->_weakptr)
    {
        uStoreWeakObject(&__this->_weakptr, __this);
        uWeakStateIntercept::SetCallback(__this->_weakptr, (uWeakStateIntercept::Callback)__JWrapper_WeakCallback);
    }

    if (obj)
    {
        __this->_javaObject = ::app::Android::Base::JNI__NewGlobalRef_2(NULL, obj);

        if (!stackArg && (::app::Android::Base::JNI__GetRefType_1(NULL, obj) == 1))
        {
            ::app::Android::Base::JNI__DeleteLocalRef_2(NULL, obj);
        }
    }
}

void JWrapper__Uno_IDisposable_Dispose(JWrapper* __this)
{
    __this->Dispose(true);
}

JWrapper* JWrapper__Wrap(::uStatic* __this, jobject obj, bool resolveType, bool typeHasFallbackClass)
{
    return JWrapper__New_1(NULL, obj, NULL, typeHasFallbackClass, resolveType);
}

}}}}
