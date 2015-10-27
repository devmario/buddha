// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_SURFACE_VIEW_H__
#define __APP_ANDROID_ANDROID_VIEW_SURFACE_VIEW_H__

#include <app/Android.android.view.View.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

struct SurfaceView;

extern jclass SurfaceView___javaClass_3;
extern jmethodID SurfaceView__getHolder_22630_ID;
extern jmethodID SurfaceView__SurfaceView_22627_ID_c;

struct SurfaceView__uType : ::app::Android::android::view::View__uType
{
};

SurfaceView__uType* SurfaceView__typeof();

void SurfaceView___Init_3(::uStatic* __this);
void SurfaceView___ObjInit_10(SurfaceView* __this, ::app::Android::android::content::Context* arg0);
::uObject* SurfaceView__getHolder(SurfaceView* __this);
::uObject* SurfaceView__getHolder_IMPL_22630(::uStatic* __this, bool arg0_, jobject arg1_);
SurfaceView* SurfaceView__New_10(::uStatic* __this, ::app::Android::android::content::Context* arg0);

struct SurfaceView : ::app::Android::android::view::View
{
    void _ObjInit_10(::app::Android::android::content::Context* arg0) { SurfaceView___ObjInit_10(this, arg0); }
    ::uObject* getHolder() { return SurfaceView__getHolder(this); }
};

}}}}


#endif
