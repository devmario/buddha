// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/content/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_CONTENT_COMPONENT_NAME_H__
#define __APP_ANDROID_ANDROID_CONTENT_COMPONENT_NAME_H__

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

struct ComponentName;

extern jclass ComponentName___javaClass_2;
extern jmethodID ComponentName__hashCode_3882_ID;
extern jmethodID ComponentName__toString_3880_ID;

struct ComponentName__uType : ::app::Android::java::lang::Object__uType
{
};

ComponentName__uType* ComponentName__typeof();

void ComponentName___Init_2(::uStatic* __this);
int ComponentName__hashCode_1(ComponentName* __this);
int ComponentName__hashCode_IMPL_3882(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* ComponentName__toString(ComponentName* __this);
::uObject* ComponentName__toString_IMPL_3880(::uStatic* __this, bool arg0_, jobject arg1_);

struct ComponentName : ::app::Android::java::lang::Object
{
};

}}}}


#endif
