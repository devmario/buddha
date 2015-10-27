#include <app/Android.android.app.Activity.h>
#include <app/Android.android.app.Fragment.h>
#include <app/Android.android.app.TaskStackBuilder.h>
#include <app/Android.android.content.Intent.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.Runnable.h>
#include <app/Android.java.lang.String.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace android {
namespace app {

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/app/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Activity___javaClass_5;
jmethodID Activity__getSystemService_847_ID;
jmethodID Activity__runOnUiThread_862_ID;
jmethodID Activity__startActivity_806_ID;

Activity__uType* Activity__typeof()
{
    static ::uStaticStrong<Activity__uType*> type;
    if (type != NULL) return type;

    type = (Activity__uType*)::uAllocClassType(sizeof(Activity__uType), "Android.android.app.Activity", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::ContextThemeWrapper__typeof());
    type->__fp_getSystemService = (::app::Android::java::lang::Object*(*)(::app::Android::android::content::Context*, ::app::Android::java::lang::String*))Activity__getSystemService;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Activity__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Activity__uType, __interface_1));

    return type;
}

void Activity___Init_5(::uStatic* __this)
{
    if (::app::Android::android::app::Activity___javaClass_5) { return; }
    INIT_JNI;
    ::app::Android::android::app::Activity___javaClass_5 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/app/Activity"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::app::Activity___javaClass_5) { THROW_UNO_EXCEPTION("Unable to cache class 'android.app.Activity'", 44);; }
}

void Activity___ObjInit_11(Activity* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::view::ContextThemeWrapper___ObjInit_8(__this, obj, utype, hasFallbackClass, resolveType);
}

Activity* Activity__GetAppActivity(::uStatic* __this)
{
    return Activity__New_10(NULL, ::app::Android::Base::JNI__GetActivityObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, true);
}

::app::Android::java::lang::Object* Activity__getSystemService(Activity* __this, ::app::Android::java::lang::String* arg0)
{
    return ::uCast< ::app::Android::java::lang::Object*>(Activity__getSystemService_IMPL_847(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::java::lang::Object__typeof());
}

::uObject* Activity__getSystemService_IMPL_847(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::app::Activity___javaClass_5,::app::Android::android::app::Activity___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::app::Activity__getSystemService_847_ID,::app::Android::android::app::Activity___javaClass_5,"getSystemService","(Ljava/lang/String;)Ljava/lang/Object;",GetMethodID,"Id for fallback method android.app.Activity.getSystemService could not be cached",80);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::app::Activity___javaClass_5, ::app::Android::android::app::Activity__getSystemService_847_ID, _obArg2),result,::app::Android::java::lang::Object__typeof(),::app::Android::java::lang::Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::app::Activity__getSystemService_847_ID, _obArg2),result,::app::Android::java::lang::Object__typeof(),::app::Android::java::lang::Object*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

Activity* Activity__New_10(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    Activity* inst = (Activity*)::uAllocObject(sizeof(Activity), Activity__typeof());
    inst->_ObjInit_11(obj, utype, hasFallbackClass, resolveType);
    return inst;
}

void Activity__runOnUiThread(Activity* __this, ::uObject* arg0)
{
    Activity__runOnUiThread_IMPL_862(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Activity__runOnUiThread_IMPL_862(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::app::Activity___javaClass_5,::app::Android::android::app::Activity___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::app::Activity__runOnUiThread_862_ID,::app::Android::android::app::Activity___javaClass_5,"runOnUiThread","(Ljava/lang/Runnable;)V",GetMethodID,"Id for fallback method android.app.Activity.runOnUiThread could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::app::Activity___javaClass_5, ::app::Android::android::app::Activity__runOnUiThread_862_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::app::Activity__runOnUiThread_862_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Activity__startActivity_1(Activity* __this, ::app::Android::android::content::Intent* arg0)
{
    Activity__startActivity_IMPL_806(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Activity__startActivity_IMPL_806(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::app::Activity___javaClass_5,::app::Android::android::app::Activity___Init_5(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::app::Activity__startActivity_806_ID,::app::Android::android::app::Activity___javaClass_5,"startActivity","(Landroid/content/Intent;)V",GetMethodID,"Id for fallback method android.app.Activity.startActivity could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::app::Activity___javaClass_5, ::app::Android::android::app::Activity__startActivity_806_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::app::Activity__startActivity_806_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/app/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Fragment___javaClass_2;
jmethodID Fragment__hashCode_1416_ID;
jmethodID Fragment__toString_1417_ID;

Fragment__uType* Fragment__typeof()
{
    static ::uStaticStrong<Fragment__uType*> type;
    if (type != NULL) return type;

    type = (Fragment__uType*)::uAllocClassType(sizeof(Fragment__uType), "Android.android.app.Fragment", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))Fragment__hashCode_1;
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Fragment__toString;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Fragment__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Fragment__uType, __interface_1));

    return type;
}

void Fragment___Init_2(::uStatic* __this)
{
    if (::app::Android::android::app::Fragment___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::app::Fragment___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/app/Fragment"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::app::Fragment___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.app.Fragment'", 44);; }
}

int Fragment__hashCode_1(Fragment* __this)
{
    return Fragment__hashCode_IMPL_1416(NULL, __this->_subclassed, __this->_javaObject);
}

int Fragment__hashCode_IMPL_1416(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::app::Fragment___javaClass_2,::app::Android::android::app::Fragment___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::app::Fragment__hashCode_1416_ID,::app::Android::android::app::Fragment___javaClass_2,"hashCode","()I",GetMethodID,"Id for fallback method android.app.Fragment.hashCode could not be cached",72);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::app::Fragment___javaClass_2, ::app::Android::android::app::Fragment__hashCode_1416_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::app::Fragment__hashCode_1416_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Fragment__toString(Fragment* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Fragment__toString_IMPL_1417(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Fragment__toString_IMPL_1417(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::app::Fragment___javaClass_2,::app::Android::android::app::Fragment___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::app::Fragment__toString_1417_ID,::app::Android::android::app::Fragment___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.app.Fragment.toString could not be cached",72);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::app::Fragment___javaClass_2, ::app::Android::android::app::Fragment__toString_1417_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::app::Fragment__toString_1417_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/app/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TaskStackBuilder__uType* TaskStackBuilder__typeof()
{
    static ::uStaticStrong<TaskStackBuilder__uType*> type;
    if (type != NULL) return type;

    type = (TaskStackBuilder__uType*)::uAllocClassType(sizeof(TaskStackBuilder__uType), "Android.android.app.TaskStackBuilder", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(TaskStackBuilder__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(TaskStackBuilder__uType, __interface_1));

    return type;
}

}}}}
