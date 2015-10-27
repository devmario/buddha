// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/webkit/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WEBKIT_WEB_CHROME_CLIENT_H__
#define __APP_ANDROID_ANDROID_WEBKIT_WEB_CHROME_CLIENT_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace webkit { struct WebView; } } } }

namespace app {
namespace Android {
namespace android {
namespace webkit {

struct WebChromeClient;

extern jclass WebChromeClient___javaClass_2;
extern jmethodID WebChromeClient__onProgressChanged_24000_ID;

struct WebChromeClient__uType : ::app::Android::java::lang::Object__uType
{
    void(*__fp_onProgressChanged)(WebChromeClient*, ::app::Android::android::webkit::WebView*, int);
};

WebChromeClient__uType* WebChromeClient__typeof();

void WebChromeClient___Init_2(::uStatic* __this);
void WebChromeClient___ObjInit_5(WebChromeClient* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void WebChromeClient__onProgressChanged(WebChromeClient* __this, ::app::Android::android::webkit::WebView* arg0, int arg1);
void WebChromeClient__onProgressChanged_IMPL_24000(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);

struct WebChromeClient : ::app::Android::java::lang::Object
{
    void _ObjInit_5(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { WebChromeClient___ObjInit_5(this, obj, utype, hasFallbackClass, resolveType); }
    void onProgressChanged(::app::Android::android::webkit::WebView* arg0, int arg1) { (((WebChromeClient__uType*)this->__obj_type)->__fp_onProgressChanged)(this, arg0, arg1); }
};

}}}}


#endif
