// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_KEY_EVENT_H__
#define __APP_ANDROID_ANDROID_VIEW_KEY_EVENT_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

struct KeyEvent;

extern jclass KeyEvent___javaClass_3;
extern jmethodID KeyEvent__toString_22231_ID;

struct KeyEvent__uType : ::app::Android::java::lang::Object__uType
{
};

KeyEvent__uType* KeyEvent__typeof();

void KeyEvent___Init_3(::uStatic* __this);
::app::Android::java::lang::String* KeyEvent__toString(KeyEvent* __this);
::uObject* KeyEvent__toString_IMPL_22231(::uStatic* __this, bool arg0_, jobject arg1_);

struct KeyEvent : ::app::Android::java::lang::Object
{
};

}}}}


#endif
