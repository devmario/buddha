#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.JNIEnvPtr.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Types.String.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_java_lang_CharSequence.h>
#include <app/Android.Fallbacks.Android_java_lang_Runnable.h>
#include <app/Android.java.lang.CharSequence.h>
#include <app/Android.java.lang.Class.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.reflect.Field.h>
#include <app/Android.java.lang.Runnable.h>
#include <app/Android.java.lang.String.h>
#include <app/Android.java.lang.System.h>
#include <app/Android.java.lang.Thread.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace java {
namespace lang {

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/java/lang/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* CharSequence__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.java.lang.CharSequence");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/java/lang/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Class___javaClass_2;
jmethodID Class__forName_30884_ID;
jmethodID Class__getDeclaredField_30898_ID;
jmethodID Class__toString_30936_ID;

Class__uType* Class__typeof()
{
    static ::uStaticStrong<Class__uType*> type;
    if (type != NULL) return type;

    type = (Class__uType*)::uAllocClassType(sizeof(Class__uType), "Android.java.lang.Class", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Class__toString;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Class__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Class__uType, __interface_1));

    return type;
}

void Class___Init_2(::uStatic* __this)
{
    if (::app::Android::java::lang::Class___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::java::lang::Class___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/Class"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::java::lang::Class___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.Class'", 39);; }
}

Class* Class__forName_1(::uStatic* __this, ::app::Android::java::lang::String* arg0)
{
    return ::uCast< Class*>(Class__forName_IMPL_30884(NULL, (::uObject*)arg0), Class__typeof());
}

::uObject* Class__forName_IMPL_30884(::uStatic* __this, ::uObject* arg0_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Class___javaClass_2,::app::Android::java::lang::Class___Init_2(NULL));
    jobject _obArg0 = ((!arg0_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::lang::Class__forName_30884_ID,::app::Android::java::lang::Class___javaClass_2,"forName","(Ljava/lang/String;)Ljava/lang/Class;",GetStaticMethodID,"Id for fallback method java.lang.Class.forName could not be cached",66);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(::app::Android::java::lang::Class___javaClass_2, ::app::Android::java::lang::Class__forName_30884_ID, _obArg0),result,::app::Android::java::lang::Class__typeof(),Class*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::reflect::Field* Class__getDeclaredField(Class* __this, ::app::Android::java::lang::String* arg0)
{
    return ::uCast< ::app::Android::java::lang::reflect::Field*>(Class__getDeclaredField_IMPL_30898(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::java::lang::reflect::Field__typeof());
}

::uObject* Class__getDeclaredField_IMPL_30898(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Class___javaClass_2,::app::Android::java::lang::Class___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::lang::Class__getDeclaredField_30898_ID,::app::Android::java::lang::Class___javaClass_2,"getDeclaredField","(Ljava/lang/String;)Ljava/lang/reflect/Field;",GetMethodID,"Id for fallback method java.lang.Class.getDeclaredField could not be cached",75);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::java::lang::Class___javaClass_2, ::app::Android::java::lang::Class__getDeclaredField_30898_ID, _obArg2),result,::app::Android::java::lang::reflect::Field__typeof(),::app::Android::java::lang::reflect::Field*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::java::lang::Class__getDeclaredField_30898_ID, _obArg2),result,::app::Android::java::lang::reflect::Field__typeof(),::app::Android::java::lang::reflect::Field*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Class__toString(Class* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Class__toString_IMPL_30936(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Class__toString_IMPL_30936(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Class___javaClass_2,::app::Android::java::lang::Class___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::lang::Class__toString_30936_ID,::app::Android::java::lang::Class___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.Class.toString could not be cached",67);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::java::lang::Class___javaClass_2, ::app::Android::java::lang::Class__toString_30936_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::java::lang::Class__toString_30936_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/java/lang/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Object___javaClass_1;
jmethodID Object__getClass_31290_ID;
jmethodID Object__hashCode_31291_ID;
jmethodID Object__toString_31294_ID;

Object__uType* Object__typeof()
{
    static ::uStaticStrong<Object__uType*> type;
    if (type != NULL) return type;

    type = (Object__uType*)::uAllocClassType(sizeof(Object__uType), "Android.java.lang.Object", false, 2, 0, 0);

    type->SetBaseType(::app::Android::Base::Wrappers::JWrapper__typeof());
    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))Object__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))Object__GetHashCode;
    type->__fp_hashCode_1 = Object__hashCode_1;
    type->__fp_toString = Object__toString;
    type->__fp_ToString = (::uString*(*)(::uObject*))Object__ToString;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Object__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Object__uType, __interface_1));

    return type;
}

