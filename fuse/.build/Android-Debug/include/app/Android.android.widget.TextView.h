// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_TEXT_VIEW_H__
#define __APP_ANDROID_ANDROID_WIDGET_TEXT_VIEW_H__

#include <app/Android.android.view.View.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace content { namespace res { struct ColorStateList; } } } } }
namespace app { namespace Android { namespace android { namespace content { struct Context; } } } }
namespace app { namespace Android { namespace android { namespace graphics { struct Typeface; } } } }
namespace app { namespace Android { namespace android { namespace text { struct TextUtilsDLRTruncateAt; } } } }
namespace app { namespace Android { namespace android { namespace view { struct MotionEvent; } } } }

namespace app {
namespace Android {
namespace android {
namespace widget {

struct TextView;

extern jclass TextView___javaClass_3;
extern jmethodID TextView__addTextChangedListener_26729_ID;
extern jmethodID TextView__getLineCount_26688_ID;
extern jmethodID TextView__getTextColors_26582_ID;
extern jmethodID TextView__onScrollChanged_26761_ID;
extern jmethodID TextView__onTouchEvent_26738_ID;
extern jmethodID TextView__removeTextChangedListener_26730_ID;
extern jmethodID TextView__setEllipsize_26720_ID;
extern jmethodID TextView__setEnabled_26528_ID;
extern jmethodID TextView__setGravity_26603_ID;
extern jmethodID TextView__setHorizontallyScrolling_26607_ID;
extern jmethodID TextView__setIncludeFontPadding_26706_ID;
extern jmethodID TextView__setInputType_26650_ID;
extern jmethodID TextView__setMaxLines_26612_ID;
extern jmethodID TextView__setOnEditorActionListener_26658_ID;
extern jmethodID TextView__setPadding_26567_ID;
extern jmethodID TextView__setPaddingRelative_26568_ID;
extern jmethodID TextView__setText_26640_ID;
extern jmethodID TextView__setTextColor_26580_ID;
extern jmethodID TextView__setTextSize_26575_ID;
extern jmethodID TextView__setTypeface_26578_ID;
extern jmethodID TextView__TextView_26525_ID_c;

struct TextView__uType : ::app::Android::android::view::View__uType
{
    void(*__fp_setEllipsize)(TextView*, ::app::Android::android::text::TextUtilsDLRTruncateAt*);
};

TextView__uType* TextView__typeof();

void TextView___Init_3(::uStatic* __this);
void TextView___ObjInit_10(TextView* __this, ::app::Android::android::content::Context* arg0);
void TextView___ObjInit_11(TextView* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void TextView__addTextChangedListener(TextView* __this, ::uObject* arg0);
void TextView__addTextChangedListener_IMPL_26729(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
int TextView__getLineCount(TextView* __this);
int TextView__getLineCount_IMPL_26688(::uStatic* __this, bool arg0_, jobject arg1_);
::app::Android::android::content::res::ColorStateList* TextView__getTextColors(TextView* __this);
::uObject* TextView__getTextColors_IMPL_26582(::uStatic* __this, bool arg0_, jobject arg1_);
TextView* TextView__New_10(::uStatic* __this, ::app::Android::android::content::Context* arg0);
void TextView__onScrollChanged(TextView* __this, int arg0, int arg1, int arg2, int arg3);
void TextView__onScrollChanged_IMPL_26761(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
bool TextView__onTouchEvent(TextView* __this, ::app::Android::android::view::MotionEvent* arg0);
bool TextView__onTouchEvent_IMPL_26738(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void TextView__removeTextChangedListener(TextView* __this, ::uObject* arg0);
void TextView__removeTextChangedListener_IMPL_26730(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void TextView__setEllipsize(TextView* __this, ::app::Android::android::text::TextUtilsDLRTruncateAt* arg0);
void TextView__setEllipsize_IMPL_26720(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void TextView__setEnabled(TextView* __this, bool arg0);
void TextView__setEnabled_IMPL_26528(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void TextView__setGravity(TextView* __this, int arg0);
void TextView__setGravity_IMPL_26603(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void TextView__setHorizontallyScrolling(TextView* __this, bool arg0);
void TextView__setHorizontallyScrolling_IMPL_26607(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void TextView__setIncludeFontPadding(TextView* __this, bool arg0);
void TextView__setIncludeFontPadding_IMPL_26706(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void TextView__setInputType(TextView* __this, int arg0);
void TextView__setInputType_IMPL_26650(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void TextView__setMaxLines(TextView* __this, int arg0);
void TextView__setMaxLines_IMPL_26612(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void TextView__setOnEditorActionListener(TextView* __this, ::uObject* arg0);
void TextView__setOnEditorActionListener_IMPL_26658(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void TextView__setPadding(TextView* __this, int arg0, int arg1, int arg2, int arg3);
void TextView__setPadding_IMPL_26567(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
void TextView__setPaddingRelative(TextView* __this, int arg0, int arg1, int arg2, int arg3);
void TextView__setPaddingRelative_IMPL_26568(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_);
void TextView__setText(TextView* __this, ::uObject* arg0);
void TextView__setText_IMPL_26640(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void TextView__setTextColor(TextView* __this, int arg0);
void TextView__setTextColor_IMPL_26580(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);
void TextView__setTextSize(TextView* __this, int arg0, float arg1);
void TextView__setTextSize_IMPL_26575(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, float arg3_);
void TextView__setTypeface_1(TextView* __this, ::app::Android::android::graphics::Typeface* arg0);
void TextView__setTypeface_IMPL_26578(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct TextView : ::app::Android::android::view::View
{
    void _ObjInit_10(::app::Android::android::content::Context* arg0) { TextView___ObjInit_10(this, arg0); }
    void _ObjInit_11(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { TextView___ObjInit_11(this, obj, utype, hasFallbackClass, resolveType); }
    void addTextChangedListener(::uObject* arg0) { TextView__addTextChangedListener(this, arg0); }
    int getLineCount() { return TextView__getLineCount(this); }
    ::app::Android::android::content::res::ColorStateList* getTextColors() { return TextView__getTextColors(this); }
    void removeTextChangedListener(::uObject* arg0) { TextView__removeTextChangedListener(this, arg0); }
    void setEllipsize(::app::Android::android::text::TextUtilsDLRTruncateAt* arg0) { (((TextView__uType*)this->__obj_type)->__fp_setEllipsize)(this, arg0); }
    void setGravity(int arg0) { TextView__setGravity(this, arg0); }
    void setHorizontallyScrolling(bool arg0) { TextView__setHorizontallyScrolling(this, arg0); }
    void setIncludeFontPadding(bool arg0) { TextView__setIncludeFontPadding(this, arg0); }
    void setInputType(int arg0) { TextView__setInputType(this, arg0); }
    void setMaxLines(int arg0) { TextView__setMaxLines(this, arg0); }
    void setOnEditorActionListener(::uObject* arg0) { TextView__setOnEditorActionListener(this, arg0); }
    void setPadding(int arg0, int arg1, int arg2, int arg3) { TextView__setPadding(this, arg0, arg1, arg2, arg3); }
    void setPaddingRelative(int arg0, int arg1, int arg2, int arg3) { TextView__setPaddingRelative(this, arg0, arg1, arg2, arg3); }
    void setText(::uObject* arg0) { TextView__setText(this, arg0); }
    void setTextColor(int arg0) { TextView__setTextColor(this, arg0); }
    void setTextSize(int arg0, float arg1) { TextView__setTextSize(this, arg0, arg1); }
    void setTypeface_1(::app::Android::android::graphics::Typeface* arg0) { TextView__setTypeface_1(this, arg0); }
};

}}}}


#endif
