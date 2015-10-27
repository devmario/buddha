#include <app/Android.android.content.Context.h>
#include <app/Android.android.content.res.ColorStateList.h>
#include <app/Android.android.graphics.Bitmap.h>
#include <app/Android.android.graphics.Matrix.h>
#include <app/Android.android.graphics.Typeface.h>
#include <app/Android.android.text.TextUtilsDLRTruncateAt.h>
#include <app/Android.android.text.TextWatcher.h>
#include <app/Android.android.view.KeyEvent.h>
#include <app/Android.android.view.MotionEvent.h>
#include <app/Android.android.view.View.h>
#include <app/Android.android.widget.AbsoluteLayout.h>
#include <app/Android.android.widget.AbsSeekBar.h>
#include <app/Android.android.widget.Button.h>
#include <app/Android.android.widget.CompoundButton.h>
#include <app/Android.android.widget.CompoundButtonDLROnCheckedChangeListener.h>
#include <app/Android.android.widget.EditText.h>
#include <app/Android.android.widget.FrameLayout.h>
#include <app/Android.android.widget.FrameLayoutDLRLayoutParams.h>
#include <app/Android.android.widget.HorizontalScrollView.h>
#include <app/Android.android.widget.ImageView.h>
#include <app/Android.android.widget.ImageViewDLRScaleType.h>
#include <app/Android.android.widget.ProgressBar.h>
#include <app/Android.android.widget.RelativeLayout.h>
#include <app/Android.android.widget.RelativeLayoutDLRLayoutParams.h>
#include <app/Android.android.widget.ScrollView.h>
#include <app/Android.android.widget.SeekBar.h>
#include <app/Android.android.widget.SeekBarDLROnSeekBarChangeListener.h>
#include <app/Android.android.widget.Switch.h>
#include <app/Android.android.widget.TextView.h>
#include <app/Android.android.widget.TextViewDLROnEditorActionListener.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jfieldID.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_widget_AbsSeekBar.h>
#include <app/Android.Fallbacks.Android_android_widget_CompoundButton.h>
#include <app/Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-eb4d489e.h>
#include <app/Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-d93a5fd2.h>
#include <app/Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-e197328f.h>
#include <app/Android.java.lang.CharSequence.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace android {
namespace widget {

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AbsoluteLayout__uType* AbsoluteLayout__typeof()
{
    static ::uStaticStrong<AbsoluteLayout__uType*> type;
    if (type != NULL) return type;

    type = (AbsoluteLayout__uType*)::uAllocClassType(sizeof(AbsoluteLayout__uType), "Android.android.widget.AbsoluteLayout", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::ViewGroup__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(AbsoluteLayout__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(AbsoluteLayout__uType, __interface_1));

    return type;
}

void AbsoluteLayout___ObjInit_12(AbsoluteLayout* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::view::ViewGroup___ObjInit_8(__this, obj, utype, hasFallbackClass, resolveType);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass AbsSeekBar___javaClass_4;
jmethodID AbsSeekBar__onTouchEvent_24551_ID;
jmethodID AbsSeekBar__setMax_24544_ID;

AbsSeekBar__uType* AbsSeekBar__typeof()
{
    static ::uStaticStrong<AbsSeekBar__uType*> type;
    if (type != NULL) return type;

    type = (AbsSeekBar__uType*)::uAllocClassType(sizeof(AbsSeekBar__uType), "Android.android.widget.AbsSeekBar", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::widget::ProgressBar__typeof());
    type->__fp_onTouchEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))AbsSeekBar__onTouchEvent;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(AbsSeekBar__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(AbsSeekBar__uType, __interface_1));

    return type;
}

void AbsSeekBar___Init_4(::uStatic* __this)
{
    if (::app::Android::android::widget::AbsSeekBar___javaClass_4) { return; }
    INIT_JNI;
    ::app::Android::android::widget::AbsSeekBar___javaClass_4 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/AbsSeekBar"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::AbsSeekBar___javaClass_4) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.AbsSeekBar'", 49);; }
}

void AbsSeekBar___ObjInit_14(AbsSeekBar* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::widget::ProgressBar___ObjInit_8(__this, obj, utype, hasFallbackClass, resolveType);
}

