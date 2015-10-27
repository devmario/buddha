// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/net/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_NET_URI_H__
#define __APP_ANDROID_ANDROID_NET_URI_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace net {

struct Uri;

extern jclass Uri___javaClass_2;
extern jmethodID Uri__hashCode_10992_ID;
extern jmethodID Uri__parse_10996_ID;

struct Uri__uType : ::app::Android::java::lang::Object__uType
{
};

Uri__uType* Uri__typeof();

void Uri___Init_2(::uStatic* __this);
int Uri__hashCode_1(Uri* __this);
int Uri__hashCode_IMPL_10992(::uStatic* __this, bool arg0_, jobject arg1_);
Uri* Uri__parse(::uStatic* __this, ::app::Android::java::lang::String* arg0);
::uObject* Uri__parse_IMPL_10996(::uStatic* __this, ::uObject* arg0_);

struct Uri : ::app::Android::java::lang::Object
{
};

}}}}


#endif
