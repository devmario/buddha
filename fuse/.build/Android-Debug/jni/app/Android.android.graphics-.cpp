#include <app/Android.android.content.res.AssetManager.h>
#include <app/Android.android.graphics.Bitmap.h>
#include <app/Android.android.graphics.BitmapDLRConfig.h>
#include <app/Android.android.graphics.BitmapFactory.h>
#include <app/Android.android.graphics.Canvas.h>
#include <app/Android.android.graphics.Color.h>
#include <app/Android.android.graphics.Matrix.h>
#include <app/Android.android.graphics.Paint.h>
#include <app/Android.android.graphics.PaintDLRStyle.h>
#include <app/Android.android.graphics.PorterDuffDLRMode.h>
#include <app/Android.android.graphics.Rect.h>
#include <app/Android.android.graphics.RectF.h>
#include <app/Android.android.graphics.SurfaceTexture.h>
#include <app/Android.android.graphics.Typeface.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jfieldID.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.java.io.InputStream.h>
#include <app/Android.java.lang.String.h>
#include <app/Android.Runtime.FloatArray.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace android {
namespace graphics {

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Bitmap___javaClass_2;
jmethodID Bitmap__createBitmap_6455_ID;
jmethodID Bitmap__eraseColor_6482_ID;
jmethodID Bitmap__recycle_6445_ID;
jmethodID Bitmap__setHasMipMap_6481_ID;

Bitmap__uType* Bitmap__typeof()
{
    static ::uStaticStrong<Bitmap__uType*> type;
    if (type != NULL) return type;

    type = (Bitmap__uType*)::uAllocClassType(sizeof(Bitmap__uType), "Android.android.graphics.Bitmap", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Bitmap__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Bitmap__uType, __interface_1));

    return type;
}

void Bitmap___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::Bitmap___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::Bitmap___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Bitmap"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::Bitmap___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Bitmap'", 47);; }
}

Bitmap* Bitmap__createBitmap_2(::uStatic* __this, int arg0, int arg1, ::app::Android::android::graphics::BitmapDLRConfig* arg2)
{
    return ::uCast< Bitmap*>(Bitmap__createBitmap_IMPL_6455(NULL, arg0, arg1, (::uObject*)arg2), Bitmap__typeof());
}