void Object___Init_1(::uStatic* __this)
{
    if (::app::Android::java::lang::Object___javaClass_1) { return; }
    INIT_JNI;
    ::app::Android::java::lang::Object___javaClass_1 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/Object"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::java::lang::Object___javaClass_1) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.Object'", 40);; }
}

void Object___ObjInit_3(Object* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::Base::Wrappers::JWrapper___ObjInit(__this, obj, utype, hasFallbackClass, resolveType);
}

bool Object__Equals(Object* __this, ::uObject* obj)
{
    if (obj != NULL)
    {
        ::uObject* tmp = ::uAs< ::uObject*>(obj, ::app::Android::Base::Wrappers::IJWrapper__typeof());

        if (tmp != NULL)
        {
            return ::app::Android::Base::JNI__IsSameObject(NULL, __this->_javaObject, ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(::uPtr< ::uObject*>(tmp)));
        }
    }

    return false;
}

::app::Android::java::lang::Class* Object__getClass(Object* __this)
{
    return ::uCast< ::app::Android::java::lang::Class*>(Object__getClass_IMPL_31290(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::Class__typeof());
}

::uObject* Object__getClass_IMPL_31290(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Object___javaClass_1,::app::Android::java::lang::Object___Init_1(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::lang::Object__getClass_31290_ID,::app::Android::java::lang::Object___javaClass_1,"getClass","()Ljava/lang/Class;",GetMethodID,"Id for fallback method java.lang.Object.getClass could not be cached",68);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::java::lang::Object___javaClass_1, ::app::Android::java::lang::Object__getClass_31290_ID),result,::app::Android::java::lang::Class__typeof(),::app::Android::java::lang::Class*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::java::lang::Object__getClass_31290_ID),result,::app::Android::java::lang::Class__typeof(),::app::Android::java::lang::Class*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Object__GetHashCode(Object* __this)
{
    return __this->hashCode_1();
}

int Object__hashCode_1(Object* __this)
{
    return Object__hashCode_IMPL_31291(NULL, __this->_subclassed, __this->_javaObject);
}

