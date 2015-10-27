#include <app/Android.android.content.ComponentName.h>
#include <app/Android.android.content.Context.h>
#include <app/Android.android.content.Intent.h>
#include <app/Android.android.content.res.Resources.h>
#include <app/Android.android.graphics.Canvas.h>
#include <app/Android.android.graphics.drawable.Drawable.h>
#include <app/Android.android.graphics.Rect.h>
#include <app/Android.android.graphics.SurfaceTexture.h>
#include <app/Android.android.os.IBinder.h>
#include <app/Android.android.view.ActionMode.h>
#include <app/Android.android.view.ActionProvider.h>
#include <app/Android.android.view.Choreographer.h>
#include <app/Android.android.view.ChoreographerDLRFrameCallback.h>
#include <app/Android.android.view.ContextMenuDLRContextMenuInfo.h>
#include <app/Android.android.view.ContextThemeWrapper.h>
#include <app/Android.android.view.Gravity.h>
#include <app/Android.android.view.KeyEvent.h>
#include <app/Android.android.view.Menu.h>
#include <app/Android.android.view.MenuItem.h>
#include <app/Android.android.view.MenuItemDLROnActionExpandListener.h>
#include <app/Android.android.view.MenuItemDLROnMenuItemClickListener.h>
#include <app/Android.android.view.MotionEvent.h>
#include <app/Android.android.view.SubMenu.h>
#include <app/Android.android.view.Surface.h>
#include <app/Android.android.view.SurfaceHolder.h>
#include <app/Android.android.view.SurfaceHolderDLRCallback.h>
#include <app/Android.android.view.SurfaceHolderDLRCallback2.h>
#include <app/Android.android.view.SurfaceView.h>
#include <app/Android.android.view.TextureView.h>
#include <app/Android.android.view.TextureViewDLRSurfaceTextureListener.h>
#include <app/Android.android.view.View.h>
#include <app/Android.android.view.ViewDLRMeasureSpec.h>
#include <app/Android.android.view.ViewDLROnFocusChangeListener.h>
#include <app/Android.android.view.ViewDLROnTouchListener.h>
#include <app/Android.android.view.ViewGroup.h>
#include <app/Android.android.view.ViewGroupDLRLayoutParams.h>
#include <app/Android.android.view.ViewGroupDLRMarginLayoutParams.h>
#include <app/Android.android.view.WindowManagerDLRLayoutParams.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jfieldID.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujclass.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_content_Context.h>
#include <app/Android.Fallbacks.Android_android_os_IBinder.h>
#include <app/Android.Fallbacks.Android_android_view_ActionMode.h>
#include <app/Android.Fallbacks.Android_android_view_ActionProvider.h>
#include <app/Android.Fallbacks.Android_android_view_ChoreographerDLRFrameCallback.h>
#include <app/Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h>
#include <app/Android.Fallbacks.Android_android_view_Menu.h>
#include <app/Android.Fallbacks.Android_android_view_MenuItem.h>
#include <app/Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h>
#include <app/Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-c7e65b51.h>
#include <app/Android.Fallbacks.Android_android_view_SubMenu.h>
#include <app/Android.Fallbacks.Android_android_view_SurfaceHolder.h>
#include <app/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback.h>
#include <app/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2.h>
#include <app/Android.Fallbacks.Android_android_view_TextureViewDLRSurfaceTex-37a0392a.h>
#include <app/Android.Fallbacks.Android_android_view_ViewDLROnFocusChangeListener.h>
#include <app/Android.Fallbacks.Android_android_view_ViewDLROnTouchListener.h>
#include <app/Android.Fallbacks.Android_android_view_ViewGroup.h>
#include <app/Android.java.lang.CharSequence.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.String.h>
#include <app/Android.Runtime.ObjectArray__Android_android_content_Intent.h>
#include <app/Android.Runtime.ObjectArray__Android_android_view_MenuItem.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Type.h>

namespace app {
namespace Android {
namespace android {
namespace view {

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ActionMode__uType* ActionMode__typeof()
{
    static ::uStaticStrong<ActionMode__uType*> type;
    if (type != NULL) return type;

    type = (ActionMode__uType*)::uAllocClassType(sizeof(ActionMode__uType), "Android.android.view.ActionMode", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ActionMode__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ActionMode__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ActionProvider__uType* ActionProvider__typeof()
{
    static ::uStaticStrong<ActionProvider__uType*> type;
    if (type != NULL) return type;

    type = (ActionProvider__uType*)::uAllocClassType(sizeof(ActionProvider__uType), "Android.android.view.ActionProvider", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ActionProvider__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ActionProvider__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Choreographer___javaClass_2;
jmethodID Choreographer__getInstance_21644_ID;
jmethodID Choreographer__postFrameCallback_21645_ID;

Choreographer__uType* Choreographer__typeof()
{
    static ::uStaticStrong<Choreographer__uType*> type;
    if (type != NULL) return type;

    type = (Choreographer__uType*)::uAllocClassType(sizeof(Choreographer__uType), "Android.android.view.Choreographer", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Choreographer__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Choreographer__uType, __interface_1));

    return type;
}

void Choreographer___Init_2(::uStatic* __this)
{
    if (::app::Android::android::view::Choreographer___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::view::Choreographer___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/Choreographer"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::view::Choreographer___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.Choreographer'", 50);; }
}

Choreographer* Choreographer__getInstance(::uStatic* __this)
{
    return ::uCast< Choreographer*>(Choreographer__getInstance_IMPL_21644(NULL), Choreographer__typeof());
}

::uObject* Choreographer__getInstance_IMPL_21644(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::Choreographer___javaClass_2,::app::Android::android::view::Choreographer___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::view::Choreographer__getInstance_21644_ID,::app::Android::android::view::Choreographer___javaClass_2,"getInstance","()Landroid/view/Choreographer;",GetStaticMethodID,"Id for fallback method android.view.Choreographer.getInstance could not be cached",81);
    NEW_UNO(U_JNIVAR->CallStaticObjectMethod(::app::Android::android::view::Choreographer___javaClass_2, ::app::Android::android::view::Choreographer__getInstance_21644_ID),result,::app::Android::android::view::Choreographer__typeof(),Choreographer*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void Choreographer__postFrameCallback(Choreographer* __this, ::uObject* arg0)
{
    Choreographer__postFrameCallback_IMPL_21645(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Choreographer__postFrameCallback_IMPL_21645(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::Choreographer___javaClass_2,::app::Android::android::view::Choreographer___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::view::Choreographer__postFrameCallback_21645_ID,::app::Android::android::view::Choreographer___javaClass_2,"postFrameCallback","(Landroid/view/Choreographer$FrameCallback;)V",GetMethodID,"Id for fallback method android.view.Choreographer.postFrameCallback could not be cached",87);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::Choreographer___javaClass_2, ::app::Android::android::view::Choreographer__postFrameCallback_21645_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::Choreographer__postFrameCallback_21645_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ChoreographerDLRFrameCallback__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.view.ChoreographerDLRFrameCallback");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ContextMenuDLRContextMenuInfo__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.view.ContextMenuDLRContextMenuInfo");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ContextThemeWrapper___javaClass_4;
jmethodID ContextThemeWrapper__getResources_21660_ID;
jmethodID ContextThemeWrapper__getSystemService_21663_ID;

ContextThemeWrapper__uType* ContextThemeWrapper__typeof()
{
    static ::uStaticStrong<ContextThemeWrapper__uType*> type;
    if (type != NULL) return type;

    type = (ContextThemeWrapper__uType*)::uAllocClassType(sizeof(ContextThemeWrapper__uType), "Android.android.view.ContextThemeWrapper", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::content::ContextWrapper__typeof());
    type->__fp_getResources = (::app::Android::android::content::res::Resources*(*)(::app::Android::android::content::Context*))ContextThemeWrapper__getResources;
    type->__fp_getSystemService = (::app::Android::java::lang::Object*(*)(::app::Android::android::content::Context*, ::app::Android::java::lang::String*))ContextThemeWrapper__getSystemService;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ContextThemeWrapper__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ContextThemeWrapper__uType, __interface_1));

    return type;
}

void ContextThemeWrapper___Init_4(::uStatic* __this)
{
    if (::app::Android::android::view::ContextThemeWrapper___javaClass_4) { return; }
    INIT_JNI;
    ::app::Android::android::view::ContextThemeWrapper___javaClass_4 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/ContextThemeWrapper"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::view::ContextThemeWrapper___javaClass_4) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.ContextThemeWrapper'", 56);; }
}

void ContextThemeWrapper___ObjInit_8(ContextThemeWrapper* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::content::ContextWrapper___ObjInit_7(__this, obj, utype, hasFallbackClass, resolveType);
}

::app::Android::android::content::res::Resources* ContextThemeWrapper__getResources(ContextThemeWrapper* __this)
{
    return ::uCast< ::app::Android::android::content::res::Resources*>(ContextThemeWrapper__getResources_IMPL_21660(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::content::res::Resources__typeof());
}

::uObject* ContextThemeWrapper__getResources_IMPL_21660(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::ContextThemeWrapper___javaClass_4,::app::Android::android::view::ContextThemeWrapper___Init_4(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::view::ContextThemeWrapper__getResources_21660_ID,::app::Android::android::view::ContextThemeWrapper___javaClass_4,"getResources","()Landroid/content/res/Resources;",GetMethodID,"Id for fallback method android.view.ContextThemeWrapper.getResources could not be cached",88);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::view::ContextThemeWrapper___javaClass_4, ::app::Android::android::view::ContextThemeWrapper__getResources_21660_ID),result,::app::Android::android::content::res::Resources__typeof(),::app::Android::android::content::res::Resources*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::view::ContextThemeWrapper__getResources_21660_ID),result,::app::Android::android::content::res::Resources__typeof(),::app::Android::android::content::res::Resources*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::Object* ContextThemeWrapper__getSystemService(ContextThemeWrapper* __this, ::app::Android::java::lang::String* arg0)
{
    return ::uCast< ::app::Android::java::lang::Object*>(ContextThemeWrapper__getSystemService_IMPL_21663(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::java::lang::Object__typeof());
}

::uObject* ContextThemeWrapper__getSystemService_IMPL_21663(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::ContextThemeWrapper___javaClass_4,::app::Android::android::view::ContextThemeWrapper___Init_4(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::view::ContextThemeWrapper__getSystemService_21663_ID,::app::Android::android::view::ContextThemeWrapper___javaClass_4,"getSystemService","(Ljava/lang/String;)Ljava/lang/Object;",GetMethodID,"Id for fallback method android.view.ContextThemeWrapper.getSystemService could not be cached",92);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::view::ContextThemeWrapper___javaClass_4, ::app::Android::android::view::ContextThemeWrapper__getSystemService_21663_ID, _obArg2),result,::app::Android::java::lang::Object__typeof(),::app::Android::java::lang::Object*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::view::ContextThemeWrapper__getSystemService_21663_ID, _obArg2),result,::app::Android::java::lang::Object__typeof(),::app::Android::java::lang::Object*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Gravity___javaClass_2;
jfieldID Gravity__CENTER_HORIZONTAL_21752_ID;
jfieldID Gravity__LEFT_21748_ID;
jfieldID Gravity__RIGHT_21749_ID;

Gravity__uType* Gravity__typeof()
{
    static ::uStaticStrong<Gravity__uType*> type;
    if (type != NULL) return type;

    type = (Gravity__uType*)::uAllocClassType(sizeof(Gravity__uType), "Android.android.view.Gravity", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Gravity__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Gravity__uType, __interface_1));

