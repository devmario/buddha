// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_MOTION_EVENT_H__
#define __APP_ANDROID_ANDROID_VIEW_MOTION_EVENT_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

struct MotionEvent;

extern jclass MotionEvent___javaClass_3;
extern jmethodID MotionEvent__getActionMasked_22458_ID;
extern jmethodID MotionEvent__getEventTime_22462_ID;
extern jmethodID MotionEvent__getPointerCount_22473_ID;
extern jmethodID MotionEvent__getPointerId_22474_ID;
extern jmethodID MotionEvent__getRawX_22491_ID;
extern jmethodID MotionEvent__getRawY_22492_ID;
extern jmethodID MotionEvent__toString_22526_ID;

struct MotionEvent__uType : ::app::Android::java::lang::Object__uType
{
};

MotionEvent__uType* MotionEvent__typeof();

void MotionEvent___Init_3(::uStatic* __this);
int MotionEvent__getActionMasked(MotionEvent* __this);
int MotionEvent__getActionMasked_IMPL_22458(::uStatic* __this, bool arg0_, jobject arg1_);
::uLong MotionEvent__getEventTime(MotionEvent* __this);
::uLong MotionEvent__getEventTime_IMPL_22462(::uStatic* __this, bool arg0_, jobject arg1_);
int MotionEvent__getPointerCount(MotionEvent* __this);
int MotionEvent__getPointerCount_IMPL_22473(::uStatic* __this, bool arg0_, jobject arg1_);
int MotionEvent__getPointerId(MotionEvent* __this, int arg0);
int MotionEvent__getPointerId_IMPL_22474(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
float MotionEvent__getRawX(MotionEvent* __this);
float MotionEvent__getRawX_IMPL_22491(::uStatic* __this, bool arg0_, jobject arg1_);
float MotionEvent__getRawY(MotionEvent* __this);
float MotionEvent__getRawY_IMPL_22492(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::java::lang::String* MotionEvent__toString(MotionEvent* __this);
::uObject* MotionEvent__toString_IMPL_22526(::uStatic* __this, bool arg0_, jobject arg1_);

struct MotionEvent : ::app::Android::java::lang::Object
{
    int getActionMasked() { return MotionEvent__getActionMasked(this); }
    ::uLong getEventTime() { return MotionEvent__getEventTime(this); }
    int getPointerCount() { return MotionEvent__getPointerCount(this); }
    int getPointerId(int arg0) { return MotionEvent__getPointerId(this, arg0); }
    float getRawX() { return MotionEvent__getRawX(this); }
    float getRawY() { return MotionEvent__getRawY(this); }
};

}}}}


#endif
