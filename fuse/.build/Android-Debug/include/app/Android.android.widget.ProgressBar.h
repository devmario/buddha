// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_PROGRESS_BAR_H__
#define __APP_ANDROID_ANDROID_WIDGET_PROGRESS_BAR_H__

#include <app/Android.android.view.View.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace widget {

struct ProgressBar;

extern jclass ProgressBar___javaClass_3;
extern jmethodID ProgressBar__setProgress_25844_ID;

struct ProgressBar__uType : ::app::Android::android::view::View__uType
{
};

ProgressBar__uType* ProgressBar__typeof();

void ProgressBar___Init_3(::uStatic* __this);
void ProgressBar___ObjInit_8(ProgressBar* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void ProgressBar__setProgress(ProgressBar* __this, int arg0);
void ProgressBar__setProgress_IMPL_25844(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);

struct ProgressBar : ::app::Android::android::view::View
{
    void _ObjInit_8(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { ProgressBar___ObjInit_8(this, obj, utype, hasFallbackClass, resolveType); }
    void setProgress(int arg0) { ProgressBar__setProgress(this, arg0); }
};

}}}}


#endif
