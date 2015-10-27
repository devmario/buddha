#include <BootstrapperImpl_Android.h>
#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Types.Bridge.h>
#include <app/Android.android.animation.Animator.h>
#include <app/Android.android.animation.TimeAnimator.h>
#include <app/Android.android.animation.ValueAnimator.h>
#include <app/Android.android.app.Activity.h>
#include <app/Android.android.app.Fragment.h>
#include <app/Android.android.app.TaskStackBuilder.h>
#include <app/Android.android.content.ComponentName.h>
#include <app/Android.android.content.Context.h>
#include <app/Android.android.content.ContextWrapper.h>
#include <app/Android.android.content.Intent.h>
#include <app/Android.android.content.res.AssetManager.h>
#include <app/Android.android.content.res.ColorStateList.h>
#include <app/Android.android.content.res.Configuration.h>
#include <app/Android.android.content.res.Resources.h>
#include <app/Android.android.graphics.Bitmap.h>
#include <app/Android.android.graphics.BitmapDLRConfig.h>
#include <app/Android.android.graphics.BitmapFactory.h>
#include <app/Android.android.graphics.Canvas.h>
#include <app/Android.android.graphics.Color.h>
#include <app/Android.android.graphics.drawable.Drawable.h>
#include <app/Android.android.graphics.drawable.LayerDrawable.h>
#include <app/Android.android.graphics.drawable.ShapeDrawable.h>
#include <app/Android.android.graphics.drawable.shapes.ArcShape.h>
#include <app/Android.android.graphics.drawable.shapes.RectShape.h>
#include <app/Android.android.graphics.drawable.shapes.RoundRectShape.h>
#include <app/Android.android.graphics.drawable.shapes.Shape.h>
#include <app/Android.android.graphics.Matrix.h>
#include <app/Android.android.graphics.Paint.h>
#include <app/Android.android.graphics.PaintDLRStyle.h>
#include <app/Android.android.graphics.PorterDuffDLRMode.h>
#include <app/Android.android.graphics.Rect.h>
#include <app/Android.android.graphics.RectF.h>
#include <app/Android.android.graphics.SurfaceTexture.h>
#include <app/Android.android.graphics.Typeface.h>
#include <app/Android.android.net.Uri.h>
#include <app/Android.android.opengl.GLUtils.h>
#include <app/Android.android.os.BuildDLRVERSION.h>
#include <app/Android.android.os.Bundle.h>
#include <app/Android.android.os.Parcel.h>
#include <app/Android.android.os.Vibrator.h>
#include <app/Android.android.test.mock.MockContext.h>
#include <app/Android.android.text.Layout.h>
#include <app/Android.android.text.LayoutDLRAlignment.h>
#include <app/Android.android.text.StaticLayout.h>
#include <app/Android.android.text.TextPaint.h>
#include <app/Android.android.text.TextUtilsDLRTruncateAt.h>
#include <app/Android.android.util.TypedValue.h>
#include <app/Android.android.view.ActionMode.h>
#include <app/Android.android.view.ActionProvider.h>
#include <app/Android.android.view.Choreographer.h>
#include <app/Android.android.view.ContextThemeWrapper.h>
#include <app/Android.android.view.Gravity.h>
#include <app/Android.android.view.inputmethod.InputMethodManager.h>
#include <app/Android.android.view.KeyEvent.h>
#include <app/Android.android.view.MotionEvent.h>
#include <app/Android.android.view.Surface.h>
#include <app/Android.android.view.SurfaceView.h>
#include <app/Android.android.view.TextureView.h>
#include <app/Android.android.view.View.h>
#include <app/Android.android.view.ViewDLRMeasureSpec.h>
#include <app/Android.android.view.ViewGroup.h>
#include <app/Android.android.view.ViewGroupDLRLayoutParams.h>
#include <app/Android.android.view.ViewGroupDLRMarginLayoutParams.h>
#include <app/Android.android.view.WindowManagerDLRLayoutParams.h>
#include <app/Android.android.webkit.WebChromeClient.h>
#include <app/Android.android.webkit.WebView.h>
#include <app/Android.android.webkit.WebViewClient.h>
#include <app/Android.android.widget.AbsoluteLayout.h>
#include <app/Android.android.widget.AbsSeekBar.h>
#include <app/Android.android.widget.Button.h>
#include <app/Android.android.widget.CompoundButton.h>
#include <app/Android.android.widget.EditText.h>
#include <app/Android.android.widget.FrameLayout.h>
#include <app/Android.android.widget.FrameLayoutDLRLayoutParams.h>
#include <app/Android.android.widget.HorizontalScrollView.h>
#include <app/Android.android.widget.ImageView.h>
#include <app/Android.android.widget.ImageViewDLRScaleType.h>
#include <app/Android.android.widget.ProgressBar.h>
#include <app/Android.android.widget.RelativeLayout.h>
#include <app/Android.android.widget.RelativeLayoutDLRLayoutParams.h>
#include <app/Android.android.widget.ScrollView.h>
#include <app/Android.android.widget.SeekBar.h>
#include <app/Android.android.widget.Switch.h>
#include <app/Android.android.widget.TextView.h>
#include <app/Android.com.fuse.ExperimentalHttp.HttpRequest.h>
#include <app/Android.com.fuse.Native.Camera.h>
#include <app/Android.com.fuse.Native.CameraTask.h>
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
#include <app/Android.java.io.InputStream.h>
#include <app/Android.java.lang.Class.h>
#include <app/Android.java.lang.Object.h>
#include <app/Android.java.lang.reflect.AccessibleObject.h>
#include <app/Android.java.lang.reflect.Field.h>
#include <app/Android.java.lang.String.h>
#include <app/Android.java.lang.System.h>
#include <app/Android.java.lang.Thread.h>
#include <app/Android.java.net.URL.h>
#include <app/Android.Runtime.BooleanArray.h>
#include <app/Android.Runtime.ByteArray.h>
#include <app/Android.Runtime.CharArray.h>
#include <app/Android.Runtime.DoubleArray.h>
#include <app/Android.Runtime.FloatArray.h>
#include <app/Android.Runtime.IntArray.h>
#include <app/Android.Runtime.LongArray.h>
#include <app/Android.Runtime.RunnableAction.h>
#include <app/Android.Runtime.ShortArray.h>
#include <app/Fuse.Android.AndroidSeekBar.h>
#include <app/Fuse.Android.CompoundButton_Listener.h>
#include <app/Fuse.Android.EditorActionListener.h>
#include <app/Fuse.Android.FocusChangedListener.h>
#include <app/Fuse.Android.GLSurfaceTextureListener.h>
#include <app/Fuse.Android.HorizontalScrollView.h>
#include <app/Fuse.Android.Image_ImageLoader_BitmapLoader.h>
#include <app/Fuse.Android.InputDispatch_TouchListener.h>
#include <app/Fuse.Android.ProgressChangedListener.h>
#include <app/Fuse.Android.RootViewContainer.h>
#include <app/Fuse.Android.SurfaceCallback.h>
#include <app/Fuse.Android.TextChangedListener.h>
#include <app/Fuse.Android.VerticalScrollView.h>
#include <app/Fuse.Android.WebChromeClient.h>
#include <app/Fuse.App_FrameCallback.h>
#include <app/Fuse.App_TimeListener.h>
void BootstrapperImpl() {
    ::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.animation.Animator", 26, ::app::Android::Fallbacks::Android_android_animation_Animator__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.animation.TimeAnimator$TimeListener", 43, ::app::Android::Fallbacks::Android_android_animation_TimeAnimatorDLRTimeListener__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.content.Context", 23, ::app::Android::Fallbacks::Android_android_content_Context__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.graphics.drawable.Drawable", 34, ::app::Android::Fallbacks::Android_android_graphics_drawable_Drawable__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.graphics.drawable.shapes.Shape", 38, ::app::Android::Fallbacks::Android_android_graphics_drawable_shapes_Shape__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.net.Uri", 15, ::app::Android::Fallbacks::Android_android_net_Uri__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.os.IBinder", 18, ::app::Android::Fallbacks::Android_android_os_IBinder__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.os.IBinder$DeathRecipient", 33, ::app::Android::Fallbacks::Android_android_os_IBinderDLRDeathRecipient__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.os.IInterface", 21, ::app::Android::Fallbacks::Android_android_os_IInterface__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.os.Vibrator", 19, ::app::Android::Fallbacks::Android_android_os_Vibrator__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.text.Editable", 21, ::app::Android::Fallbacks::Android_android_text_Editable__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.text.GetChars", 21, ::app::Android::Fallbacks::Android_android_text_GetChars__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.text.InputFilter", 24, ::app::Android::Fallbacks::Android_android_text_InputFilter__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.text.Layout", 19, ::app::Android::Fallbacks::Android_android_text_Layout__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.text.Spannable", 22, ::app::Android::Fallbacks::Android_android_text_Spannable__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.text.Spanned", 20, ::app::Android::Fallbacks::Android_android_text_Spanned__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.text.TextWatcher", 24, ::app::Android::Fallbacks::Android_android_text_TextWatcher__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.util.AttributeSet", 25, ::app::Android::Fallbacks::Android_android_util_AttributeSet__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.view.ActionMode", 23, ::app::Android::Fallbacks::Android_android_view_ActionMode__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.view.ActionProvider", 27, ::app::Android::Fallbacks::Android_android_view_ActionProvider__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.view.Choreographer$FrameCallback", 40, ::app::Android::Fallbacks::Android_android_view_ChoreographerDLRFrameCallback__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.view.ContextMenu$ContextMenuInfo", 40, ::app::Android::Fallbacks::Android_android_view_ContextMenuDLRContextMenuInfo__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.view.Menu", 17, ::app::Android::Fallbacks::Android_android_view_Menu__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.view.MenuItem", 21, ::app::Android::Fallbacks::Android_android_view_MenuItem__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.view.MenuItem$OnActionExpandListener", 44, ::app::Android::Fallbacks::Android_android_view_MenuItemDLROnActionExpandListener__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.view.MenuItem$OnMenuItemClickListener", 45, ::app::Android::Fallbacks::Android_android_view_MenuItemDLROnMenuItemClickListener__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.view.SubMenu", 20, ::app::Android::Fallbacks::Android_android_view_SubMenu__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.view.SurfaceHolder", 26, ::app::Android::Fallbacks::Android_android_view_SurfaceHolder__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.view.SurfaceHolder$Callback", 35, ::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.view.SurfaceHolder$Callback2", 36, ::app::Android::Fallbacks::Android_android_view_SurfaceHolderDLRCallback2__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.view.TextureView$SurfaceTextureListener", 47, ::app::Android::Fallbacks::Android_android_view_TextureViewDLRSurfaceTextureListener__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.view.View$OnFocusChangeListener", 39, ::app::Android::Fallbacks::Android_android_view_ViewDLROnFocusChangeListener__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.view.View$OnTouchListener", 33, ::app::Android::Fallbacks::Android_android_view_ViewDLROnTouchListener__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.view.ViewGroup", 22, ::app::Android::Fallbacks::Android_android_view_ViewGroup__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.widget.AbsSeekBar", 25, ::app::Android::Fallbacks::Android_android_widget_AbsSeekBar__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.widget.CompoundButton", 29, ::app::Android::Fallbacks::Android_android_widget_CompoundButton__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.widget.CompoundButton$OnCheckedChangeListener", 53, ::app::Android::Fallbacks::Android_android_widget_CompoundButtonDLROnCheckedChangeListener__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.widget.SeekBar$OnSeekBarChangeListener", 46, ::app::Android::Fallbacks::Android_android_widget_SeekBarDLROnSeekBarChangeListener__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "android.widget.TextView$OnEditorActionListener", 46, ::app::Android::Fallbacks::Android_android_widget_TextViewDLROnEditorActionListener__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "java.io.InputStream", 19, ::app::Android::Fallbacks::Android_java_io_InputStream__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "java.lang.CharSequence", 22, ::app::Android::Fallbacks::Android_java_lang_CharSequence__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoFallback(NULL, "java.lang.Runnable", 18, ::app::Android::Fallbacks::Android_java_lang_Runnable__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "[B", 2, ::app::Android::Runtime::ByteArray__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "[C", 2, ::app::Android::Runtime::CharArray__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "[D", 2, ::app::Android::Runtime::DoubleArray__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "[F", 2, ::app::Android::Runtime::FloatArray__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "[I", 2, ::app::Android::Runtime::IntArray__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "[J", 2, ::app::Android::Runtime::LongArray__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "[S", 2, ::app::Android::Runtime::ShortArray__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "[Z", 2, ::app::Android::Runtime::BooleanArray__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.animation.Animator", 26, ::app::Android::android::animation::Animator__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.animation.TimeAnimator", 30, ::app::Android::android::animation::TimeAnimator__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.animation.ValueAnimator", 31, ::app::Android::android::animation::ValueAnimator__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.app.Activity", 20, ::app::Android::android::app::Activity__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.app.Fragment", 20, ::app::Android::android::app::Fragment__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.app.TaskStackBuilder", 28, ::app::Android::android::app::TaskStackBuilder__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.content.ComponentName", 29, ::app::Android::android::content::ComponentName__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.content.Context", 23, ::app::Android::android::content::Context__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.content.ContextWrapper", 30, ::app::Android::android::content::ContextWrapper__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.content.Intent", 22, ::app::Android::android::content::Intent__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.content.res.AssetManager", 32, ::app::Android::android::content::res::AssetManager__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.content.res.ColorStateList", 34, ::app::Android::android::content::res::ColorStateList__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.content.res.Configuration", 33, ::app::Android::android::content::res::Configuration__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.content.res.Resources", 29, ::app::Android::android::content::res::Resources__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.graphics.Bitmap", 23, ::app::Android::android::graphics::Bitmap__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.graphics.Bitmap$Config", 30, ::app::Android::android::graphics::BitmapDLRConfig__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.graphics.BitmapFactory", 30, ::app::Android::android::graphics::BitmapFactory__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.graphics.Canvas", 23, ::app::Android::android::graphics::Canvas__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.graphics.Color", 22, ::app::Android::android::graphics::Color__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.graphics.drawable.Drawable", 34, ::app::Android::android::graphics::drawable::Drawable__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.graphics.drawable.LayerDrawable", 39, ::app::Android::android::graphics::drawable::LayerDrawable__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.graphics.drawable.ShapeDrawable", 39, ::app::Android::android::graphics::drawable::ShapeDrawable__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.graphics.drawable.shapes.ArcShape", 41, ::app::Android::android::graphics::drawable::shapes::ArcShape__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.graphics.drawable.shapes.RectShape", 42, ::app::Android::android::graphics::drawable::shapes::RectShape__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.graphics.drawable.shapes.RoundRectShape", 47, ::app::Android::android::graphics::drawable::shapes::RoundRectShape__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.graphics.drawable.shapes.Shape", 38, ::app::Android::android::graphics::drawable::shapes::Shape__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.graphics.Matrix", 23, ::app::Android::android::graphics::Matrix__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.graphics.Paint", 22, ::app::Android::android::graphics::Paint__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.graphics.Paint$Style", 28, ::app::Android::android::graphics::PaintDLRStyle__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.graphics.PorterDuff$Mode", 32, ::app::Android::android::graphics::PorterDuffDLRMode__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.graphics.Rect", 21, ::app::Android::android::graphics::Rect__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.graphics.RectF", 22, ::app::Android::android::graphics::RectF__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.graphics.SurfaceTexture", 31, ::app::Android::android::graphics::SurfaceTexture__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.graphics.Typeface", 25, ::app::Android::android::graphics::Typeface__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.net.Uri", 15, ::app::Android::android::net::Uri__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.opengl.GLUtils", 22, ::app::Android::android::opengl::GLUtils__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.os.Build$VERSION", 24, ::app::Android::android::os::BuildDLRVERSION__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.os.Bundle", 17, ::app::Android::android::os::Bundle__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.os.Parcel", 17, ::app::Android::android::os::Parcel__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.os.Vibrator", 19, ::app::Android::android::os::Vibrator__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.test.mock.MockContext", 29, ::app::Android::android::test::mock::MockContext__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.text.Layout", 19, ::app::Android::android::text::Layout__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.text.Layout$Alignment", 29, ::app::Android::android::text::LayoutDLRAlignment__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.text.StaticLayout", 25, ::app::Android::android::text::StaticLayout__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.text.TextPaint", 22, ::app::Android::android::text::TextPaint__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.text.TextUtils$TruncateAt", 33, ::app::Android::android::text::TextUtilsDLRTruncateAt__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.util.TypedValue", 23, ::app::Android::android::util::TypedValue__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.view.ActionMode", 23, ::app::Android::android::view::ActionMode__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.view.ActionProvider", 27, ::app::Android::android::view::ActionProvider__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.view.Choreographer", 26, ::app::Android::android::view::Choreographer__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.view.ContextThemeWrapper", 32, ::app::Android::android::view::ContextThemeWrapper__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.view.Gravity", 20, ::app::Android::android::view::Gravity__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.view.inputmethod.InputMethodManager", 43, ::app::Android::android::view::inputmethod::InputMethodManager__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.view.KeyEvent", 21, ::app::Android::android::view::KeyEvent__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.view.MotionEvent", 24, ::app::Android::android::view::MotionEvent__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.view.Surface", 20, ::app::Android::android::view::Surface__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.view.SurfaceView", 24, ::app::Android::android::view::SurfaceView__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.view.TextureView", 24, ::app::Android::android::view::TextureView__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.view.View", 17, ::app::Android::android::view::View__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.view.View$MeasureSpec", 29, ::app::Android::android::view::ViewDLRMeasureSpec__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.view.ViewGroup", 22, ::app::Android::android::view::ViewGroup__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.view.ViewGroup$LayoutParams", 35, ::app::Android::android::view::ViewGroupDLRLayoutParams__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.view.ViewGroup$MarginLayoutParams", 41, ::app::Android::android::view::ViewGroupDLRMarginLayoutParams__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.view.WindowManager$LayoutParams", 39, ::app::Android::android::view::WindowManagerDLRLayoutParams__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.webkit.WebChromeClient", 30, ::app::Android::android::webkit::WebChromeClient__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.webkit.WebView", 22, ::app::Android::android::webkit::WebView__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.webkit.WebViewClient", 28, ::app::Android::android::webkit::WebViewClient__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.widget.AbsoluteLayout", 29, ::app::Android::android::widget::AbsoluteLayout__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.widget.AbsSeekBar", 25, ::app::Android::android::widget::AbsSeekBar__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.widget.Button", 21, ::app::Android::android::widget::Button__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.widget.CompoundButton", 29, ::app::Android::android::widget::CompoundButton__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.widget.EditText", 23, ::app::Android::android::widget::EditText__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.widget.FrameLayout", 26, ::app::Android::android::widget::FrameLayout__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.widget.FrameLayout$LayoutParams", 39, ::app::Android::android::widget::FrameLayoutDLRLayoutParams__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.widget.HorizontalScrollView", 35, ::app::Android::android::widget::HorizontalScrollView__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.widget.ImageView", 24, ::app::Android::android::widget::ImageView__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.widget.ImageView$ScaleType", 34, ::app::Android::android::widget::ImageViewDLRScaleType__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.widget.ProgressBar", 26, ::app::Android::android::widget::ProgressBar__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.widget.RelativeLayout", 29, ::app::Android::android::widget::RelativeLayout__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.widget.RelativeLayout$LayoutParams", 42, ::app::Android::android::widget::RelativeLayoutDLRLayoutParams__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.widget.ScrollView", 25, ::app::Android::android::widget::ScrollView__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.widget.SeekBar", 22, ::app::Android::android::widget::SeekBar__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.widget.Switch", 21, ::app::Android::android::widget::Switch__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "android.widget.TextView", 23, ::app::Android::android::widget::TextView__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "Binding_Android_Runtime_RunnableAction", 38, ::app::Android::Runtime::RunnableAction__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "Binding_Fuse_Android_AndroidSeekBar", 35, ::app::Fuse::Android::AndroidSeekBar__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "Binding_Fuse_Android_CompoundButton_Listener", 44, ::app::Fuse::Android::CompoundButton_Listener__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "Binding_Fuse_Android_EditorActionListener", 41, ::app::Fuse::Android::EditorActionListener__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "Binding_Fuse_Android_FocusChangedListener", 41, ::app::Fuse::Android::FocusChangedListener__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "Binding_Fuse_Android_GLSurfaceTextureListener", 45, ::app::Fuse::Android::GLSurfaceTextureListener__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "Binding_Fuse_Android_HorizontalScrollView", 41, ::app::Fuse::Android::HorizontalScrollView__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "Binding_Fuse_Android_Image_ImageLoader_BitmapLoader", 51, ::app::Fuse::Android::Image_ImageLoader_BitmapLoader__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "Binding_Fuse_Android_InputDispatch_TouchListener", 48, ::app::Fuse::Android::InputDispatch_TouchListener__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "Binding_Fuse_Android_ProgressChangedListener", 44, ::app::Fuse::Android::ProgressChangedListener__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "Binding_Fuse_Android_RootViewContainer", 38, ::app::Fuse::Android::RootViewContainer__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "Binding_Fuse_Android_SurfaceCallback", 36, ::app::Fuse::Android::SurfaceCallback__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "Binding_Fuse_Android_TextChangedListener", 40, ::app::Fuse::Android::TextChangedListener__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "Binding_Fuse_Android_VerticalScrollView", 39, ::app::Fuse::Android::VerticalScrollView__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "Binding_Fuse_Android_WebChromeClient", 36, ::app::Fuse::Android::WebChromeClient__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "Binding_Fuse_App_FrameCallback", 30, ::app::Fuse::App_FrameCallback__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "Binding_Fuse_App_TimeListener", 29, ::app::Fuse::App_TimeListener__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "com.fuse.ExperimentalHttp.HttpRequest", 37, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "com.fuse.Native.Camera", 22, ::app::Android::com::fuse::Native::Camera__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "com.fuse.Native.CameraTask", 26, ::app::Android::com::fuse::Native::CameraTask__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "java.io.FileDescriptor", 22, ::app::Android::java::io::FileDescriptor__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "java.io.InputStream", 19, ::app::Android::java::io::InputStream__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "java.lang.Class", 15, ::app::Android::java::lang::Class__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "java.lang.Object", 16, ::app::Android::java::lang::Object__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "java.lang.reflect.AccessibleObject", 34, ::app::Android::java::lang::reflect::AccessibleObject__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "java.lang.reflect.Field", 23, ::app::Android::java::lang::reflect::Field__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "java.lang.String", 16, ::app::Android::java::lang::String__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "java.lang.System", 16, ::app::Android::java::lang::System__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "java.lang.Thread", 16, ::app::Android::java::lang::Thread__typeof());
::app::Android::Base::Types::Bridge__RegisterUnoType(NULL, "java.net.URL", 12, ::app::Android::java::net::URL__typeof());
}
