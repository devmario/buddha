// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_HORIZONTAL_SCROLL_VIEW_H__
#define __APP_ANDROID_ANDROID_WIDGET_HORIZONTAL_SCROLL_VIEW_H__

#include <app/Android.android.widget.FrameLayout.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct HorizontalScrollView;

extern jclass HorizontalScrollView___javaClass_5;
extern jmethodID HorizontalScrollView__addView_25366_ID;
extern jmethodID HorizontalScrollView__addView_25367_ID;
extern jmethodID HorizontalScrollView__onInterceptTouchEvent_25378_ID;
extern jmethodID HorizontalScrollView__onTouchEvent_25379_ID;

struct HorizontalScrollView__uType : ::app::Android::android::widget::FrameLayout__uType
{
};

HorizontalScrollView__uType* HorizontalScrollView__typeof();

void HorizontalScrollView___Init_5(::uStatic* __this);
void HorizontalScrollView___ObjInit_16(HorizontalScrollView* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void HorizontalScrollView__addView(HorizontalScrollView* __this, ::app::Android::android::view::View* arg0);
void HorizontalScrollView__addView_1(HorizontalScrollView* __this, ::app::Android::android::view::View* arg0, int arg1);
void HorizontalScrollView__addView_IMPL_25366(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void HorizontalScrollView__addView_IMPL_25367(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
bool HorizontalScrollView__onInterceptTouchEvent(HorizontalScrollView* __this, ::app::Android::android::view::MotionEvent* arg0);
bool HorizontalScrollView__onInterceptTouchEvent_IMPL_25378(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool HorizontalScrollView__onTouchEvent(HorizontalScrollView* __this, ::app::Android::android::view::MotionEvent* arg0);
bool HorizontalScrollView__onTouchEvent_IMPL_25379(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct HorizontalScrollView : ::app::Android::android::widget::FrameLayout
{
    void _ObjInit_16(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { HorizontalScrollView___ObjInit_16(this, obj, utype, hasFallbackClass, resolveType); }
};

}}}}


#endif