int Object__hashCode_IMPL_31291(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Object___javaClass_1,::app::Android::java::lang::Object___Init_1(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::java::lang::Object__hashCode_31291_ID,::app::Android::java::lang::Object___javaClass_1,"hashCode","()I",GetMethodID,"Id for fallback method java.lang.Object.hashCode could not be cached",68);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::java::lang::Object___javaClass_1, ::app::Android::java::lang::Object__hashCode_31291_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::java::lang::Object__hashCode_31291_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Object__op_Equality_1(::uStatic* __this, Object* a, Object* b)
{
    if (((::uObject*)a == NULL) || ((::uObject*)b == NULL))
    {
        return (::uObject*)b == (::uObject*)a;
    }
    else
    {
        return ::app::Android::Base::JNI__IsSameObject(NULL, ::uPtr< Object*>(a)->_GetJavaObject(), ::uPtr< Object*>(b)->_GetJavaObject());
    }
}

bool Object__op_Inequality_1(::uStatic* __this, Object* a, Object* b)
{
    return !Object__op_Equality_1(NULL, a, b);
}

::app::Android::java::lang::String* Object__toString(Object* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Object__toString_IMPL_31294(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uString* Object__ToString(Object* __this)
{
    return ::app::Android::java::lang::String__op_Implicit_1(NULL, __this->toString());
}

::uObject* Object__toString_IMPL_31294(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Object___javaClass_1,::app::Android::java::lang::Object___Init_1(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::lang::Object__toString_31294_ID,::app::Android::java::lang::Object___javaClass_1,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.Object.toString could not be cached",68);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::java::lang::Object___javaClass_1, ::app::Android::java::lang::Object__toString_31294_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::java::lang::Object__toString_31294_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/java/lang/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* Runnable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.java.lang.Runnable");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/java/lang/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass String___javaClass_2;
jmethodID String__charAt_31531_ID;
jmethodID String__hashCode_31545_ID;
jmethodID String__length_31556_ID;
jmethodID String__subSequence_31588_ID;
jmethodID String__toString_31568_ID;

String__uType* String__typeof()
{
    static ::uStaticStrong<String__uType*> type;
    if (type != NULL) return type;

    type = (String__uType*)::uAllocClassType(sizeof(String__uType), "Android.java.lang.String", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))String__hashCode_1;
    type->__fp_toString = (String*(*)(::app::Android::java::lang::Object*))String__toString;
    type->__interface_2.__fp_length = (int(*)(void*))String__length;
    type->__interface_2.__fp_charAt = (::uChar(*)(void*, int))String__charAt;
    type->__interface_2.__fp_subSequence = (::uObject*(*)(void*, int, int))String__subSequence;
    type->__interface_2.__fp_toString = (String*(*)(void*))String__toString;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(String__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(String__uType, __interface_1),
        ::app::Android::java::lang::CharSequence__typeof(), offsetof(String__uType, __interface_2));

    return type;
}

void String___Init_2(::uStatic* __this)
{
    if (::app::Android::java::lang::String___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::java::lang::String___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/String"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::java::lang::String___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.String'", 40);; }
}

void String___ObjInit_13(String* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, obj, utype, hasFallbackClass, resolveType);
}

::uChar String__charAt(String* __this, int arg0)
{
    return String__charAt_IMPL_31531(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uChar String__charAt_IMPL_31531(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::String___javaClass_2,::app::Android::java::lang::String___Init_2(NULL));
    
    ::uChar result;
    CACHE_METHOD(::app::Android::java::lang::String__charAt_31531_ID,::app::Android::java::lang::String___javaClass_2,"charAt","(I)C",GetMethodID,"Id for fallback method java.lang.String.charAt could not be cached",66);
    if (arg0_) {
        result = ((::uChar)U_JNIVAR->CallNonvirtualCharMethod(arg1_, ::app::Android::java::lang::String___javaClass_2, ::app::Android::java::lang::String__charAt_31531_ID, ((jint)arg2_)));
    }
    else
    {
        result = ((::uChar)U_JNIVAR->CallCharMethod(arg1_, ::app::Android::java::lang::String__charAt_31531_ID, ((jint)arg2_)));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int String__hashCode_1(String* __this)
{
    return String__hashCode_IMPL_31545(NULL, __this->_subclassed, __this->_javaObject);
}

int String__hashCode_IMPL_31545(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::String___javaClass_2,::app::Android::java::lang::String___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::java::lang::String__hashCode_31545_ID,::app::Android::java::lang::String___javaClass_2,"hashCode","()I",GetMethodID,"Id for fallback method java.lang.String.hashCode could not be cached",68);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::java::lang::String___javaClass_2, ::app::Android::java::lang::String__hashCode_31545_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::java::lang::String__hashCode_31545_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int String__length(String* __this)
{
    return String__length_IMPL_31556(NULL, __this->_subclassed, __this->_javaObject);
}

int String__length_IMPL_31556(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::String___javaClass_2,::app::Android::java::lang::String___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::java::lang::String__length_31556_ID,::app::Android::java::lang::String___javaClass_2,"length","()I",GetMethodID,"Id for fallback method java.lang.String.length could not be cached",66);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::java::lang::String___javaClass_2, ::app::Android::java::lang::String__length_31556_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::java::lang::String__length_31556_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

String* String__New_15(::uStatic* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    String* inst = (String*)::uAllocObject(sizeof(String), String__typeof());
    inst->_ObjInit_13(obj, utype, hasFallbackClass, resolveType);
    return inst;
}

String* String__op_Implicit(::uStatic* __this, ::uString* str)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)str, NULL))
    {
        return NULL;
    }
    else
    {
        return String__New_15(NULL, ::app::Android::Base::Types::String__UnoToJava_1(NULL, ::app::Android::Base::JNI__GetEnvPtr(NULL), str), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    }
}

::uString* String__op_Implicit_1(::uStatic* __this, String* str)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)str, NULL))
    {
        return NULL;
    }
    else
    {
        return ::app::Android::Base::Types::String__JavaToUno_2(NULL, ::app::Android::Base::JNI__GetEnvPtr(NULL), ::uPtr< String*>(str)->_GetJavaObject());
    }
}

