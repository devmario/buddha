// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/app/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_APP_ACTIVITY_H__
#define __APP_ANDROID_ANDROID_APP_ACTIVITY_H__

#include <app/Android.android.view.ContextThemeWrapper.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Intent; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct Object; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace app {

struct Activity;

extern jclass Activity___javaClass_5;
extern jmethodID Activity__getSystemService_847_ID;
extern jmethodID Activity__runOnUiThread_862_ID;
extern jmethodID Activity__startActivity_806_ID;

struct Activity__uType : ::app::Android::android::view::ContextThemeWrapper__uType
{
};

Activity__uType* Activity__typeof();

void Activity___Init_5(::uStatic* __this);
void Activity___ObjInit_11(Activity* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
Activity* Activity__GetAppActivity(::uStatic* __this);
::app::Android::java::lang::Object* Activity__getSystemService(Activity* __this, ::app::Android::java::lang::String* arg0);
::uObject* Activity__getSystemService_IMPL_847(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
Activity* Activity__New_10(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void Activity__runOnUiThread(Activity* __this, ::uObject* arg0);
void Activity__runOnUiThread_IMPL_862(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Activity__startActivity_1(Activity* __this, ::app::Android::android::content::Intent* arg0);
void Activity__startActivity_IMPL_806(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct Activity : ::app::Android::android::view::ContextThemeWrapper
{
    void _ObjInit_11(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { Activity___ObjInit_11(this, obj, utype, hasFallbackClass, resolveType); }
    void runOnUiThread(::uObject* arg0) { Activity__runOnUiThread(this, arg0); }
    void startActivity_1(::app::Android::android::content::Intent* arg0) { Activity__startActivity_1(this, arg0); }
};

}}}}


#endif
