#include <app/Android.android.content.Context.h>
#include <app/Android.android.view.MotionEvent.h>
#include <app/Android.android.view.ViewGroupDLRLayoutParams.h>
#include <app/Android.android.webkit.WebChromeClient.h>
#include <app/Android.android.webkit.WebView.h>
#include <app/Android.android.webkit.WebViewClient.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.java.lang.String.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace android {
namespace webkit {

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/webkit/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass WebChromeClient___javaClass_2;
jmethodID WebChromeClient__onProgressChanged_24000_ID;

WebChromeClient__uType* WebChromeClient__typeof()
{
    static ::uStaticStrong<WebChromeClient__uType*> type;
    if (type != NULL) return type;

    type = (WebChromeClient__uType*)::uAllocClassType(sizeof(WebChromeClient__uType), "Android.android.webkit.WebChromeClient", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_onProgressChanged = WebChromeClient__onProgressChanged;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(WebChromeClient__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(WebChromeClient__uType, __interface_1));

    return type;
}

void WebChromeClient___Init_2(::uStatic* __this)
{
    if (::app::Android::android::webkit::WebChromeClient___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::webkit::WebChromeClient___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/webkit/WebChromeClient"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::webkit::WebChromeClient___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.webkit.WebChromeClient'", 54);; }
}

void WebChromeClient___ObjInit_5(WebChromeClient* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, obj, utype, hasFallbackClass, resolveType);
}

