#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.JNI_RefType.h>
#include <app/Android.Base.Permissions.h>
#include <app/Android.Base.PlatPermission.h>
#include <app/Android.Base.Primitives.ConstCharPtr.h>
#include <app/Android.Base.Primitives.JavaVMPtr.h>
#include <app/Android.Base.Primitives.jfieldID.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.JNIEnvPtr.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Primitives.ujvalue.h>
#include <app/Android.Base.Types.String.h>
#include <app/Android.Base.Versions.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace Base {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Android/Source/Base/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AndroidBindingMacros__uType* AndroidBindingMacros__typeof()
{
    static ::uStaticStrong<AndroidBindingMacros__uType*> type;
    if (type != NULL) return type;

    type = (AndroidBindingMacros__uType*)::uAllocClassType(sizeof(AndroidBindingMacros__uType), "Android.Base.AndroidBindingMacros");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Android/Source/Base/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID JNI___getUnoRefMid;
jclass JNI___helperCls;
bool JNI___inited;
::uStaticStrong< ::app::Android::Base::Wrappers::JWrapper*> JNI___rootActivityWrapped;
jmethodID JNI__Activity_getClassLoader;
jmethodID JNI__ClassLoader_loadClass;
jclass JNI__exceptionClass;

JNI__uType* JNI__typeof()
{
    static ::uStaticStrong<JNI__uType*> type;
    if (type != NULL) return type;

    type = (JNI__uType*)::uAllocClassType(sizeof(JNI__uType), "Android.Base.JNI");

    return type;
}

void JNI__CheckException(::uStatic* __this)
{
    JNI__CheckException_2(NULL, JNI__GetEnvPtr(NULL));
}

void JNI__CheckException_1(::uStatic* __this, JNIEnv* jni, ::uString* appendMessage)
{
    ::app::Uno::Exception* excep = JNI__TryGetException(NULL, jni, appendMessage);

    if (excep != NULL)
    {
        U_THROW(excep);
    }
}

void JNI__CheckException_2(::uStatic* __this, JNIEnv* jni)
{
    JNI__CheckException_1(NULL, jni, NULL);
}

void JNI__DeleteGlobalRef(::uStatic* __this, jobject obj_)
{
    ::app::Android::Base::JNI__GetEnvPtr(NULL)->DeleteGlobalRef(obj_);
}

void JNI__DeleteLocalRef_1(::uStatic* __this, jclass obj)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jni->DeleteLocalRef(obj);
}

void JNI__DeleteLocalRef_2(::uStatic* __this, jobject obj)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jni->DeleteLocalRef(obj);
}

void JNI__DeleteWeakGlobalRef(::uStatic* __this, jobject obj_)
{
    ::app::Android::Base::JNI__GetEnvPtr(NULL)->DeleteWeakGlobalRef(obj_);
}

jclass JNI__GetActivityClass(::uStatic* __this)
{
    JniHelper jni;
    return JniHelper::GetActivityClass();
}

jobject JNI__GetActivityObject(::uStatic* __this)
{
    JniHelper jni;
    return JniHelper::GetActivity();
}

int JNI__GetArrayLength(::uStatic* __this, jobject array_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    return (int)jni->GetArrayLength((jarray)array_);
}

jobject JNI__GetDefaultObject(::uStatic* __this)
{
    return (jobject)0;
}

::uType* JNI__GetDefaultType(::uStatic* __this)
{
    return (::uType*)0;
}

JNIEnv* JNI__GetEnvPtr(::uStatic* __this)
{
    JNIEnv* jni;
    JniHelper::GetVM()->AttachCurrentThread(&jni, NULL);
    return jni;
}

