// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_SEEK_BAR_H__
#define __APP_ANDROID_ANDROID_WIDGET_SEEK_BAR_H__

#include <app/Android.android.widget.AbsSeekBar.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace widget {

struct SeekBar;

extern jclass SeekBar___javaClass_5;
extern jmethodID SeekBar__setOnSeekBarChangeListener_26187_ID;

struct SeekBar__uType : ::app::Android::android::widget::AbsSeekBar__uType
{
};

SeekBar__uType* SeekBar__typeof();

void SeekBar___Init_5(::uStatic* __this);
void SeekBar___ObjInit_19(SeekBar* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void SeekBar__setOnSeekBarChangeListener(SeekBar* __this, ::uObject* arg0);
void SeekBar__setOnSeekBarChangeListener_IMPL_26187(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct SeekBar : ::app::Android::android::widget::AbsSeekBar
{
    void _ObjInit_19(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { SeekBar___ObjInit_19(this, obj, utype, hasFallbackClass, resolveType); }
    void setOnSeekBarChangeListener(::uObject* arg0) { SeekBar__setOnSeekBarChangeListener(this, arg0); }
};

}}}}


#endif
