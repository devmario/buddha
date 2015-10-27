// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_VIEW_GROUP_H__
#define __APP_ANDROID_ANDROID_VIEW_VIEW_GROUP_H__

#include <app/Android.android.view.View.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

struct ViewGroup;

extern jclass ViewGroup___javaClass_3;
extern jmethodID ViewGroup__addView_23432_ID;
extern jmethodID ViewGroup__addView_23433_ID;
extern jmethodID ViewGroup__bringChildToFront_23392_ID;
extern jmethodID ViewGroup__hasFocus_23380_ID;
extern jmethodID ViewGroup__onInterceptTouchEvent_23409_ID;
extern jmethodID ViewGroup__removeView_23446_ID;
extern jmethodID ViewGroup__setClipChildren_23425_ID;

struct ViewGroup__uType : ::app::Android::android::view::View__uType
{
    void(*__fp_addView)(ViewGroup*, ::app::Android::android::view::View*);
    void(*__fp_addView_1)(ViewGroup*, ::app::Android::android::view::View*, int);
    bool(*__fp_onInterceptTouchEvent)(ViewGroup*, ::app::Android::android::view::MotionEvent*);
};

ViewGroup__uType* ViewGroup__typeof();

void ViewGroup___Init_3(::uStatic* __this);
void ViewGroup___ObjInit_8(ViewGroup* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void ViewGroup__addView(ViewGroup* __this, ::app::Android::android::view::View* arg0);
void ViewGroup__addView_1(ViewGroup* __this, ::app::Android::android::view::View* arg0, int arg1);
void ViewGroup__addView_IMPL_23432(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__addView_IMPL_23433(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_);
void ViewGroup__bringChildToFront(ViewGroup* __this, ::app::Android::android::view::View* arg0);
void ViewGroup__bringChildToFront_IMPL_23392(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool ViewGroup__hasFocus(ViewGroup* __this);
bool ViewGroup__hasFocus_IMPL_23380(::uStatic* __this, bool arg0_, jobject arg1_);
bool ViewGroup__onInterceptTouchEvent(ViewGroup* __this, ::app::Android::android::view::MotionEvent* arg0);
bool ViewGroup__onInterceptTouchEvent_IMPL_23409(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__removeView(ViewGroup* __this, ::app::Android::android::view::View* arg0);
void ViewGroup__removeView_IMPL_23446(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ViewGroup__setClipChildren(ViewGroup* __this, bool arg0);
void ViewGroup__setClipChildren_IMPL_23425(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);

struct ViewGroup : ::app::Android::android::view::View
{
    void _ObjInit_8(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { ViewGroup___ObjInit_8(this, obj, utype, hasFallbackClass, resolveType); }
    void addView(::app::Android::android::view::View* arg0) { (((ViewGroup__uType*)this->__obj_type)->__fp_addView)(this, arg0); }
    void addView_1(::app::Android::android::view::View* arg0, int arg1) { (((ViewGroup__uType*)this->__obj_type)->__fp_addView_1)(this, arg0, arg1); }
    void bringChildToFront(::app::Android::android::view::View* arg0) { ViewGroup__bringChildToFront(this, arg0); }
    bool onInterceptTouchEvent(::app::Android::android::view::MotionEvent* arg0) { return (((ViewGroup__uType*)this->__obj_type)->__fp_onInterceptTouchEvent)(this, arg0); }
    void removeView(::app::Android::android::view::View* arg0) { ViewGroup__removeView(this, arg0); }
    void setClipChildren(bool arg0) { ViewGroup__setClipChildren(this, arg0); }
};

}}}}


#endif
