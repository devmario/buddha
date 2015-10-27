// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_SCROLL_VIEW_H__
#define __APP_ANDROID_ANDROID_WIDGET_SCROLL_VIEW_H__

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

struct ScrollView;

extern jclass ScrollView___javaClass_5;
extern jmethodID ScrollView__addView_26070_ID;
extern jmethodID ScrollView__addView_26071_ID;
extern jmethodID ScrollView__onInterceptTouchEvent_26082_ID;
extern jmethodID ScrollView__onTouchEvent_26083_ID;

struct ScrollView__uType : ::app::Android::android::widget::FrameLayout__uType
{
};

ScrollView__uType* ScrollView__typeof();

void ScrollView___Init_5(::uStatic* __this);
void ScrollView___ObjInit_16(ScrollView* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void ScrollView__addView(ScrollView* __this, ::app::Android::android::view::View* arg0);
void ScrollView__addView_1(ScrollView* __this, ::app::Android::android::view::View* arg0, int arg1);
void ScrollView__addView_IMPL_26070(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ScrollView__addView_IMPL_26071(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
bool ScrollView__onInterceptTouchEvent(ScrollView* __this, ::app::Android::android::view::MotionEvent* arg0);
bool ScrollView__onInterceptTouchEvent_IMPL_26082(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool ScrollView__onTouchEvent(ScrollView* __this, ::app::Android::android::view::MotionEvent* arg0);
bool ScrollView__onTouchEvent_IMPL_26083(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct ScrollView : ::app::Android::android::widget::FrameLayout
{
    void _ObjInit_16(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { ScrollView___ObjInit_16(this, obj, utype, hasFallbackClass, resolveType); }
};

}}}}


#endif
