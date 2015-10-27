// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_IMAGE_VIEW_H__
#define __APP_ANDROID_ANDROID_WIDGET_IMAGE_VIEW_H__

#include <app/Android.android.view.View.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Bitmap; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Matrix; } } } }
namespace app { namespace Android { namespace android { namespace widget { struct ImageViewDLRScaleType; } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct ImageView;

extern jclass ImageView___javaClass_3;
extern jmethodID ImageView__ImageView_25432_ID_c;
extern jmethodID ImageView__setImageBitmap_25450_ID;
extern jmethodID ImageView__setImageMatrix_25457_ID;
extern jmethodID ImageView__setScaleType_25454_ID;

struct ImageView__uType : ::app::Android::android::view::View__uType
{
};

ImageView__uType* ImageView__typeof();

void ImageView___Init_3(::uStatic* __this);
void ImageView___ObjInit_11(ImageView* __this, ::app::Android::android::content::Context* arg0);
ImageView* ImageView__New_10(::uStatic* __this, ::app::Android::android::content::Context* arg0);
void ImageView__setImageBitmap(ImageView* __this, ::app::Android::android::graphics::Bitmap* arg0);
void ImageView__setImageBitmap_IMPL_25450(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ImageView__setImageMatrix(ImageView* __this, ::app::Android::android::graphics::Matrix* arg0);
void ImageView__setImageMatrix_IMPL_25457(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void ImageView__setScaleType(ImageView* __this, ::app::Android::android::widget::ImageViewDLRScaleType* arg0);
void ImageView__setScaleType_IMPL_25454(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct ImageView : ::app::Android::android::view::View
{
    void _ObjInit_11(::app::Android::android::content::Context* arg0) { ImageView___ObjInit_11(this, arg0); }
    void setImageBitmap(::app::Android::android::graphics::Bitmap* arg0) { ImageView__setImageBitmap(this, arg0); }
    void setImageMatrix(::app::Android::android::graphics::Matrix* arg0) { ImageView__setImageMatrix(this, arg0); }
    void setScaleType(::app::Android::android::widget::ImageViewDLRScaleType* arg0) { ImageView__setScaleType(this, arg0); }
};

}}}}


#endif
