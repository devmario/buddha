// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Android/Source/Base/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_BASE_TYPES_ARRAYS_H__
#define __APP_ANDROID_BASE_TYPES_ARRAYS_H__

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

struct Arrays__uType : ::uClassType
{
};

Arrays__uType* Arrays__typeof();

::uArray* Arrays__JavaToUnoByteArray(::uStatic* __this, jobject arr_, ::uLong len_);

}}}}


#endif