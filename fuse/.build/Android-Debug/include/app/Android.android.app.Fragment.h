// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/app/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_APP_FRAGMENT_H__
#define __APP_ANDROID_ANDROID_APP_FRAGMENT_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace app {

struct Fragment;

extern jclass Fragment___javaClass_2;
extern jmethodID Fragment__hashCode_1416_ID;
extern jmethodID Fragment__toString_1417_ID;

struct Fragment__uType : ::app::Android::java::lang::Object__uType
{
};

Fragment__uType* Fragment__typeof();

void Fragment___Init_2(::uStatic* __this);
int Fragment__hashCode_1(Fragment* __this);
int Fragment__hashCode_IMPL_1416(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* Fragment__toString(Fragment* __this);
::uObject* Fragment__toString_IMPL_1417(::uStatic* __this, bool arg0_, jobject arg1_);

struct Fragment : ::app::Android::java::lang::Object
{
};

}}}}


#endif