::uObject* Bitmap__createBitmap_IMPL_6455(::uStatic* __this, int arg0_, int arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Bitmap___javaClass_2,::app::Android::android::graphics::Bitmap___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::Bitmap__createBitmap_6455_ID,::app::Android::android::graphics::Bitmap___javaClass_2,"createBitmap","(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",GetStaticMethodID,"Id for fallback method android.graphics.Bitmap.createBitmap could not be cached",79);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(::app::Android::android::graphics::Bitmap___javaClass_2, ::app::Android::android::graphics::Bitmap__createBitmap_6455_ID, ((jint)arg0_), ((jint)arg1_), _obArg2),result,::app::Android::android::graphics::Bitmap__typeof(),Bitmap*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void Bitmap__eraseColor(Bitmap* __this, int arg0)
{
    Bitmap__eraseColor_IMPL_6482(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Bitmap__eraseColor_IMPL_6482(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Bitmap___javaClass_2,::app::Android::android::graphics::Bitmap___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Bitmap__eraseColor_6482_ID,::app::Android::android::graphics::Bitmap___javaClass_2,"eraseColor","(I)V",GetMethodID,"Id for fallback method android.graphics.Bitmap.eraseColor could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Bitmap___javaClass_2, ::app::Android::android::graphics::Bitmap__eraseColor_6482_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Bitmap__eraseColor_6482_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Bitmap__recycle(Bitmap* __this)
{
    Bitmap__recycle_IMPL_6445(NULL, __this->_subclassed, __this->_javaObject);
}

void Bitmap__recycle_IMPL_6445(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Bitmap___javaClass_2,::app::Android::android::graphics::Bitmap___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Bitmap__recycle_6445_ID,::app::Android::android::graphics::Bitmap___javaClass_2,"recycle","()V",GetMethodID,"Id for fallback method android.graphics.Bitmap.recycle could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Bitmap___javaClass_2, ::app::Android::android::graphics::Bitmap__recycle_6445_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Bitmap__recycle_6445_ID);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Bitmap__setHasMipMap(Bitmap* __this, bool arg0)
{
    Bitmap__setHasMipMap_IMPL_6481(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Bitmap__setHasMipMap_IMPL_6481(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Bitmap___javaClass_2,::app::Android::android::graphics::Bitmap___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Bitmap__setHasMipMap_6481_ID,::app::Android::android::graphics::Bitmap___javaClass_2,"setHasMipMap","(Z)V",GetMethodID,"Id for fallback method android.graphics.Bitmap.setHasMipMap could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Bitmap___javaClass_2, ::app::Android::android::graphics::Bitmap__setHasMipMap_6481_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Bitmap__setHasMipMap_6481_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass BitmapDLRConfig___javaClass_3;
jfieldID BitmapDLRConfig__ARGB_8888_6432_ID;

BitmapDLRConfig__uType* BitmapDLRConfig__typeof()
{
    static ::uStaticStrong<BitmapDLRConfig__uType*> type;
    if (type != NULL) return type;

    type = (BitmapDLRConfig__uType*)::uAllocClassType(sizeof(BitmapDLRConfig__uType), "Android.android.graphics.BitmapDLRConfig", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(BitmapDLRConfig__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(BitmapDLRConfig__uType, __interface_1));

    return type;
}

void BitmapDLRConfig___Init_3(::uStatic* __this)
{
    if (::app::Android::android::graphics::BitmapDLRConfig___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::BitmapDLRConfig___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Bitmap$Config"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::BitmapDLRConfig___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Bitmap$Config'", 54);; }
}

BitmapDLRConfig* BitmapDLRConfig__get_ARGB_8888(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::BitmapDLRConfig___javaClass_3,::app::Android::android::graphics::BitmapDLRConfig___Init_3(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::BitmapDLRConfig__ARGB_8888_6432_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::BitmapDLRConfig__ARGB_8888_6432_ID,::app::Android::android::graphics::BitmapDLRConfig___javaClass_3,"ARGB_8888","Landroid/graphics/Bitmap$Config;",GetStaticFieldID,"Id for field BitmapDLRConfig.ARGB_8888 could not be cached",58);
    ::uExitCritical();;
    };
    BitmapDLRConfig* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::graphics::BitmapDLRConfig___javaClass_3, ::app::Android::android::graphics::BitmapDLRConfig__ARGB_8888_6432_ID),result,::app::Android::android::graphics::BitmapDLRConfig__typeof(),BitmapDLRConfig*,false,true);;
    return ::uCast< BitmapDLRConfig*>(result, BitmapDLRConfig__typeof());
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass BitmapFactory___javaClass_2;
jmethodID BitmapFactory__decodeFile_6516_ID;
jmethodID BitmapFactory__decodeStream_6523_ID;

BitmapFactory__uType* BitmapFactory__typeof()
{
    static ::uStaticStrong<BitmapFactory__uType*> type;
    if (type != NULL) return type;

    type = (BitmapFactory__uType*)::uAllocClassType(sizeof(BitmapFactory__uType), "Android.android.graphics.BitmapFactory", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(BitmapFactory__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(BitmapFactory__uType, __interface_1));

    return type;
}

void BitmapFactory___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::BitmapFactory___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::BitmapFactory___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/BitmapFactory"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::BitmapFactory___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.BitmapFactory'", 54);; }
}

::app::Android::android::graphics::Bitmap* BitmapFactory__decodeFile_1(::uStatic* __this, ::app::Android::java::lang::String* arg0)
{
    return ::uCast< ::app::Android::android::graphics::Bitmap*>(BitmapFactory__decodeFile_IMPL_6516(NULL, (::uObject*)arg0), ::app::Android::android::graphics::Bitmap__typeof());
}

::uObject* BitmapFactory__decodeFile_IMPL_6516(::uStatic* __this, ::uObject* arg0_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::BitmapFactory___javaClass_2,::app::Android::android::graphics::BitmapFactory___Init_2(NULL));
    jobject _obArg0 = ((!arg0_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::BitmapFactory__decodeFile_6516_ID,::app::Android::android::graphics::BitmapFactory___javaClass_2,"decodeFile","(Ljava/lang/String;)Landroid/graphics/Bitmap;",GetStaticMethodID,"Id for fallback method android.graphics.BitmapFactory.decodeFile could not be cached",84);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(::app::Android::android::graphics::BitmapFactory___javaClass_2, ::app::Android::android::graphics::BitmapFactory__decodeFile_6516_ID, _obArg0),result,::app::Android::android::graphics::Bitmap__typeof(),::app::Android::android::graphics::Bitmap*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::graphics::Bitmap* BitmapFactory__decodeStream(::uStatic* __this, ::app::Android::java::io::InputStream* arg0)
{
    return ::uCast< ::app::Android::android::graphics::Bitmap*>(BitmapFactory__decodeStream_IMPL_6523(NULL, (::uObject*)arg0), ::app::Android::android::graphics::Bitmap__typeof());
}

::uObject* BitmapFactory__decodeStream_IMPL_6523(::uStatic* __this, ::uObject* arg0_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::BitmapFactory___javaClass_2,::app::Android::android::graphics::BitmapFactory___Init_2(NULL));
    jobject _obArg0 = ((!arg0_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::BitmapFactory__decodeStream_6523_ID,::app::Android::android::graphics::BitmapFactory___javaClass_2,"decodeStream","(Ljava/io/InputStream;)Landroid/graphics/Bitmap;",GetStaticMethodID,"Id for fallback method android.graphics.BitmapFactory.decodeStream could not be cached",86);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(::app::Android::android::graphics::BitmapFactory___javaClass_2, ::app::Android::android::graphics::BitmapFactory__decodeStream_6523_ID, _obArg0),result,::app::Android::android::graphics::Bitmap__typeof(),::app::Android::android::graphics::Bitmap*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Canvas___javaClass_2;
jmethodID Canvas__Canvas_6577_ID_c;
jmethodID Canvas__translate_6596_ID;

Canvas__uType* Canvas__typeof()
{
    static ::uStaticStrong<Canvas__uType*> type;
    if (type != NULL) return type;

    type = (Canvas__uType*)::uAllocClassType(sizeof(Canvas__uType), "Android.android.graphics.Canvas", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Canvas__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Canvas__uType, __interface_1));

    return type;
}

void Canvas___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::Canvas___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::Canvas___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Canvas"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::Canvas___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Canvas'", 47);; }
}

void Canvas___ObjInit_4(Canvas* __this, ::app::Android::android::graphics::Bitmap* arg0)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::graphics::Canvas___javaClass_2,::app::Android::android::graphics::Canvas___Init_2(NULL));;
    CACHE_METHOD(::app::Android::android::graphics::Canvas__Canvas_6577_ID_c,::app::Android::android::graphics::Canvas___javaClass_2,"<init>","(Landroid/graphics/Bitmap;)V",GetMethodID,"Id for fallback method android.graphics.Canvas.<init> could not be cached",73);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::graphics::Canvas___javaClass_2, ::app::Android::android::graphics::Canvas__Canvas_6577_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

