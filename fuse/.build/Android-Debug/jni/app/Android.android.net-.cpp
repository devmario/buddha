#include <app/Android.android.net.Uri.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_net_Uri.h>
#include <app/Android.java.lang.String.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>

namespace app {
namespace Android {
namespace android {
namespace net {

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/net/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Uri___javaClass_2;
jmethodID Uri__hashCode_10992_ID;
jmethodID Uri__parse_10996_ID;

Uri__uType* Uri__typeof()
{
    static ::uStaticStrong<Uri__uType*> type;
    if (type != NULL) return type;

    type = (Uri__uType*)::uAllocClassType(sizeof(Uri__uType), "Android.android.net.Uri", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))Uri__hashCode_1;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Uri__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Uri__uType, __interface_1));

    return type;
}

void Uri___Init_2(::uStatic* __this)
{
    if (::app::Android::android::net::Uri___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::net::Uri___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/net/Uri"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::net::Uri___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.net.Uri'", 39);; }
}

int Uri__hashCode_1(Uri* __this)
{
    return Uri__hashCode_IMPL_10992(NULL, __this->_subclassed, __this->_javaObject);
}

int Uri__hashCode_IMPL_10992(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::net::Uri___javaClass_2,::app::Android::android::net::Uri___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::net::Uri__hashCode_10992_ID,::app::Android::android::net::Uri___javaClass_2,"hashCode","()I",GetMethodID,"Id for fallback method android.net.Uri.hashCode could not be cached",67);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::net::Uri___javaClass_2, ::app::Android::android::net::Uri__hashCode_10992_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::net::Uri__hashCode_10992_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

Uri* Uri__parse(::uStatic* __this, ::app::Android::java::lang::String* arg0)
{
    return ::uCast< Uri*>(Uri__parse_IMPL_10996(NULL, (::uObject*)arg0), Uri__typeof());
}

::uObject* Uri__parse_IMPL_10996(::uStatic* __this, ::uObject* arg0_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::net::Uri___javaClass_2,::app::Android::android::net::Uri___Init_2(NULL));
    jobject _obArg0 = ((!arg0_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::net::Uri__parse_10996_ID,::app::Android::android::net::Uri___javaClass_2,"parse","(Ljava/lang/String;)Landroid/net/Uri;",GetStaticMethodID,"Id for fallback method android.net.Uri.parse could not be cached",64);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(::app::Android::android::net::Uri___javaClass_2, ::app::Android::android::net::Uri__parse_10996_ID, _obArg0),result,::app::Android::Fallbacks::Android_android_net_Uri__typeof(),Uri*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

}}}}
