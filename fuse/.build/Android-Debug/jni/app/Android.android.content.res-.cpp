#include <app/Android.android.content.res.AssetManager.h>
#include <app/Android.android.content.res.ColorStateList.h>
#include <app/Android.android.content.res.Configuration.h>
#include <app/Android.android.content.res.Resources.h>
#include <app/Android.android.graphics.drawable.Drawable.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h>
#include <app/Android.Fallbacks.Android_java_io_InputStream.h>
#include <app/Android.java.io.InputStream.h>
#include <app/Android.java.lang.String.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>

namespace app {
namespace Android {
namespace android {
namespace content {
namespace res {

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/content/res/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass AssetManager___javaClass_2;
jmethodID AssetManager__open_3508_ID;

AssetManager__uType* AssetManager__typeof()
{
    static ::uStaticStrong<AssetManager__uType*> type;
    if (type != NULL) return type;

    type = (AssetManager__uType*)::uAllocClassType(sizeof(AssetManager__uType), "Android.android.content.res.AssetManager", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(AssetManager__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(AssetManager__uType, __interface_1));

    return type;
}

void AssetManager___Init_2(::uStatic* __this)
{
    if (::app::Android::android::content::res::AssetManager___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::content::res::AssetManager___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/AssetManager"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::content::res::AssetManager___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.AssetManager'", 56);; }
}

::app::Android::java::io::InputStream* AssetManager__open(AssetManager* __this, ::app::Android::java::lang::String* arg0)
{
    return ::uCast< ::app::Android::java::io::InputStream*>(AssetManager__open_IMPL_3508(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::java::io::InputStream__typeof());
}

::uObject* AssetManager__open_IMPL_3508(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::res::AssetManager___javaClass_2,::app::Android::android::content::res::AssetManager___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::content::res::AssetManager__open_3508_ID,::app::Android::android::content::res::AssetManager___javaClass_2,"open","(Ljava/lang/String;)Ljava/io/InputStream;",GetMethodID,"Id for fallback method android.content.res.AssetManager.open could not be cached",80);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::content::res::AssetManager___javaClass_2, ::app::Android::android::content::res::AssetManager__open_3508_ID, _obArg2),result,::app::Android::Fallbacks::Android_java_io_InputStream__typeof(),::app::Android::java::io::InputStream*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::content::res::AssetManager__open_3508_ID, _obArg2),result,::app::Android::Fallbacks::Android_java_io_InputStream__typeof(),::app::Android::java::io::InputStream*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/content/res/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ColorStateList___javaClass_2;
jmethodID ColorStateList__getDefaultColor_3525_ID;
jmethodID ColorStateList__toString_3526_ID;

ColorStateList__uType* ColorStateList__typeof()
{
    static ::uStaticStrong<ColorStateList__uType*> type;
    if (type != NULL) return type;

    type = (ColorStateList__uType*)::uAllocClassType(sizeof(ColorStateList__uType), "Android.android.content.res.ColorStateList", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))ColorStateList__toString;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ColorStateList__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ColorStateList__uType, __interface_1));

    return type;
}

void ColorStateList___Init_2(::uStatic* __this)
{
    if (::app::Android::android::content::res::ColorStateList___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::content::res::ColorStateList___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/ColorStateList"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::content::res::ColorStateList___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.ColorStateList'", 58);; }
}

int ColorStateList__getDefaultColor(ColorStateList* __this)
{
    return ColorStateList__getDefaultColor_IMPL_3525(NULL, __this->_subclassed, __this->_javaObject);
}

