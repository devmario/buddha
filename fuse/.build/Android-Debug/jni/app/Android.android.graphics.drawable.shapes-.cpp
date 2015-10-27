#include <app/Android.android.graphics.drawable.shapes.ArcShape.h>
#include <app/Android.android.graphics.drawable.shapes.RectShape.h>
#include <app/Android.android.graphics.drawable.shapes.RoundRectShape.h>
#include <app/Android.android.graphics.drawable.shapes.Shape.h>
#include <app/Android.android.graphics.RectF.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_graphics_drawable_shapes_Shape.h>
#include <app/Android.Runtime.FloatArray.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace android {
namespace graphics {
namespace drawable {
namespace shapes {

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/drawable/shapes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ArcShape___javaClass_4;
jmethodID ArcShape__ArcShape_5935_ID_c;

ArcShape__uType* ArcShape__typeof()
{
    static ::uStaticStrong<ArcShape__uType*> type;
    if (type != NULL) return type;

    type = (ArcShape__uType*)::uAllocClassType(sizeof(ArcShape__uType), "Android.android.graphics.drawable.shapes.ArcShape", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::graphics::drawable::shapes::RectShape__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ArcShape__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArcShape__uType, __interface_1));

    return type;
}

void ArcShape___Init_4(::uStatic* __this)
{
    if (::app::Android::android::graphics::drawable::shapes::ArcShape___javaClass_4) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::drawable::shapes::ArcShape___javaClass_4 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/drawable/shapes/ArcShape"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::drawable::shapes::ArcShape___javaClass_4) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.drawable.shapes.ArcShape'", 65);; }
}

void ArcShape___ObjInit_9(ArcShape* __this, float arg0, float arg1)
{
    ::app::Android::android::graphics::drawable::shapes::RectShape___ObjInit_7(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::graphics::drawable::shapes::ArcShape___javaClass_4,::app::Android::android::graphics::drawable::shapes::ArcShape___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::graphics::drawable::shapes::ArcShape__ArcShape_5935_ID_c,::app::Android::android::graphics::drawable::shapes::ArcShape___javaClass_4,"<init>","(FF)V",GetMethodID,"Id for fallback method android.graphics.drawable.shapes.ArcShape.<init> could not be cached",91);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::graphics::drawable::shapes::ArcShape___javaClass_4, ::app::Android::android::graphics::drawable::shapes::ArcShape__ArcShape_5935_ID_c, ((jfloat)arg0), ((jfloat)arg1));;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

ArcShape* ArcShape__New_8(::uStatic* __this, float arg0, float arg1)
{
    ArcShape* inst = (ArcShape*)::uAllocObject(sizeof(ArcShape), ArcShape__typeof());
    inst->_ObjInit_9(arg0, arg1);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/drawable/shapes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RectShape__uType* RectShape__typeof()
{
    static ::uStaticStrong<RectShape__uType*> type;
    if (type != NULL) return type;

    type = (RectShape__uType*)::uAllocClassType(sizeof(RectShape__uType), "Android.android.graphics.drawable.shapes.RectShape", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::graphics::drawable::shapes::Shape__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(RectShape__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(RectShape__uType, __interface_1));

    return type;
}

void RectShape___ObjInit_7(RectShape* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::graphics::drawable::shapes::Shape___ObjInit_4(__this, obj, utype, hasFallbackClass, resolveType);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/drawable/shapes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass RoundRectShape___javaClass_4;
jmethodID RoundRectShape__RoundRectShape_5948_ID_c;

RoundRectShape__uType* RoundRectShape__typeof()
{
    static ::uStaticStrong<RoundRectShape__uType*> type;
    if (type != NULL) return type;

    type = (RoundRectShape__uType*)::uAllocClassType(sizeof(RoundRectShape__uType), "Android.android.graphics.drawable.shapes.RoundRectShape", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::graphics::drawable::shapes::RectShape__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(RoundRectShape__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(RoundRectShape__uType, __interface_1));

    return type;
}

void RoundRectShape___Init_4(::uStatic* __this)
{
    if (::app::Android::android::graphics::drawable::shapes::RoundRectShape___javaClass_4) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::drawable::shapes::RoundRectShape___javaClass_4 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/drawable/shapes/RoundRectShape"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::drawable::shapes::RoundRectShape___javaClass_4) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.drawable.shapes.RoundRectShape'", 71);; }
}

void RoundRectShape___ObjInit_8(RoundRectShape* __this, ::app::Android::Runtime::FloatArray* arg0, ::app::Android::android::graphics::RectF* arg1, ::app::Android::Runtime::FloatArray* arg2)
{
    ::app::Android::android::graphics::drawable::shapes::RectShape___ObjInit_7(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::graphics::drawable::shapes::RoundRectShape___javaClass_4,::app::Android::android::graphics::drawable::shapes::RoundRectShape___Init_4(NULL));;
    CACHE_METHOD(::app::Android::android::graphics::drawable::shapes::RoundRectShape__RoundRectShape_5948_ID_c,::app::Android::android::graphics::drawable::shapes::RoundRectShape___javaClass_4,"<init>","([FLandroid/graphics/RectF;[F)V",GetMethodID,"Id for fallback method android.graphics.drawable.shapes.RoundRectShape.<init> could not be cached",97);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject _obArg1 = ((!arg1) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg1));;
    jobject _obArg2 = ((!arg2) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::graphics::drawable::shapes::RoundRectShape___javaClass_4, ::app::Android::android::graphics::drawable::shapes::RoundRectShape__RoundRectShape_5948_ID_c, _obArg0, _obArg1, _obArg2);;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

RoundRectShape* RoundRectShape__New_8(::uStatic* __this, ::app::Android::Runtime::FloatArray* arg0, ::app::Android::android::graphics::RectF* arg1, ::app::Android::Runtime::FloatArray* arg2)
{
    RoundRectShape* inst = (RoundRectShape*)::uAllocObject(sizeof(RoundRectShape), RoundRectShape__typeof());
    inst->_ObjInit_8(arg0, arg1, arg2);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/drawable/shapes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Shape__uType* Shape__typeof()
{
    static ::uStaticStrong<Shape__uType*> type;
    if (type != NULL) return type;

    type = (Shape__uType*)::uAllocClassType(sizeof(Shape__uType), "Android.android.graphics.drawable.shapes.Shape", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Shape__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Shape__uType, __interface_1));

    return type;
}

void Shape___ObjInit_4(Shape* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, obj, utype, hasFallbackClass, resolveType);
}

}}}}}}