::uObject* String__subSequence(String* __this, int arg0, int arg1)
{
    return (::uObject*)String__subSequence_IMPL_31588(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

::uObject* String__subSequence_IMPL_31588(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::String___javaClass_2,::app::Android::java::lang::String___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::lang::String__subSequence_31588_ID,::app::Android::java::lang::String___javaClass_2,"subSequence","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method java.lang.String.subSequence could not be cached",71);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::java::lang::String___javaClass_2, ::app::Android::java::lang::String__subSequence_31588_ID, ((jint)arg2_), ((jint)arg3_)),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::java::lang::String__subSequence_31588_ID, ((jint)arg2_), ((jint)arg3_)),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

String* String__toString(String* __this)
{
    return ::uCast< String*>(String__toString_IMPL_31568(NULL, __this->_subclassed, __this->_javaObject), String__typeof());
}

::uObject* String__toString_IMPL_31568(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::String___javaClass_2,::app::Android::java::lang::String___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::lang::String__toString_31568_ID,::app::Android::java::lang::String___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.String.toString could not be cached",68);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::java::lang::String___javaClass_2, ::app::Android::java::lang::String__toString_31568_ID),result,::app::Android::java::lang::String__typeof(),String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::java::lang::String__toString_31568_ID),result,::app::Android::java::lang::String__typeof(),String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/java/lang/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass System___javaClass_2;
jmethodID System__nanoTime_31693_ID;

System__uType* System__typeof()
{
    static ::uStaticStrong<System__uType*> type;
    if (type != NULL) return type;

    type = (System__uType*)::uAllocClassType(sizeof(System__uType), "Android.java.lang.System", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(System__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(System__uType, __interface_1));

    return type;
}

void System___Init_2(::uStatic* __this)
{
    if (::app::Android::java::lang::System___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::java::lang::System___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/System"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::java::lang::System___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.System'", 40);; }
}

::uLong System__nanoTime(::uStatic* __this)
{
    return System__nanoTime_IMPL_31693(NULL);
}

::uLong System__nanoTime_IMPL_31693(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::System___javaClass_2,::app::Android::java::lang::System___Init_2(NULL));
    
    ::uLong result;
    CACHE_METHOD(::app::Android::java::lang::System__nanoTime_31693_ID,::app::Android::java::lang::System___javaClass_2,"nanoTime","()J",GetStaticMethodID,"Id for fallback method java.lang.System.nanoTime could not be cached",68);
    result = ((::uLong)U_JNIVAR->CallStaticLongMethod(::app::Android::java::lang::System___javaClass_2, ::app::Android::java::lang::System__nanoTime_31693_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/java/lang/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Thread___javaClass_2;
jmethodID Thread__run_31761_ID;
jmethodID Thread__start_31770_ID;
jmethodID Thread__stop_31771_ID;
jmethodID Thread__Thread_31728_ID_c;
jmethodID Thread__toString_31774_ID;

Thread__uType* Thread__typeof()
{
    static ::uStaticStrong<Thread__uType*> type;
    if (type != NULL) return type;

    type = (Thread__uType*)::uAllocClassType(sizeof(Thread__uType), "Android.java.lang.Thread", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Thread__toString;
    type->__interface_2.__fp_run = (void(*)(void*))Thread__run;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Thread__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Thread__uType, __interface_1),
        ::app::Android::java::lang::Runnable__typeof(), offsetof(Thread__uType, __interface_2));

    return type;
}

void Thread___Init_2(::uStatic* __this)
{
    if (::app::Android::java::lang::Thread___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::java::lang::Thread___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/Thread"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::java::lang::Thread___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.Thread'", 40);; }
}

void Thread___ObjInit_10(Thread* __this, ::uObject* arg0)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::java::lang::Thread___javaClass_2,::app::Android::java::lang::Thread___Init_2(NULL));;
    CACHE_METHOD(::app::Android::java::lang::Thread__Thread_31728_ID_c,::app::Android::java::lang::Thread___javaClass_2,"<init>","(Ljava/lang/Runnable;)V",GetMethodID,"Id for fallback method java.lang.Thread.<init> could not be cached",66);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::java::lang::Thread___javaClass_2, ::app::Android::java::lang::Thread__Thread_31728_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