    return type;
}

void Gravity___Init_2(::uStatic* __this)
{
    if (::app::Android::android::view::Gravity___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::view::Gravity___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/Gravity"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::view::Gravity___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.Gravity'", 44);; }
}

int Gravity__get_CENTER_HORIZONTAL(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::Gravity___javaClass_2,::app::Android::android::view::Gravity___Init_2(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::view::Gravity__CENTER_HORIZONTAL_21752_ID)) {;
    CACHE_FIELD(::app::Android::android::view::Gravity__CENTER_HORIZONTAL_21752_ID,::app::Android::android::view::Gravity___javaClass_2,"CENTER_HORIZONTAL","I",GetStaticFieldID,"Id for field Gravity.CENTER_HORIZONTAL could not be cached",58);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::view::Gravity___javaClass_2, ::app::Android::android::view::Gravity__CENTER_HORIZONTAL_21752_ID));;
    return result;
}

int Gravity__get_LEFT(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::Gravity___javaClass_2,::app::Android::android::view::Gravity___Init_2(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::view::Gravity__LEFT_21748_ID)) {;
    CACHE_FIELD(::app::Android::android::view::Gravity__LEFT_21748_ID,::app::Android::android::view::Gravity___javaClass_2,"LEFT","I",GetStaticFieldID,"Id for field Gravity.LEFT could not be cached",45);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::view::Gravity___javaClass_2, ::app::Android::android::view::Gravity__LEFT_21748_ID));;
    return result;
}

int Gravity__get_RIGHT(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::Gravity___javaClass_2,::app::Android::android::view::Gravity___Init_2(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::view::Gravity__RIGHT_21749_ID)) {;
    CACHE_FIELD(::app::Android::android::view::Gravity__RIGHT_21749_ID,::app::Android::android::view::Gravity___javaClass_2,"RIGHT","I",GetStaticFieldID,"Id for field Gravity.RIGHT could not be cached",46);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::view::Gravity___javaClass_2, ::app::Android::android::view::Gravity__RIGHT_21749_ID));;
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass KeyEvent___javaClass_3;
jmethodID KeyEvent__toString_22231_ID;

KeyEvent__uType* KeyEvent__typeof()
{
    static ::uStaticStrong<KeyEvent__uType*> type;
    if (type != NULL) return type;

    type = (KeyEvent__uType*)::uAllocClassType(sizeof(KeyEvent__uType), "Android.android.view.KeyEvent", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))KeyEvent__toString;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(KeyEvent__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(KeyEvent__uType, __interface_1));

    return type;
}

void KeyEvent___Init_3(::uStatic* __this)
{
    if (::app::Android::android::view::KeyEvent___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::view::KeyEvent___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/KeyEvent"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::view::KeyEvent___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.KeyEvent'", 45);; }
}

