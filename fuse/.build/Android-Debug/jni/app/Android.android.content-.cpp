#include <app/Android.android.content.ComponentName.h>
#include <app/Android.android.content.Context.h>
#include <app/Android.android.content.ContextWrapper.h>
#include <app/Android.android.content.Intent.h>
#include <app/Android.android.content.res.AssetManager.h>
#include <app/Android.android.content.res.Resources.h>
#include <app/Android.android.net.Uri.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jfieldID.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_content_Context.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.String.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace android {
namespace content {

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/content/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ComponentName___javaClass_2;
jmethodID ComponentName__hashCode_3882_ID;
jmethodID ComponentName__toString_3880_ID;

ComponentName__uType* ComponentName__typeof()
{
    static ::uStaticStrong<ComponentName__uType*> type;
    if (type != NULL) return type;

    type = (ComponentName__uType*)::uAllocClassType(sizeof(ComponentName__uType), "Android.android.content.ComponentName", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))ComponentName__hashCode_1;
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))ComponentName__toString;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ComponentName__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ComponentName__uType, __interface_1));

    return type;
}

void ComponentName___Init_2(::uStatic* __this)
{
    if (::app::Android::android::content::ComponentName___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::content::ComponentName___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/ComponentName"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::content::ComponentName___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.ComponentName'", 53);; }
}

int ComponentName__hashCode_1(ComponentName* __this)
{
    return ComponentName__hashCode_IMPL_3882(NULL, __this->_subclassed, __this->_javaObject);
}

int ComponentName__hashCode_IMPL_3882(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::ComponentName___javaClass_2,::app::Android::android::content::ComponentName___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::content::ComponentName__hashCode_3882_ID,::app::Android::android::content::ComponentName___javaClass_2,"hashCode","()I",GetMethodID,"Id for fallback method android.content.ComponentName.hashCode could not be cached",81);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::content::ComponentName___javaClass_2, ::app::Android::android::content::ComponentName__hashCode_3882_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::content::ComponentName__hashCode_3882_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* ComponentName__toString(ComponentName* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(ComponentName__toString_IMPL_3880(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* ComponentName__toString_IMPL_3880(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::ComponentName___javaClass_2,::app::Android::android::content::ComponentName___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::content::ComponentName__toString_3880_ID,::app::Android::android::content::ComponentName___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.ComponentName.toString could not be cached",81);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::content::ComponentName___javaClass_2, ::app::Android::android::content::ComponentName__toString_3880_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::content::ComponentName__toString_3880_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/content/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Context___javaClass_2;
jfieldID Context__INPUT_METHOD_SERVICE_4144_ID;
jfieldID Context__VIBRATOR_SERVICE_4135_ID;

Context__uType* Context__typeof()
{
    static ::uStaticStrong<Context__uType*> type;
    if (type != NULL) return type;

    type = (Context__uType*)::uAllocClassType(sizeof(Context__uType), "Android.android.content.Context", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Context__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Context__uType, __interface_1));

    return type;
}

void Context___Init_2(::uStatic* __this)
{
    if (::app::Android::android::content::Context___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::content::Context___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/Context"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::content::Context___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.Context'", 47);; }
}

void Context___ObjInit_4(Context* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, obj, utype, hasFallbackClass, resolveType);
}

::app::Android::java::lang::String* Context__get_INPUT_METHOD_SERVICE(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::Context___javaClass_2,::app::Android::android::content::Context___Init_2(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::content::Context__INPUT_METHOD_SERVICE_4144_ID)) {;
    CACHE_FIELD(::app::Android::android::content::Context__INPUT_METHOD_SERVICE_4144_ID,::app::Android::android::content::Context___javaClass_2,"INPUT_METHOD_SERVICE","Ljava/lang/String;",GetStaticFieldID,"Id for field Context.INPUT_METHOD_SERVICE could not be cached",61);
    ::uExitCritical();;
    };
    ::app::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::content::Context___javaClass_2, ::app::Android::android::content::Context__INPUT_METHOD_SERVICE_4144_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);;
    return ::uCast< ::app::Android::java::lang::String*>(result, ::app::Android::java::lang::String__typeof());
}