Canvas* Canvas__New_7(::uStatic* __this, ::app::Android::android::graphics::Bitmap* arg0)
{
    Canvas* inst = (Canvas*)::uAllocObject(sizeof(Canvas), Canvas__typeof());
    inst->_ObjInit_4(arg0);
    return inst;
}

void Canvas__translate(Canvas* __this, float arg0, float arg1)
{
    Canvas__translate_IMPL_6596(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void Canvas__translate_IMPL_6596(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_, float arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Canvas___javaClass_2,::app::Android::android::graphics::Canvas___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Canvas__translate_6596_ID,::app::Android::android::graphics::Canvas___javaClass_2,"translate","(FF)V",GetMethodID,"Id for fallback method android.graphics.Canvas.translate could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Canvas___javaClass_2, ::app::Android::android::graphics::Canvas__translate_6596_ID, ((jfloat)arg2_), ((jfloat)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Canvas__translate_6596_ID, ((jfloat)arg2_), ((jfloat)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Color___javaClass_2;
jmethodID Color__argb_6680_ID;

Color__uType* Color__typeof()
{
    static ::uStaticStrong<Color__uType*> type;
    if (type != NULL) return type;

    type = (Color__uType*)::uAllocClassType(sizeof(Color__uType), "Android.android.graphics.Color", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Color__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Color__uType, __interface_1));

    return type;
}

void Color___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::Color___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::Color___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Color"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::Color___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Color'", 46);; }
}

int Color__argb(::uStatic* __this, int arg0, int arg1, int arg2, int arg3)
{
    return Color__argb_IMPL_6680(NULL, arg0, arg1, arg2, arg3);
}

int Color__argb_IMPL_6680(::uStatic* __this, int arg0_, int arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Color___javaClass_2,::app::Android::android::graphics::Color___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::graphics::Color__argb_6680_ID,::app::Android::android::graphics::Color___javaClass_2,"argb","(IIII)I",GetStaticMethodID,"Id for fallback method android.graphics.Color.argb could not be cached",70);
    result = ((int)U_JNIVAR->CallStaticIntMethod(::app::Android::android::graphics::Color___javaClass_2, ::app::Android::android::graphics::Color__argb_6680_ID, ((jint)arg0_), ((jint)arg1_), ((jint)arg2_), ((jint)arg3_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Matrix___javaClass_2;
jmethodID Matrix__hashCode_6770_ID;
jmethodID Matrix__Matrix_6764_ID_c;
jmethodID Matrix__setValues_6811_ID;
jmethodID Matrix__toString_6812_ID;

Matrix__uType* Matrix__typeof()
{
    static ::uStaticStrong<Matrix__uType*> type;
    if (type != NULL) return type;

    type = (Matrix__uType*)::uAllocClassType(sizeof(Matrix__uType), "Android.android.graphics.Matrix", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))Matrix__hashCode_1;
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Matrix__toString;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Matrix__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Matrix__uType, __interface_1));

    return type;
}

void Matrix___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::Matrix___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::Matrix___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Matrix"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::Matrix___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Matrix'", 47);; }
}

void Matrix___ObjInit_5(Matrix* __this)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::graphics::Matrix___javaClass_2,::app::Android::android::graphics::Matrix___Init_2(NULL));;
    CACHE_METHOD(::app::Android::android::graphics::Matrix__Matrix_6764_ID_c,::app::Android::android::graphics::Matrix___javaClass_2,"<init>","()V",GetMethodID,"Id for fallback method android.graphics.Matrix.<init> could not be cached",73);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::graphics::Matrix___javaClass_2, ::app::Android::android::graphics::Matrix__Matrix_6764_ID_c);;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

