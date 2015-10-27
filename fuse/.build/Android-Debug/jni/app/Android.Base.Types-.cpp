#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.ConstCharPtr.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.JNIEnvPtr.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Types.Arrays.h>
#include <app/Android.Base.Types.Bridge.h>
#include <app/Android.Base.Types.ByteBuffer.h>
#include <app/Android.Base.Types.String.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace Base {
namespace Types {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Android/Source/Base/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Arrays__uType* Arrays__typeof()
{
    static ::uStaticStrong<Arrays__uType*> type;
    if (type != NULL) return type;

    type = (Arrays__uType*)::uAllocClassType(sizeof(Arrays__uType), "Android.Base.Types.Arrays");

    return type;
}

::uArray* Arrays__JavaToUnoByteArray(::uStatic* __this, jobject arr_, ::uLong len_)
{
    if (!arr_) return NULL;
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    jbyteArray jarr = (jbyteArray)arr_;
    long len = len_;
    uArray* arr = ::uNewArray(::app::Uno::Byte__typeof(), len);
    jni->GetByteArrayRegion(jarr, 0, len, (jbyte*)arr->_ptr);
    return arr;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Android/Source/Base/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Bridge___helperCls;
bool Bridge___inited;
jmethodID Bridge___javaToUnoMid;
jmethodID Bridge___registerFallbackMid;
jmethodID Bridge___registerTypeMid;
jmethodID Bridge___unoToJavaMid;

Bridge__uType* Bridge__typeof()
{
    static ::uStaticStrong<Bridge__uType*> type;
    if (type != NULL) return type;

    type = (Bridge__uType*)::uAllocClassType(sizeof(Bridge__uType), "Android.Base.Types.Bridge");

    return type;
}

void Bridge__Init(::uStatic* __this)
{
    if (::app::Android::Base::Types::Bridge___inited) { return; }
    ::app::Android::Base::JNI__Init(NULL);
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    ::app::Android::Base::Types::Bridge___helperCls = reinterpret_cast<jclass>(jni->NewGlobalRef(::app::Android::Base::JNI__LoadClass_3(NULL, ::app::Android::Base::JNI__GetEnvPtr(NULL), "com.Bindings.UnoHelper", false)));
    if (!::app::Android::Base::Types::Bridge___helperCls) {
        U_THROW(::app::Uno::Exception__New_2(NULL, uNewStringUtf8("Could not cache class for UnoHelper",35)));
    }
    
    ::app::Android::Base::Types::Bridge___registerTypeMid = jni->GetStaticMethodID(::app::Android::Base::Types::Bridge___helperCls, "RegisterUnoType", "(Ljava/lang/String;J)V");
    ::app::Android::Base::Types::Bridge___registerFallbackMid = jni->GetStaticMethodID(::app::Android::Base::Types::Bridge___helperCls, "RegisterUnoFallback", "(Ljava/lang/String;J)V");
    ::app::Android::Base::Types::Bridge___javaToUnoMid = jni->GetStaticMethodID(::app::Android::Base::Types::Bridge___helperCls, "JavaToUnoType", "(Ljava/lang/Object;JZ)J");
    ::app::Android::Base::Types::Bridge___unoToJavaMid = jni->GetStaticMethodID(::app::Android::Base::Types::Bridge___helperCls, "UnoToJavaType", "(J)Ljava/lang/Class;");
    
    if ((!::app::Android::Base::Types::Bridge___registerTypeMid) || (!::app::Android::Base::Types::Bridge___registerFallbackMid) || (!::app::Android::Base::Types::Bridge___javaToUnoMid) || (!::app::Android::Base::Types::Bridge___unoToJavaMid)) {
        U_THROW(::app::Uno::Exception__New_2(NULL, uNewStringUtf8("Could not cache methods for UnoHelper", 37)));
    }
    ::app::Android::Base::Types::Bridge___inited = true;
}

::uType* Bridge__JavaToUnoType(::uStatic* __this, jobject javaObj, ::uType* fallbackType, bool typeHasFallbackClass)
{
    if (!Bridge___inited)
    {
        Bridge__Init(NULL);
    }

    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    ::uType* result = (::uType*)jni->CallStaticLongMethod(Bridge___helperCls, Bridge___javaToUnoMid, javaObj, (jlong)fallbackType, (jboolean)typeHasFallbackClass);
    ::app::Uno::Exception* excep = ::app::Android::Base::JNI__TryGetException(NULL, jni, NULL);

    if (excep != NULL)
    {
        jmethodID grabClass = jni->GetMethodID(jni->FindClass("java/lang/Object"), "getClass", "()Ljava/lang/Class;");
        jmethodID toString = jni->GetMethodID(jni->FindClass("java/lang/Object"), "toString", "()Ljava/lang/String;");
        jobject cls = jni->CallObjectMethod(javaObj, grabClass);
        jobject estring = (jobject)jni->CallObjectMethod(cls, toString);
        ::uString* x = ::app::Android::Base::Types::String__JavaToUno_1(NULL, estring);
        excep = ::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uPtr< ::app::Uno::Exception*>(excep)->Message(), ::uGetConstString("\nTried to find uno class for java type ")), x), ::uGetConstString("\n")));
        U_THROW(excep);
    }

    return result;
}

