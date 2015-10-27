#include <app/Android.android.util.AttributeSet.h>
#include <app/Android.android.util.TypedValue.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jfieldID.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_util_AttributeSet.h>
#include <app/Android.java.lang.String.h>
#include <app/Android.Runtime.ObjectArray__Android_java_lang_String.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>

namespace app {
namespace Android {
namespace android {
namespace util {

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/util/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* AttributeSet__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.util.AttributeSet");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/util/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass TypedValue___javaClass_2;
jfieldID TypedValue__COMPLEX_UNIT_DIP_20678_ID;
jmethodID TypedValue__toString_20716_ID;

TypedValue__uType* TypedValue__typeof()
{
    static ::uStaticStrong<TypedValue__uType*> type;
    if (type != NULL) return type;

    type = (TypedValue__uType*)::uAllocClassType(sizeof(TypedValue__uType), "Android.android.util.TypedValue", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))TypedValue__toString;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(TypedValue__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(TypedValue__uType, __interface_1));

    return type;
}

void TypedValue___Init_2(::uStatic* __this)
{
    if (::app::Android::android::util::TypedValue___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::util::TypedValue___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/util/TypedValue"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::util::TypedValue___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.util.TypedValue'", 47);; }
}

int TypedValue__get_COMPLEX_UNIT_DIP(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::util::TypedValue___javaClass_2,::app::Android::android::util::TypedValue___Init_2(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::util::TypedValue__COMPLEX_UNIT_DIP_20678_ID)) {;
    CACHE_FIELD(::app::Android::android::util::TypedValue__COMPLEX_UNIT_DIP_20678_ID,::app::Android::android::util::TypedValue___javaClass_2,"COMPLEX_UNIT_DIP","I",GetStaticFieldID,"Id for field TypedValue.COMPLEX_UNIT_DIP could not be cached",60);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::util::TypedValue___javaClass_2, ::app::Android::android::util::TypedValue__COMPLEX_UNIT_DIP_20678_ID));;
    return result;
}

::app::Android::java::lang::String* TypedValue__toString(TypedValue* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(TypedValue__toString_IMPL_20716(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* TypedValue__toString_IMPL_20716(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::util::TypedValue___javaClass_2,::app::Android::android::util::TypedValue___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::util::TypedValue__toString_20716_ID,::app::Android::android::util::TypedValue___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.TypedValue.toString could not be cached",75);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::util::TypedValue___javaClass_2, ::app::Android::android::util::TypedValue__toString_20716_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::util::TypedValue__toString_20716_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

}}}}