int Matrix__hashCode_1(Matrix* __this)
{
    return Matrix__hashCode_IMPL_6770(NULL, __this->_subclassed, __this->_javaObject);
}

int Matrix__hashCode_IMPL_6770(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Matrix___javaClass_2,::app::Android::android::graphics::Matrix___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::graphics::Matrix__hashCode_6770_ID,::app::Android::android::graphics::Matrix___javaClass_2,"hashCode","()I",GetMethodID,"Id for fallback method android.graphics.Matrix.hashCode could not be cached",75);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::graphics::Matrix___javaClass_2, ::app::Android::android::graphics::Matrix__hashCode_6770_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::graphics::Matrix__hashCode_6770_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

Matrix* Matrix__New_5(::uStatic* __this)
{
    Matrix* inst = (Matrix*)::uAllocObject(sizeof(Matrix), Matrix__typeof());
    inst->_ObjInit_5();
    return inst;
}

void Matrix__setValues(Matrix* __this, ::app::Android::Runtime::FloatArray* arg0)
{
    Matrix__setValues_IMPL_6811(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Matrix__setValues_IMPL_6811(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Matrix___javaClass_2,::app::Android::android::graphics::Matrix___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::graphics::Matrix__setValues_6811_ID,::app::Android::android::graphics::Matrix___javaClass_2,"setValues","([F)V",GetMethodID,"Id for fallback method android.graphics.Matrix.setValues could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Matrix___javaClass_2, ::app::Android::android::graphics::Matrix__setValues_6811_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Matrix__setValues_6811_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

::app::Android::java::lang::String* Matrix__toString(Matrix* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Matrix__toString_IMPL_6812(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Matrix__toString_IMPL_6812(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Matrix___javaClass_2,::app::Android::android::graphics::Matrix___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::Matrix__toString_6812_ID,::app::Android::android::graphics::Matrix___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.graphics.Matrix.toString could not be cached",75);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::graphics::Matrix___javaClass_2, ::app::Android::android::graphics::Matrix__toString_6812_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::graphics::Matrix__toString_6812_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Paint___javaClass_2;
jmethodID Paint__setAntiAlias_6898_ID;
jmethodID Paint__setARGB_6919_ID;
jmethodID Paint__setColor_6916_ID;
jmethodID Paint__setStrokeWidth_6921_ID;
jmethodID Paint__setStyle_6914_ID;
jmethodID Paint__setTextSize_6950_ID;
jmethodID Paint__setTypeface_6940_ID;

Paint__uType* Paint__typeof()
{
    static ::uStaticStrong<Paint__uType*> type;
    if (type != NULL) return type;

    type = (Paint__uType*)::uAllocClassType(sizeof(Paint__uType), "Android.android.graphics.Paint", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Paint__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Paint__uType, __interface_1));

    return type;
}

void Paint___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::Paint___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::Paint___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Paint"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::Paint___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Paint'", 46);; }
}

void Paint___ObjInit_7(Paint* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, obj, utype, hasFallbackClass, resolveType);
}

void Paint__setAntiAlias(Paint* __this, bool arg0)
{
    Paint__setAntiAlias_IMPL_6898(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Paint__setAntiAlias_IMPL_6898(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Paint___javaClass_2,::app::Android::android::graphics::Paint___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Paint__setAntiAlias_6898_ID,::app::Android::android::graphics::Paint___javaClass_2,"setAntiAlias","(Z)V",GetMethodID,"Id for fallback method android.graphics.Paint.setAntiAlias could not be cached",78);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Paint___javaClass_2, ::app::Android::android::graphics::Paint__setAntiAlias_6898_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Paint__setAntiAlias_6898_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Paint__setARGB(Paint* __this, int arg0, int arg1, int arg2, int arg3)
{
    Paint__setARGB_IMPL_6919(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

void Paint__setARGB_IMPL_6919(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Paint___javaClass_2,::app::Android::android::graphics::Paint___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Paint__setARGB_6919_ID,::app::Android::android::graphics::Paint___javaClass_2,"setARGB","(IIII)V",GetMethodID,"Id for fallback method android.graphics.Paint.setARGB could not be cached",73);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Paint___javaClass_2, ::app::Android::android::graphics::Paint__setARGB_6919_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Paint__setARGB_6919_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Paint__setColor(Paint* __this, int arg0)
{
    Paint__setColor_IMPL_6916(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Paint__setColor_IMPL_6916(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Paint___javaClass_2,::app::Android::android::graphics::Paint___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Paint__setColor_6916_ID,::app::Android::android::graphics::Paint___javaClass_2,"setColor","(I)V",GetMethodID,"Id for fallback method android.graphics.Paint.setColor could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Paint___javaClass_2, ::app::Android::android::graphics::Paint__setColor_6916_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Paint__setColor_6916_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Paint__setStrokeWidth(Paint* __this, float arg0)
{
    Paint__setStrokeWidth_IMPL_6921(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Paint__setStrokeWidth_IMPL_6921(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Paint___javaClass_2,::app::Android::android::graphics::Paint___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Paint__setStrokeWidth_6921_ID,::app::Android::android::graphics::Paint___javaClass_2,"setStrokeWidth","(F)V",GetMethodID,"Id for fallback method android.graphics.Paint.setStrokeWidth could not be cached",80);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Paint___javaClass_2, ::app::Android::android::graphics::Paint__setStrokeWidth_6921_ID, ((jfloat)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Paint__setStrokeWidth_6921_ID, ((jfloat)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Paint__setStyle(Paint* __this, ::app::Android::android::graphics::PaintDLRStyle* arg0)
{
    Paint__setStyle_IMPL_6914(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Paint__setStyle_IMPL_6914(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Paint___javaClass_2,::app::Android::android::graphics::Paint___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::graphics::Paint__setStyle_6914_ID,::app::Android::android::graphics::Paint___javaClass_2,"setStyle","(Landroid/graphics/Paint$Style;)V",GetMethodID,"Id for fallback method android.graphics.Paint.setStyle could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Paint___javaClass_2, ::app::Android::android::graphics::Paint__setStyle_6914_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Paint__setStyle_6914_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Paint__setTextSize(Paint* __this, float arg0)
{
    Paint__setTextSize_IMPL_6950(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Paint__setTextSize_IMPL_6950(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Paint___javaClass_2,::app::Android::android::graphics::Paint___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::graphics::Paint__setTextSize_6950_ID,::app::Android::android::graphics::Paint___javaClass_2,"setTextSize","(F)V",GetMethodID,"Id for fallback method android.graphics.Paint.setTextSize could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::graphics::Paint___javaClass_2, ::app::Android::android::graphics::Paint__setTextSize_6950_ID, ((jfloat)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::graphics::Paint__setTextSize_6950_ID, ((jfloat)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

::app::Android::android::graphics::Typeface* Paint__setTypeface(Paint* __this, ::app::Android::android::graphics::Typeface* arg0)
{
    return ::uCast< ::app::Android::android::graphics::Typeface*>(Paint__setTypeface_IMPL_6940(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::android::graphics::Typeface__typeof());
}

::uObject* Paint__setTypeface_IMPL_6940(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Paint___javaClass_2,::app::Android::android::graphics::Paint___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::Paint__setTypeface_6940_ID,::app::Android::android::graphics::Paint___javaClass_2,"setTypeface","(Landroid/graphics/Typeface;)Landroid/graphics/Typeface;",GetMethodID,"Id for fallback method android.graphics.Paint.setTypeface could not be cached",77);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::graphics::Paint___javaClass_2, ::app::Android::android::graphics::Paint__setTypeface_6940_ID, _obArg2),result,::app::Android::android::graphics::Typeface__typeof(),::app::Android::android::graphics::Typeface*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::graphics::Paint__setTypeface_6940_ID, _obArg2),result,::app::Android::android::graphics::Typeface__typeof(),::app::Android::android::graphics::Typeface*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass PaintDLRStyle___javaClass_3;
jfieldID PaintDLRStyle__STROKE_6873_ID;

PaintDLRStyle__uType* PaintDLRStyle__typeof()
{
    static ::uStaticStrong<PaintDLRStyle__uType*> type;
    if (type != NULL) return type;

    type = (PaintDLRStyle__uType*)::uAllocClassType(sizeof(PaintDLRStyle__uType), "Android.android.graphics.PaintDLRStyle", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(PaintDLRStyle__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(PaintDLRStyle__uType, __interface_1));

    return type;
}

void PaintDLRStyle___Init_3(::uStatic* __this)
{
    if (::app::Android::android::graphics::PaintDLRStyle___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::PaintDLRStyle___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Paint$Style"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::PaintDLRStyle___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Paint$Style'", 52);; }
}

PaintDLRStyle* PaintDLRStyle__get_STROKE(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::PaintDLRStyle___javaClass_3,::app::Android::android::graphics::PaintDLRStyle___Init_3(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::PaintDLRStyle__STROKE_6873_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::PaintDLRStyle__STROKE_6873_ID,::app::Android::android::graphics::PaintDLRStyle___javaClass_3,"STROKE","Landroid/graphics/Paint$Style;",GetStaticFieldID,"Id for field PaintDLRStyle.STROKE could not be cached",53);
    ::uExitCritical();;
    };
    PaintDLRStyle* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::graphics::PaintDLRStyle___javaClass_3, ::app::Android::android::graphics::PaintDLRStyle__STROKE_6873_ID),result,::app::Android::android::graphics::PaintDLRStyle__typeof(),PaintDLRStyle*,false,true);;
    return ::uCast< PaintDLRStyle*>(result, PaintDLRStyle__typeof());
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass PorterDuffDLRMode___javaClass_3;
jfieldID PorterDuffDLRMode__SRC_IN_7141_ID;

PorterDuffDLRMode__uType* PorterDuffDLRMode__typeof()
{
    static ::uStaticStrong<PorterDuffDLRMode__uType*> type;
    if (type != NULL) return type;

    type = (PorterDuffDLRMode__uType*)::uAllocClassType(sizeof(PorterDuffDLRMode__uType), "Android.android.graphics.PorterDuffDLRMode", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(PorterDuffDLRMode__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(PorterDuffDLRMode__uType, __interface_1));

    return type;
}

void PorterDuffDLRMode___Init_3(::uStatic* __this)
{
    if (::app::Android::android::graphics::PorterDuffDLRMode___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::PorterDuffDLRMode___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/PorterDuff$Mode"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::PorterDuffDLRMode___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.PorterDuff$Mode'", 56);; }
}

PorterDuffDLRMode* PorterDuffDLRMode__get_SRC_IN(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::PorterDuffDLRMode___javaClass_3,::app::Android::android::graphics::PorterDuffDLRMode___Init_3(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::PorterDuffDLRMode__SRC_IN_7141_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::PorterDuffDLRMode__SRC_IN_7141_ID,::app::Android::android::graphics::PorterDuffDLRMode___javaClass_3,"SRC_IN","Landroid/graphics/PorterDuff$Mode;",GetStaticFieldID,"Id for field PorterDuffDLRMode.SRC_IN could not be cached",57);
    ::uExitCritical();;
    };
    PorterDuffDLRMode* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::graphics::PorterDuffDLRMode___javaClass_3, ::app::Android::android::graphics::PorterDuffDLRMode__SRC_IN_7141_ID),result,::app::Android::android::graphics::PorterDuffDLRMode__typeof(),PorterDuffDLRMode*,false,true);;
    return ::uCast< PorterDuffDLRMode*>(result, PorterDuffDLRMode__typeof());
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Rect___javaClass_2;
jfieldID Rect__bottom_7157_ID;
jmethodID Rect__hashCode_7163_ID;
jfieldID Rect__left_7154_ID;
jmethodID Rect__Rect_7159_ID_c;
jfieldID Rect__right_7156_ID;
jfieldID Rect__top_7155_ID;
jmethodID Rect__toString_7164_ID;

Rect__uType* Rect__typeof()
{
    static ::uStaticStrong<Rect__uType*> type;
    if (type != NULL) return type;

    type = (Rect__uType*)::uAllocClassType(sizeof(Rect__uType), "Android.android.graphics.Rect", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))Rect__hashCode_1;
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Rect__toString;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Rect__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Rect__uType, __interface_1));

    return type;
}

void Rect___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::Rect___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::Rect___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Rect"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::Rect___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Rect'", 45);; }
}

void Rect___ObjInit_5(Rect* __this)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::graphics::Rect___javaClass_2,::app::Android::android::graphics::Rect___Init_2(NULL));;
    CACHE_METHOD(::app::Android::android::graphics::Rect__Rect_7159_ID_c,::app::Android::android::graphics::Rect___javaClass_2,"<init>","()V",GetMethodID,"Id for fallback method android.graphics.Rect.<init> could not be cached",71);;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::graphics::Rect___javaClass_2, ::app::Android::android::graphics::Rect__Rect_7159_ID_c);;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

int Rect__get_bottom(Rect* __this)
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::Rect__bottom_7157_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::Rect__bottom_7157_ID,::app::Android::android::graphics::Rect___javaClass_2,"bottom","I",GetFieldID,"Id for field Rect.bottom could not be cached",44);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetIntField(__this->_javaObject, ::app::Android::android::graphics::Rect__bottom_7157_ID));;
    return result;
}

int Rect__get_left(Rect* __this)
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::Rect__left_7154_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::Rect__left_7154_ID,::app::Android::android::graphics::Rect___javaClass_2,"left","I",GetFieldID,"Id for field Rect.left could not be cached",42);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetIntField(__this->_javaObject, ::app::Android::android::graphics::Rect__left_7154_ID));;
    return result;
}

