#include <app/Android.android.os.BuildDLRVERSION.h>
#include <app/Android.android.os.Bundle.h>
#include <app/Android.android.os.IBinder.h>
#include <app/Android.android.os.IBinderDLRDeathRecipient.h>
#include <app/Android.android.os.IInterface.h>
#include <app/Android.android.os.Parcel.h>
#include <app/Android.android.os.Vibrator.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jfieldID.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_os_IBinder.h>
#include <app/Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h>
#include <app/Android.Fallbacks.Android_android_os_IInterface.h>
#include <app/Android.Fallbacks.Android_android_os_Vibrator.h>
#include <app/Android.java.io.FileDescriptor.h>
#include <app/Android.java.lang.String.h>
#include <app/Android.Runtime.ObjectArray__Android_java_lang_String.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>

namespace app {
namespace Android {
namespace android {
namespace os {

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/os/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass BuildDLRVERSION___javaClass_2;
jfieldID BuildDLRVERSION__SDK_INT_13449_ID;

BuildDLRVERSION__uType* BuildDLRVERSION__typeof()
{
    static ::uStaticStrong<BuildDLRVERSION__uType*> type;
    if (type != NULL) return type;

    type = (BuildDLRVERSION__uType*)::uAllocClassType(sizeof(BuildDLRVERSION__uType), "Android.android.os.BuildDLRVERSION", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(BuildDLRVERSION__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(BuildDLRVERSION__uType, __interface_1));

    return type;
}

void BuildDLRVERSION___Init_2(::uStatic* __this)
{
    if (::app::Android::android::os::BuildDLRVERSION___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::os::BuildDLRVERSION___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Build$VERSION"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::os::BuildDLRVERSION___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Build$VERSION'", 48);; }
}

int BuildDLRVERSION__get_SDK_INT(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::os::BuildDLRVERSION___javaClass_2,::app::Android::android::os::BuildDLRVERSION___Init_2(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::os::BuildDLRVERSION__SDK_INT_13449_ID)) {;
    CACHE_FIELD(::app::Android::android::os::BuildDLRVERSION__SDK_INT_13449_ID,::app::Android::android::os::BuildDLRVERSION___javaClass_2,"SDK_INT","I",GetStaticFieldID,"Id for field BuildDLRVERSION.SDK_INT could not be cached",56);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::os::BuildDLRVERSION___javaClass_2, ::app::Android::android::os::BuildDLRVERSION__SDK_INT_13449_ID));;
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/os/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Bundle___javaClass_2;
jmethodID Bundle__toString_13587_ID;

Bundle__uType* Bundle__typeof()
{
    static ::uStaticStrong<Bundle__uType*> type;
    if (type != NULL) return type;

    type = (Bundle__uType*)::uAllocClassType(sizeof(Bundle__uType), "Android.android.os.Bundle", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Bundle__toString;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Bundle__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Bundle__uType, __interface_1));

    return type;
}

void Bundle___Init_2(::uStatic* __this)
{
    if (::app::Android::android::os::Bundle___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::os::Bundle___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Bundle"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::os::Bundle___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Bundle'", 41);; }
}

::app::Android::java::lang::String* Bundle__toString(Bundle* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Bundle__toString_IMPL_13587(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Bundle__toString_IMPL_13587(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::os::Bundle___javaClass_2,::app::Android::android::os::Bundle___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::os::Bundle__toString_13587_ID,::app::Android::android::os::Bundle___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.os.Bundle.toString could not be cached",69);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::os::Bundle___javaClass_2, ::app::Android::android::os::Bundle__toString_13587_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::os::Bundle__toString_13587_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/os/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IBinder__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.os.IBinder");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/os/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IBinderDLRDeathRecipient__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.os.IBinderDLRDeathRecipient");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/os/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IInterface__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.os.IInterface");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/os/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Parcel__uType* Parcel__typeof()
{
    static ::uStaticStrong<Parcel__uType*> type;
    if (type != NULL) return type;

    type = (Parcel__uType*)::uAllocClassType(sizeof(Parcel__uType), "Android.android.os.Parcel", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Parcel__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Parcel__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/os/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Vibrator__uType* Vibrator__typeof()
{
    static ::uStaticStrong<Vibrator__uType*> type;
    if (type != NULL) return type;

    type = (Vibrator__uType*)::uAllocClassType(sizeof(Vibrator__uType), "Android.android.os.Vibrator", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Vibrator__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Vibrator__uType, __interface_1));

    return type;
}

}}}}