::app::Android::java::lang::String* Context__get_VIBRATOR_SERVICE(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::Context___javaClass_2,::app::Android::android::content::Context___Init_2(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::content::Context__VIBRATOR_SERVICE_4135_ID)) {;
    CACHE_FIELD(::app::Android::android::content::Context__VIBRATOR_SERVICE_4135_ID,::app::Android::android::content::Context___javaClass_2,"VIBRATOR_SERVICE","Ljava/lang/String;",GetStaticFieldID,"Id for field Context.VIBRATOR_SERVICE could not be cached",57);
    ::uExitCritical();;
    };
    ::app::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::content::Context___javaClass_2, ::app::Android::android::content::Context__VIBRATOR_SERVICE_4135_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);;
    return ::uCast< ::app::Android::java::lang::String*>(result, ::app::Android::java::lang::String__typeof());
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/content/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ContextWrapper___javaClass_3;
jmethodID ContextWrapper__getAssets_4263_ID;
jmethodID ContextWrapper__getResources_4264_ID;
jmethodID ContextWrapper__getSystemService_4330_ID;

ContextWrapper__uType* ContextWrapper__typeof()
{
    static ::uStaticStrong<ContextWrapper__uType*> type;
    if (type != NULL) return type;

    type = (ContextWrapper__uType*)::uAllocClassType(sizeof(ContextWrapper__uType), "Android.android.content.ContextWrapper", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::content::Context__typeof());
    type->__fp_getResources = (::app::Android::android::content::res::Resources*(*)(::app::Android::android::content::Context*))ContextWrapper__getResources;
    type->__fp_getSystemService = (::app::Android::java::lang::Object*(*)(::app::Android::android::content::Context*, ::app::Android::java::lang::String*))ContextWrapper__getSystemService;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ContextWrapper__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ContextWrapper__uType, __interface_1));

    return type;
}

void ContextWrapper___Init_3(::uStatic* __this)
{
    if (::app::Android::android::content::ContextWrapper___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::content::ContextWrapper___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/ContextWrapper"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::content::ContextWrapper___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.ContextWrapper'", 54);; }
}

void ContextWrapper___ObjInit_7(ContextWrapper* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::content::Context___ObjInit_4(__this, obj, utype, hasFallbackClass, resolveType);
}

