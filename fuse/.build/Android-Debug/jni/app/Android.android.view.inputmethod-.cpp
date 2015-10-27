#include <app/Android.android.os.IBinder.h>
#include <app/Android.android.view.inputmethod.InputMethodManager.h>
#include <app/Android.android.view.View.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jfieldID.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>

namespace app {
namespace Android {
namespace android {
namespace view {
namespace inputmethod {

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/inputmethod/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass InputMethodManager___javaClass_2;
jmethodID InputMethodManager__hideSoftInputFromWindow_21465_ID;
jfieldID InputMethodManager__SHOW_IMPLICIT_21443_ID;
jmethodID InputMethodManager__showSoftInput_21463_ID;

InputMethodManager__uType* InputMethodManager__typeof()
{
    static ::uStaticStrong<InputMethodManager__uType*> type;
    if (type != NULL) return type;

    type = (InputMethodManager__uType*)::uAllocClassType(sizeof(InputMethodManager__uType), "Android.android.view.inputmethod.InputMethodManager", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(InputMethodManager__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(InputMethodManager__uType, __interface_1));

    return type;
}

void InputMethodManager___Init_2(::uStatic* __this)
{
    if (::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/inputmethod/InputMethodManager"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.inputmethod.InputMethodManager'", 67);; }
}

int InputMethodManager__get_SHOW_IMPLICIT(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2,::app::Android::android::view::inputmethod::InputMethodManager___Init_2(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::view::inputmethod::InputMethodManager__SHOW_IMPLICIT_21443_ID)) {;
    CACHE_FIELD(::app::Android::android::view::inputmethod::InputMethodManager__SHOW_IMPLICIT_21443_ID,::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2,"SHOW_IMPLICIT","I",GetStaticFieldID,"Id for field InputMethodManager.SHOW_IMPLICIT could not be cached",65);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2, ::app::Android::android::view::inputmethod::InputMethodManager__SHOW_IMPLICIT_21443_ID));;
    return result;
}

bool InputMethodManager__hideSoftInputFromWindow(InputMethodManager* __this, ::uObject* arg0, int arg1)
{
    return InputMethodManager__hideSoftInputFromWindow_IMPL_21465(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

bool InputMethodManager__hideSoftInputFromWindow_IMPL_21465(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2,::app::Android::android::view::inputmethod::InputMethodManager___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::view::inputmethod::InputMethodManager__hideSoftInputFromWindow_21465_ID,::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2,"hideSoftInputFromWindow","(Landroid/os/IBinder;I)Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputMethodManager.hideSoftInputFromWindow could not be cached",110);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2, ::app::Android::android::view::inputmethod::InputMethodManager__hideSoftInputFromWindow_21465_ID, _obArg2, ((jint)arg3_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::view::inputmethod::InputMethodManager__hideSoftInputFromWindow_21465_ID, _obArg2, ((jint)arg3_)));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool InputMethodManager__showSoftInput(InputMethodManager* __this, ::app::Android::android::view::View* arg0, int arg1)
{
    return InputMethodManager__showSoftInput_IMPL_21463(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

bool InputMethodManager__showSoftInput_IMPL_21463(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2,::app::Android::android::view::inputmethod::InputMethodManager___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::view::inputmethod::InputMethodManager__showSoftInput_21463_ID,::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2,"showSoftInput","(Landroid/view/View;I)Z",GetMethodID,"Id for fallback method android.view.inputmethod.InputMethodManager.showSoftInput could not be cached",100);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::view::inputmethod::InputMethodManager___javaClass_2, ::app::Android::android::view::inputmethod::InputMethodManager__showSoftInput_21463_ID, _obArg2, ((jint)arg3_)));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::view::inputmethod::InputMethodManager__showSoftInput_21463_ID, _obArg2, ((jint)arg3_)));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

}}}}}
