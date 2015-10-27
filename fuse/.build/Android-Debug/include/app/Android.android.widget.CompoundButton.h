// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_ANDROID_WIDGET_COMPOUND_BUTTON_H__
#define __APP_ANDROID_ANDROID_WIDGET_COMPOUND_BUTTON_H__

#include <app/Android.android.widget.Button.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace android {
namespace widget {

struct CompoundButton;

extern jclass CompoundButton___javaClass_5;
extern jmethodID CompoundButton__setChecked_24931_ID;
extern jmethodID CompoundButton__setOnCheckedChangeListener_24932_ID;

struct CompoundButton__uType : ::app::Android::android::widget::Button__uType
{
    void(*__fp_setChecked)(CompoundButton*, bool);
};

CompoundButton__uType* CompoundButton__typeof();

void CompoundButton___Init_5(::uStatic* __this);
void CompoundButton___ObjInit_18(CompoundButton* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
void CompoundButton__setChecked(CompoundButton* __this, bool arg0);
void CompoundButton__setChecked_IMPL_24931(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_);
void CompoundButton__setOnCheckedChangeListener(CompoundButton* __this, ::uObject* arg0);
void CompoundButton__setOnCheckedChangeListener_IMPL_24932(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);

struct CompoundButton : ::app::Android::android::widget::Button
{
    void _ObjInit_18(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { CompoundButton___ObjInit_18(this, obj, utype, hasFallbackClass, resolveType); }
    void setChecked(bool arg0) { (((CompoundButton__uType*)this->__obj_type)->__fp_setChecked)(this, arg0); }
    void setOnCheckedChangeListener(::uObject* arg0) { CompoundButton__setOnCheckedChangeListener(this, arg0); }
};

}}}}


#endif
