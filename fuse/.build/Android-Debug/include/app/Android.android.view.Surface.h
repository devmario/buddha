// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_SURFACE_H__
#define __APP_ANDROID_ANDROID_VIEW_SURFACE_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct SurfaceTexture; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

struct Surface;

extern jclass Surface___javaClass_2;
extern jmethodID Surface__Surface_22593_ID_c;
extern jmethodID Surface__toString_22603_ID;

struct Surface__uType : ::app::Android::java::lang::Object__uType
{
};

Surface__uType* Surface__typeof();

void Surface___Init_2(::uStatic* __this);
void Surface___ObjInit_5(Surface* __this, ::app::Android::android::graphics::SurfaceTexture* arg0);
Surface* Surface__New_6(::uStatic* __this, ::app::Android::android::graphics::SurfaceTexture* arg0);
::app::Android::java::lang::String* Surface__toString(Surface* __this);
::uObject* Surface__toString_IMPL_22603(::uStatic* __this, bool arg0_, jobject arg1_);

struct Surface : ::app::Android::java::lang::Object
{
    void _ObjInit_5(::app::Android::android::graphics::SurfaceTexture* arg0) { Surface___ObjInit_5(this, arg0); }
};

}}}}


#endif
