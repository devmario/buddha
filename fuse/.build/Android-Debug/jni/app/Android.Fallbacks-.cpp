#include <app/Android.android.animation.TimeAnimator.h>
#include <app/Android.android.content.ComponentName.h>
#include <app/Android.android.content.Intent.h>
#include <app/Android.android.content.res.Resources.h>
#include <app/Android.android.graphics.Canvas.h>
#include <app/Android.android.graphics.drawable.Drawable.h>
#include <app/Android.android.graphics.Rect.h>
#include <app/Android.android.graphics.SurfaceTexture.h>
#include <app/Android.android.os.IBinder.h>
#include <app/Android.android.os.IBinderDLRDeathRecipient.h>
#include <app/Android.android.os.IInterface.h>
#include <app/Android.android.os.Parcel.h>
#include <app/Android.android.text.Editable.h>
#include <app/Android.android.text.Spanned.h>
#include <app/Android.android.view.ActionProvider.h>
#include <app/Android.android.view.ContextMenuDLRContextMenuInfo.h>
#include <app/Android.android.view.KeyEvent.h>
#include <app/Android.android.view.MenuItem.h>
#include <app/Android.android.view.MenuItemDLROnActionExpandListener.h>
#include <app/Android.android.view.MenuItemDLROnMenuItemClickListener.h>
#include <app/Android.android.view.MotionEvent.h>
#include <app/Android.android.view.SubMenu.h>
#include <app/Android.android.view.Surface.h>
#include <app/Android.android.view.SurfaceHolder.h>
#include <app/Android.android.view.SurfaceHolderDLRCallback.h>
#include <app/Android.android.view.View.h>
#include <app/Android.android.widget.CompoundButton.h>
#include <app/Android.android.widget.SeekBar.h>
#include <app/Android.android.widget.TextView.h>
#include <app/Android.Base.AndroidBindingMacros.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.jmethodID.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.Fallbacks.Android_android_animation_Animator.h>
#include <app/Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener.h>
#include <app/Android.Fallbacks.Android_android_content_Context.h>
#include <app/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h>
#include <app/Android.Fallbacks.Android_android_graphics_drawable_shapes_Shape.h>
#include <app/Android.Fallbacks.Android_android_net_Uri.h>
#include <app/Android.Fallbacks.Android_android_os_IBinder.h>
#include <app/Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h>
#include <app/Android.Fallbacks.Android_android_os_IInterface.h>
#include <app/Android.Fallbacks.Android_android_os_Vibrator.h>
#include <app/Android.Fallbacks.Android_android_text_Editable.h>
#include <app/Android.Fallbacks.Android_android_text_GetChars.h>
#include <app/Android.Fallbacks.Android_android_text_InputFilter.h>
#include <app/Android.Fallbacks.Android_android_text_Layout.h>
#include <app/Android.Fallbacks.Android_android_text_Spannable.h>
#include <app/Android.Fallbacks.Android_android_text_Spanned.h>
#include <app/Android.Fallbacks.Android_android_text_TextWatcher.h>
#include <app/Android.Fallbacks.Android_android_util_AttributeSet.h>
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
#include <app/Android.Fallbacks.Android_android_widget_AbsSeekBar.h>
#include <app/Android.Fallbacks.Android_android_widget_CompoundButton.h>
#include <app/Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-eb4d489e.h>
#include <app/Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-d93a5fd2.h>
#include <app/Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-e197328f.h>
#include <app/Android.Fallbacks.Android_java_io_InputStream.h>
#include <app/Android.Fallbacks.Android_java_lang_CharSequence.h>
#include <app/Android.Fallbacks.Android_java_lang_Runnable.h>
#include <app/Android.java.io.FileDescriptor.h>
#include <app/Android.java.lang.CharSequence.h>
#include <app/Android.java.lang.Class.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.String.h>
#include <app/Android.Runtime.CharArray.h>
#include <app/Android.Runtime.ObjectArray__Android_android_content_Intent.h>
#include <app/Android.Runtime.ObjectArray__Android_android_text_InputFilter.h>
#include <app/Android.Runtime.ObjectArray__Android_android_view_MenuItem.h>
#include <app/Android.Runtime.ObjectArray__Android_java_lang_Object.h>
#include <app/Android.Runtime.ObjectArray__Android_java_lang_String.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>

namespace app {
namespace Android {
namespace Fallbacks {

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_animation_Animator__uType* Android_android_animation_Animator__typeof()
{
    static ::uStaticStrong<Android_android_animation_Animator__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_animation_Animator__uType*)::uAllocClassType(sizeof(Android_android_animation_Animator__uType), "Android.Fallbacks.Android_android_animation_Animator", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::animation::Animator__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_animation_Animator__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_animation_Animator__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate_375_ID;

Android_android_animation_TimeAnimatorDLRTimeListener__uType* Android_android_animation_TimeAnimatorDLRTimeListener__typeof()
{
    static ::uStaticStrong<Android_android_animation_TimeAnimatorDLRTimeListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_animation_TimeAnimatorDLRTimeListener__uType*)::uAllocClassType(sizeof(Android_android_animation_TimeAnimatorDLRTimeListener__uType), "Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onTimeUpdate = (void(*)(void*, ::app::Android::android::animation::TimeAnimator*, ::uLong, ::uLong))Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_animation_TimeAnimatorDLRTimeListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_animation_TimeAnimatorDLRTimeListener__uType, __interface_1),
        ::app::Android::android::animation::TimeAnimatorDLRTimeListener__typeof(), offsetof(Android_android_animation_TimeAnimatorDLRTimeListener__uType, __interface_2));

    return type;
}

void Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate(Android_android_animation_TimeAnimatorDLRTimeListener* __this, ::app::Android::android::animation::TimeAnimator* arg0, ::uLong arg1, ::uLong arg2)
{
    Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate_IMPL_375(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2);
}

void Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate_IMPL_375(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uLong arg3_, ::uLong arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate_375_ID,"android/animation/TimeAnimator$TimeListener","onTimeUpdate","(Landroid/animation/TimeAnimator;JJ)V",GetMethodID,"Id for fallback method android.animation.TimeAnimator$TimeListener.onTimeUpdate could not be cached",99);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_animation_TimeAnimatorDLRTimeListener__onTimeUpdate_375_ID, _obArg2, ((jlong)arg3_), ((jlong)arg4_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_content_Context__getResources_44466_ID;
jmethodID Android_android_content_Context__getSystemService_44532_ID;

Android_android_content_Context__uType* Android_android_content_Context__typeof()
{
    static ::uStaticStrong<Android_android_content_Context__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_content_Context__uType*)::uAllocClassType(sizeof(Android_android_content_Context__uType), "Android.Fallbacks.Android_android_content_Context", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::content::Context__typeof());
    type->__fp_getResources = (::app::Android::android::content::res::Resources*(*)(::app::Android::android::content::Context*))Android_android_content_Context__getResources;
    type->__fp_getSystemService = (::app::Android::java::lang::Object*(*)(::app::Android::android::content::Context*, ::app::Android::java::lang::String*))Android_android_content_Context__getSystemService;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_content_Context__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_content_Context__uType, __interface_1));