void WebChromeClient__onProgressChanged(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, int arg1)
{
    WebChromeClient__onProgressChanged_IMPL_24000(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void WebChromeClient__onProgressChanged_IMPL_24000(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebChromeClient___javaClass_2,::app::Android::android::webkit::WebChromeClient___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::webkit::WebChromeClient__onProgressChanged_24000_ID,::app::Android::android::webkit::WebChromeClient___javaClass_2,"onProgressChanged","(Landroid/webkit/WebView;I)V",GetMethodID,"Id for fallback method android.webkit.WebChromeClient.onProgressChanged could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient___javaClass_2, ::app::Android::android::webkit::WebChromeClient__onProgressChanged_24000_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebChromeClient__onProgressChanged_24000_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/webkit/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass WebView___javaClass_5;
jmethodID WebView__canGoBack_24239_ID;
jmethodID WebView__canGoForward_24241_ID;
jmethodID WebView__getProgress_24261_ID;
jmethodID WebView__getUrl_24257_ID;
jmethodID WebView__goBack_24240_ID;
jmethodID WebView__goForward_24242_ID;
jmethodID WebView__loadDataWithBaseURL_24233_ID;
jmethodID WebView__loadUrl_24230_ID;
jmethodID WebView__onScrollChanged_24331_ID;
jmethodID WebView__onTouchEvent_24310_ID;
jmethodID WebView__reload_24238_ID;
jmethodID WebView__setBackgroundColor_24336_ID;
jmethodID WebView__setLayoutParams_24300_ID;
jmethodID WebView__setWebChromeClient_24283_ID;
jmethodID WebView__setWebViewClient_24281_ID;
jmethodID WebView__stopLoading_24237_ID;
jmethodID WebView__WebView_24212_ID_c;

WebView__uType* WebView__typeof()
{
    static ::uStaticStrong<WebView__uType*> type;
    if (type != NULL) return type;

    type = (WebView__uType*)::uAllocClassType(sizeof(WebView__uType), "Android.android.webkit.WebView", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::widget::AbsoluteLayout__typeof());
    type->__fp_onScrollChanged = (void(*)(::app::Android::android::view::View*, int, int, int, int))WebView__onScrollChanged;
    type->__fp_onTouchEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))WebView__onTouchEvent;
    type->__fp_setBackgroundColor = (void(*)(::app::Android::android::view::View*, int))WebView__setBackgroundColor;
    type->__fp_setLayoutParams = (void(*)(::app::Android::android::view::View*, ::app::Android::android::view::ViewGroupDLRLayoutParams*))WebView__setLayoutParams;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(WebView__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(WebView__uType, __interface_1));

    return type;
}

void WebView___Init_5(::uStatic* __this)
{
    if (::app::Android::android::webkit::WebView___javaClass_5) { return; }
    INIT_JNI;
    ::app::Android::android::webkit::WebView___javaClass_5 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/webkit/WebView"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::webkit::WebView___javaClass_5) { THROW_UNO_EXCEPTION("Unable to cache class 'android.webkit.WebView'", 46);; }
}

void WebView___ObjInit_16(WebView* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::widget::AbsoluteLayout___ObjInit_12(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));;
    CACHE_METHOD(::app::Android::android::webkit::WebView__WebView_24212_ID_c,::app::Android::android::webkit::WebView___javaClass_5,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.webkit.WebView.<init> could not be cached",72);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__WebView_24212_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

bool WebView__canGoBack(WebView* __this)
{
    return WebView__canGoBack_IMPL_24239(NULL, __this->_subclassed, __this->_javaObject);
}

bool WebView__canGoBack_IMPL_24239(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__canGoBack_24239_ID,::app::Android::android::webkit::WebView___javaClass_5,"canGoBack","()Z",GetMethodID,"Id for fallback method android.webkit.WebView.canGoBack could not be cached",75);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__canGoBack_24239_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebView__canGoBack_24239_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool WebView__canGoForward(WebView* __this)
{
    return WebView__canGoForward_IMPL_24241(NULL, __this->_subclassed, __this->_javaObject);
}

bool WebView__canGoForward_IMPL_24241(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__canGoForward_24241_ID,::app::Android::android::webkit::WebView___javaClass_5,"canGoForward","()Z",GetMethodID,"Id for fallback method android.webkit.WebView.canGoForward could not be cached",78);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__canGoForward_24241_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebView__canGoForward_24241_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int WebView__getProgress(WebView* __this)
{
    return WebView__getProgress_IMPL_24261(NULL, __this->_subclassed, __this->_javaObject);
}

int WebView__getProgress_IMPL_24261(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__getProgress_24261_ID,::app::Android::android::webkit::WebView___javaClass_5,"getProgress","()I",GetMethodID,"Id for fallback method android.webkit.WebView.getProgress could not be cached",77);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__getProgress_24261_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::webkit::WebView__getProgress_24261_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* WebView__getUrl(WebView* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(WebView__getUrl_IMPL_24257(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* WebView__getUrl_IMPL_24257(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__getUrl_24257_ID,::app::Android::android::webkit::WebView___javaClass_5,"getUrl","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.webkit.WebView.getUrl could not be cached",72);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__getUrl_24257_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::webkit::WebView__getUrl_24257_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void WebView__goBack(WebView* __this)
{
    WebView__goBack_IMPL_24240(NULL, __this->_subclassed, __this->_javaObject);
}

void WebView__goBack_IMPL_24240(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__goBack_24240_ID,::app::Android::android::webkit::WebView___javaClass_5,"goBack","()V",GetMethodID,"Id for fallback method android.webkit.WebView.goBack could not be cached",72);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__goBack_24240_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__goBack_24240_ID);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void WebView__goForward(WebView* __this)
{
    WebView__goForward_IMPL_24242(NULL, __this->_subclassed, __this->_javaObject);
}

void WebView__goForward_IMPL_24242(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__goForward_24242_ID,::app::Android::android::webkit::WebView___javaClass_5,"goForward","()V",GetMethodID,"Id for fallback method android.webkit.WebView.goForward could not be cached",75);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__goForward_24242_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__goForward_24242_ID);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void WebView__loadDataWithBaseURL(WebView* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, ::app::Android::java::lang::String* arg2, ::app::Android::java::lang::String* arg3, ::app::Android::java::lang::String* arg4)
{
    WebView__loadDataWithBaseURL_IMPL_24233(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, (::uObject*)arg2, (::uObject*)arg3, (::uObject*)arg4);
}

void WebView__loadDataWithBaseURL_IMPL_24233(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_, ::uObject* arg5_, ::uObject* arg6_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    jobject _obArg6 = ((!arg6_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg6_));
    CACHE_METHOD(::app::Android::android::webkit::WebView__loadDataWithBaseURL_24233_ID,::app::Android::android::webkit::WebView___javaClass_5,"loadDataWithBaseURL","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.webkit.WebView.loadDataWithBaseURL could not be cached",85);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__loadDataWithBaseURL_24233_ID, _obArg2, _obArg3, _obArg4, _obArg5, _obArg6);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__loadDataWithBaseURL_24233_ID, _obArg2, _obArg3, _obArg4, _obArg5, _obArg6);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void WebView__loadUrl_1(WebView* __this, ::app::Android::java::lang::String* arg0)
{
    WebView__loadUrl_IMPL_24230(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void WebView__loadUrl_IMPL_24230(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::webkit::WebView__loadUrl_24230_ID,::app::Android::android::webkit::WebView___javaClass_5,"loadUrl","(Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.webkit.WebView.loadUrl could not be cached",73);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__loadUrl_24230_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__loadUrl_24230_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

WebView* WebView__New_13(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    WebView* inst = (WebView*)::uAllocObject(sizeof(WebView), WebView__typeof());
    inst->_ObjInit_16(arg0);
    return inst;
}

void WebView__onScrollChanged(WebView* __this, int arg0, int arg1, int arg2, int arg3)
{
    WebView__onScrollChanged_IMPL_24331(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

void WebView__onScrollChanged_IMPL_24331(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__onScrollChanged_24331_ID,::app::Android::android::webkit::WebView___javaClass_5,"onScrollChanged","(IIII)V",GetMethodID,"Id for fallback method android.webkit.WebView.onScrollChanged could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onScrollChanged_24331_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__onScrollChanged_24331_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

bool WebView__onTouchEvent(WebView* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return WebView__onTouchEvent_IMPL_24310(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool WebView__onTouchEvent_IMPL_24310(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::webkit::WebView__onTouchEvent_24310_ID,::app::Android::android::webkit::WebView___javaClass_5,"onTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.webkit.WebView.onTouchEvent could not be cached",78);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__onTouchEvent_24310_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::webkit::WebView__onTouchEvent_24310_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void WebView__reload(WebView* __this)
{
    WebView__reload_IMPL_24238(NULL, __this->_subclassed, __this->_javaObject);
}

void WebView__reload_IMPL_24238(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__reload_24238_ID,::app::Android::android::webkit::WebView___javaClass_5,"reload","()V",GetMethodID,"Id for fallback method android.webkit.WebView.reload could not be cached",72);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__reload_24238_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__reload_24238_ID);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void WebView__setBackgroundColor(WebView* __this, int arg0)
{
    WebView__setBackgroundColor_IMPL_24336(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void WebView__setBackgroundColor_IMPL_24336(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__setBackgroundColor_24336_ID,::app::Android::android::webkit::WebView___javaClass_5,"setBackgroundColor","(I)V",GetMethodID,"Id for fallback method android.webkit.WebView.setBackgroundColor could not be cached",84);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__setBackgroundColor_24336_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__setBackgroundColor_24336_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void WebView__setLayoutParams(WebView* __this, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg0)
{
    WebView__setLayoutParams_IMPL_24300(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void WebView__setLayoutParams_IMPL_24300(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::webkit::WebView__setLayoutParams_24300_ID,::app::Android::android::webkit::WebView___javaClass_5,"setLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)V",GetMethodID,"Id for fallback method android.webkit.WebView.setLayoutParams could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__setLayoutParams_24300_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__setLayoutParams_24300_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void WebView__setWebChromeClient(WebView* __this, ::app::Android::android::webkit::WebChromeClient* arg0)
{
    WebView__setWebChromeClient_IMPL_24283(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void WebView__setWebChromeClient_IMPL_24283(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::webkit::WebView__setWebChromeClient_24283_ID,::app::Android::android::webkit::WebView___javaClass_5,"setWebChromeClient","(Landroid/webkit/WebChromeClient;)V",GetMethodID,"Id for fallback method android.webkit.WebView.setWebChromeClient could not be cached",84);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__setWebChromeClient_24283_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__setWebChromeClient_24283_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void WebView__setWebViewClient(WebView* __this, ::app::Android::android::webkit::WebViewClient* arg0)
{
    WebView__setWebViewClient_IMPL_24281(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void WebView__setWebViewClient_IMPL_24281(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::webkit::WebView__setWebViewClient_24281_ID,::app::Android::android::webkit::WebView___javaClass_5,"setWebViewClient","(Landroid/webkit/WebViewClient;)V",GetMethodID,"Id for fallback method android.webkit.WebView.setWebViewClient could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__setWebViewClient_24281_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__setWebViewClient_24281_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void WebView__stopLoading(WebView* __this)
{
    WebView__stopLoading_IMPL_24237(NULL, __this->_subclassed, __this->_javaObject);
}

void WebView__stopLoading_IMPL_24237(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::webkit::WebView___javaClass_5,::app::Android::android::webkit::WebView___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::webkit::WebView__stopLoading_24237_ID,::app::Android::android::webkit::WebView___javaClass_5,"stopLoading","()V",GetMethodID,"Id for fallback method android.webkit.WebView.stopLoading could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::webkit::WebView___javaClass_5, ::app::Android::android::webkit::WebView__stopLoading_24237_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::webkit::WebView__stopLoading_24237_ID);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/webkit/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass WebViewClient___javaClass_2;
jmethodID WebViewClient__WebViewClient_24354_ID_c;

WebViewClient__uType* WebViewClient__typeof()
{
    static ::uStaticStrong<WebViewClient__uType*> type;
    if (type != NULL) return type;

    type = (WebViewClient__uType*)::uAllocClassType(sizeof(WebViewClient__uType), "Android.android.webkit.WebViewClient", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(WebViewClient__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(WebViewClient__uType, __interface_1));

    return type;
}

void WebViewClient___Init_2(::uStatic* __this)
{
    if (::app::Android::android::webkit::WebViewClient___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::webkit::WebViewClient___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/webkit/WebViewClient"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::webkit::WebViewClient___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.webkit.WebViewClient'", 52);; }
}

void WebViewClient___ObjInit_4(WebViewClient* __this)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::webkit::WebViewClient___javaClass_2,::app::Android::android::webkit::WebViewClient___Init_2(NULL));;
    CACHE_METHOD(::app::Android::android::webkit::WebViewClient__WebViewClient_24354_ID_c,::app::Android::android::webkit::WebViewClient___javaClass_2,"<init>","()V",GetMethodID,"Id for fallback method android.webkit.WebViewClient.<init> could not be cached",78);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::webkit::WebViewClient___javaClass_2, ::app::Android::android::webkit::WebViewClient__WebViewClient_24354_ID_c);;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

WebViewClient* WebViewClient__New_6(::uStatic* __this)
{
    WebViewClient* inst = (WebViewClient*)::uAllocObject(sizeof(WebViewClient), WebViewClient__typeof());
    inst->_ObjInit_4();
    return inst;
}

}}}}
