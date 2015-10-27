// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/animation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_ANIMATION_ANIMATOR_H__
#define __APP_ANDROID_ANDROID_ANIMATION_ANIMATOR_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace animation {

struct Animator;

struct Animator__uType : ::app::Android::java::lang::Object__uType
{
};

Animator__uType* Animator__typeof();

void Animator___ObjInit_4(Animator* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);

struct Animator : ::app::Android::java::lang::Object
{
    void _ObjInit_4(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { Animator___ObjInit_4(this, obj, utype, hasFallbackClass, resolveType); }
};

}}}}


#endif
