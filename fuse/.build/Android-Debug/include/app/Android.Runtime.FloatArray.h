// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_RUNTIME_FLOAT_ARRAY_H__
#define __APP_ANDROID_RUNTIME_FLOAT_ARRAY_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace Runtime {

struct FloatArray;

struct FloatArray__uType : ::app::Android::java::lang::Object__uType
{
};

FloatArray__uType* FloatArray__typeof();

void FloatArray___ObjInit_5(FloatArray* __this, int length);
float FloatArray__get_Item(FloatArray* __this, int i);
FloatArray* FloatArray__New_6(::uStatic* __this, int length);
void FloatArray__set_Item(FloatArray* __this, int i, float value);

struct FloatArray : ::app::Android::java::lang::Object
{
    void _ObjInit_5(int length) { FloatArray___ObjInit_5(this, length); }
    float Item(int i) { return FloatArray__get_Item(this, i); }
    void Item(int i, float value) { FloatArray__set_Item(this, i, value); }
};

}}}


#endif
