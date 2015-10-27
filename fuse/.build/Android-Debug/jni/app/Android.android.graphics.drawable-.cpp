#include <app/Android.android.graphics.drawable.Drawable.h>
#include <app/Android.android.graphics.drawable.LayerDrawable.h>
#include <app/Android.android.graphics.drawable.ShapeDrawable.h>
#include <app/Android.android.graphics.drawable.shapes.Shape.h>
#include <app/Android.android.graphics.Paint.h>
#include <app/Android.android.graphics.PorterDuffDLRMode.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h>
#include <app/Android.Runtime.ObjectArray__Android_android_graphics_drawable_Drawable.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace android {
namespace graphics {
namespace drawable {

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/drawable/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Drawable___javaClass_2;
jmethodID Drawable__setColorFilter_6079_ID;

Drawable__uType* Drawable__typeof()
{
    static ::uStaticStrong<Drawable__uType*> type;
    if (type != NULL) return type;

    type = (Drawable__uType*)::uAllocClassType(sizeof(Drawable__uType), "Android.android.graphics.drawable.Drawable", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Drawable__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Drawable__uType, __interface_1));

    return type;
}

void Drawable___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::drawable::Drawable___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::drawable::Drawable___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/drawable/Drawable"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::drawable::Drawable___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.drawable.Drawable'", 58);; }
}

void Drawable___ObjInit_4(Drawable* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, obj, utype, hasFallbackClass, resolveType);
}

void Drawable__setColorFilter_1(Drawable* __this, int arg0, ::app::Android::android::graphics::PorterDuffDLRMode* arg1)
{
    Drawable__setColorFilter_IMPL_6079(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

void Drawable__setColorFilter_IMPL_6079(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::drawable::Drawable___javaClass_2,::app::Android::android::graphics::drawable::Drawable___Init_2(NULL));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    CACHE_METHOD(::app::Android::android::graphics::drawable::Drawable__setColorFilter_6079_ID,::app::Android::android::graphics::drawable::Drawable___javaClass_2,"setColorFilter","(ILandroid/graphics/PorterDuff$Mode;)V",GetMethodID,"Id for fallback method android.graphics.drawable.Drawable.setColorFilter could not be cached",92);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::drawable::Drawable___javaClass_2, ::app::Android::android::graphics::drawable::Drawable__setColorFilter_6079_ID, ((jint)arg2_), _obArg3);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::drawable::Drawable__setColorFilter_6079_ID, ((jint)arg2_), _obArg3);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/drawable/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass LayerDrawable___javaClass_3;
jmethodID LayerDrawable__getDrawable_6241_ID;
jmethodID LayerDrawable__getNumberOfLayers_6240_ID;
jmethodID LayerDrawable__LayerDrawable_6236_ID_c;

LayerDrawable__uType* LayerDrawable__typeof()
{
    static ::uStaticStrong<LayerDrawable__uType*> type;
    if (type != NULL) return type;

    type = (LayerDrawable__uType*)::uAllocClassType(sizeof(LayerDrawable__uType), "Android.android.graphics.drawable.LayerDrawable", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::graphics::drawable::Drawable__typeof());
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(LayerDrawable__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(LayerDrawable__uType, __interface_1));

    return type;
}

void LayerDrawable___Init_3(::uStatic* __this)
{
    if (::app::Android::android::graphics::drawable::LayerDrawable___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::drawable::LayerDrawable___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/drawable/LayerDrawable"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::drawable::LayerDrawable___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.drawable.LayerDrawable'", 63);; }
}

