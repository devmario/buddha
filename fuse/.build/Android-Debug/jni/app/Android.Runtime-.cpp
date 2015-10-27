#include <app/Android.android.app.Activity.h>
#include <app/Android.android.app.Fragment.h>
#include <app/Android.android.app.TaskStackBuilder.h>
#include <app/Android.android.content.Context.h>
#include <app/Android.android.content.Intent.h>
#include <app/Android.android.content.res.Configuration.h>
#include <app/Android.android.graphics.Bitmap.h>
#include <app/Android.android.graphics.Canvas.h>
#include <app/Android.android.os.Bundle.h>
#include <app/Android.android.util.AttributeSet.h>
#include <app/Android.android.view.ActionMode.h>
#include <app/Android.android.view.KeyEvent.h>
#include <app/Android.android.view.Menu.h>
#include <app/Android.android.view.MenuItem.h>
#include <app/Android.android.view.MotionEvent.h>
#include <app/Android.android.view.View.h>
#include <app/Android.android.view.WindowManagerDLRLayoutParams.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.JNINativeMethod.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujlong.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Primitives.ujvalue.h>
#include <app/Android.Base.Types.Bridge.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Bootstrapper.h>
#include <app/Android.java.lang.CharSequence.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.Runnable.h>
#include <app/Android.java.lang.String.h>
#include <app/Android.Runtime.BooleanArray.h>
#include <app/Android.Runtime.ByteArray.h>
#include <app/Android.Runtime.CharArray.h>
#include <app/Android.Runtime.DoubleArray.h>
#include <app/Android.Runtime.FloatArray.h>
#include <app/Android.Runtime.IntArray.h>
#include <app/Android.Runtime.LongArray.h>
#include <app/Android.Runtime.NativeActivityHelper.h>
#include <app/Android.Runtime.ObjectArrayAUX.h>
#include <app/Android.Runtime.RunnableAction.h>
#include <app/Android.Runtime.ShortArray.h>
#include <app/Android.Runtime.UnoHelper.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>
#include <jni.h>
//~
JNFUN(void,Binding_Android_Runtime_RunnableAction__run31342,jlong ujPtr) {
    INITCALLBACK(uPtr,::uObject*);
    JTRY
    ::app::Android::java::lang::Runnable::run(uPtr);
    JCATCH
}