Thread* Thread__New_5(::uStatic* __this, ::uObject* arg0)
{
    Thread* inst = (Thread*)::uAllocObject(sizeof(Thread), Thread__typeof());
    inst->_ObjInit_10(arg0);
    return inst;
}

void Thread__run(Thread* __this)
{
    Thread__run_IMPL_31761(NULL, __this->_subclassed, __this->_javaObject);
}

void Thread__run_IMPL_31761(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Thread___javaClass_2,::app::Android::java::lang::Thread___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::java::lang::Thread__run_31761_ID,::app::Android::java::lang::Thread___javaClass_2,"run","()V",GetMethodID,"Id for fallback method java.lang.Thread.run could not be cached",63);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::java::lang::Thread___javaClass_2, ::app::Android::java::lang::Thread__run_31761_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::java::lang::Thread__run_31761_ID);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Thread__start(Thread* __this)
{
    Thread__start_IMPL_31770(NULL, __this->_subclassed, __this->_javaObject);
}

void Thread__start_IMPL_31770(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Thread___javaClass_2,::app::Android::java::lang::Thread___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::java::lang::Thread__start_31770_ID,::app::Android::java::lang::Thread___javaClass_2,"start","()V",GetMethodID,"Id for fallback method java.lang.Thread.start could not be cached",65);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::java::lang::Thread___javaClass_2, ::app::Android::java::lang::Thread__start_31770_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::java::lang::Thread__start_31770_ID);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Thread__stop_1(Thread* __this)
{
    Thread__stop_IMPL_31771(NULL, __this->_subclassed, __this->_javaObject);
}

void Thread__stop_IMPL_31771(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Thread___javaClass_2,::app::Android::java::lang::Thread___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::java::lang::Thread__stop_31771_ID,::app::Android::java::lang::Thread___javaClass_2,"stop","()V",GetMethodID,"Id for fallback method java.lang.Thread.stop could not be cached",64);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::java::lang::Thread___javaClass_2, ::app::Android::java::lang::Thread__stop_31771_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::java::lang::Thread__stop_31771_ID);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

::app::Android::java::lang::String* Thread__toString(Thread* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Thread__toString_IMPL_31774(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Thread__toString_IMPL_31774(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::java::lang::Thread___javaClass_2,::app::Android::java::lang::Thread___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::java::lang::Thread__toString_31774_ID,::app::Android::java::lang::Thread___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.Thread.toString could not be cached",68);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::java::lang::Thread___javaClass_2, ::app::Android::java::lang::Thread__toString_31774_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::java::lang::Thread__toString_31774_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

}}}}
