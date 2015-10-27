// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_SWITCH_H__
#define __APP_ANDROID_ANDROID_WIDGET_SWITCH_H__

#include <app/Android.android.widget.CompoundButton.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent; } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct Switch;

extern jclass Switch___javaClass_6;
extern jmethodID Switch__onTouchEvent_26365_ID;
extern jmethodID Switch__setChecked_26366_ID;
extern jmethodID Switch__Switch_26341_ID_c;

struct Switch__uType : ::app::Android::android::widget::CompoundButton__uType
{
};

Switch__uType* Switch__typeof();

void Switch___Init_6(::uStatic* __this);
void Switch___ObjInit_21(Switch* __this, ::app::Android::android::content::Context* arg0);
Switch* Switch__New_18(::uStatic* __this, ::app::Android::android::content::Context* arg0);
bool Switch__onTouchEvent(Switch* __this, ::app::Android::android::view::MotionEvent* arg0);
bool Switch__onTouchEvent_IMPL_26365(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void Switch__setChecked(Switch* __this, bool arg0);
void Switch__setChecked_IMPL_26366(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);

struct Switch : ::app::Android::android::widget::CompoundButton
{
    void _ObjInit_21(::app::Android::android::content::Context* arg0) { Switch___ObjInit_21(this, arg0); }
};

}}}}


#endif
