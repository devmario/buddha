// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Android/Source/Base/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_BASE_J_N_I_H__
#define __APP_ANDROID_BASE_J_N_I_H__

#include <android/log.h>
#include <app/Uno.Exception.h>
#include <jni.h>
#include <JNIHelper.h>
#include <Uno.h>
#include <Xli.h>
#include <XliPlatform/PlatformSpecific/Android.h>
namespace app { namespace Android { namespace Base { namespace Wrappers { struct JWrapper; } } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Android {
namespace Base {

extern jmethodID JNI___getUnoRefMid;
extern jclass JNI___helperCls;
extern bool JNI___inited;
extern ::uStaticStrong< ::app::Android::Base::Wrappers::JWrapper*> JNI___rootActivityWrapped;
extern jmethodID JNI__Activity_getClassLoader;
extern jmethodID JNI__ClassLoader_loadClass;
extern jclass JNI__exceptionClass;

struct JNI__uType : ::uClassType
{
};

JNI__uType* JNI__typeof();

void JNI__CheckException(::uStatic* __this);
void JNI__CheckException_1(::uStatic* __this, JNIEnv* jni, ::uString* appendMessage);
void JNI__CheckException_2(::uStatic* __this, JNIEnv* jni);
void JNI__DeleteGlobalRef(::uStatic* __this, jobject obj_);
void JNI__DeleteLocalRef_1(::uStatic* __this, jclass obj);
void JNI__DeleteLocalRef_2(::uStatic* __this, jobject obj);
void JNI__DeleteWeakGlobalRef(::uStatic* __this, jobject obj_);
jclass JNI__GetActivityClass(::uStatic* __this);
jobject JNI__GetActivityObject(::uStatic* __this);
int JNI__GetArrayLength(::uStatic* __this, jobject array_);
jobject JNI__GetDefaultObject(::uStatic* __this);
::uType* JNI__GetDefaultType(::uStatic* __this);
JNIEnv* JNI__GetEnvPtr(::uStatic* __this);
float JNI__GetFloatArrayElement(::uStatic* __this, ::uObject* obj_, int i_);
jmethodID JNI__GetMethodID(::uStatic* __this, jclass cls, ::uString* methodName, ::uString* methodSig);
jobject JNI__GetObjectArrayElement(::uStatic* __this, ::uObject* obj_, int i_);
int JNI__GetRefType(::uStatic* __this, JNIEnv* jni, jobject obj);
int JNI__GetRefType_1(::uStatic* __this, jobject obj);
jfieldID JNI__GetStaticFieldID(::uStatic* __this, jclass cls, ::uString* fieldName, ::uString* fieldSig);
int JNI__GetStaticIntField(::uStatic* __this, jclass obj, jfieldID fld);
jobject JNI__GetStaticObjectField(::uStatic* __this, jclass obj, jfieldID fld);
::uLong JNI__GetUnoRef(::uStatic* __this, jobject obj_);
JavaVM* JNI__GetVM(::uStatic* __this);
::app::Android::Base::Wrappers::JWrapper* JNI__GetWrappedActivityObject(::uStatic* __this);
void JNI__Init(::uStatic* __this);
bool JNI__IsSameObject(::uStatic* __this, jobject objA_, jobject objB_);
jclass JNI__LoadClass(::uStatic* __this, JNIEnv* jni, const char* name);
jclass JNI__LoadClass_1(::uStatic* __this, ::uString* name, bool systemClass);
jclass JNI__LoadClass_2(::uStatic* __this, JNIEnv* jni, ::uString* name, bool systemClass);
jclass JNI__LoadClass_3(::uStatic* __this, JNIEnv* jni, const char* name, bool systemClass);
jclass JNI__LocalToGlobalRef(::uStatic* __this, jclass obj);
jobject JNI__LocalToGlobalRef_2(::uStatic* __this, jobject obj);
jobject JNI__NewFloatArray(::uStatic* __this, int len_);
jclass JNI__NewGlobalRef_1(::uStatic* __this, jclass obj);
jobject JNI__NewGlobalRef_2(::uStatic* __this, jobject obj_);
jobject JNI__NewObject_1(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0);
jobject JNI__NewObject_2(::uStatic* __this, jclass cls, jmethodID mtd, jvalue arg0, jvalue arg1);
jobject JNI__NewWeakGlobalRef(::uStatic* __this, jobject obj_);
void JNI__SetFloatArrayElement(::uStatic* __this, ::uObject* obj_, int i_, float val_);
void JNI__SetObjectArrayElement(::uStatic* __this, ::uObject* obj_, int i_, jobject val_);
void JNI__ThrowNewException(::uStatic* __this, ::uString* message_);
::app::Uno::Exception* JNI__TryGetException(::uStatic* __this, JNIEnv* jni, ::uString* appendMessage);

}}}


#endif
