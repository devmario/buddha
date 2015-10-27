// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/content/res/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_CONTENT_RES_COLOR_STATE_LIST_H__
#define __APP_ANDROID_ANDROID_CONTENT_RES_COLOR_STATE_LIST_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace content {
namespace res {

struct ColorStateList;

extern jclass ColorStateList___javaClass_2;
extern jmethodID ColorStateList__getDefaultColor_3525_ID;
extern jmethodID ColorStateList__toString_3526_ID;

struct ColorStateList__uType : ::app::Android::java::lang::Object__uType
{
};

ColorStateList__uType* ColorStateList__typeof();

void ColorStateList___Init_2(::uStatic* __this);
int ColorStateList__getDefaultColor(ColorStateList* __this);
int ColorStateList__getDefaultColor_IMPL_3525(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* ColorStateList__toString(ColorStateList* __this);
::uObject* ColorStateList__toString_IMPL_3526(::uStatic* __this, bool arg0_, jobject arg1_);

struct ColorStateList : ::app::Android::java::lang::Object
{
    int getDefaultColor() { return ColorStateList__getDefaultColor(this); }
};

}}}}}


#endif
