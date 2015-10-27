// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_EDIT_TEXT_H__
#define __APP_ANDROID_ANDROID_WIDGET_EDIT_TEXT_H__

#include <app/Android.android.widget.TextView.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace text { struct TextUtilsDLRTruncateAt; } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct EditText;

extern jclass EditText___javaClass_4;
extern jmethodID EditText__EditText_25066_ID_c;
extern jmethodID EditText__setEllipsize_25077_ID;

struct EditText__uType : ::app::Android::android::widget::TextView__uType
{
};

EditText__uType* EditText__typeof();

void EditText___Init_4(::uStatic* __this);
void EditText___ObjInit_14(EditText* __this, ::app::Android::android::content::Context* arg0);
EditText* EditText__New_14(::uStatic* __this, ::app::Android::android::content::Context* arg0);
void EditText__setEllipsize(EditText* __this, ::app::Android::android::text::TextUtilsDLRTruncateAt* arg0);
void EditText__setEllipsize_IMPL_25077(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct EditText : ::app::Android::android::widget::TextView
{
    void _ObjInit_14(::app::Android::android::content::Context* arg0) { EditText___ObjInit_14(this, arg0); }
};

}}}}


#endif