int Rect__get_right(Rect* __this)
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::Rect__right_7156_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::Rect__right_7156_ID,::app::Android::android::graphics::Rect___javaClass_2,"right","I",GetFieldID,"Id for field Rect.right could not be cached",43);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetIntField(__this->_javaObject, ::app::Android::android::graphics::Rect__right_7156_ID));;
    return result;
}

int Rect__get_top(Rect* __this)
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::Rect__top_7155_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::Rect__top_7155_ID,::app::Android::android::graphics::Rect___javaClass_2,"top","I",GetFieldID,"Id for field Rect.top could not be cached",41);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetIntField(__this->_javaObject, ::app::Android::android::graphics::Rect__top_7155_ID));;
    return result;
}

int Rect__hashCode_1(Rect* __this)
{
    return Rect__hashCode_IMPL_7163(NULL, __this->_subclassed, __this->_javaObject);
}

int Rect__hashCode_IMPL_7163(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Rect___javaClass_2,::app::Android::android::graphics::Rect___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::graphics::Rect__hashCode_7163_ID,::app::Android::android::graphics::Rect___javaClass_2,"hashCode","()I",GetMethodID,"Id for fallback method android.graphics.Rect.hashCode could not be cached",73);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::graphics::Rect___javaClass_2, ::app::Android::android::graphics::Rect__hashCode_7163_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::graphics::Rect__hashCode_7163_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