    return type;
}

::app::Android::android::content::res::Resources* Android_android_content_Context__getResources(Android_android_content_Context* __this)
{
    return ::uCast< ::app::Android::android::content::res::Resources*>(Android_android_content_Context__getResources_IMPL_44466(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::content::res::Resources__typeof());
}

::uObject* Android_android_content_Context__getResources_IMPL_44466(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_content_Context__getResources_44466_ID,"android/content/Context","getResources","()Landroid/content/res/Resources;",GetMethodID,"Id for fallback method android.content.Context.getResources could not be cached",79);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_content_Context__getResources_44466_ID),result,::app::Android::android::content::res::Resources__typeof(),::app::Android::android::content::res::Resources*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::Object* Android_android_content_Context__getSystemService(Android_android_content_Context* __this, ::app::Android::java::lang::String* arg0)
{
    return ::uCast< ::app::Android::java::lang::Object*>(Android_android_content_Context__getSystemService_IMPL_44532(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::java::lang::Object__typeof());
}

::uObject* Android_android_content_Context__getSystemService_IMPL_44532(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_content_Context__getSystemService_44532_ID,"android/content/Context","getSystemService","(Ljava/lang/String;)Ljava/lang/Object;",GetMethodID,"Id for fallback method android.content.Context.getSystemService could not be cached",83);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_content_Context__getSystemService_44532_ID, _obArg2),result,::app::Android::java::lang::Object__typeof(),::app::Android::java::lang::Object*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_graphics_drawable_Drawable__uType* Android_android_graphics_drawable_Drawable__typeof()
{
    static ::uStaticStrong<Android_android_graphics_drawable_Drawable__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_graphics_drawable_Drawable__uType*)::uAllocClassType(sizeof(Android_android_graphics_drawable_Drawable__uType), "Android.Fallbacks.Android_android_graphics_drawable_Drawable", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::graphics::drawable::Drawable__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_graphics_drawable_Drawable__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_graphics_drawable_Drawable__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_graphics_drawable_shapes_Shape__uType* Android_android_graphics_drawable_shapes_Shape__typeof()
{
    static ::uStaticStrong<Android_android_graphics_drawable_shapes_Shape__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_graphics_drawable_shapes_Shape__uType*)::uAllocClassType(sizeof(Android_android_graphics_drawable_shapes_Shape__uType), "Android.Fallbacks.Android_android_graphics_drawable_shapes_Shape", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::graphics::drawable::shapes::Shape__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_graphics_drawable_shapes_Shape__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_graphics_drawable_shapes_Shape__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_net_Uri__uType* Android_android_net_Uri__typeof()
{
    static ::uStaticStrong<Android_android_net_Uri__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_net_Uri__uType*)::uAllocClassType(sizeof(Android_android_net_Uri__uType), "Android.Fallbacks.Android_android_net_Uri", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::net::Uri__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_net_Uri__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_net_Uri__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_os_IBinder__dump_13823_ID;
jmethodID Android_android_os_IBinder__dumpAsync_13824_ID;
jmethodID Android_android_os_IBinder__getInterfaceDescriptor_13819_ID;
jmethodID Android_android_os_IBinder__isBinderAlive_13821_ID;
jmethodID Android_android_os_IBinder__linkToDeath_13826_ID;
jmethodID Android_android_os_IBinder__pingBinder_13820_ID;
jmethodID Android_android_os_IBinder__queryLocalInterface_13822_ID;
jmethodID Android_android_os_IBinder__transact_13825_ID;
jmethodID Android_android_os_IBinder__unlinkToDeath_13827_ID;

Android_android_os_IBinder__uType* Android_android_os_IBinder__typeof()
{
    static ::uStaticStrong<Android_android_os_IBinder__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_os_IBinder__uType*)::uAllocClassType(sizeof(Android_android_os_IBinder__uType), "Android.Fallbacks.Android_android_os_IBinder", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_getInterfaceDescriptor = (::app::Android::java::lang::String*(*)(void*))Android_android_os_IBinder__getInterfaceDescriptor;
    type->__interface_2.__fp_pingBinder = (bool(*)(void*))Android_android_os_IBinder__pingBinder;
    type->__interface_2.__fp_isBinderAlive = (bool(*)(void*))Android_android_os_IBinder__isBinderAlive;
    type->__interface_2.__fp_queryLocalInterface = (::uObject*(*)(void*, ::app::Android::java::lang::String*))Android_android_os_IBinder__queryLocalInterface;
    type->__interface_2.__fp_dump = (void(*)(void*, ::app::Android::java::io::FileDescriptor*, ::app::Android::Runtime::ObjectArray__Android_java_lang_String*))Android_android_os_IBinder__dump;
    type->__interface_2.__fp_dumpAsync = (void(*)(void*, ::app::Android::java::io::FileDescriptor*, ::app::Android::Runtime::ObjectArray__Android_java_lang_String*))Android_android_os_IBinder__dumpAsync;
    type->__interface_2.__fp_transact = (bool(*)(void*, int, ::app::Android::android::os::Parcel*, ::app::Android::android::os::Parcel*, int))Android_android_os_IBinder__transact;
    type->__interface_2.__fp_linkToDeath = (void(*)(void*, ::uObject*, int))Android_android_os_IBinder__linkToDeath;
    type->__interface_2.__fp_unlinkToDeath = (bool(*)(void*, ::uObject*, int))Android_android_os_IBinder__unlinkToDeath;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_os_IBinder__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_os_IBinder__uType, __interface_1),
        ::app::Android::android::os::IBinder__typeof(), offsetof(Android_android_os_IBinder__uType, __interface_2));

    return type;
}

void Android_android_os_IBinder__dump(Android_android_os_IBinder* __this, ::app::Android::java::io::FileDescriptor* arg0, ::app::Android::Runtime::ObjectArray__Android_java_lang_String* arg1)
{
    Android_android_os_IBinder__dump_IMPL_13823(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

void Android_android_os_IBinder__dump_IMPL_13823(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IBinder__dump_13823_ID,"android/os/IBinder","dump","(Ljava/io/FileDescriptor;[Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.os.IBinder.dump could not be cached",66);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IBinder__dump_13823_ID, _obArg2, _obArg3);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_os_IBinder__dumpAsync(Android_android_os_IBinder* __this, ::app::Android::java::io::FileDescriptor* arg0, ::app::Android::Runtime::ObjectArray__Android_java_lang_String* arg1)
{
    Android_android_os_IBinder__dumpAsync_IMPL_13824(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

void Android_android_os_IBinder__dumpAsync_IMPL_13824(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IBinder__dumpAsync_13824_ID,"android/os/IBinder","dumpAsync","(Ljava/io/FileDescriptor;[Ljava/lang/String;)V",GetMethodID,"Id for fallback method android.os.IBinder.dumpAsync could not be cached",71);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IBinder__dumpAsync_13824_ID, _obArg2, _obArg3);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

::app::Android::java::lang::String* Android_android_os_IBinder__getInterfaceDescriptor(Android_android_os_IBinder* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_os_IBinder__getInterfaceDescriptor_IMPL_13819(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_android_os_IBinder__getInterfaceDescriptor_IMPL_13819(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IBinder__getInterfaceDescriptor_13819_ID,"android/os/IBinder","getInterfaceDescriptor","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.os.IBinder.getInterfaceDescriptor could not be cached",84);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IBinder__getInterfaceDescriptor_13819_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Android_android_os_IBinder__isBinderAlive(Android_android_os_IBinder* __this)
{
    return Android_android_os_IBinder__isBinderAlive_IMPL_13821(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_os_IBinder__isBinderAlive_IMPL_13821(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IBinder__isBinderAlive_13821_ID,"android/os/IBinder","isBinderAlive","()Z",GetMethodID,"Id for fallback method android.os.IBinder.isBinderAlive could not be cached",75);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IBinder__isBinderAlive_13821_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void Android_android_os_IBinder__linkToDeath(Android_android_os_IBinder* __this, ::uObject* arg0, int arg1)
{
    Android_android_os_IBinder__linkToDeath_IMPL_13826(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void Android_android_os_IBinder__linkToDeath_IMPL_13826(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IBinder__linkToDeath_13826_ID,"android/os/IBinder","linkToDeath","(Landroid/os/IBinder$DeathRecipient;I)V",GetMethodID,"Id for fallback method android.os.IBinder.linkToDeath could not be cached",73);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IBinder__linkToDeath_13826_ID, _obArg2, ((jint)arg3_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

bool Android_android_os_IBinder__pingBinder(Android_android_os_IBinder* __this)
{
    return Android_android_os_IBinder__pingBinder_IMPL_13820(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_os_IBinder__pingBinder_IMPL_13820(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IBinder__pingBinder_13820_ID,"android/os/IBinder","pingBinder","()Z",GetMethodID,"Id for fallback method android.os.IBinder.pingBinder could not be cached",72);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IBinder__pingBinder_13820_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_os_IBinder__queryLocalInterface(Android_android_os_IBinder* __this, ::app::Android::java::lang::String* arg0)
{
    return (::uObject*)Android_android_os_IBinder__queryLocalInterface_IMPL_13822(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_os_IBinder__queryLocalInterface_IMPL_13822(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IBinder__queryLocalInterface_13822_ID,"android/os/IBinder","queryLocalInterface","(Ljava/lang/String;)Landroid/os/IInterface;",GetMethodID,"Id for fallback method android.os.IBinder.queryLocalInterface could not be cached",81);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IBinder__queryLocalInterface_13822_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_os_IInterface__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Android_android_os_IBinder__transact(Android_android_os_IBinder* __this, int arg0, ::app::Android::android::os::Parcel* arg1, ::app::Android::android::os::Parcel* arg2, int arg3)
{
    return Android_android_os_IBinder__transact_IMPL_13825(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1, (::uObject*)arg2, arg3);
}

bool Android_android_os_IBinder__transact_IMPL_13825(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_, ::uObject* arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IBinder__transact_13825_ID,"android/os/IBinder","transact","(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z",GetMethodID,"Id for fallback method android.os.IBinder.transact could not be cached",70);
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IBinder__transact_13825_ID, ((jint)arg2_), _obArg3, _obArg4, ((jint)arg5_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Android_android_os_IBinder__unlinkToDeath(Android_android_os_IBinder* __this, ::uObject* arg0, int arg1)
{
    return Android_android_os_IBinder__unlinkToDeath_IMPL_13827(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

bool Android_android_os_IBinder__unlinkToDeath_IMPL_13827(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IBinder__unlinkToDeath_13827_ID,"android/os/IBinder","unlinkToDeath","(Landroid/os/IBinder$DeathRecipient;I)Z",GetMethodID,"Id for fallback method android.os.IBinder.unlinkToDeath could not be cached",75);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IBinder__unlinkToDeath_13827_ID, _obArg2, ((jint)arg3_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_os_IBinderDLRDeathRecipient__binderDied_13818_ID;

Android_android_os_IBinderDLRDeathRecipient__uType* Android_android_os_IBinderDLRDeathRecipient__typeof()
{
    static ::uStaticStrong<Android_android_os_IBinderDLRDeathRecipient__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_os_IBinderDLRDeathRecipient__uType*)::uAllocClassType(sizeof(Android_android_os_IBinderDLRDeathRecipient__uType), "Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_binderDied = (void(*)(void*))Android_android_os_IBinderDLRDeathRecipient__binderDied;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_os_IBinderDLRDeathRecipient__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_os_IBinderDLRDeathRecipient__uType, __interface_1),
        ::app::Android::android::os::IBinderDLRDeathRecipient__typeof(), offsetof(Android_android_os_IBinderDLRDeathRecipient__uType, __interface_2));

    return type;
}

void Android_android_os_IBinderDLRDeathRecipient__binderDied(Android_android_os_IBinderDLRDeathRecipient* __this)
{
    Android_android_os_IBinderDLRDeathRecipient__binderDied_IMPL_13818(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_os_IBinderDLRDeathRecipient__binderDied_IMPL_13818(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IBinderDLRDeathRecipient__binderDied_13818_ID,"android/os/IBinder$DeathRecipient","binderDied","()V",GetMethodID,"Id for fallback method android.os.IBinder$DeathRecipient.binderDied could not be cached",87);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IBinderDLRDeathRecipient__binderDied_13818_ID);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_os_IInterface__asBinder_13836_ID;

Android_android_os_IInterface__uType* Android_android_os_IInterface__typeof()
{
    static ::uStaticStrong<Android_android_os_IInterface__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_os_IInterface__uType*)::uAllocClassType(sizeof(Android_android_os_IInterface__uType), "Android.Fallbacks.Android_android_os_IInterface", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_asBinder = (::uObject*(*)(void*))Android_android_os_IInterface__asBinder;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_os_IInterface__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_os_IInterface__uType, __interface_1),
        ::app::Android::android::os::IInterface__typeof(), offsetof(Android_android_os_IInterface__uType, __interface_2));

    return type;
}

::uObject* Android_android_os_IInterface__asBinder(Android_android_os_IInterface* __this)
{
    return (::uObject*)Android_android_os_IInterface__asBinder_IMPL_13836(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* Android_android_os_IInterface__asBinder_IMPL_13836(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_IInterface__asBinder_13836_ID,"android/os/IInterface","asBinder","()Landroid/os/IBinder;",GetMethodID,"Id for fallback method android.os.IInterface.asBinder could not be cached",73);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_IInterface__asBinder_13836_ID),result,::app::Android::Fallbacks::Android_android_os_IBinder__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_os_Vibrator__vibrate_44559_ID;

Android_android_os_Vibrator__uType* Android_android_os_Vibrator__typeof()
{
    static ::uStaticStrong<Android_android_os_Vibrator__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_os_Vibrator__uType*)::uAllocClassType(sizeof(Android_android_os_Vibrator__uType), "Android.Fallbacks.Android_android_os_Vibrator", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::os::Vibrator__typeof());
    type->__fp_vibrate = (void(*)(::app::Android::android::os::Vibrator*, ::uLong))Android_android_os_Vibrator__vibrate;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_os_Vibrator__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_os_Vibrator__uType, __interface_1));

    return type;
}

void Android_android_os_Vibrator__vibrate(Android_android_os_Vibrator* __this, ::uLong arg0)
{
    Android_android_os_Vibrator__vibrate_IMPL_44559(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_os_Vibrator__vibrate_IMPL_44559(::uStatic* __this, bool arg0_, jobject arg1_, ::uLong arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_os_Vibrator__vibrate_44559_ID,"android/os/Vibrator","vibrate","(J)V",GetMethodID,"Id for fallback method android.os.Vibrator.vibrate could not be cached",70);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_os_Vibrator__vibrate_44559_ID, ((jlong)arg2_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_text_Editable__append_19826_ID;
jmethodID Android_android_text_Editable__append_19827_ID;
jmethodID Android_android_text_Editable__append_19828_ID;
jmethodID Android_android_text_Editable__charAt_30511_ID;
jmethodID Android_android_text_Editable__clear_19829_ID;
jmethodID Android_android_text_Editable__clearSpans_19830_ID;
jmethodID Android_android_text_Editable__getChars_19833_ID;
jmethodID Android_android_text_Editable__getFilters_19832_ID;
jmethodID Android_android_text_Editable__getSpanEnd_20038_ID;
jmethodID Android_android_text_Editable__getSpanFlags_20039_ID;
jmethodID Android_android_text_Editable__getSpans_20036_ID;
jmethodID Android_android_text_Editable__getSpanStart_20037_ID;
jmethodID Android_android_text_Editable__insert_19823_ID;
jmethodID Android_android_text_Editable__insert_19824_ID;
jmethodID Android_android_text_Editable__j_delete_19825_ID;
jmethodID Android_android_text_Editable__length_30510_ID;
jmethodID Android_android_text_Editable__nextSpanTransition_20040_ID;
jmethodID Android_android_text_Editable__removeSpan_19987_ID;
jmethodID Android_android_text_Editable__replace_19821_ID;
jmethodID Android_android_text_Editable__replace_19822_ID;
jmethodID Android_android_text_Editable__setFilters_19831_ID;
jmethodID Android_android_text_Editable__setSpan_19986_ID;
jmethodID Android_android_text_Editable__subSequence_30512_ID;
jmethodID Android_android_text_Editable__toString_30513_ID;

Android_android_text_Editable__uType* Android_android_text_Editable__typeof()
{
    static ::uStaticStrong<Android_android_text_Editable__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_text_Editable__uType*)::uAllocClassType(sizeof(Android_android_text_Editable__uType), "Android.Fallbacks.Android_android_text_Editable", false, 7, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Android_android_text_Editable__toString;
    type->__interface_2.__fp_replace = (::uObject*(*)(void*, int, int, ::uObject*, int, int))Android_android_text_Editable__replace;
    type->__interface_2.__fp_replace_1 = (::uObject*(*)(void*, int, int, ::uObject*))Android_android_text_Editable__replace_1;
    type->__interface_2.__fp_insert_1 = (::uObject*(*)(void*, int, ::uObject*, int, int))Android_android_text_Editable__insert;
    type->__interface_2.__fp_insert = (::uObject*(*)(void*, int, ::uObject*))Android_android_text_Editable__insert_1;
    type->__interface_2.__fp_j_delete = (::uObject*(*)(void*, int, int))Android_android_text_Editable__j_delete;
    type->__interface_2.__fp_append_2 = (::uObject*(*)(void*, ::uObject*))Android_android_text_Editable__append_1;
    type->__interface_2.__fp_append_1 = (::uObject*(*)(void*, ::uObject*, int, int))Android_android_text_Editable__append_2;
    type->__interface_2.__fp_append = (::uObject*(*)(void*, ::uChar))Android_android_text_Editable__append;
    type->__interface_2.__fp_clear = (void(*)(void*))Android_android_text_Editable__clear;
    type->__interface_2.__fp_clearSpans = (void(*)(void*))Android_android_text_Editable__clearSpans;
    type->__interface_2.__fp_setFilters = (void(*)(void*, ::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter*))Android_android_text_Editable__setFilters;
    type->__interface_2.__fp_getFilters = (::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter*(*)(void*))Android_android_text_Editable__getFilters;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;
    type->__interface_3.__fp_length = (int(*)(void*))Android_android_text_Editable__length;
    type->__interface_3.__fp_charAt = (::uChar(*)(void*, int))Android_android_text_Editable__charAt;
    type->__interface_3.__fp_subSequence = (::uObject*(*)(void*, int, int))Android_android_text_Editable__subSequence;
    type->__interface_3.__fp_toString = (::app::Android::java::lang::String*(*)(void*))Android_android_text_Editable__toString;
    type->__interface_4.__fp_getChars = (void(*)(void*, int, int, ::app::Android::Runtime::CharArray*, int))Android_android_text_Editable__getChars;
    type->__interface_5.__fp_setSpan = (void(*)(void*, ::app::Android::java::lang::Object*, int, int, int))Android_android_text_Editable__setSpan;
    type->__interface_5.__fp_removeSpan = (void(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Editable__removeSpan;
    type->__interface_6.__fp_getSpans = (::app::Android::Runtime::ObjectArray__Android_java_lang_Object*(*)(void*, int, int, ::app::Android::java::lang::Class*))Android_android_text_Editable__getSpans;
    type->__interface_6.__fp_getSpanStart = (int(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Editable__getSpanStart;
    type->__interface_6.__fp_getSpanEnd = (int(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Editable__getSpanEnd;
    type->__interface_6.__fp_getSpanFlags = (int(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Editable__getSpanFlags;
    type->__interface_6.__fp_nextSpanTransition = (int(*)(void*, int, int, ::app::Android::java::lang::Class*))Android_android_text_Editable__nextSpanTransition;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_text_Editable__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_text_Editable__uType, __interface_1),
        ::app::Android::android::text::Editable__typeof(), offsetof(Android_android_text_Editable__uType, __interface_2),
        ::app::Android::java::lang::CharSequence__typeof(), offsetof(Android_android_text_Editable__uType, __interface_3),
        ::app::Android::android::text::GetChars__typeof(), offsetof(Android_android_text_Editable__uType, __interface_4),
        ::app::Android::android::text::Spannable__typeof(), offsetof(Android_android_text_Editable__uType, __interface_5),
        ::app::Android::android::text::Spanned__typeof(), offsetof(Android_android_text_Editable__uType, __interface_6));

    return type;
}

::uObject* Android_android_text_Editable__append(Android_android_text_Editable* __this, ::uChar arg0)
{
    return (::uObject*)Android_android_text_Editable__append_IMPL_19828(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_text_Editable__append_1(Android_android_text_Editable* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_text_Editable__append_IMPL_19826(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_text_Editable__append_2(Android_android_text_Editable* __this, ::uObject* arg0, int arg1, int arg2)
{
    return (::uObject*)Android_android_text_Editable__append_IMPL_19827(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2);
}

::uObject* Android_android_text_Editable__append_IMPL_19826(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__append_19826_ID,"android/text/Editable","append","(Ljava/lang/CharSequence;)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.append could not be cached",71);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__append_19826_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_text_Editable__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_text_Editable__append_IMPL_19827(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__append_19827_ID,"android/text/Editable","append","(Ljava/lang/CharSequence;II)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.append could not be cached",71);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__append_19827_ID, _obArg2, ((jint)arg3_), ((jint)arg4_)),result,::app::Android::Fallbacks::Android_android_text_Editable__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_text_Editable__append_IMPL_19828(::uStatic* __this, bool arg0_, jobject arg1_, ::uChar arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__append_19828_ID,"android/text/Editable","append","(C)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.append could not be cached",71);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__append_19828_ID, ((jchar)arg2_)),result,::app::Android::Fallbacks::Android_android_text_Editable__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uChar Android_android_text_Editable__charAt(Android_android_text_Editable* __this, int arg0)
{
    return Android_android_text_Editable__charAt_IMPL_30511(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uChar Android_android_text_Editable__charAt_IMPL_30511(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__charAt_30511_ID,"android/text/Editable","charAt","(I)C",GetMethodID,"Id for fallback method android.text.Editable.charAt could not be cached",71);
    
    ::uChar result;
    result = ((::uChar)U_JNIVAR->CallCharMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__charAt_30511_ID, ((jint)arg2_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void Android_android_text_Editable__clear(Android_android_text_Editable* __this)
{
    Android_android_text_Editable__clear_IMPL_19829(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_text_Editable__clear_IMPL_19829(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__clear_19829_ID,"android/text/Editable","clear","()V",GetMethodID,"Id for fallback method android.text.Editable.clear could not be cached",70);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__clear_19829_ID);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_text_Editable__clearSpans(Android_android_text_Editable* __this)
{
    Android_android_text_Editable__clearSpans_IMPL_19830(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_text_Editable__clearSpans_IMPL_19830(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__clearSpans_19830_ID,"android/text/Editable","clearSpans","()V",GetMethodID,"Id for fallback method android.text.Editable.clearSpans could not be cached",75);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__clearSpans_19830_ID);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_text_Editable__getChars(Android_android_text_Editable* __this, int arg0, int arg1, ::app::Android::Runtime::CharArray* arg2, int arg3)
{
    Android_android_text_Editable__getChars_IMPL_19833(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2, arg3);
}

void Android_android_text_Editable__getChars_IMPL_19833(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__getChars_19833_ID,"android/text/Editable","getChars","(II[CI)V",GetMethodID,"Id for fallback method android.text.Editable.getChars could not be cached",73);
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__getChars_19833_ID, ((jint)arg2_), ((jint)arg3_), _obArg4, ((jint)arg5_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter* Android_android_text_Editable__getFilters(Android_android_text_Editable* __this)
{
    return ::uCast< ::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter*>(Android_android_text_Editable__getFilters_IMPL_19832(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter__typeof());
}

::uObject* Android_android_text_Editable__getFilters_IMPL_19832(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__getFilters_19832_ID,"android/text/Editable","getFilters","()[Landroid/text/InputFilter;",GetMethodID,"Id for fallback method android.text.Editable.getFilters could not be cached",75);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__getFilters_19832_ID),result,::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter__typeof(),::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Editable__getSpanEnd(Android_android_text_Editable* __this, ::app::Android::java::lang::Object* arg0)
{
    return Android_android_text_Editable__getSpanEnd_IMPL_20038(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

int Android_android_text_Editable__getSpanEnd_IMPL_20038(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__getSpanEnd_20038_ID,"android/text/Editable","getSpanEnd","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Editable.getSpanEnd could not be cached",75);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__getSpanEnd_20038_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Editable__getSpanFlags(Android_android_text_Editable* __this, ::app::Android::java::lang::Object* arg0)
{
    return Android_android_text_Editable__getSpanFlags_IMPL_20039(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

int Android_android_text_Editable__getSpanFlags_IMPL_20039(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__getSpanFlags_20039_ID,"android/text/Editable","getSpanFlags","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Editable.getSpanFlags could not be cached",77);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__getSpanFlags_20039_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::Runtime::ObjectArray__Android_java_lang_Object* Android_android_text_Editable__getSpans(Android_android_text_Editable* __this, int arg0, int arg1, ::app::Android::java::lang::Class* arg2)
{
    return ::uCast< ::app::Android::Runtime::ObjectArray__Android_java_lang_Object*>(Android_android_text_Editable__getSpans_IMPL_20036(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2), ::app::Android::Runtime::ObjectArray__Android_java_lang_Object__typeof());
}

::uObject* Android_android_text_Editable__getSpans_IMPL_20036(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__getSpans_20036_ID,"android/text/Editable","getSpans","(IILjava/lang/Class;)[Ljava/lang/Object;",GetMethodID,"Id for fallback method android.text.Editable.getSpans could not be cached",73);
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__getSpans_20036_ID, ((jint)arg2_), ((jint)arg3_), _obArg4),result,::app::Android::Runtime::ObjectArray__Android_java_lang_Object__typeof(),::app::Android::Runtime::ObjectArray__Android_java_lang_Object*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Editable__getSpanStart(Android_android_text_Editable* __this, ::app::Android::java::lang::Object* arg0)
{
    return Android_android_text_Editable__getSpanStart_IMPL_20037(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

int Android_android_text_Editable__getSpanStart_IMPL_20037(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__getSpanStart_20037_ID,"android/text/Editable","getSpanStart","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Editable.getSpanStart could not be cached",77);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__getSpanStart_20037_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_text_Editable__insert(Android_android_text_Editable* __this, int arg0, ::uObject* arg1, int arg2, int arg3)
{
    return (::uObject*)Android_android_text_Editable__insert_IMPL_19823(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1, arg2, arg3);
}

::uObject* Android_android_text_Editable__insert_1(Android_android_text_Editable* __this, int arg0, ::uObject* arg1)
{
    return (::uObject*)Android_android_text_Editable__insert_IMPL_19824(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

::uObject* Android_android_text_Editable__insert_IMPL_19823(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__insert_19823_ID,"android/text/Editable","insert","(ILjava/lang/CharSequence;II)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.insert could not be cached",71);
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__insert_19823_ID, ((jint)arg2_), _obArg3, ((jint)arg4_), ((jint)arg5_)),result,::app::Android::Fallbacks::Android_android_text_Editable__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_text_Editable__insert_IMPL_19824(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__insert_19824_ID,"android/text/Editable","insert","(ILjava/lang/CharSequence;)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.insert could not be cached",71);
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__insert_19824_ID, ((jint)arg2_), _obArg3),result,::app::Android::Fallbacks::Android_android_text_Editable__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_text_Editable__j_delete(Android_android_text_Editable* __this, int arg0, int arg1)
{
    return (::uObject*)Android_android_text_Editable__j_delete_IMPL_19825(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

::uObject* Android_android_text_Editable__j_delete_IMPL_19825(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__j_delete_19825_ID,"android/text/Editable","delete","(II)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.delete could not be cached",71);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__j_delete_19825_ID, ((jint)arg2_), ((jint)arg3_)),result,::app::Android::Fallbacks::Android_android_text_Editable__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Editable__length(Android_android_text_Editable* __this)
{
    return Android_android_text_Editable__length_IMPL_30510(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_text_Editable__length_IMPL_30510(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__length_30510_ID,"android/text/Editable","length","()I",GetMethodID,"Id for fallback method android.text.Editable.length could not be cached",71);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__length_30510_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Editable__nextSpanTransition(Android_android_text_Editable* __this, int arg0, int arg1, ::app::Android::java::lang::Class* arg2)
{
    return Android_android_text_Editable__nextSpanTransition_IMPL_20040(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2);
}

int Android_android_text_Editable__nextSpanTransition_IMPL_20040(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__nextSpanTransition_20040_ID,"android/text/Editable","nextSpanTransition","(IILjava/lang/Class;)I",GetMethodID,"Id for fallback method android.text.Editable.nextSpanTransition could not be cached",83);
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__nextSpanTransition_20040_ID, ((jint)arg2_), ((jint)arg3_), _obArg4));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void Android_android_text_Editable__removeSpan(Android_android_text_Editable* __this, ::app::Android::java::lang::Object* arg0)
{
    Android_android_text_Editable__removeSpan_IMPL_19987(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_text_Editable__removeSpan_IMPL_19987(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__removeSpan_19987_ID,"android/text/Editable","removeSpan","(Ljava/lang/Object;)V",GetMethodID,"Id for fallback method android.text.Editable.removeSpan could not be cached",75);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__removeSpan_19987_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

::uObject* Android_android_text_Editable__replace(Android_android_text_Editable* __this, int arg0, int arg1, ::uObject* arg2, int arg3, int arg4)
{
    return (::uObject*)Android_android_text_Editable__replace_IMPL_19821(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2, arg3, arg4);
}

::uObject* Android_android_text_Editable__replace_1(Android_android_text_Editable* __this, int arg0, int arg1, ::uObject* arg2)
{
    return (::uObject*)Android_android_text_Editable__replace_IMPL_19822(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2);
}

::uObject* Android_android_text_Editable__replace_IMPL_19821(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_, int arg5_, int arg6_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__replace_19821_ID,"android/text/Editable","replace","(IILjava/lang/CharSequence;II)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.replace could not be cached",72);
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__replace_19821_ID, ((jint)arg2_), ((jint)arg3_), _obArg4, ((jint)arg5_), ((jint)arg6_)),result,::app::Android::Fallbacks::Android_android_text_Editable__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_text_Editable__replace_IMPL_19822(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__replace_19822_ID,"android/text/Editable","replace","(IILjava/lang/CharSequence;)Landroid/text/Editable;",GetMethodID,"Id for fallback method android.text.Editable.replace could not be cached",72);
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__replace_19822_ID, ((jint)arg2_), ((jint)arg3_), _obArg4),result,::app::Android::Fallbacks::Android_android_text_Editable__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void Android_android_text_Editable__setFilters(Android_android_text_Editable* __this, ::app::Android::Runtime::ObjectArray__Android_android_text_InputFilter* arg0)
{
    Android_android_text_Editable__setFilters_IMPL_19831(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_text_Editable__setFilters_IMPL_19831(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__setFilters_19831_ID,"android/text/Editable","setFilters","([Landroid/text/InputFilter;)V",GetMethodID,"Id for fallback method android.text.Editable.setFilters could not be cached",75);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__setFilters_19831_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_text_Editable__setSpan(Android_android_text_Editable* __this, ::app::Android::java::lang::Object* arg0, int arg1, int arg2, int arg3)
{
    Android_android_text_Editable__setSpan_IMPL_19986(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2, arg3);
}

void Android_android_text_Editable__setSpan_IMPL_19986(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__setSpan_19986_ID,"android/text/Editable","setSpan","(Ljava/lang/Object;III)V",GetMethodID,"Id for fallback method android.text.Editable.setSpan could not be cached",72);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__setSpan_19986_ID, _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

::uObject* Android_android_text_Editable__subSequence(Android_android_text_Editable* __this, int arg0, int arg1)
{
    return (::uObject*)Android_android_text_Editable__subSequence_IMPL_30512(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

::uObject* Android_android_text_Editable__subSequence_IMPL_30512(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__subSequence_30512_ID,"android/text/Editable","subSequence","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.text.Editable.subSequence could not be cached",76);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__subSequence_30512_ID, ((jint)arg2_), ((jint)arg3_)),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Android_android_text_Editable__toString(Android_android_text_Editable* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_text_Editable__toString_IMPL_30513(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_android_text_Editable__toString_IMPL_30513(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Editable__toString_30513_ID,"android/text/Editable","toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.text.Editable.toString could not be cached",73);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Editable__toString_30513_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_text_GetChars__charAt_30511_ID;
jmethodID Android_android_text_GetChars__getChars_19833_ID;
jmethodID Android_android_text_GetChars__length_30510_ID;
jmethodID Android_android_text_GetChars__subSequence_30512_ID;
jmethodID Android_android_text_GetChars__toString_30513_ID;

Android_android_text_GetChars__uType* Android_android_text_GetChars__typeof()
{
    static ::uStaticStrong<Android_android_text_GetChars__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_text_GetChars__uType*)::uAllocClassType(sizeof(Android_android_text_GetChars__uType), "Android.Fallbacks.Android_android_text_GetChars", false, 4, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Android_android_text_GetChars__toString;
    type->__interface_2.__fp_getChars = (void(*)(void*, int, int, ::app::Android::Runtime::CharArray*, int))Android_android_text_GetChars__getChars;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;
    type->__interface_3.__fp_length = (int(*)(void*))Android_android_text_GetChars__length;
    type->__interface_3.__fp_charAt = (::uChar(*)(void*, int))Android_android_text_GetChars__charAt;
    type->__interface_3.__fp_subSequence = (::uObject*(*)(void*, int, int))Android_android_text_GetChars__subSequence;
    type->__interface_3.__fp_toString = (::app::Android::java::lang::String*(*)(void*))Android_android_text_GetChars__toString;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_text_GetChars__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_text_GetChars__uType, __interface_1),
        ::app::Android::android::text::GetChars__typeof(), offsetof(Android_android_text_GetChars__uType, __interface_2),
        ::app::Android::java::lang::CharSequence__typeof(), offsetof(Android_android_text_GetChars__uType, __interface_3));

    return type;
}

::uChar Android_android_text_GetChars__charAt(Android_android_text_GetChars* __this, int arg0)
{
    return Android_android_text_GetChars__charAt_IMPL_30511(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uChar Android_android_text_GetChars__charAt_IMPL_30511(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_GetChars__charAt_30511_ID,"android/text/GetChars","charAt","(I)C",GetMethodID,"Id for fallback method android.text.GetChars.charAt could not be cached",71);
    
    ::uChar result;
    result = ((::uChar)U_JNIVAR->CallCharMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_GetChars__charAt_30511_ID, ((jint)arg2_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void Android_android_text_GetChars__getChars(Android_android_text_GetChars* __this, int arg0, int arg1, ::app::Android::Runtime::CharArray* arg2, int arg3)
{
    Android_android_text_GetChars__getChars_IMPL_19833(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2, arg3);
}

void Android_android_text_GetChars__getChars_IMPL_19833(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_GetChars__getChars_19833_ID,"android/text/GetChars","getChars","(II[CI)V",GetMethodID,"Id for fallback method android.text.GetChars.getChars could not be cached",73);
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_GetChars__getChars_19833_ID, ((jint)arg2_), ((jint)arg3_), _obArg4, ((jint)arg5_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

int Android_android_text_GetChars__length(Android_android_text_GetChars* __this)
{
    return Android_android_text_GetChars__length_IMPL_30510(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_text_GetChars__length_IMPL_30510(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_GetChars__length_30510_ID,"android/text/GetChars","length","()I",GetMethodID,"Id for fallback method android.text.GetChars.length could not be cached",71);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_GetChars__length_30510_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_text_GetChars__subSequence(Android_android_text_GetChars* __this, int arg0, int arg1)
{
    return (::uObject*)Android_android_text_GetChars__subSequence_IMPL_30512(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

::uObject* Android_android_text_GetChars__subSequence_IMPL_30512(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_GetChars__subSequence_30512_ID,"android/text/GetChars","subSequence","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.text.GetChars.subSequence could not be cached",76);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_GetChars__subSequence_30512_ID, ((jint)arg2_), ((jint)arg3_)),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Android_android_text_GetChars__toString(Android_android_text_GetChars* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_text_GetChars__toString_IMPL_30513(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_android_text_GetChars__toString_IMPL_30513(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_GetChars__toString_30513_ID,"android/text/GetChars","toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.text.GetChars.toString could not be cached",73);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_GetChars__toString_30513_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_text_InputFilter__filter_19845_ID;

Android_android_text_InputFilter__uType* Android_android_text_InputFilter__typeof()
{
    static ::uStaticStrong<Android_android_text_InputFilter__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_text_InputFilter__uType*)::uAllocClassType(sizeof(Android_android_text_InputFilter__uType), "Android.Fallbacks.Android_android_text_InputFilter", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_filter = (::uObject*(*)(void*, ::uObject*, int, int, ::uObject*, int, int))Android_android_text_InputFilter__filter;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_text_InputFilter__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_text_InputFilter__uType, __interface_1),
        ::app::Android::android::text::InputFilter__typeof(), offsetof(Android_android_text_InputFilter__uType, __interface_2));

    return type;
}

::uObject* Android_android_text_InputFilter__filter(Android_android_text_InputFilter* __this, ::uObject* arg0, int arg1, int arg2, ::uObject* arg3, int arg4, int arg5)
{
    return (::uObject*)Android_android_text_InputFilter__filter_IMPL_19845(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2, (::uObject*)arg3, arg4, arg5);
}

::uObject* Android_android_text_InputFilter__filter_IMPL_19845(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, ::uObject* arg5_, int arg6_, int arg7_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_InputFilter__filter_19845_ID,"android/text/InputFilter","filter","(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.text.InputFilter.filter could not be cached",74);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_InputFilter__filter_19845_ID, _obArg2, ((jint)arg3_), ((jint)arg4_), _obArg5, ((jint)arg6_), ((jint)arg7_)),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_text_Layout__uType* Android_android_text_Layout__typeof()
{
    static ::uStaticStrong<Android_android_text_Layout__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_text_Layout__uType*)::uAllocClassType(sizeof(Android_android_text_Layout__uType), "Android.Fallbacks.Android_android_text_Layout", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::text::Layout__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_text_Layout__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_text_Layout__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_text_Spannable__charAt_30511_ID;
jmethodID Android_android_text_Spannable__getSpanEnd_20038_ID;
jmethodID Android_android_text_Spannable__getSpanFlags_20039_ID;
jmethodID Android_android_text_Spannable__getSpans_20036_ID;
jmethodID Android_android_text_Spannable__getSpanStart_20037_ID;
jmethodID Android_android_text_Spannable__length_30510_ID;
jmethodID Android_android_text_Spannable__nextSpanTransition_20040_ID;
jmethodID Android_android_text_Spannable__removeSpan_19987_ID;
jmethodID Android_android_text_Spannable__setSpan_19986_ID;
jmethodID Android_android_text_Spannable__subSequence_30512_ID;
jmethodID Android_android_text_Spannable__toString_30513_ID;

Android_android_text_Spannable__uType* Android_android_text_Spannable__typeof()
{
    static ::uStaticStrong<Android_android_text_Spannable__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_text_Spannable__uType*)::uAllocClassType(sizeof(Android_android_text_Spannable__uType), "Android.Fallbacks.Android_android_text_Spannable", false, 5, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Android_android_text_Spannable__toString;
    type->__interface_2.__fp_setSpan = (void(*)(void*, ::app::Android::java::lang::Object*, int, int, int))Android_android_text_Spannable__setSpan;
    type->__interface_2.__fp_removeSpan = (void(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Spannable__removeSpan;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;
    type->__interface_3.__fp_getSpans = (::app::Android::Runtime::ObjectArray__Android_java_lang_Object*(*)(void*, int, int, ::app::Android::java::lang::Class*))Android_android_text_Spannable__getSpans;
    type->__interface_3.__fp_getSpanStart = (int(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Spannable__getSpanStart;
    type->__interface_3.__fp_getSpanEnd = (int(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Spannable__getSpanEnd;
    type->__interface_3.__fp_getSpanFlags = (int(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Spannable__getSpanFlags;
    type->__interface_3.__fp_nextSpanTransition = (int(*)(void*, int, int, ::app::Android::java::lang::Class*))Android_android_text_Spannable__nextSpanTransition;
    type->__interface_4.__fp_length = (int(*)(void*))Android_android_text_Spannable__length;
    type->__interface_4.__fp_charAt = (::uChar(*)(void*, int))Android_android_text_Spannable__charAt;
    type->__interface_4.__fp_subSequence = (::uObject*(*)(void*, int, int))Android_android_text_Spannable__subSequence;
    type->__interface_4.__fp_toString = (::app::Android::java::lang::String*(*)(void*))Android_android_text_Spannable__toString;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_text_Spannable__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_text_Spannable__uType, __interface_1),
        ::app::Android::android::text::Spannable__typeof(), offsetof(Android_android_text_Spannable__uType, __interface_2),
        ::app::Android::android::text::Spanned__typeof(), offsetof(Android_android_text_Spannable__uType, __interface_3),
        ::app::Android::java::lang::CharSequence__typeof(), offsetof(Android_android_text_Spannable__uType, __interface_4));

    return type;
}

::uChar Android_android_text_Spannable__charAt(Android_android_text_Spannable* __this, int arg0)
{
    return Android_android_text_Spannable__charAt_IMPL_30511(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uChar Android_android_text_Spannable__charAt_IMPL_30511(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__charAt_30511_ID,"android/text/Spannable","charAt","(I)C",GetMethodID,"Id for fallback method android.text.Spannable.charAt could not be cached",72);
    
    ::uChar result;
    result = ((::uChar)U_JNIVAR->CallCharMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__charAt_30511_ID, ((jint)arg2_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Spannable__getSpanEnd(Android_android_text_Spannable* __this, ::app::Android::java::lang::Object* arg0)
{
    return Android_android_text_Spannable__getSpanEnd_IMPL_20038(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

int Android_android_text_Spannable__getSpanEnd_IMPL_20038(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__getSpanEnd_20038_ID,"android/text/Spannable","getSpanEnd","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Spannable.getSpanEnd could not be cached",76);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__getSpanEnd_20038_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Spannable__getSpanFlags(Android_android_text_Spannable* __this, ::app::Android::java::lang::Object* arg0)
{
    return Android_android_text_Spannable__getSpanFlags_IMPL_20039(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

int Android_android_text_Spannable__getSpanFlags_IMPL_20039(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__getSpanFlags_20039_ID,"android/text/Spannable","getSpanFlags","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Spannable.getSpanFlags could not be cached",78);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__getSpanFlags_20039_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::Runtime::ObjectArray__Android_java_lang_Object* Android_android_text_Spannable__getSpans(Android_android_text_Spannable* __this, int arg0, int arg1, ::app::Android::java::lang::Class* arg2)
{
    return ::uCast< ::app::Android::Runtime::ObjectArray__Android_java_lang_Object*>(Android_android_text_Spannable__getSpans_IMPL_20036(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2), ::app::Android::Runtime::ObjectArray__Android_java_lang_Object__typeof());
}

::uObject* Android_android_text_Spannable__getSpans_IMPL_20036(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__getSpans_20036_ID,"android/text/Spannable","getSpans","(IILjava/lang/Class;)[Ljava/lang/Object;",GetMethodID,"Id for fallback method android.text.Spannable.getSpans could not be cached",74);
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__getSpans_20036_ID, ((jint)arg2_), ((jint)arg3_), _obArg4),result,::app::Android::Runtime::ObjectArray__Android_java_lang_Object__typeof(),::app::Android::Runtime::ObjectArray__Android_java_lang_Object*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Spannable__getSpanStart(Android_android_text_Spannable* __this, ::app::Android::java::lang::Object* arg0)
{
    return Android_android_text_Spannable__getSpanStart_IMPL_20037(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

int Android_android_text_Spannable__getSpanStart_IMPL_20037(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__getSpanStart_20037_ID,"android/text/Spannable","getSpanStart","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Spannable.getSpanStart could not be cached",78);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__getSpanStart_20037_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Spannable__length(Android_android_text_Spannable* __this)
{
    return Android_android_text_Spannable__length_IMPL_30510(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_text_Spannable__length_IMPL_30510(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__length_30510_ID,"android/text/Spannable","length","()I",GetMethodID,"Id for fallback method android.text.Spannable.length could not be cached",72);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__length_30510_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Spannable__nextSpanTransition(Android_android_text_Spannable* __this, int arg0, int arg1, ::app::Android::java::lang::Class* arg2)
{
    return Android_android_text_Spannable__nextSpanTransition_IMPL_20040(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2);
}

int Android_android_text_Spannable__nextSpanTransition_IMPL_20040(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__nextSpanTransition_20040_ID,"android/text/Spannable","nextSpanTransition","(IILjava/lang/Class;)I",GetMethodID,"Id for fallback method android.text.Spannable.nextSpanTransition could not be cached",84);
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__nextSpanTransition_20040_ID, ((jint)arg2_), ((jint)arg3_), _obArg4));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void Android_android_text_Spannable__removeSpan(Android_android_text_Spannable* __this, ::app::Android::java::lang::Object* arg0)
{
    Android_android_text_Spannable__removeSpan_IMPL_19987(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_text_Spannable__removeSpan_IMPL_19987(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__removeSpan_19987_ID,"android/text/Spannable","removeSpan","(Ljava/lang/Object;)V",GetMethodID,"Id for fallback method android.text.Spannable.removeSpan could not be cached",76);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__removeSpan_19987_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_text_Spannable__setSpan(Android_android_text_Spannable* __this, ::app::Android::java::lang::Object* arg0, int arg1, int arg2, int arg3)
{
    Android_android_text_Spannable__setSpan_IMPL_19986(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2, arg3);
}

void Android_android_text_Spannable__setSpan_IMPL_19986(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__setSpan_19986_ID,"android/text/Spannable","setSpan","(Ljava/lang/Object;III)V",GetMethodID,"Id for fallback method android.text.Spannable.setSpan could not be cached",73);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__setSpan_19986_ID, _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

::uObject* Android_android_text_Spannable__subSequence(Android_android_text_Spannable* __this, int arg0, int arg1)
{
    return (::uObject*)Android_android_text_Spannable__subSequence_IMPL_30512(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

::uObject* Android_android_text_Spannable__subSequence_IMPL_30512(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__subSequence_30512_ID,"android/text/Spannable","subSequence","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.text.Spannable.subSequence could not be cached",77);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__subSequence_30512_ID, ((jint)arg2_), ((jint)arg3_)),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Android_android_text_Spannable__toString(Android_android_text_Spannable* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_text_Spannable__toString_IMPL_30513(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_android_text_Spannable__toString_IMPL_30513(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spannable__toString_30513_ID,"android/text/Spannable","toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.text.Spannable.toString could not be cached",74);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spannable__toString_30513_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_text_Spanned__charAt_30511_ID;
jmethodID Android_android_text_Spanned__getSpanEnd_20038_ID;
jmethodID Android_android_text_Spanned__getSpanFlags_20039_ID;
jmethodID Android_android_text_Spanned__getSpans_20036_ID;
jmethodID Android_android_text_Spanned__getSpanStart_20037_ID;
jmethodID Android_android_text_Spanned__length_30510_ID;
jmethodID Android_android_text_Spanned__nextSpanTransition_20040_ID;
jmethodID Android_android_text_Spanned__subSequence_30512_ID;
jmethodID Android_android_text_Spanned__toString_30513_ID;

Android_android_text_Spanned__uType* Android_android_text_Spanned__typeof()
{
    static ::uStaticStrong<Android_android_text_Spanned__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_text_Spanned__uType*)::uAllocClassType(sizeof(Android_android_text_Spanned__uType), "Android.Fallbacks.Android_android_text_Spanned", false, 4, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Android_android_text_Spanned__toString;
    type->__interface_2.__fp_getSpans = (::app::Android::Runtime::ObjectArray__Android_java_lang_Object*(*)(void*, int, int, ::app::Android::java::lang::Class*))Android_android_text_Spanned__getSpans;
    type->__interface_2.__fp_getSpanStart = (int(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Spanned__getSpanStart;
    type->__interface_2.__fp_getSpanEnd = (int(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Spanned__getSpanEnd;
    type->__interface_2.__fp_getSpanFlags = (int(*)(void*, ::app::Android::java::lang::Object*))Android_android_text_Spanned__getSpanFlags;
    type->__interface_2.__fp_nextSpanTransition = (int(*)(void*, int, int, ::app::Android::java::lang::Class*))Android_android_text_Spanned__nextSpanTransition;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;
    type->__interface_3.__fp_length = (int(*)(void*))Android_android_text_Spanned__length;
    type->__interface_3.__fp_charAt = (::uChar(*)(void*, int))Android_android_text_Spanned__charAt;
    type->__interface_3.__fp_subSequence = (::uObject*(*)(void*, int, int))Android_android_text_Spanned__subSequence;
    type->__interface_3.__fp_toString = (::app::Android::java::lang::String*(*)(void*))Android_android_text_Spanned__toString;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_text_Spanned__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_text_Spanned__uType, __interface_1),
        ::app::Android::android::text::Spanned__typeof(), offsetof(Android_android_text_Spanned__uType, __interface_2),
        ::app::Android::java::lang::CharSequence__typeof(), offsetof(Android_android_text_Spanned__uType, __interface_3));

    return type;
}

::uChar Android_android_text_Spanned__charAt(Android_android_text_Spanned* __this, int arg0)
{
    return Android_android_text_Spanned__charAt_IMPL_30511(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uChar Android_android_text_Spanned__charAt_IMPL_30511(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spanned__charAt_30511_ID,"android/text/Spanned","charAt","(I)C",GetMethodID,"Id for fallback method android.text.Spanned.charAt could not be cached",70);
    
    ::uChar result;
    result = ((::uChar)U_JNIVAR->CallCharMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spanned__charAt_30511_ID, ((jint)arg2_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Spanned__getSpanEnd(Android_android_text_Spanned* __this, ::app::Android::java::lang::Object* arg0)
{
    return Android_android_text_Spanned__getSpanEnd_IMPL_20038(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

int Android_android_text_Spanned__getSpanEnd_IMPL_20038(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spanned__getSpanEnd_20038_ID,"android/text/Spanned","getSpanEnd","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Spanned.getSpanEnd could not be cached",74);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spanned__getSpanEnd_20038_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Spanned__getSpanFlags(Android_android_text_Spanned* __this, ::app::Android::java::lang::Object* arg0)
{
    return Android_android_text_Spanned__getSpanFlags_IMPL_20039(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

int Android_android_text_Spanned__getSpanFlags_IMPL_20039(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spanned__getSpanFlags_20039_ID,"android/text/Spanned","getSpanFlags","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Spanned.getSpanFlags could not be cached",76);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spanned__getSpanFlags_20039_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::Runtime::ObjectArray__Android_java_lang_Object* Android_android_text_Spanned__getSpans(Android_android_text_Spanned* __this, int arg0, int arg1, ::app::Android::java::lang::Class* arg2)
{
    return ::uCast< ::app::Android::Runtime::ObjectArray__Android_java_lang_Object*>(Android_android_text_Spanned__getSpans_IMPL_20036(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2), ::app::Android::Runtime::ObjectArray__Android_java_lang_Object__typeof());
}

::uObject* Android_android_text_Spanned__getSpans_IMPL_20036(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spanned__getSpans_20036_ID,"android/text/Spanned","getSpans","(IILjava/lang/Class;)[Ljava/lang/Object;",GetMethodID,"Id for fallback method android.text.Spanned.getSpans could not be cached",72);
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spanned__getSpans_20036_ID, ((jint)arg2_), ((jint)arg3_), _obArg4),result,::app::Android::Runtime::ObjectArray__Android_java_lang_Object__typeof(),::app::Android::Runtime::ObjectArray__Android_java_lang_Object*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Spanned__getSpanStart(Android_android_text_Spanned* __this, ::app::Android::java::lang::Object* arg0)
{
    return Android_android_text_Spanned__getSpanStart_IMPL_20037(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

int Android_android_text_Spanned__getSpanStart_IMPL_20037(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spanned__getSpanStart_20037_ID,"android/text/Spanned","getSpanStart","(Ljava/lang/Object;)I",GetMethodID,"Id for fallback method android.text.Spanned.getSpanStart could not be cached",76);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spanned__getSpanStart_20037_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Spanned__length(Android_android_text_Spanned* __this)
{
    return Android_android_text_Spanned__length_IMPL_30510(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_text_Spanned__length_IMPL_30510(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spanned__length_30510_ID,"android/text/Spanned","length","()I",GetMethodID,"Id for fallback method android.text.Spanned.length could not be cached",70);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spanned__length_30510_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_text_Spanned__nextSpanTransition(Android_android_text_Spanned* __this, int arg0, int arg1, ::app::Android::java::lang::Class* arg2)
{
    return Android_android_text_Spanned__nextSpanTransition_IMPL_20040(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, (::uObject*)arg2);
}

int Android_android_text_Spanned__nextSpanTransition_IMPL_20040(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spanned__nextSpanTransition_20040_ID,"android/text/Spanned","nextSpanTransition","(IILjava/lang/Class;)I",GetMethodID,"Id for fallback method android.text.Spanned.nextSpanTransition could not be cached",82);
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spanned__nextSpanTransition_20040_ID, ((jint)arg2_), ((jint)arg3_), _obArg4));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_text_Spanned__subSequence(Android_android_text_Spanned* __this, int arg0, int arg1)
{
    return (::uObject*)Android_android_text_Spanned__subSequence_IMPL_30512(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

::uObject* Android_android_text_Spanned__subSequence_IMPL_30512(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spanned__subSequence_30512_ID,"android/text/Spanned","subSequence","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.text.Spanned.subSequence could not be cached",75);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spanned__subSequence_30512_ID, ((jint)arg2_), ((jint)arg3_)),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Android_android_text_Spanned__toString(Android_android_text_Spanned* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_text_Spanned__toString_IMPL_30513(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_android_text_Spanned__toString_IMPL_30513(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_Spanned__toString_30513_ID,"android/text/Spanned","toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.text.Spanned.toString could not be cached",72);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_Spanned__toString_30513_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_text_TextWatcher__afterTextChanged_20153_ID;
jmethodID Android_android_text_TextWatcher__beforeTextChanged_20151_ID;
jmethodID Android_android_text_TextWatcher__onTextChanged_20152_ID;

Android_android_text_TextWatcher__uType* Android_android_text_TextWatcher__typeof()
{
    static ::uStaticStrong<Android_android_text_TextWatcher__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_text_TextWatcher__uType*)::uAllocClassType(sizeof(Android_android_text_TextWatcher__uType), "Android.Fallbacks.Android_android_text_TextWatcher", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_beforeTextChanged = (void(*)(void*, ::uObject*, int, int, int))Android_android_text_TextWatcher__beforeTextChanged;
    type->__interface_2.__fp_onTextChanged = (void(*)(void*, ::uObject*, int, int, int))Android_android_text_TextWatcher__onTextChanged;
    type->__interface_2.__fp_afterTextChanged = (void(*)(void*, ::uObject*))Android_android_text_TextWatcher__afterTextChanged;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_text_TextWatcher__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_text_TextWatcher__uType, __interface_1),
        ::app::Android::android::text::TextWatcher__typeof(), offsetof(Android_android_text_TextWatcher__uType, __interface_2));

    return type;
}

void Android_android_text_TextWatcher__afterTextChanged(Android_android_text_TextWatcher* __this, ::uObject* arg0)
{
    Android_android_text_TextWatcher__afterTextChanged_IMPL_20153(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_text_TextWatcher__afterTextChanged_IMPL_20153(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_TextWatcher__afterTextChanged_20153_ID,"android/text/TextWatcher","afterTextChanged","(Landroid/text/Editable;)V",GetMethodID,"Id for fallback method android.text.TextWatcher.afterTextChanged could not be cached",84);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_TextWatcher__afterTextChanged_20153_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_text_TextWatcher__beforeTextChanged(Android_android_text_TextWatcher* __this, ::uObject* arg0, int arg1, int arg2, int arg3)
{
    Android_android_text_TextWatcher__beforeTextChanged_IMPL_20151(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2, arg3);
}

void Android_android_text_TextWatcher__beforeTextChanged_IMPL_20151(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_TextWatcher__beforeTextChanged_20151_ID,"android/text/TextWatcher","beforeTextChanged","(Ljava/lang/CharSequence;III)V",GetMethodID,"Id for fallback method android.text.TextWatcher.beforeTextChanged could not be cached",85);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_TextWatcher__beforeTextChanged_20151_ID, _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_text_TextWatcher__onTextChanged(Android_android_text_TextWatcher* __this, ::uObject* arg0, int arg1, int arg2, int arg3)
{
    Android_android_text_TextWatcher__onTextChanged_IMPL_20152(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2, arg3);
}

void Android_android_text_TextWatcher__onTextChanged_IMPL_20152(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_text_TextWatcher__onTextChanged_20152_ID,"android/text/TextWatcher","onTextChanged","(Ljava/lang/CharSequence;III)V",GetMethodID,"Id for fallback method android.text.TextWatcher.onTextChanged could not be cached",81);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_text_TextWatcher__onTextChanged_20152_ID, _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_util_AttributeSet__getAttributeBooleanValue_20306_ID;
jmethodID Android_android_util_AttributeSet__getAttributeBooleanValue_20312_ID;
jmethodID Android_android_util_AttributeSet__getAttributeCount_20299_ID;
jmethodID Android_android_util_AttributeSet__getAttributeFloatValue_20310_ID;
jmethodID Android_android_util_AttributeSet__getAttributeFloatValue_20316_ID;
jmethodID Android_android_util_AttributeSet__getAttributeIntValue_20308_ID;
jmethodID Android_android_util_AttributeSet__getAttributeIntValue_20314_ID;
jmethodID Android_android_util_AttributeSet__getAttributeListValue_20305_ID;
jmethodID Android_android_util_AttributeSet__getAttributeListValue_20311_ID;
jmethodID Android_android_util_AttributeSet__getAttributeName_20300_ID;
jmethodID Android_android_util_AttributeSet__getAttributeNameResource_20304_ID;
jmethodID Android_android_util_AttributeSet__getAttributeResourceValue_20307_ID;
jmethodID Android_android_util_AttributeSet__getAttributeResourceValue_20313_ID;
jmethodID Android_android_util_AttributeSet__getAttributeUnsignedIntValue_20309_ID;
jmethodID Android_android_util_AttributeSet__getAttributeUnsignedIntValue_20315_ID;
jmethodID Android_android_util_AttributeSet__getAttributeValue_20301_ID;
jmethodID Android_android_util_AttributeSet__getAttributeValue_20302_ID;
jmethodID Android_android_util_AttributeSet__getClassAttribute_20318_ID;
jmethodID Android_android_util_AttributeSet__getIdAttribute_20317_ID;
jmethodID Android_android_util_AttributeSet__getIdAttributeResourceValue_20319_ID;
jmethodID Android_android_util_AttributeSet__getPositionDescription_20303_ID;
jmethodID Android_android_util_AttributeSet__getStyleAttribute_20320_ID;

Android_android_util_AttributeSet__uType* Android_android_util_AttributeSet__typeof()
{
    static ::uStaticStrong<Android_android_util_AttributeSet__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_util_AttributeSet__uType*)::uAllocClassType(sizeof(Android_android_util_AttributeSet__uType), "Android.Fallbacks.Android_android_util_AttributeSet", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_getAttributeCount = (int(*)(void*))Android_android_util_AttributeSet__getAttributeCount;
    type->__interface_2.__fp_getAttributeName = (::app::Android::java::lang::String*(*)(void*, int))Android_android_util_AttributeSet__getAttributeName;
    type->__interface_2.__fp_getAttributeValue = (::app::Android::java::lang::String*(*)(void*, int))Android_android_util_AttributeSet__getAttributeValue_1;
    type->__interface_2.__fp_getAttributeValue_1 = (::app::Android::java::lang::String*(*)(void*, ::app::Android::java::lang::String*, ::app::Android::java::lang::String*))Android_android_util_AttributeSet__getAttributeValue;
    type->__interface_2.__fp_getPositionDescription = (::app::Android::java::lang::String*(*)(void*))Android_android_util_AttributeSet__getPositionDescription;
    type->__interface_2.__fp_getAttributeNameResource = (int(*)(void*, int))Android_android_util_AttributeSet__getAttributeNameResource;
    type->__interface_2.__fp_getAttributeListValue_1 = (int(*)(void*, ::app::Android::java::lang::String*, ::app::Android::java::lang::String*, ::app::Android::Runtime::ObjectArray__Android_java_lang_String*, int))Android_android_util_AttributeSet__getAttributeListValue;
    type->__interface_2.__fp_getAttributeBooleanValue_1 = (bool(*)(void*, ::app::Android::java::lang::String*, ::app::Android::java::lang::String*, bool))Android_android_util_AttributeSet__getAttributeBooleanValue;
    type->__interface_2.__fp_getAttributeResourceValue_1 = (int(*)(void*, ::app::Android::java::lang::String*, ::app::Android::java::lang::String*, int))Android_android_util_AttributeSet__getAttributeResourceValue;
    type->__interface_2.__fp_getAttributeIntValue_1 = (int(*)(void*, ::app::Android::java::lang::String*, ::app::Android::java::lang::String*, int))Android_android_util_AttributeSet__getAttributeIntValue;
    type->__interface_2.__fp_getAttributeUnsignedIntValue_1 = (int(*)(void*, ::app::Android::java::lang::String*, ::app::Android::java::lang::String*, int))Android_android_util_AttributeSet__getAttributeUnsignedIntValue;
    type->__interface_2.__fp_getAttributeFloatValue_1 = (float(*)(void*, ::app::Android::java::lang::String*, ::app::Android::java::lang::String*, float))Android_android_util_AttributeSet__getAttributeFloatValue;
    type->__interface_2.__fp_getAttributeListValue = (int(*)(void*, int, ::app::Android::Runtime::ObjectArray__Android_java_lang_String*, int))Android_android_util_AttributeSet__getAttributeListValue_1;
    type->__interface_2.__fp_getAttributeBooleanValue = (bool(*)(void*, int, bool))Android_android_util_AttributeSet__getAttributeBooleanValue_1;
    type->__interface_2.__fp_getAttributeResourceValue = (int(*)(void*, int, int))Android_android_util_AttributeSet__getAttributeResourceValue_1;
    type->__interface_2.__fp_getAttributeIntValue = (int(*)(void*, int, int))Android_android_util_AttributeSet__getAttributeIntValue_1;
    type->__interface_2.__fp_getAttributeUnsignedIntValue = (int(*)(void*, int, int))Android_android_util_AttributeSet__getAttributeUnsignedIntValue_1;
    type->__interface_2.__fp_getAttributeFloatValue = (float(*)(void*, int, float))Android_android_util_AttributeSet__getAttributeFloatValue_1;
    type->__interface_2.__fp_getIdAttribute = (::app::Android::java::lang::String*(*)(void*))Android_android_util_AttributeSet__getIdAttribute;
    type->__interface_2.__fp_getClassAttribute = (::app::Android::java::lang::String*(*)(void*))Android_android_util_AttributeSet__getClassAttribute;
    type->__interface_2.__fp_getIdAttributeResourceValue = (int(*)(void*, int))Android_android_util_AttributeSet__getIdAttributeResourceValue;
    type->__interface_2.__fp_getStyleAttribute = (int(*)(void*))Android_android_util_AttributeSet__getStyleAttribute;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_util_AttributeSet__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_util_AttributeSet__uType, __interface_1),
        ::app::Android::android::util::AttributeSet__typeof(), offsetof(Android_android_util_AttributeSet__uType, __interface_2));

    return type;
}

bool Android_android_util_AttributeSet__getAttributeBooleanValue(Android_android_util_AttributeSet* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, bool arg2)
{
    return Android_android_util_AttributeSet__getAttributeBooleanValue_IMPL_20306(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, arg2);
}

bool Android_android_util_AttributeSet__getAttributeBooleanValue_1(Android_android_util_AttributeSet* __this, int arg0, bool arg1)
{
    return Android_android_util_AttributeSet__getAttributeBooleanValue_IMPL_20312(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

bool Android_android_util_AttributeSet__getAttributeBooleanValue_IMPL_20306(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, bool arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeBooleanValue_20306_ID,"android/util/AttributeSet","getAttributeBooleanValue","(Ljava/lang/String;Ljava/lang/String;Z)Z",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeBooleanValue could not be cached",93);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeBooleanValue_20306_ID, _obArg2, _obArg3, ((jboolean)arg4_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Android_android_util_AttributeSet__getAttributeBooleanValue_IMPL_20312(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeBooleanValue_20312_ID,"android/util/AttributeSet","getAttributeBooleanValue","(IZ)Z",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeBooleanValue could not be cached",93);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeBooleanValue_20312_ID, ((jint)arg2_), ((jboolean)arg3_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getAttributeCount(Android_android_util_AttributeSet* __this)
{
    return Android_android_util_AttributeSet__getAttributeCount_IMPL_20299(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_util_AttributeSet__getAttributeCount_IMPL_20299(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeCount_20299_ID,"android/util/AttributeSet","getAttributeCount","()I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeCount could not be cached",86);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeCount_20299_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

float Android_android_util_AttributeSet__getAttributeFloatValue(Android_android_util_AttributeSet* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, float arg2)
{
    return Android_android_util_AttributeSet__getAttributeFloatValue_IMPL_20310(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, arg2);
}

float Android_android_util_AttributeSet__getAttributeFloatValue_1(Android_android_util_AttributeSet* __this, int arg0, float arg1)
{
    return Android_android_util_AttributeSet__getAttributeFloatValue_IMPL_20316(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

float Android_android_util_AttributeSet__getAttributeFloatValue_IMPL_20310(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, float arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeFloatValue_20310_ID,"android/util/AttributeSet","getAttributeFloatValue","(Ljava/lang/String;Ljava/lang/String;F)F",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeFloatValue could not be cached",91);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    float result;
    result = ((float)U_JNIVAR->CallFloatMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeFloatValue_20310_ID, _obArg2, _obArg3, ((jfloat)arg4_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

float Android_android_util_AttributeSet__getAttributeFloatValue_IMPL_20316(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, float arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeFloatValue_20316_ID,"android/util/AttributeSet","getAttributeFloatValue","(IF)F",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeFloatValue could not be cached",91);
    
    float result;
    result = ((float)U_JNIVAR->CallFloatMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeFloatValue_20316_ID, ((jint)arg2_), ((jfloat)arg3_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getAttributeIntValue(Android_android_util_AttributeSet* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, int arg2)
{
    return Android_android_util_AttributeSet__getAttributeIntValue_IMPL_20308(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, arg2);
}

int Android_android_util_AttributeSet__getAttributeIntValue_1(Android_android_util_AttributeSet* __this, int arg0, int arg1)
{
    return Android_android_util_AttributeSet__getAttributeIntValue_IMPL_20314(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

int Android_android_util_AttributeSet__getAttributeIntValue_IMPL_20308(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeIntValue_20308_ID,"android/util/AttributeSet","getAttributeIntValue","(Ljava/lang/String;Ljava/lang/String;I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeIntValue could not be cached",89);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeIntValue_20308_ID, _obArg2, _obArg3, ((jint)arg4_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getAttributeIntValue_IMPL_20314(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeIntValue_20314_ID,"android/util/AttributeSet","getAttributeIntValue","(II)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeIntValue could not be cached",89);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeIntValue_20314_ID, ((jint)arg2_), ((jint)arg3_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getAttributeListValue(Android_android_util_AttributeSet* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, ::app::Android::Runtime::ObjectArray__Android_java_lang_String* arg2, int arg3)
{
    return Android_android_util_AttributeSet__getAttributeListValue_IMPL_20305(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, (::uObject*)arg2, arg3);
}

int Android_android_util_AttributeSet__getAttributeListValue_1(Android_android_util_AttributeSet* __this, int arg0, ::app::Android::Runtime::ObjectArray__Android_java_lang_String* arg1, int arg2)
{
    return Android_android_util_AttributeSet__getAttributeListValue_IMPL_20311(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1, arg2);
}

int Android_android_util_AttributeSet__getAttributeListValue_IMPL_20305(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, ::uObject* arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeListValue_20305_ID,"android/util/AttributeSet","getAttributeListValue","(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeListValue could not be cached",90);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeListValue_20305_ID, _obArg2, _obArg3, _obArg4, ((jint)arg5_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getAttributeListValue_IMPL_20311(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeListValue_20311_ID,"android/util/AttributeSet","getAttributeListValue","(I[Ljava/lang/String;I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeListValue could not be cached",90);
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeListValue_20311_ID, ((jint)arg2_), _obArg3, ((jint)arg4_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Android_android_util_AttributeSet__getAttributeName(Android_android_util_AttributeSet* __this, int arg0)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_util_AttributeSet__getAttributeName_IMPL_20300(NULL, __this->_subclassed, __this->_javaObject, arg0), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_android_util_AttributeSet__getAttributeName_IMPL_20300(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeName_20300_ID,"android/util/AttributeSet","getAttributeName","(I)Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeName could not be cached",85);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeName_20300_ID, ((jint)arg2_)),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getAttributeNameResource(Android_android_util_AttributeSet* __this, int arg0)
{
    return Android_android_util_AttributeSet__getAttributeNameResource_IMPL_20304(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

int Android_android_util_AttributeSet__getAttributeNameResource_IMPL_20304(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeNameResource_20304_ID,"android/util/AttributeSet","getAttributeNameResource","(I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeNameResource could not be cached",93);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeNameResource_20304_ID, ((jint)arg2_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getAttributeResourceValue(Android_android_util_AttributeSet* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, int arg2)
{
    return Android_android_util_AttributeSet__getAttributeResourceValue_IMPL_20307(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, arg2);
}

int Android_android_util_AttributeSet__getAttributeResourceValue_1(Android_android_util_AttributeSet* __this, int arg0, int arg1)
{
    return Android_android_util_AttributeSet__getAttributeResourceValue_IMPL_20313(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

int Android_android_util_AttributeSet__getAttributeResourceValue_IMPL_20307(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeResourceValue_20307_ID,"android/util/AttributeSet","getAttributeResourceValue","(Ljava/lang/String;Ljava/lang/String;I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeResourceValue could not be cached",94);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeResourceValue_20307_ID, _obArg2, _obArg3, ((jint)arg4_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getAttributeResourceValue_IMPL_20313(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeResourceValue_20313_ID,"android/util/AttributeSet","getAttributeResourceValue","(II)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeResourceValue could not be cached",94);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeResourceValue_20313_ID, ((jint)arg2_), ((jint)arg3_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getAttributeUnsignedIntValue(Android_android_util_AttributeSet* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1, int arg2)
{
    return Android_android_util_AttributeSet__getAttributeUnsignedIntValue_IMPL_20309(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1, arg2);
}

int Android_android_util_AttributeSet__getAttributeUnsignedIntValue_1(Android_android_util_AttributeSet* __this, int arg0, int arg1)
{
    return Android_android_util_AttributeSet__getAttributeUnsignedIntValue_IMPL_20315(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

int Android_android_util_AttributeSet__getAttributeUnsignedIntValue_IMPL_20309(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeUnsignedIntValue_20309_ID,"android/util/AttributeSet","getAttributeUnsignedIntValue","(Ljava/lang/String;Ljava/lang/String;I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeUnsignedIntValue could not be cached",97);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeUnsignedIntValue_20309_ID, _obArg2, _obArg3, ((jint)arg4_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getAttributeUnsignedIntValue_IMPL_20315(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeUnsignedIntValue_20315_ID,"android/util/AttributeSet","getAttributeUnsignedIntValue","(II)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeUnsignedIntValue could not be cached",97);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeUnsignedIntValue_20315_ID, ((jint)arg2_), ((jint)arg3_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Android_android_util_AttributeSet__getAttributeValue(Android_android_util_AttributeSet* __this, ::app::Android::java::lang::String* arg0, ::app::Android::java::lang::String* arg1)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_util_AttributeSet__getAttributeValue_IMPL_20302(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1), ::app::Android::java::lang::String__typeof());
}

::app::Android::java::lang::String* Android_android_util_AttributeSet__getAttributeValue_1(Android_android_util_AttributeSet* __this, int arg0)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_util_AttributeSet__getAttributeValue_IMPL_20301(NULL, __this->_subclassed, __this->_javaObject, arg0), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_android_util_AttributeSet__getAttributeValue_IMPL_20301(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeValue_20301_ID,"android/util/AttributeSet","getAttributeValue","(I)Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeValue could not be cached",86);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeValue_20301_ID, ((jint)arg2_)),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_util_AttributeSet__getAttributeValue_IMPL_20302(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeValue_20302_ID,"android/util/AttributeSet","getAttributeValue","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getAttributeValue could not be cached",86);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getAttributeValue_20302_ID, _obArg2, _obArg3),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Android_android_util_AttributeSet__getClassAttribute(Android_android_util_AttributeSet* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_util_AttributeSet__getClassAttribute_IMPL_20318(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_android_util_AttributeSet__getClassAttribute_IMPL_20318(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getClassAttribute_20318_ID,"android/util/AttributeSet","getClassAttribute","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getClassAttribute could not be cached",86);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getClassAttribute_20318_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Android_android_util_AttributeSet__getIdAttribute(Android_android_util_AttributeSet* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_util_AttributeSet__getIdAttribute_IMPL_20317(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_android_util_AttributeSet__getIdAttribute_IMPL_20317(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getIdAttribute_20317_ID,"android/util/AttributeSet","getIdAttribute","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getIdAttribute could not be cached",83);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getIdAttribute_20317_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getIdAttributeResourceValue(Android_android_util_AttributeSet* __this, int arg0)
{
    return Android_android_util_AttributeSet__getIdAttributeResourceValue_IMPL_20319(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

int Android_android_util_AttributeSet__getIdAttributeResourceValue_IMPL_20319(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getIdAttributeResourceValue_20319_ID,"android/util/AttributeSet","getIdAttributeResourceValue","(I)I",GetMethodID,"Id for fallback method android.util.AttributeSet.getIdAttributeResourceValue could not be cached",96);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getIdAttributeResourceValue_20319_ID, ((jint)arg2_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Android_android_util_AttributeSet__getPositionDescription(Android_android_util_AttributeSet* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_android_util_AttributeSet__getPositionDescription_IMPL_20303(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_android_util_AttributeSet__getPositionDescription_IMPL_20303(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getPositionDescription_20303_ID,"android/util/AttributeSet","getPositionDescription","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.util.AttributeSet.getPositionDescription could not be cached",91);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getPositionDescription_20303_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_util_AttributeSet__getStyleAttribute(Android_android_util_AttributeSet* __this)
{
    return Android_android_util_AttributeSet__getStyleAttribute_IMPL_20320(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_util_AttributeSet__getStyleAttribute_IMPL_20320(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_util_AttributeSet__getStyleAttribute_20320_ID,"android/util/AttributeSet","getStyleAttribute","()I",GetMethodID,"Id for fallback method android.util.AttributeSet.getStyleAttribute could not be cached",86);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_util_AttributeSet__getStyleAttribute_20320_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_view_ActionMode__uType* Android_android_view_ActionMode__typeof()
{
    static ::uStaticStrong<Android_android_view_ActionMode__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ActionMode__uType*)::uAllocClassType(sizeof(Android_android_view_ActionMode__uType), "Android.Fallbacks.Android_android_view_ActionMode", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::ActionMode__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ActionMode__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ActionMode__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_view_ActionProvider__uType* Android_android_view_ActionProvider__typeof()
{
    static ::uStaticStrong<Android_android_view_ActionProvider__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ActionProvider__uType*)::uAllocClassType(sizeof(Android_android_view_ActionProvider__uType), "Android.Fallbacks.Android_android_view_ActionProvider", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::ActionProvider__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ActionProvider__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ActionProvider__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_ChoreographerDLRFrameCallback__doFrame_21642_ID;

Android_android_view_ChoreographerDLRFrameCallback__uType* Android_android_view_ChoreographerDLRFrameCallback__typeof()
{
    static ::uStaticStrong<Android_android_view_ChoreographerDLRFrameCallback__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ChoreographerDLRFrameCallback__uType*)::uAllocClassType(sizeof(Android_android_view_ChoreographerDLRFrameCallback__uType), "Android.Fallbacks.Android_android_view_ChoreographerDLRFrameCallback", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_doFrame = (void(*)(void*, ::uLong))Android_android_view_ChoreographerDLRFrameCallback__doFrame;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ChoreographerDLRFrameCallback__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ChoreographerDLRFrameCallback__uType, __interface_1),
        ::app::Android::android::view::ChoreographerDLRFrameCallback__typeof(), offsetof(Android_android_view_ChoreographerDLRFrameCallback__uType, __interface_2));

    return type;
}

void Android_android_view_ChoreographerDLRFrameCallback__doFrame(Android_android_view_ChoreographerDLRFrameCallback* __this, ::uLong arg0)
{
    Android_android_view_ChoreographerDLRFrameCallback__doFrame_IMPL_21642(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_ChoreographerDLRFrameCallback__doFrame_IMPL_21642(::uStatic* __this, bool arg0_, jobject arg1_, ::uLong arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ChoreographerDLRFrameCallback__doFrame_21642_ID,"android/view/Choreographer$FrameCallback","doFrame","(J)V",GetMethodID,"Id for fallback method android.view.Choreographer$FrameCallback.doFrame could not be cached",91);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ChoreographerDLRFrameCallback__doFrame_21642_ID, ((jlong)arg2_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_view_ContextMenuDLRContextMenuInfo__uType* Android_android_view_ContextMenuDLRContextMenuInfo__typeof()
{
    static ::uStaticStrong<Android_android_view_ContextMenuDLRContextMenuInfo__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ContextMenuDLRContextMenuInfo__uType*)::uAllocClassType(sizeof(Android_android_view_ContextMenuDLRContextMenuInfo__uType), "Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ContextMenuDLRContextMenuInfo__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ContextMenuDLRContextMenuInfo__uType, __interface_1),
        ::app::Android::android::view::ContextMenuDLRContextMenuInfo__typeof(), offsetof(Android_android_view_ContextMenuDLRContextMenuInfo__uType, __interface_2));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_Menu__add_22256_ID;
jmethodID Android_android_view_Menu__add_22257_ID;
jmethodID Android_android_view_Menu__add_22258_ID;
jmethodID Android_android_view_Menu__add_22259_ID;
jmethodID Android_android_view_Menu__addIntentOptions_22264_ID;
jmethodID Android_android_view_Menu__addSubMenu_22260_ID;
jmethodID Android_android_view_Menu__addSubMenu_22261_ID;
jmethodID Android_android_view_Menu__addSubMenu_22262_ID;
jmethodID Android_android_view_Menu__addSubMenu_22263_ID;
jmethodID Android_android_view_Menu__clear_22267_ID;
jmethodID Android_android_view_Menu__close_22275_ID;
jmethodID Android_android_view_Menu__findItem_22272_ID;
jmethodID Android_android_view_Menu__getItem_22274_ID;
jmethodID Android_android_view_Menu__hasVisibleItems_22271_ID;
jmethodID Android_android_view_Menu__isShortcutKey_22277_ID;
jmethodID Android_android_view_Menu__performIdentifierAction_22278_ID;
jmethodID Android_android_view_Menu__performShortcut_22276_ID;
jmethodID Android_android_view_Menu__removeGroup_22266_ID;
jmethodID Android_android_view_Menu__removeItem_22265_ID;
jmethodID Android_android_view_Menu__setGroupCheckable_22268_ID;
jmethodID Android_android_view_Menu__setGroupEnabled_22270_ID;
jmethodID Android_android_view_Menu__setGroupVisible_22269_ID;
jmethodID Android_android_view_Menu__setQwertyMode_22279_ID;
jmethodID Android_android_view_Menu__size_22273_ID;

Android_android_view_Menu__uType* Android_android_view_Menu__typeof()
{
    static ::uStaticStrong<Android_android_view_Menu__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_Menu__uType*)::uAllocClassType(sizeof(Android_android_view_Menu__uType), "Android.Fallbacks.Android_android_view_Menu", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_add = (::uObject*(*)(void*, ::uObject*))Android_android_view_Menu__add;
    type->__interface_2.__fp_add_1 = (::uObject*(*)(void*, int))Android_android_view_Menu__add_3;
    type->__interface_2.__fp_add_2 = (::uObject*(*)(void*, int, int, int, ::uObject*))Android_android_view_Menu__add_2;
    type->__interface_2.__fp_add_3 = (::uObject*(*)(void*, int, int, int, int))Android_android_view_Menu__add_1;
    type->__interface_2.__fp_addSubMenu = (::uObject*(*)(void*, ::uObject*))Android_android_view_Menu__addSubMenu_3;
    type->__interface_2.__fp_addSubMenu_1 = (::uObject*(*)(void*, int))Android_android_view_Menu__addSubMenu_2;
    type->__interface_2.__fp_addSubMenu_2 = (::uObject*(*)(void*, int, int, int, ::uObject*))Android_android_view_Menu__addSubMenu_1;
    type->__interface_2.__fp_addSubMenu_3 = (::uObject*(*)(void*, int, int, int, int))Android_android_view_Menu__addSubMenu;
    type->__interface_2.__fp_addIntentOptions = (int(*)(void*, int, int, int, ::app::Android::android::content::ComponentName*, ::app::Android::Runtime::ObjectArray__Android_android_content_Intent*, ::app::Android::android::content::Intent*, int, ::app::Android::Runtime::ObjectArray__Android_android_view_MenuItem*))Android_android_view_Menu__addIntentOptions;
    type->__interface_2.__fp_removeItem = (void(*)(void*, int))Android_android_view_Menu__removeItem;
    type->__interface_2.__fp_removeGroup = (void(*)(void*, int))Android_android_view_Menu__removeGroup;
    type->__interface_2.__fp_clear = (void(*)(void*))Android_android_view_Menu__clear;
    type->__interface_2.__fp_setGroupCheckable = (void(*)(void*, int, bool, bool))Android_android_view_Menu__setGroupCheckable;
    type->__interface_2.__fp_setGroupVisible = (void(*)(void*, int, bool))Android_android_view_Menu__setGroupVisible;
    type->__interface_2.__fp_setGroupEnabled = (void(*)(void*, int, bool))Android_android_view_Menu__setGroupEnabled;
    type->__interface_2.__fp_hasVisibleItems = (bool(*)(void*))Android_android_view_Menu__hasVisibleItems;
    type->__interface_2.__fp_findItem = (::uObject*(*)(void*, int))Android_android_view_Menu__findItem;
    type->__interface_2.__fp_size = (int(*)(void*))Android_android_view_Menu__size;
    type->__interface_2.__fp_getItem = (::uObject*(*)(void*, int))Android_android_view_Menu__getItem;
    type->__interface_2.__fp_close = (void(*)(void*))Android_android_view_Menu__close;
    type->__interface_2.__fp_performShortcut = (bool(*)(void*, int, ::app::Android::android::view::KeyEvent*, int))Android_android_view_Menu__performShortcut;
    type->__interface_2.__fp_isShortcutKey = (bool(*)(void*, int, ::app::Android::android::view::KeyEvent*))Android_android_view_Menu__isShortcutKey;
    type->__interface_2.__fp_performIdentifierAction = (bool(*)(void*, int, int))Android_android_view_Menu__performIdentifierAction;
    type->__interface_2.__fp_setQwertyMode = (void(*)(void*, bool))Android_android_view_Menu__setQwertyMode;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_Menu__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_Menu__uType, __interface_1),
        ::app::Android::android::view::Menu__typeof(), offsetof(Android_android_view_Menu__uType, __interface_2));

    return type;
}

::uObject* Android_android_view_Menu__add(Android_android_view_Menu* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_view_Menu__add_IMPL_22256(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_Menu__add_1(Android_android_view_Menu* __this, int arg0, int arg1, int arg2, int arg3)
{
    return (::uObject*)Android_android_view_Menu__add_IMPL_22259(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

::uObject* Android_android_view_Menu__add_2(Android_android_view_Menu* __this, int arg0, int arg1, int arg2, ::uObject* arg3)
{
    return (::uObject*)Android_android_view_Menu__add_IMPL_22258(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, (::uObject*)arg3);
}

::uObject* Android_android_view_Menu__add_3(Android_android_view_Menu* __this, int arg0)
{
    return (::uObject*)Android_android_view_Menu__add_IMPL_22257(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_Menu__add_IMPL_22256(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__add_22256_ID,"android/view/Menu","add","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.add could not be cached",64);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__add_22256_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_Menu__add_IMPL_22257(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__add_22257_ID,"android/view/Menu","add","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.add could not be cached",64);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__add_22257_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_Menu__add_IMPL_22258(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, ::uObject* arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__add_22258_ID,"android/view/Menu","add","(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.add could not be cached",64);
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__add_22258_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_Menu__add_IMPL_22259(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__add_22259_ID,"android/view/Menu","add","(IIII)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.add could not be cached",64);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__add_22259_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_view_Menu__addIntentOptions(Android_android_view_Menu* __this, int arg0, int arg1, int arg2, ::app::Android::android::content::ComponentName* arg3, ::app::Android::Runtime::ObjectArray__Android_android_content_Intent* arg4, ::app::Android::android::content::Intent* arg5, int arg6, ::app::Android::Runtime::ObjectArray__Android_android_view_MenuItem* arg7)
{
    return Android_android_view_Menu__addIntentOptions_IMPL_22264(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, (::uObject*)arg3, (::uObject*)arg4, (::uObject*)arg5, arg6, (::uObject*)arg7);
}

int Android_android_view_Menu__addIntentOptions_IMPL_22264(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, ::uObject* arg5_, ::uObject* arg6_, ::uObject* arg7_, int arg8_, ::uObject* arg9_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__addIntentOptions_22264_ID,"android/view/Menu","addIntentOptions","(IIILandroid/content/ComponentName;[Landroid/content/Intent;Landroid/content/Intent;I[Landroid/view/MenuItem;)I",GetMethodID,"Id for fallback method android.view.Menu.addIntentOptions could not be cached",77);
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    jobject _obArg6 = ((!arg6_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg6_));
    jobject _obArg7 = ((!arg7_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg7_));
    jobject _obArg9 = ((!arg9_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg9_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__addIntentOptions_22264_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5, _obArg6, _obArg7, ((jint)arg8_), _obArg9));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_Menu__addSubMenu(Android_android_view_Menu* __this, int arg0, int arg1, int arg2, int arg3)
{
    return (::uObject*)Android_android_view_Menu__addSubMenu_IMPL_22263(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

::uObject* Android_android_view_Menu__addSubMenu_1(Android_android_view_Menu* __this, int arg0, int arg1, int arg2, ::uObject* arg3)
{
    return (::uObject*)Android_android_view_Menu__addSubMenu_IMPL_22262(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, (::uObject*)arg3);
}

::uObject* Android_android_view_Menu__addSubMenu_2(Android_android_view_Menu* __this, int arg0)
{
    return (::uObject*)Android_android_view_Menu__addSubMenu_IMPL_22261(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_Menu__addSubMenu_3(Android_android_view_Menu* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_view_Menu__addSubMenu_IMPL_22260(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_Menu__addSubMenu_IMPL_22260(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__addSubMenu_22260_ID,"android/view/Menu","addSubMenu","(Ljava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.Menu.addSubMenu could not be cached",71);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__addSubMenu_22260_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_Menu__addSubMenu_IMPL_22261(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__addSubMenu_22261_ID,"android/view/Menu","addSubMenu","(I)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.Menu.addSubMenu could not be cached",71);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__addSubMenu_22261_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_Menu__addSubMenu_IMPL_22262(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, ::uObject* arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__addSubMenu_22262_ID,"android/view/Menu","addSubMenu","(IIILjava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.Menu.addSubMenu could not be cached",71);
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__addSubMenu_22262_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_Menu__addSubMenu_IMPL_22263(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__addSubMenu_22263_ID,"android/view/Menu","addSubMenu","(IIII)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.Menu.addSubMenu could not be cached",71);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__addSubMenu_22263_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_)),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_Menu__clear(Android_android_view_Menu* __this)
{
    Android_android_view_Menu__clear_IMPL_22267(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_view_Menu__clear_IMPL_22267(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__clear_22267_ID,"android/view/Menu","clear","()V",GetMethodID,"Id for fallback method android.view.Menu.clear could not be cached",66);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__clear_22267_ID);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_Menu__close(Android_android_view_Menu* __this)
{
    Android_android_view_Menu__close_IMPL_22275(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_view_Menu__close_IMPL_22275(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__close_22275_ID,"android/view/Menu","close","()V",GetMethodID,"Id for fallback method android.view.Menu.close could not be cached",66);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__close_22275_ID);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

::uObject* Android_android_view_Menu__findItem(Android_android_view_Menu* __this, int arg0)
{
    return (::uObject*)Android_android_view_Menu__findItem_IMPL_22272(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_Menu__findItem_IMPL_22272(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__findItem_22272_ID,"android/view/Menu","findItem","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.findItem could not be cached",69);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__findItem_22272_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_Menu__getItem(Android_android_view_Menu* __this, int arg0)
{
    return (::uObject*)Android_android_view_Menu__getItem_IMPL_22274(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_Menu__getItem_IMPL_22274(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__getItem_22274_ID,"android/view/Menu","getItem","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.Menu.getItem could not be cached",68);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__getItem_22274_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_Menu__hasVisibleItems(Android_android_view_Menu* __this)
{
    return Android_android_view_Menu__hasVisibleItems_IMPL_22271(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_Menu__hasVisibleItems_IMPL_22271(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__hasVisibleItems_22271_ID,"android/view/Menu","hasVisibleItems","()Z",GetMethodID,"Id for fallback method android.view.Menu.hasVisibleItems could not be cached",76);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__hasVisibleItems_22271_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_Menu__isShortcutKey(Android_android_view_Menu* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1)
{
    return Android_android_view_Menu__isShortcutKey_IMPL_22277(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

bool Android_android_view_Menu__isShortcutKey_IMPL_22277(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__isShortcutKey_22277_ID,"android/view/Menu","isShortcutKey","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.view.Menu.isShortcutKey could not be cached",74);
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__isShortcutKey_22277_ID, ((jint)arg2_), _obArg3));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_Menu__performIdentifierAction(Android_android_view_Menu* __this, int arg0, int arg1)
{
    return Android_android_view_Menu__performIdentifierAction_IMPL_22278(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

bool Android_android_view_Menu__performIdentifierAction_IMPL_22278(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__performIdentifierAction_22278_ID,"android/view/Menu","performIdentifierAction","(II)Z",GetMethodID,"Id for fallback method android.view.Menu.performIdentifierAction could not be cached",84);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__performIdentifierAction_22278_ID, ((jint)arg2_), ((jint)arg3_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_Menu__performShortcut(Android_android_view_Menu* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1, int arg2)
{
    return Android_android_view_Menu__performShortcut_IMPL_22276(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1, arg2);
}

bool Android_android_view_Menu__performShortcut_IMPL_22276(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__performShortcut_22276_ID,"android/view/Menu","performShortcut","(ILandroid/view/KeyEvent;I)Z",GetMethodID,"Id for fallback method android.view.Menu.performShortcut could not be cached",76);
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__performShortcut_22276_ID, ((jint)arg2_), _obArg3, ((jint)arg4_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_Menu__removeGroup(Android_android_view_Menu* __this, int arg0)
{
    Android_android_view_Menu__removeGroup_IMPL_22266(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_Menu__removeGroup_IMPL_22266(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__removeGroup_22266_ID,"android/view/Menu","removeGroup","(I)V",GetMethodID,"Id for fallback method android.view.Menu.removeGroup could not be cached",72);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__removeGroup_22266_ID, ((jint)arg2_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_Menu__removeItem(Android_android_view_Menu* __this, int arg0)
{
    Android_android_view_Menu__removeItem_IMPL_22265(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_Menu__removeItem_IMPL_22265(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__removeItem_22265_ID,"android/view/Menu","removeItem","(I)V",GetMethodID,"Id for fallback method android.view.Menu.removeItem could not be cached",71);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__removeItem_22265_ID, ((jint)arg2_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_Menu__setGroupCheckable(Android_android_view_Menu* __this, int arg0, bool arg1, bool arg2)
{
    Android_android_view_Menu__setGroupCheckable_IMPL_22268(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2);
}

void Android_android_view_Menu__setGroupCheckable_IMPL_22268(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, bool arg3_, bool arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__setGroupCheckable_22268_ID,"android/view/Menu","setGroupCheckable","(IZZ)V",GetMethodID,"Id for fallback method android.view.Menu.setGroupCheckable could not be cached",78);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__setGroupCheckable_22268_ID, ((jint)arg2_), ((jboolean)arg3_), ((jboolean)arg4_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_Menu__setGroupEnabled(Android_android_view_Menu* __this, int arg0, bool arg1)
{
    Android_android_view_Menu__setGroupEnabled_IMPL_22270(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void Android_android_view_Menu__setGroupEnabled_IMPL_22270(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__setGroupEnabled_22270_ID,"android/view/Menu","setGroupEnabled","(IZ)V",GetMethodID,"Id for fallback method android.view.Menu.setGroupEnabled could not be cached",76);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__setGroupEnabled_22270_ID, ((jint)arg2_), ((jboolean)arg3_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_Menu__setGroupVisible(Android_android_view_Menu* __this, int arg0, bool arg1)
{
    Android_android_view_Menu__setGroupVisible_IMPL_22269(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void Android_android_view_Menu__setGroupVisible_IMPL_22269(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__setGroupVisible_22269_ID,"android/view/Menu","setGroupVisible","(IZ)V",GetMethodID,"Id for fallback method android.view.Menu.setGroupVisible could not be cached",76);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__setGroupVisible_22269_ID, ((jint)arg2_), ((jboolean)arg3_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_Menu__setQwertyMode(Android_android_view_Menu* __this, bool arg0)
{
    Android_android_view_Menu__setQwertyMode_IMPL_22279(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_Menu__setQwertyMode_IMPL_22279(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__setQwertyMode_22279_ID,"android/view/Menu","setQwertyMode","(Z)V",GetMethodID,"Id for fallback method android.view.Menu.setQwertyMode could not be cached",74);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__setQwertyMode_22279_ID, ((jboolean)arg2_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

int Android_android_view_Menu__size(Android_android_view_Menu* __this)
{
    return Android_android_view_Menu__size_IMPL_22273(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_view_Menu__size_IMPL_22273(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_Menu__size_22273_ID,"android/view/Menu","size","()I",GetMethodID,"Id for fallback method android.view.Menu.size could not be cached",65);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_Menu__size_22273_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_MenuItem__collapseActionView_22332_ID;
jmethodID Android_android_view_MenuItem__expandActionView_22331_ID;
jmethodID Android_android_view_MenuItem__getActionProvider_22330_ID;
jmethodID Android_android_view_MenuItem__getActionView_22328_ID;
jmethodID Android_android_view_MenuItem__getAlphabeticShortcut_22311_ID;
jmethodID Android_android_view_MenuItem__getGroupId_22295_ID;
jmethodID Android_android_view_MenuItem__getIcon_22304_ID;
jmethodID Android_android_view_MenuItem__getIntent_22306_ID;
jmethodID Android_android_view_MenuItem__getItemId_22294_ID;
jmethodID Android_android_view_MenuItem__getMenuInfo_22323_ID;
jmethodID Android_android_view_MenuItem__getNumericShortcut_22309_ID;
jmethodID Android_android_view_MenuItem__getOrder_22296_ID;
jmethodID Android_android_view_MenuItem__getSubMenu_22321_ID;
jmethodID Android_android_view_MenuItem__getTitle_22299_ID;
jmethodID Android_android_view_MenuItem__getTitleCondensed_22301_ID;
jmethodID Android_android_view_MenuItem__hasSubMenu_22320_ID;
jmethodID Android_android_view_MenuItem__isActionViewExpanded_22333_ID;
jmethodID Android_android_view_MenuItem__isCheckable_22313_ID;
jmethodID Android_android_view_MenuItem__isChecked_22315_ID;
jmethodID Android_android_view_MenuItem__isEnabled_22319_ID;
jmethodID Android_android_view_MenuItem__isVisible_22317_ID;
jmethodID Android_android_view_MenuItem__setActionProvider_22329_ID;
jmethodID Android_android_view_MenuItem__setActionView_22326_ID;
jmethodID Android_android_view_MenuItem__setActionView_22327_ID;
jmethodID Android_android_view_MenuItem__setAlphabeticShortcut_22310_ID;
jmethodID Android_android_view_MenuItem__setCheckable_22312_ID;
jmethodID Android_android_view_MenuItem__setChecked_22314_ID;
jmethodID Android_android_view_MenuItem__setEnabled_22318_ID;
jmethodID Android_android_view_MenuItem__setIcon_22302_ID;
jmethodID Android_android_view_MenuItem__setIcon_22303_ID;
jmethodID Android_android_view_MenuItem__setIntent_22305_ID;
jmethodID Android_android_view_MenuItem__setNumericShortcut_22308_ID;
jmethodID Android_android_view_MenuItem__setOnActionExpandListener_22334_ID;
jmethodID Android_android_view_MenuItem__setOnMenuItemClickListener_22322_ID;
jmethodID Android_android_view_MenuItem__setShortcut_22307_ID;
jmethodID Android_android_view_MenuItem__setShowAsAction_22324_ID;
jmethodID Android_android_view_MenuItem__setShowAsActionFlags_22325_ID;
jmethodID Android_android_view_MenuItem__setTitle_22297_ID;
jmethodID Android_android_view_MenuItem__setTitle_22298_ID;
jmethodID Android_android_view_MenuItem__setTitleCondensed_22300_ID;
jmethodID Android_android_view_MenuItem__setVisible_22316_ID;

Android_android_view_MenuItem__uType* Android_android_view_MenuItem__typeof()
{
    static ::uStaticStrong<Android_android_view_MenuItem__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_MenuItem__uType*)::uAllocClassType(sizeof(Android_android_view_MenuItem__uType), "Android.Fallbacks.Android_android_view_MenuItem", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_getItemId = (int(*)(void*))Android_android_view_MenuItem__getItemId;
    type->__interface_2.__fp_getGroupId = (int(*)(void*))Android_android_view_MenuItem__getGroupId;
    type->__interface_2.__fp_getOrder = (int(*)(void*))Android_android_view_MenuItem__getOrder;
    type->__interface_2.__fp_setTitle_1 = (::uObject*(*)(void*, ::uObject*))Android_android_view_MenuItem__setTitle;
    type->__interface_2.__fp_setTitle = (::uObject*(*)(void*, int))Android_android_view_MenuItem__setTitle_1;
    type->__interface_2.__fp_getTitle = (::uObject*(*)(void*))Android_android_view_MenuItem__getTitle;
    type->__interface_2.__fp_setTitleCondensed = (::uObject*(*)(void*, ::uObject*))Android_android_view_MenuItem__setTitleCondensed;
    type->__interface_2.__fp_getTitleCondensed = (::uObject*(*)(void*))Android_android_view_MenuItem__getTitleCondensed;
    type->__interface_2.__fp_setIcon_1 = (::uObject*(*)(void*, ::app::Android::android::graphics::drawable::Drawable*))Android_android_view_MenuItem__setIcon;
    type->__interface_2.__fp_setIcon = (::uObject*(*)(void*, int))Android_android_view_MenuItem__setIcon_1;
    type->__interface_2.__fp_getIcon = (::app::Android::android::graphics::drawable::Drawable*(*)(void*))Android_android_view_MenuItem__getIcon;
    type->__interface_2.__fp_setIntent = (::uObject*(*)(void*, ::app::Android::android::content::Intent*))Android_android_view_MenuItem__setIntent;
    type->__interface_2.__fp_getIntent = (::app::Android::android::content::Intent*(*)(void*))Android_android_view_MenuItem__getIntent;
    type->__interface_2.__fp_setShortcut = (::uObject*(*)(void*, ::uChar, ::uChar))Android_android_view_MenuItem__setShortcut;
    type->__interface_2.__fp_setNumericShortcut = (::uObject*(*)(void*, ::uChar))Android_android_view_MenuItem__setNumericShortcut;
    type->__interface_2.__fp_getNumericShortcut = (::uChar(*)(void*))Android_android_view_MenuItem__getNumericShortcut;
    type->__interface_2.__fp_setAlphabeticShortcut = (::uObject*(*)(void*, ::uChar))Android_android_view_MenuItem__setAlphabeticShortcut;
    type->__interface_2.__fp_getAlphabeticShortcut = (::uChar(*)(void*))Android_android_view_MenuItem__getAlphabeticShortcut;
    type->__interface_2.__fp_setCheckable = (::uObject*(*)(void*, bool))Android_android_view_MenuItem__setCheckable;
    type->__interface_2.__fp_isCheckable = (bool(*)(void*))Android_android_view_MenuItem__isCheckable;
    type->__interface_2.__fp_setChecked = (::uObject*(*)(void*, bool))Android_android_view_MenuItem__setChecked;
    type->__interface_2.__fp_isChecked = (bool(*)(void*))Android_android_view_MenuItem__isChecked;
    type->__interface_2.__fp_setVisible = (::uObject*(*)(void*, bool))Android_android_view_MenuItem__setVisible;
    type->__interface_2.__fp_isVisible = (bool(*)(void*))Android_android_view_MenuItem__isVisible;
    type->__interface_2.__fp_setEnabled = (::uObject*(*)(void*, bool))Android_android_view_MenuItem__setEnabled;
    type->__interface_2.__fp_isEnabled = (bool(*)(void*))Android_android_view_MenuItem__isEnabled;
    type->__interface_2.__fp_hasSubMenu = (bool(*)(void*))Android_android_view_MenuItem__hasSubMenu;
    type->__interface_2.__fp_getSubMenu = (::uObject*(*)(void*))Android_android_view_MenuItem__getSubMenu;
    type->__interface_2.__fp_setOnMenuItemClickListener = (::uObject*(*)(void*, ::uObject*))Android_android_view_MenuItem__setOnMenuItemClickListener;
    type->__interface_2.__fp_getMenuInfo = (::uObject*(*)(void*))Android_android_view_MenuItem__getMenuInfo;
    type->__interface_2.__fp_setShowAsAction = (void(*)(void*, int))Android_android_view_MenuItem__setShowAsAction;
    type->__interface_2.__fp_setShowAsActionFlags = (::uObject*(*)(void*, int))Android_android_view_MenuItem__setShowAsActionFlags;
    type->__interface_2.__fp_setActionView_1 = (::uObject*(*)(void*, ::app::Android::android::view::View*))Android_android_view_MenuItem__setActionView_1;
    type->__interface_2.__fp_setActionView = (::uObject*(*)(void*, int))Android_android_view_MenuItem__setActionView;
    type->__interface_2.__fp_getActionView = (::app::Android::android::view::View*(*)(void*))Android_android_view_MenuItem__getActionView;
    type->__interface_2.__fp_setActionProvider = (::uObject*(*)(void*, ::app::Android::android::view::ActionProvider*))Android_android_view_MenuItem__setActionProvider;
    type->__interface_2.__fp_getActionProvider = (::app::Android::android::view::ActionProvider*(*)(void*))Android_android_view_MenuItem__getActionProvider;
    type->__interface_2.__fp_expandActionView = (bool(*)(void*))Android_android_view_MenuItem__expandActionView;
    type->__interface_2.__fp_collapseActionView = (bool(*)(void*))Android_android_view_MenuItem__collapseActionView;
    type->__interface_2.__fp_isActionViewExpanded = (bool(*)(void*))Android_android_view_MenuItem__isActionViewExpanded;
    type->__interface_2.__fp_setOnActionExpandListener = (::uObject*(*)(void*, ::uObject*))Android_android_view_MenuItem__setOnActionExpandListener;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_MenuItem__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_MenuItem__uType, __interface_1),
        ::app::Android::android::view::MenuItem__typeof(), offsetof(Android_android_view_MenuItem__uType, __interface_2));

    return type;
}

bool Android_android_view_MenuItem__collapseActionView(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__collapseActionView_IMPL_22332(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_MenuItem__collapseActionView_IMPL_22332(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__collapseActionView_22332_ID,"android/view/MenuItem","collapseActionView","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.collapseActionView could not be cached",83);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__collapseActionView_22332_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_MenuItem__expandActionView(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__expandActionView_IMPL_22331(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_MenuItem__expandActionView_IMPL_22331(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__expandActionView_22331_ID,"android/view/MenuItem","expandActionView","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.expandActionView could not be cached",81);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__expandActionView_22331_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::view::ActionProvider* Android_android_view_MenuItem__getActionProvider(Android_android_view_MenuItem* __this)
{
    return ::uCast< ::app::Android::android::view::ActionProvider*>(Android_android_view_MenuItem__getActionProvider_IMPL_22330(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::view::ActionProvider__typeof());
}

::uObject* Android_android_view_MenuItem__getActionProvider_IMPL_22330(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getActionProvider_22330_ID,"android/view/MenuItem","getActionProvider","()Landroid/view/ActionProvider;",GetMethodID,"Id for fallback method android.view.MenuItem.getActionProvider could not be cached",82);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getActionProvider_22330_ID),result,::app::Android::Fallbacks::Android_android_view_ActionProvider__typeof(),::app::Android::android::view::ActionProvider*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::view::View* Android_android_view_MenuItem__getActionView(Android_android_view_MenuItem* __this)
{
    return ::uCast< ::app::Android::android::view::View*>(Android_android_view_MenuItem__getActionView_IMPL_22328(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::view::View__typeof());
}

::uObject* Android_android_view_MenuItem__getActionView_IMPL_22328(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getActionView_22328_ID,"android/view/MenuItem","getActionView","()Landroid/view/View;",GetMethodID,"Id for fallback method android.view.MenuItem.getActionView could not be cached",78);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getActionView_22328_ID),result,::app::Android::android::view::View__typeof(),::app::Android::android::view::View*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uChar Android_android_view_MenuItem__getAlphabeticShortcut(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__getAlphabeticShortcut_IMPL_22311(NULL, __this->_subclassed, __this->_javaObject);
}

::uChar Android_android_view_MenuItem__getAlphabeticShortcut_IMPL_22311(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getAlphabeticShortcut_22311_ID,"android/view/MenuItem","getAlphabeticShortcut","()C",GetMethodID,"Id for fallback method android.view.MenuItem.getAlphabeticShortcut could not be cached",86);
    
    ::uChar result;
    result = ((::uChar)U_JNIVAR->CallCharMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getAlphabeticShortcut_22311_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_view_MenuItem__getGroupId(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__getGroupId_IMPL_22295(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_view_MenuItem__getGroupId_IMPL_22295(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getGroupId_22295_ID,"android/view/MenuItem","getGroupId","()I",GetMethodID,"Id for fallback method android.view.MenuItem.getGroupId could not be cached",75);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getGroupId_22295_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::graphics::drawable::Drawable* Android_android_view_MenuItem__getIcon(Android_android_view_MenuItem* __this)
{
    return ::uCast< ::app::Android::android::graphics::drawable::Drawable*>(Android_android_view_MenuItem__getIcon_IMPL_22304(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::graphics::drawable::Drawable__typeof());
}

::uObject* Android_android_view_MenuItem__getIcon_IMPL_22304(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getIcon_22304_ID,"android/view/MenuItem","getIcon","()Landroid/graphics/drawable/Drawable;",GetMethodID,"Id for fallback method android.view.MenuItem.getIcon could not be cached",72);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getIcon_22304_ID),result,::app::Android::Fallbacks::Android_android_graphics_drawable_Drawable__typeof(),::app::Android::android::graphics::drawable::Drawable*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::content::Intent* Android_android_view_MenuItem__getIntent(Android_android_view_MenuItem* __this)
{
    return ::uCast< ::app::Android::android::content::Intent*>(Android_android_view_MenuItem__getIntent_IMPL_22306(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::content::Intent__typeof());
}

::uObject* Android_android_view_MenuItem__getIntent_IMPL_22306(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getIntent_22306_ID,"android/view/MenuItem","getIntent","()Landroid/content/Intent;",GetMethodID,"Id for fallback method android.view.MenuItem.getIntent could not be cached",74);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getIntent_22306_ID),result,::app::Android::android::content::Intent__typeof(),::app::Android::android::content::Intent*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_view_MenuItem__getItemId(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__getItemId_IMPL_22294(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_view_MenuItem__getItemId_IMPL_22294(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getItemId_22294_ID,"android/view/MenuItem","getItemId","()I",GetMethodID,"Id for fallback method android.view.MenuItem.getItemId could not be cached",74);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getItemId_22294_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__getMenuInfo(Android_android_view_MenuItem* __this)
{
    return (::uObject*)Android_android_view_MenuItem__getMenuInfo_IMPL_22323(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* Android_android_view_MenuItem__getMenuInfo_IMPL_22323(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getMenuInfo_22323_ID,"android/view/MenuItem","getMenuInfo","()Landroid/view/ContextMenu$ContextMenuInfo;",GetMethodID,"Id for fallback method android.view.MenuItem.getMenuInfo could not be cached",76);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getMenuInfo_22323_ID),result,::app::Android::Fallbacks::Android_android_view_ContextMenuDLRContextMenuInfo__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uChar Android_android_view_MenuItem__getNumericShortcut(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__getNumericShortcut_IMPL_22309(NULL, __this->_subclassed, __this->_javaObject);
}

::uChar Android_android_view_MenuItem__getNumericShortcut_IMPL_22309(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getNumericShortcut_22309_ID,"android/view/MenuItem","getNumericShortcut","()C",GetMethodID,"Id for fallback method android.view.MenuItem.getNumericShortcut could not be cached",83);
    
    ::uChar result;
    result = ((::uChar)U_JNIVAR->CallCharMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getNumericShortcut_22309_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_view_MenuItem__getOrder(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__getOrder_IMPL_22296(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_view_MenuItem__getOrder_IMPL_22296(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getOrder_22296_ID,"android/view/MenuItem","getOrder","()I",GetMethodID,"Id for fallback method android.view.MenuItem.getOrder could not be cached",73);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getOrder_22296_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__getSubMenu(Android_android_view_MenuItem* __this)
{
    return (::uObject*)Android_android_view_MenuItem__getSubMenu_IMPL_22321(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* Android_android_view_MenuItem__getSubMenu_IMPL_22321(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getSubMenu_22321_ID,"android/view/MenuItem","getSubMenu","()Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.MenuItem.getSubMenu could not be cached",75);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getSubMenu_22321_ID),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__getTitle(Android_android_view_MenuItem* __this)
{
    return (::uObject*)Android_android_view_MenuItem__getTitle_IMPL_22299(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* Android_android_view_MenuItem__getTitle_IMPL_22299(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getTitle_22299_ID,"android/view/MenuItem","getTitle","()Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.view.MenuItem.getTitle could not be cached",73);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getTitle_22299_ID),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__getTitleCondensed(Android_android_view_MenuItem* __this)
{
    return (::uObject*)Android_android_view_MenuItem__getTitleCondensed_IMPL_22301(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* Android_android_view_MenuItem__getTitleCondensed_IMPL_22301(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__getTitleCondensed_22301_ID,"android/view/MenuItem","getTitleCondensed","()Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method android.view.MenuItem.getTitleCondensed could not be cached",82);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__getTitleCondensed_22301_ID),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_MenuItem__hasSubMenu(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__hasSubMenu_IMPL_22320(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_MenuItem__hasSubMenu_IMPL_22320(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__hasSubMenu_22320_ID,"android/view/MenuItem","hasSubMenu","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.hasSubMenu could not be cached",75);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__hasSubMenu_22320_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_MenuItem__isActionViewExpanded(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__isActionViewExpanded_IMPL_22333(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_MenuItem__isActionViewExpanded_IMPL_22333(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__isActionViewExpanded_22333_ID,"android/view/MenuItem","isActionViewExpanded","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.isActionViewExpanded could not be cached",85);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__isActionViewExpanded_22333_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_MenuItem__isCheckable(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__isCheckable_IMPL_22313(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_MenuItem__isCheckable_IMPL_22313(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__isCheckable_22313_ID,"android/view/MenuItem","isCheckable","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.isCheckable could not be cached",76);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__isCheckable_22313_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_MenuItem__isChecked(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__isChecked_IMPL_22315(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_MenuItem__isChecked_IMPL_22315(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__isChecked_22315_ID,"android/view/MenuItem","isChecked","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.isChecked could not be cached",74);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__isChecked_22315_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_MenuItem__isEnabled(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__isEnabled_IMPL_22319(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_MenuItem__isEnabled_IMPL_22319(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__isEnabled_22319_ID,"android/view/MenuItem","isEnabled","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.isEnabled could not be cached",74);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__isEnabled_22319_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_MenuItem__isVisible(Android_android_view_MenuItem* __this)
{
    return Android_android_view_MenuItem__isVisible_IMPL_22317(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_MenuItem__isVisible_IMPL_22317(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__isVisible_22317_ID,"android/view/MenuItem","isVisible","()Z",GetMethodID,"Id for fallback method android.view.MenuItem.isVisible could not be cached",74);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__isVisible_22317_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setActionProvider(Android_android_view_MenuItem* __this, ::app::Android::android::view::ActionProvider* arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setActionProvider_IMPL_22329(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_MenuItem__setActionProvider_IMPL_22329(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setActionProvider_22329_ID,"android/view/MenuItem","setActionProvider","(Landroid/view/ActionProvider;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setActionProvider could not be cached",82);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setActionProvider_22329_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setActionView(Android_android_view_MenuItem* __this, int arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setActionView_IMPL_22327(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_MenuItem__setActionView_1(Android_android_view_MenuItem* __this, ::app::Android::android::view::View* arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setActionView_IMPL_22326(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_MenuItem__setActionView_IMPL_22326(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setActionView_22326_ID,"android/view/MenuItem","setActionView","(Landroid/view/View;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setActionView could not be cached",78);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setActionView_22326_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setActionView_IMPL_22327(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setActionView_22327_ID,"android/view/MenuItem","setActionView","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setActionView could not be cached",78);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setActionView_22327_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setAlphabeticShortcut(Android_android_view_MenuItem* __this, ::uChar arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setAlphabeticShortcut_IMPL_22310(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_MenuItem__setAlphabeticShortcut_IMPL_22310(::uStatic* __this, bool arg0_, jobject arg1_, ::uChar arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setAlphabeticShortcut_22310_ID,"android/view/MenuItem","setAlphabeticShortcut","(C)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setAlphabeticShortcut could not be cached",86);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setAlphabeticShortcut_22310_ID, ((jchar)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setCheckable(Android_android_view_MenuItem* __this, bool arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setCheckable_IMPL_22312(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_MenuItem__setCheckable_IMPL_22312(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setCheckable_22312_ID,"android/view/MenuItem","setCheckable","(Z)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setCheckable could not be cached",77);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setCheckable_22312_ID, ((jboolean)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setChecked(Android_android_view_MenuItem* __this, bool arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setChecked_IMPL_22314(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_MenuItem__setChecked_IMPL_22314(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setChecked_22314_ID,"android/view/MenuItem","setChecked","(Z)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setChecked could not be cached",75);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setChecked_22314_ID, ((jboolean)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setEnabled(Android_android_view_MenuItem* __this, bool arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setEnabled_IMPL_22318(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_MenuItem__setEnabled_IMPL_22318(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setEnabled_22318_ID,"android/view/MenuItem","setEnabled","(Z)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setEnabled could not be cached",75);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setEnabled_22318_ID, ((jboolean)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setIcon(Android_android_view_MenuItem* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setIcon_IMPL_22302(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_MenuItem__setIcon_1(Android_android_view_MenuItem* __this, int arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setIcon_IMPL_22303(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_MenuItem__setIcon_IMPL_22302(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setIcon_22302_ID,"android/view/MenuItem","setIcon","(Landroid/graphics/drawable/Drawable;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setIcon could not be cached",72);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setIcon_22302_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setIcon_IMPL_22303(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setIcon_22303_ID,"android/view/MenuItem","setIcon","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setIcon could not be cached",72);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setIcon_22303_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setIntent(Android_android_view_MenuItem* __this, ::app::Android::android::content::Intent* arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setIntent_IMPL_22305(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_MenuItem__setIntent_IMPL_22305(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setIntent_22305_ID,"android/view/MenuItem","setIntent","(Landroid/content/Intent;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setIntent could not be cached",74);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setIntent_22305_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setNumericShortcut(Android_android_view_MenuItem* __this, ::uChar arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setNumericShortcut_IMPL_22308(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_MenuItem__setNumericShortcut_IMPL_22308(::uStatic* __this, bool arg0_, jobject arg1_, ::uChar arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setNumericShortcut_22308_ID,"android/view/MenuItem","setNumericShortcut","(C)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setNumericShortcut could not be cached",83);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setNumericShortcut_22308_ID, ((jchar)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setOnActionExpandListener(Android_android_view_MenuItem* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setOnActionExpandListener_IMPL_22334(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_MenuItem__setOnActionExpandListener_IMPL_22334(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setOnActionExpandListener_22334_ID,"android/view/MenuItem","setOnActionExpandListener","(Landroid/view/MenuItem$OnActionExpandListener;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setOnActionExpandListener could not be cached",90);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setOnActionExpandListener_22334_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setOnMenuItemClickListener(Android_android_view_MenuItem* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setOnMenuItemClickListener_IMPL_22322(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_MenuItem__setOnMenuItemClickListener_IMPL_22322(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setOnMenuItemClickListener_22322_ID,"android/view/MenuItem","setOnMenuItemClickListener","(Landroid/view/MenuItem$OnMenuItemClickListener;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setOnMenuItemClickListener could not be cached",91);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setOnMenuItemClickListener_22322_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setShortcut(Android_android_view_MenuItem* __this, ::uChar arg0, ::uChar arg1)
{
    return (::uObject*)Android_android_view_MenuItem__setShortcut_IMPL_22307(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

::uObject* Android_android_view_MenuItem__setShortcut_IMPL_22307(::uStatic* __this, bool arg0_, jobject arg1_, ::uChar arg2_, ::uChar arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setShortcut_22307_ID,"android/view/MenuItem","setShortcut","(CC)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setShortcut could not be cached",76);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setShortcut_22307_ID, ((jchar)arg2_), ((jchar)arg3_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_MenuItem__setShowAsAction(Android_android_view_MenuItem* __this, int arg0)
{
    Android_android_view_MenuItem__setShowAsAction_IMPL_22324(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_MenuItem__setShowAsAction_IMPL_22324(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setShowAsAction_22324_ID,"android/view/MenuItem","setShowAsAction","(I)V",GetMethodID,"Id for fallback method android.view.MenuItem.setShowAsAction could not be cached",80);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setShowAsAction_22324_ID, ((jint)arg2_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

::uObject* Android_android_view_MenuItem__setShowAsActionFlags(Android_android_view_MenuItem* __this, int arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setShowAsActionFlags_IMPL_22325(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_MenuItem__setShowAsActionFlags_IMPL_22325(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setShowAsActionFlags_22325_ID,"android/view/MenuItem","setShowAsActionFlags","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setShowAsActionFlags could not be cached",85);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setShowAsActionFlags_22325_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setTitle(Android_android_view_MenuItem* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setTitle_IMPL_22297(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_MenuItem__setTitle_1(Android_android_view_MenuItem* __this, int arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setTitle_IMPL_22298(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_MenuItem__setTitle_IMPL_22297(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setTitle_22297_ID,"android/view/MenuItem","setTitle","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setTitle could not be cached",73);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setTitle_22297_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setTitle_IMPL_22298(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setTitle_22298_ID,"android/view/MenuItem","setTitle","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setTitle could not be cached",73);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setTitle_22298_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setTitleCondensed(Android_android_view_MenuItem* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setTitleCondensed_IMPL_22300(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_MenuItem__setTitleCondensed_IMPL_22300(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setTitleCondensed_22300_ID,"android/view/MenuItem","setTitleCondensed","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setTitleCondensed could not be cached",82);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setTitleCondensed_22300_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_MenuItem__setVisible(Android_android_view_MenuItem* __this, bool arg0)
{
    return (::uObject*)Android_android_view_MenuItem__setVisible_IMPL_22316(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_MenuItem__setVisible_IMPL_22316(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItem__setVisible_22316_ID,"android/view/MenuItem","setVisible","(Z)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.MenuItem.setVisible could not be cached",75);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItem__setVisible_22316_ID, ((jboolean)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_22292_ID;
jmethodID Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_22291_ID;

Android_android_view_MenuItemDLROnActionExpandListener__uType* Android_android_view_MenuItemDLROnActionExpandListener__typeof()
{
    static ::uStaticStrong<Android_android_view_MenuItemDLROnActionExpandListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_MenuItemDLROnActionExpandListener__uType*)::uAllocClassType(sizeof(Android_android_view_MenuItemDLROnActionExpandListener__uType), "Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onMenuItemActionExpand = (bool(*)(void*, ::uObject*))Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand;
    type->__interface_2.__fp_onMenuItemActionCollapse = (bool(*)(void*, ::uObject*))Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_MenuItemDLROnActionExpandListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_MenuItemDLROnActionExpandListener__uType, __interface_1),
        ::app::Android::android::view::MenuItemDLROnActionExpandListener__typeof(), offsetof(Android_android_view_MenuItemDLROnActionExpandListener__uType, __interface_2));

    return type;
}

bool Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse(Android_android_view_MenuItemDLROnActionExpandListener* __this, ::uObject* arg0)
{
    return Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_IMPL_22292(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_IMPL_22292(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_22292_ID,"android/view/MenuItem$OnActionExpandListener","onMenuItemActionCollapse","(Landroid/view/MenuItem;)Z",GetMethodID,"Id for fallback method android.view.MenuItem$OnActionExpandListener.onMenuItemActionCollapse could not be cached",112);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionCollapse_22292_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand(Android_android_view_MenuItemDLROnActionExpandListener* __this, ::uObject* arg0)
{
    return Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_IMPL_22291(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_IMPL_22291(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_22291_ID,"android/view/MenuItem$OnActionExpandListener","onMenuItemActionExpand","(Landroid/view/MenuItem;)Z",GetMethodID,"Id for fallback method android.view.MenuItem$OnActionExpandListener.onMenuItemActionExpand could not be cached",110);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItemDLROnActionExpandListener__onMenuItemActionExpand_22291_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_22293_ID;

Android_android_view_MenuItemDLROnMenuItemClickListener__uType* Android_android_view_MenuItemDLROnMenuItemClickListener__typeof()
{
    static ::uStaticStrong<Android_android_view_MenuItemDLROnMenuItemClickListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_MenuItemDLROnMenuItemClickListener__uType*)::uAllocClassType(sizeof(Android_android_view_MenuItemDLROnMenuItemClickListener__uType), "Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemClickListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onMenuItemClick = (bool(*)(void*, ::uObject*))Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_MenuItemDLROnMenuItemClickListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_MenuItemDLROnMenuItemClickListener__uType, __interface_1),
        ::app::Android::android::view::MenuItemDLROnMenuItemClickListener__typeof(), offsetof(Android_android_view_MenuItemDLROnMenuItemClickListener__uType, __interface_2));

    return type;
}

bool Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick(Android_android_view_MenuItemDLROnMenuItemClickListener* __this, ::uObject* arg0)
{
    return Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_IMPL_22293(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_IMPL_22293(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_22293_ID,"android/view/MenuItem$OnMenuItemClickListener","onMenuItemClick","(Landroid/view/MenuItem;)Z",GetMethodID,"Id for fallback method android.view.MenuItem$OnMenuItemClickListener.onMenuItemClick could not be cached",104);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_MenuItemDLROnMenuItemClickListener__onMenuItemClick_22293_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_SubMenu__add_22256_ID;
jmethodID Android_android_view_SubMenu__add_22257_ID;
jmethodID Android_android_view_SubMenu__add_22258_ID;
jmethodID Android_android_view_SubMenu__add_22259_ID;
jmethodID Android_android_view_SubMenu__addIntentOptions_22264_ID;
jmethodID Android_android_view_SubMenu__addSubMenu_22260_ID;
jmethodID Android_android_view_SubMenu__addSubMenu_22261_ID;
jmethodID Android_android_view_SubMenu__addSubMenu_22262_ID;
jmethodID Android_android_view_SubMenu__addSubMenu_22263_ID;
jmethodID Android_android_view_SubMenu__clear_22267_ID;
jmethodID Android_android_view_SubMenu__clearHeader_22582_ID;
jmethodID Android_android_view_SubMenu__close_22275_ID;
jmethodID Android_android_view_SubMenu__findItem_22272_ID;
jmethodID Android_android_view_SubMenu__getItem_22274_ID;
jmethodID Android_android_view_SubMenu__getItem_22585_ID;
jmethodID Android_android_view_SubMenu__hasVisibleItems_22271_ID;
jmethodID Android_android_view_SubMenu__isShortcutKey_22277_ID;
jmethodID Android_android_view_SubMenu__performIdentifierAction_22278_ID;
jmethodID Android_android_view_SubMenu__performShortcut_22276_ID;
jmethodID Android_android_view_SubMenu__removeGroup_22266_ID;
jmethodID Android_android_view_SubMenu__removeItem_22265_ID;
jmethodID Android_android_view_SubMenu__setGroupCheckable_22268_ID;
jmethodID Android_android_view_SubMenu__setGroupEnabled_22270_ID;
jmethodID Android_android_view_SubMenu__setGroupVisible_22269_ID;
jmethodID Android_android_view_SubMenu__setHeaderIcon_22579_ID;
jmethodID Android_android_view_SubMenu__setHeaderIcon_22580_ID;
jmethodID Android_android_view_SubMenu__setHeaderTitle_22577_ID;
jmethodID Android_android_view_SubMenu__setHeaderTitle_22578_ID;
jmethodID Android_android_view_SubMenu__setHeaderView_22581_ID;
jmethodID Android_android_view_SubMenu__setIcon_22583_ID;
jmethodID Android_android_view_SubMenu__setIcon_22584_ID;
jmethodID Android_android_view_SubMenu__setQwertyMode_22279_ID;
jmethodID Android_android_view_SubMenu__size_22273_ID;

Android_android_view_SubMenu__uType* Android_android_view_SubMenu__typeof()
{
    static ::uStaticStrong<Android_android_view_SubMenu__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_SubMenu__uType*)::uAllocClassType(sizeof(Android_android_view_SubMenu__uType), "Android.Fallbacks.Android_android_view_SubMenu", false, 4, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_setHeaderTitle = (::uObject*(*)(void*, int))Android_android_view_SubMenu__setHeaderTitle;
    type->__interface_2.__fp_setHeaderTitle_1 = (::uObject*(*)(void*, ::uObject*))Android_android_view_SubMenu__setHeaderTitle_1;
    type->__interface_2.__fp_setHeaderIcon_1 = (::uObject*(*)(void*, int))Android_android_view_SubMenu__setHeaderIcon;
    type->__interface_2.__fp_setHeaderIcon = (::uObject*(*)(void*, ::app::Android::android::graphics::drawable::Drawable*))Android_android_view_SubMenu__setHeaderIcon_1;
    type->__interface_2.__fp_setHeaderView = (::uObject*(*)(void*, ::app::Android::android::view::View*))Android_android_view_SubMenu__setHeaderView;
    type->__interface_2.__fp_clearHeader = (void(*)(void*))Android_android_view_SubMenu__clearHeader;
    type->__interface_2.__fp_setIcon_1 = (::uObject*(*)(void*, int))Android_android_view_SubMenu__setIcon;
    type->__interface_2.__fp_setIcon = (::uObject*(*)(void*, ::app::Android::android::graphics::drawable::Drawable*))Android_android_view_SubMenu__setIcon_1;
    type->__interface_2.__fp_getItem = (::uObject*(*)(void*))Android_android_view_SubMenu__getItem;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;
    type->__interface_3.__fp_add = (::uObject*(*)(void*, ::uObject*))Android_android_view_SubMenu__add_3;
    type->__interface_3.__fp_add_1 = (::uObject*(*)(void*, int))Android_android_view_SubMenu__add;
    type->__interface_3.__fp_add_2 = (::uObject*(*)(void*, int, int, int, ::uObject*))Android_android_view_SubMenu__add_1;
    type->__interface_3.__fp_add_3 = (::uObject*(*)(void*, int, int, int, int))Android_android_view_SubMenu__add_2;
    type->__interface_3.__fp_addSubMenu = (::uObject*(*)(void*, ::uObject*))Android_android_view_SubMenu__addSubMenu;
    type->__interface_3.__fp_addSubMenu_1 = (::uObject*(*)(void*, int))Android_android_view_SubMenu__addSubMenu_1;
    type->__interface_3.__fp_addSubMenu_2 = (::uObject*(*)(void*, int, int, int, ::uObject*))Android_android_view_SubMenu__addSubMenu_2;
    type->__interface_3.__fp_addSubMenu_3 = (::uObject*(*)(void*, int, int, int, int))Android_android_view_SubMenu__addSubMenu_3;
    type->__interface_3.__fp_addIntentOptions = (int(*)(void*, int, int, int, ::app::Android::android::content::ComponentName*, ::app::Android::Runtime::ObjectArray__Android_android_content_Intent*, ::app::Android::android::content::Intent*, int, ::app::Android::Runtime::ObjectArray__Android_android_view_MenuItem*))Android_android_view_SubMenu__addIntentOptions;
    type->__interface_3.__fp_removeItem = (void(*)(void*, int))Android_android_view_SubMenu__removeItem;
    type->__interface_3.__fp_removeGroup = (void(*)(void*, int))Android_android_view_SubMenu__removeGroup;
    type->__interface_3.__fp_clear = (void(*)(void*))Android_android_view_SubMenu__clear;
    type->__interface_3.__fp_setGroupCheckable = (void(*)(void*, int, bool, bool))Android_android_view_SubMenu__setGroupCheckable;
    type->__interface_3.__fp_setGroupVisible = (void(*)(void*, int, bool))Android_android_view_SubMenu__setGroupVisible;
    type->__interface_3.__fp_setGroupEnabled = (void(*)(void*, int, bool))Android_android_view_SubMenu__setGroupEnabled;
    type->__interface_3.__fp_hasVisibleItems = (bool(*)(void*))Android_android_view_SubMenu__hasVisibleItems;
    type->__interface_3.__fp_findItem = (::uObject*(*)(void*, int))Android_android_view_SubMenu__findItem;
    type->__interface_3.__fp_size = (int(*)(void*))Android_android_view_SubMenu__size;
    type->__interface_3.__fp_getItem = (::uObject*(*)(void*, int))Android_android_view_SubMenu__getItem_1;
    type->__interface_3.__fp_close = (void(*)(void*))Android_android_view_SubMenu__close;
    type->__interface_3.__fp_performShortcut = (bool(*)(void*, int, ::app::Android::android::view::KeyEvent*, int))Android_android_view_SubMenu__performShortcut;
    type->__interface_3.__fp_isShortcutKey = (bool(*)(void*, int, ::app::Android::android::view::KeyEvent*))Android_android_view_SubMenu__isShortcutKey;
    type->__interface_3.__fp_performIdentifierAction = (bool(*)(void*, int, int))Android_android_view_SubMenu__performIdentifierAction;
    type->__interface_3.__fp_setQwertyMode = (void(*)(void*, bool))Android_android_view_SubMenu__setQwertyMode;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_SubMenu__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_SubMenu__uType, __interface_1),
        ::app::Android::android::view::SubMenu__typeof(), offsetof(Android_android_view_SubMenu__uType, __interface_2),
        ::app::Android::android::view::Menu__typeof(), offsetof(Android_android_view_SubMenu__uType, __interface_3));

    return type;
}

::uObject* Android_android_view_SubMenu__add(Android_android_view_SubMenu* __this, int arg0)
{
    return (::uObject*)Android_android_view_SubMenu__add_IMPL_22257(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_SubMenu__add_1(Android_android_view_SubMenu* __this, int arg0, int arg1, int arg2, ::uObject* arg3)
{
    return (::uObject*)Android_android_view_SubMenu__add_IMPL_22258(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, (::uObject*)arg3);
}

::uObject* Android_android_view_SubMenu__add_2(Android_android_view_SubMenu* __this, int arg0, int arg1, int arg2, int arg3)
{
    return (::uObject*)Android_android_view_SubMenu__add_IMPL_22259(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

::uObject* Android_android_view_SubMenu__add_3(Android_android_view_SubMenu* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_view_SubMenu__add_IMPL_22256(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_SubMenu__add_IMPL_22256(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__add_22256_ID,"android/view/SubMenu","add","(Ljava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.add could not be cached",67);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__add_22256_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__add_IMPL_22257(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__add_22257_ID,"android/view/SubMenu","add","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.add could not be cached",67);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__add_22257_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__add_IMPL_22258(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, ::uObject* arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__add_22258_ID,"android/view/SubMenu","add","(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.add could not be cached",67);
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__add_22258_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__add_IMPL_22259(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__add_22259_ID,"android/view/SubMenu","add","(IIII)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.add could not be cached",67);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__add_22259_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_android_view_SubMenu__addIntentOptions(Android_android_view_SubMenu* __this, int arg0, int arg1, int arg2, ::app::Android::android::content::ComponentName* arg3, ::app::Android::Runtime::ObjectArray__Android_android_content_Intent* arg4, ::app::Android::android::content::Intent* arg5, int arg6, ::app::Android::Runtime::ObjectArray__Android_android_view_MenuItem* arg7)
{
    return Android_android_view_SubMenu__addIntentOptions_IMPL_22264(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, (::uObject*)arg3, (::uObject*)arg4, (::uObject*)arg5, arg6, (::uObject*)arg7);
}

int Android_android_view_SubMenu__addIntentOptions_IMPL_22264(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, ::uObject* arg5_, ::uObject* arg6_, ::uObject* arg7_, int arg8_, ::uObject* arg9_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__addIntentOptions_22264_ID,"android/view/SubMenu","addIntentOptions","(IIILandroid/content/ComponentName;[Landroid/content/Intent;Landroid/content/Intent;I[Landroid/view/MenuItem;)I",GetMethodID,"Id for fallback method android.view.SubMenu.addIntentOptions could not be cached",80);
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    jobject _obArg6 = ((!arg6_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg6_));
    jobject _obArg7 = ((!arg7_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg7_));
    jobject _obArg9 = ((!arg9_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg9_));
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__addIntentOptions_22264_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5, _obArg6, _obArg7, ((jint)arg8_), _obArg9));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__addSubMenu(Android_android_view_SubMenu* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_view_SubMenu__addSubMenu_IMPL_22260(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_SubMenu__addSubMenu_1(Android_android_view_SubMenu* __this, int arg0)
{
    return (::uObject*)Android_android_view_SubMenu__addSubMenu_IMPL_22261(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_SubMenu__addSubMenu_2(Android_android_view_SubMenu* __this, int arg0, int arg1, int arg2, ::uObject* arg3)
{
    return (::uObject*)Android_android_view_SubMenu__addSubMenu_IMPL_22262(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, (::uObject*)arg3);
}

::uObject* Android_android_view_SubMenu__addSubMenu_3(Android_android_view_SubMenu* __this, int arg0, int arg1, int arg2, int arg3)
{
    return (::uObject*)Android_android_view_SubMenu__addSubMenu_IMPL_22263(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2, arg3);
}

::uObject* Android_android_view_SubMenu__addSubMenu_IMPL_22260(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__addSubMenu_22260_ID,"android/view/SubMenu","addSubMenu","(Ljava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.addSubMenu could not be cached",74);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__addSubMenu_22260_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__addSubMenu_IMPL_22261(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__addSubMenu_22261_ID,"android/view/SubMenu","addSubMenu","(I)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.addSubMenu could not be cached",74);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__addSubMenu_22261_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__addSubMenu_IMPL_22262(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, ::uObject* arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__addSubMenu_22262_ID,"android/view/SubMenu","addSubMenu","(IIILjava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.addSubMenu could not be cached",74);
    jobject _obArg5 = ((!arg5_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg5_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__addSubMenu_22262_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), _obArg5),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__addSubMenu_IMPL_22263(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__addSubMenu_22263_ID,"android/view/SubMenu","addSubMenu","(IIII)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.addSubMenu could not be cached",74);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__addSubMenu_22263_ID, ((jint)arg2_), ((jint)arg3_), ((jint)arg4_), ((jint)arg5_)),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_SubMenu__clear(Android_android_view_SubMenu* __this)
{
    Android_android_view_SubMenu__clear_IMPL_22267(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_view_SubMenu__clear_IMPL_22267(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__clear_22267_ID,"android/view/SubMenu","clear","()V",GetMethodID,"Id for fallback method android.view.SubMenu.clear could not be cached",69);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__clear_22267_ID);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_SubMenu__clearHeader(Android_android_view_SubMenu* __this)
{
    Android_android_view_SubMenu__clearHeader_IMPL_22582(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_view_SubMenu__clearHeader_IMPL_22582(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__clearHeader_22582_ID,"android/view/SubMenu","clearHeader","()V",GetMethodID,"Id for fallback method android.view.SubMenu.clearHeader could not be cached",75);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__clearHeader_22582_ID);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_SubMenu__close(Android_android_view_SubMenu* __this)
{
    Android_android_view_SubMenu__close_IMPL_22275(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_view_SubMenu__close_IMPL_22275(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__close_22275_ID,"android/view/SubMenu","close","()V",GetMethodID,"Id for fallback method android.view.SubMenu.close could not be cached",69);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__close_22275_ID);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

::uObject* Android_android_view_SubMenu__findItem(Android_android_view_SubMenu* __this, int arg0)
{
    return (::uObject*)Android_android_view_SubMenu__findItem_IMPL_22272(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_SubMenu__findItem_IMPL_22272(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__findItem_22272_ID,"android/view/SubMenu","findItem","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.findItem could not be cached",72);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__findItem_22272_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__getItem(Android_android_view_SubMenu* __this)
{
    return (::uObject*)Android_android_view_SubMenu__getItem_IMPL_22585(NULL, __this->_subclassed, __this->_javaObject);
}

::uObject* Android_android_view_SubMenu__getItem_1(Android_android_view_SubMenu* __this, int arg0)
{
    return (::uObject*)Android_android_view_SubMenu__getItem_IMPL_22274(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_SubMenu__getItem_IMPL_22274(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__getItem_22274_ID,"android/view/SubMenu","getItem","(I)Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.getItem could not be cached",71);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__getItem_22274_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__getItem_IMPL_22585(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__getItem_22585_ID,"android/view/SubMenu","getItem","()Landroid/view/MenuItem;",GetMethodID,"Id for fallback method android.view.SubMenu.getItem could not be cached",71);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__getItem_22585_ID),result,::app::Android::Fallbacks::Android_android_view_MenuItem__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_SubMenu__hasVisibleItems(Android_android_view_SubMenu* __this)
{
    return Android_android_view_SubMenu__hasVisibleItems_IMPL_22271(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_SubMenu__hasVisibleItems_IMPL_22271(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__hasVisibleItems_22271_ID,"android/view/SubMenu","hasVisibleItems","()Z",GetMethodID,"Id for fallback method android.view.SubMenu.hasVisibleItems could not be cached",79);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__hasVisibleItems_22271_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_SubMenu__isShortcutKey(Android_android_view_SubMenu* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1)
{
    return Android_android_view_SubMenu__isShortcutKey_IMPL_22277(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1);
}

bool Android_android_view_SubMenu__isShortcutKey_IMPL_22277(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__isShortcutKey_22277_ID,"android/view/SubMenu","isShortcutKey","(ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.view.SubMenu.isShortcutKey could not be cached",77);
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__isShortcutKey_22277_ID, ((jint)arg2_), _obArg3));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_SubMenu__performIdentifierAction(Android_android_view_SubMenu* __this, int arg0, int arg1)
{
    return Android_android_view_SubMenu__performIdentifierAction_IMPL_22278(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

bool Android_android_view_SubMenu__performIdentifierAction_IMPL_22278(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__performIdentifierAction_22278_ID,"android/view/SubMenu","performIdentifierAction","(II)Z",GetMethodID,"Id for fallback method android.view.SubMenu.performIdentifierAction could not be cached",87);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__performIdentifierAction_22278_ID, ((jint)arg2_), ((jint)arg3_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_SubMenu__performShortcut(Android_android_view_SubMenu* __this, int arg0, ::app::Android::android::view::KeyEvent* arg1, int arg2)
{
    return Android_android_view_SubMenu__performShortcut_IMPL_22276(NULL, __this->_subclassed, __this->_javaObject, arg0, (::uObject*)arg1, arg2);
}

bool Android_android_view_SubMenu__performShortcut_IMPL_22276(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, ::uObject* arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__performShortcut_22276_ID,"android/view/SubMenu","performShortcut","(ILandroid/view/KeyEvent;I)Z",GetMethodID,"Id for fallback method android.view.SubMenu.performShortcut could not be cached",79);
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__performShortcut_22276_ID, ((jint)arg2_), _obArg3, ((jint)arg4_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_SubMenu__removeGroup(Android_android_view_SubMenu* __this, int arg0)
{
    Android_android_view_SubMenu__removeGroup_IMPL_22266(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_SubMenu__removeGroup_IMPL_22266(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__removeGroup_22266_ID,"android/view/SubMenu","removeGroup","(I)V",GetMethodID,"Id for fallback method android.view.SubMenu.removeGroup could not be cached",75);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__removeGroup_22266_ID, ((jint)arg2_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_SubMenu__removeItem(Android_android_view_SubMenu* __this, int arg0)
{
    Android_android_view_SubMenu__removeItem_IMPL_22265(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_SubMenu__removeItem_IMPL_22265(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__removeItem_22265_ID,"android/view/SubMenu","removeItem","(I)V",GetMethodID,"Id for fallback method android.view.SubMenu.removeItem could not be cached",74);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__removeItem_22265_ID, ((jint)arg2_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_SubMenu__setGroupCheckable(Android_android_view_SubMenu* __this, int arg0, bool arg1, bool arg2)
{
    Android_android_view_SubMenu__setGroupCheckable_IMPL_22268(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1, arg2);
}

void Android_android_view_SubMenu__setGroupCheckable_IMPL_22268(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, bool arg3_, bool arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setGroupCheckable_22268_ID,"android/view/SubMenu","setGroupCheckable","(IZZ)V",GetMethodID,"Id for fallback method android.view.SubMenu.setGroupCheckable could not be cached",81);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setGroupCheckable_22268_ID, ((jint)arg2_), ((jboolean)arg3_), ((jboolean)arg4_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_SubMenu__setGroupEnabled(Android_android_view_SubMenu* __this, int arg0, bool arg1)
{
    Android_android_view_SubMenu__setGroupEnabled_IMPL_22270(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void Android_android_view_SubMenu__setGroupEnabled_IMPL_22270(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setGroupEnabled_22270_ID,"android/view/SubMenu","setGroupEnabled","(IZ)V",GetMethodID,"Id for fallback method android.view.SubMenu.setGroupEnabled could not be cached",79);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setGroupEnabled_22270_ID, ((jint)arg2_), ((jboolean)arg3_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_SubMenu__setGroupVisible(Android_android_view_SubMenu* __this, int arg0, bool arg1)
{
    Android_android_view_SubMenu__setGroupVisible_IMPL_22269(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void Android_android_view_SubMenu__setGroupVisible_IMPL_22269(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setGroupVisible_22269_ID,"android/view/SubMenu","setGroupVisible","(IZ)V",GetMethodID,"Id for fallback method android.view.SubMenu.setGroupVisible could not be cached",79);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setGroupVisible_22269_ID, ((jint)arg2_), ((jboolean)arg3_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

::uObject* Android_android_view_SubMenu__setHeaderIcon(Android_android_view_SubMenu* __this, int arg0)
{
    return (::uObject*)Android_android_view_SubMenu__setHeaderIcon_IMPL_22579(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_SubMenu__setHeaderIcon_1(Android_android_view_SubMenu* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    return (::uObject*)Android_android_view_SubMenu__setHeaderIcon_IMPL_22580(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_SubMenu__setHeaderIcon_IMPL_22579(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setHeaderIcon_22579_ID,"android/view/SubMenu","setHeaderIcon","(I)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setHeaderIcon could not be cached",77);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setHeaderIcon_22579_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__setHeaderIcon_IMPL_22580(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setHeaderIcon_22580_ID,"android/view/SubMenu","setHeaderIcon","(Landroid/graphics/drawable/Drawable;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setHeaderIcon could not be cached",77);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setHeaderIcon_22580_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__setHeaderTitle(Android_android_view_SubMenu* __this, int arg0)
{
    return (::uObject*)Android_android_view_SubMenu__setHeaderTitle_IMPL_22577(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_SubMenu__setHeaderTitle_1(Android_android_view_SubMenu* __this, ::uObject* arg0)
{
    return (::uObject*)Android_android_view_SubMenu__setHeaderTitle_IMPL_22578(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_SubMenu__setHeaderTitle_IMPL_22577(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setHeaderTitle_22577_ID,"android/view/SubMenu","setHeaderTitle","(I)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setHeaderTitle could not be cached",78);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setHeaderTitle_22577_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__setHeaderTitle_IMPL_22578(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setHeaderTitle_22578_ID,"android/view/SubMenu","setHeaderTitle","(Ljava/lang/CharSequence;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setHeaderTitle could not be cached",78);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setHeaderTitle_22578_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__setHeaderView(Android_android_view_SubMenu* __this, ::app::Android::android::view::View* arg0)
{
    return (::uObject*)Android_android_view_SubMenu__setHeaderView_IMPL_22581(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_SubMenu__setHeaderView_IMPL_22581(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setHeaderView_22581_ID,"android/view/SubMenu","setHeaderView","(Landroid/view/View;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setHeaderView could not be cached",77);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setHeaderView_22581_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__setIcon(Android_android_view_SubMenu* __this, int arg0)
{
    return (::uObject*)Android_android_view_SubMenu__setIcon_IMPL_22583(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uObject* Android_android_view_SubMenu__setIcon_1(Android_android_view_SubMenu* __this, ::app::Android::android::graphics::drawable::Drawable* arg0)
{
    return (::uObject*)Android_android_view_SubMenu__setIcon_IMPL_22584(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

::uObject* Android_android_view_SubMenu__setIcon_IMPL_22583(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setIcon_22583_ID,"android/view/SubMenu","setIcon","(I)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setIcon could not be cached",71);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setIcon_22583_ID, ((jint)arg2_)),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SubMenu__setIcon_IMPL_22584(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setIcon_22584_ID,"android/view/SubMenu","setIcon","(Landroid/graphics/drawable/Drawable;)Landroid/view/SubMenu;",GetMethodID,"Id for fallback method android.view.SubMenu.setIcon could not be cached",71);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setIcon_22584_ID, _obArg2),result,::app::Android::Fallbacks::Android_android_view_SubMenu__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_SubMenu__setQwertyMode(Android_android_view_SubMenu* __this, bool arg0)
{
    Android_android_view_SubMenu__setQwertyMode_IMPL_22279(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_SubMenu__setQwertyMode_IMPL_22279(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__setQwertyMode_22279_ID,"android/view/SubMenu","setQwertyMode","(Z)V",GetMethodID,"Id for fallback method android.view.SubMenu.setQwertyMode could not be cached",77);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__setQwertyMode_22279_ID, ((jboolean)arg2_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

int Android_android_view_SubMenu__size(Android_android_view_SubMenu* __this)
{
    return Android_android_view_SubMenu__size_IMPL_22273(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_android_view_SubMenu__size_IMPL_22273(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SubMenu__size_22273_ID,"android/view/SubMenu","size","()I",GetMethodID,"Id for fallback method android.view.SubMenu.size could not be cached",68);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SubMenu__size_22273_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_SurfaceHolder__addCallback_22610_ID;
jmethodID Android_android_view_SurfaceHolder__getSurface_22622_ID;
jmethodID Android_android_view_SurfaceHolder__getSurfaceFrame_22621_ID;
jmethodID Android_android_view_SurfaceHolder__isCreating_22612_ID;
jmethodID Android_android_view_SurfaceHolder__lockCanvas_22618_ID;
jmethodID Android_android_view_SurfaceHolder__lockCanvas_22619_ID;
jmethodID Android_android_view_SurfaceHolder__removeCallback_22611_ID;
jmethodID Android_android_view_SurfaceHolder__setFixedSize_22614_ID;
jmethodID Android_android_view_SurfaceHolder__setFormat_22616_ID;
jmethodID Android_android_view_SurfaceHolder__setKeepScreenOn_22617_ID;
jmethodID Android_android_view_SurfaceHolder__setSizeFromLayout_22615_ID;
jmethodID Android_android_view_SurfaceHolder__setType_22613_ID;
jmethodID Android_android_view_SurfaceHolder__unlockCanvasAndPost_22620_ID;

Android_android_view_SurfaceHolder__uType* Android_android_view_SurfaceHolder__typeof()
{
    static ::uStaticStrong<Android_android_view_SurfaceHolder__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_SurfaceHolder__uType*)::uAllocClassType(sizeof(Android_android_view_SurfaceHolder__uType), "Android.Fallbacks.Android_android_view_SurfaceHolder", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_addCallback = (void(*)(void*, ::uObject*))Android_android_view_SurfaceHolder__addCallback;
    type->__interface_2.__fp_removeCallback = (void(*)(void*, ::uObject*))Android_android_view_SurfaceHolder__removeCallback;
    type->__interface_2.__fp_isCreating = (bool(*)(void*))Android_android_view_SurfaceHolder__isCreating;
    type->__interface_2.__fp_setType = (void(*)(void*, int))Android_android_view_SurfaceHolder__setType;
    type->__interface_2.__fp_setFixedSize = (void(*)(void*, int, int))Android_android_view_SurfaceHolder__setFixedSize;
    type->__interface_2.__fp_setSizeFromLayout = (void(*)(void*))Android_android_view_SurfaceHolder__setSizeFromLayout;
    type->__interface_2.__fp_setFormat = (void(*)(void*, int))Android_android_view_SurfaceHolder__setFormat;
    type->__interface_2.__fp_setKeepScreenOn = (void(*)(void*, bool))Android_android_view_SurfaceHolder__setKeepScreenOn;
    type->__interface_2.__fp_lockCanvas_1 = (::app::Android::android::graphics::Canvas*(*)(void*))Android_android_view_SurfaceHolder__lockCanvas_1;
    type->__interface_2.__fp_lockCanvas = (::app::Android::android::graphics::Canvas*(*)(void*, ::app::Android::android::graphics::Rect*))Android_android_view_SurfaceHolder__lockCanvas;
    type->__interface_2.__fp_unlockCanvasAndPost = (void(*)(void*, ::app::Android::android::graphics::Canvas*))Android_android_view_SurfaceHolder__unlockCanvasAndPost;
    type->__interface_2.__fp_getSurfaceFrame = (::app::Android::android::graphics::Rect*(*)(void*))Android_android_view_SurfaceHolder__getSurfaceFrame;
    type->__interface_2.__fp_getSurface = (::app::Android::android::view::Surface*(*)(void*))Android_android_view_SurfaceHolder__getSurface;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_SurfaceHolder__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_SurfaceHolder__uType, __interface_1),
        ::app::Android::android::view::SurfaceHolder__typeof(), offsetof(Android_android_view_SurfaceHolder__uType, __interface_2));

    return type;
}

void Android_android_view_SurfaceHolder__addCallback(Android_android_view_SurfaceHolder* __this, ::uObject* arg0)
{
    Android_android_view_SurfaceHolder__addCallback_IMPL_22610(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_SurfaceHolder__addCallback_IMPL_22610(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__addCallback_22610_ID,"android/view/SurfaceHolder","addCallback","(Landroid/view/SurfaceHolder$Callback;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.addCallback could not be cached",81);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__addCallback_22610_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

::app::Android::android::view::Surface* Android_android_view_SurfaceHolder__getSurface(Android_android_view_SurfaceHolder* __this)
{
    return ::uCast< ::app::Android::android::view::Surface*>(Android_android_view_SurfaceHolder__getSurface_IMPL_22622(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::view::Surface__typeof());
}

::uObject* Android_android_view_SurfaceHolder__getSurface_IMPL_22622(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__getSurface_22622_ID,"android/view/SurfaceHolder","getSurface","()Landroid/view/Surface;",GetMethodID,"Id for fallback method android.view.SurfaceHolder.getSurface could not be cached",80);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__getSurface_22622_ID),result,::app::Android::android::view::Surface__typeof(),::app::Android::android::view::Surface*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::graphics::Rect* Android_android_view_SurfaceHolder__getSurfaceFrame(Android_android_view_SurfaceHolder* __this)
{
    return ::uCast< ::app::Android::android::graphics::Rect*>(Android_android_view_SurfaceHolder__getSurfaceFrame_IMPL_22621(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::graphics::Rect__typeof());
}

::uObject* Android_android_view_SurfaceHolder__getSurfaceFrame_IMPL_22621(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__getSurfaceFrame_22621_ID,"android/view/SurfaceHolder","getSurfaceFrame","()Landroid/graphics/Rect;",GetMethodID,"Id for fallback method android.view.SurfaceHolder.getSurfaceFrame could not be cached",85);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__getSurfaceFrame_22621_ID),result,::app::Android::android::graphics::Rect__typeof(),::app::Android::android::graphics::Rect*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

bool Android_android_view_SurfaceHolder__isCreating(Android_android_view_SurfaceHolder* __this)
{
    return Android_android_view_SurfaceHolder__isCreating_IMPL_22612(NULL, __this->_subclassed, __this->_javaObject);
}

bool Android_android_view_SurfaceHolder__isCreating_IMPL_22612(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__isCreating_22612_ID,"android/view/SurfaceHolder","isCreating","()Z",GetMethodID,"Id for fallback method android.view.SurfaceHolder.isCreating could not be cached",80);
    
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__isCreating_22612_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::android::graphics::Canvas* Android_android_view_SurfaceHolder__lockCanvas(Android_android_view_SurfaceHolder* __this, ::app::Android::android::graphics::Rect* arg0)
{
    return ::uCast< ::app::Android::android::graphics::Canvas*>(Android_android_view_SurfaceHolder__lockCanvas_IMPL_22619(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0), ::app::Android::android::graphics::Canvas__typeof());
}

::app::Android::android::graphics::Canvas* Android_android_view_SurfaceHolder__lockCanvas_1(Android_android_view_SurfaceHolder* __this)
{
    return ::uCast< ::app::Android::android::graphics::Canvas*>(Android_android_view_SurfaceHolder__lockCanvas_IMPL_22618(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::android::graphics::Canvas__typeof());
}

::uObject* Android_android_view_SurfaceHolder__lockCanvas_IMPL_22618(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__lockCanvas_22618_ID,"android/view/SurfaceHolder","lockCanvas","()Landroid/graphics/Canvas;",GetMethodID,"Id for fallback method android.view.SurfaceHolder.lockCanvas could not be cached",80);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__lockCanvas_22618_ID),result,::app::Android::android::graphics::Canvas__typeof(),::app::Android::android::graphics::Canvas*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_android_view_SurfaceHolder__lockCanvas_IMPL_22619(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__lockCanvas_22619_ID,"android/view/SurfaceHolder","lockCanvas","(Landroid/graphics/Rect;)Landroid/graphics/Canvas;",GetMethodID,"Id for fallback method android.view.SurfaceHolder.lockCanvas could not be cached",80);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__lockCanvas_22619_ID, _obArg2),result,::app::Android::android::graphics::Canvas__typeof(),::app::Android::android::graphics::Canvas*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_SurfaceHolder__removeCallback(Android_android_view_SurfaceHolder* __this, ::uObject* arg0)
{
    Android_android_view_SurfaceHolder__removeCallback_IMPL_22611(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_SurfaceHolder__removeCallback_IMPL_22611(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__removeCallback_22611_ID,"android/view/SurfaceHolder","removeCallback","(Landroid/view/SurfaceHolder$Callback;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.removeCallback could not be cached",84);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__removeCallback_22611_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolder__setFixedSize(Android_android_view_SurfaceHolder* __this, int arg0, int arg1)
{
    Android_android_view_SurfaceHolder__setFixedSize_IMPL_22614(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

void Android_android_view_SurfaceHolder__setFixedSize_IMPL_22614(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__setFixedSize_22614_ID,"android/view/SurfaceHolder","setFixedSize","(II)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.setFixedSize could not be cached",82);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__setFixedSize_22614_ID, ((jint)arg2_), ((jint)arg3_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolder__setFormat(Android_android_view_SurfaceHolder* __this, int arg0)
{
    Android_android_view_SurfaceHolder__setFormat_IMPL_22616(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_SurfaceHolder__setFormat_IMPL_22616(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__setFormat_22616_ID,"android/view/SurfaceHolder","setFormat","(I)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.setFormat could not be cached",79);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__setFormat_22616_ID, ((jint)arg2_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolder__setKeepScreenOn(Android_android_view_SurfaceHolder* __this, bool arg0)
{
    Android_android_view_SurfaceHolder__setKeepScreenOn_IMPL_22617(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_SurfaceHolder__setKeepScreenOn_IMPL_22617(::uStatic* __this, bool arg0_, jobject arg1_, bool arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__setKeepScreenOn_22617_ID,"android/view/SurfaceHolder","setKeepScreenOn","(Z)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.setKeepScreenOn could not be cached",85);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__setKeepScreenOn_22617_ID, ((jboolean)arg2_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolder__setSizeFromLayout(Android_android_view_SurfaceHolder* __this)
{
    Android_android_view_SurfaceHolder__setSizeFromLayout_IMPL_22615(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_android_view_SurfaceHolder__setSizeFromLayout_IMPL_22615(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__setSizeFromLayout_22615_ID,"android/view/SurfaceHolder","setSizeFromLayout","()V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.setSizeFromLayout could not be cached",87);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__setSizeFromLayout_22615_ID);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolder__setType(Android_android_view_SurfaceHolder* __this, int arg0)
{
    Android_android_view_SurfaceHolder__setType_IMPL_22613(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

void Android_android_view_SurfaceHolder__setType_IMPL_22613(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__setType_22613_ID,"android/view/SurfaceHolder","setType","(I)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.setType could not be cached",77);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__setType_22613_ID, ((jint)arg2_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolder__unlockCanvasAndPost(Android_android_view_SurfaceHolder* __this, ::app::Android::android::graphics::Canvas* arg0)
{
    Android_android_view_SurfaceHolder__unlockCanvasAndPost_IMPL_22620(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_SurfaceHolder__unlockCanvasAndPost_IMPL_22620(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolder__unlockCanvasAndPost_22620_ID,"android/view/SurfaceHolder","unlockCanvasAndPost","(Landroid/graphics/Canvas;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder.unlockCanvasAndPost could not be cached",89);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__unlockCanvasAndPost_22620_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_SurfaceHolderDLRCallback__surfaceChanged_22607_ID;
jmethodID Android_android_view_SurfaceHolderDLRCallback__surfaceCreated_22606_ID;
jmethodID Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed_22608_ID;

Android_android_view_SurfaceHolderDLRCallback__uType* Android_android_view_SurfaceHolderDLRCallback__typeof()
{
    static ::uStaticStrong<Android_android_view_SurfaceHolderDLRCallback__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_SurfaceHolderDLRCallback__uType*)::uAllocClassType(sizeof(Android_android_view_SurfaceHolderDLRCallback__uType), "Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_surfaceCreated = (void(*)(void*, ::uObject*))Android_android_view_SurfaceHolderDLRCallback__surfaceCreated;
    type->__interface_2.__fp_surfaceChanged = (void(*)(void*, ::uObject*, int, int, int))Android_android_view_SurfaceHolderDLRCallback__surfaceChanged;
    type->__interface_2.__fp_surfaceDestroyed = (void(*)(void*, ::uObject*))Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_SurfaceHolderDLRCallback__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_SurfaceHolderDLRCallback__uType, __interface_1),
        ::app::Android::android::view::SurfaceHolderDLRCallback__typeof(), offsetof(Android_android_view_SurfaceHolderDLRCallback__uType, __interface_2));

    return type;
}

void Android_android_view_SurfaceHolderDLRCallback__surfaceChanged(Android_android_view_SurfaceHolderDLRCallback* __this, ::uObject* arg0, int arg1, int arg2, int arg3)
{
    Android_android_view_SurfaceHolderDLRCallback__surfaceChanged_IMPL_22607(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2, arg3);
}

void Android_android_view_SurfaceHolderDLRCallback__surfaceChanged_IMPL_22607(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback__surfaceChanged_22607_ID,"android/view/SurfaceHolder$Callback","surfaceChanged","(Landroid/view/SurfaceHolder;III)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder$Callback.surfaceChanged could not be cached",93);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback__surfaceChanged_22607_ID, _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolderDLRCallback__surfaceCreated(Android_android_view_SurfaceHolderDLRCallback* __this, ::uObject* arg0)
{
    Android_android_view_SurfaceHolderDLRCallback__surfaceCreated_IMPL_22606(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_SurfaceHolderDLRCallback__surfaceCreated_IMPL_22606(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback__surfaceCreated_22606_ID,"android/view/SurfaceHolder$Callback","surfaceCreated","(Landroid/view/SurfaceHolder;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder$Callback.surfaceCreated could not be cached",93);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback__surfaceCreated_22606_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed(Android_android_view_SurfaceHolderDLRCallback* __this, ::uObject* arg0)
{
    Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed_IMPL_22608(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed_IMPL_22608(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed_22608_ID,"android/view/SurfaceHolder$Callback","surfaceDestroyed","(Landroid/view/SurfaceHolder;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder$Callback.surfaceDestroyed could not be cached",95);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback__surfaceDestroyed_22608_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged_22607_ID;
jmethodID Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated_22606_ID;
jmethodID Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed_22608_ID;
jmethodID Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded_22609_ID;

Android_android_view_SurfaceHolderDLRCallback2__uType* Android_android_view_SurfaceHolderDLRCallback2__typeof()
{
    static ::uStaticStrong<Android_android_view_SurfaceHolderDLRCallback2__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_SurfaceHolderDLRCallback2__uType*)::uAllocClassType(sizeof(Android_android_view_SurfaceHolderDLRCallback2__uType), "Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2", false, 4, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_surfaceRedrawNeeded = (void(*)(void*, ::uObject*))Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;
    type->__interface_3.__fp_surfaceCreated = (void(*)(void*, ::uObject*))Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated;
    type->__interface_3.__fp_surfaceChanged = (void(*)(void*, ::uObject*, int, int, int))Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged;
    type->__interface_3.__fp_surfaceDestroyed = (void(*)(void*, ::uObject*))Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_SurfaceHolderDLRCallback2__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_SurfaceHolderDLRCallback2__uType, __interface_1),
        ::app::Android::android::view::SurfaceHolderDLRCallback2__typeof(), offsetof(Android_android_view_SurfaceHolderDLRCallback2__uType, __interface_2),
        ::app::Android::android::view::SurfaceHolderDLRCallback__typeof(), offsetof(Android_android_view_SurfaceHolderDLRCallback2__uType, __interface_3));

    return type;
}

void Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged(Android_android_view_SurfaceHolderDLRCallback2* __this, ::uObject* arg0, int arg1, int arg2, int arg3)
{
    Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged_IMPL_22607(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2, arg3);
}

void Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged_IMPL_22607(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_, int arg5_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged_22607_ID,"android/view/SurfaceHolder$Callback2","surfaceChanged","(Landroid/view/SurfaceHolder;III)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder$Callback2.surfaceChanged could not be cached",94);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2__surfaceChanged_22607_ID, _obArg2, ((jint)arg3_), ((jint)arg4_), ((jint)arg5_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated(Android_android_view_SurfaceHolderDLRCallback2* __this, ::uObject* arg0)
{
    Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated_IMPL_22606(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated_IMPL_22606(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated_22606_ID,"android/view/SurfaceHolder$Callback2","surfaceCreated","(Landroid/view/SurfaceHolder;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder$Callback2.surfaceCreated could not be cached",94);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2__surfaceCreated_22606_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed(Android_android_view_SurfaceHolderDLRCallback2* __this, ::uObject* arg0)
{
    Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed_IMPL_22608(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed_IMPL_22608(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed_22608_ID,"android/view/SurfaceHolder$Callback2","surfaceDestroyed","(Landroid/view/SurfaceHolder;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder$Callback2.surfaceDestroyed could not be cached",96);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2__surfaceDestroyed_22608_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded(Android_android_view_SurfaceHolderDLRCallback2* __this, ::uObject* arg0)
{
    Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded_IMPL_22609(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded_IMPL_22609(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded_22609_ID,"android/view/SurfaceHolder$Callback2","surfaceRedrawNeeded","(Landroid/view/SurfaceHolder;)V",GetMethodID,"Id for fallback method android.view.SurfaceHolder$Callback2.surfaceRedrawNeeded could not be cached",99);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2__surfaceRedrawNeeded_22609_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable_22642_ID;
jmethodID Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed_22644_ID;
jmethodID Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged_22643_ID;
jmethodID Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated_22645_ID;

Android_android_view_TextureViewDLRSurfaceTextureListener__uType* Android_android_view_TextureViewDLRSurfaceTextureListener__typeof()
{
    static ::uStaticStrong<Android_android_view_TextureViewDLRSurfaceTextureListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_TextureViewDLRSurfaceTextureListener__uType*)::uAllocClassType(sizeof(Android_android_view_TextureViewDLRSurfaceTextureListener__uType), "Android.Fallbacks.Android_android_view_TextureViewDLRSurfaceTextureListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onSurfaceTextureAvailable = (void(*)(void*, ::app::Android::android::graphics::SurfaceTexture*, int, int))Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable;
    type->__interface_2.__fp_onSurfaceTextureSizeChanged = (void(*)(void*, ::app::Android::android::graphics::SurfaceTexture*, int, int))Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged;
    type->__interface_2.__fp_onSurfaceTextureDestroyed = (bool(*)(void*, ::app::Android::android::graphics::SurfaceTexture*))Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed;
    type->__interface_2.__fp_onSurfaceTextureUpdated = (void(*)(void*, ::app::Android::android::graphics::SurfaceTexture*))Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_TextureViewDLRSurfaceTextureListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_TextureViewDLRSurfaceTextureListener__uType, __interface_1),
        ::app::Android::android::view::TextureViewDLRSurfaceTextureListener__typeof(), offsetof(Android_android_view_TextureViewDLRSurfaceTextureListener__uType, __interface_2));

    return type;
}

void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable(Android_android_view_TextureViewDLRSurfaceTextureListener* __this, ::app::Android::android::graphics::SurfaceTexture* arg0, int arg1, int arg2)
{
    Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable_IMPL_22642(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2);
}

void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable_IMPL_22642(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable_22642_ID,"android/view/TextureView$SurfaceTextureListener","onSurfaceTextureAvailable","(Landroid/graphics/SurfaceTexture;II)V",GetMethodID,"Id for fallback method android.view.TextureView$SurfaceTextureListener.onSurfaceTextureAvailable could not be cached",116);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureAvailable_22642_ID, _obArg2, ((jint)arg3_), ((jint)arg4_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

bool Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed(Android_android_view_TextureViewDLRSurfaceTextureListener* __this, ::app::Android::android::graphics::SurfaceTexture* arg0)
{
    return Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed_IMPL_22644(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

bool Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed_IMPL_22644(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed_22644_ID,"android/view/TextureView$SurfaceTextureListener","onSurfaceTextureDestroyed","(Landroid/graphics/SurfaceTexture;)Z",GetMethodID,"Id for fallback method android.view.TextureView$SurfaceTextureListener.onSurfaceTextureDestroyed could not be cached",116);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureDestroyed_22644_ID, _obArg2));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged(Android_android_view_TextureViewDLRSurfaceTextureListener* __this, ::app::Android::android::graphics::SurfaceTexture* arg0, int arg1, int arg2)
{
    Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged_IMPL_22643(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2);
}

void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged_IMPL_22643(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, int arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged_22643_ID,"android/view/TextureView$SurfaceTextureListener","onSurfaceTextureSizeChanged","(Landroid/graphics/SurfaceTexture;II)V",GetMethodID,"Id for fallback method android.view.TextureView$SurfaceTextureListener.onSurfaceTextureSizeChanged could not be cached",118);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureSizeChanged_22643_ID, _obArg2, ((jint)arg3_), ((jint)arg4_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated(Android_android_view_TextureViewDLRSurfaceTextureListener* __this, ::app::Android::android::graphics::SurfaceTexture* arg0)
{
    Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated_IMPL_22645(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated_IMPL_22645(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated_22645_ID,"android/view/TextureView$SurfaceTextureListener","onSurfaceTextureUpdated","(Landroid/graphics/SurfaceTexture;)V",GetMethodID,"Id for fallback method android.view.TextureView$SurfaceTextureListener.onSurfaceTextureUpdated could not be cached",114);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener__onSurfaceTextureUpdated_22645_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_ViewDLROnFocusChangeListener__onFocusChange_22722_ID;

Android_android_view_ViewDLROnFocusChangeListener__uType* Android_android_view_ViewDLROnFocusChangeListener__typeof()
{
    static ::uStaticStrong<Android_android_view_ViewDLROnFocusChangeListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ViewDLROnFocusChangeListener__uType*)::uAllocClassType(sizeof(Android_android_view_ViewDLROnFocusChangeListener__uType), "Android.Fallbacks.Android_android_view_ViewDLROnFocusChangeListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onFocusChange = (void(*)(void*, ::app::Android::android::view::View*, bool))Android_android_view_ViewDLROnFocusChangeListener__onFocusChange;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ViewDLROnFocusChangeListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ViewDLROnFocusChangeListener__uType, __interface_1),
        ::app::Android::android::view::ViewDLROnFocusChangeListener__typeof(), offsetof(Android_android_view_ViewDLROnFocusChangeListener__uType, __interface_2));

    return type;
}

void Android_android_view_ViewDLROnFocusChangeListener__onFocusChange(Android_android_view_ViewDLROnFocusChangeListener* __this, ::app::Android::android::view::View* arg0, bool arg1)
{
    Android_android_view_ViewDLROnFocusChangeListener__onFocusChange_IMPL_22722(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void Android_android_view_ViewDLROnFocusChangeListener__onFocusChange_IMPL_22722(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewDLROnFocusChangeListener__onFocusChange_22722_ID,"android/view/View$OnFocusChangeListener","onFocusChange","(Landroid/view/View;Z)V",GetMethodID,"Id for fallback method android.view.View$OnFocusChangeListener.onFocusChange could not be cached",96);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewDLROnFocusChangeListener__onFocusChange_22722_ID, _obArg2, ((jboolean)arg3_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_view_ViewDLROnTouchListener__onTouch_22729_ID;

Android_android_view_ViewDLROnTouchListener__uType* Android_android_view_ViewDLROnTouchListener__typeof()
{
    static ::uStaticStrong<Android_android_view_ViewDLROnTouchListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ViewDLROnTouchListener__uType*)::uAllocClassType(sizeof(Android_android_view_ViewDLROnTouchListener__uType), "Android.Fallbacks.Android_android_view_ViewDLROnTouchListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onTouch = (bool(*)(void*, ::app::Android::android::view::View*, ::app::Android::android::view::MotionEvent*))Android_android_view_ViewDLROnTouchListener__onTouch;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ViewDLROnTouchListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ViewDLROnTouchListener__uType, __interface_1),
        ::app::Android::android::view::ViewDLROnTouchListener__typeof(), offsetof(Android_android_view_ViewDLROnTouchListener__uType, __interface_2));

    return type;
}

bool Android_android_view_ViewDLROnTouchListener__onTouch(Android_android_view_ViewDLROnTouchListener* __this, ::app::Android::android::view::View* arg0, ::app::Android::android::view::MotionEvent* arg1)
{
    return Android_android_view_ViewDLROnTouchListener__onTouch_IMPL_22729(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, (::uObject*)arg1);
}

bool Android_android_view_ViewDLROnTouchListener__onTouch_IMPL_22729(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_view_ViewDLROnTouchListener__onTouch_22729_ID,"android/view/View$OnTouchListener","onTouch","(Landroid/view/View;Landroid/view/MotionEvent;)Z",GetMethodID,"Id for fallback method android.view.View$OnTouchListener.onTouch could not be cached",84);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg3 = ((!arg3_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg3_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_view_ViewDLROnTouchListener__onTouch_22729_ID, _obArg2, _obArg3));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_view_ViewGroup__uType* Android_android_view_ViewGroup__typeof()
{
    static ::uStaticStrong<Android_android_view_ViewGroup__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_view_ViewGroup__uType*)::uAllocClassType(sizeof(Android_android_view_ViewGroup__uType), "Android.Fallbacks.Android_android_view_ViewGroup", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::view::ViewGroup__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_view_ViewGroup__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_view_ViewGroup__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_widget_AbsSeekBar__uType* Android_android_widget_AbsSeekBar__typeof()
{
    static ::uStaticStrong<Android_android_widget_AbsSeekBar__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_widget_AbsSeekBar__uType*)::uAllocClassType(sizeof(Android_android_widget_AbsSeekBar__uType), "Android.Fallbacks.Android_android_widget_AbsSeekBar", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::widget::AbsSeekBar__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_widget_AbsSeekBar__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_widget_AbsSeekBar__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_android_widget_CompoundButton__uType* Android_android_widget_CompoundButton__typeof()
{
    static ::uStaticStrong<Android_android_widget_CompoundButton__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_widget_CompoundButton__uType*)::uAllocClassType(sizeof(Android_android_widget_CompoundButton__uType), "Android.Fallbacks.Android_android_widget_CompoundButton", false, 2, 0, 0);

    type->SetBaseType(::app::Android::android::widget::CompoundButton__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_widget_CompoundButton__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_widget_CompoundButton__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged_24924_ID;

Android_android_widget_CompoundButtonDLROnCheckedChangeListener__uType* Android_android_widget_CompoundButtonDLROnCheckedChangeListener__typeof()
{
    static ::uStaticStrong<Android_android_widget_CompoundButtonDLROnCheckedChangeListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_widget_CompoundButtonDLROnCheckedChangeListener__uType*)::uAllocClassType(sizeof(Android_android_widget_CompoundButtonDLROnCheckedChangeListener__uType), "Android.Fallbacks.Android_android_widget_CompoundButtonDLROnCheckedChangeListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onCheckedChanged = (void(*)(void*, ::app::Android::android::widget::CompoundButton*, bool))Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_widget_CompoundButtonDLROnCheckedChangeListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_widget_CompoundButtonDLROnCheckedChangeListener__uType, __interface_1),
        ::app::Android::android::widget::CompoundButtonDLROnCheckedChangeListener__typeof(), offsetof(Android_android_widget_CompoundButtonDLROnCheckedChangeListener__uType, __interface_2));

    return type;
}

void Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged(Android_android_widget_CompoundButtonDLROnCheckedChangeListener* __this, ::app::Android::android::widget::CompoundButton* arg0, bool arg1)
{
    Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged_IMPL_24924(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1);
}

void Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged_IMPL_24924(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, bool arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged_24924_ID,"android/widget/CompoundButton$OnCheckedChangeListener","onCheckedChanged","(Landroid/widget/CompoundButton;Z)V",GetMethodID,"Id for fallback method android.widget.CompoundButton$OnCheckedChangeListener.onCheckedChanged could not be cached",113);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_widget_CompoundButtonDLROnCheckedChangeListener__onCheckedChanged_24924_ID, _obArg2, ((jboolean)arg3_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged_26181_ID;
jmethodID Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch_26182_ID;
jmethodID Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch_26183_ID;

Android_android_widget_SeekBarDLROnSeekBarChangeListener__uType* Android_android_widget_SeekBarDLROnSeekBarChangeListener__typeof()
{
    static ::uStaticStrong<Android_android_widget_SeekBarDLROnSeekBarChangeListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_widget_SeekBarDLROnSeekBarChangeListener__uType*)::uAllocClassType(sizeof(Android_android_widget_SeekBarDLROnSeekBarChangeListener__uType), "Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarChangeListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onProgressChanged = (void(*)(void*, ::app::Android::android::widget::SeekBar*, int, bool))Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged;
    type->__interface_2.__fp_onStartTrackingTouch = (void(*)(void*, ::app::Android::android::widget::SeekBar*))Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch;
    type->__interface_2.__fp_onStopTrackingTouch = (void(*)(void*, ::app::Android::android::widget::SeekBar*))Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_widget_SeekBarDLROnSeekBarChangeListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_widget_SeekBarDLROnSeekBarChangeListener__uType, __interface_1),
        ::app::Android::android::widget::SeekBarDLROnSeekBarChangeListener__typeof(), offsetof(Android_android_widget_SeekBarDLROnSeekBarChangeListener__uType, __interface_2));

    return type;
}

void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged(Android_android_widget_SeekBarDLROnSeekBarChangeListener* __this, ::app::Android::android::widget::SeekBar* arg0, int arg1, bool arg2)
{
    Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged_IMPL_26181(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, arg2);
}

void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged_IMPL_26181(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, bool arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged_26181_ID,"android/widget/SeekBar$OnSeekBarChangeListener","onProgressChanged","(Landroid/widget/SeekBar;IZ)V",GetMethodID,"Id for fallback method android.widget.SeekBar$OnSeekBarChangeListener.onProgressChanged could not be cached",107);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_widget_SeekBarDLROnSeekBarChangeListener__onProgressChanged_26181_ID, _obArg2, ((jint)arg3_), ((jboolean)arg4_));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch(Android_android_widget_SeekBarDLROnSeekBarChangeListener* __this, ::app::Android::android::widget::SeekBar* arg0)
{
    Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch_IMPL_26182(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch_IMPL_26182(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch_26182_ID,"android/widget/SeekBar$OnSeekBarChangeListener","onStartTrackingTouch","(Landroid/widget/SeekBar;)V",GetMethodID,"Id for fallback method android.widget.SeekBar$OnSeekBarChangeListener.onStartTrackingTouch could not be cached",110);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStartTrackingTouch_26182_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch(Android_android_widget_SeekBarDLROnSeekBarChangeListener* __this, ::app::Android::android::widget::SeekBar* arg0)
{
    Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch_IMPL_26183(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0);
}

void Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch_IMPL_26183(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch_26183_ID,"android/widget/SeekBar$OnSeekBarChangeListener","onStopTrackingTouch","(Landroid/widget/SeekBar;)V",GetMethodID,"Id for fallback method android.widget.SeekBar$OnSeekBarChangeListener.onStopTrackingTouch could not be cached",109);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_android_widget_SeekBarDLROnSeekBarChangeListener__onStopTrackingTouch_26183_ID, _obArg2);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction_26520_ID;

Android_android_widget_TextViewDLROnEditorActionListener__uType* Android_android_widget_TextViewDLROnEditorActionListener__typeof()
{
    static ::uStaticStrong<Android_android_widget_TextViewDLROnEditorActionListener__uType*> type;
    if (type != NULL) return type;

    type = (Android_android_widget_TextViewDLROnEditorActionListener__uType*)::uAllocClassType(sizeof(Android_android_widget_TextViewDLROnEditorActionListener__uType), "Android.Fallbacks.Android_android_widget_TextViewDLROnEditorActionListener", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_onEditorAction = (bool(*)(void*, ::app::Android::android::widget::TextView*, int, ::app::Android::android::view::KeyEvent*))Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_android_widget_TextViewDLROnEditorActionListener__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_android_widget_TextViewDLROnEditorActionListener__uType, __interface_1),
        ::app::Android::android::widget::TextViewDLROnEditorActionListener__typeof(), offsetof(Android_android_widget_TextViewDLROnEditorActionListener__uType, __interface_2));

    return type;
}

bool Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction(Android_android_widget_TextViewDLROnEditorActionListener* __this, ::app::Android::android::widget::TextView* arg0, int arg1, ::app::Android::android::view::KeyEvent* arg2)
{
    return Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction_IMPL_26520(NULL, __this->_subclassed, __this->_javaObject, (::uObject*)arg0, arg1, (::uObject*)arg2);
}

bool Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction_IMPL_26520(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, int arg3_, ::uObject* arg4_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction_26520_ID,"android/widget/TextView$OnEditorActionListener","onEditorAction","(Landroid/widget/TextView;ILandroid/view/KeyEvent;)Z",GetMethodID,"Id for fallback method android.widget.TextView$OnEditorActionListener.onEditorAction could not be cached",104);
    jobject _obArg2 = ((!arg2_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg2_));
    jobject _obArg4 = ((!arg4_) ? NULL : ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(arg4_));
    bool result;
    result = ((bool)U_JNIVAR->CallBooleanMethod(arg1_, ::app::Android::Fallbacks::Android_android_widget_TextViewDLROnEditorActionListener__onEditorAction_26520_ID, _obArg2, ((jint)arg3_), _obArg4));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Android_java_io_InputStream__uType* Android_java_io_InputStream__typeof()
{
    static ::uStaticStrong<Android_java_io_InputStream__uType*> type;
    if (type != NULL) return type;

    type = (Android_java_io_InputStream__uType*)::uAllocClassType(sizeof(Android_java_io_InputStream__uType), "Android.Fallbacks.Android_java_io_InputStream", false, 2, 0, 0);

    type->SetBaseType(::app::Android::java::io::InputStream__typeof());

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_java_io_InputStream__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_java_io_InputStream__uType, __interface_1));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_java_lang_CharSequence__charAt_30511_ID;
jmethodID Android_java_lang_CharSequence__length_30510_ID;
jmethodID Android_java_lang_CharSequence__subSequence_30512_ID;
jmethodID Android_java_lang_CharSequence__toString_30513_ID;

Android_java_lang_CharSequence__uType* Android_java_lang_CharSequence__typeof()
{
    static ::uStaticStrong<Android_java_lang_CharSequence__uType*> type;
    if (type != NULL) return type;

    type = (Android_java_lang_CharSequence__uType*)::uAllocClassType(sizeof(Android_java_lang_CharSequence__uType), "Android.Fallbacks.Android_java_lang_CharSequence", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__fp_toString = (::app::Android::java::lang::String*(*)(::app::Android::java::lang::Object*))Android_java_lang_CharSequence__toString;
    type->__interface_2.__fp_length = (int(*)(void*))Android_java_lang_CharSequence__length;
    type->__interface_2.__fp_charAt = (::uChar(*)(void*, int))Android_java_lang_CharSequence__charAt;
    type->__interface_2.__fp_subSequence = (::uObject*(*)(void*, int, int))Android_java_lang_CharSequence__subSequence;
    type->__interface_2.__fp_toString = (::app::Android::java::lang::String*(*)(void*))Android_java_lang_CharSequence__toString;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_java_lang_CharSequence__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_java_lang_CharSequence__uType, __interface_1),
        ::app::Android::java::lang::CharSequence__typeof(), offsetof(Android_java_lang_CharSequence__uType, __interface_2));

    return type;
}

::uChar Android_java_lang_CharSequence__charAt(Android_java_lang_CharSequence* __this, int arg0)
{
    return Android_java_lang_CharSequence__charAt_IMPL_30511(NULL, __this->_subclassed, __this->_javaObject, arg0);
}

::uChar Android_java_lang_CharSequence__charAt_IMPL_30511(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_java_lang_CharSequence__charAt_30511_ID,"java/lang/CharSequence","charAt","(I)C",GetMethodID,"Id for fallback method java.lang.CharSequence.charAt could not be cached",72);
    
    ::uChar result;
    result = ((::uChar)U_JNIVAR->CallCharMethod(arg1_, ::app::Android::Fallbacks::Android_java_lang_CharSequence__charAt_30511_ID, ((jint)arg2_)));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

int Android_java_lang_CharSequence__length(Android_java_lang_CharSequence* __this)
{
    return Android_java_lang_CharSequence__length_IMPL_30510(NULL, __this->_subclassed, __this->_javaObject);
}

int Android_java_lang_CharSequence__length_IMPL_30510(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_java_lang_CharSequence__length_30510_ID,"java/lang/CharSequence","length","()I",GetMethodID,"Id for fallback method java.lang.CharSequence.length could not be cached",72);
    
    int result;
    result = ((int)U_JNIVAR->CallIntMethod(arg1_, ::app::Android::Fallbacks::Android_java_lang_CharSequence__length_30510_ID));
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::uObject* Android_java_lang_CharSequence__subSequence(Android_java_lang_CharSequence* __this, int arg0, int arg1)
{
    return (::uObject*)Android_java_lang_CharSequence__subSequence_IMPL_30512(NULL, __this->_subclassed, __this->_javaObject, arg0, arg1);
}

::uObject* Android_java_lang_CharSequence__subSequence_IMPL_30512(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_java_lang_CharSequence__subSequence_30512_ID,"java/lang/CharSequence","subSequence","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method java.lang.CharSequence.subSequence could not be cached",77);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_java_lang_CharSequence__subSequence_30512_ID, ((jint)arg2_), ((jint)arg3_)),result,::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof(),::uObject*,true,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

::app::Android::java::lang::String* Android_java_lang_CharSequence__toString(Android_java_lang_CharSequence* __this)
{
    return ::uCast< ::app::Android::java::lang::String*>(Android_java_lang_CharSequence__toString_IMPL_30513(NULL, __this->_subclassed, __this->_javaObject), ::app::Android::java::lang::String__typeof());
}

::uObject* Android_java_lang_CharSequence__toString_IMPL_30513(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_java_lang_CharSequence__toString_30513_ID,"java/lang/CharSequence","toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.CharSequence.toString could not be cached",74);
    
    ::uObject* result;
    NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, ::app::Android::Fallbacks::Android_java_lang_CharSequence__toString_30513_ID),result,::app::Android::java::lang::String__typeof(),::app::Android::java::lang::String*,false,true);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Android/0.12.2/Android/Fallbacks/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

jmethodID Android_java_lang_Runnable__run_31342_ID;

Android_java_lang_Runnable__uType* Android_java_lang_Runnable__typeof()
{
    static ::uStaticStrong<Android_java_lang_Runnable__uType*> type;
    if (type != NULL) return type;

    type = (Android_java_lang_Runnable__uType*)::uAllocClassType(sizeof(Android_java_lang_Runnable__uType), "Android.Fallbacks.Android_java_lang_Runnable", false, 3, 0, 0);

    type->SetBaseType(::app::Android::java::lang::Object__typeof());
    type->__interface_2.__fp_run = (void(*)(void*))Android_java_lang_Runnable__run;
    type->__interface_0.__fp__GetJavaObject = (jobject(*)(void*))::app::Android::Base::Wrappers::JWrapper___GetJavaObject;
    type->__interface_0.__fp__IsSubclassed = (bool(*)(void*))::app::Android::Base::Wrappers::JWrapper___IsSubclassed;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(Android_java_lang_Runnable__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(Android_java_lang_Runnable__uType, __interface_1),
        ::app::Android::java::lang::Runnable__typeof(), offsetof(Android_java_lang_Runnable__uType, __interface_2));

    return type;
}

void Android_java_lang_Runnable__run(Android_java_lang_Runnable* __this)
{
    Android_java_lang_Runnable__run_IMPL_31342(NULL, __this->_subclassed, __this->_javaObject);
}

void Android_java_lang_Runnable__run_IMPL_31342(::uStatic* __this, bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CACHE_FALLBACK_METHOD(::app::Android::Fallbacks::Android_java_lang_Runnable__run_31342_ID,"java/lang/Runnable","run","()V",GetMethodID,"Id for fallback method java.lang.Runnable.run could not be cached",65);
    
    U_JNIVAR->CallVoidMethod(arg1_, ::app::Android::Fallbacks::Android_java_lang_Runnable__run_31342_ID);
    ::app::Android::Base::JNI__CheckException_2(NULL, U_JNIVAR);
}

}}}
