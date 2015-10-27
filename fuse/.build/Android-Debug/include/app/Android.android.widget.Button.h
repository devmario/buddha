// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_BUTTON_H__
#define __APP_ANDROID_ANDROID_WIDGET_BUTTON_H__

#include <app/Android.android.widget.TextView.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct Button;

extern jclass Button___javaClass_4;
extern jmethodID Button__Button_24840_ID_c;

struct Button__uType : ::app::Android::android::widget::TextView__uType
{
};

Button__uType* Button__typeof();

void Button___Init_4(::uStatic* __this);
void Button___ObjInit_14(Button* __this, ::app::Android::android::content::Context* arg0);
void Button___ObjInit_15(Button* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
Button* Button__New_14(::uStatic* __this, ::app::Android::android::content::Context* arg0);

struct Button : ::app::Android::android::widget::TextView
{
    void _ObjInit_14(::app::Android::android::content::Context* arg0) { Button___ObjInit_14(this, arg0); }
    void _ObjInit_15(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { Button___ObjInit_15(this, obj, utype, hasFallbackClass, resolveType); }
};

}}}}


#endif
