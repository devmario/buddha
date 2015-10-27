// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_ABS_SEEK_BAR_H__
#define __APP_ANDROID_ANDROID_WIDGET_ABS_SEEK_BAR_H__

#include <app/Android.android.widget.ProgressBar.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent; } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct AbsSeekBar;

extern jclass AbsSeekBar___javaClass_4;
extern jmethodID AbsSeekBar__onTouchEvent_24551_ID;
extern jmethodID AbsSeekBar__setMax_24544_ID;

struct AbsSeekBar__uType : ::app::Android::android::widget::ProgressBar__uType
{
};

AbsSeekBar__uType* AbsSeekBar__typeof();

void AbsSeekBar___Init_4(::uStatic* __this);
void AbsSeekBar___ObjInit_14(AbsSeekBar* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
bool AbsSeekBar__onTouchEvent(AbsSeekBar* __this, ::app::Android::android::view::MotionEvent* arg0);
bool AbsSeekBar__onTouchEvent_IMPL_24551(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void AbsSeekBar__setMax(AbsSeekBar* __this, int arg0);
void AbsSeekBar__setMax_IMPL_24544(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);

struct AbsSeekBar : ::app::Android::android::widget::ProgressBar
{
    void _ObjInit_14(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { AbsSeekBar___ObjInit_14(this, obj, utype, hasFallbackClass, resolveType); }
    void setMax(int arg0) { AbsSeekBar__setMax(this, arg0); }
};

}}}}


#endif
