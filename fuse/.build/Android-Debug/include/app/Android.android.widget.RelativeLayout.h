// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_RELATIVE_LAYOUT_H__
#define __APP_ANDROID_ANDROID_WIDGET_RELATIVE_LAYOUT_H__

#include <app/Android.android.view.ViewGroup.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct RelativeLayout;

extern jclass RelativeLayout___javaClass_4;
extern jmethodID RelativeLayout__RelativeLayout_25964_ID_c;

struct RelativeLayout__uType : ::app::Android::android::view::ViewGroup__uType
{
};

RelativeLayout__uType* RelativeLayout__typeof();

void RelativeLayout___Init_4(::uStatic* __this);
void RelativeLayout___ObjInit_14(RelativeLayout* __this, ::app::Android::android::content::Context* arg0);
void RelativeLayout___ObjInit_15(RelativeLayout* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
RelativeLayout* RelativeLayout__New_10(::uStatic* __this, ::app::Android::android::content::Context* arg0);

struct RelativeLayout : ::app::Android::android::view::ViewGroup
{
    void _ObjInit_14(::app::Android::android::content::Context* arg0) { RelativeLayout___ObjInit_14(this, arg0); }
    void _ObjInit_15(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { RelativeLayout___ObjInit_15(this, obj, utype, hasFallbackClass, resolveType); }
};

}}}}


#endif
