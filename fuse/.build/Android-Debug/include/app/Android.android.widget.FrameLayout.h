// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_FRAME_LAYOUT_H__
#define __APP_ANDROID_ANDROID_WIDGET_FRAME_LAYOUT_H__

#include <app/Android.android.view.ViewGroup.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct FrameLayout;

extern jclass FrameLayout___javaClass_4;
extern jmethodID FrameLayout__FrameLayout_25171_ID_c;

struct FrameLayout__uType : ::app::Android::android::view::ViewGroup__uType
{
};

FrameLayout__uType* FrameLayout__typeof();

void FrameLayout___Init_4(::uStatic* __this);
void FrameLayout___ObjInit_14(FrameLayout* __this, ::app::Android::android::content::Context* arg0);
void FrameLayout___ObjInit_15(FrameLayout* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
FrameLayout* FrameLayout__New_10(::uStatic* __this, ::app::Android::android::content::Context* arg0);

struct FrameLayout : ::app::Android::android::view::ViewGroup
{
    void _ObjInit_14(::app::Android::android::content::Context* arg0) { FrameLayout___ObjInit_14(this, arg0); }
    void _ObjInit_15(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { FrameLayout___ObjInit_15(this, obj, utype, hasFallbackClass, resolveType); }
};

}}}}


#endif