Rect* Rect__New_6(::uStatic* __this)
{
    Rect* inst = (Rect*)::uAllocObject(sizeof(Rect), Rect__typeof());
    inst->_ObjInit_5();
    return inst;
}

void Rect__set_bottom(Rect* __this, int value)
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::Rect__bottom_7157_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::Rect__bottom_7157_ID,::app::Android::android::graphics::Rect___javaClass_2,"bottom","I",GetFieldID,"Id for field Rect.bottom could not be cached",44);
    ::uExitCritical();;
    };
    U_JNIVAR->SetIntField(__this->_javaObject, ::app::Android::android::graphics::Rect__bottom_7157_ID, ((jint)value));;
}

void Rect__set_left(Rect* __this, int value)
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::Rect__left_7154_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::Rect__left_7154_ID,::app::Android::android::graphics::Rect___javaClass_2,"left","I",GetFieldID,"Id for field Rect.left could not be cached",42);
    ::uExitCritical();;
    };
    U_JNIVAR->SetIntField(__this->_javaObject, ::app::Android::android::graphics::Rect__left_7154_ID, ((jint)value));;
}

void Rect__set_right(Rect* __this, int value)
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::Rect__right_7156_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::Rect__right_7156_ID,::app::Android::android::graphics::Rect___javaClass_2,"right","I",GetFieldID,"Id for field Rect.right could not be cached",43);
    ::uExitCritical();;
    };
    U_JNIVAR->SetIntField(__this->_javaObject, ::app::Android::android::graphics::Rect__right_7156_ID, ((jint)value));;
}

