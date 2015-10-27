// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/webkit/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WEBKIT_WEB_VIEW_H__
#define __APP_ANDROID_ANDROID_WEBKIT_WEB_VIEW_H__

#include <app/Android.android.widget.AbsoluteLayout.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct ViewGroupDLRLayoutParams; } } } }
namespace app { namespace Android { namespace android { namespace webkit { struct WebChromeClient; } } } }
namespace app { namespace Android { namespace android { namespace webkit { struct WebViewClient; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace webkit {

struct WebView;

extern jclass WebView___javaClass_5;
extern jmethodID WebView__canGoBack_24239_ID;
extern jmethodID WebView__canGoForward_24241_ID;
extern jmethodID WebView__getProgress_24261_ID;
extern jmethodID WebView__getUrl_24257_ID;
extern jmethodID WebView__goBack_24240_ID;
extern jmethodID WebView__goForward_24242_ID;
extern jmethodID WebView__loadDataWithBaseURL_24233_ID;
extern jmethodID WebView__loadUrl_24230_ID;
extern jmethodID WebView__onScrollChanged_24331_ID;
extern jmethodID WebView__onTouchEvent_24310_ID;
extern jmethodID WebView__reload_24238_ID;
extern jmethodID WebView__setBackgroundColor_24336_ID;
extern jmethodID WebView__setLayoutParams_24300_ID;
extern jmethodID WebView__setWebChromeClient_24283_ID;
extern jmethodID WebView__setWebViewClient_24281_ID;
extern jmethodID WebView__stopLoading_24237_ID;
extern jmethodID WebView__WebView_24212_ID_c;

struct WebView__uType : ::app::Android::android::widget::AbsoluteLayout__uType
{
};

WebView__uType* WebView__typeof();

void WebView___Init_5(::uStatic* __this);
void WebView___ObjInit_16(WebView* __this, ::app::Android::android::content::Context* arg0);
bool WebView__canGoBack(WebView* __this);
bool WebView__canGoBack_IMPL_24239(::uStatic* __this, bool arg0_, jobject arg1_);
bool WebView__canGoForward(WebView* __this);
bool WebView__canGoForward_IMPL_24241(::uStatic* __this, bool arg0_, jobject arg1_);
int WebView__getProgress(WebView* __this);
int WebView__getProgress_IMPL_24261(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* WebView__getUrl(WebView* __this);
::uObject* WebView__getUrl_IMPL_24257(::uStatic* __this, bool arg0_, jobject arg1_);
void WebView__goBack(WebView* __this);
void WebView__goBack_IMPL_24240(::uStatic* __this, bool arg0_, jobject arg1_);
void WebView__goForward(WebView* __this);
void WebView__goForward_IMPL_24242(::uStatic* __this, bool arg0_, jobject arg1_);
void WebView__loadDataWithBaseURL(WebView* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, ::app::Android::java::lang::String* arg2, ::app::Android::java::lang::String* arg3, ::app::Android::java::lang::String* arg4);
void WebView__loadDataWithBaseURL_IMPL_24233(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_, ::uObject* arg5_, ::uObject* arg6_);
void WebView__loadUrl_1(WebView* __this, ::app::Android::java::lang::String* arg0);
void WebView__loadUrl_IMPL_24230(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
WebView* WebView__New_13(::uStatic* __this, ::app::Android::android::content::Context* arg0);
void WebView__onScrollChanged(WebView* __this, int arg0, int arg1, int arg2, int arg3);
void WebView__onScrollChanged_IMPL_24331(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
bool WebView__onTouchEvent(WebView* __this, ::app::Android::android::view::MotionEvent* arg0);
bool WebView__onTouchEvent_IMPL_24310(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void WebView__reload(WebView* __this);
void WebView__reload_IMPL_24238(::uStatic* __this, bool arg0_, jobject arg1_);
void WebView__setBackgroundColor(WebView* __this, int arg0);
void WebView__setBackgroundColor_IMPL_24336(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void WebView__setLayoutParams(WebView* __this, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg0);
void WebView__setLayoutParams_IMPL_24300(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void WebView__setWebChromeClient(WebView* __this, ::app::Android::android::webkit::WebChromeClient* arg0);
void WebView__setWebChromeClient_IMPL_24283(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void WebView__setWebViewClient(WebView* __this, ::app::Android::android::webkit::WebViewClient* arg0);
void WebView__setWebViewClient_IMPL_24281(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void WebView__stopLoading(WebView* __this);
void WebView__stopLoading_IMPL_24237(::uStatic* __this, bool arg0_, jobject arg1_);

struct WebView : ::app::Android::android::widget::AbsoluteLayout
{
    void _ObjInit_16(::app::Android::android::content::Context* arg0) { WebView___ObjInit_16(this, arg0); }
    bool canGoBack() { return WebView__canGoBack(this); }
    bool canGoForward() { return WebView__canGoForward(this); }
    int getProgress() { return WebView__getProgress(this); }
    ::app::Android::java::lang::String* getUrl() { return WebView__getUrl(this); }
    void goBack() { WebView__goBack(this); }
    void goForward() { WebView__goForward(this); }
    void loadDataWithBaseURL(::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, ::app::Android::java::lang::String* arg2, ::app::Android::java::lang::String* arg3, ::app::Android::java::lang::String* arg4) { WebView__loadDataWithBaseURL(this, arg0, arg1, arg2, arg3, arg4); }
    void loadUrl_1(::app::Android::java::lang::String* arg0) { WebView__loadUrl_1(this, arg0); }
    void reload() { WebView__reload(this); }
    void setWebChromeClient(::app::Android::android::webkit::WebChromeClient* arg0) { WebView__setWebChromeClient(this, arg0); }
    void setWebViewClient(::app::Android::android::webkit::WebViewClient* arg0) { WebView__setWebViewClient(this, arg0); }
    void stopLoading() { WebView__stopLoading(this); }
};

}}}}


#endif