::app::Android::java::lang::String* KeyEvent__toString(KeyEvent* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(KeyEvent__toString_IMPL_22231(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* KeyEvent__toString_IMPL_22231(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::KeyEvent___javaClass_3,::app::Android::android::view::KeyEvent___Init_3(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::view::KeyEvent__toString_22231_ID,::app::Android::android::view::KeyEvent___javaClass_3,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.KeyEvent.toString could not be cached",73);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::view::KeyEvent___javaClass_3, ::app::Android::android::view::KeyEvent__toString_22231_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::view::KeyEvent__toString_22231_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* Menu__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.view.Menu");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* MenuItem__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.view.MenuItem");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* MenuItemDLROnActionExpandListener__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.view.MenuItemDLROnActionExpandListener");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* MenuItemDLROnMenuItemClickListener__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.view.MenuItemDLROnMenuItemClickListener");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass MotionEvent___javaClass_3;
jmethodID MotionEvent__getActionMasked_22458_ID;
jmethodID MotionEvent__getEventTime_22462_ID;
jmethodID MotionEvent__getPointerCount_22473_ID;
jmethodID MotionEvent__getPointerId_22474_ID;
jmethodID MotionEvent__getRawX_22491_ID;
jmethodID MotionEvent__getRawY_22492_ID;
jmethodID MotionEvent__toString_22526_ID;

MotionEvent__uType* MotionEvent__typeof()
{
    static ::uStaticStrong<MotionEvent__uType*> type;
    if (type != NULL) return type;

    type = (MotionEvent__uType*)::uAllocClassType(sizeof(MotionEvent__uType), "Android.android.view.MotionEvent", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))MotionEvent__toString;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(MotionEvent__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(MotionEvent__uType, __interface_1));

    return type;
}

void MotionEvent___Init_3(::uStatic* __this)
{
    if (::app::Android::android::view::MotionEvent___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::view::MotionEvent___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/MotionEvent"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::view::MotionEvent___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.MotionEvent'", 48);; }
}

int MotionEvent__getActionMasked(MotionEvent* __this)
{
    return MotionEvent__getActionMasked_IMPL_22458(NULL, __this->_subclassed, __this->_javaObject);
}

int MotionEvent__getActionMasked_IMPL_22458(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::MotionEvent___javaClass_3,::app::Android::android::view::MotionEvent___Init_3(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::view::MotionEvent__getActionMasked_22458_ID,::app::Android::android::view::MotionEvent___javaClass_3,"getActionMasked","()I",GetMethodID,"Id for fallback method android.view.MotionEvent.getActionMasked could not be cached",83);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::view::MotionEvent___javaClass_3, ::app::Android::android::view::MotionEvent__getActionMasked_22458_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::view::MotionEvent__getActionMasked_22458_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uLong MotionEvent__getEventTime(MotionEvent* __this)
{
    return MotionEvent__getEventTime_IMPL_22462(NULL, __this->_subclassed, __this->_javaObject);
}

::uLong MotionEvent__getEventTime_IMPL_22462(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::MotionEvent___javaClass_3,::app::Android::android::view::MotionEvent___Init_3(NULL));
    
    ::uLong result;
    CACHE_METHOD(::app::Android::android::view::MotionEvent__getEventTime_22462_ID,::app::Android::android::view::MotionEvent___javaClass_3,"getEventTime","()J",GetMethodID,"Id for fallback method android.view.MotionEvent.getEventTime could not be cached",80);
    if (arg0_) {
        result = ((::uLong)U_JNIVAR->CallNonvirtualLongMethod(arg1_, ::app::Android::android::view::MotionEvent___javaClass_3, ::app::Android::android::view::MotionEvent__getEventTime_22462_ID));
    }
    else
    {
        result = ((::uLong)U_JNIVAR->CallLongMethod(arg1_, ::app::Android::android::view::MotionEvent__getEventTime_22462_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int MotionEvent__getPointerCount(MotionEvent* __this)
{
    return MotionEvent__getPointerCount_IMPL_22473(NULL, __this->_subclassed, __this->_javaObject);
}

int MotionEvent__getPointerCount_IMPL_22473(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::MotionEvent___javaClass_3,::app::Android::android::view::MotionEvent___Init_3(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::view::MotionEvent__getPointerCount_22473_ID,::app::Android::android::view::MotionEvent___javaClass_3,"getPointerCount","()I",GetMethodID,"Id for fallback method android.view.MotionEvent.getPointerCount could not be cached",83);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::view::MotionEvent___javaClass_3, ::app::Android::android::view::MotionEvent__getPointerCount_22473_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::view::MotionEvent__getPointerCount_22473_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int MotionEvent__getPointerId(MotionEvent* __this, int arg0)
{
    return MotionEvent__getPointerId_IMPL_22474(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

int MotionEvent__getPointerId_IMPL_22474(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::MotionEvent___javaClass_3,::app::Android::android::view::MotionEvent___Init_3(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::view::MotionEvent__getPointerId_22474_ID,::app::Android::android::view::MotionEvent___javaClass_3,"getPointerId","(I)I",GetMethodID,"Id for fallback method android.view.MotionEvent.getPointerId could not be cached",80);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::view::MotionEvent___javaClass_3, ::app::Android::android::view::MotionEvent__getPointerId_22474_ID, ((jint)arg2_)));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::view::MotionEvent__getPointerId_22474_ID, ((jint)arg2_)));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

float MotionEvent__getRawX(MotionEvent* __this)
{
    return MotionEvent__getRawX_IMPL_22491(NULL, __this->_subclassed, __this->_javaObject);
}

float MotionEvent__getRawX_IMPL_22491(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::MotionEvent___javaClass_3,::app::Android::android::view::MotionEvent___Init_3(NULL));
    
    float result;
    CACHE_METHOD(::app::Android::android::view::MotionEvent__getRawX_22491_ID,::app::Android::android::view::MotionEvent___javaClass_3,"getRawX","()F",GetMethodID,"Id for fallback method android.view.MotionEvent.getRawX could not be cached",75);
    if (arg0_) {
        result = ((float)U_JNIVAR->CallNonvirtualFloatMethod(arg1_, ::app::Android::android::view::MotionEvent___javaClass_3, ::app::Android::android::view::MotionEvent__getRawX_22491_ID));
    }
    else
    {
        result = ((float)U_JNIVAR->CallFloatMethod(arg1_, ::app::Android::android::view::MotionEvent__getRawX_22491_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

float MotionEvent__getRawY(MotionEvent* __this)
{
    return MotionEvent__getRawY_IMPL_22492(NULL, __this->_subclassed, __this->_javaObject);
}

float MotionEvent__getRawY_IMPL_22492(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::MotionEvent___javaClass_3,::app::Android::android::view::MotionEvent___Init_3(NULL));
    
    float result;
    CACHE_METHOD(::app::Android::android::view::MotionEvent__getRawY_22492_ID,::app::Android::android::view::MotionEvent___javaClass_3,"getRawY","()F",GetMethodID,"Id for fallback method android.view.MotionEvent.getRawY could not be cached",75);
    if (arg0_) {
        result = ((float)U_JNIVAR->CallNonvirtualFloatMethod(arg1_, ::app::Android::android::view::MotionEvent___javaClass_3, ::app::Android::android::view::MotionEvent__getRawY_22492_ID));
    }
    else
    {
        result = ((float)U_JNIVAR->CallFloatMethod(arg1_, ::app::Android::android::view::MotionEvent__getRawY_22492_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* MotionEvent__toString(MotionEvent* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(MotionEvent__toString_IMPL_22526(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* MotionEvent__toString_IMPL_22526(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::MotionEvent___javaClass_3,::app::Android::android::view::MotionEvent___Init_3(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::view::MotionEvent__toString_22526_ID,::app::Android::android::view::MotionEvent___javaClass_3,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.MotionEvent.toString could not be cached",76);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::view::MotionEvent___javaClass_3, ::app::Android::android::view::MotionEvent__toString_22526_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::view::MotionEvent__toString_22526_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* SubMenu__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.view.SubMenu");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass Surface___javaClass_2;
jmethodID Surface__Surface_22593_ID_c;
jmethodID Surface__toString_22603_ID;

Surface__uType* Surface__typeof()
{
    static ::uStaticStrong<Surface__uType*> type;
    if (type != NULL) return type;

    type = (Surface__uType*)::uAllocClassType(sizeof(Surface__uType), "Android.android.view.Surface", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Surface__toString;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Surface__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Surface__uType, __interface_1));

    return type;
}

void Surface___Init_2(::uStatic* __this)
{
    if (::app::Android::android::view::Surface___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::view::Surface___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/Surface"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::view::Surface___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.Surface'", 44);; }
}

void Surface___ObjInit_5(Surface* __this, ::app::Android::android::graphics::SurfaceTexture* arg0)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::view::Surface___javaClass_2,::app::Android::android::view::Surface___Init_2(NULL));;
    CACHE_METHOD(::app::Android::android::view::Surface__Surface_22593_ID_c,::app::Android::android::view::Surface___javaClass_2,"<init>","(Landroid/graphics/SurfaceTexture;)V",GetMethodID,"Id for fallback method android.view.Surface.<init> could not be cached",70);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::view::Surface___javaClass_2, ::app::Android::android::view::Surface__Surface_22593_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

Surface* Surface__New_6(::uStatic* __this, ::app::Android::android::graphics::SurfaceTexture* arg0)
{
    Surface* inst = (Surface*)::uAllocObject(sizeof(Surface), Surface__typeof());
    inst->_ObjInit_5(arg0);
    return inst;
}

::app::Android::java::lang::String* Surface__toString(Surface* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Surface__toString_IMPL_22603(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Surface__toString_IMPL_22603(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::Surface___javaClass_2,::app::Android::android::view::Surface___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::view::Surface__toString_22603_ID,::app::Android::android::view::Surface___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.Surface.toString could not be cached",72);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::view::Surface___javaClass_2, ::app::Android::android::view::Surface__toString_22603_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::view::Surface__toString_22603_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* SurfaceHolder__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.view.SurfaceHolder");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* SurfaceHolderDLRCallback__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.view.SurfaceHolderDLRCallback");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* SurfaceHolderDLRCallback2__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.view.SurfaceHolderDLRCallback2");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass SurfaceView___javaClass_3;
jmethodID SurfaceView__getHolder_22630_ID;
jmethodID SurfaceView__SurfaceView_22627_ID_c;

SurfaceView__uType* SurfaceView__typeof()
{
    static ::uStaticStrong<SurfaceView__uType*> type;
    if (type != NULL) return type;

    type = (SurfaceView__uType*)::uAllocClassType(sizeof(SurfaceView__uType), "Android.android.view.SurfaceView", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::View__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(SurfaceView__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(SurfaceView__uType, __interface_1));

    return type;
}

void SurfaceView___Init_3(::uStatic* __this)
{
    if (::app::Android::android::view::SurfaceView___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::view::SurfaceView___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/SurfaceView"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::view::SurfaceView___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.SurfaceView'", 48);; }
}

void SurfaceView___ObjInit_10(SurfaceView* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::view::View___ObjInit_7(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::view::SurfaceView___javaClass_3,::app::Android::android::view::SurfaceView___Init_3(NULL));;
    CACHE_METHOD(::app::Android::android::view::SurfaceView__SurfaceView_22627_ID_c,::app::Android::android::view::SurfaceView___javaClass_3,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.view.SurfaceView.<init> could not be cached",74);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::view::SurfaceView___javaClass_3, ::app::Android::android::view::SurfaceView__SurfaceView_22627_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

::uObject* SurfaceView__getHolder(SurfaceView* __this)
{
    return (::uObject*)SurfaceView__getHolder_IMPL_22630(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* SurfaceView__getHolder_IMPL_22630(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::SurfaceView___javaClass_3,::app::Android::android::view::SurfaceView___Init_3(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::view::SurfaceView__getHolder_22630_ID,::app::Android::android::view::SurfaceView___javaClass_3,"getHolder","()Landroid/view/SurfaceHolder;",GetMethodID,"Id for fallback method android.view.SurfaceView.getHolder could not be cached",77);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::view::SurfaceView___javaClass_3, ::app::Android::android::view::SurfaceView__getHolder_22630_ID),result,::app::Android::Fallbacks::Android_android_view_SurfaceHolder__typeof(),::uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::view::SurfaceView__getHolder_22630_ID),result,::app::Android::Fallbacks::Android_android_view_SurfaceHolder__typeof(),::uObject*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

SurfaceView* SurfaceView__New_10(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    SurfaceView* inst = (SurfaceView*)::uAllocObject(sizeof(SurfaceView), SurfaceView__typeof());
    inst->_ObjInit_10(arg0);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass TextureView___javaClass_3;
jmethodID TextureView__setOpaque_22650_ID;
jmethodID TextureView__setSurfaceTextureListener_22672_ID;
jmethodID TextureView__TextureView_22646_ID_c;

TextureView__uType* TextureView__typeof()
{
    static ::uStaticStrong<TextureView__uType*> type;
    if (type != NULL) return type;

    type = (TextureView__uType*)::uAllocClassType(sizeof(TextureView__uType), "Android.android.view.TextureView", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::View__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(TextureView__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(TextureView__uType, __interface_1));

    return type;
}

void TextureView___Init_3(::uStatic* __this)
{
    if (::app::Android::android::view::TextureView___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::view::TextureView___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/TextureView"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::view::TextureView___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.TextureView'", 48);; }
}

void TextureView___ObjInit_8(TextureView* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::android::view::View___ObjInit_7(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::view::TextureView___javaClass_3,::app::Android::android::view::TextureView___Init_3(NULL));;
    CACHE_METHOD(::app::Android::android::view::TextureView__TextureView_22646_ID_c,::app::Android::android::view::TextureView___javaClass_3,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.view.TextureView.<init> could not be cached",74);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::view::TextureView___javaClass_3, ::app::Android::android::view::TextureView__TextureView_22646_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

TextureView* TextureView__New_10(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    TextureView* inst = (TextureView*)::uAllocObject(sizeof(TextureView), TextureView__typeof());
    inst->_ObjInit_8(arg0);
    return inst;
}

void TextureView__setOpaque(TextureView* __this, bool arg0)
{
    TextureView__setOpaque_IMPL_22650(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void TextureView__setOpaque_IMPL_22650(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::TextureView___javaClass_3,::app::Android::android::view::TextureView___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::view::TextureView__setOpaque_22650_ID,::app::Android::android::view::TextureView___javaClass_3,"setOpaque","(Z)V",GetMethodID,"Id for fallback method android.view.TextureView.setOpaque could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::TextureView___javaClass_3, ::app::Android::android::view::TextureView__setOpaque_22650_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::TextureView__setOpaque_22650_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void TextureView__setSurfaceTextureListener(TextureView* __this, ::uObject* arg0)
{
    TextureView__setSurfaceTextureListener_IMPL_22672(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void TextureView__setSurfaceTextureListener_IMPL_22672(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::TextureView___javaClass_3,::app::Android::android::view::TextureView___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::view::TextureView__setSurfaceTextureListener_22672_ID,::app::Android::android::view::TextureView___javaClass_3,"setSurfaceTextureListener","(Landroid/view/TextureView$SurfaceTextureListener;)V",GetMethodID,"Id for fallback method android.view.TextureView.setSurfaceTextureListener could not be cached",93);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::TextureView___javaClass_3, ::app::Android::android::view::TextureView__setSurfaceTextureListener_22672_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::TextureView__setSurfaceTextureListener_22672_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* TextureViewDLRSurfaceTextureListener__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.view.TextureViewDLRSurfaceTextureListener");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass View___javaClass_2;
jmethodID View__bringToFront_22995_ID;
jmethodID View__getContext_22972_ID;
jmethodID View__getMeasuredHeight_23009_ID;
jmethodID View__getMeasuredWidth_23007_ID;
jmethodID View__getRootView_23196_ID;
jmethodID View__getWindowToken_23119_ID;
jmethodID View__hasFocus_22851_ID;
jmethodID View__invalidate_23065_ID;
jmethodID View__measure_23211_ID;
jmethodID View__onScrollChanged_22996_ID;
jmethodID View__onTouchEvent_22991_ID;
jmethodID View__requestFocus_22934_ID;
jmethodID View__setAlpha_23031_ID;
jmethodID View__setBackground_23177_ID;
jmethodID View__setBackgroundColor_23175_ID;
jmethodID View__setBackgroundResource_23176_ID;
jmethodID View__setEnabled_22894_ID;
jmethodID View__setFocusable_22895_ID;
jmethodID View__setFocusableInTouchMode_22896_ID;
jmethodID View__setLayoutParams_23057_ID;
jmethodID View__setOnFocusChangeListener_22828_ID;
jmethodID View__setOnTouchListener_22844_ID;
jmethodID View__setRotation_23016_ID;
jmethodID View__setScaleX_23022_ID;
jmethodID View__setScaleY_23024_ID;
jmethodID View__setScrollX_23000_ID;
jmethodID View__setScrollY_23001_ID;
jmethodID View__setTextAlignment_23253_ID;
jmethodID View__setTranslationX_23046_ID;
jmethodID View__setTranslationY_23048_ID;
jfieldID View__TEXT_ALIGNMENT_GRAVITY_22767_ID;
jmethodID View__toString_22818_ID;
jmethodID View__View_22815_ID_c;

View__uType* View__typeof()
{
    static ::uStaticStrong<View__uType*> type;
    if (type != NULL) return type;

    type = (View__uType*)::uAllocClassType(sizeof(View__uType), "Android.android.view.View", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_hasFocus = View__hasFocus;
    type->__fp_onScrollChanged = View__onScrollChanged;
    type->__fp_onTouchEvent = View__onTouchEvent;
    type->__fp_setBackgroundColor = View__setBackgroundColor;
    type->__fp_setEnabled = View__setEnabled;
    type->__fp_setLayoutParams = View__setLayoutParams;
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))View__toString;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(View__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(View__uType, __interface_1));

    return type;
}

void View___Init_2(::uStatic* __this)
{
    if (::app::Android::android::view::View___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::view::View___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/View"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::view::View___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.View'", 41);; }
}

void View___ObjInit_4(View* __this, ::app::Android::android::content::Context* arg0)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, ::app::Android::Base::JNI__GetDefaultObject(NULL), ::app::Android::Base::JNI__GetDefaultType(NULL), false, false);
    INIT_JNI;;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));;
    CACHE_METHOD(::app::Android::android::view::View__View_22815_ID_c,::app::Android::android::view::View___javaClass_2,"<init>","(Landroid/content/Context;)V",GetMethodID,"Id for fallback method android.view.View.<init> could not be cached",67);;
    jobject _obArg0 = ((!arg0) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg0));;
    jobject result;;
    jobject _tmp;;
    _tmp = U_JNIVAR->NewObject(::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__View_22815_ID_c, _obArg0);;
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);;
    __this->_javaObject = NEW_GLOBAL_REF(jobject,_tmp);;
    U_JNIVAR->DeleteLocalRef(_tmp);;
}

void View___ObjInit_7(View* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, obj, utype, hasFallbackClass, resolveType);
}

void View__bringToFront(View* __this)
{
    View__bringToFront_IMPL_22995(NULL, __this->_subclassed, __this->_javaObject);
}

void View__bringToFront_IMPL_22995(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::view::View__bringToFront_22995_ID,::app::Android::android::view::View___javaClass_2,"bringToFront","()V",GetMethodID,"Id for fallback method android.view.View.bringToFront could not be cached",73);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__bringToFront_22995_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__bringToFront_22995_ID);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

int View__get_TEXT_ALIGNMENT_GRAVITY(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::view::View__TEXT_ALIGNMENT_GRAVITY_22767_ID)) {;
    CACHE_FIELD(::app::Android::android::view::View__TEXT_ALIGNMENT_GRAVITY_22767_ID,::app::Android::android::view::View___javaClass_2,"TEXT_ALIGNMENT_GRAVITY","I",GetStaticFieldID,"Id for field View.TEXT_ALIGNMENT_GRAVITY could not be cached",60);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__TEXT_ALIGNMENT_GRAVITY_22767_ID));;
    return result;
}

::app::Android::android::content::Context* View__getContext(View* __this)
{
    return ::uCast< ::app::Android::android::content::Context*>(View__getContext_IMPL_22972(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::content::Context__typeof());
}

::uObject* View__getContext_IMPL_22972(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::view::View__getContext_22972_ID,::app::Android::android::view::View___javaClass_2,"getContext","()Landroid/content/Context;",GetMethodID,"Id for fallback method android.view.View.getContext could not be cached",71);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__getContext_22972_ID),result,::app::Android::Fallbacks::Android_android_content_Context__typeof(),::app::Android::android::content::Context*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::view::View__getContext_22972_ID),result,::app::Android::Fallbacks::Android_android_content_Context__typeof(),::app::Android::android::content::Context*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int View__getMeasuredHeight(View* __this)
{
    return View__getMeasuredHeight_IMPL_23009(NULL, __this->_subclassed, __this->_javaObject);
}

int View__getMeasuredHeight_IMPL_23009(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::view::View__getMeasuredHeight_23009_ID,::app::Android::android::view::View___javaClass_2,"getMeasuredHeight","()I",GetMethodID,"Id for fallback method android.view.View.getMeasuredHeight could not be cached",78);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__getMeasuredHeight_23009_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::view::View__getMeasuredHeight_23009_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int View__getMeasuredWidth(View* __this)
{
    return View__getMeasuredWidth_IMPL_23007(NULL, __this->_subclassed, __this->_javaObject);
}

int View__getMeasuredWidth_IMPL_23007(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::view::View__getMeasuredWidth_23007_ID,::app::Android::android::view::View___javaClass_2,"getMeasuredWidth","()I",GetMethodID,"Id for fallback method android.view.View.getMeasuredWidth could not be cached",77);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__getMeasuredWidth_23007_ID));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::android::view::View__getMeasuredWidth_23007_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

View* View__getRootView(View* __this)
{
    return ::uCast< View*>(View__getRootView_IMPL_23196(NULL, __this->_subclassed, __this->_javaObject), View__typeof());
}

::uObject* View__getRootView_IMPL_23196(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::view::View__getRootView_23196_ID,::app::Android::android::view::View___javaClass_2,"getRootView","()Landroid/view/View;",GetMethodID,"Id for fallback method android.view.View.getRootView could not be cached",72);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__getRootView_23196_ID),result,::app::Android::android::view::View__typeof(),View*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::view::View__getRootView_23196_ID),result,::app::Android::android::view::View__typeof(),View*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* View__getWindowToken(View* __this)
{
    return (::uObject*)View__getWindowToken_IMPL_23119(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* View__getWindowToken_IMPL_23119(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::view::View__getWindowToken_23119_ID,::app::Android::android::view::View___javaClass_2,"getWindowToken","()Landroid/os/IBinder;",GetMethodID,"Id for fallback method android.view.View.getWindowToken could not be cached",75);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__getWindowToken_23119_ID),result,::app::Android::Fallbacks::Android_android_os_IBinder__typeof(),::uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::view::View__getWindowToken_23119_ID),result,::app::Android::Fallbacks::Android_android_os_IBinder__typeof(),::uObject*,true,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool View__hasFocus(View* __this)
{
    return View__hasFocus_IMPL_22851(NULL, __this->_subclassed, __this->_javaObject);
}

bool View__hasFocus_IMPL_22851(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::view::View__hasFocus_22851_ID,::app::Android::android::view::View___javaClass_2,"hasFocus","()Z",GetMethodID,"Id for fallback method android.view.View.hasFocus could not be cached",69);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__hasFocus_22851_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::view::View__hasFocus_22851_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void View__invalidate_2(View* __this)
{
    View__invalidate_IMPL_23065(NULL, __this->_subclassed, __this->_javaObject);
}

void View__invalidate_IMPL_23065(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::view::View__invalidate_23065_ID,::app::Android::android::view::View___javaClass_2,"invalidate","()V",GetMethodID,"Id for fallback method android.view.View.invalidate could not be cached",71);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__invalidate_23065_ID);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__invalidate_23065_ID);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void View__measure(View* __this, int arg0, int arg1)
{
    View__measure_IMPL_23211(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void View__measure_IMPL_23211(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::view::View__measure_23211_ID,::app::Android::android::view::View___javaClass_2,"measure","(II)V",GetMethodID,"Id for fallback method android.view.View.measure could not be cached",68);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__measure_23211_ID, ((jint)arg2_), ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__measure_23211_ID, ((jint)arg2_), ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

View* View__New_6(::uStatic* __this, ::app::Android::android::content::Context* arg0)
{
    View* inst = (View*)::uAllocObject(sizeof(View), View__typeof());
    inst->_ObjInit_4(arg0);
    return inst;
}

void View__onScrollChanged(View* __this, int arg0, int arg1, int arg2, int arg3)
{
    View__onScrollChanged_IMPL_22996(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

void View__onScrollChanged_IMPL_22996(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::view::View__onScrollChanged_22996_ID,::app::Android::android::view::View___javaClass_2,"onScrollChanged","(IIII)V",GetMethodID,"Id for fallback method android.view.View.onScrollChanged could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__onScrollChanged_22996_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__onScrollChanged_22996_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

bool View__onTouchEvent(View* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return View__onTouchEvent_IMPL_22991(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool View__onTouchEvent_IMPL_22991(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::view::View__onTouchEvent_22991_ID,::app::Android::android::view::View___javaClass_2,"onTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.view.View.onTouchEvent could not be cached",73);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__onTouchEvent_22991_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::view::View__onTouchEvent_22991_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool View__requestFocus_2(View* __this)
{
    return View__requestFocus_IMPL_22934(NULL, __this->_subclassed, __this->_javaObject);
}

bool View__requestFocus_IMPL_22934(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::view::View__requestFocus_22934_ID,::app::Android::android::view::View___javaClass_2,"requestFocus","()Z",GetMethodID,"Id for fallback method android.view.View.requestFocus could not be cached",73);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__requestFocus_22934_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::view::View__requestFocus_22934_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void View__setAlpha(View* __this, float arg0)
{
    View__setAlpha_IMPL_23031(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void View__setAlpha_IMPL_23031(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::view::View__setAlpha_23031_ID,::app::Android::android::view::View___javaClass_2,"setAlpha","(F)V",GetMethodID,"Id for fallback method android.view.View.setAlpha could not be cached",69);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__setAlpha_23031_ID, ((jfloat)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__setAlpha_23031_ID, ((jfloat)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void View__setBackground(View* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    View__setBackground_IMPL_23177(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void View__setBackground_IMPL_23177(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::view::View__setBackground_23177_ID,::app::Android::android::view::View___javaClass_2,"setBackground","(Landroid/graphics/drawable/Drawable;)V",GetMethodID,"Id for fallback method android.view.View.setBackground could not be cached",74);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__setBackground_23177_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__setBackground_23177_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void View__setBackgroundColor(View* __this, int arg0)
{
    View__setBackgroundColor_IMPL_23175(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void View__setBackgroundColor_IMPL_23175(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::view::View__setBackgroundColor_23175_ID,::app::Android::android::view::View___javaClass_2,"setBackgroundColor","(I)V",GetMethodID,"Id for fallback method android.view.View.setBackgroundColor could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__setBackgroundColor_23175_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__setBackgroundColor_23175_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void View__setBackgroundResource(View* __this, int arg0)
{
    View__setBackgroundResource_IMPL_23176(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void View__setBackgroundResource_IMPL_23176(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::view::View__setBackgroundResource_23176_ID,::app::Android::android::view::View___javaClass_2,"setBackgroundResource","(I)V",GetMethodID,"Id for fallback method android.view.View.setBackgroundResource could not be cached",82);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__setBackgroundResource_23176_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__setBackgroundResource_23176_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void View__setEnabled(View* __this, bool arg0)
{
    View__setEnabled_IMPL_22894(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void View__setEnabled_IMPL_22894(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::view::View__setEnabled_22894_ID,::app::Android::android::view::View___javaClass_2,"setEnabled","(Z)V",GetMethodID,"Id for fallback method android.view.View.setEnabled could not be cached",71);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__setEnabled_22894_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__setEnabled_22894_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void View__setFocusable(View* __this, bool arg0)
{
    View__setFocusable_IMPL_22895(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void View__setFocusable_IMPL_22895(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::view::View__setFocusable_22895_ID,::app::Android::android::view::View___javaClass_2,"setFocusable","(Z)V",GetMethodID,"Id for fallback method android.view.View.setFocusable could not be cached",73);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__setFocusable_22895_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__setFocusable_22895_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void View__setFocusableInTouchMode(View* __this, bool arg0)
{
    View__setFocusableInTouchMode_IMPL_22896(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void View__setFocusableInTouchMode_IMPL_22896(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::view::View__setFocusableInTouchMode_22896_ID,::app::Android::android::view::View___javaClass_2,"setFocusableInTouchMode","(Z)V",GetMethodID,"Id for fallback method android.view.View.setFocusableInTouchMode could not be cached",84);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__setFocusableInTouchMode_22896_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__setFocusableInTouchMode_22896_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void View__setLayoutParams(View* __this, ::app::Android::android::view::ViewGroupDLRLayoutParams* arg0)
{
    View__setLayoutParams_IMPL_23057(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void View__setLayoutParams_IMPL_23057(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::view::View__setLayoutParams_23057_ID,::app::Android::android::view::View___javaClass_2,"setLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)V",GetMethodID,"Id for fallback method android.view.View.setLayoutParams could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__setLayoutParams_23057_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__setLayoutParams_23057_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void View__setOnFocusChangeListener(View* __this, ::uObject* arg0)
{
    View__setOnFocusChangeListener_IMPL_22828(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void View__setOnFocusChangeListener_IMPL_22828(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::view::View__setOnFocusChangeListener_22828_ID,::app::Android::android::view::View___javaClass_2,"setOnFocusChangeListener","(Landroid/view/View$OnFocusChangeListener;)V",GetMethodID,"Id for fallback method android.view.View.setOnFocusChangeListener could not be cached",85);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__setOnFocusChangeListener_22828_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__setOnFocusChangeListener_22828_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void View__setOnTouchListener(View* __this, ::uObject* arg0)
{
    View__setOnTouchListener_IMPL_22844(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void View__setOnTouchListener_IMPL_22844(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::view::View__setOnTouchListener_22844_ID,::app::Android::android::view::View___javaClass_2,"setOnTouchListener","(Landroid/view/View$OnTouchListener;)V",GetMethodID,"Id for fallback method android.view.View.setOnTouchListener could not be cached",79);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__setOnTouchListener_22844_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__setOnTouchListener_22844_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void View__setRotation(View* __this, float arg0)
{
    View__setRotation_IMPL_23016(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void View__setRotation_IMPL_23016(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::view::View__setRotation_23016_ID,::app::Android::android::view::View___javaClass_2,"setRotation","(F)V",GetMethodID,"Id for fallback method android.view.View.setRotation could not be cached",72);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__setRotation_23016_ID, ((jfloat)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__setRotation_23016_ID, ((jfloat)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void View__setScaleX(View* __this, float arg0)
{
    View__setScaleX_IMPL_23022(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void View__setScaleX_IMPL_23022(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::view::View__setScaleX_23022_ID,::app::Android::android::view::View___javaClass_2,"setScaleX","(F)V",GetMethodID,"Id for fallback method android.view.View.setScaleX could not be cached",70);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__setScaleX_23022_ID, ((jfloat)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__setScaleX_23022_ID, ((jfloat)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void View__setScaleY(View* __this, float arg0)
{
    View__setScaleY_IMPL_23024(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void View__setScaleY_IMPL_23024(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::view::View__setScaleY_23024_ID,::app::Android::android::view::View___javaClass_2,"setScaleY","(F)V",GetMethodID,"Id for fallback method android.view.View.setScaleY could not be cached",70);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__setScaleY_23024_ID, ((jfloat)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__setScaleY_23024_ID, ((jfloat)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void View__setScrollX(View* __this, int arg0)
{
    View__setScrollX_IMPL_23000(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void View__setScrollX_IMPL_23000(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::view::View__setScrollX_23000_ID,::app::Android::android::view::View___javaClass_2,"setScrollX","(I)V",GetMethodID,"Id for fallback method android.view.View.setScrollX could not be cached",71);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__setScrollX_23000_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__setScrollX_23000_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void View__setScrollY(View* __this, int arg0)
{
    View__setScrollY_IMPL_23001(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void View__setScrollY_IMPL_23001(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::view::View__setScrollY_23001_ID,::app::Android::android::view::View___javaClass_2,"setScrollY","(I)V",GetMethodID,"Id for fallback method android.view.View.setScrollY could not be cached",71);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__setScrollY_23001_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__setScrollY_23001_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void View__setTextAlignment(View* __this, int arg0)
{
    View__setTextAlignment_IMPL_23253(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void View__setTextAlignment_IMPL_23253(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::view::View__setTextAlignment_23253_ID,::app::Android::android::view::View___javaClass_2,"setTextAlignment","(I)V",GetMethodID,"Id for fallback method android.view.View.setTextAlignment could not be cached",77);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__setTextAlignment_23253_ID, ((jint)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__setTextAlignment_23253_ID, ((jint)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void View__setTranslationX(View* __this, float arg0)
{
    View__setTranslationX_IMPL_23046(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void View__setTranslationX_IMPL_23046(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::view::View__setTranslationX_23046_ID,::app::Android::android::view::View___javaClass_2,"setTranslationX","(F)V",GetMethodID,"Id for fallback method android.view.View.setTranslationX could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__setTranslationX_23046_ID, ((jfloat)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__setTranslationX_23046_ID, ((jfloat)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void View__setTranslationY(View* __this, float arg0)
{
    View__setTranslationY_IMPL_23048(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void View__setTranslationY_IMPL_23048(::uStatic* __this, bool arg0_, jobject arg1_, float arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    CACHE_METHOD(::app::Android::android::view::View__setTranslationY_23048_ID,::app::Android::android::view::View___javaClass_2,"setTranslationY","(F)V",GetMethodID,"Id for fallback method android.view.View.setTranslationY could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__setTranslationY_23048_ID, ((jfloat)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::View__setTranslationY_23048_ID, ((jfloat)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

::app::Android::java::lang::String* View__toString(View* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(View__toString_IMPL_22818(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* View__toString_IMPL_22818(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::View___javaClass_2,::app::Android::android::view::View___Init_2(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::view::View__toString_22818_ID,::app::Android::android::view::View___javaClass_2,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.View.toString could not be cached",69);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::view::View___javaClass_2, ::app::Android::android::view::View__toString_22818_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::view::View__toString_22818_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ViewDLRMeasureSpec___javaClass_2;
jfieldID ViewDLRMeasureSpec__EXACTLY_22710_ID;
jmethodID ViewDLRMeasureSpec__makeMeasureSpec_22713_ID;
jfieldID ViewDLRMeasureSpec__UNSPECIFIED_22709_ID;

ViewDLRMeasureSpec__uType* ViewDLRMeasureSpec__typeof()
{
    static ::uStaticStrong<ViewDLRMeasureSpec__uType*> type;
    if (type != NULL) return type;

    type = (ViewDLRMeasureSpec__uType*)::uAllocClassType(sizeof(ViewDLRMeasureSpec__uType), "Android.android.view.ViewDLRMeasureSpec", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ViewDLRMeasureSpec__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ViewDLRMeasureSpec__uType, __interface_1));

    return type;
}

void ViewDLRMeasureSpec___Init_2(::uStatic* __this)
{
    if (::app::Android::android::view::ViewDLRMeasureSpec___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::view::ViewDLRMeasureSpec___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/View$MeasureSpec"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::view::ViewDLRMeasureSpec___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.View$MeasureSpec'", 53);; }
}

int ViewDLRMeasureSpec__get_EXACTLY(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::ViewDLRMeasureSpec___javaClass_2,::app::Android::android::view::ViewDLRMeasureSpec___Init_2(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::view::ViewDLRMeasureSpec__EXACTLY_22710_ID)) {;
    CACHE_FIELD(::app::Android::android::view::ViewDLRMeasureSpec__EXACTLY_22710_ID,::app::Android::android::view::ViewDLRMeasureSpec___javaClass_2,"EXACTLY","I",GetStaticFieldID,"Id for field ViewDLRMeasureSpec.EXACTLY could not be cached",59);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::view::ViewDLRMeasureSpec___javaClass_2, ::app::Android::android::view::ViewDLRMeasureSpec__EXACTLY_22710_ID));;
    return result;
}

int ViewDLRMeasureSpec__get_UNSPECIFIED(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::ViewDLRMeasureSpec___javaClass_2,::app::Android::android::view::ViewDLRMeasureSpec___Init_2(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::view::ViewDLRMeasureSpec__UNSPECIFIED_22709_ID)) {;
    CACHE_FIELD(::app::Android::android::view::ViewDLRMeasureSpec__UNSPECIFIED_22709_ID,::app::Android::android::view::ViewDLRMeasureSpec___javaClass_2,"UNSPECIFIED","I",GetStaticFieldID,"Id for field ViewDLRMeasureSpec.UNSPECIFIED could not be cached",63);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::view::ViewDLRMeasureSpec___javaClass_2, ::app::Android::android::view::ViewDLRMeasureSpec__UNSPECIFIED_22709_ID));;
    return result;
}

int ViewDLRMeasureSpec__makeMeasureSpec(::uStatic* __this, int arg0, int arg1)
{
    return ViewDLRMeasureSpec__makeMeasureSpec_IMPL_22713(NULL, arg0, arg1);
}

int ViewDLRMeasureSpec__makeMeasureSpec_IMPL_22713(::uStatic* __this, int arg0_, int arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::ViewDLRMeasureSpec___javaClass_2,::app::Android::android::view::ViewDLRMeasureSpec___Init_2(NULL));
    
    int result;
    CACHE_METHOD(::app::Android::android::view::ViewDLRMeasureSpec__makeMeasureSpec_22713_ID,::app::Android::android::view::ViewDLRMeasureSpec___javaClass_2,"makeMeasureSpec","(II)I",GetStaticMethodID,"Id for fallback method android.view.View$MeasureSpec.makeMeasureSpec could not be cached",88);
    result = ((int)U_JNIVAR->CallStaticIntMethod(::app::Android::android::view::ViewDLRMeasureSpec___javaClass_2, ::app::Android::android::view::ViewDLRMeasureSpec__makeMeasureSpec_22713_ID, ((jint)arg0_), ((jint)arg1_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ViewDLROnFocusChangeListener__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.view.ViewDLROnFocusChangeListener");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ViewDLROnTouchListener__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Android.android.view.ViewDLROnTouchListener");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ViewGroup___javaClass_3;
jmethodID ViewGroup__addView_23432_ID;
jmethodID ViewGroup__addView_23433_ID;
jmethodID ViewGroup__bringChildToFront_23392_ID;
jmethodID ViewGroup__hasFocus_23380_ID;
jmethodID ViewGroup__onInterceptTouchEvent_23409_ID;
jmethodID ViewGroup__removeView_23446_ID;
jmethodID ViewGroup__setClipChildren_23425_ID;

ViewGroup__uType* ViewGroup__typeof()
{
    static ::uStaticStrong<ViewGroup__uType*> type;
    if (type != NULL) return type;

    type = (ViewGroup__uType*)::uAllocClassType(sizeof(ViewGroup__uType), "Android.android.view.ViewGroup", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::View__typeof());
    type->__fp_addView = ViewGroup__addView;
    type->__fp_addView_1 = ViewGroup__addView_1;
    type->__fp_hasFocus = (bool(*)(::app::Android::android::view::View*))ViewGroup__hasFocus;
    type->__fp_onInterceptTouchEvent = ViewGroup__onInterceptTouchEvent;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ViewGroup__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ViewGroup__uType, __interface_1));

    return type;
}

void ViewGroup___Init_3(::uStatic* __this)
{
    if (::app::Android::android::view::ViewGroup___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::view::ViewGroup___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/ViewGroup"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::view::ViewGroup___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.ViewGroup'", 46);; }
}

void ViewGroup___ObjInit_8(ViewGroup* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::view::View___ObjInit_7(__this, obj, utype, hasFallbackClass, resolveType);
}

void ViewGroup__addView(ViewGroup* __this, ::app::Android::android::view::View* arg0)
{
    ViewGroup__addView_IMPL_23432(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ViewGroup__addView_1(ViewGroup* __this, ::app::Android::android::view::View* arg0, int arg1)
{
    ViewGroup__addView_IMPL_23433(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void ViewGroup__addView_IMPL_23432(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::ViewGroup___javaClass_3,::app::Android::android::view::ViewGroup___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::view::ViewGroup__addView_23432_ID,::app::Android::android::view::ViewGroup___javaClass_3,"addView","(Landroid/view/View;)V",GetMethodID,"Id for fallback method android.view.ViewGroup.addView could not be cached",73);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::ViewGroup___javaClass_3, ::app::Android::android::view::ViewGroup__addView_23432_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::ViewGroup__addView_23432_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void ViewGroup__addView_IMPL_23433(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::ViewGroup___javaClass_3,::app::Android::android::view::ViewGroup___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::view::ViewGroup__addView_23433_ID,::app::Android::android::view::ViewGroup___javaClass_3,"addView","(Landroid/view/View;I)V",GetMethodID,"Id for fallback method android.view.ViewGroup.addView could not be cached",73);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::ViewGroup___javaClass_3, ::app::Android::android::view::ViewGroup__addView_23433_ID, _obArg2, ((jint)arg3_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::ViewGroup__addView_23433_ID, _obArg2, ((jint)arg3_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void ViewGroup__bringChildToFront(ViewGroup* __this, ::app::Android::android::view::View* arg0)
{
    ViewGroup__bringChildToFront_IMPL_23392(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ViewGroup__bringChildToFront_IMPL_23392(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::ViewGroup___javaClass_3,::app::Android::android::view::ViewGroup___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::view::ViewGroup__bringChildToFront_23392_ID,::app::Android::android::view::ViewGroup___javaClass_3,"bringChildToFront","(Landroid/view/View;)V",GetMethodID,"Id for fallback method android.view.ViewGroup.bringChildToFront could not be cached",83);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::ViewGroup___javaClass_3, ::app::Android::android::view::ViewGroup__bringChildToFront_23392_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::ViewGroup__bringChildToFront_23392_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

bool ViewGroup__hasFocus(ViewGroup* __this)
{
    return ViewGroup__hasFocus_IMPL_23380(NULL, __this->_subclassed, __this->_javaObject);
}

bool ViewGroup__hasFocus_IMPL_23380(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::ViewGroup___javaClass_3,::app::Android::android::view::ViewGroup___Init_3(NULL));
    
    bool result;
    CACHE_METHOD(::app::Android::android::view::ViewGroup__hasFocus_23380_ID,::app::Android::android::view::ViewGroup___javaClass_3,"hasFocus","()Z",GetMethodID,"Id for fallback method android.view.ViewGroup.hasFocus could not be cached",74);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::view::ViewGroup___javaClass_3, ::app::Android::android::view::ViewGroup__hasFocus_23380_ID));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::view::ViewGroup__hasFocus_23380_ID));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool ViewGroup__onInterceptTouchEvent(ViewGroup* __this, ::app::Android::android::view::MotionEvent* arg0)
{
    return ViewGroup__onInterceptTouchEvent_IMPL_23409(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool ViewGroup__onInterceptTouchEvent_IMPL_23409(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::ViewGroup___javaClass_3,::app::Android::android::view::ViewGroup___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    CACHE_METHOD(::app::Android::android::view::ViewGroup__onInterceptTouchEvent_23409_ID,::app::Android::android::view::ViewGroup___javaClass_3,"onInterceptTouchEvent","(Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.view.ViewGroup.onInterceptTouchEvent could not be cached",87);
    if (arg0_) {
        result = ((bool)U_JNIVAR->CallNonvirtualBooleanMethod(arg1_, ::app::Android::android::view::ViewGroup___javaClass_3, ::app::Android::android::view::ViewGroup__onInterceptTouchEvent_23409_ID, _obArg2));
    }
    else
    {
        result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::android::view::ViewGroup__onInterceptTouchEvent_23409_ID, _obArg2));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void ViewGroup__removeView(ViewGroup* __this, ::app::Android::android::view::View* arg0)
{
    ViewGroup__removeView_IMPL_23446(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void ViewGroup__removeView_IMPL_23446(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::ViewGroup___javaClass_3,::app::Android::android::view::ViewGroup___Init_3(NULL));
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    CACHE_METHOD(::app::Android::android::view::ViewGroup__removeView_23446_ID,::app::Android::android::view::ViewGroup___javaClass_3,"removeView","(Landroid/view/View;)V",GetMethodID,"Id for fallback method android.view.ViewGroup.removeView could not be cached",76);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::ViewGroup___javaClass_3, ::app::Android::android::view::ViewGroup__removeView_23446_ID, _obArg2);
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::ViewGroup__removeView_23446_ID, _obArg2);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void ViewGroup__setClipChildren(ViewGroup* __this, bool arg0)
{
    ViewGroup__setClipChildren_IMPL_23425(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void ViewGroup__setClipChildren_IMPL_23425(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::ViewGroup___javaClass_3,::app::Android::android::view::ViewGroup___Init_3(NULL));
    
    CACHE_METHOD(::app::Android::android::view::ViewGroup__setClipChildren_23425_ID,::app::Android::android::view::ViewGroup___javaClass_3,"setClipChildren","(Z)V",GetMethodID,"Id for fallback method android.view.ViewGroup.setClipChildren could not be cached",81);
    if (arg0_) {
        U_JNIVAR->CallNonvirtualVoidMethod(arg1_, ::app::Android::android::view::ViewGroup___javaClass_3, ::app::Android::android::view::ViewGroup__setClipChildren_23425_ID, ((jboolean)arg2_));
    }
    else
    {
        U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::android::view::ViewGroup__setClipChildren_23425_ID, ((jboolean)arg2_));
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass ViewGroupDLRLayoutParams___javaClass_2;
jfieldID ViewGroupDLRLayoutParams__FILL_PARENT_23322_ID;

ViewGroupDLRLayoutParams__uType* ViewGroupDLRLayoutParams__typeof()
{
    static ::uStaticStrong<ViewGroupDLRLayoutParams__uType*> type;
    if (type != NULL) return type;

    type = (ViewGroupDLRLayoutParams__uType*)::uAllocClassType(sizeof(ViewGroupDLRLayoutParams__uType), "Android.android.view.ViewGroupDLRLayoutParams", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ViewGroupDLRLayoutParams__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ViewGroupDLRLayoutParams__uType, __interface_1));

    return type;
}

void ViewGroupDLRLayoutParams___Init_2(::uStatic* __this)
{
    if (::app::Android::android::view::ViewGroupDLRLayoutParams___javaClass_2) { return; }
    INIT_JNI;
    ::app::Android::android::view::ViewGroupDLRLayoutParams___javaClass_2 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/ViewGroup$LayoutParams"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::view::ViewGroupDLRLayoutParams___javaClass_2) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.ViewGroup$LayoutParams'", 59);; }
}

void ViewGroupDLRLayoutParams___ObjInit_7(ViewGroupDLRLayoutParams* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::java::lang::Object___ObjInit_3(__this, obj, utype, hasFallbackClass, resolveType);
}

int ViewGroupDLRLayoutParams__get_FILL_PARENT(::uStatic* __this)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::ViewGroupDLRLayoutParams___javaClass_2,::app::Android::android::view::ViewGroupDLRLayoutParams___Init_2(NULL));
    if (::uEnterCriticalIfNull(&::app::Android::android::view::ViewGroupDLRLayoutParams__FILL_PARENT_23322_ID)) {;
    CACHE_FIELD(::app::Android::android::view::ViewGroupDLRLayoutParams__FILL_PARENT_23322_ID,::app::Android::android::view::ViewGroupDLRLayoutParams___javaClass_2,"FILL_PARENT","I",GetStaticFieldID,"Id for field ViewGroupDLRLayoutParams.FILL_PARENT could not be cached",69);
    ::uExitCritical();;
    };
    int result;;
    result = ((int)U_JNIVAR->GetStaticIntField(::app::Android::android::view::ViewGroupDLRLayoutParams___javaClass_2, ::app::Android::android::view::ViewGroupDLRLayoutParams__FILL_PARENT_23322_ID));;
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ViewGroupDLRMarginLayoutParams__uType* ViewGroupDLRMarginLayoutParams__typeof()
{
    static ::uStaticStrong<ViewGroupDLRMarginLayoutParams__uType*> type;
    if (type != NULL) return type;

    type = (ViewGroupDLRMarginLayoutParams__uType*)::uAllocClassType(sizeof(ViewGroupDLRMarginLayoutParams__uType), "Android.android.view.ViewGroupDLRMarginLayoutParams", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::ViewGroupDLRLayoutParams__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(ViewGroupDLRMarginLayoutParams__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ViewGroupDLRMarginLayoutParams__uType, __interface_1));

    return type;
}

void ViewGroupDLRMarginLayoutParams___ObjInit_8(ViewGroupDLRMarginLayoutParams* __this, jobject obj, ::uType* utype, bool hasFallbackClass, bool resolveType)
{
    ::app::Android::android::view::ViewGroupDLRLayoutParams___ObjInit_7(__this, obj, utype, hasFallbackClass, resolveType);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/android/view/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jclass WindowManagerDLRLayoutParams___javaClass_3;
jmethodID WindowManagerDLRLayoutParams__toString_23907_ID;

WindowManagerDLRLayoutParams__uType* WindowManagerDLRLayoutParams__typeof()
{
    static ::uStaticStrong<WindowManagerDLRLayoutParams__uType*> type;
    if (type != NULL) return type;

    type = (WindowManagerDLRLayoutParams__uType*)::uAllocClassType(sizeof(WindowManagerDLRLayoutParams__uType), "Android.android.view.WindowManagerDLRLayoutParams", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::ViewGroupDLRLayoutParams__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))WindowManagerDLRLayoutParams__toString;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(WindowManagerDLRLayoutParams__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(WindowManagerDLRLayoutParams__uType, __interface_1));

    return type;
}

void WindowManagerDLRLayoutParams___Init_3(::uStatic* __this)
{
    if (::app::Android::android::view::WindowManagerDLRLayoutParams___javaClass_3) { return; }
    INIT_JNI;
    ::app::Android::android::view::WindowManagerDLRLayoutParams___javaClass_3 = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/WindowManager$LayoutParams"));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    if (!::app::Android::android::view::WindowManagerDLRLayoutParams___javaClass_3) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.WindowManager$LayoutParams'", 63);; }
}

::app::Android::java::lang::String* WindowManagerDLRLayoutParams__toString(WindowManagerDLRLayoutParams* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(WindowManagerDLRLayoutParams__toString_IMPL_23907(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* WindowManagerDLRLayoutParams__toString_IMPL_23907(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(::app::Android::android::view::WindowManagerDLRLayoutParams___javaClass_3,::app::Android::android::view::WindowManagerDLRLayoutParams___Init_3(NULL));
    
    ::uObject* result;
    CACHE_METHOD(::app::Android::android::view::WindowManagerDLRLayoutParams__toString_23907_ID,::app::Android::android::view::WindowManagerDLRLayoutParams___javaClass_3,"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.WindowManager$LayoutParams.toString could not be cached",91);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, ::app::Android::android::view::WindowManagerDLRLayoutParams___javaClass_3, ::app::Android::android::view::WindowManagerDLRLayoutParams__toString_23907_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::android::view::WindowManagerDLRLayoutParams__toString_23907_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    }
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

}}}}
