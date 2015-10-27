#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.com.fuse.Native.Camera.h>
#include <app/Android.com.fuse.Native.CameraTask.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Type.h>
//~Callbacks forCameraTask


JNFUN(void,Android_com_fuse_Native_CameraTask__OnSuccess44280,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::app::Android::com::fuse::Native::CameraTask*);
    JARG_TO_UNO(arg1,::uObject*,((::app::Android::Base::Wrappers::JWrapper*)::app::Android::Base::Wrappers::JWrapper__New_1(NULL, arg0, (::uType*)::app::Android::Base::Wrappers::JWrapper__typeof(), false, false)));
    JTRY
    uPtr->OnSuccess(tmparg1);
    JCATCH
}



JNFUN(void,Android_com_fuse_Native_CameraTask__OnFailed44281,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::app::Android::com::fuse::Native::CameraTask*);
    JARG_TO_UNO(arg1,::uObject*,((::app::Android::Base::Wrappers::JWrapper*)::app::Android::Base::Wrappers::JWrapper__New_1(NULL, arg0, (::uType*)::app::Android::Base::Wrappers::JWrapper__typeof(), false, false)));
    JTRY
    uPtr->OnFailed(tmparg1);
    JCATCH
}

namespace app {
namespace Android {
namespace com {
namespace fuse {
namespace Native {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.10.5/AndroidImpl/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Camera___javaClass_1;
jmethodID Camera__TakePicture_44277_ID;

Camera__uType* Camera__typeof()
{
    static ::uStaticStrong<Camera__uType*> type;
    if (type != NULL) return type;

    type = (Camera__uType*)::uAllocClassType(sizeof(Camera__uType), "Android.com.fuse.Native.Camera", false, 2, 0, 0);

    type->SetBaseType(::app::Android::Base::Wrappers::JWrapper__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Camera__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Camera__uType, __interface_1));