float JNI__GetFloatArrayElement(::uStatic* __this, ::uObject* obj_, int i_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jfloat result;
    jni->GetFloatArrayRegion((jfloatArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_, 1, &result);
    return (float)result;
}

jmethodID JNI__GetMethodID(::uStatic* __this, jclass cls, ::uString* methodName, ::uString* methodSig)
{
    const char* cMethodName = ::uStringToCStr(methodName);
    const char* cMethodSig = ::uStringToCStr(methodSig);
    jmethodID mid = JNI__GetEnvPtr(NULL)->GetMethodID(cls,cMethodName,cMethodSig);
    uFreeCStr(cMethodName);
    uFreeCStr(cMethodSig);
    return mid;
}

jobject JNI__GetObjectArrayElement(::uStatic* __this, ::uObject* obj_, int i_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    return reinterpret_cast<jobject>(jni->NewGlobalRef(jni->GetObjectArrayElement((jobjectArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_)));
}

int JNI__GetRefType(::uStatic* __this, JNIEnv* jni, jobject obj)
{
    return (int)jni->GetObjectRefType(obj);
}

int JNI__GetRefType_1(::uStatic* __this, jobject obj)
{
    return JNI__GetRefType(NULL, JNI__GetEnvPtr(NULL), obj);
}

jfieldID JNI__GetStaticFieldID(::uStatic* __this, jclass cls, ::uString* fieldName, ::uString* fieldSig)
{
    JNIEnv* env = JNI__GetEnvPtr(NULL);
    const char* cFieldName = ::uStringToCStr(fieldName);
    const char* cFieldSig = ::uStringToCStr(fieldSig);
    jfieldID fid = env->GetStaticFieldID(cls,cFieldName,cFieldSig);
    uFreeCStr(cFieldName);
    uFreeCStr(cFieldSig);
    JNI__CheckException_2(NULL, env);
    return fid;
}

int JNI__GetStaticIntField(::uStatic* __this, jclass obj, jfieldID fld)
{
    return JNI__GetEnvPtr(NULL)->GetStaticIntField(obj,fld);
}

jobject JNI__GetStaticObjectField(::uStatic* __this, jclass obj, jfieldID fld)
{
    return JNI__GetEnvPtr(NULL)->GetStaticObjectField(obj,fld);
}

::uLong JNI__GetUnoRef(::uStatic* __this, jobject obj_)
{
    if (obj_) {
        JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
        return (::uLong)jni->CallStaticLongMethod(::app::Android::Base::JNI___helperCls, ::app::Android::Base::JNI___getUnoRefMid, obj_);
    } else {
        return 0;
    }
}

JavaVM* JNI__GetVM(::uStatic* __this)
{
    return JniHelper::GetVM();
}

::app::Android::Base::Wrappers::JWrapper* JNI__GetWrappedActivityObject(::uStatic* __this)
{
    jobject activityObj = JNI__GetActivityObject(NULL);

    if (::app::Android::Base::Wrappers::JWrapper__op_Equality(NULL, JNI___rootActivityWrapped, NULL) || !JNI__IsSameObject(NULL, ::uPtr< ::app::Android::Base::Wrappers::JWrapper*>(JNI___rootActivityWrapped)->_GetJavaObject(), activityObj))
    {
        JNI___rootActivityWrapped = ::app::Android::Base::Wrappers::JWrapper__New_1(NULL, activityObj, NULL, false, false);
    }

    return JNI___rootActivityWrapped;
}

void JNI__Init(::uStatic* __this)
{
    if (!::app::Android::Base::JNI___inited)
    {
    ::app::Android::Base::JNI___inited = true;
        JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
        ::app::Android::Base::JNI__Activity_getClassLoader = jni->GetMethodID(jni->FindClass("android/app/NativeActivity"), "getClassLoader", "()Ljava/lang/ClassLoader;");
        ::app::Android::Base::JNI__ClassLoader_loadClass = jni->GetMethodID(jni->FindClass("java/lang/ClassLoader"), "loadClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        ::app::Android::Base::JNI__CheckException_2(NULL, jni);
        ::app::Android::Base::JNI___helperCls = reinterpret_cast<jclass>(jni->NewGlobalRef(::app::Android::Base::JNI__LoadClass_3(NULL, ::app::Android::Base::JNI__GetEnvPtr(NULL), "com.Bindings.UnoHelper", false)));
        if (!::app::Android::Base::JNI___helperCls) {
            U_THROW(::app::Uno::Exception__New_2(NULL, uNewStringUtf8("Could not cache class for UnoHelper",35)));
        }
        ::app::Android::Base::JNI__exceptionClass = reinterpret_cast<jclass>(jni->NewGlobalRef(jni->FindClass("java/lang/RuntimeException")));
        ::app::Android::Base::JNI___getUnoRefMid = jni->GetStaticMethodID(::app::Android::Base::JNI___helperCls, "GetUnoObjectRef", "(Ljava/lang/Object;)J");
        if (!::app::Android::Base::JNI___getUnoRefMid) {
            U_THROW(::app::Uno::Exception__New_2(NULL, uNewStringUtf8("Could not cache getUnoRefMid", 37)));
        }
    }
}

bool JNI__IsSameObject(::uStatic* __this, jobject objA_, jobject objB_)
{
    return (bool)::app::Android::Base::JNI__GetEnvPtr(NULL)->IsSameObject(objA_,objB_);
}

jclass JNI__LoadClass(::uStatic* __this, JNIEnv* jni, const char* name)
{
    return JNI__LoadClass_3(NULL, jni, name, false);
}

jclass JNI__LoadClass_1(::uStatic* __this, ::uString* name, bool systemClass)
{
    return JNI__LoadClass_2(NULL, JNI__GetEnvPtr(NULL), name, systemClass);
}

jclass JNI__LoadClass_2(::uStatic* __this, JNIEnv* jni, ::uString* name, bool systemClass)
{
    const char* cname = (const char*)::uStringToCStr(name);
    jclass result = JNI__LoadClass_3(NULL, JNI__GetEnvPtr(NULL), cname, systemClass);
    uFreeCStr(cname);
    return result;
}

jclass JNI__LoadClass_3(::uStatic* __this, JNIEnv* jni, const char* name, bool systemClass)
{
    jclass result = jclass();
    jstring jname = jni->NewStringUTF(name);

    if (systemClass)
    {
        result = jni->FindClass(name);
    }
    else
    {
        result = (jclass)jni->CallObjectMethod(jni->CallObjectMethod(JNI__GetActivityObject(NULL), JNI__Activity_getClassLoader),JNI__ClassLoader_loadClass,jname);
    }

    jni->DeleteLocalRef(jname);
    JNI__CheckException_2(NULL, jni);
    return result;
}

jclass JNI__LocalToGlobalRef(::uStatic* __this, jclass obj)
{
    jclass res = JNI__NewGlobalRef_1(NULL, obj);
    JNI__DeleteLocalRef_1(NULL, obj);
    return res;
}

jobject JNI__LocalToGlobalRef_2(::uStatic* __this, jobject obj)
{
    jobject res = JNI__NewGlobalRef_2(NULL, obj);
    JNI__DeleteLocalRef_2(NULL, obj);
    return res;
}

jobject JNI__NewFloatArray(::uStatic* __this, int len_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jobject rtn = jni->NewFloatArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

jclass JNI__NewGlobalRef_1(::uStatic* __this, jclass obj)
{
    return reinterpret_cast<jclass>(JNI__GetEnvPtr(NULL)->NewGlobalRef(obj));
}

jobject JNI__NewGlobalRef_2(::uStatic* __this, jobject obj_)
{
    return reinterpret_cast<jobject>(::app::Android::Base::JNI__GetEnvPtr(NULL)->NewGlobalRef(obj_));
}

jobject JNI__NewObject_1(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0)
{
    return JNI__GetEnvPtr(NULL)->NewObject(cls,mtd,arg0);
}

jobject JNI__NewObject_2(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1)
{
    return JNI__GetEnvPtr(NULL)->NewObject(cls,mtd,arg0,arg1);
}

jobject JNI__NewWeakGlobalRef(::uStatic* __this, jobject obj_)
{
    return (jobject)reinterpret_cast<jweak>(::app::Android::Base::JNI__GetEnvPtr(NULL)->NewWeakGlobalRef(obj_));
}

void JNI__SetFloatArrayElement(::uStatic* __this, ::uObject* obj_, int i_, float val_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jfloat val = (jfloat)val_;
    jni->SetFloatArrayRegion((jfloatArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_, 1, &val);
}

void JNI__SetObjectArrayElement(::uStatic* __this, ::uObject* obj_, int i_, jobject val_)
{
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jni->SetObjectArrayElement((jobjectArray)::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(obj_), i_, val_);
}

void JNI__ThrowNewException(::uStatic* __this, ::uString* message_)
{
    const char* message = ::uStringToCStr(message_);
    LOGD("%s", message);
    ::app::Android::Base::JNI__GetEnvPtr(NULL)->ThrowNew(::app::Android::Base::JNI__exceptionClass, message);
    ::uFreeCStr(message);
}

::app::Uno::Exception* JNI__TryGetException(::uStatic* __this, JNIEnv* jni, ::uString* appendMessage)
{
    jthrowable err = jni->ExceptionOccurred();

    if ((err != NULL))
    {
        jni->ExceptionDescribe();
        jni->ExceptionClear();
        jmethodID toString = jni->GetMethodID(jni->FindClass("java/lang/Object"), "toString", "()Ljava/lang/String;");
        jobject estring = (jobject)jni->CallObjectMethod(err, toString);
        ::uString* x = ::app::Android::Base::Types::String__JavaToUno_1(NULL, estring);

        if (::app::Uno::String__op_Inequality(NULL, appendMessage, NULL))
        {
            x = ::app::Uno::String__op_Addition_1(NULL, x, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, x, ::uGetConstString("\n")), appendMessage));
        }

        return ::app::Uno::Exception__New_2(NULL, x);
    }

    return NULL;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Android/Source/Base/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* JNI_RefType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Android.Base.JNI.RefType", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "Invalid", 0LL,
        "Local", 1LL,
        "Global", 2LL,
        "WeakGlobal", 3LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Permissions__uType* Permissions__typeof()
{
    static ::uStaticStrong<Permissions__uType*> type;
    if (type != NULL) return type;

    type = (Permissions__uType*)::uAllocClassType(sizeof(Permissions__uType), "Android.Base.Permissions", false, 0, 0, 0);

    return type;
}

void* Permissions___call_phone(::uStatic* __this)
{
    return NULL;
}

void* Permissions___internet(::uStatic* __this)
{
    return NULL;
}

void* Permissions___vibrate(::uStatic* __this)
{
    return NULL;
}

void* Permissions__get_CALL_PHONE(::uStatic* __this)
{
    return Permissions___call_phone(NULL);
}

void* Permissions__get_INTERNET(::uStatic* __this)
{
    return Permissions___internet(NULL);
}

void* Permissions__get_VIBRATE(::uStatic* __this)
{
    return Permissions___vibrate(NULL);
}

void Permissions__RequestPermission(::uStatic* __this, void* x)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PlatPermission__uType* PlatPermission__typeof()
{
    static ::uStaticStrong<PlatPermission__uType*> type;
    if (type != NULL) return type;

    type = (PlatPermission__uType*)::uAllocClassType(sizeof(PlatPermission__uType), "Android.Base.PlatPermission", false, 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Android/Source/Base/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

int Versions___api;
::uStaticStrong< ::uString*> Versions___release;

Versions__uType* Versions__typeof()
{
    static ::uStaticStrong<Versions__uType*> type;
    if (type != NULL) return type;

    type = (Versions__uType*)::uAllocClassType(sizeof(Versions__uType), "Android.Base.Versions");

    return type;
}

void Versions___TypeInit(::uStatic* __this)
{
    Versions___api = -1;
    Versions___release = ::uGetConstString("<unknown>");
}

int Versions__get_ApiLevel(::uStatic* __this)
{
    if (Versions___api == -1)
    {
        Versions__Initialize(NULL);
    }

    return Versions___api;
}

void Versions__Initialize(::uStatic* __this)
{
    if (Versions___api == -1)
    {
        jclass tmpCls = ::app::Android::Base::JNI__LoadClass_1(NULL, ::uGetConstString("android/os/Build$VERSION"), false);
        jfieldID sdk = ::app::Android::Base::JNI__GetStaticFieldID(NULL, tmpCls, ::uGetConstString("SDK_INT"), ::uGetConstString("I"));
        jfieldID release = ::app::Android::Base::JNI__GetStaticFieldID(NULL, tmpCls, ::uGetConstString("RELEASE"), ::uGetConstString("Ljava/lang/String;"));
        Versions___api = ::app::Android::Base::JNI__GetStaticIntField(NULL, tmpCls, sdk);
        Versions___release = ::app::Android::Base::Types::String__JavaToUno_1(NULL, ::app::Android::Base::JNI__GetStaticObjectField(NULL, tmpCls, release));
    }
}

}}}
