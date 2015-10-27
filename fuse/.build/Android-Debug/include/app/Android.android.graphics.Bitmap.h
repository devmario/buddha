// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_GRAPHICS_BITMAP_H__
#define __APP_ANDROID_ANDROID_GRAPHICS_BITMAP_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace graphics { struct BitmapDLRConfig; } } } }

namespace app {
namespace Android {
namespace android {
namespace graphics {

struct Bitmap;

extern jclass Bitmap___javaClass_2;
extern jmethodID Bitmap__createBitmap_6455_ID;
extern jmethodID Bitmap__eraseColor_6482_ID;
extern jmethodID Bitmap__recycle_6445_ID;
extern jmethodID Bitmap__setHasMipMap_6481_ID;

struct Bitmap__uType : ::app::Android::java::lang::Object__uType
{
};

Bitmap__uType* Bitmap__typeof();

void Bitmap___Init_2(::uStatic* __this);
Bitmap* Bitmap__createBitmap_2(::uStatic* __this, int arg0, int arg1, ::app::Android::android::graphics::BitmapDLRConfig* arg2);
::uObject* Bitmap__createBitmap_IMPL_6455(::uStatic* __this, int arg0_, int arg1_, ::uObject* arg2_);
void Bitmap__eraseColor(Bitmap* __this, int arg0);
void Bitmap__eraseColor_IMPL_6482(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void Bitmap__recycle(Bitmap* __this);
void Bitmap__recycle_IMPL_6445(::uStatic* __this, bool arg0_, jobject arg1_);
void Bitmap__setHasMipMap(Bitmap* __this, bool arg0);
void Bitmap__setHasMipMap_IMPL_6481(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);

struct Bitmap : ::app::Android::java::lang::Object
{
    void eraseColor(int arg0) { Bitmap__eraseColor(this, arg0); }
    void recycle() { Bitmap__recycle(this); }
    void setHasMipMap(bool arg0) { Bitmap__setHasMipMap(this, arg0); }
};

}}}}


#endif