bool AbsSeekBar__onTouchEvent(AbsSeekBar* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return AbsSeekBar__onTouchEvent_IMPL_24551(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool AbsSeekBar__onTouchEvent_IMPL_24551(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__onTouchEvent_24551_ID,::app::Android::android::widget::AbsSeekBar___javaClass_4,"onTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.onTouchEvent could not be cached",81);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__onTouchEvent_24551_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::AbsSeekBar__onTouchEvent_24551_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void AbsSeekBar__setMax(AbsSeekBar* __this, int arg0)
{
    AbsSeekBar__setMax_IMPL_24544(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void AbsSeekBar__setMax_IMPL_24544(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::AbsSeekBar___javaClass_4,::app::Android::android::widget::AbsSeekBar___Init_4(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::AbsSeekBar__setMax_24544_ID,::app::Android::android::widget::AbsSeekBar___javaClass_4,"setMax","(I)V",GetMethodID,"Id for fallback method android.widget.AbsSeekBar.setMax could not be cached",75);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar___javaClass_4, ::app::Android::android::widget::AbsSeekBar__setMax_24544_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::AbsSeekBar__setMax_24544_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Button___javaClass_4;
jmethodID Button__Button_24840_ID_c;

Button__uType* Button__typeof()
{
    static ::uStaticStrong<Button__uType*> type;
    if (type != NULL) return type;

    type = (Button__uType*)::uAllocClassType(sizeof(Button__uType), "Android.android.widget.Button", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::widget::TextView__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Button__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Button__uType, __interface_1));

    return type;
}

void Button___Init_4(::uStatic* __this)
{
    if (::app::Android::android::widget::Button___javaClass_4) { return; }
    INIT_JNI;
    ::app::Android::android::widget::Button___javaClass_4 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/Button"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::Button___javaClass_4) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.Button'", 45);; }
}

void Button___ObjInit_14(Button* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::widget::TextView___ObjInit_11(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::Button___javaClass_4,::app::Android::android::widget::Button___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::widget::Button__Button_24840_ID_c,::app::Android::android::widget::Button___javaClass_4,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.Button.<init> could not be cached",71);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::Button___javaClass_4, ::app::Android::android::widget::Button__Button_24840_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void Button___ObjInit_15(Button* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::widget::TextView___ObjInit_11(__this, obj, utype, hasFallbackClass, resolveType);
}

Button* Button__New_14(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    Button* inst = (Button*)::uAllocObject(sizeof(Button), Button__typeof());
    inst->_ObjInit_14(arg0);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass CompoundButton___javaClass_5;
jmethodID CompoundButton__setChecked_24931_ID;
jmethodID CompoundButton__setOnCheckedChangeListener_24932_ID;

CompoundButton__uType* CompoundButton__typeof()
{
    static ::uStaticStrong<CompoundButton__uType*> type;
    if (type != NULL) return type;

    type = (CompoundButton__uType*)::uAllocClassType(sizeof(CompoundButton__uType), "Android.android.widget.CompoundButton", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::widget::Button__typeof());
    type->__fp_setChecked = CompoundButton__setChecked;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(CompoundButton__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(CompoundButton__uType, __interface_1));

    return type;
}

void CompoundButton___Init_5(::uStatic* __this)
{
    if (::app::Android::android::widget::CompoundButton___javaClass_5) { return; }
    INIT_JNI;
    ::app::Android::android::widget::CompoundButton___javaClass_5 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/CompoundButton"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::CompoundButton___javaClass_5) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.CompoundButton'", 53);; }
}

void CompoundButton___ObjInit_18(CompoundButton* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::widget::Button___ObjInit_15(__this, obj, utype, hasFallbackClass, resolveType);
}

void CompoundButton__setChecked(CompoundButton* __this, bool arg0)
{
    CompoundButton__setChecked_IMPL_24931(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void CompoundButton__setChecked_IMPL_24931(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::CompoundButton___javaClass_5,::app::Android::android::widget::CompoundButton___Init_5(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::CompoundButton__setChecked_24931_ID,::app::Android::android::widget::CompoundButton___javaClass_5,"setChecked","(Z)V",GetMethodID,"Id for fallback method android.widget.CompoundButton.setChecked could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::CompoundButton___javaClass_5, ::app::Android::android::widget::CompoundButton__setChecked_24931_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::CompoundButton__setChecked_24931_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void CompoundButton__setOnCheckedChangeListener(CompoundButton* __this, ::uObject* arg0)
{
    CompoundButton__setOnCheckedChangeListener_IMPL_24932(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void CompoundButton__setOnCheckedChangeListener_IMPL_24932(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::CompoundButton___javaClass_5,::app::Android::android::widget::CompoundButton___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::CompoundButton__setOnCheckedChangeListener_24932_ID,::app::Android::android::widget::CompoundButton___javaClass_5,"setOnCheckedChangeListener","(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V",GetMethodID,"Id for fallback method android.widget.CompoundButton.setOnCheckedChangeListener could not be cached",99);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::CompoundButton___javaClass_5, ::app::Android::android::widget::CompoundButton__setOnCheckedChangeListener_24932_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::CompoundButton__setOnCheckedChangeListener_24932_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* CompoundButtonDLROnCheckedChangeListener__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.widget.CompoundButtonDLROnCheckedChangeListener");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass EditText___javaClass_4;
jmethodID EditText__EditText_25066_ID_c;
jmethodID EditText__setEllipsize_25077_ID;

EditText__uType* EditText__typeof()
{
    static ::uStaticStrong<EditText__uType*> type;
    if (type != NULL) return type;

    type = (EditText__uType*)::uAllocClassType(sizeof(EditText__uType), "Android.android.widget.EditText", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::widget::TextView__typeof());
    type->__fp_setEllipsize = (void(*)(::app::Android::android::widget::TextView*, ::app::Android::android::text::TextUtilsDLRTruncateAt*))EditText__setEllipsize;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(EditText__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(EditText__uType, __interface_1));

    return type;
}

void EditText___Init_4(::uStatic* __this)
{
    if (::app::Android::android::widget::EditText___javaClass_4) { return; }
    INIT_JNI;
    ::app::Android::android::widget::EditText___javaClass_4 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/EditText"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::EditText___javaClass_4) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.EditText'", 47);; }
}

void EditText___ObjInit_14(EditText* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::widget::TextView___ObjInit_11(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::EditText___javaClass_4,::app::Android::android::widget::EditText___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::widget::EditText__EditText_25066_ID_c,::app::Android::android::widget::EditText___javaClass_4,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.EditText.<init> could not be cached",73);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::EditText___javaClass_4, ::app::Android::android::widget::EditText__EditText_25066_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

EditText* EditText__New_14(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    EditText* inst = (EditText*)::uAllocObject(sizeof(EditText), EditText__typeof());
    inst->_ObjInit_14(arg0);
    return inst;
}

void EditText__setEllipsize(EditText* __this, ::app::Android::android::text::TextUtilsDLRTruncateAt* arg0)
{
    EditText__setEllipsize_IMPL_25077(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void EditText__setEllipsize_IMPL_25077(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::EditText___javaClass_4,::app::Android::android::widget::EditText___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::EditText__setEllipsize_25077_ID,::app::Android::android::widget::EditText___javaClass_4,"setEllipsize","(Landroid/text/TextUtils$TruncateAt;)V",GetMethodID,"Id for fallback method android.widget.EditText.setEllipsize could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::EditText___javaClass_4, ::app::Android::android::widget::EditText__setEllipsize_25077_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::EditText__setEllipsize_25077_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass FrameLayout___javaClass_4;
jmethodID FrameLayout__FrameLayout_25171_ID_c;

FrameLayout__uType* FrameLayout__typeof()
{
    static ::uStaticStrong<FrameLayout__uType*> type;
    if (type != NULL) return type;

    type = (FrameLayout__uType*)::uAllocClassType(sizeof(FrameLayout__uType), "Android.android.widget.FrameLayout", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::ViewGroup__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(FrameLayout__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(FrameLayout__uType, __interface_1));

    return type;
}

void FrameLayout___Init_4(::uStatic* __this)
{
    if (::app::Android::android::widget::FrameLayout___javaClass_4) { return; }
    INIT_JNI;
    ::app::Android::android::widget::FrameLayout___javaClass_4 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/FrameLayout"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::FrameLayout___javaClass_4) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.FrameLayout'", 50);; }
}

void FrameLayout___ObjInit_14(FrameLayout* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::view::ViewGroup___ObjInit_8(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::FrameLayout___javaClass_4,::app::Android::android::widget::FrameLayout___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::widget::FrameLayout__FrameLayout_25171_ID_c,::app::Android::android::widget::FrameLayout___javaClass_4,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.FrameLayout.<init> could not be cached",76);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::FrameLayout___javaClass_4, ::app::Android::android::widget::FrameLayout__FrameLayout_25171_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void FrameLayout___ObjInit_15(FrameLayout* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::view::ViewGroup___ObjInit_8(__this, obj, utype, hasFallbackClass, resolveType);
}

FrameLayout* FrameLayout__New_10(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    FrameLayout* inst = (FrameLayout*)::uAllocObject(sizeof(FrameLayout), FrameLayout__typeof());
    inst->_ObjInit_14(arg0);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass FrameLayoutDLRLayoutParams___javaClass_4;
jmethodID FrameLayoutDLRLayoutParams__FrameLayoutDLRLayoutParams_25166_ID_c;

FrameLayoutDLRLayoutParams__uType* FrameLayoutDLRLayoutParams__typeof()
{
    static ::uStaticStrong<FrameLayoutDLRLayoutParams__uType*> type;
    if (type != NULL) return type;

    type = (FrameLayoutDLRLayoutParams__uType*)::uAllocClassType(sizeof(FrameLayoutDLRLayoutParams__uType), "Android.android.widget.FrameLayoutDLRLayoutParams", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::ViewGroupDLRMarginLayoutParams__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(FrameLayoutDLRLayoutParams__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(FrameLayoutDLRLayoutParams__uType, __interface_1));

    return type;
}

void FrameLayoutDLRLayoutParams___Init_4(::uStatic* __this)
{
    if (::app::Android::android::widget::FrameLayoutDLRLayoutParams___javaClass_4) { return; }
    INIT_JNI;
    ::app::Android::android::widget::FrameLayoutDLRLayoutParams___javaClass_4 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/FrameLayout$LayoutParams"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::FrameLayoutDLRLayoutParams___javaClass_4) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.FrameLayout$LayoutParams'", 63);; }
}

void FrameLayoutDLRLayoutParams___ObjInit_19(FrameLayoutDLRLayoutParams* __this, int arg0, int arg1)
{
    ::app::Android::android::view::ViewGroupDLRMarginLayoutParams___ObjInit_8(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::FrameLayoutDLRLayoutParams___javaClass_4,::app::Android::android::widget::FrameLayoutDLRLayoutParams___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::widget::FrameLayoutDLRLayoutParams__FrameLayoutDLRLayoutParams_25166_ID_c,::app::Android::android::widget::FrameLayoutDLRLayoutParams___javaClass_4,"<init>","(II)V",GetMethodID,"Id for fallback method android.widget.FrameLayout$LayoutParams.<init> could not be cached",89);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::FrameLayoutDLRLayoutParams___javaClass_4, ::app::Android::android::widget::FrameLayoutDLRLayoutParams__FrameLayoutDLRLayoutParams_25166_ID_c, ((jint)arg0), ((jint)arg1));;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

FrameLayoutDLRLayoutParams* FrameLayoutDLRLayoutParams__New_19(::uStatic* __this, int arg0, int arg1)
{
    FrameLayoutDLRLayoutParams* inst = (FrameLayoutDLRLayoutParams*)::uAllocObject(sizeof(FrameLayoutDLRLayoutParams), FrameLayoutDLRLayoutParams__typeof());
    inst->_ObjInit_19(arg0, arg1);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass HorizontalScrollView___javaClass_5;
jmethodID HorizontalScrollView__addView_25366_ID;
jmethodID HorizontalScrollView__addView_25367_ID;
jmethodID HorizontalScrollView__onInterceptTouchEvent_25378_ID;
jmethodID HorizontalScrollView__onTouchEvent_25379_ID;

HorizontalScrollView__uType* HorizontalScrollView__typeof()
{
    static ::uStaticStrong<HorizontalScrollView__uType*> type;
    if (type != NULL) return type;

    type = (HorizontalScrollView__uType*)::uAllocClassType(sizeof(HorizontalScrollView__uType), "Android.android.widget.HorizontalScrollView", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::widget::FrameLayout__typeof());
    type->__fp_addView = (void(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::View*))HorizontalScrollView__addView;
    type->__fp_addView_1 = (void(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::View*, int))HorizontalScrollView__addView_1;
    type->__fp_onInterceptTouchEvent = (bool(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::MotionEvent*))HorizontalScrollView__onInterceptTouchEvent;
    type->__fp_onTouchEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))HorizontalScrollView__onTouchEvent;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(HorizontalScrollView__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(HorizontalScrollView__uType, __interface_1));

    return type;
}

void HorizontalScrollView___Init_5(::uStatic* __this)
{
    if (::app::Android::android::widget::HorizontalScrollView___javaClass_5) { return; }
    INIT_JNI;
    ::app::Android::android::widget::HorizontalScrollView___javaClass_5 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/HorizontalScrollView"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::HorizontalScrollView___javaClass_5) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.HorizontalScrollView'", 59);; }
}

void HorizontalScrollView___ObjInit_16(HorizontalScrollView* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::widget::FrameLayout___ObjInit_15(__this, obj, utype, hasFallbackClass, resolveType);
}

void HorizontalScrollView__addView(HorizontalScrollView* __this, ::app::Android::android::view::View* arg0)
{
    HorizontalScrollView__addView_IMPL_25366(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void HorizontalScrollView__addView_1(HorizontalScrollView* __this, ::app::Android::android::view::View* arg0, int arg1)
{
    HorizontalScrollView__addView_IMPL_25367(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void HorizontalScrollView__addView_IMPL_25366(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__addView_25366_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"addView","(Landroid/view/View;)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.addView could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__addView_25366_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__addView_25366_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void HorizontalScrollView__addView_IMPL_25367(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__addView_25367_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"addView","(Landroid/view/View;I)V",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.addView could not be cached",86);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__addView_25367_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__addView_25367_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

bool HorizontalScrollView__onInterceptTouchEvent(HorizontalScrollView* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return HorizontalScrollView__onInterceptTouchEvent_IMPL_25378(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool HorizontalScrollView__onInterceptTouchEvent_IMPL_25378(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__onInterceptTouchEvent_25378_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"onInterceptTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onInterceptTouchEvent could not be cached",100);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__onInterceptTouchEvent_25378_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__onInterceptTouchEvent_25378_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool HorizontalScrollView__onTouchEvent(HorizontalScrollView* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return HorizontalScrollView__onTouchEvent_IMPL_25379(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool HorizontalScrollView__onTouchEvent_IMPL_25379(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::HorizontalScrollView___javaClass_5,::app::Android::android::widget::HorizontalScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::HorizontalScrollView__onTouchEvent_25379_ID,::app::Android::android::widget::HorizontalScrollView___javaClass_5,"onTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.HorizontalScrollView.onTouchEvent could not be cached",91);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView___javaClass_5, ::app::Android::android::widget::HorizontalScrollView__onTouchEvent_25379_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::HorizontalScrollView__onTouchEvent_25379_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ImageView___javaClass_3;
jmethodID ImageView__ImageView_25432_ID_c;
jmethodID ImageView__setImageBitmap_25450_ID;
jmethodID ImageView__setImageMatrix_25457_ID;
jmethodID ImageView__setScaleType_25454_ID;

ImageView__uType* ImageView__typeof()
{
    static ::uStaticStrong<ImageView__uType*> type;
    if (type != NULL) return type;

    type = (ImageView__uType*)::uAllocClassType(sizeof(ImageView__uType), "Android.android.widget.ImageView", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::View__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ImageView__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ImageView__uType, __interface_1));

    return type;
}

void ImageView___Init_3(::uStatic* __this)
{
    if (::app::Android::android::widget::ImageView___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::widget::ImageView___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/ImageView"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::ImageView___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.ImageView'", 48);; }
}

void ImageView___ObjInit_11(ImageView* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::view::View___ObjInit_7(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));;
    CACHE_METHOD(::app::Android::android::widget::ImageView__ImageView_25432_ID_c,::app::Android::android::widget::ImageView___javaClass_3,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.ImageView.<init> could not be cached",74);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__ImageView_25432_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

ImageView* ImageView__New_10(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    ImageView* inst = (ImageView*)::uAllocObject(sizeof(ImageView), ImageView__typeof());
    inst->_ObjInit_11(arg0);
    return inst;
}

void ImageView__setImageBitmap(ImageView* __this, ::app::Android::android::graphics::Bitmap* arg0)
{
    ImageView__setImageBitmap_IMPL_25450(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ImageView__setImageBitmap_IMPL_25450(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ImageView__setImageBitmap_25450_ID,::app::Android::android::widget::ImageView___javaClass_3,"setImageBitmap","(Landroid/graphics/Bitmap;)V",GetMethodID,"Id for fallback method android.widget.ImageView.setImageBitmap could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__setImageBitmap_25450_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ImageView__setImageBitmap_25450_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void ImageView__setImageMatrix(ImageView* __this, ::app::Android::android::graphics::Matrix* arg0)
{
    ImageView__setImageMatrix_IMPL_25457(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ImageView__setImageMatrix_IMPL_25457(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ImageView__setImageMatrix_25457_ID,::app::Android::android::widget::ImageView___javaClass_3,"setImageMatrix","(Landroid/graphics/Matrix;)V",GetMethodID,"Id for fallback method android.widget.ImageView.setImageMatrix could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__setImageMatrix_25457_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ImageView__setImageMatrix_25457_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void ImageView__setScaleType(ImageView* __this, ::app::Android::android::widget::ImageViewDLRScaleType* arg0)
{
    ImageView__setScaleType_IMPL_25454(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ImageView__setScaleType_IMPL_25454(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageView___javaClass_3,::app::Android::android::widget::ImageView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ImageView__setScaleType_25454_ID,::app::Android::android::widget::ImageView___javaClass_3,"setScaleType","(Landroid/widget/ImageView$ScaleType;)V",GetMethodID,"Id for fallback method android.widget.ImageView.setScaleType could not be cached",80);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ImageView___javaClass_3, ::app::Android::android::widget::ImageView__setScaleType_25454_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ImageView__setScaleType_25454_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ImageViewDLRScaleType___javaClass_3;
jfieldID ImageViewDLRScaleType__MATRIX_25429_ID;

ImageViewDLRScaleType__uType* ImageViewDLRScaleType__typeof()
{
    static ::uStaticStrong<ImageViewDLRScaleType__uType*> type;
    if (type != NULL) return type;

    type = (ImageViewDLRScaleType__uType*)::uAllocClassType(sizeof(ImageViewDLRScaleType__uType), "Android.android.widget.ImageViewDLRScaleType", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ImageViewDLRScaleType__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ImageViewDLRScaleType__uType, __interface_1));

    return type;
}

void ImageViewDLRScaleType___Init_3(::uStatic* __this)
{
    if (::app::Android::android::widget::ImageViewDLRScaleType___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::widget::ImageViewDLRScaleType___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/ImageView$ScaleType"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::ImageViewDLRScaleType___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.ImageView$ScaleType'", 58);; }
}

ImageViewDLRScaleType* ImageViewDLRScaleType__get_MATRIX(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ImageViewDLRScaleType___javaClass_3,::app::Android::android::widget::ImageViewDLRScaleType___Init_3(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::widget::ImageViewDLRScaleType__MATRIX_25429_ID)) {;
    CACHE_FIELD(::app::Android::android::widget::ImageViewDLRScaleType__MATRIX_25429_ID,::app::Android::android::widget::ImageViewDLRScaleType___javaClass_3,"MATRIX","Landroid/widget/ImageView$ScaleType;",GetStaticFieldID,"Id for field ImageViewDLRScaleType.MATRIX could not be cached",61);
    ::uExitCritical();;
    };
    ImageViewDLRScaleType* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::widget::ImageViewDLRScaleType___javaClass_3, ::app::Android::android::widget::ImageViewDLRScaleType__MATRIX_25429_ID),result,::app::Android::android::widget::ImageViewDLRScaleType__typeof(),ImageViewDLRScaleType*,false,true);;
    return ::uCast< ImageViewDLRScaleType*>(result, ImageViewDLRScaleType__typeof());
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ProgressBar___javaClass_3;
jmethodID ProgressBar__setProgress_25844_ID;

ProgressBar__uType* ProgressBar__typeof()
{
    static ::uStaticStrong<ProgressBar__uType*> type;
    if (type != NULL) return type;

    type = (ProgressBar__uType*)::uAllocClassType(sizeof(ProgressBar__uType), "Android.android.widget.ProgressBar", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::View__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ProgressBar__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ProgressBar__uType, __interface_1));

    return type;
}

void ProgressBar___Init_3(::uStatic* __this)
{
    if (::app::Android::android::widget::ProgressBar___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::widget::ProgressBar___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/ProgressBar"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::ProgressBar___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.ProgressBar'", 50);; }
}

void ProgressBar___ObjInit_8(ProgressBar* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::view::View___ObjInit_7(__this, obj, utype, hasFallbackClass, resolveType);
}

void ProgressBar__setProgress(ProgressBar* __this, int arg0)
{
    ProgressBar__setProgress_IMPL_25844(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void ProgressBar__setProgress_IMPL_25844(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ProgressBar___javaClass_3,::app::Android::android::widget::ProgressBar___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::ProgressBar__setProgress_25844_ID,::app::Android::android::widget::ProgressBar___javaClass_3,"setProgress","(I)V",GetMethodID,"Id for fallback method android.widget.ProgressBar.setProgress could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar___javaClass_3, ::app::Android::android::widget::ProgressBar__setProgress_25844_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ProgressBar__setProgress_25844_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass RelativeLayout___javaClass_4;
jmethodID RelativeLayout__RelativeLayout_25964_ID_c;

RelativeLayout__uType* RelativeLayout__typeof()
{
    static ::uStaticStrong<RelativeLayout__uType*> type;
    if (type != NULL) return type;

    type = (RelativeLayout__uType*)::uAllocClassType(sizeof(RelativeLayout__uType), "Android.android.widget.RelativeLayout", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::ViewGroup__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(RelativeLayout__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(RelativeLayout__uType, __interface_1));

    return type;
}

void RelativeLayout___Init_4(::uStatic* __this)
{
    if (::app::Android::android::widget::RelativeLayout___javaClass_4) { return; }
    INIT_JNI;
    ::app::Android::android::widget::RelativeLayout___javaClass_4 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/RelativeLayout"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::RelativeLayout___javaClass_4) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.RelativeLayout'", 53);; }
}

void RelativeLayout___ObjInit_14(RelativeLayout* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::view::ViewGroup___ObjInit_8(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::RelativeLayout___javaClass_4,::app::Android::android::widget::RelativeLayout___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::widget::RelativeLayout__RelativeLayout_25964_ID_c,::app::Android::android::widget::RelativeLayout___javaClass_4,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout.<init> could not be cached",79);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::RelativeLayout___javaClass_4, ::app::Android::android::widget::RelativeLayout__RelativeLayout_25964_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void RelativeLayout___ObjInit_15(RelativeLayout* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::view::ViewGroup___ObjInit_8(__this, obj, utype, hasFallbackClass, resolveType);
}

RelativeLayout* RelativeLayout__New_10(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    RelativeLayout* inst = (RelativeLayout*)::uAllocObject(sizeof(RelativeLayout), RelativeLayout__typeof());
    inst->_ObjInit_14(arg0);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass RelativeLayoutDLRLayoutParams___javaClass_4;
jmethodID RelativeLayoutDLRLayoutParams__RelativeLayoutDLRLayoutParams_25931_ID_c;

RelativeLayoutDLRLayoutParams__uType* RelativeLayoutDLRLayoutParams__typeof()
{
    static ::uStaticStrong<RelativeLayoutDLRLayoutParams__uType*> type;
    if (type != NULL) return type;

    type = (RelativeLayoutDLRLayoutParams__uType*)::uAllocClassType(sizeof(RelativeLayoutDLRLayoutParams__uType), "Android.android.widget.RelativeLayoutDLRLayoutParams", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::ViewGroupDLRMarginLayoutParams__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(RelativeLayoutDLRLayoutParams__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(RelativeLayoutDLRLayoutParams__uType, __interface_1));

    return type;
}

void RelativeLayoutDLRLayoutParams___Init_4(::uStatic* __this)
{
    if (::app::Android::android::widget::RelativeLayoutDLRLayoutParams___javaClass_4) { return; }
    INIT_JNI;
    ::app::Android::android::widget::RelativeLayoutDLRLayoutParams___javaClass_4 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/RelativeLayout$LayoutParams"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::RelativeLayoutDLRLayoutParams___javaClass_4) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.RelativeLayout$LayoutParams'", 66);; }
}

void RelativeLayoutDLRLayoutParams___ObjInit_15(RelativeLayoutDLRLayoutParams* __this, int arg0, int arg1)
{
    ::app::Android::android::view::ViewGroupDLRMarginLayoutParams___ObjInit_8(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::RelativeLayoutDLRLayoutParams___javaClass_4,::app::Android::android::widget::RelativeLayoutDLRLayoutParams___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::widget::RelativeLayoutDLRLayoutParams__RelativeLayoutDLRLayoutParams_25931_ID_c,::app::Android::android::widget::RelativeLayoutDLRLayoutParams___javaClass_4,"<init>","(II)V",GetMethodID,"Id for fallback method android.widget.RelativeLayout$LayoutParams.<init> could not be cached",92);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::RelativeLayoutDLRLayoutParams___javaClass_4, ::app::Android::android::widget::RelativeLayoutDLRLayoutParams__RelativeLayoutDLRLayoutParams_25931_ID_c, ((jint)arg0), ((jint)arg1));;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

RelativeLayoutDLRLayoutParams* RelativeLayoutDLRLayoutParams__New_16(::uStatic* __this, int arg0, int arg1)
{
    RelativeLayoutDLRLayoutParams* inst = (RelativeLayoutDLRLayoutParams*)::uAllocObject(sizeof(RelativeLayoutDLRLayoutParams), RelativeLayoutDLRLayoutParams__typeof());
    inst->_ObjInit_15(arg0, arg1);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ScrollView___javaClass_5;
jmethodID ScrollView__addView_26070_ID;
jmethodID ScrollView__addView_26071_ID;
jmethodID ScrollView__onInterceptTouchEvent_26082_ID;
jmethodID ScrollView__onTouchEvent_26083_ID;

ScrollView__uType* ScrollView__typeof()
{
    static ::uStaticStrong<ScrollView__uType*> type;
    if (type != NULL) return type;

    type = (ScrollView__uType*)::uAllocClassType(sizeof(ScrollView__uType), "Android.android.widget.ScrollView", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::widget::FrameLayout__typeof());
    type->__fp_addView = (void(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::View*))ScrollView__addView;
    type->__fp_addView_1 = (void(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::View*, int))ScrollView__addView_1;
    type->__fp_onInterceptTouchEvent = (bool(*)(::app::Android::android::view::ViewGroup*, ::app::Android::android::view::MotionEvent*))ScrollView__onInterceptTouchEvent;
    type->__fp_onTouchEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))ScrollView__onTouchEvent;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ScrollView__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ScrollView__uType, __interface_1));

    return type;
}

void ScrollView___Init_5(::uStatic* __this)
{
    if (::app::Android::android::widget::ScrollView___javaClass_5) { return; }
    INIT_JNI;
    ::app::Android::android::widget::ScrollView___javaClass_5 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/ScrollView"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::ScrollView___javaClass_5) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.ScrollView'", 49);; }
}

void ScrollView___ObjInit_16(ScrollView* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::widget::FrameLayout___ObjInit_15(__this, obj, utype, hasFallbackClass, resolveType);
}

void ScrollView__addView(ScrollView* __this, ::app::Android::android::view::View* arg0)
{
    ScrollView__addView_IMPL_26070(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ScrollView__addView_1(ScrollView* __this, ::app::Android::android::view::View* arg0, int arg1)
{
    ScrollView__addView_IMPL_26071(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void ScrollView__addView_IMPL_26070(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ScrollView__addView_26070_ID,::app::Android::android::widget::ScrollView___javaClass_5,"addView","(Landroid/view/View;)V",GetMethodID,"Id for fallback method android.widget.ScrollView.addView could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__addView_26070_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__addView_26070_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void ScrollView__addView_IMPL_26071(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::ScrollView__addView_26071_ID,::app::Android::android::widget::ScrollView___javaClass_5,"addView","(Landroid/view/View;I)V",GetMethodID,"Id for fallback method android.widget.ScrollView.addView could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__addView_26071_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::ScrollView__addView_26071_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

bool ScrollView__onInterceptTouchEvent(ScrollView* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return ScrollView__onInterceptTouchEvent_IMPL_26082(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool ScrollView__onInterceptTouchEvent_IMPL_26082(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__onInterceptTouchEvent_26082_ID,::app::Android::android::widget::ScrollView___javaClass_5,"onInterceptTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.onInterceptTouchEvent could not be cached",90);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__onInterceptTouchEvent_26082_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView__onInterceptTouchEvent_26082_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool ScrollView__onTouchEvent(ScrollView* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return ScrollView__onTouchEvent_IMPL_26083(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool ScrollView__onTouchEvent_IMPL_26083(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::ScrollView___javaClass_5,::app::Android::android::widget::ScrollView___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::ScrollView__onTouchEvent_26083_ID,::app::Android::android::widget::ScrollView___javaClass_5,"onTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.ScrollView.onTouchEvent could not be cached",81);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView___javaClass_5, ::app::Android::android::widget::ScrollView__onTouchEvent_26083_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::ScrollView__onTouchEvent_26083_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass SeekBar___javaClass_5;
jmethodID SeekBar__setOnSeekBarChangeListener_26187_ID;

SeekBar__uType* SeekBar__typeof()
{
    static ::uStaticStrong<SeekBar__uType*> type;
    if (type != NULL) return type;

    type = (SeekBar__uType*)::uAllocClassType(sizeof(SeekBar__uType), "Android.android.widget.SeekBar", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::widget::AbsSeekBar__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(SeekBar__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(SeekBar__uType, __interface_1));

    return type;
}

void SeekBar___Init_5(::uStatic* __this)
{
    if (::app::Android::android::widget::SeekBar___javaClass_5) { return; }
    INIT_JNI;
    ::app::Android::android::widget::SeekBar___javaClass_5 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/SeekBar"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::SeekBar___javaClass_5) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.SeekBar'", 46);; }
}

void SeekBar___ObjInit_19(SeekBar* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::widget::AbsSeekBar___ObjInit_14(__this, obj, utype, hasFallbackClass, resolveType);
}

void SeekBar__setOnSeekBarChangeListener(SeekBar* __this, ::uObject* arg0)
{
    SeekBar__setOnSeekBarChangeListener_IMPL_26187(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void SeekBar__setOnSeekBarChangeListener_IMPL_26187(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::SeekBar___javaClass_5,::app::Android::android::widget::SeekBar___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::SeekBar__setOnSeekBarChangeListener_26187_ID,::app::Android::android::widget::SeekBar___javaClass_5,"setOnSeekBarChangeListener","(Landroid/widget/SeekBar$OnSeekBarChangeListener;)V",GetMethodID,"Id for fallback method android.widget.SeekBar.setOnSeekBarChangeListener could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::SeekBar___javaClass_5, ::app::Android::android::widget::SeekBar__setOnSeekBarChangeListener_26187_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::SeekBar__setOnSeekBarChangeListener_26187_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* SeekBarDLROnSeekBarChangeListener__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.widget.SeekBarDLROnSeekBarChangeListener");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Switch___javaClass_6;
jmethodID Switch__onTouchEvent_26365_ID;
jmethodID Switch__setChecked_26366_ID;
jmethodID Switch__Switch_26341_ID_c;

Switch__uType* Switch__typeof()
{
    static ::uStaticStrong<Switch__uType*> type;
    if (type != NULL) return type;

    type = (Switch__uType*)::uAllocClassType(sizeof(Switch__uType), "Android.android.widget.Switch", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::widget::CompoundButton__typeof());
    type->__fp_onTouchEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))Switch__onTouchEvent;
    type->__fp_setChecked = (void(*)(::app::Android::android::widget::CompoundButton*, bool))Switch__setChecked;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Switch__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Switch__uType, __interface_1));

    return type;
}

void Switch___Init_6(::uStatic* __this)
{
    if (::app::Android::android::widget::Switch___javaClass_6) { return; }
    INIT_JNI;
    ::app::Android::android::widget::Switch___javaClass_6 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/Switch"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::Switch___javaClass_6) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.Switch'", 45);; }
}

void Switch___ObjInit_21(Switch* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::widget::CompoundButton___ObjInit_18(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::Switch___javaClass_6,::app::Android::android::widget::Switch___Init_6(NULL));;
    CACHE_METHOD(::app::Android::android::widget::Switch__Switch_26341_ID_c,::app::Android::android::widget::Switch___javaClass_6,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.Switch.<init> could not be cached",71);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::Switch___javaClass_6, ::app::Android::android::widget::Switch__Switch_26341_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

Switch* Switch__New_18(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    Switch* inst = (Switch*)::uAllocObject(sizeof(Switch), Switch__typeof());
    inst->_ObjInit_21(arg0);
    return inst;
}

bool Switch__onTouchEvent(Switch* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return Switch__onTouchEvent_IMPL_26365(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Switch__onTouchEvent_IMPL_26365(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::Switch___javaClass_6,::app::Android::android::widget::Switch___Init_6(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::Switch__onTouchEvent_26365_ID,::app::Android::android::widget::Switch___javaClass_6,"onTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.Switch.onTouchEvent could not be cached",77);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::Switch___javaClass_6, ::app::Android::android::widget::Switch__onTouchEvent_26365_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::Switch__onTouchEvent_26365_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void Switch__setChecked(Switch* __this, bool arg0)
{
    Switch__setChecked_IMPL_26366(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Switch__setChecked_IMPL_26366(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::Switch___javaClass_6,::app::Android::android::widget::Switch___Init_6(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::Switch__setChecked_26366_ID,::app::Android::android::widget::Switch___javaClass_6,"setChecked","(Z)V",GetMethodID,"Id for fallback method android.widget.Switch.setChecked could not be cached",75);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::Switch___javaClass_6, ::app::Android::android::widget::Switch__setChecked_26366_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::Switch__setChecked_26366_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass TextView___javaClass_3;
jmethodID TextView__addTextChangedListener_26729_ID;
jmethodID TextView__getLineCount_26688_ID;
jmethodID TextView__getTextColors_26582_ID;
jmethodID TextView__onScrollChanged_26761_ID;
jmethodID TextView__onTouchEvent_26738_ID;
jmethodID TextView__removeTextChangedListener_26730_ID;
jmethodID TextView__setEllipsize_26720_ID;
jmethodID TextView__setEnabled_26528_ID;
jmethodID TextView__setGravity_26603_ID;
jmethodID TextView__setHorizontallyScrolling_26607_ID;
jmethodID TextView__setIncludeFontPadding_26706_ID;
jmethodID TextView__setInputType_26650_ID;
jmethodID TextView__setMaxLines_26612_ID;
jmethodID TextView__setOnEditorActionListener_26658_ID;
jmethodID TextView__setPadding_26567_ID;
jmethodID TextView__setPaddingRelative_26568_ID;
jmethodID TextView__setText_26640_ID;
jmethodID TextView__setTextColor_26580_ID;
jmethodID TextView__setTextSize_26575_ID;
jmethodID TextView__setTypeface_26578_ID;
jmethodID TextView__TextView_26525_ID_c;

TextView__uType* TextView__typeof()
{
    static ::uStaticStrong<TextView__uType*> type;
    if (type != NULL) return type;

    type = (TextView__uType*)::uAllocClassType(sizeof(TextView__uType), "Android.android.widget.TextView", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::View__typeof());
    type->__fp_onScrollChanged = (void(*)(::app::Android::android::view::View*, int, int, int, int))TextView__onScrollChanged;
    type->__fp_onTouchEvent = (bool(*)(::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))TextView__onTouchEvent;
    type->__fp_setEllipsize = TextView__setEllipsize;
    type->__fp_setEnabled = (void(*)(::app::Android::android::view::View*, bool))TextView__setEnabled;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(TextView__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(TextView__uType, __interface_1));

    return type;
}

void TextView___Init_3(::uStatic* __this)
{
    if (::app::Android::android::widget::TextView___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::widget::TextView___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/widget/TextView"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::widget::TextView___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.widget.TextView'", 47);; }
}

void TextView___ObjInit_10(TextView* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::view::View___ObjInit_7(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));;
    CACHE_METHOD(::app::Android::android::widget::TextView__TextView_26525_ID_c,::app::Android::android::widget::TextView___javaClass_3,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.widget.TextView.<init> could not be cached",73);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__TextView_26525_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void TextView___ObjInit_11(TextView* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::view::View___ObjInit_7(__this, obj, utype, hasFallbackClass, resolveType);
}

void TextView__addTextChangedListener(TextView* __this, ::uObject* arg0)
{
    TextView__addTextChangedListener_IMPL_26729(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void TextView__addTextChangedListener_IMPL_26729(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::TextView__addTextChangedListener_26729_ID,::app::Android::android::widget::TextView___javaClass_3,"addTextChangedListener","(Landroid/text/TextWatcher;)V",GetMethodID,"Id for fallback method android.widget.TextView.addTextChangedListener could not be cached",89);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__addTextChangedListener_26729_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__addTextChangedListener_26729_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

int TextView__getLineCount(TextView* __this)
{
    return TextView__getLineCount_IMPL_26688(NULL, __this->_subclassed, __this->_javaObject);
}

int TextView__getLineCount_IMPL_26688(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::widget::TextView__getLineCount_26688_ID,::app::Android::android::widget::TextView___javaClass_3,"getLineCount","()I",GetMethodID,"Id for fallback method android.widget.TextView.getLineCount could not be cached",79);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__getLineCount_26688_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::widget::TextView__getLineCount_26688_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::content::res::ColorStateList* TextView__getTextColors(TextView* __this)
{
    return ::uCast< ::app::Android::android::content::res::ColorStateList*>(TextView__getTextColors_IMPL_26582(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::content::res::ColorStateList__typeof());
}

::uObject* TextView__getTextColors_IMPL_26582(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::widget::TextView__getTextColors_26582_ID,::app::Android::android::widget::TextView___javaClass_3,"getTextColors","()Landroid/content/res/ColorStateList;",GetMethodID,"Id for fallback method android.widget.TextView.getTextColors could not be cached",80);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__getTextColors_26582_ID),result,::app::Android::android::content::res::ColorStateList__typeof(),::app::Android::android::content::res::ColorStateList*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::widget::TextView__getTextColors_26582_ID),result,::app::Android::android::content::res::ColorStateList__typeof(),::app::Android::android::content::res::ColorStateList*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

TextView* TextView__New_10(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    TextView* inst = (TextView*)::uAllocObject(sizeof(TextView), TextView__typeof());
    inst->_ObjInit_10(arg0);
    return inst;
}

void TextView__onScrollChanged(TextView* __this, int arg0, int arg1, int arg2, int arg3)
{
    TextView__onScrollChanged_IMPL_26761(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

void TextView__onScrollChanged_IMPL_26761(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__onScrollChanged_26761_ID,::app::Android::android::widget::TextView___javaClass_3,"onScrollChanged","(IIII)V",GetMethodID,"Id for fallback method android.widget.TextView.onScrollChanged could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onScrollChanged_26761_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__onScrollChanged_26761_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

bool TextView__onTouchEvent(TextView* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return TextView__onTouchEvent_IMPL_26738(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool TextView__onTouchEvent_IMPL_26738(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::widget::TextView__onTouchEvent_26738_ID,::app::Android::android::widget::TextView___javaClass_3,"onTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView.onTouchEvent could not be cached",79);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__onTouchEvent_26738_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::widget::TextView__onTouchEvent_26738_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void TextView__removeTextChangedListener(TextView* __this, ::uObject* arg0)
{
    TextView__removeTextChangedListener_IMPL_26730(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void TextView__removeTextChangedListener_IMPL_26730(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::TextView__removeTextChangedListener_26730_ID,::app::Android::android::widget::TextView___javaClass_3,"removeTextChangedListener","(Landroid/text/TextWatcher;)V",GetMethodID,"Id for fallback method android.widget.TextView.removeTextChangedListener could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__removeTextChangedListener_26730_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__removeTextChangedListener_26730_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void TextView__setEllipsize(TextView* __this, ::app::Android::android::text::TextUtilsDLRTruncateAt* arg0)
{
    TextView__setEllipsize_IMPL_26720(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void TextView__setEllipsize_IMPL_26720(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::TextView__setEllipsize_26720_ID,::app::Android::android::widget::TextView___javaClass_3,"setEllipsize","(Landroid/text/TextUtils$TruncateAt;)V",GetMethodID,"Id for fallback method android.widget.TextView.setEllipsize could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setEllipsize_26720_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setEllipsize_26720_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void TextView__setEnabled(TextView* __this, bool arg0)
{
    TextView__setEnabled_IMPL_26528(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void TextView__setEnabled_IMPL_26528(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__setEnabled_26528_ID,::app::Android::android::widget::TextView___javaClass_3,"setEnabled","(Z)V",GetMethodID,"Id for fallback method android.widget.TextView.setEnabled could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setEnabled_26528_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setEnabled_26528_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void TextView__setGravity(TextView* __this, int arg0)
{
    TextView__setGravity_IMPL_26603(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void TextView__setGravity_IMPL_26603(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__setGravity_26603_ID,::app::Android::android::widget::TextView___javaClass_3,"setGravity","(I)V",GetMethodID,"Id for fallback method android.widget.TextView.setGravity could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setGravity_26603_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setGravity_26603_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void TextView__setHorizontallyScrolling(TextView* __this, bool arg0)
{
    TextView__setHorizontallyScrolling_IMPL_26607(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void TextView__setHorizontallyScrolling_IMPL_26607(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__setHorizontallyScrolling_26607_ID,::app::Android::android::widget::TextView___javaClass_3,"setHorizontallyScrolling","(Z)V",GetMethodID,"Id for fallback method android.widget.TextView.setHorizontallyScrolling could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setHorizontallyScrolling_26607_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setHorizontallyScrolling_26607_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void TextView__setIncludeFontPadding(TextView* __this, bool arg0)
{
    TextView__setIncludeFontPadding_IMPL_26706(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void TextView__setIncludeFontPadding_IMPL_26706(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__setIncludeFontPadding_26706_ID,::app::Android::android::widget::TextView___javaClass_3,"setIncludeFontPadding","(Z)V",GetMethodID,"Id for fallback method android.widget.TextView.setIncludeFontPadding could not be cached",88);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setIncludeFontPadding_26706_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setIncludeFontPadding_26706_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void TextView__setInputType(TextView* __this, int arg0)
{
    TextView__setInputType_IMPL_26650(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void TextView__setInputType_IMPL_26650(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__setInputType_26650_ID,::app::Android::android::widget::TextView___javaClass_3,"setInputType","(I)V",GetMethodID,"Id for fallback method android.widget.TextView.setInputType could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setInputType_26650_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setInputType_26650_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void TextView__setMaxLines(TextView* __this, int arg0)
{
    TextView__setMaxLines_IMPL_26612(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void TextView__setMaxLines_IMPL_26612(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__setMaxLines_26612_ID,::app::Android::android::widget::TextView___javaClass_3,"setMaxLines","(I)V",GetMethodID,"Id for fallback method android.widget.TextView.setMaxLines could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setMaxLines_26612_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setMaxLines_26612_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void TextView__setOnEditorActionListener(TextView* __this, ::uObject* arg0)
{
    TextView__setOnEditorActionListener_IMPL_26658(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void TextView__setOnEditorActionListener_IMPL_26658(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::TextView__setOnEditorActionListener_26658_ID,::app::Android::android::widget::TextView___javaClass_3,"setOnEditorActionListener","(Landroid/widget/TextView$OnEditorActionListener;)V",GetMethodID,"Id for fallback method android.widget.TextView.setOnEditorActionListener could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setOnEditorActionListener_26658_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setOnEditorActionListener_26658_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void TextView__setPadding(TextView* __this, int arg0, int arg1, int arg2, int arg3)
{
    TextView__setPadding_IMPL_26567(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

void TextView__setPadding_IMPL_26567(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__setPadding_26567_ID,::app::Android::android::widget::TextView___javaClass_3,"setPadding","(IIII)V",GetMethodID,"Id for fallback method android.widget.TextView.setPadding could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setPadding_26567_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setPadding_26567_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void TextView__setPaddingRelative(TextView* __this, int arg0, int arg1, int arg2, int arg3)
{
    TextView__setPaddingRelative_IMPL_26568(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

void TextView__setPaddingRelative_IMPL_26568(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__setPaddingRelative_26568_ID,::app::Android::android::widget::TextView___javaClass_3,"setPaddingRelative","(IIII)V",GetMethodID,"Id for fallback method android.widget.TextView.setPaddingRelative could not be cached",85);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setPaddingRelative_26568_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setPaddingRelative_26568_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void TextView__setText(TextView* __this, ::uObject* arg0)
{
    TextView__setText_IMPL_26640(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void TextView__setText_IMPL_26640(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::TextView__setText_26640_ID,::app::Android::android::widget::TextView___javaClass_3,"setText","(Ljava/lang/CharSequence;)V",GetMethodID,"Id for fallback method android.widget.TextView.setText could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setText_26640_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setText_26640_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void TextView__setTextColor(TextView* __this, int arg0)
{
    TextView__setTextColor_IMPL_26580(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void TextView__setTextColor_IMPL_26580(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__setTextColor_26580_ID,::app::Android::android::widget::TextView___javaClass_3,"setTextColor","(I)V",GetMethodID,"Id for fallback method android.widget.TextView.setTextColor could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setTextColor_26580_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setTextColor_26580_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void TextView__setTextSize(TextView* __this, int arg0, float arg1)
{
    TextView__setTextSize_IMPL_26575(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void TextView__setTextSize_IMPL_26575(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, float arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::widget::TextView__setTextSize_26575_ID,::app::Android::android::widget::TextView___javaClass_3,"setTextSize","(IF)V",GetMethodID,"Id for fallback method android.widget.TextView.setTextSize could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setTextSize_26575_ID, ((jint)arg2_), ((jfloat)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setTextSize_26575_ID, ((jint)arg2_), ((jfloat)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void TextView__setTypeface_1(TextView* __this, ::app::Android::android::graphics::Typeface* arg0)
{
    TextView__setTypeface_IMPL_26578(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void TextView__setTypeface_IMPL_26578(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::widget::TextView___javaClass_3,::app::Android::android::widget::TextView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::widget::TextView__setTypeface_26578_ID,::app::Android::android::widget::TextView___javaClass_3,"setTypeface","(Landroid/graphics/Typeface;)V",GetMethodID,"Id for fallback method android.widget.TextView.setTypeface could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::widget::TextView___javaClass_3, ::app::Android::android::widget::TextView__setTypeface_26578_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::widget::TextView__setTypeface_26578_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/widget/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* TextViewDLROnEditorActionListener__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.widget.TextViewDLROnEditorActionListener");

    return type;
}

}}}}