::app::Android::android::content::res::AssetManager* ContextWrapper__getAssets(ContextWrapper* __this)
{
    return ::uCast< ::app::Android::android::content::res::AssetManager*>(ContextWrapper__getAssets_IMPL_4263(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::content::res::AssetManager__typeof());
}

::uObject* ContextWrapper__getAssets_IMPL_4263(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::ContextWrapper___javaClass_3,::app::Android::android::content::ContextWrapper___Init_3(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::content::ContextWrapper__getAssets_4263_ID,::app::Android::android::content::ContextWrapper___javaClass_3,"getAssets","()Landroid/content/res/AssetManager;",GetMethodID,"Id for fallback method android.content.ContextWrapper.getAssets could not be cached",83);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::content::ContextWrapper___javaClass_3, ::app::Android::android::content::ContextWrapper__getAssets_4263_ID),result,::app::Android::android::content::res::AssetManager__typeof(),::app::Android::android::content::res::AssetManager*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::content::ContextWrapper__getAssets_4263_ID),result,::app::Android::android::content::res::AssetManager__typeof(),::app::Android::android::content::res::AssetManager*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::content::res::Resources* ContextWrapper__getResources(ContextWrapper* __this)
{
    return ::uCast< ::app::Android::android::content::res::Resources*>(ContextWrapper__getResources_IMPL_4264(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::content::res::Resources__typeof());
}

::uObject* ContextWrapper__getResources_IMPL_4264(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::ContextWrapper___javaClass_3,::app::Android::android::content::ContextWrapper___Init_3(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::content::ContextWrapper__getResources_4264_ID,::app::Android::android::content::ContextWrapper___javaClass_3,"getResources","()Landroid/content/res/Resources;",GetMethodID,"Id for fallback method android.content.ContextWrapper.getResources could not be cached",86);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::content::ContextWrapper___javaClass_3, ::app::Android::android::content::ContextWrapper__getResources_4264_ID),result,::app::Android::android::content::res::Resources__typeof(),::app::Android::android::content::res::Resources*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::content::ContextWrapper__getResources_4264_ID),result,::app::Android::android::content::res::Resources__typeof(),::app::Android::android::content::res::Resources*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::Object* ContextWrapper__getSystemService(ContextWrapper* __this, ::app::Android::java::lang::String* arg0)
{
    return ::uCast< ::app::Android::java::lang::Object*>(ContextWrapper__getSystemService_IMPL_4330(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::java::lang::Object__typeof());
}

::uObject* ContextWrapper__getSystemService_IMPL_4330(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::ContextWrapper___javaClass_3,::app::Android::android::content::ContextWrapper___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::content::ContextWrapper__getSystemService_4330_ID,::app::Android::android::content::ContextWrapper___javaClass_3,"getSystemService","(Ljava/lang/String;)Ljava/lang/Object;",GetMethodID,"Id for fallback method android.content.ContextWrapper.getSystemService could not be cached",90);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::content::ContextWrapper___javaClass_3, ::app::Android::android::content::ContextWrapper__getSystemService_4330_ID, _obArg2),result,::app::Android::java::lang::Object__typeof(),::app::Android::java::lang::Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::content::ContextWrapper__getSystemService_4330_ID, _obArg2),result,::app::Android::java::lang::Object__typeof(),::app::Android::java::lang::Object*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/content/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Intent___javaClass_2;
jfieldID Intent__ACTION_CALL_4422_ID;
jfieldID Intent__ACTION_SENDTO_4423_ID;
jfieldID Intent__ACTION_VIEW_4408_ID;
jmethodID Intent__Intent_4637_ID_c;
jmethodID Intent__setClassName_4749_ID;
jmethodID Intent__setData_4701_ID;
jmethodID Intent__toString_4755_ID;

Intent__uType* Intent__typeof()
{
    static ::uStaticStrong<Intent__uType*> type;
    if (type != NULL) return type;

    type = (Intent__uType*)::uAllocClassType(sizeof(Intent__uType), "Android.android.content.Intent", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Intent__toString;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Intent__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Intent__uType, __interface_1));

    return type;
}

void Intent___Init_2(::uStatic* __this)
{
    if (::app::Android::android::content::Intent___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::content::Intent___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/Intent"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::content::Intent___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.Intent'", 46);; }
}

void Intent___ObjInit_4(Intent* __this, ::app::Android::java::lang::String* arg0)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::content::Intent___javaClass_2,::app::Android::android::content::Intent___Init_2(NULL));;
    CACHE_METHOD(::app::Android::android::content::Intent__Intent_4637_ID_c,::app::Android::android::content::Intent___javaClass_2,"<init>","(Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.content.Intent.<init> could not be cached",72);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::content::Intent___javaClass_2, ::app::Android::android::content::Intent__Intent_4637_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

::app::Android::java::lang::String* Intent__get_ACTION_CALL(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::Intent___javaClass_2,::app::Android::android::content::Intent___Init_2(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::content::Intent__ACTION_CALL_4422_ID)) {;
    CACHE_FIELD(::app::Android::android::content::Intent__ACTION_CALL_4422_ID,::app::Android::android::content::Intent___javaClass_2,"ACTION_CALL","Ljava/lang/String;",GetStaticFieldID,"Id for field Intent.ACTION_CALL could not be cached",51);
    ::uExitCritical();;
    };
    ::app::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::content::Intent___javaClass_2, ::app::Android::android::content::Intent__ACTION_CALL_4422_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);;
    return ::uCast< ::app::Android::java::lang::String*>(result, ::app::Android::java::lang::String__typeof());
}