int ColorStateList__getDefaultColor_IMPL_3525(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::res::ColorStateList___javaClass_2,::app::Android::android::content::res::ColorStateList___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::content::res::ColorStateList__getDefaultColor_3525_ID,::app::Android::android::content::res::ColorStateList___javaClass_2,"getDefaultColor","()I",GetMethodID,"Id for fallback method android.content.res.ColorStateList.getDefaultColor could not be cached",93);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::content::res::ColorStateList___javaClass_2, ::app::Android::android::content::res::ColorStateList__getDefaultColor_3525_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::content::res::ColorStateList__getDefaultColor_3525_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* ColorStateList__toString(ColorStateList* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(ColorStateList__toString_IMPL_3526(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* ColorStateList__toString_IMPL_3526(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::res::ColorStateList___javaClass_2,::app::Android::android::content::res::ColorStateList___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::content::res::ColorStateList__toString_3526_ID,::app::Android::android::content::res::ColorStateList___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.res.ColorStateList.toString could not be cached",86);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::content::res::ColorStateList___javaClass_2, ::app::Android::android::content::res::ColorStateList__toString_3526_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::content::res::ColorStateList__toString_3526_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/content/res/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Configuration___javaClass_2;
jmethodID Configuration__hashCode_3620_ID;
jmethodID Configuration__toString_3609_ID;

Configuration__uType* Configuration__typeof()
{
    static ::uStaticStrong<Configuration__uType*> type;
    if (type != NULL) return type;

    type = (Configuration__uType*)::uAllocClassType(sizeof(Configuration__uType), "Android.android.content.res.Configuration", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))Configuration__hashCode_1;
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Configuration__toString;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Configuration__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Configuration__uType, __interface_1));

    return type;
}

void Configuration___Init_2(::uStatic* __this)
{
    if (::app::Android::android::content::res::Configuration___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::content::res::Configuration___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/Configuration"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::content::res::Configuration___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.Configuration'", 57);; }
}

int Configuration__hashCode_1(Configuration* __this)
{
    return Configuration__hashCode_IMPL_3620(NULL, __this->_subclassed, __this->_javaObject);
}

int Configuration__hashCode_IMPL_3620(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::res::Configuration___javaClass_2,::app::Android::android::content::res::Configuration___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::content::res::Configuration__hashCode_3620_ID,::app::Android::android::content::res::Configuration___javaClass_2,"hashCode","()I",GetMethodID,"Id for fallback method android.content.res.Configuration.hashCode could not be cached",85);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::content::res::Configuration___javaClass_2, ::app::Android::android::content::res::Configuration__hashCode_3620_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::content::res::Configuration__hashCode_3620_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Configuration__toString(Configuration* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Configuration__toString_IMPL_3609(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Configuration__toString_IMPL_3609(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::res::Configuration___javaClass_2,::app::Android::android::content::res::Configuration___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::content::res::Configuration__toString_3609_ID,::app::Android::android::content::res::Configuration___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.content.res.Configuration.toString could not be cached",85);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::content::res::Configuration___javaClass_2, ::app::Android::android::content::res::Configuration__toString_3609_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::content::res::Configuration__toString_3609_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/content/res/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Resources___javaClass_2;
jmethodID Resources__getDrawable_3664_ID;

Resources__uType* Resources__typeof()
{
    static ::uStaticStrong<Resources__uType*> type;
    if (type != NULL) return type;

    type = (Resources__uType*)::uAllocClassType(sizeof(Resources__uType), "Android.android.content.res.Resources", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Resources__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Resources__uType, __interface_1));

    return type;
}

void Resources___Init_2(::uStatic* __this)
{
    if (::app::Android::android::content::res::Resources___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::content::res::Resources___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/content/res/Resources"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::content::res::Resources___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.content.res.Resources'", 53);; }
}

::app::Android::android::graphics::drawable::Drawable* Resources__getDrawable(Resources* __this, int arg0)
{
    return ::uCast< ::app::Android::android::graphics::drawable::Drawable*>(Resources__getDrawable_IMPL_3664(NULL, __this->_subclassed, __this->_javaObject, arg0), ::app::Android::android::graphics::drawable::Drawable__typeof());
}

::uObject* Resources__getDrawable_IMPL_3664(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::content::res::Resources___javaClass_2,::app::Android::android::content::res::Resources___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::content::res::Resources__getDrawable_3664_ID,::app::Android::android::content::res::Resources___javaClass_2,"getDrawable","(I)Landroid/graphics/drawable/Drawable;",GetMethodID,"Id for fallback method android.content.res.Resources.getDrawable could not be cached",84);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::content::res::Resources___javaClass_2, ::app::Android::android::content::res::Resources__getDrawable_3664_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_graphics_drawable_Drawable__typeof(),::app::Android::android::graphics::drawable::Drawable*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::content::res::Resources__getDrawable_3664_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_graphics_drawable_Drawable__typeof(),::app::Android::android::graphics::drawable::Drawable*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

}}}}}