void LayerDrawable___ObjInit_7(LayerDrawable* __this, ::app::Android::Runtime::ObjectArray__Android_android_graphics_drawable_Drawable* arg0)
{
    ::app::Android::android::graphics::drawable::Drawable___ObjInit_4(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::graphics::drawable::LayerDrawable___javaClass_3,::app::Android::android::graphics::drawable::LayerDrawable___Init_3(NULL));;
    CACHE_METHOD(::app::Android::android::graphics::drawable::LayerDrawable__LayerDrawable_6236_ID_c,::app::Android::android::graphics::drawable::LayerDrawable___javaClass_3,"<init>","([Landroid/graphics/drawable/Drawable;)V",GetMethodID,"Id for fallback method android.graphics.drawable.LayerDrawable.<init> could not be cached",89);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::graphics::drawable::LayerDrawable___javaClass_3, ::app::Android::android::graphics::drawable::LayerDrawable__LayerDrawable_6236_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

::app::Android::android::graphics::drawable::Drawable* LayerDrawable__getDrawable(LayerDrawable* __this, int arg0)
{
    return ::uCast< ::app::Android::android::graphics::drawable::Drawable*>(LayerDrawable__getDrawable_IMPL_6241(NULL, __this->_subclassed, __this->_javaObject, arg0), ::app::Android::android::graphics::drawable::Drawable__typeof());
}

::uObject* LayerDrawable__getDrawable_IMPL_6241(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::drawable::LayerDrawable___javaClass_3,::app::Android::android::graphics::drawable::LayerDrawable___Init_3(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::drawable::LayerDrawable__getDrawable_6241_ID,::app::Android::android::graphics::drawable::LayerDrawable___javaClass_3,"getDrawable","(I)Landroid/graphics/drawable/Drawable;",GetMethodID,"Id for fallback method android.graphics.drawable.LayerDrawable.getDrawable could not be cached",94);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::graphics::drawable::LayerDrawable___javaClass_3, ::app::Android::android::graphics::drawable::LayerDrawable__getDrawable_6241_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_graphics_drawable_Drawable__typeof(),::app::Android::android::graphics::drawable::Drawable*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::graphics::drawable::LayerDrawable__getDrawable_6241_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_graphics_drawable_Drawable__typeof(),::app::Android::android::graphics::drawable::Drawable*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int LayerDrawable__getNumberOfLayers(LayerDrawable* __this)
{
    return LayerDrawable__getNumberOfLayers_IMPL_6240(NULL, __this->_subclassed, __this->_javaObject);
}

int LayerDrawable__getNumberOfLayers_IMPL_6240(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::drawable::LayerDrawable___javaClass_3,::app::Android::android::graphics::drawable::LayerDrawable___Init_3(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::graphics::drawable::LayerDrawable__getNumberOfLayers_6240_ID,::app::Android::android::graphics::drawable::LayerDrawable___javaClass_3,"getNumberOfLayers","()I",GetMethodID,"Id for fallback method android.graphics.drawable.LayerDrawable.getNumberOfLayers could not be cached",100);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::graphics::drawable::LayerDrawable___javaClass_3, ::app::Android::android::graphics::drawable::LayerDrawable__getNumberOfLayers_6240_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::graphics::drawable::LayerDrawable__getNumberOfLayers_6240_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

LayerDrawable* LayerDrawable__New_6(::uStatic* __this, ::app::Android::Runtime::ObjectArray__Android_android_graphics_drawable_Drawable* arg0)
{
    LayerDrawable* inst = (LayerDrawable*)::uAllocObject(sizeof(LayerDrawable), LayerDrawable__typeof());
    inst->_ObjInit_7(arg0);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/drawable/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ShapeDrawable___javaClass_3;
jmethodID ShapeDrawable__getPaint_6368_ID;
jmethodID ShapeDrawable__setShape_6365_ID;
jmethodID ShapeDrawable__ShapeDrawable_6362_ID_c;

ShapeDrawable__uType* ShapeDrawable__typeof()
{
    static ::uStaticStrong<ShapeDrawable__uType*> type;
    if (type != NULL) return type;

    type = (ShapeDrawable__uType*)::uAllocClassType(sizeof(ShapeDrawable__uType), "Android.android.graphics.drawable.ShapeDrawable", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::graphics::drawable::Drawable__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ShapeDrawable__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ShapeDrawable__uType, __interface_1));

    return type;
}

void ShapeDrawable___Init_3(::uStatic* __this)
{
    if (::app::Android::android::graphics::drawable::ShapeDrawable___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::drawable::ShapeDrawable___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/drawable/ShapeDrawable"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::drawable::ShapeDrawable___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.drawable.ShapeDrawable'", 63);; }
}

void ShapeDrawable___ObjInit_7(ShapeDrawable* __this)
{
    ::app::Android::android::graphics::drawable::Drawable___ObjInit_4(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::graphics::drawable::ShapeDrawable___javaClass_3,::app::Android::android::graphics::drawable::ShapeDrawable___Init_3(NULL));;
    CACHE_METHOD(::app::Android::android::graphics::drawable::ShapeDrawable__ShapeDrawable_6362_ID_c,::app::Android::android::graphics::drawable::ShapeDrawable___javaClass_3,"<init>","()V",GetMethodID,"Id for fallback method android.graphics.drawable.ShapeDrawable.<init> could not be cached",89);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::graphics::drawable::ShapeDrawable___javaClass_3, ::app::Android::android::graphics::drawable::ShapeDrawable__ShapeDrawable_6362_ID_c);;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

::app::Android::android::graphics::Paint* ShapeDrawable__getPaint(ShapeDrawable* __this)
{
    return ::uCast< ::app::Android::android::graphics::Paint*>(ShapeDrawable__getPaint_IMPL_6368(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::graphics::Paint__typeof());
}

::uObject* ShapeDrawable__getPaint_IMPL_6368(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::drawable::ShapeDrawable___javaClass_3,::app::Android::android::graphics::drawable::ShapeDrawable___Init_3(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::drawable::ShapeDrawable__getPaint_6368_ID,::app::Android::android::graphics::drawable::ShapeDrawable___javaClass_3,"getPaint","()Landroid/graphics/Paint;",GetMethodID,"Id for fallback method android.graphics.drawable.ShapeDrawable.getPaint could not be cached",91);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::graphics::drawable::ShapeDrawable___javaClass_3, ::app::Android::android::graphics::drawable::ShapeDrawable__getPaint_6368_ID),result,::app::Android::android::graphics::Paint__typeof(),::app::Android::android::graphics::Paint*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::graphics::drawable::ShapeDrawable__getPaint_6368_ID),result,::app::Android::android::graphics::Paint__typeof(),::app::Android::android::graphics::Paint*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

ShapeDrawable* ShapeDrawable__New_6(::uStatic* __this)
{
    ShapeDrawable* inst = (ShapeDrawable*)::uAllocObject(sizeof(ShapeDrawable), ShapeDrawable__typeof());
    inst->_ObjInit_7();
    return inst;
}

void ShapeDrawable__setShape(ShapeDrawable* __this, ::app::Android::android::graphics::drawable::shapes::Shape* arg0)
{
    ShapeDrawable__setShape_IMPL_6365(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ShapeDrawable__setShape_IMPL_6365(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::drawable::ShapeDrawable___javaClass_3,::app::Android::android::graphics::drawable::ShapeDrawable___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::graphics::drawable::ShapeDrawable__setShape_6365_ID,::app::Android::android::graphics::drawable::ShapeDrawable___javaClass_3,"setShape","(Landroid/graphics/drawable/shapes/Shape;)V",GetMethodID,"Id for fallback method android.graphics.drawable.ShapeDrawable.setShape could not be cached",91);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::drawable::ShapeDrawable___javaClass_3, ::app::Android::android::graphics::drawable::ShapeDrawable__setShape_6365_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::drawable::ShapeDrawable__setShape_6365_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

}}}}}
