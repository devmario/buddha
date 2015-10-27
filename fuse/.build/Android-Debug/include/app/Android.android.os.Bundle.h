// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/os/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_OS_BUNDLE_H__
#define __APP_ANDROID_ANDROID_OS_BUNDLE_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace os {

struct Bundle;

extern jclass Bundle___javaClass_2;
extern jmethodID Bundle__toString_13587_ID;

struct Bundle__uType : ::app::Android::java::lang::Object__uType
{
};

Bundle__uType* Bundle__typeof();

void Bundle___Init_2(::uStatic* __this);
::app::Android::java::lang::String* Bundle__toString(Bundle* __this);
::uObject* Bundle__toString_IMPL_13587(::uStatic* __this, bool arg0_, jobject arg1_);

struct Bundle : ::app::Android::java::lang::Object
{
};

}}}}


#endif
