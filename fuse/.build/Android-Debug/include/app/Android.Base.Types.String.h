// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Android/Source/Base/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_BASE_TYPES_STRING_H__
#define __APP_ANDROID_BASE_TYPES_STRING_H__

#include <android/log.h>
#include <app/Android.Base.JNI.h>
#include <jni.h>
#include <Uno.h>
#include <Xli.h>
#include <XliPlatform/PlatformSpecific/Android.h>

namespace app {
namespace Android {
namespace Base {
namespace Types {

struct String__uType : ::uClassType
{
};

String__uType* String__typeof();

::uString* String__JavaToUno(::uStatic* __this, ::uObject* jstr);
::uString* String__JavaToUno_1(::uStatic* __this, jobject jstr);
::uString* String__JavaToUno_2(::uStatic* __this, JNIEnv* jni_, jobject jstr_);
jobject String__UnoToJava(::uStatic* __this, ::uString* str);
jobject String__UnoToJava_1(::uStatic* __this, JNIEnv* jni_, ::uString* str_);

}}}}


#endif