    return type;
}

void Camera___Init_1(::uStatic* __this)
{
    if (::app::Android::com::fuse::Native::Camera___javaClass_1) { return; }
    INIT_JNI;
    ::app::Android::com::fuse::Native::Camera___javaClass_1 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("com/fuse/Native/Camera"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::com::fuse::Native::Camera___javaClass_1) { THROW_UNO_EXCEPTION("Unable to cache class 'com.fuse.Native.Camera'", 46);; }
}

void Camera__TakePicture(::uStatic* __this, ::uObject* arg0)
{
    Camera__TakePicture_IMPL_44277(NULL, arg0);
}

void Camera__TakePicture_IMPL_44277(::uStatic* __this, ::uObject* arg0_)
{
    INIT_JNI;
    jobject _obArg0 = ((!arg0_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0_));
    CLASS_INIT(::app::Android::com::fuse::Native::Camera___javaClass_1,::app::Android::com::fuse::Native::Camera___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::Native::Camera__TakePicture_44277_ID,::app::Android::com::fuse::Native::Camera___javaClass_1,"TakePicture","(Lcom/fuse/Native/CameraTask;)V",GetStaticMethodID,"Id for fallback method com.fuse.Native.Camera.TakePicture could not be cached",77);
    U_JNIVAR->CallStaticVoidMethod(::app::Android::com::fuse::Native::Camera___javaClass_1, ::app::Android::com::fuse::Native::Camera__TakePicture_44277_ID, _obArg0);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.10.5/AndroidImpl/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass CameraTask___javaClass_1;
jclass CameraTask___javaProxyClass_1;
jmethodID CameraTask__CameraTask_44283_ID_c;
jmethodID CameraTask__CameraTask_44283_ID_c_prox;

CameraTask__uType* CameraTask__typeof()
{
    static ::uStaticStrong<CameraTask__uType*> type;
    if (type != NULL) return type;

    type = (CameraTask__uType*)::uAllocClassType(sizeof(CameraTask__uType), "Android.com.fuse.Native.CameraTask", false, 2, 0, 0);

    type->SetBaseType(::app::Android::Base::Wrappers::JWrapper__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(CameraTask__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(CameraTask__uType, __interface_1));

    return type;
}

void CameraTask___Init_1(::uStatic* __this)
{
    if (::app::Android::com::fuse::Native::CameraTask___javaClass_1) { return; }
    INIT_JNI;
    ::app::Android::com::fuse::Native::CameraTask___javaClass_1 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("com/fuse/Native/CameraTask"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::com::fuse::Native::CameraTask___javaClass_1) { THROW_UNO_EXCEPTION("Unable to cache class 'com.fuse.Native.CameraTask'", 50);; }
}

void CameraTask___InitProxy_1(::uStatic* __this)
{
    if (::app::Android::com::fuse::Native::CameraTask___javaProxyClass_1) { return; }
    INIT_JNI;
    ::app::Android::com::fuse::Native::CameraTask___javaProxyClass_1 = NEW_GLOBAL_REF(jclass,::app::Android::Base::JNI__LoadClass(NULL, jni, "com.Bindings.Android_com_fuse_Native_CameraTask"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::com::fuse::Native::CameraTask___javaProxyClass_1) { THROW_UNO_EXCEPTION("Unable to cache class 'Android_com_fuse_Native_CameraTask'", 58);; }
    
    BEGIN_REG_MTD(2);
    
    REG_MTD(0,"__n_OnSuccess","(JLjava/lang/String;J)V",::Android_com_fuse_Native_CameraTask__OnSuccess44280);
    
    
    REG_MTD(1,"__n_OnFailed","(JLjava/lang/String;J)V",::Android_com_fuse_Native_CameraTask__OnFailed44281);
    
    COMMIT_REG_MTD(::app::Android::com::fuse::Native::CameraTask___javaProxyClass_1);
}

bool CameraTask___IsThisType_1(::uStatic* __this, ::uObject* obj_)
{
    int N = 33;
    const char* typ = "Android.com.fuse.Native.CameraTask";
    const char* potential = obj_->__obj_type->TypeName;
    for (int i = 0; i < N; ++i)
    {
        if (potential[i]==0 || (potential[i] != typ[i])) {
            return true;
        }
    }
    return false;
}

void CameraTask___ObjInit_3(CameraTask* __this, int arg0, int arg1, bool arg2)
{
    ::app::Android::Base::Wrappers::JWrapper___ObjInit(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    __this->_subclassed = CameraTask___IsThisType_1(NULL, (::uObject*)__this);
    CameraTask* wrapper = __this->_subclassed ? __this : NULL;
    __this->_javaObject = CameraTask__CameraTask_IMPL_44283(NULL, (::uObject*)wrapper, arg0, arg1, arg2);
}

jobject CameraTask__CameraTask_IMPL_44283(::uStatic* __this, ::uObject* arg0_, int arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::com::fuse::Native::CameraTask___javaClass_1,::app::Android::com::fuse::Native::CameraTask___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::Native::CameraTask__CameraTask_44283_ID_c,::app::Android::com::fuse::Native::CameraTask___javaClass_1,"<init>","(IIZ)V",GetMethodID,"Id for fallback method com.fuse.Native.CameraTask.<init> could not be cached",76);
    if (arg0_) {
        CLASS_INIT(::app::Android::com::fuse::Native::CameraTask___javaProxyClass_1,::app::Android::com::fuse::Native::CameraTask___InitProxy_1(NULL));
        CACHE_METHOD(::app::Android::com::fuse::Native::CameraTask__CameraTask_44283_ID_c_prox,::app::Android::com::fuse::Native::CameraTask___javaProxyClass_1,"<init>","(JIIZ)V",GetMethodID,"Proxy Id for method Android_com_fuse_Native_CameraTask.CameraTask_44283_ID_c_prox could not be cached",101);
    }
    
    jobject result;
    jobject _tmp;
    if (!arg0_) {
        _tmp = U_JNIVAR->NewObject(::app::Android::com::fuse::Native::CameraTask___javaClass_1, ::app::Android::com::fuse::Native::CameraTask__CameraTask_44283_ID_c, ((jint)arg1_), ((jint)arg2_), ((jboolean)arg3_));
        result = NEW_GLOBAL_REF(jobject,_tmp);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    } else {
            _tmp = U_JNIVAR->NewObject(::app::Android::com::fuse::Native::CameraTask___javaProxyClass_1, ::app::Android::com::fuse::Native::CameraTask__CameraTask_44283_ID_c_prox, (jlong)arg0_->__obj_weak, ((jint)arg1_), ((jint)arg2_), ((jboolean)arg3_));
        result = NEW_GLOBAL_REF(jobject,_tmp);
        ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    }
    
    U_JNIVAR->DeleteLocalRef(_tmp);
    return result;
}

}}}}}