void Rect__set_top(Rect* __this, int value)
{
    INIT_JNI;
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::Rect__top_7155_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::Rect__top_7155_ID,::app::Android::android::graphics::Rect___javaClass_2,"top","I",GetFieldID,"Id for field Rect.top could not be cached",41);
    ::uExitCritical();;
    };
    U_JNIVAR->SetIntField(__this->_javaObject, ::app::Android::android::graphics::Rect__top_7155_ID, ((jint)value));;
}

::app::Android::java::lang::String* Rect__toString(Rect* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Rect__toString_IMPL_7164(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Rect__toString_IMPL_7164(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Rect___javaClass_2,::app::Android::android::graphics::Rect___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::Rect__toString_7164_ID,::app::Android::android::graphics::Rect___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.graphics.Rect.toString could not be cached",73);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::graphics::Rect___javaClass_2, ::app::Android::android::graphics::Rect__toString_7164_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::graphics::Rect__toString_7164_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass RectF___javaClass_2;
jmethodID RectF__hashCode_7206_ID;
jmethodID RectF__toString_7207_ID;

RectF__uType* RectF__typeof()
{
    static ::uStaticStrong<RectF__uType*> type;
    if (type != NULL) return type;

    type = (RectF__uType*)::uAllocClassType(sizeof(RectF__uType), "Android.android.graphics.RectF", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))RectF__hashCode_1;
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))RectF__toString;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(RectF__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(RectF__uType, __interface_1));

    return type;
}

void RectF___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::RectF___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::RectF___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/RectF"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::RectF___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.RectF'", 46);; }
}

int RectF__hashCode_1(RectF* __this)
{
    return RectF__hashCode_IMPL_7206(NULL, __this->_subclassed, __this->_javaObject);
}

