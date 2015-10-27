// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_VIEW_H__
#define __APP_ANDROID_ANDROID_VIEW_VIEW_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace graphics { namespace drawable { struct Drawable; } } } } }
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent; } } } }
namespace app { namespace Android { namespace android { namespace view { struct ViewGroupDLRLayoutParams; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

struct View;

extern jclass View___javaClass_2;
extern jmethodID View__bringToFront_22995_ID;
extern jmethodID View__getContext_22972_ID;
extern jmethodID View__getMeasuredHeight_23009_ID;
extern jmethodID View__getMeasuredWidth_23007_ID;
extern jmethodID View__getRootView_23196_ID;
extern jmethodID View__getWindowToken_23119_ID;
extern jmethodID View__hasFocus_22851_ID;
extern jmethodID View__invalidate_23065_ID;
extern jmethodID View__measure_23211_ID;
extern jmethodID View__onScrollChanged_22996_ID;
extern jmethodID View__onTouchEvent_22991_ID;
extern jmethodID View__requestFocus_22934_ID;
extern jmethodID View__setAlpha_23031_ID;
extern jmethodID View__setBackground_23177_ID;
extern jmethodID View__setBackgroundColor_23175_ID;
extern jmethodID View__setBackgroundResource_23176_ID;
extern jmethodID View__setEnabled_22894_ID;
extern jmethodID View__setFocusable_22895_ID;
extern jmethodID View__setFocusableInTouchMode_22896_ID;
extern jmethodID View__setLayoutParams_23057_ID;
extern jmethodID View__setOnFocusChangeListener_22828_ID;
extern jmethodID View__setOnTouchListener_22844_ID;
extern jmethodID View__setRotation_23016_ID;
extern jmethodID View__setScaleX_23022_ID;
extern jmethodID View__setScaleY_23024_ID;
extern jmethodID View__setScrollX_23000_ID;
extern jmethodID View__setScrollY_23001_ID;
extern jmethodID View__setTextAlignment_23253_ID;
extern jmethodID View__setTranslationX_23046_ID;
extern jmethodID View__setTranslationY_23048_ID;
extern jfieldID View__TEXT_ALIGNMENT_GRAVITY_22767_ID;
extern jmethodID View__toString_22818_ID;
extern jmethodID View__View_22815_ID_c;

struct View__uType : ::app::Android::java::lang::Object__uType
{
    bool(*__fp_hasFocus)(View*);
    void(*__fp_onScrollChanged)(View*, int, int, int, int);
    bool(*__fp_onTouchEvent)(View*, ::app::Android::android::view::MotionEvent*);
    void(*__fp_setBackgroundColor)(View*, int);
    void(*__fp_setEnabled)(View*, bool);
    void(*__fp_setLayoutParams)(View*, ::app::Android::android::view::ViewGroupDLRLayoutParams*);
};

View__uType* View__typeof();

void View___Init_2(::uStatic* __this);
void View___ObjInit_4(View* __this, ::app::Android::android::content::Context* arg0);
void View___ObjInit_7(View* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void View__bringToFront(View* __this);
void View__bringToFront_IMPL_22995(::uStatic* __this, bool arg0_, jobject arg1_);
int View__get_TEXT_ALIGNMENT_GRAVITY(::uStatic* __this);
::app::Android::android::content::Context* View__getContext(View* __this);
::uObject* View__getContext_IMPL_22972(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getMeasuredHeight(View* __this);
int View__getMeasuredHeight_IMPL_23009(::uStatic* __this, bool arg0_, jobject arg1_);
int View__getMeasuredWidth(View* __this);
int View__getMeasuredWidth_IMPL_23007(::uStatic* __this, bool arg0_, jobject arg1_);
View* View__getRootView(View* __this);
::uObject* View__getRootView_IMPL_23196(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* View__getWindowToken(View* __this);
::uObject* View__getWindowToken_IMPL_23119(::uStatic* __this, bool arg0_, jobject arg1_);
bool View__hasFocus(View* __this);
bool View__hasFocus_IMPL_22851(::uStatic* __this, bool arg0_, jobject arg1_);
void View__invalidate_2(View* __this);
void View__invalidate_IMPL_23065(::uStatic* __this, bool arg0_, jobject arg1_);
void View__measure(View* __this, int arg0, int arg1);
void View__measure_IMPL_23211(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_);
View* View__New_6(::uStatic* __this, ::app::Android::android::content::Context* arg0);
void View__onScrollChanged(View* __this, int arg0, int arg1, int arg2, int arg3);
void View__onScrollChanged_IMPL_22996(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
bool View__onTouchEvent(View* __this, ::app::Android::android::view::MotionEvent* arg0);
bool View__onTouchEvent_IMPL_22991(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
bool View__requestFocus_2(View* __this);
bool View__requestFocus_IMPL_22934(::uStatic* __this, bool arg0_, jobject arg1_);
void View__setAlpha(View* __this, float arg0);
void View__setAlpha_IMPL_23031(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);
void View__setBackground(View* __this, ::app::Android::android::graphics::drawable::Drawable* arg0);
void View__setBackground_IMPL_23177(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setBackgroundColor(View* __this, int arg0);
void View__setBackgroundColor_IMPL_23175(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setBackgroundResource(View* __this, int arg0);
void View__setBackgroundResource_IMPL_23176(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setEnabled(View* __this, bool arg0);
void View__setEnabled_IMPL_22894(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setFocusable(View* __this, bool arg0);
void View__setFocusable_IMPL_22895(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setFocusableInTouchMode(View* __this, bool arg0);
void View__setFocusableInTouchMode_IMPL_22896(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void View__setLayoutParams(View* __this, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg0);
void View__setLayoutParams_IMPL_23057(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setOnFocusChangeListener(View* __this, ::uObject* arg0);
void View__setOnFocusChangeListener_IMPL_22828(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setOnTouchListener(View* __this, ::uObject* arg0);
void View__setOnTouchListener_IMPL_22844(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void View__setRotation(View* __this, float arg0);
void View__setRotation_IMPL_23016(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);
void View__setScaleX(View* __this, float arg0);
void View__setScaleX_IMPL_23022(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);
void View__setScaleY(View* __this, float arg0);
void View__setScaleY_IMPL_23024(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);
void View__setScrollX(View* __this, int arg0);
void View__setScrollX_IMPL_23000(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setScrollY(View* __this, int arg0);
void View__setScrollY_IMPL_23001(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setTextAlignment(View* __this, int arg0);
void View__setTextAlignment_IMPL_23253(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void View__setTranslationX(View* __this, float arg0);
void View__setTranslationX_IMPL_23046(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);
void View__setTranslationY(View* __this, float arg0);
void View__setTranslationY_IMPL_23048(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_);
::app::Android::java::lang::String* View__toString(View* __this);
::uObject* View__toString_IMPL_22818(::uStatic* __this, bool arg0_, jobject arg1_);

struct View : ::app::Android::java::lang::Object
{
    void _ObjInit_4(::app::Android::android::content::Context* arg0) { View___ObjInit_4(this, arg0); }
    void _ObjInit_7(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { View___ObjInit_7(this, obj, utype, hasFallbackClass, resolveType); }
    void bringToFront() { View__bringToFront(this); }
    ::app::Android::android::content::Context* getContext() { return View__getContext(this); }
    int getMeasuredHeight() { return View__getMeasuredHeight(this); }
    int getMeasuredWidth() { return View__getMeasuredWidth(this); }
    View* getRootView() { return View__getRootView(this); }
    ::uObject* getWindowToken() { return View__getWindowToken(this); }
    bool hasFocus() { return (((View__uType*)this->__obj_type)->__fp_hasFocus)(this); }
    void invalidate_2() { View__invalidate_2(this); }
    void measure(int arg0, int arg1) { View__measure(this, arg0, arg1); }
    void onScrollChanged(int arg0, int arg1, int arg2, int arg3) { (((View__uType*)this->__obj_type)->__fp_onScrollChanged)(this, arg0, arg1, arg2, arg3); }
    bool onTouchEvent(::app::Android::android::view::MotionEvent* arg0) { return (((View__uType*)this->__obj_type)->__fp_onTouchEvent)(this, arg0); }
    bool requestFocus_2() { return View__requestFocus_2(this); }
    void setAlpha(float arg0) { View__setAlpha(this, arg0); }
    void setBackground(::app::Android::android::graphics::drawable::Drawable* arg0) { View__setBackground(this, arg0); }
    void setBackgroundColor(int arg0) { (((View__uType*)this->__obj_type)->__fp_setBackgroundColor)(this, arg0); }
    void setBackgroundResource(int arg0) { View__setBackgroundResource(this, arg0); }
    void setEnabled(bool arg0) { (((View__uType*)this->__obj_type)->__fp_setEnabled)(this, arg0); }
    void setFocusable(bool arg0) { View__setFocusable(this, arg0); }
    void setFocusableInTouchMode(bool arg0) { View__setFocusableInTouchMode(this, arg0); }
    void setLayoutParams(::app::Android::android::view::ViewGroupDLRLayoutParams* arg0) { (((View__uType*)this->__obj_type)->__fp_setLayoutParams)(this, arg0); }
    void setOnFocusChangeListener(::uObject* arg0) { View__setOnFocusChangeListener(this, arg0); }
    void setOnTouchListener(::uObject* arg0) { View__setOnTouchListener(this, arg0); }
    void setRotation(float arg0) { View__setRotation(this, arg0); }
    void setScaleX(float arg0) { View__setScaleX(this, arg0); }
    void setScaleY(float arg0) { View__setScaleY(this, arg0); }
    void setScrollX(int arg0) { View__setScrollX(this, arg0); }
    void setScrollY(int arg0) { View__setScrollY(this, arg0); }
    void setTextAlignment(int arg0) { View__setTextAlignment(this, arg0); }
    void setTranslationX(float arg0) { View__setTranslationX(this, arg0); }
    void setTranslationY(float arg0) { View__setTranslationY(this, arg0); }
};

}}}}


#endif
