// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_VIEW_TEXTURE_VIEW_H__
#define __APP_ANDROID_ANDROID_VIEW_TEXTURE_VIEW_H__

#include <app/Android.android.view.View.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }

namespace app {
namespace Android {
namespace android {
namespace view {

struct TextureView;

extern jclass TextureView___javaClass_3;
extern jmethodID TextureView__setOpaque_22650_ID;
extern jmethodID TextureView__setSurfaceTextureListener_22672_ID;
extern jmethodID TextureView__TextureView_22646_ID_c;

struct TextureView__uType : ::app::Android::android::view::View__uType
{
};

TextureView__uType* TextureView__typeof();

void TextureView___Init_3(::uStatic* __this);
void TextureView___ObjInit_8(TextureView* __this, ::app::Android::android::content::Context* arg0);
TextureView* TextureView__New_10(::uStatic* __this, ::app::Android::android::content::Context* arg0);
void TextureView__setOpaque(TextureView* __this, bool arg0);
void TextureView__setOpaque_IMPL_22650(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void TextureView__setSurfaceTextureListener(TextureView* __this, ::uObject* arg0);
void TextureView__setSurfaceTextureListener_IMPL_22672(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct TextureView : ::app::Android::android::view::View
{
    void _ObjInit_8(::app::Android::android::content::Context* arg0) { TextureView___ObjInit_8(this, arg0); }
    void setOpaque(bool arg0) { TextureView__setOpaque(this, arg0); }
    void setSurfaceTextureListener(::uObject* arg0) { TextureView__setSurfaceTextureListener(this, arg0); }
};

}}}}


#endif