namespace app {
namespace Android {
namespace Runtime {

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BooleanArray__uType* BooleanArray__typeof()
{
    static ::uStaticStrong<BooleanArray__uType*> type;
    if (type != NULL) return type;

    type = (BooleanArray__uType*)::uAllocClassType(sizeof(BooleanArray__uType), "Android.Runtime.BooleanArray", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(BooleanArray__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(BooleanArray__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ByteArray__uType* ByteArray__typeof()
{
    static ::uStaticStrong<ByteArray__uType*> type;
    if (type != NULL) return type;

    type = (ByteArray__uType*)::uAllocClassType(sizeof(ByteArray__uType), "Android.Runtime.ByteArray", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ByteArray__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ByteArray__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CharArray__uType* CharArray__typeof()
{
    static ::uStaticStrong<CharArray__uType*> type;
    if (type != NULL) return type;

    type = (CharArray__uType*)::uAllocClassType(sizeof(CharArray__uType), "Android.Runtime.CharArray", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(CharArray__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(CharArray__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DoubleArray__uType* DoubleArray__typeof()
{
    static ::uStaticStrong<DoubleArray__uType*> type;
    if (type != NULL) return type;

    type = (DoubleArray__uType*)::uAllocClassType(sizeof(DoubleArray__uType), "Android.Runtime.DoubleArray", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(DoubleArray__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(DoubleArray__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FloatArray__uType* FloatArray__typeof()
{
    static ::uStaticStrong<FloatArray__uType*> type;
    if (type != NULL) return type;

    type = (FloatArray__uType*)::uAllocClassType(sizeof(FloatArray__uType), "Android.Runtime.FloatArray", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(FloatArray__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(FloatArray__uType, __interface_1));

    return type;
}

void FloatArray___ObjInit_5(FloatArray* __this, int length)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    __this->_javaObject = ::app::Android::Base::JNI__NewFloatArray(NULL, length);
}

float FloatArray__get_Item(FloatArray* __this, int i)
{
    return ::app::Android::Base::JNI__GetFloatArrayElement(NULL, (::uObject*)__this, i);
}

FloatArray* FloatArray__New_6(::uStatic* __this, int length)
{
    FloatArray* inst = (FloatArray*)::uAllocObject(sizeof(FloatArray), FloatArray__typeof());
    inst->_ObjInit_5(length);
    return inst;
}

void FloatArray__set_Item(FloatArray* __this, int i, float value)
{
    ::app::Android::Base::JNI__SetFloatArrayElement(NULL, (::uObject*)__this, i, value);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IntArray__uType* IntArray__typeof()
{
    static ::uStaticStrong<IntArray__uType*> type;
    if (type != NULL) return type;

    type = (IntArray__uType*)::uAllocClassType(sizeof(IntArray__uType), "Android.Runtime.IntArray", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(IntArray__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(IntArray__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LongArray__uType* LongArray__typeof()
{
    static ::uStaticStrong<LongArray__uType*> type;
    if (type != NULL) return type;

    type = (LongArray__uType*)::uAllocClassType(sizeof(LongArray__uType), "Android.Runtime.LongArray", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(LongArray__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(LongArray__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeActivityHelper__uType* NativeActivityHelper__typeof()
{
    static ::uStaticStrong<NativeActivityHelper__uType*> type;
    if (type != NULL) return type;

    type = (NativeActivityHelper__uType*)::uAllocClassType(sizeof(NativeActivityHelper__uType), "Android.Runtime.NativeActivityHelper");

    return type;
}

void NativeActivityHelper___TypeInit(::uStatic* __this)
{
    NativeActivityHelper__Init(NULL);
}

void NativeActivityHelper__Init(::uStatic* __this)
{
    ::app::Android::Base::JNI__Init(NULL);
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    
    jclass cls = ::app::Android::Base::JNI__LoadClass(NULL, jni, "com.buddha.buddha");
    
    JNINativeMethod nativeFunc;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObjectArrayAUX__uType* ObjectArrayAUX__typeof()
{
    static ::uStaticStrong<ObjectArrayAUX__uType*> type;
    if (type != NULL) return type;

    type = (ObjectArrayAUX__uType*)::uAllocClassType(sizeof(ObjectArrayAUX__uType), "Android.Runtime.ObjectArrayAUX");

    return type;
}

jobject ObjectArrayAUX__makeArrayJObject(::uStatic* __this, ::uString* typeName_, int length_)
{
    INIT_JNI;
    char const* clsName = uStringToCStr(typeName_);
    return U_JNIVAR->NewObjectArray(length_, LOAD_SYS_CLASS(clsName), NULL);
    uFreeCStr(clsName);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass RunnableAction___javaClass_2;

RunnableAction__uType* RunnableAction__typeof()
{
    static ::uStaticStrong<RunnableAction__uType*> type;
    if (type != NULL) return type;

    type = (RunnableAction__uType*)::uAllocClassType(sizeof(RunnableAction__uType), "Android.Runtime.RunnableAction", false, 3, 1, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_run = (void(*)(void*))RunnableAction__run;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(RunnableAction__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(RunnableAction__uType, __interface_1),
        ::app::Android::java::lang::Runnable__typeof(), offsetof(RunnableAction__uType, __interface_2));

    type->SetStrongRefs(
        "_internalAction", offsetof(RunnableAction, _internalAction));

    return type;
}

void RunnableAction___ObjInit_4(RunnableAction* __this, ::uDelegate* actn)
{
    if (!__this->_subclassed)
    {
        __this->_subclassed = true;
        __this->_javaClassName = ::uGetConstString("com.Bindings.Binding_Android_Runtime_RunnableAction");
    }

    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);

    if (::app::Android::Base::Primitives::ujclass__op_Equality(NULL, RunnableAction___javaClass_2, ::app::Android::Base::Primitives::ujclass__get_Null(NULL)))
    {
        RunnableAction___javaClass_2 = ::app::Android::Base::JNI__LocalToGlobalRef(NULL, ::app::Android::Base::JNI__LoadClass_1(NULL, ::uGetConstString("com.Bindings.Binding_Android_Runtime_RunnableAction"), false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_run","(J)V",Binding_Android_Runtime_RunnableAction__run31342);
        COMMIT_REG_MTD(RunnableAction___javaClass_2);
    }

    jclass tmpCls = ::app::Android::Base::JNI__LoadClass_1(NULL, __this->_javaClassName, false);
    jmethodID mtd = ::app::Android::Base::JNI__GetMethodID(NULL, tmpCls, ::uGetConstString("<init>"), ::uGetConstString("(J)V"));
    jobject tmp = ::app::Android::Base::JNI__NewObject_1(NULL, tmpCls, mtd, ::app::Android::Base::Primitives::ujvalue__op_Implicit_18(NULL, (jlong)__this->__obj_weak));
    ::app::Android::Base::JNI__CheckException(NULL);
    __this->_javaObject = ::app::Android::Base::JNI__LocalToGlobalRef_2(NULL, tmp);
    ::app::Android::Base::JNI__DeleteLocalRef_1(NULL, tmpCls);
    __this->_internalAction = actn;
}

RunnableAction* RunnableAction__New_5(::uStatic* __this, ::uDelegate* actn)
{
    RunnableAction* inst = (RunnableAction*)::uAllocObject(sizeof(RunnableAction), RunnableAction__typeof());
    inst->_ObjInit_4(actn);
    return inst;
}

void RunnableAction__run(RunnableAction* __this)
{
    ::uPtr< ::uDelegate*>(__this->_internalAction)->InvokeVoid();
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ShortArray__uType* ShortArray__typeof()
{
    static ::uStaticStrong<ShortArray__uType*> type;
    if (type != NULL) return type;

    type = (ShortArray__uType*)::uAllocClassType(sizeof(ShortArray__uType), "Android.Runtime.ShortArray", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ShortArray__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ShortArray__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass UnoHelper___helperCls;
bool UnoHelper___inited;

UnoHelper__uType* UnoHelper__typeof()
{
    static ::uStaticStrong<UnoHelper__uType*> type;
    if (type != NULL) return type;

    type = (UnoHelper__uType*)::uAllocClassType(sizeof(UnoHelper__uType), "Android.Runtime.UnoHelper");

    return type;
}

void UnoHelper__Init(::uStatic* __this)
{
    if (::app::Android::Runtime::UnoHelper___inited) { return; }
    ::app::Android::Base::JNI__Init(NULL);
    JNIEnv* jni = ::app::Android::Base::JNI__GetEnvPtr(NULL);
    ::app::Android::Runtime::UnoHelper___helperCls = reinterpret_cast<jclass>(jni->NewGlobalRef(::app::Android::Base::JNI__LoadClass(NULL, ::app::Android::Base::JNI__GetEnvPtr(NULL), "com.Bindings.UnoHelper")));
    if (!::app::Android::Runtime::UnoHelper___helperCls) {
        U_THROW(::app::Uno::Exception__New_2(NULL, uNewStringUtf8("Could not cache class for UnoHelper",35)));
    }
    ::app::Android::Runtime::UnoHelper___inited = true;
}

void UnoHelper__RegisterCallback(::uStatic* __this, JNINativeMethod nativeFunc_, jobject optionalClass_)
{
    if (!::app::Android::Runtime::UnoHelper___inited) { ::app::Android::Runtime::UnoHelper__Init(NULL); }
    jclass cls;
    if (optionalClass_) {
        cls = (jclass)optionalClass_;
    } else {
        cls = ::app::Android::Runtime::UnoHelper___helperCls;
    }
    jint attached = ::app::Android::Base::JNI__GetEnvPtr(NULL)->RegisterNatives(cls, &nativeFunc_, 1);
    if (attached < 0) {
        U_THROW(::app::Uno::Exception__New_2(NULL, uNewStringUtf8("Could not register the instantiation callback function",54)));
    }
}

::uObject* UnoHelper__RunnableFromAction(::uStatic* __this, ::uDelegate* actn)
{
    return (::uObject*)::app::Android::Runtime::RunnableAction__New_5(NULL, actn);
}

}}}
