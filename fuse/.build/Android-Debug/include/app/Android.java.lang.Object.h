// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/java/lang/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_JAVA_LANG_OBJECT_H__
#define __APP_ANDROID_JAVA_LANG_OBJECT_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>
namespace app { namespace Android { namespace java { namespace lang { struct Class; } } } }
namespace app { namespace Android { namespace java { namespace lang { struct String; } } } }

namespace app {
namespace Android {
namespace java {
namespace lang {

struct Object;

extern jclass Object___javaClass_1;
extern jmethodID Object__getClass_31290_ID;
extern jmethodID Object__hashCode_31291_ID;
extern jmethodID Object__toString_31294_ID;

struct Object__uType : ::app::Android::Base::Wrappers::JWrapper__uType
{
    int(*__fp_hashCode_1)(Object*);
    ::app::Android::java::lang::String*(*__fp_toString)(Object*);
};

Object__uType* Object__typeof();

void Object___Init_1(::uStatic* __this);
void Object___ObjInit_3(Object* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType);
bool Object__Equals(Object* __this, ::uObject* obj);
::app::Android::java::lang::Class* Object__getClass(Object* __this);
::uObject* Object__getClass_IMPL_31290(::uStatic* __this, bool arg0_, jobject arg1_);
int Object__GetHashCode(Object* __this);
int Object__hashCode_1(Object* __this);
int Object__hashCode_IMPL_31291(::uStatic* __this, bool arg0_, jobject arg1_);
bool Object__op_Equality_1(::uStatic* __this, Object* a, Object* b);
bool Object__op_Inequality_1(::uStatic* __this, Object* a, Object* b);
::app::Android::java::lang::String* Object__toString(Object* __this);
::uString* Object__ToString(Object* __this);
::uObject* Object__toString_IMPL_31294(::uStatic* __this, bool arg0_, jobject arg1_);

struct Object : ::app::Android::Base::Wrappers::JWrapper
{
    void _ObjInit_3(jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType) { Object___ObjInit_3(this, obj, utype, hasFallbackClass, resolveType); }
    ::app::Android::java::lang::Class* getClass() { return Object__getClass(this); }
    int hashCode_1() { return (((Object__uType*)this->__obj_type)->__fp_hashCode_1)(this); }
    ::app::Android::java::lang::String* toString() { return (((Object__uType*)this->__obj_type)->__fp_toString)(this); }
};

}}}}


#endif