int RectF__hashCode_IMPL_7206(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::RectF___javaClass_2,::app::Android::android::graphics::RectF___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::graphics::RectF__hashCode_7206_ID,::app::Android::android::graphics::RectF___javaClass_2,"hashCode","()I",GetMethodID,"Id for fallback method android.graphics.RectF.hashCode could not be cached",74);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::graphics::RectF___javaClass_2, ::app::Android::android::graphics::RectF__hashCode_7206_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::graphics::RectF__hashCode_7206_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* RectF__toString(RectF* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(RectF__toString_IMPL_7207(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* RectF__toString_IMPL_7207(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::RectF___javaClass_2,::app::Android::android::graphics::RectF___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::RectF__toString_7207_ID,::app::Android::android::graphics::RectF___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.graphics.RectF.toString could not be cached",74);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::graphics::RectF___javaClass_2, ::app::Android::android::graphics::RectF__toString_7207_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::graphics::RectF__toString_7207_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SurfaceTexture__uType* SurfaceTexture__typeof()
{
    static ::uStaticStrong<SurfaceTexture__uType*> type;
    if (type != NULL) return type;

    type = (SurfaceTexture__uType*)::uAllocClassType(sizeof(SurfaceTexture__uType), "Android.android.graphics.SurfaceTexture", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(SurfaceTexture__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(SurfaceTexture__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Typeface___javaClass_2;
jmethodID Typeface__createFromAsset_7328_ID;
jmethodID Typeface__createFromFile_7330_ID;
jfieldID Typeface__DEFAULT_7312_ID;
jmethodID Typeface__hashCode_7333_ID;

Typeface__uType* Typeface__typeof()
{
    static ::uStaticStrong<Typeface__uType*> type;
    if (type != NULL) return type;

    type = (Typeface__uType*)::uAllocClassType(sizeof(Typeface__uType), "Android.android.graphics.Typeface", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_hashCode_1 = (int(*)(::app::Android::java::lang::Object*))Typeface__hashCode_1;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Typeface__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Typeface__uType, __interface_1));

    return type;
}

void Typeface___Init_2(::uStatic* __this)
{
    if (::app::Android::android::graphics::Typeface___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::graphics::Typeface___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/graphics/Typeface"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::graphics::Typeface___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.graphics.Typeface'", 49);; }
}

Typeface* Typeface__createFromAsset(::uStatic* __this, ::app::Android::android::content::res::AssetManager* arg0, ::app::Android::java::lang::String* arg1)
{
    return ::uCast< Typeface*>(Typeface__createFromAsset_IMPL_7328(NULL, (::uObject*)arg0, (::uObject*)arg1), Typeface__typeof());
}

::uObject* Typeface__createFromAsset_IMPL_7328(::uStatic* __this, ::uObject* arg0_, ::uObject* arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Typeface___javaClass_2,::app::Android::android::graphics::Typeface___Init_2(NULL));
    jobject _obArg0 = ((!arg0_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0_));
    jobject _obArg1 = ((!arg1_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg1_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::Typeface__createFromAsset_7328_ID,::app::Android::android::graphics::Typeface___javaClass_2,"createFromAsset","(Landroid/content/res/AssetManager;Ljava/lang/String;)Landroid/graphics/Typeface;",GetStaticMethodID,"Id for fallback method android.graphics.Typeface.createFromAsset could not be cached",84);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(::app::Android::android::graphics::Typeface___javaClass_2, ::app::Android::android::graphics::Typeface__createFromAsset_7328_ID, _obArg0, _obArg1),result,::app::Android::android::graphics::Typeface__typeof(),Typeface*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

Typeface* Typeface__createFromFile(::uStatic* __this, ::app::Android::java::lang::String* arg0)
{
    return ::uCast< Typeface*>(Typeface__createFromFile_IMPL_7330(NULL, (::uObject*)arg0), Typeface__typeof());
}

::uObject* Typeface__createFromFile_IMPL_7330(::uStatic* __this, ::uObject* arg0_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Typeface___javaClass_2,::app::Android::android::graphics::Typeface___Init_2(NULL));
    jobject _obArg0 = ((!arg0_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::graphics::Typeface__createFromFile_7330_ID,::app::Android::android::graphics::Typeface___javaClass_2,"createFromFile","(Ljava/lang/String;)Landroid/graphics/Typeface;",GetStaticMethodID,"Id for fallback method android.graphics.Typeface.createFromFile could not be cached",83);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(::app::Android::android::graphics::Typeface___javaClass_2, ::app::Android::android::graphics::Typeface__createFromFile_7330_ID, _obArg0),result,::app::Android::android::graphics::Typeface__typeof(),Typeface*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

Typeface* Typeface__get_DEFAULT(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Typeface___javaClass_2,::app::Android::android::graphics::Typeface___Init_2(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::graphics::Typeface__DEFAULT_7312_ID)) {;
    CACHE_FIELD(::app::Android::android::graphics::Typeface__DEFAULT_7312_ID,::app::Android::android::graphics::Typeface___javaClass_2,"DEFAULT","Landroid/graphics/Typeface;",GetStaticFieldID,"Id for field Typeface.DEFAULT could not be cached",49);
    ::uExitCritical();;
    };
    Typeface* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(::app::Android::android::graphics::Typeface___javaClass_2, ::app::Android::android::graphics::Typeface__DEFAULT_7312_ID),result,::app::Android::android::graphics::Typeface__typeof(),Typeface*,false,true);;
    return ::uCast< Typeface*>(result, Typeface__typeof());
}

int Typeface__hashCode_1(Typeface* __this)
{
    return Typeface__hashCode_IMPL_7333(NULL, __this->_subclassed, __this->_javaObject);
}

int Typeface__hashCode_IMPL_7333(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::graphics::Typeface___javaClass_2,::app::Android::android::graphics::Typeface___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::graphics::Typeface__hashCode_7333_ID,::app::Android::android::graphics::Typeface___javaClass_2,"hashCode","()I",GetMethodID,"Id for fallback method android.graphics.Typeface.hashCode could not be cached",77);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::graphics::Typeface___javaClass_2, ::app::Android::android::graphics::Typeface__hashCode_7333_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::graphics::Typeface__hashCode_7333_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

}}}}