void Bridge__RegisterUnoFallback(::uStatic* __this, const char* typeName_, int nameLen_, ::uType* typePtr_)
{
    if (!::app::Android::Base::Types::Bridge___inited) { ::app::Android::Base::Types::Bridge__Init(NULL); }
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    
    char *buf = (char*)malloc(nameLen_ + 1);
    strcpy(buf, typeName_);
    jstring javaTypeName = jni->NewStringUTF(buf);
    
    jni->CallStaticVoidMethod(::app::Android::Base::Types::Bridge___helperCls, ::app::Android::Base::Types::Bridge___registerFallbackMid, javaTypeName, ((jlong)typePtr_));
    ::app::Android::Base::JNI__CheckException_2(NULL, jni);
    jni->DeleteLocalRef(javaTypeName);
    free(buf);
}

void Bridge__RegisterUnoType(::uStatic* __this, const char* typeName_, int nameLen_, ::uType* typePtr_)
{
    if (!::app::Android::Base::Types::Bridge___inited) { ::app::Android::Base::Types::Bridge__Init(NULL); }
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    
    char *buf = (char*)malloc(nameLen_ + 1);
    strcpy(buf, typeName_);
    jstring javaTypeName = jni->NewStringUTF(buf);
    
    jni->CallStaticVoidMethod(::app::Android::Base::Types::Bridge___helperCls, ::app::Android::Base::Types::Bridge___registerTypeMid, javaTypeName, ((jlong)typePtr_));
    ::app::Android::Base::JNI__CheckException_2(NULL, jni);
    jni->DeleteLocalRef(javaTypeName);
    free(buf);
}

void Bridge__SetWrapperType(::uStatic* __this, ::app::Android::Base::Wrappers::JWrapper* wrapper_, jobject obj_, ::uType* typePtr_, bool typeHasFallbackClass_, bool resolveType_)
{
    if (!wrapper_) {
        U_THROW(::app::Uno::Exception__New_2(NULL, uNewStringUtf8("Trying to set type of null object",33)));
    } else if ((!obj_) && resolveType_) {
        U_THROW(::app::Uno::Exception__New_2(NULL, uNewStringUtf8("Have requested to infer type from jobject but jobject is null",61)));
    } else {
        if (typePtr_) {
            wrapper_->__obj_type = typePtr_;
        }
        if (obj_ && resolveType_) {
            wrapper_->__obj_type = ((uType*)::app::Android::Base::Types::Bridge__JavaToUnoType(NULL, obj_, wrapper_->__obj_type, typeHasFallbackClass_));
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Android/Source/Base/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ByteBuffer__uType* ByteBuffer__typeof()
{
    static ::uStaticStrong<ByteBuffer__uType*> type;
    if (type != NULL) return type;

    type = (ByteBuffer__uType*)::uAllocClassType(sizeof(ByteBuffer__uType), "Android.Base.Types.ByteBuffer");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Targets/CPlusPlus/Android/Source/Base/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

String__uType* String__typeof()
{
    static ::uStaticStrong<String__uType*> type;
    if (type != NULL) return type;

    type = (String__uType*)::uAllocClassType(sizeof(String__uType), "Android.Base.Types.String");

    return type;
}

::uString* String__JavaToUno(::uStatic* __this, ::uObject* jstr)
{
    if (jstr != NULL)
    {
        return String__JavaToUno_2(NULL, ::app::Android::Base::JNI__GetEnvPtr(NULL), ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(::uPtr< ::uObject*>(jstr)));
    }
    else
    {
        return NULL;
    }
}

::uString* String__JavaToUno_1(::uStatic* __this, jobject jstr)
{
    if (::app::Android::Base::Primitives::ujobject__op_Inequality(NULL, jstr, ::app::Android::Base::Primitives::ujobject__get_Null(NULL)))
    {
        return String__JavaToUno_2(NULL, ::app::Android::Base::JNI__GetEnvPtr(NULL), jstr);
    }
    else
    {
        return NULL;
    }
}

::uString* String__JavaToUno_2(::uStatic* __this, JNIEnv* jni_, jobject jstr_)
{
    if (!jstr_) { return NULL; }
    jobject str = jni_->NewLocalRef(jstr_);
    const jchar* raw =  jni_->GetStringChars((jstring)str, NULL);
    int len = jni_->GetStringLength((jstring)str);
    int size = len * sizeof(jchar);
    uString* result = ::uAllocString(len);
    memcpy(result->_ptr, (void*)raw, size);
    jni_->ReleaseStringChars((jstring)str, raw);
    jni_->DeleteLocalRef(str);
    return result;
}

jobject String__UnoToJava(::uStatic* __this, ::uString* str)
{
    if (::app::Uno::String__op_Inequality(NULL, str, NULL))
    {
        return String__UnoToJava_1(NULL, ::app::Android::Base::JNI__GetEnvPtr(NULL), str);
    }
    else
    {
        return ::app::Android::Base::Primitives::ujobject__get_Null(NULL);
    }
}

jobject String__UnoToJava_1(::uStatic* __this, JNIEnv* jni_, ::uString* str_)
{
    return (jobject)(jni_->NewString(str_->_ptr, str_->_len));
}

}}}}