::app::Android::java::lang::String* Intent__get_ACTION_SENDTO(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::Intent___javaClass_2,::app::Android::android::content::Intent___Init_2(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::content::Intent__ACTION_SENDTO_4423_ID)) {;
    CACHE_FIELD(::app::Android::android::content::Intent__ACTION_SENDTO_4423_ID,::app::Android::android::content::Intent___javaClass_2,"ACTION_SENDTO","Ljava/lang/String;",GetStaticFieldID,"Id for field Intent.ACTION_SENDTO could not be cached",53);
    ::uExitCritical();;
    };
    ::app::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::content::Intent___javaClass_2, ::app::Android::android::content::Intent__ACTION_SENDTO_4423_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);;
    return ::uCast< ::app::Android::java::lang::String*>(result, ::app::Android::java::lang::String__typeof());
}

::app::Android::java::lang::String* Intent__get_ACTION_VIEW(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::Intent___javaClass_2,::app::Android::android::content::Intent___Init_2(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::content::Intent__ACTION_VIEW_4408_ID)) {;
    CACHE_FIELD(::app::Android::android::content::Intent__ACTION_VIEW_4408_ID,::app::Android::android::content::Intent___javaClass_2,"ACTION_VIEW","Ljava/lang/String;",GetStaticFieldID,"Id for field Intent.ACTION_VIEW could not be cached",51);
    ::uExitCritical();;
    };
    ::app::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::content::Intent___javaClass_2, ::app::Android::android::content::Intent__ACTION_VIEW_4408_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);;
    return ::uCast< ::app::Android::java::lang::String*>(result, ::app::Android::java::lang::String__typeof());
}

Intent* Intent__New_5(::uStatic* __this, ::app::Android::java::lang::String* arg0)
{
    Intent* inst = (Intent*)::uAllocObject(sizeof(Intent), Intent__typeof());
    inst->_ObjInit_4(arg0);
    return inst;
}

Intent* Intent__setClassName_1(Intent* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1)
{
    return ::uCast< Intent*>(Intent__setClassName_IMPL_4749(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1), Intent__typeof());
}

::uObject* Intent__setClassName_IMPL_4749(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::Intent___javaClass_2,::app::Android::android::content::Intent___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::content::Intent__setClassName_4749_ID,::app::Android::android::content::Intent___javaClass_2,"setClassName","(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;",GetMethodID,"Id for fallback method android.content.Intent.setClassName could not be cached",78);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::content::Intent___javaClass_2, ::app::Android::android::content::Intent__setClassName_4749_ID, _obArg2, _obArg3),result,::app::Android::android::content::Intent__typeof(),Intent*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::content::Intent__setClassName_4749_ID, _obArg2, _obArg3),result,::app::Android::android::content::Intent__typeof(),Intent*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

Intent* Intent__setData(Intent* __this, ::app::Android::android::net::Uri* arg0)
{
    return ::uCast< Intent*>(Intent__setData_IMPL_4701(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), Intent__typeof());
}

::uObject* Intent__setData_IMPL_4701(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::Intent___javaClass_2,::app::Android::android::content::Intent___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::content::Intent__setData_4701_ID,::app::Android::android::content::Intent___javaClass_2,"setData","(Landroid/net/Uri;)Landroid/content/Intent;",GetMethodID,"Id for fallback method android.content.Intent.setData could not be cached",73);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::content::Intent___javaClass_2, ::app::Android::android::content::Intent__setData_4701_ID, _obArg2),result,::app::Android::android::content::Intent__typeof(),Intent*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::content::Intent__setData_4701_ID, _obArg2),result,::app::Android::android::content::Intent__typeof(),Intent*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Intent__toString(Intent* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Intent__toString_IMPL_4755(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Intent__toString_IMPL_4755(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::Intent___javaClass_2,::app::Android::android::content::Intent___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::content::Intent__toString_4755_ID,::app::Android::android::content::Intent___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.Intent.toString could not be cached",74);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::content::Intent___javaClass_2, ::app::Android::android::content::Intent__toString_4755_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::content::Intent__toString_4755_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

}}}}
