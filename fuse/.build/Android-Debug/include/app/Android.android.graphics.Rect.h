// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_GRAPHICS_RECT_H__
#define __APP_ANDROID_ANDROID_GRAPHICS_RECT_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace android {
namespace graphics {

struct Rect;

extern jclass Rect___javaClass_2;
extern jfieldID Rect__bottom_7157_ID;
extern jmethodID Rect__hashCode_7163_ID;
extern jfieldID Rect__left_7154_ID;
extern jmethodID Rect__Rect_7159_ID_c;
extern jfieldID Rect__right_7156_ID;
extern jfieldID Rect__top_7155_ID;
extern jmethodID Rect__toString_7164_ID;

struct Rect__uType : ::app::Android::java::lang::Object__uType
{
};

Rect__uType* Rect__typeof();

void Rect___Init_2(::uStatic* __this);
void Rect___ObjInit_5(Rect* __this);
int Rect__get_bottom(Rect* __this);
int Rect__get_left(Rect* __this);
int Rect__get_right(Rect* __this);
int Rect__get_top(Rect* __this);
int Rect__hashCode_1(Rect* __this);
int Rect__hashCode_IMPL_7163(::uStatic* __this, bool arg0_, jobject arg1_);
Rect* Rect__New_6(::uStatic* __this);
void Rect__set_bottom(Rect* __this, int value);
void Rect__set_left(Rect* __this, int value);
void Rect__set_right(Rect* __this, int value);
void Rect__set_top(Rect* __this, int value);
::app::Android::java::lang::String* Rect__toString(Rect* __this);
::uObject* Rect__toString_IMPL_7164(::uStatic* __this, bool arg0_, jobject arg1_);

struct Rect : ::app::Android::java::lang::Object
{
    void _ObjInit_5() { Rect___ObjInit_5(this); }
    int bottom() { return Rect__get_bottom(this); }
    int left() { return Rect__get_left(this); }
    int right() { return Rect__get_right(this); }
    int top() { return Rect__get_top(this); }
    void bottom(int value) { Rect__set_bottom(this, value); }
    void left(int value) { Rect__set_left(this, value); }
    void right(int value) { Rect__set_right(this, value); }
    void top(int value) { Rect__set_top(this, value); }
};

}}}}


#endif
