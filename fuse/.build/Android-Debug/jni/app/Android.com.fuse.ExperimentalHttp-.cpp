#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.com.fuse.ExperimentalHttp.HttpRequest.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Type.h>
//~Callbacks forHttpRequest


JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnDataReceived44285,jlong ujPtr, jobject arg0, jint arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,::app::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JARG_TO_UNO(arg2,::uObject*,((::app::Android::Base::Wrappers::JWrapper*)::app::Android::Base::Wrappers::JWrapper__New_1(NULL, arg0, (::uType*)::app::Android::Base::Wrappers::JWrapper__typeof(), false, false)));
    JTRY
    uPtr->OnDataReceived(tmparg2, ((int)arg1));
    JCATCH
}



JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnAborted44286,jlong ujPtr) {
    INITCALLBACK(uPtr,::app::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JTRY
    uPtr->OnAborted();
    JCATCH
}



JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnError44287,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::app::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JARG_TO_UNO(arg1,::uObject*,((::app::Android::Base::Wrappers::JWrapper*)::app::Android::Base::Wrappers::JWrapper__New_1(NULL, arg0, (::uType*)::app::Android::Base::Wrappers::JWrapper__typeof(), false, false)));
    JTRY
    uPtr->OnError(tmparg1);
    JCATCH
}



JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnTimeout44288,jlong ujPtr) {
    INITCALLBACK(uPtr,::app::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JTRY
    uPtr->OnTimeout();
    JCATCH
}



JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnDone44289,jlong ujPtr) {
    INITCALLBACK(uPtr,::app::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JTRY
    uPtr->OnDone();
    JCATCH
}



JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnHeadersReceived44290,jlong ujPtr) {
    INITCALLBACK(uPtr,::app::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JTRY
    uPtr->OnHeadersReceived();
    JCATCH
}



JNFUN(void,Android_com_fuse_ExperimentalHttp_HttpRequest__OnProgress44291,jlong ujPtr, jint arg0, jint arg1, jboolean arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,::app::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    JTRY
    uPtr->OnProgress(((int)arg0), ((int)arg1), ((bool)arg2));
    JCATCH
}

namespace app {
namespace Android {
namespace com {
namespace fuse {
namespace ExperimentalHttp {

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/Implementation/Android/ExperimentalHttp/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass HttpRequest___javaClass_1;
jclass HttpRequest___javaProxyClass_1;
jmethodID HttpRequest__GetResponseHeaders_44308_ID;
jmethodID HttpRequest__GetResponseStatus_44306_ID;
jmethodID HttpRequest__GetResponseString_44297_ID;
jmethodID HttpRequest__HttpRequest_44284_ID_c;
jmethodID HttpRequest__HttpRequest_44284_ID_c_prox;
jmethodID HttpRequest__InstallCache_44279_ID;
jmethodID HttpRequest__SendAsync_44299_ID;
jmethodID HttpRequest__SendAsyncStr_44301_ID;
jmethodID HttpRequest__SetHeader_44293_ID;
jmethodID HttpRequest__SetResponseType_44292_ID;

HttpRequest__uType* HttpRequest__typeof()
{
    static ::uStaticStrong<HttpRequest__uType*> type;
    if (type != NULL) return type;

    type = (HttpRequest__uType*)::uAllocClassType(sizeof(HttpRequest__uType), "Android.com.fuse.ExperimentalHttp.HttpRequest", false, 2, 0, 0);

    type->SetBaseType(::app::Android::Base::Wrappers::JWrapper__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(HttpRequest__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(HttpRequest__uType, __interface_1));

    return type;
}

void HttpRequest___Init_1(::uStatic* __this)
{
    if (::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1) { return; }
    INIT_JNI;
    ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("com/fuse/ExperimentalHttp/HttpRequest"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1) { THROW_UNO_EXCEPTION("Unable to cache class 'com.fuse.ExperimentalHttp.HttpRequest'", 61);; }
}

void HttpRequest___InitProxy_1(::uStatic* __this)
{
    if (::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaProxyClass_1) { return; }
    INIT_JNI;
    ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaProxyClass_1 = NEW_GLOBAL_REF(jclass,::app::Android::Base::JNI__LoadClass(NULL, jni, "com.Bindings.Android_com_fuse_ExperimentalHttp_HttpRequest"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaProxyClass_1) { THROW_UNO_EXCEPTION("Unable to cache class 'Android_com_fuse_ExperimentalHttp_HttpRequest'", 69);; }
    
    BEGIN_REG_MTD(7);
    
    REG_MTD(0,"__n_OnDataReceived","(J[BIJJ)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnDataReceived44285);
    
    
    REG_MTD(1,"__n_OnAborted","(J)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnAborted44286);
    
    
    REG_MTD(2,"__n_OnError","(JLjava/lang/String;J)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnError44287);
    
    
    REG_MTD(3,"__n_OnTimeout","(J)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnTimeout44288);
    
    
    REG_MTD(4,"__n_OnDone","(J)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnDone44289);
    
    
    REG_MTD(5,"__n_OnHeadersReceived","(J)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnHeadersReceived44290);
    
    
    REG_MTD(6,"__n_OnProgress","(JIIZJJJ)V",::Android_com_fuse_ExperimentalHttp_HttpRequest__OnProgress44291);
    
    COMMIT_REG_MTD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaProxyClass_1);
}

bool HttpRequest___IsThisType_1(::uStatic* __this, ::uObject* obj_)
{
    int N = 44;
    const char* typ = "Android.com.fuse.ExperimentalHttp.HttpRequest";
    const char* potential = obj_->__obj_type->TypeName;
    for (int i = 0; i < N; ++i)
    {
        if (potential[i]==0 || (potential[i] != typ[i])) {
            return true;
        }
    }
    return false;
}

void HttpRequest___ObjInit_3(HttpRequest* __this, ::uObject* arg0, ::uObject* arg1, ::uObject* arg2)
{
    ::app::Android::Base::Wrappers::JWrapper___ObjInit(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    __this->_subclassed = HttpRequest___IsThisType_1(NULL, (::uObject*)__this);
    HttpRequest* wrapper = __this->_subclassed ? __this : NULL;
    __this->_javaObject = HttpRequest__HttpRequest_IMPL_44284(NULL, (::uObject*)wrapper, arg0, arg1, arg2);
}

::uObject* HttpRequest__GetResponseHeaders(HttpRequest* __this)
{
    return HttpRequest__GetResponseHeaders_IMPL_44308(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* HttpRequest__GetResponseHeaders_IMPL_44308(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    
    ::uObject* result;
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseHeaders_44308_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"GetResponseHeaders","()Ljava/lang/String;",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.GetResponseHeaders could not be cached",99);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseHeaders_44308_ID),result,::app::Android::Base::Wrappers::JWrapper__typeof(),::app::Android::Base::Wrappers::JWrapper*,false,false);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseHeaders_44308_ID),result,::app::Android::Base::Wrappers::JWrapper__typeof(),::app::Android::Base::Wrappers::JWrapper*,false,false);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    
    return result;
}

int HttpRequest__GetResponseStatus(HttpRequest* __this)
{
    return HttpRequest__GetResponseStatus_IMPL_44306(NULL, __this->_subclassed, __this->_javaObject);
}

int HttpRequest__GetResponseStatus_IMPL_44306(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    
    int result;
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseStatus_44306_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"GetResponseStatus","()I",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.GetResponseStatus could not be cached",98);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseStatus_44306_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseStatus_44306_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    
    return result;
}

::uObject* HttpRequest__GetResponseString(HttpRequest* __this)
{
    return HttpRequest__GetResponseString_IMPL_44297(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* HttpRequest__GetResponseString_IMPL_44297(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    
    ::uObject* result;
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseString_44297_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"GetResponseString","()Ljava/lang/String;",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.GetResponseString could not be cached",98);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseString_44297_ID),result,::app::Android::Base::Wrappers::JWrapper__typeof(),::app::Android::Base::Wrappers::JWrapper*,false,false);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseString_44297_ID),result,::app::Android::Base::Wrappers::JWrapper__typeof(),::app::Android::Base::Wrappers::JWrapper*,false,false);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    
    return result;
}

jobject HttpRequest__HttpRequest_IMPL_44284(::uStatic* __this, ::uObject* arg0_, ::uObject* arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__HttpRequest_44284_ID_c,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"<init>","(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.<init> could not be cached",87);
    if (arg0_) {
        CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaProxyClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___InitProxy_1(NULL));
        CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__HttpRequest_44284_ID_c_prox,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaProxyClass_1,"<init>","(JLandroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V",GetMethodID,"Proxy Id for method Android_com_fuse_ExperimentalHttp_HttpRequest.HttpRequest_44284_ID_c_prox could not be cached",113);
    }
    jobject _obArg1 = ((!arg1_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg1_));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    jobject result;
    jobject _tmp;
    if (!arg0_) {
        _tmp = U_JNIVAR->NewObject(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__HttpRequest_44284_ID_c, _obArg1, _obArg2, _obArg3);
        result = NEW_GLOBAL_REF(jobject,_tmp);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    } else {
            _tmp = U_JNIVAR->NewObject(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaProxyClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__HttpRequest_44284_ID_c_prox, (jlong)arg0_->__obj_weak, _obArg1, _obArg2, _obArg3);
        result = NEW_GLOBAL_REF(jobject,_tmp);
        ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    }
    
    U_JNIVAR->DeleteLocalRef(_tmp);
    return result;
}

bool HttpRequest__InstallCache(::uStatic* __this, ::uObject* arg0, ::uLong arg1)
{
    return HttpRequest__InstallCache_IMPL_44279(NULL, arg0, arg1);
}

bool HttpRequest__InstallCache_IMPL_44279(::uStatic* __this, ::uObject* arg0_, ::uLong arg1_)
{
    INIT_JNI;
    jobject _obArg0 = ((!arg0_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0_));
    bool result;
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__InstallCache_44279_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"InstallCache","(Landroid/app/Activity;J)Z",GetStaticMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.InstallCache could not be cached",93);
    result = ((bool)U_JNIVAR->CallStaticBooleanMethod(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__InstallCache_44279_ID, _obArg0, ((jlong)arg1_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    
    return result;
}

void HttpRequest__SendAsync(HttpRequest* __this)
{
    HttpRequest__SendAsync_IMPL_44299(NULL, __this->_subclassed, __this->_javaObject);
}

void HttpRequest__SendAsync_IMPL_44299(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SendAsync_44299_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"SendAsync","()V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.SendAsync could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SendAsync_44299_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SendAsync_44299_ID);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void HttpRequest__SendAsyncStr(HttpRequest* __this, ::uObject* arg0)
{
    HttpRequest__SendAsyncStr_IMPL_44301(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void HttpRequest__SendAsyncStr_IMPL_44301(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SendAsyncStr_44301_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"SendAsyncStr","(Ljava/lang/String;)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.SendAsyncStr could not be cached",93);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SendAsyncStr_44301_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SendAsyncStr_44301_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void HttpRequest__SetHeader(HttpRequest* __this, ::uObject* arg0, ::uObject* arg1)
{
    HttpRequest__SetHeader_IMPL_44293(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void HttpRequest__SetHeader_IMPL_44293(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SetHeader_44293_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"SetHeader","(Ljava/lang/String;Ljava/lang/String;)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.SetHeader could not be cached",90);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SetHeader_44293_ID, _obArg2, _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SetHeader_44293_ID, _obArg2, _obArg3);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void HttpRequest__SetResponseType(HttpRequest* __this, int arg0)
{
    HttpRequest__SetResponseType_IMPL_44292(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void HttpRequest__SetResponseType_IMPL_44292(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    
    CLASS_INIT(::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___Init_1(NULL));
    CACHE_METHOD(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SetResponseType_44292_ID,::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1,"SetResponseType","(I)V",GetMethodID,"Id for fallback method com.fuse.ExperimentalHttp.HttpRequest.SetResponseType could not be cached",96);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___javaClass_1, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SetResponseType_44292_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SetResponseType_44292_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

}}}}}
