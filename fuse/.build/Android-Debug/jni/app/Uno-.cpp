#include <app/Android.android.graphics.Bitmap.h>
#include <app/Android.android.view.MotionEvent.h>
#include <app/Android.android.view.View.h>
#include <app/Experimental.Audio.Channel.h>
#include <app/Experimental.Http.HttpResponseHeader.h>
#include <app/Fuse.Android.Button.h>
#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MixerHandle__bool.h>
#include <app/Fuse.Animations.MixerHandle__float.h>
#include <app/Fuse.Animations.MixerHandle__float4.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Transform.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.CacheFramebuffer.h>
#include <app/Fuse.Camera.PictureResult.h>
#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.GraphicsView.h>
#include <app/Fuse.Controls.Grid.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Controls.Internal.DefaultTextRenderer_FontKey.h>
#include <app/Fuse.Controls.Number.h>
#include <app/Fuse.Controls.PageIndicator.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.PlainTextEdit.h>
#include <app/Fuse.Controls.RangeControl.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.Controls.Shape.h>
#include <app/Fuse.Controls.StackPanel.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Controls.ToggleControl.h>
#include <app/Fuse.Drawing.Border.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Drawing.Tesselation.Face.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.CachingMode.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.ElementAtlas.h>
#include <app/Fuse.Elements.HitTestMode.h>
#include <app/Fuse.Elements.StretchDirection.h>
#include <app/Fuse.Elements.StretchMode.h>
#include <app/Fuse.Elements.StretchSizing.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Fuse.Elements.Visibility.h>
#include <app/Fuse.Entities.Entity.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Gestures.ScrollDirections.h>
#include <app/Fuse.iOS.Button.h>
#include <app/Fuse.iOS.StatusBarConfig.h>
#include <app/Fuse.Layouts.Column.h>
#include <app/Fuse.Layouts.Layout.h>
#include <app/Fuse.Layouts.Orientation.h>
#include <app/Fuse.Layouts.Row.h>
#include <app/Fuse.Navigation.NavigationEdge.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Physics.Body.h>
#include <app/Fuse.Physics.IRule.h>
#include <app/Fuse.Reactive.JavaScript.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Resources.IMemoryResource.h>
#include <app/Fuse.Resources.MemoryPolicy.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <app/Fuse.Shapes.Rectangle.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Fuse.Style.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Android_android_graphics_Bitmap.h>
#include <app/Uno.Action__bool.h>
#include <app/Uno.Action__double.h>
#include <app/Uno.Action__Experimental_Http_HttpResponseHeader__string.h>
#include <app/Uno.Action__Experimental_Http_HttpResponseHeader__Uno_Buffer.h>
#include <app/Uno.Action__float.h>
#include <app/Uno.Action__float2.h>
#include <app/Uno.Action__float3.h>
#include <app/Uno.Action__float4.h>
#include <app/Uno.Action__Fuse_Android_Button.h>
#include <app/Uno.Action__Fuse_Android_Button__float4.h>
#include <app/Uno.Action__Fuse_Behavior.h>
#include <app/Uno.Action__Fuse_Camera_PictureResult.h>
#include <app/Uno.Action__Fuse_Controls_Button.h>
#include <app/Uno.Action__Fuse_Controls_Button__string.h>
#include <app/Uno.Action__Fuse_Controls_Control.h>
#include <app/Uno.Action__Fuse_Controls_Control__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Controls_GraphicsView.h>
#include <app/Uno.Action__Fuse_Controls_GraphicsView__float4.h>
#include <app/Uno.Action__Fuse_Controls_Grid.h>
#include <app/Uno.Action__Fuse_Controls_Grid__float.h>
#include <app/Uno.Action__Fuse_Controls_Image.h>
#include <app/Uno.Action__Fuse_Controls_Image__Fuse_Elements_Alignment.h>
#include <app/Uno.Action__Fuse_Controls_Image__Fuse_Elements_StretchDirection.h>
#include <app/Uno.Action__Fuse_Controls_Image__Fuse_Elements_StretchMode.h>
#include <app/Uno.Action__Fuse_Controls_Image__Fuse_Elements_StretchSizing.h>
#include <app/Uno.Action__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy.h>
#include <app/Uno.Action__Fuse_Controls_Number.h>
#include <app/Uno.Action__Fuse_Controls_Number__float.h>
#include <app/Uno.Action__Fuse_Controls_Number__string.h>
#include <app/Uno.Action__Fuse_Controls_PageIndicator.h>
#include <app/Uno.Action__Fuse_Controls_PageIndicator__Uno_UX_IFactory.h>
#include <app/Uno.Action__Fuse_Controls_Panel.h>
#include <app/Uno.Action__Fuse_Controls_Panel__Fuse_Layouts_Layout.h>
#include <app/Uno.Action__Fuse_Controls_Panel__Fuse_Node.h>
#include <app/Uno.Action__Fuse_Controls_PlainTextEdit.h>
#include <app/Uno.Action__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory.h>
#include <app/Uno.Action__Fuse_Controls_RangeControl.h>
#include <app/Uno.Action__Fuse_Controls_RangeControl__double.h>
#include <app/Uno.Action__Fuse_Controls_Rectangle.h>
#include <app/Uno.Action__Fuse_Controls_Rectangle__float4.h>
#include <app/Uno.Action__Fuse_Controls_ScrollView.h>
#include <app/Uno.Action__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections.h>
#include <app/Uno.Action__Fuse_Controls_Shape.h>
#include <app/Uno.Action__Fuse_Controls_Shape__float.h>
#include <app/Uno.Action__Fuse_Controls_Shape__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Controls_Shape__Fuse_Drawing_Stroke.h>
#include <app/Uno.Action__Fuse_Controls_StackPanel.h>
#include <app/Uno.Action__Fuse_Controls_StackPanel__float.h>
#include <app/Uno.Action__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation.h>
#include <app/Uno.Action__Fuse_Controls_TextControl.h>
#include <app/Uno.Action__Fuse_Controls_TextControl__float.h>
#include <app/Uno.Action__Fuse_Controls_TextControl__float4.h>
#include <app/Uno.Action__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment.h>
#include <app/Uno.Action__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping.h>
#include <app/Uno.Action__Fuse_Controls_TextControl__Fuse_Font.h>
#include <app/Uno.Action__Fuse_Controls_TextControl__string.h>
#include <app/Uno.Action__Fuse_Controls_TextInput.h>
#include <app/Uno.Action__Fuse_Controls_TextInput__bool.h>
#include <app/Uno.Action__Fuse_Controls_TextInput__float4.h>
#include <app/Uno.Action__Fuse_Controls_TextInput__Uno_Platform_TextInputHint.h>
#include <app/Uno.Action__Fuse_Controls_ToggleControl.h>
#include <app/Uno.Action__Fuse_Controls_ToggleControl__bool.h>
#include <app/Uno.Action__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Drawing_Stroke.h>
#include <app/Uno.Action__Fuse_Effects_Effect.h>
#include <app/Uno.Action__Fuse_Elements_Element.h>
#include <app/Uno.Action__Fuse_Elements_Element__bool.h>
#include <app/Uno.Action__Fuse_Elements_Element__float.h>
#include <app/Uno.Action__Fuse_Elements_Element__float2.h>
#include <app/Uno.Action__Fuse_Elements_Element__float4.h>
#include <app/Uno.Action__Fuse_Elements_Element__Fuse_Elements_Alignment.h>
#include <app/Uno.Action__Fuse_Elements_Element__Fuse_Elements_CachingMode.h>
#include <app/Uno.Action__Fuse_Elements_Element__Fuse_Elements_HitTestMode.h>
#include <app/Uno.Action__Fuse_Elements_Element__Fuse_Elements_Visibility.h>
#include <app/Uno.Action__Fuse_Entities_Entity.h>
#include <app/Uno.Action__Fuse_iOS_Button.h>
#include <app/Uno.Action__Fuse_iOS_Button__float4.h>
#include <app/Uno.Action__Fuse_Layouts_Column.h>
#include <app/Uno.Action__Fuse_Layouts_Row.h>
#include <app/Uno.Action__Fuse_Node.h>
#include <app/Uno.Action__Fuse_Node__bool.h>
#include <app/Uno.Action__Fuse_Node__Fuse_Node.h>
#include <app/Uno.Action__Fuse_Node__string.h>
#include <app/Uno.Action__Fuse_Resources_ImageSource.h>
#include <app/Uno.Action__Fuse_Shapes_Rectangle.h>
#include <app/Uno.Action__Fuse_Shapes_Rectangle__float4.h>
#include <app/Uno.Action__Fuse_Shapes_Shape.h>
#include <app/Uno.Action__Fuse_Shapes_Shape__float.h>
#include <app/Uno.Action__Fuse_Shapes_Shape__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Shapes_Shape__Fuse_Drawing_Stroke.h>
#include <app/Uno.Action__Fuse_Style.h>
#include <app/Uno.Action__Fuse_Transform.h>
#include <app/Uno.Action__Fuse_Triggers_Trigger.h>
#include <app/Uno.Action__int.h>
#include <app/Uno.Action__int__object.h>
#include <app/Uno.Action__object.h>
#include <app/Uno.Action__object__.h>
#include <app/Uno.Action__object__double.h>
#include <app/Uno.Action__object__int.h>
#include <app/Uno.Action__object__object.h>
#include <app/Uno.Action__object__object__.h>
#include <app/Uno.Action__string.h>
#include <app/Uno.Action__texture2D.h>
#include <app/Uno.Action__Uno_Exception.h>
#include <app/Uno.Action__Uno_IntPtr.h>
#include <app/Uno.Action__Uno_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Action__Uno_Net_Http_HttpMessageHandlerRequest__int__int__bool.h>
#include <app/Uno.Action__Uno_Net_Http_HttpMessageHandlerRequest__string.h>
#include <app/Uno.Action__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int.h>
#include <app/Uno.Action__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int.h>
#include <app/Uno.Action__Uno_Time_Text_OffsetPattern_OffsetBucket__int.h>
#include <app/Uno.Action__Uno_UX_FileSource.h>
#include <app/Uno.Action__Uno_UX_IFactory.h>
#include <app/Uno.Action__Uno_UX_ITemplate.h>
#include <app/Uno.Action__Uno_UX_Resource.h>
#include <app/Uno.Application.h>
#include <app/Uno.ArgumentException.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.ArgumentOutOfRangeException.h>
#include <app/Uno.Array.h>
#include <app/Uno.Attribute.h>
#include <app/Uno.AttributeTargets.h>
#include <app/Uno.AttributeUsageAttribute.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Byte4.h>
#include <app/Uno.Char.h>
#include <app/Uno.CharPunctuationChecker.h>
#include <app/Uno.CharPunctuationChecker_PunctuationRange.h>
#include <app/Uno.Collections.List__Uno_CharPunctuationChecker_PunctuationRange.h>
#include <app/Uno.Collections.List__Uno_Runtime_Implementation_Internal_Forma-238cb01d.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Runtime_Implementation_In-9496fdab.h>
#include <app/Uno.Color.h>
#include <app/Uno.ColorHelper.h>
#include <app/Uno.Comparison__Fuse_Node.h>
#include <app/Uno.Content.Fonts.BitmapFont_CharPair.h>
#include <app/Uno.DateTime.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__Fuse_Node.h>
#include <app/Uno.EventHandler__string.h>
#include <app/Uno.EventHandler__Uno_EventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_ClosingEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_KeyEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_PointerEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_SystemUIWillResizeEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_TextInputEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_TimerEventArgs.h>
#include <app/Uno.Exception.h>
#include <app/Uno.FlagsAttribute.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float2x2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float3x3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.FormatException.h>
#include <app/Uno.Func__Android_android_view_MotionEvent__bool.h>
#include <app/Uno.Func__double.h>
#include <app/Uno.Func__Fuse_Android_Button__float4.h>
#include <app/Uno.Func__Fuse_Controls_Button__string.h>
#include <app/Uno.Func__Fuse_Controls_Control__Fuse_Drawing_Brush.h>
#include <app/Uno.Func__Fuse_Controls_GraphicsView__float4.h>
#include <app/Uno.Func__Fuse_Controls_Grid__float.h>
#include <app/Uno.Func__Fuse_Controls_Image__Fuse_Elements_Alignment.h>
#include <app/Uno.Func__Fuse_Controls_Image__Fuse_Elements_StretchDirection.h>
#include <app/Uno.Func__Fuse_Controls_Image__Fuse_Elements_StretchMode.h>
#include <app/Uno.Func__Fuse_Controls_Image__Fuse_Elements_StretchSizing.h>
#include <app/Uno.Func__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy.h>
#include <app/Uno.Func__Fuse_Controls_Number__float.h>
#include <app/Uno.Func__Fuse_Controls_Number__string.h>
#include <app/Uno.Func__Fuse_Controls_PageIndicator__Uno_UX_IFactory.h>
#include <app/Uno.Func__Fuse_Controls_Panel__Fuse_Layouts_Layout.h>
#include <app/Uno.Func__Fuse_Controls_Panel__Fuse_Node.h>
#include <app/Uno.Func__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory.h>
#include <app/Uno.Func__Fuse_Controls_RangeControl__double.h>
#include <app/Uno.Func__Fuse_Controls_Rectangle__float4.h>
#include <app/Uno.Func__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections.h>
#include <app/Uno.Func__Fuse_Controls_Shape__float.h>
#include <app/Uno.Func__Fuse_Controls_Shape__Fuse_Drawing_Brush.h>
#include <app/Uno.Func__Fuse_Controls_Shape__Fuse_Drawing_Stroke.h>
#include <app/Uno.Func__Fuse_Controls_StackPanel__float.h>
#include <app/Uno.Func__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation.h>
#include <app/Uno.Func__Fuse_Controls_TextControl__float.h>
#include <app/Uno.Func__Fuse_Controls_TextControl__float4.h>
#include <app/Uno.Func__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment.h>
#include <app/Uno.Func__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping.h>
#include <app/Uno.Func__Fuse_Controls_TextControl__Fuse_Font.h>
#include <app/Uno.Func__Fuse_Controls_TextControl__string.h>
#include <app/Uno.Func__Fuse_Controls_TextInput__bool.h>
#include <app/Uno.Func__Fuse_Controls_TextInput__float4.h>
#include <app/Uno.Func__Fuse_Controls_TextInput__Uno_Platform_TextInputHint.h>
#include <app/Uno.Func__Fuse_Controls_ToggleControl__bool.h>
#include <app/Uno.Func__Fuse_Drawing_Border__Fuse_Drawing_Contour.h>
#include <app/Uno.Func__Fuse_Drawing_Contour__Fuse_Drawing_Border.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_HalfEdge__float2.h>
#include <app/Uno.Func__Fuse_Elements_Element__bool.h>
#include <app/Uno.Func__Fuse_Elements_Element__float.h>
#include <app/Uno.Func__Fuse_Elements_Element__float2.h>
#include <app/Uno.Func__Fuse_Elements_Element__float4.h>
#include <app/Uno.Func__Fuse_Elements_Element__Fuse_Elements_Alignment.h>
#include <app/Uno.Func__Fuse_Elements_Element__Fuse_Elements_CachingMode.h>
#include <app/Uno.Func__Fuse_Elements_Element__Fuse_Elements_HitTestMode.h>
#include <app/Uno.Func__Fuse_Elements_Element__Fuse_Elements_Visibility.h>
#include <app/Uno.Func__Fuse_Node__bool.h>
#include <app/Uno.Func__Fuse_Node__Fuse_Node.h>
#include <app/Uno.Func__Fuse_Node__string.h>
#include <app/Uno.Func__Fuse_Shapes_Rectangle__float4.h>
#include <app/Uno.Func__Fuse_Shapes_Shape__float.h>
#include <app/Uno.Func__Fuse_Shapes_Shape__Fuse_Drawing_Brush.h>
#include <app/Uno.Func__Fuse_Shapes_Shape__Fuse_Drawing_Stroke.h>
#include <app/Uno.Func__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char.h>
#include <app/Uno.Func__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char.h>
#include <app/Uno.Func__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_OffsetPattern_OffsetBucket__char.h>
#include <app/Uno.Func__Uno_Time_Text_OffsetPattern_OffsetBucket__int.h>
#include <app/Uno.GC.h>
#include <app/Uno.Generic.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.GraphicsContext.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.IndexOutOfRangeException.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Int4.h>
#include <app/Uno.IntPtr.h>
#include <app/Uno.InvalidCastException.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.IO.CppXliStream.h>
#include <app/Uno.IO.CppXliStreamHandle.h>
#include <app/Uno.IO.Stream.h>
#include <app/Uno.Long.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <app/Uno.NotImplementedException.h>
#include <app/Uno.NotSupportedException.h>
#include <app/Uno.NullReferenceException.h>
#include <app/Uno.Object.h>
#include <app/Uno.ObjectDisposedException.h>
#include <app/Uno.OverflowException.h>
#include <app/Uno.Platform.ClosingEventArgs.h>
#include <app/Uno.Platform.KeyEventArgs.h>
#include <app/Uno.Platform.PointerEventArgs.h>
#include <app/Uno.Platform.SystemUIWillResizeEventArgs.h>
#include <app/Uno.Platform.TextInputEventArgs.h>
#include <app/Uno.Platform.TextInputHint.h>
#include <app/Uno.Platform.TimerEventArgs.h>
#include <app/Uno.Platform.Window.h>
#include <app/Uno.Predicate__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Predicate__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Predicate__Fuse_Node.h>
#include <app/Uno.Predicate__int.h>
#include <app/Uno.Predicate__object.h>
#include <app/Uno.Quaternion.h>
#include <app/Uno.Rect.h>
#include <app/Uno.Recti.h>
#include <app/Uno.Runtime.Implementation.ArrayCopyImpl.h>
#include <app/Uno.Runtime.Implementation.ArraySortImpl.h>
#include <app/Uno.Runtime.Implementation.BufferImpl.h>
#include <app/Uno.Runtime.Implementation.GenericEqualsImpl.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringToken.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringTokenizer.h>
#include <app/Uno.Runtime.Implementation.TextEncodingImpl.h>
#include <app/Uno.SByte.h>
#include <app/Uno.Short.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.StringBuilder.h>
#include <app/Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket.h>
#include <app/Uno.Time.Text.LocalTimePattern_LocalTimeBucket.h>
#include <app/Uno.Time.Text.OffsetPattern_OffsetBucket.h>
#include <app/Uno.Time.ZonedDateTime.h>
#include <app/Uno.Type.h>
#include <app/Uno.UInt.h>
#include <app/Uno.ULong.h>
#include <app/Uno.UShort.h>
#include <app/Uno.UShort2.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.IFactory.h>
#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Resource.h>
#include <app/Uno.Vector.h>
#include <app/Uno.WeakReferenceAttribute.h>
#include <cmath>
#include <Uno/XliInterop.h>
#include <Xli.h>
#include <Xli/String.h>
#include <Xli/Traits.h>
#include <Xli/Unicode.h>
#include <XliPlatform.h>

namespace app {
namespace Uno {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action", 0);

    type->SetSignature(::uVoid__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Android_android_graphics_Bitmap__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Android.android.graphics.Bitmap>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Android::android::graphics::Bitmap__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__bool__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<bool>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::Bool__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__double__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<double>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::Double__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Experimental_Http_HttpResponseHeader__string__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Experimental.Http.HttpResponseHeader,string>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Experimental::Http::HttpResponseHeader__typeof(),
        ::app::Uno::String__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Experimental_Http_HttpResponseHeader__Uno_Buffer__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Experimental.Http.HttpResponseHeader,Uno.Buffer>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Experimental::Http::HttpResponseHeader__typeof(),
        ::app::Uno::Buffer__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__float__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<float>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::Float__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__float2__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<float2>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::Float2__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__float3__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<float3>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::Float3__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__float4__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<float4>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::Float4__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Android_Button__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Android.Button>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Android::Button__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Android_Button__float4__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Android.Button,float4>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Android::Button__typeof(),
        ::app::Uno::Float4__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Behavior__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Behavior>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Behavior__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Camera_PictureResult__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Camera.PictureResult>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Camera::PictureResult__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Button__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Button>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Button__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Button__string__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Button,string>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Button__typeof(),
        ::app::Uno::String__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Control__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Control>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Control__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Control__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Control,Fuse.Drawing.Brush>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Control__typeof(),
        ::app::Fuse::Drawing::Brush__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_GraphicsView__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.GraphicsView>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::GraphicsView__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_GraphicsView__float4__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.GraphicsView,float4>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::GraphicsView__typeof(),
        ::app::Uno::Float4__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Grid__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Grid>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Grid__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Grid__float__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Grid,float>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Grid__typeof(),
        ::app::Uno::Float__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Image__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Image>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Image__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Image__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Image,Fuse.Elements.Alignment>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Image__typeof(),
        ::app::Fuse::Elements::Alignment__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Image__Fuse_Elements_StretchDirection__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Image,Fuse.Elements.StretchDirection>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Image__typeof(),
        ::app::Fuse::Elements::StretchDirection__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Image__Fuse_Elements_StretchMode__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Image,Fuse.Elements.StretchMode>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Image__typeof(),
        ::app::Fuse::Elements::StretchMode__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Image__Fuse_Elements_StretchSizing__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Image,Fuse.Elements.StretchSizing>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Image__typeof(),
        ::app::Fuse::Elements::StretchSizing__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Image,Fuse.Resources.MemoryPolicy>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Image__typeof(),
        ::app::Fuse::Resources::MemoryPolicy__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Number__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Number>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Number__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Number__float__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Number,float>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Number__typeof(),
        ::app::Uno::Float__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Number__string__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Number,string>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Number__typeof(),
        ::app::Uno::String__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_PageIndicator__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.PageIndicator>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::PageIndicator__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_PageIndicator__Uno_UX_IFactory__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.PageIndicator,Uno.UX.IFactory>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::PageIndicator__typeof(),
        ::app::Uno::UX::IFactory__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Panel__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Panel>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Panel__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Panel__Fuse_Layouts_Layout__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Panel,Fuse.Layouts.Layout>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Panel__typeof(),
        ::app::Fuse::Layouts::Layout__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Panel__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Panel,Fuse.Node>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Panel__typeof(),
        ::app::Fuse::Node__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_PlainTextEdit__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.PlainTextEdit>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::PlainTextEdit__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.PlainTextEdit,Uno.UX.IFactory>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::PlainTextEdit__typeof(),
        ::app::Uno::UX::IFactory__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_RangeControl__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.RangeControl>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::RangeControl__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_RangeControl__double__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.RangeControl,double>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::RangeControl__typeof(),
        ::app::Uno::Double__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Rectangle__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Rectangle>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Rectangle__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Rectangle__float4__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Rectangle,float4>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Rectangle__typeof(),
        ::app::Uno::Float4__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_ScrollView__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.ScrollView>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::ScrollView__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.ScrollView,Fuse.Gestures.ScrollDirections>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::ScrollView__typeof(),
        ::app::Fuse::Gestures::ScrollDirections__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Shape__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Shape>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Shape__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Shape__float__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Shape,float>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Shape__typeof(),
        ::app::Uno::Float__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Shape__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Shape,Fuse.Drawing.Brush>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Shape__typeof(),
        ::app::Fuse::Drawing::Brush__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_Shape__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.Shape,Fuse.Drawing.Stroke>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::Shape__typeof(),
        ::app::Fuse::Drawing::Stroke__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_StackPanel__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.StackPanel>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::StackPanel__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_StackPanel__float__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.StackPanel,float>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::StackPanel__typeof(),
        ::app::Uno::Float__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.StackPanel,Fuse.Layouts.Orientation>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::StackPanel__typeof(),
        ::app::Fuse::Layouts::Orientation__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_TextControl__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.TextControl>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::TextControl__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_TextControl__float__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.TextControl,float>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::TextControl__typeof(),
        ::app::Uno::Float__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_TextControl__float4__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.TextControl,float4>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::TextControl__typeof(),
        ::app::Uno::Float4__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.TextControl,Fuse.Elements.TextAlignment>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::TextControl__typeof(),
        ::app::Fuse::Elements::TextAlignment__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.TextControl,Fuse.Elements.TextWrapping>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::TextControl__typeof(),
        ::app::Fuse::Elements::TextWrapping__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_TextControl__Fuse_Font__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.TextControl,Fuse.Font>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::TextControl__typeof(),
        ::app::Fuse::Font__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_TextControl__string__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.TextControl,string>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::TextControl__typeof(),
        ::app::Uno::String__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_TextInput__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.TextInput>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::TextInput__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_TextInput__bool__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.TextInput,bool>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::TextInput__typeof(),
        ::app::Uno::Bool__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_TextInput__float4__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.TextInput,float4>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::TextInput__typeof(),
        ::app::Uno::Float4__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.TextInput,Uno.Platform.TextInputHint>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::TextInput__typeof(),
        ::app::Uno::Platform::TextInputHint__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_ToggleControl__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.ToggleControl>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::ToggleControl__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Controls_ToggleControl__bool__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Controls.ToggleControl,bool>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Controls::ToggleControl__typeof(),
        ::app::Uno::Bool__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Drawing.Brush>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Drawing::Brush__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Drawing.Stroke>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Drawing::Stroke__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Effects_Effect__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Effects.Effect>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Effects::Effect__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Elements.Element>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Elements::Element__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Elements_Element__bool__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Elements.Element,bool>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Elements::Element__typeof(),
        ::app::Uno::Bool__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Elements_Element__float__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Elements.Element,float>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Elements::Element__typeof(),
        ::app::Uno::Float__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Elements_Element__float2__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Elements.Element,float2>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Elements::Element__typeof(),
        ::app::Uno::Float2__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Elements_Element__float4__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Elements.Element,float4>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Elements::Element__typeof(),
        ::app::Uno::Float4__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Elements_Element__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Elements.Element,Fuse.Elements.Alignment>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Elements::Element__typeof(),
        ::app::Fuse::Elements::Alignment__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Elements_Element__Fuse_Elements_CachingMode__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Elements.Element,Fuse.Elements.CachingMode>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Elements::Element__typeof(),
        ::app::Fuse::Elements::CachingMode__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Elements_Element__Fuse_Elements_HitTestMode__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Elements.Element,Fuse.Elements.HitTestMode>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Elements::Element__typeof(),
        ::app::Fuse::Elements::HitTestMode__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Elements_Element__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Elements.Element,Fuse.Elements.Visibility>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Elements::Element__typeof(),
        ::app::Fuse::Elements::Visibility__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Entities_Entity__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Entities.Entity>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Entities::Entity__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_iOS_Button__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.iOS.Button>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::iOS::Button__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_iOS_Button__float4__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.iOS.Button,float4>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::iOS::Button__typeof(),
        ::app::Uno::Float4__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Layouts_Column__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Layouts.Column>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Layouts::Column__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Layouts_Row__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Layouts.Row>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Layouts::Row__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Node>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Node__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Node__bool__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Node,bool>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Node__typeof(),
        ::app::Uno::Bool__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Node__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Node,Fuse.Node>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Node__typeof(),
        ::app::Fuse::Node__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Node__string__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Node,string>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Node__typeof(),
        ::app::Uno::String__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Resources.ImageSource>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Resources::ImageSource__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Shapes_Rectangle__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Shapes.Rectangle>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Shapes::Rectangle__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Shapes_Rectangle__float4__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Shapes.Rectangle,float4>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Shapes::Rectangle__typeof(),
        ::app::Uno::Float4__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Shapes_Shape__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Shapes.Shape>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Shapes::Shape__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Shapes_Shape__float__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Shapes.Shape,float>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Shapes::Shape__typeof(),
        ::app::Uno::Float__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Shapes_Shape__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Shapes.Shape,Fuse.Drawing.Brush>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Shapes::Shape__typeof(),
        ::app::Fuse::Drawing::Brush__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Shapes.Shape,Fuse.Drawing.Stroke>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Shapes::Shape__typeof(),
        ::app::Fuse::Drawing::Stroke__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Style__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Style>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Style__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Transform__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Transform>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Transform__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Fuse_Triggers_Trigger__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Fuse.Triggers.Trigger>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Triggers::Trigger__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__int__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<int>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::Int__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__int__object__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<int,object>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::Int__typeof(),
        ::uObject__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__object__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<object>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__object____typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<object[]>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::uGetArrayType(::uObject__typeof()));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__object__double__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<object,double>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::Double__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__object__int__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<object,int>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::Int__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__object__object__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<object,object>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::uObject__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__object__object____typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<object,object[]>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::uGetArrayType(::uObject__typeof()));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__string__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<string>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::String__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__texture2D__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<texture2D>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::Graphics::Texture2D__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Uno_Exception__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Uno.Exception>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::Exception__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Uno_IntPtr__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Uno.IntPtr>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::IntPtr__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::Net::Http::HttpMessageHandlerRequest__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Uno_Net_Http_HttpMessageHandlerRequest__int__int__bool__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest,int,int,bool>", 4);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::Net::Http::HttpMessageHandlerRequest__typeof(),
        ::app::Uno::Int__typeof(),
        ::app::Uno::Int__typeof(),
        ::app::Uno::Bool__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Uno_Net_Http_HttpMessageHandlerRequest__string__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest,string>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::Net::Http::HttpMessageHandlerRequest__typeof(),
        ::app::Uno::String__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket,int>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket__typeof(),
        ::app::Uno::Int__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Uno.Time.Text.LocalTimePattern_LocalTimeBucket,int>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket__typeof(),
        ::app::Uno::Int__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Uno_Time_Text_OffsetPattern_OffsetBucket__int__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Uno.Time.Text.OffsetPattern_OffsetBucket,int>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::Time::Text::OffsetPattern_OffsetBucket__typeof(),
        ::app::Uno::Int__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Uno.UX.FileSource>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::UX::FileSource__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Uno_UX_IFactory__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Uno.UX.IFactory>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::UX::IFactory__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Uno_UX_ITemplate__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Uno.UX.ITemplate>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::UX::ITemplate__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Action__Uno_UX_Resource__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Action<Uno.UX.Resource>", 1);

    type->SetSignature(::uVoid__typeof(),
        ::app::Uno::UX::Resource__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Application*> Application___Current;

Application__uType* Application__typeof()
{
    static ::uStaticStrong<Application__uType*> type;
    if (type != NULL) return type;

    type = (Application__uType*)::uAllocClassType(sizeof(Application__uType), "Uno.Application", false, 0, 2, 0);

    type->SetStrongRefs(
        "_GraphicsContext", offsetof(Application, _GraphicsContext),
        "_Window", offsetof(Application, _Window));

    return type;
}

void Application___ObjInit(Application* __this)
{
    if (Application__get_Current(NULL) == NULL)
    {
        Application__set_Current(NULL, __this);
    }

    __this->Window(::app::Uno::Platform::Window__New_1(NULL));
    __this->GraphicsContext(::app::Uno::Graphics::GraphicsContext__New_1(NULL));
    __this->ClearColor(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
    __this->ClearDepth(1.0f);
    __this->DrawNextFrame(true);
}

void Application__Draw(Application* __this)
{
}

::app::Uno::Float4 Application__get_ClearColor(Application* __this)
{
    return __this->_ClearColor;
}

float Application__get_ClearDepth(Application* __this)
{
    return __this->_ClearDepth;
}

Application* Application__get_Current(::uStatic* __this)
{
    return Application___Current;
}

bool Application__get_DrawNextFrame(Application* __this)
{
    return __this->_DrawNextFrame;
}

::app::Uno::Graphics::GraphicsContext* Application__get_GraphicsContext(Application* __this)
{
    return __this->_GraphicsContext;
}

::app::Uno::Platform::Window* Application__get_Window(Application* __this)
{
    return __this->_Window;
}

void Application__Load(Application* __this)
{
}

void Application__set_ClearColor(Application* __this, ::app::Uno::Float4 value)
{
    __this->_ClearColor = value;
}

void Application__set_ClearDepth(Application* __this, float value)
{
    __this->_ClearDepth = value;
}

void Application__set_Current(::uStatic* __this, Application* value)
{
    Application___Current = value;
}

void Application__set_DrawNextFrame(Application* __this, bool value)
{
    __this->_DrawNextFrame = value;
}

void Application__set_GraphicsContext(Application* __this, ::app::Uno::Graphics::GraphicsContext* value)
{
    __this->_GraphicsContext = value;
}

void Application__set_Window(Application* __this, ::app::Uno::Platform::Window* value)
{
    __this->_Window = value;
}

void Application__Update(Application* __this)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Exceptions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArgumentException__uType* ArgumentException__typeof()
{
    static ::uStaticStrong<ArgumentException__uType*> type;
    if (type != NULL) return type;

    type = (ArgumentException__uType*)::uAllocClassType(sizeof(ArgumentException__uType), "Uno.ArgumentException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    return type;
}

void ArgumentException___ObjInit_2(ArgumentException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit_1(__this, message);
}

void ArgumentException___ObjInit_3(ArgumentException* __this, ::uString* message, ::uString* paramName)
{
    ::app::Uno::Exception___ObjInit_1(__this, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, paramName, ::uGetConstString(": ")), message));
}

ArgumentException* ArgumentException__New_3(::uStatic* __this, ::uString* message)
{
    ArgumentException* inst = (ArgumentException*)::uAllocObject(sizeof(ArgumentException), ArgumentException__typeof());
    inst->_ObjInit_2(message);
    return inst;
}

ArgumentException* ArgumentException__New_4(::uStatic* __this, ::uString* message, ::uString* paramName)
{
    ArgumentException* inst = (ArgumentException*)::uAllocObject(sizeof(ArgumentException), ArgumentException__typeof());
    inst->_ObjInit_3(message, paramName);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Exceptions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArgumentNullException__uType* ArgumentNullException__typeof()
{
    static ::uStaticStrong<ArgumentNullException__uType*> type;
    if (type != NULL) return type;

    type = (ArgumentNullException__uType*)::uAllocClassType(sizeof(ArgumentNullException__uType), "Uno.ArgumentNullException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::ArgumentException__typeof());

    return type;
}

void ArgumentNullException___ObjInit_4(ArgumentNullException* __this, ::uString* paramName)
{
    ::app::Uno::ArgumentException___ObjInit_3(__this, ::uGetConstString("value was null"), paramName);
}

ArgumentNullException* ArgumentNullException__New_5(::uStatic* __this, ::uString* paramName)
{
    ArgumentNullException* inst = (ArgumentNullException*)::uAllocObject(sizeof(ArgumentNullException), ArgumentNullException__typeof());
    inst->_ObjInit_4(paramName);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Exceptions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArgumentOutOfRangeException__uType* ArgumentOutOfRangeException__typeof()
{
    static ::uStaticStrong<ArgumentOutOfRangeException__uType*> type;
    if (type != NULL) return type;

    type = (ArgumentOutOfRangeException__uType*)::uAllocClassType(sizeof(ArgumentOutOfRangeException__uType), "Uno.ArgumentOutOfRangeException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::ArgumentException__typeof());

    return type;
}

void ArgumentOutOfRangeException___ObjInit_4(ArgumentOutOfRangeException* __this, ::uString* message, ::uString* paramName)
{
    ::app::Uno::ArgumentException___ObjInit_3(__this, message, paramName);
}

void ArgumentOutOfRangeException___ObjInit_5(ArgumentOutOfRangeException* __this, ::uString* paramName)
{
    ::app::Uno::ArgumentException___ObjInit_3(__this, ::uGetConstString("value out of range"), paramName);
}

ArgumentOutOfRangeException* ArgumentOutOfRangeException__New_5(::uStatic* __this, ::uString* message, ::uString* paramName)
{
    ArgumentOutOfRangeException* inst = (ArgumentOutOfRangeException*)::uAllocObject(sizeof(ArgumentOutOfRangeException), ArgumentOutOfRangeException__typeof());
    inst->_ObjInit_4(message, paramName);
    return inst;
}

ArgumentOutOfRangeException* ArgumentOutOfRangeException__New_6(::uStatic* __this, ::uString* paramName)
{
    ArgumentOutOfRangeException* inst = (ArgumentOutOfRangeException*)::uAllocObject(sizeof(ArgumentOutOfRangeException), ArgumentOutOfRangeException__typeof());
    inst->_ObjInit_5(paramName);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Array__uType* Array__typeof()
{
    static ::uStaticStrong<Array__uType*> type;
    if (type != NULL) return type;

    type = (Array__uType*)::uAllocClassType(sizeof(Array__uType), "Uno.Array");

    return type;
}

void Array__Copy__byte(::uStatic* __this, ::uArray* sourceArray, ::uArray* destinationArray, int length)
{
    ::app::Uno::Runtime::Implementation::ArrayCopyImpl__Copy__byte(NULL, sourceArray, 0, destinationArray, 0, length);
}

void Array__Copy__byte_1(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length)
{
    ::app::Uno::Runtime::Implementation::ArrayCopyImpl__Copy__byte(NULL, sourceArray, sourceIndex, destinationArray, destinationIndex, length);
}

void Array__Sort__Fuse_Node(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison)
{
    ::app::Uno::Runtime::Implementation::ArraySortImpl__Sort__Fuse_Node(NULL, elements, index, length, comparison);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Attribute__uType* Attribute__typeof()
{
    static ::uStaticStrong<Attribute__uType*> type;
    if (type != NULL) return type;

    type = (Attribute__uType*)::uAllocClassType(sizeof(Attribute__uType), "Uno.Attribute", false, 0, 0, 0);

    return type;
}

void Attribute___ObjInit(Attribute* __this)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* AttributeTargets__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.AttributeTargets", ::app::Uno::Int__typeof(), 12);

    type->SetLiterals(
        "Class", 4LL,
        "Struct", 8LL,
        "Enum", 16LL,
        "Constructor", 32LL,
        "Method", 64LL,
        "Property", 128LL,
        "Field", 256LL,
        "Event", 512LL,
        "Interface", 1024LL,
        "Parameter", 2048LL,
        "Delegate", 4096LL,
        "All", 32767LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AttributeUsageAttribute__uType* AttributeUsageAttribute__typeof()
{
    static ::uStaticStrong<AttributeUsageAttribute__uType*> type;
    if (type != NULL) return type;

    type = (AttributeUsageAttribute__uType*)::uAllocClassType(sizeof(AttributeUsageAttribute__uType), "Uno.AttributeUsageAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void AttributeUsageAttribute___ObjInit_1(AttributeUsageAttribute* __this, int validOn)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

AttributeUsageAttribute* AttributeUsageAttribute__New_1(::uStatic* __this, int validOn)
{
    AttributeUsageAttribute* inst = (AttributeUsageAttribute*)::uAllocObject(sizeof(AttributeUsageAttribute), AttributeUsageAttribute__typeof());
    inst->_ObjInit_1(validOn);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Bool__uType* Bool__typeof()
{
    static ::uStaticStrong<Bool__uType*> type;
    if (type != NULL) return type;

    type = (Bool__uType*)::uAllocStructType(sizeof(Bool__uType), "Uno.Bool", sizeof(bool), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Bool__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Bool__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Bool__ToString;

    return type;
}

bool Bool__Equals(bool* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Bool__typeof(), *__this), o);
}

int Bool__GetHashCode(bool* __this)
{
    return *__this ? 1 : 0;
}

::uString* Bool__ToString(bool* __this)
{
    return uGetConstString(*__this ? "True" : "False");
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Buffer__uType* Buffer__typeof()
{
    static ::uStaticStrong<Buffer__uType*> type;
    if (type != NULL) return type;

    type = (Buffer__uType*)::uAllocClassType(sizeof(Buffer__uType), "Uno.Buffer", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(Buffer, _data));

    return type;
}

void Buffer___ObjInit(Buffer* __this, ::uArray* data, int offset, int sizeInBytes, bool isReadOnly)
{
    __this->_data = data;
    __this->_offset = offset;
    __this->_sizeInBytes = sizeInBytes;
    __this->_isReadOnly = isReadOnly;
}

void Buffer___ObjInit_1(Buffer* __this, ::uArray* data)
{
    __this->_ObjInit(data, 0, ::uPtr< ::uArray*>(data)->Length(), true);
}

void Buffer___ObjInit_2(Buffer* __this, int sizeInBytes)
{
    __this->_ObjInit(::uNewArray(::app::Uno::Byte__typeof(), sizeInBytes), 0, sizeInBytes, false);
}

::uArray* Buffer__get_GetHandle(Buffer* __this)
{
    return __this->_data;
}

::uByte Buffer__get_Item(Buffer* __this, int offset)
{
    return __this->GetByte(offset);
}

::uArray* Buffer__get_SetHandle(Buffer* __this)
{
    if (__this->_isReadOnly)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Buffer is read only")));
    }

    return __this->_data;
}

int Buffer__get_SizeInBytes(Buffer* __this)
{
    return __this->_sizeInBytes;
}

::uByte Buffer__GetByte(Buffer* __this, int offset)
{
    return ::uPtr< ::uArray*>(__this->GetHandle())->Item< ::uByte>(__this->_offset + offset);
}

Buffer* Buffer__New_1(::uStatic* __this, ::uArray* data, int offset, int sizeInBytes, bool isReadOnly)
{
    Buffer* inst = (Buffer*)::uAllocObject(sizeof(Buffer), Buffer__typeof());
    inst->_ObjInit(data, offset, sizeInBytes, isReadOnly);
    return inst;
}

Buffer* Buffer__New_2(::uStatic* __this, ::uArray* data)
{
    Buffer* inst = (Buffer*)::uAllocObject(sizeof(Buffer), Buffer__typeof());
    inst->_ObjInit_1(data);
    return inst;
}

Buffer* Buffer__New_3(::uStatic* __this, int sizeInBytes)
{
    Buffer* inst = (Buffer*)::uAllocObject(sizeof(Buffer), Buffer__typeof());
    inst->_ObjInit_2(sizeInBytes);
    return inst;
}

void Buffer__set_Item(Buffer* __this, int offset, ::uByte value)
{
    __this->SetByte(offset, value);
}

void Buffer__SetByte(Buffer* __this, int offset, ::uByte value)
{
    ::uPtr< ::uArray*>(__this->SetHandle())->Item< ::uByte>(__this->_offset + offset) = value;
}

void Buffer__SetByte4(Buffer* __this, int offset, ::app::Uno::Byte4 value)
{
    __this->SetByte(offset, value.X);
    __this->SetByte(offset + 1, value.Y);
    __this->SetByte(offset + 2, value.Z);
    __this->SetByte(offset + 3, value.W);
}

void Buffer__SetFloat(Buffer* __this, int offset, float value, bool littleEndian)
{
    ::app::Uno::Runtime::Implementation::BufferImpl__SetFloat(NULL, __this->SetHandle(), __this->_offset + offset, value, littleEndian);
}

void Buffer__SetFloat2(Buffer* __this, int offset, ::app::Uno::Float2 value, bool littleEndian)
{
    __this->SetFloat(offset, value.X, littleEndian);
    __this->SetFloat(offset + 4, value.Y, littleEndian);
}

void Buffer__SetFloat3(Buffer* __this, int offset, ::app::Uno::Float3 value, bool littleEndian)
{
    __this->SetFloat(offset, value.X, littleEndian);
    __this->SetFloat(offset + 4, value.Y, littleEndian);
    __this->SetFloat(offset + 8, value.Z, littleEndian);
}

void Buffer__SetFloat4(Buffer* __this, int offset, ::app::Uno::Float4 value, bool littleEndian)
{
    __this->SetFloat(offset, value.X, littleEndian);
    __this->SetFloat(offset + 4, value.Y, littleEndian);
    __this->SetFloat(offset + 8, value.Z, littleEndian);
    __this->SetFloat(offset + 12, value.W, littleEndian);
}

void Buffer__SetUShort(Buffer* __this, int offset, ::uUShort value, bool littleEndian)
{
    ::app::Uno::Runtime::Implementation::BufferImpl__SetUShort(NULL, __this->SetHandle(), __this->_offset + offset, value, littleEndian);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BundleFile__uType* BundleFile__typeof()
{
    static ::uStaticStrong<BundleFile__uType*> type;
    if (type != NULL) return type;

    type = (BundleFile__uType*)::uAllocClassType(sizeof(BundleFile__uType), "Uno.BundleFile", false, 0, 1, 0);

    type->SetStrongRefs(
        "_Name", offsetof(BundleFile, _Name));

    return type;
}

void BundleFile___ObjInit(BundleFile* __this, ::uString* filename)
{
    __this->Name(filename);
}

::Xli::Stream* BundleFile__CppXliOpenRead(BundleFile* __this)
{
    Xli::String filename = ::uStringToXliString(__this->_Name);
    
    Xli::PrintLine("Loading: " + filename);
    Xli::Out->GetStream()->Flush();
    
    return Xli::Bundle->OpenFile(filename);
}

::uString* BundleFile__get_Name(BundleFile* __this)
{
    return __this->_Name;
}

BundleFile* BundleFile__New_1(::uStatic* __this, ::uString* filename)
{
    BundleFile* inst = (BundleFile*)::uAllocObject(sizeof(BundleFile), BundleFile__typeof());
    inst->_ObjInit(filename);
    return inst;
}

::app::Uno::IO::Stream* BundleFile__OpenRead(BundleFile* __this)
{
    return (::app::Uno::IO::Stream*)::app::Uno::IO::CppXliStream__New_1(NULL, __this->CppXliOpenRead());
}

::uArray* BundleFile__ReadAllBytes(BundleFile* __this)
{
    Xli::String filename = ::uStringToXliString(__this->_Name);
    
    Xli::PrintLine("Loading: " + filename);
    Xli::Out->GetStream()->Flush();
    
    Xli::Managed<Xli::DataAccessor> buffer = Xli::Bundle->OpenFileAsBuffer(filename);
    
    return ::uNewArray(::app::Uno::Byte__typeof(), buffer->GetSizeInBytes(), buffer->GetPtr());
}

::uString* BundleFile__ReadAllText(BundleFile* __this)
{
    return ::app::Uno::Runtime::Implementation::TextEncodingImpl__DecodeUtf8(NULL, __this->ReadAllBytes());
}

void BundleFile__set_Name(BundleFile* __this, ::uString* value)
{
    __this->_Name = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Byte__uType* Byte__typeof()
{
    static ::uStaticStrong<Byte__uType*> type;
    if (type != NULL) return type;

    type = (Byte__uType*)::uAllocStructType(sizeof(Byte__uType), "Uno.Byte", sizeof(::uByte), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Byte__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Byte__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Byte__ToString;

    return type;
}

bool Byte__Equals(::uByte* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox< ::uByte>(Byte__typeof(), *__this), o);
}

int Byte__GetHashCode(::uByte* __this)
{
    return (int)*__this;
}

::uString* Byte__ToString(::uByte* __this)
{
    Xli::String ansi((int)*__this);
    return uNewStringAnsi(ansi.Ptr(), ansi.Length());
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Byte4__uType* Byte4__typeof()
{
    static ::uStaticStrong<Byte4__uType*> type;
    if (type != NULL) return type;

    type = (Byte4__uType*)::uAllocStructType(sizeof(Byte4__uType), "Uno.Byte4", sizeof(Byte4), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Byte4__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Byte4__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Byte4__ToString;

    return type;
}

void Byte4___ObjInit_1(Byte4* __this, ::uByte x, ::uByte y, ::uByte z, ::uByte w)
{
    __this->X = x;
    __this->Y = y;
    __this->Z = z;
    __this->W = w;
}

bool Byte4__Equals(Byte4* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Byte4__typeof(), *__this), o);
}

int Byte4__GetHashCode(Byte4* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(Byte4__typeof(), *__this));
}

Byte4 Byte4__New_2(::uStatic* __this, ::uByte x, ::uByte y, ::uByte z, ::uByte w)
{
    Byte4 inst = ::uDefault< Byte4>();
    inst._ObjInit_1(x, y, z, w);
    return inst;
}

::uString* Byte4__ToString(Byte4* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::Byte::ToString(__this->X), ::uGetConstString(", ")), ::app::Uno::Byte::ToString(__this->Y)), ::uGetConstString(", ")), ::app::Uno::Byte::ToString(__this->Z)), ::uGetConstString(", ")), ::app::Uno::Byte::ToString(__this->W));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Char__uType* Char__typeof()
{
    static ::uStaticStrong<Char__uType*> type;
    if (type != NULL) return type;

    type = (Char__uType*)::uAllocStructType(sizeof(Char__uType), "Uno.Char", sizeof(::uChar), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Char__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Char__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Char__ToString;

    return type;
}

bool Char__Equals(::uChar* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox< ::uChar>(Char__typeof(), *__this), o);
}

int Char__GetHashCode(::uChar* __this)
{
    return (int)*__this;
}

bool Char__IsWhiteSpace(::uStatic* __this, ::uChar c)
{
    ::uString* whitespace = ::uGetConstString(" \341\232\200\342\200\200\342\200\201\342\200\202\342\200\203\342\200\204\342\200\205\342\200\206\342\200\207\342\200\210\342\200\211\342\200\212\342\200\257\342\201\237\343\200\200\342\200\250\342\200\251\t\n\v\f\r\302\205\302\240");
    return ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(whitespace), c, 0) != -1;
}

::uChar Char__ToLower(::uStatic* __this, ::uChar c_)
{
    return Xli::Unicode::ToLower(c_);
}

::uString* Char__ToString(::uChar* __this)
{
    uString* result = uAllocString(1);
    result->_ptr[0] = *__this;
    return result;
}

::uChar Char__ToUpper(::uStatic* __this, ::uChar c_)
{
    return Xli::Unicode::ToUpper(c_);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*> CharPunctuationChecker__punctuationRangeList;
::uStaticStrong< ::uString*> CharPunctuationChecker__singlePunctuationChars;

CharPunctuationChecker__uType* CharPunctuationChecker__typeof()
{
    static ::uStaticStrong<CharPunctuationChecker__uType*> type;
    if (type != NULL) return type;

    type = (CharPunctuationChecker__uType*)::uAllocClassType(sizeof(CharPunctuationChecker__uType), "Uno.CharPunctuationChecker", false, 0, 0, 0);

    return type;
}

void CharPunctuationChecker___TypeInit(::uStatic* __this)
{
    ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange* collection_123;
    CharPunctuationChecker__singlePunctuationChars = ::uGetConstString(":;?@_{}\302\241\302\253\302\255\302\267\302\273\302\277\315\276\316\207\326\211\326\212\326\276\327\200\327\203\327\206\327\263\327\264\330\214\330\215\330\233\330\236\330\237\333\224\340\245\244\340\245\245\340\245\260\340\267\264\340\276\205\340\277\220\340\277\221\341\203\273\341\231\255\341\231\256\341\232\233\341\232\234\341\234\265\341\234\266\341\245\204\341\245\205\341\247\236\341\247\237\341\250\236\341\250\237\342\201\275\342\201\276\342\202\215\342\202\216\342\214\251\342\214\252\342\247\274\342\247\275\342\263\276\342\263\277\342\270\234\342\270\235\343\200\260\343\200\275\343\202\240\343\203\273\357\264\276\357\264\277\357\271\243\357\271\250\357\271\252\357\271\253\357\274\232\357\274\233\357\274\237\357\274\240\357\274\277\357\275\233\357\275\235");
    CharPunctuationChecker__punctuationRangeList = (collection_123 = ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange__New_1(NULL), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, '!', '#')), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, '%', '*')), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, ',', '/')), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, '[', ']')), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 1370, 1375)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 1642, 1645)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 1792, 1805)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 2039, 2041)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 3663, 3675)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 3844, 3858)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 3898, 3901)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 4170, 4175)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 4961, 4968)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 5867, 5869)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 6100, 6102)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 6104, 6106)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 6144, 6154)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 7002, 7008)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 8208, 8231)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 8240, 8259)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 8261, 8273)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 8275, 8286)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 10088, 10101)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 10076, 10182)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 10214, 10219)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 10627, 10648)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 10712, 10715)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 11513, 11516)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 11776, 11799)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 12289, 12291)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 12296, 12305)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 12308, 12319)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 43124, 43127)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 65040, 65049)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 65072, 65106)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 65108, 65121)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 65281, 65283)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 65285, 65290)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 65292, 65295)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 65339, 65341)), ::uPtr< ::app::Uno::Collections::List__Uno_CharPunctuationChecker_PunctuationRange*>(collection_123)->Add(::app::Uno::CharPunctuationChecker_PunctuationRange__New_1(NULL, 65375, 65381)), collection_123);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CharPunctuationChecker_PunctuationRange__uType* CharPunctuationChecker_PunctuationRange__typeof()
{
    static ::uStaticStrong<CharPunctuationChecker_PunctuationRange__uType*> type;
    if (type != NULL) return type;

    type = (CharPunctuationChecker_PunctuationRange__uType*)::uAllocClassType(sizeof(CharPunctuationChecker_PunctuationRange__uType), "Uno.CharPunctuationChecker.PunctuationRange", false, 0, 0, 0);

    return type;
}

void CharPunctuationChecker_PunctuationRange___ObjInit(CharPunctuationChecker_PunctuationRange* __this, ::uChar start, ::uChar end)
{
    __this->Start(start);
    __this->End(end);
}

::uChar CharPunctuationChecker_PunctuationRange__get_End(CharPunctuationChecker_PunctuationRange* __this)
{
    return __this->_End;
}

::uChar CharPunctuationChecker_PunctuationRange__get_Start(CharPunctuationChecker_PunctuationRange* __this)
{
    return __this->_Start;
}

CharPunctuationChecker_PunctuationRange* CharPunctuationChecker_PunctuationRange__New_1(::uStatic* __this, ::uChar start, ::uChar end)
{
    CharPunctuationChecker_PunctuationRange* inst = (CharPunctuationChecker_PunctuationRange*)::uAllocObject(sizeof(CharPunctuationChecker_PunctuationRange), CharPunctuationChecker_PunctuationRange__typeof());
    inst->_ObjInit(start, end);
    return inst;
}

void CharPunctuationChecker_PunctuationRange__set_End(CharPunctuationChecker_PunctuationRange* __this, ::uChar value)
{
    __this->_End = value;
}

void CharPunctuationChecker_PunctuationRange__set_Start(CharPunctuationChecker_PunctuationRange* __this, ::uChar value)
{
    __this->_Start = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::app::Uno::Float3x3 Color__ToYCbCrMat;
::app::Uno::Float3x3 Color__ToYCbCrMatInv;

Color__uType* Color__typeof()
{
    static ::uStaticStrong<Color__uType*> type;
    if (type != NULL) return type;

    type = (Color__uType*)::uAllocClassType(sizeof(Color__uType), "Uno.Color");

    return type;
}

void Color___TypeInit(::uStatic* __this)
{
    Color__ToYCbCrMat = ::app::Uno::Float3x3__New_2(NULL, 0.299f, -0.168736f, 0.5f, 0.587f, -0.331264f, -0.418688f, 0.114f, 0.5f, -0.081312f);
    Color__ToYCbCrMatInv = ::app::Uno::Float3x3__New_2(NULL, 1.0f, 1.0f, 1.0f, 0.0f, -0.344136f, 1.772f, 1.402f, -0.714136f, 0.0f);
}

::app::Uno::Float4 Color__FromHex(::uStatic* __this, ::uString* hex)
{
    return Color__FromRgba32(NULL, Color__Rgba32FromHex(NULL, hex));
}

::app::Uno::Float4 Color__FromRgba32(::uStatic* __this, ::app::Uno::Int4 rgba)
{
    return ::app::Uno::Float4__New_2(NULL, (float)rgba.X / 255.0f, (float)rgba.Y / 255.0f, (float)rgba.Z / 255.0f, (float)rgba.W / 255.0f);
}

::app::Uno::Float4 Color__FromRgba32_1(::uStatic* __this, ::uUInt rgba)
{
    return ::app::Uno::Float4__New_2(NULL, (float)((rgba >> 24) & 255u) / 255.0f, (float)((rgba >> 16) & 255u) / 255.0f, (float)((rgba >> 8) & 255u) / 255.0f, (float)((rgba >> 0) & 255u) / 255.0f);
}

::app::Uno::Int4 Color__Rgba32FromHex(::uStatic* __this, ::uString* hex)
{
    if ((::uPtr< ::uString*>(hex)->Length() > 0) && (::uPtr< ::uString*>(hex)->Item(0) == '#'))
    {
        hex = ::app::Uno::String::Substring_1(::uPtr< ::uString*>(hex), 1);
    }

    if (hex->Length() == 3)
    {
        int r = ::app::Uno::ColorHelper__ParseBase(NULL, ::app::Uno::String::Substring(::uPtr< ::uString*>(hex), 0, 1), 16);
        int g = ::app::Uno::ColorHelper__ParseBase(NULL, ::app::Uno::String::Substring(hex, 1, 1), 16);
        int b = ::app::Uno::ColorHelper__ParseBase(NULL, ::app::Uno::String::Substring(hex, 2, 1), 16);
        int a = 15;
        return ::app::Uno::Int4__New_3(NULL, (r << 4) | r, (g << 4) | g, (b << 4) | b, (a << 4) | a);
    }
    else if (hex->Length() == 4)
    {
        int r = ::app::Uno::ColorHelper__ParseBase(NULL, ::app::Uno::String::Substring(::uPtr< ::uString*>(hex), 0, 1), 16);
        int g = ::app::Uno::ColorHelper__ParseBase(NULL, ::app::Uno::String::Substring(hex, 1, 1), 16);
        int b = ::app::Uno::ColorHelper__ParseBase(NULL, ::app::Uno::String::Substring(hex, 2, 1), 16);
        int a = ::app::Uno::ColorHelper__ParseBase(NULL, ::app::Uno::String::Substring(hex, 3, 1), 16);
        return ::app::Uno::Int4__New_3(NULL, (r << 4) | r, (g << 4) | g, (b << 4) | b, (a << 4) | a);
    }
    else if (hex->Length() == 6)
    {
        int r = ::app::Uno::ColorHelper__ParseBase(NULL, ::app::Uno::String::Substring(::uPtr< ::uString*>(hex), 0, 2), 16);
        int g = ::app::Uno::ColorHelper__ParseBase(NULL, ::app::Uno::String::Substring(hex, 2, 2), 16);
        int b = ::app::Uno::ColorHelper__ParseBase(NULL, ::app::Uno::String::Substring(hex, 4, 2), 16);
        int a = 255;
        return ::app::Uno::Int4__New_3(NULL, r, g, b, a);
    }
    else if (hex->Length() == 8)
    {
        int r = ::app::Uno::ColorHelper__ParseBase(NULL, ::app::Uno::String::Substring(::uPtr< ::uString*>(hex), 0, 2), 16);
        int g = ::app::Uno::ColorHelper__ParseBase(NULL, ::app::Uno::String::Substring(hex, 2, 2), 16);
        int b = ::app::Uno::ColorHelper__ParseBase(NULL, ::app::Uno::String::Substring(hex, 4, 2), 16);
        int a = ::app::Uno::ColorHelper__ParseBase(NULL, ::app::Uno::String::Substring(hex, 6, 2), 16);
        return ::app::Uno::Int4__New_3(NULL, r, g, b, a);
    }
    else
    {
        U_THROW(::app::Uno::ArgumentException__New_4(NULL, hex, ::uGetConstString("hex")));
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ColorHelper__uType* ColorHelper__typeof()
{
    static ::uStaticStrong<ColorHelper__uType*> type;
    if (type != NULL) return type;

    type = (ColorHelper__uType*)::uAllocClassType(sizeof(ColorHelper__uType), "Uno.ColorHelper");

    return type;
}

int ColorHelper__BaseValue(::uStatic* __this, ::uChar c)
{
    if ((c >= '0') && (c <= '9'))
    {
        return (int)c - 48;
    }
    else if ((c >= 'a') && (c <= 'z'))
    {
        return ((int)c - 97) + 10;
    }
    else if ((c >= 'A') && (c <= 'Z'))
    {
        return ((int)c - 65) + 10;
    }

    U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("charBaseValue: "), ::uBox< ::uChar>(::app::Uno::Char__typeof(), c))));
}

int ColorHelper__ParseBase(::uStatic* __this, ::uString* str, int radix)
{
    if ((radix < 2) || (radix > 36))
    {
        U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::uGetConstString("base")));
    }

    if (::uPtr< ::uString*>(str)->Length() < 1)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_6(NULL, ::uGetConstString("str.Length")));
    }

    int at = 0;
    bool neg = false;

    if (::uPtr< ::uString*>(str)->Item(0) == '-')
    {
        neg = true;
        at++;
    }
    else if (::uPtr< ::uString*>(str)->Item(0) == '+')
    {
        at++;
    }

    int value = 0;

    while (at < ::uPtr< ::uString*>(str)->Length())
    {
        int v = ColorHelper__BaseValue(NULL, ::uPtr< ::uString*>(str)->Item(at));

        if (v >= radix)
        {
            U_THROW(::app::Uno::ArgumentOutOfRangeException__New_6(NULL, str));
        }

        value = value * radix;
        value = value + v;
        at++;
    }

    if (neg)
    {
        value = -value;
    }

    return value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Comparison__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Comparison<Fuse.Node>", 2);

    type->SetSignature(::app::Uno::Int__typeof(),
        ::app::Fuse::Node__typeof(),
        ::app::Fuse::Node__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DateTime__uType* DateTime__typeof()
{
    static ::uStaticStrong<DateTime__uType*> type;
    if (type != NULL) return type;

    type = (DateTime__uType*)::uAllocClassType(sizeof(DateTime__uType), "Uno.DateTime", false, 0, 0, 0);

    return type;
}

::app::Uno::Time::ZonedDateTime* DateTime__get_Now(::uStatic* __this)
{
    return ::app::Uno::Time::ZonedDateTime__get_Now(NULL);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Delegate__uType* Delegate__typeof()
{
    static ::uStaticStrong<Delegate__uType*> type;
    if (type != NULL) return type;

    type = (Delegate__uType*)::uAllocClassType(sizeof(Delegate__uType), "Uno.Delegate", false, 0, 0, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))Delegate__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))Delegate__GetHashCode;

    return type;
}

::uDelegate* Delegate__Combine(::uStatic* __this, ::uDelegate* source_, ::uDelegate* value_)
{
    if (!value_)
        return source_;
    if (!source_)
        return value_;
    
    if (source_->__obj_type != value_->__obj_type)
        uThrowable::ThrowInvalidCast(XLI_FUNCTION, XLI_LINE);
    
    uDelegate clone;
    uDelegate *prev = &clone;
    
    for (uDelegate* d = value_; d != NULL; d = d->_prev)
    {
        prev = prev->_prev = ::uNewDelegateNonVirt(
            (::uDelegateType *)d->__obj_type, d->_func, d->_obj, d->_offset);
    }
    
    prev->_prev = source_;
    return clone._prev;
}

bool Delegate__Equals(::uDelegate* __this, ::uObject* other)
{
    return ::uIs(other, Delegate__typeof()) && Delegate__EqualsImpl(NULL, __this, ::uAs< ::uDelegate*>(other, Delegate__typeof()));
}

bool Delegate__EqualsImpl(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_)
{
    return
        (left_ == right_) ||
        (left_ != NULL &&
         right_ != NULL &&
         left_->__obj_type == right_->__obj_type &&
         left_->_func == right_->_func &&
         left_->_obj == right_->_obj &&
         left_->_offset == right_->_offset &&
         ::app::Uno::Object__Equals_1(NULL, left_->_prev, right_->_prev));
}

int Delegate__GetHashCode(::uDelegate* __this)
{
    return 0;
}

bool Delegate__op_Equality(::uStatic* __this, ::uDelegate* left, ::uDelegate* right)
{
    return Delegate__EqualsImpl(NULL, left, right);
}

bool Delegate__op_Inequality(::uStatic* __this, ::uDelegate* left, ::uDelegate* right)
{
    return !Delegate__EqualsImpl(NULL, left, right);
}

::uDelegate* Delegate__Remove(::uStatic* __this, ::uDelegate* source_, ::uDelegate* value_)
{
    if (source_ == NULL || value_ == NULL)
        return source_;
    
    if (value_->__obj_type != source_->__obj_type)
        uThrowable::ThrowInvalidCast(XLI_FUNCTION, XLI_LINE);
    
    for (uDelegate *first = source_; first != NULL; first = first->_prev)
    {
        bool match = true;
        uDelegate *last = first;
    
        for (uDelegate *d = value_; d != NULL; d = d->_prev, last = last->_prev)
        {
            if (last == NULL ||
                    d->_func != last->_func ||
                    d->_obj != last->_obj ||
                    d->_offset != last->_offset)
            {
                match = false;
                break;
            }
        }
    
        if (match)
        {
            uDelegate temp;
            uDelegate *prev = &temp;
    
            for (uDelegate *e = source_; e != first; e = e->_prev)
            {
                prev = prev->_prev = ::uNewDelegateNonVirt(
                    (::uDelegateType *)e->__obj_type, e->_func, e->_obj, e->_offset);
            }
    
            prev->_prev = last;
            return temp._prev;
        }
    }
    
    return source_;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Double__uType* Double__typeof()
{
    static ::uStaticStrong<Double__uType*> type;
    if (type != NULL) return type;

    type = (Double__uType*)::uAllocStructType(sizeof(Double__uType), "Uno.Double", sizeof(double), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Double__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Double__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Double__ToString;

    return type;
}

bool Double__Equals(double* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Double__typeof(), *__this), o);
}

int Double__GetHashCode(double* __this)
{
    return (int)Xli::DefaultTraits::Hash(*__this);
}

::uString* Double__ToString(double* __this)
{
    Xli::String ansi = Xli::DefaultTraits::ToString(*__this);
    return uNewStringAnsi(ansi.Ptr(), ansi.Length());
}

bool Double__TryParse(::uStatic* __this, ::uString* str_, double* res_)
{
    *res_ = 0;
    if (str_ == NULL)
    {
        return false;
    }
    
    Xli::String s = Xli::Unicode::Utf16To8(str_->_ptr, str_->_len);
    return s.TryToDouble(res_);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< EventArgs*> EventArgs__Empty;

EventArgs__uType* EventArgs__typeof()
{
    static ::uStaticStrong<EventArgs__uType*> type;
    if (type != NULL) return type;

    type = (EventArgs__uType*)::uAllocClassType(sizeof(EventArgs__uType), "Uno.EventArgs", false, 0, 0, 0);

    return type;
}

void EventArgs___ObjInit(EventArgs* __this)
{
}

void EventArgs___TypeInit(::uStatic* __this)
{
    EventArgs__Empty = EventArgs__New_1(NULL);
}

EventArgs* EventArgs__New_1(::uStatic* __this)
{
    EventArgs* inst = (EventArgs*)::uAllocObject(sizeof(EventArgs), EventArgs__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* EventHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.EventHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::EventArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* EventHandler__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.EventHandler<Fuse.Node>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Node__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* EventHandler__string__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.EventHandler<string>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::String__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* EventHandler__Uno_EventArgs__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.EventHandler<Uno.EventArgs>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::EventArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* EventHandler__Uno_Platform_ClosingEventArgs__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.EventHandler<Uno.Platform.ClosingEventArgs>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::Platform::ClosingEventArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* EventHandler__Uno_Platform_KeyEventArgs__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.EventHandler<Uno.Platform.KeyEventArgs>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::Platform::KeyEventArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* EventHandler__Uno_Platform_PointerEventArgs__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.EventHandler<Uno.Platform.PointerEventArgs>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::Platform::PointerEventArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* EventHandler__Uno_Platform_SystemUIWillResizeEventArgs__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::Platform::SystemUIWillResizeEventArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* EventHandler__Uno_Platform_TextInputEventArgs__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.EventHandler<Uno.Platform.TextInputEventArgs>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::Platform::TextInputEventArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* EventHandler__Uno_Platform_TimerEventArgs__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.EventHandler<Uno.Platform.TimerEventArgs>", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::Platform::TimerEventArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Exceptions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Exception__uType* Exception__typeof()
{
    static ::uStaticStrong<Exception__uType*> type;
    if (type != NULL) return type;

    type = (Exception__uType*)::uAllocClassType(sizeof(Exception__uType), "Uno.Exception", false, 0, 2, 0);

    type->__fp_get_Message = Exception__get_Message;
    type->__fp_ToString = (::uString*(*)(::uObject*))Exception__ToString;

    type->SetStrongRefs(
        "_message", offsetof(Exception, _message),
        "_trace", offsetof(Exception, _trace));

    return type;
}

void Exception___ObjInit(Exception* __this)
{
    __this->_ObjInit_1(::uGetConstString(""));
}

void Exception___ObjInit_1(Exception* __this, ::uString* message)
{
    __this->_message = message;
    __this->_trace = ::uGetStackTrace();
}

::uString* Exception__get_Message(Exception* __this)
{
    return __this->_message;
}

::uString* Exception__get_StackTrace(Exception* __this)
{
    ::uString* ind_123 = __this->_trace;
    return (ind_123 != NULL) ? ind_123 : ::uGetConstString("Uno.Exception.StackTrace is not supported in this build configuration");
}

Exception* Exception__New_1(::uStatic* __this)
{
    Exception* inst = (Exception*)::uAllocObject(sizeof(Exception), Exception__typeof());
    inst->_ObjInit();
    return inst;
}

Exception* Exception__New_2(::uStatic* __this, ::uString* message)
{
    Exception* inst = (Exception*)::uAllocObject(sizeof(Exception), Exception__typeof());
    inst->_ObjInit_1(message);
    return inst;
}

::uString* Exception__ToString(Exception* __this)
{
    if (::app::Uno::String__IsNullOrEmpty(NULL, __this->_trace))
    {
        return __this->_message;
    }

    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_2(NULL, (::uObject*)::app::Uno::Object::GetType(__this), ::uGetConstString(": ")), __this->_message), ::uGetConstString("\n")), __this->_trace);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FlagsAttribute__uType* FlagsAttribute__typeof()
{
    static ::uStaticStrong<FlagsAttribute__uType*> type;
    if (type != NULL) return type;

    type = (FlagsAttribute__uType*)::uAllocClassType(sizeof(FlagsAttribute__uType), "Uno.FlagsAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void FlagsAttribute___ObjInit_1(FlagsAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

FlagsAttribute* FlagsAttribute__New_1(::uStatic* __this)
{
    FlagsAttribute* inst = (FlagsAttribute*)::uAllocObject(sizeof(FlagsAttribute), FlagsAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Float__uType* Float__typeof()
{
    static ::uStaticStrong<Float__uType*> type;
    if (type != NULL) return type;

    type = (Float__uType*)::uAllocStructType(sizeof(Float__uType), "Uno.Float", sizeof(float), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Float__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Float__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Float__ToString;

    return type;
}

bool Float__Equals(float* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Float__typeof(), *__this), o);
}

int Float__GetHashCode(float* __this)
{
    return (int)Xli::DefaultTraits::Hash(*__this);
}

float Float__Parse(::uStatic* __this, ::uString* str_)
{
    try
    {
        if (str_ == NULL)
        {
            XLI_THROW_INVALID_ARGUMENT("String");
        }
    
        Xli::String s = Xli::Unicode::Utf16To8(str_->_ptr, str_->_len);
        return s.ToFloat();
    }
    catch (const Xli::FormatException& e)
    {
        throw uThrowable(::app::Uno::FormatException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
    catch (const Xli::ArgumentException& e)
    {
        throw uThrowable(::app::Uno::ArgumentNullException__New_5(NULL, ::uStringFromXliString("String")), e.GetFunction(), e.GetLine());
    }
    catch (const Xli::OverflowException& e)
    {
        throw uThrowable(::app::Uno::OverflowException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

::uString* Float__ToString(float* __this)
{
    Xli::String ansi = Xli::DefaultTraits::ToString(*__this);
    return uNewStringAnsi(ansi.Ptr(), ansi.Length());
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Float2__uType* Float2__typeof()
{
    static ::uStaticStrong<Float2__uType*> type;
    if (type != NULL) return type;

    type = (Float2__uType*)::uAllocStructType(sizeof(Float2__uType), "Uno.Float2", sizeof(Float2), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Float2__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Float2__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Float2__ToString;

    return type;
}

void Float2___ObjInit(Float2* __this, float xy)
{
    __this->X = __this->Y = xy;
}

void Float2___ObjInit_1(Float2* __this, float x, float y)
{
    __this->X = x;
    __this->Y = y;
}

bool Float2__Equals(Float2* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Float2__typeof(), *__this), o);
}

float Float2__get_Item(Float2* __this, int index)
{
    if (index == 0)
    {
        return __this->X;
    }
    else if (index == 1)
    {
        return __this->Y;
    }
    else
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

int Float2__GetHashCode(Float2* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(Float2__typeof(), *__this));
}

Float2 Float2__New_1(::uStatic* __this, float xy)
{
    Float2 inst = ::uDefault< Float2>();
    inst._ObjInit(xy);
    return inst;
}

Float2 Float2__New_2(::uStatic* __this, float x, float y)
{
    Float2 inst = ::uDefault< Float2>();
    inst._ObjInit_1(x, y);
    return inst;
}

Float2 Float2__op_Addition(::uStatic* __this, Float2 a, float b)
{
    return Float2__New_2(NULL, a.X + b, a.Y + b);
}

Float2 Float2__op_Addition_1(::uStatic* __this, float a, Float2 b)
{
    return Float2__New_2(NULL, a + b.X, a + b.Y);
}

Float2 Float2__op_Addition_2(::uStatic* __this, Float2 a, Float2 b)
{
    return Float2__New_2(NULL, a.X + b.X, a.Y + b.Y);
}

Float2 Float2__op_Division_1(::uStatic* __this, Float2 a, float b)
{
    return Float2__New_2(NULL, a.X / b, a.Y / b);
}

Float2 Float2__op_Division_2(::uStatic* __this, Float2 a, Float2 b)
{
    return Float2__New_2(NULL, a.X / b.X, a.Y / b.Y);
}

bool Float2__op_Equality(::uStatic* __this, Float2 a, Float2 b)
{
    return ::app::Uno::Generic__Equals__float2(NULL, a, b);
}

Float2 Float2__op_Implicit_4(::uStatic* __this, ::app::Uno::Int2 a)
{
    return Float2__New_2(NULL, (float)a.X, (float)a.Y);
}

bool Float2__op_Inequality(::uStatic* __this, Float2 a, Float2 b)
{
    return !::app::Uno::Generic__Equals__float2(NULL, a, b);
}

Float2 Float2__op_Multiply(::uStatic* __this, float a, Float2 b)
{
    return Float2__New_2(NULL, a * b.X, a * b.Y);
}

Float2 Float2__op_Multiply_1(::uStatic* __this, Float2 a, Float2 b)
{
    return Float2__New_2(NULL, a.X * b.X, a.Y * b.Y);
}

Float2 Float2__op_Multiply_2(::uStatic* __this, Float2 a, float b)
{
    return Float2__New_2(NULL, a.X * b, a.Y * b);
}

Float2 Float2__op_Subtraction(::uStatic* __this, Float2 a, float b)
{
    return Float2__New_2(NULL, a.X - b, a.Y - b);
}

Float2 Float2__op_Subtraction_2(::uStatic* __this, Float2 a, Float2 b)
{
    return Float2__New_2(NULL, a.X - b.X, a.Y - b.Y);
}

Float2 Float2__op_UnaryNegation(::uStatic* __this, Float2 a)
{
    return Float2__New_2(NULL, -a.X, -a.Y);
}

void Float2__set_Item(Float2* __this, int index, float value)
{
    if (index == 0)
    {
        __this->X = value;
    }
    else if (index == 1)
    {
        __this->Y = value;
    }
    else
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

::uString* Float2__ToString(Float2* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::Float::ToString(__this->X), ::uGetConstString(", ")), ::app::Uno::Float::ToString(__this->Y));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Float2x2__uType* Float2x2__typeof()
{
    static ::uStaticStrong<Float2x2__uType*> type;
    if (type != NULL) return type;

    type = (Float2x2__uType*)::uAllocStructType(sizeof(Float2x2__uType), "Uno.Float2x2", sizeof(Float2x2), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Float2x2__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Float2x2__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Float2x2__ToString;

    return type;
}

void Float2x2___ObjInit(Float2x2* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b)
{
    __this->M11 = a.X;
    __this->M12 = a.Y;
    __this->M21 = b.X;
    __this->M22 = b.Y;
}

void Float2x2___ObjInit_1(Float2x2* __this, float m11, float m12, float m21, float m22)
{
    __this->M11 = m11;
    __this->M12 = m12;
    __this->M21 = m21;
    __this->M22 = m22;
}

bool Float2x2__Equals(Float2x2* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Float2x2__typeof(), *__this), o);
}

int Float2x2__GetHashCode(Float2x2* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(Float2x2__typeof(), *__this));
}

Float2x2 Float2x2__New_1(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b)
{
    Float2x2 inst = ::uDefault< Float2x2>();
    inst._ObjInit(a, b);
    return inst;
}

Float2x2 Float2x2__New_2(::uStatic* __this, float m11, float m12, float m21, float m22)
{
    Float2x2 inst = ::uDefault< Float2x2>();
    inst._ObjInit_1(m11, m12, m21, m22);
    return inst;
}

::uString* Float2x2__ToString(Float2x2* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::Float::ToString(__this->M11), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M12)), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M21)), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M22));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Float3__uType* Float3__typeof()
{
    static ::uStaticStrong<Float3__uType*> type;
    if (type != NULL) return type;

    type = (Float3__uType*)::uAllocStructType(sizeof(Float3__uType), "Uno.Float3", sizeof(Float3), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Float3__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Float3__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Float3__ToString;

    return type;
}

void Float3___ObjInit(Float3* __this, float xyz)
{
    __this->X = __this->Y = __this->Z = xyz;
}

void Float3___ObjInit_1(Float3* __this, float x, float y, float z)
{
    __this->X = x;
    __this->Y = y;
    __this->Z = z;
}

void Float3___ObjInit_3(Float3* __this, ::app::Uno::Float2 xy, float z)
{
    __this->X = xy.X;
    __this->Y = xy.Y;
    __this->Z = z;
}

bool Float3__Equals(Float3* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Float3__typeof(), *__this), o);
}

int Float3__GetHashCode(Float3* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(Float3__typeof(), *__this));
}

Float3 Float3__New_1(::uStatic* __this, float xyz)
{
    Float3 inst = ::uDefault< Float3>();
    inst._ObjInit(xyz);
    return inst;
}

Float3 Float3__New_2(::uStatic* __this, float x, float y, float z)
{
    Float3 inst = ::uDefault< Float3>();
    inst._ObjInit_1(x, y, z);
    return inst;
}

Float3 Float3__New_4(::uStatic* __this, ::app::Uno::Float2 xy, float z)
{
    Float3 inst = ::uDefault< Float3>();
    inst._ObjInit_3(xy, z);
    return inst;
}

Float3 Float3__op_Addition_2(::uStatic* __this, Float3 a, Float3 b)
{
    return Float3__New_2(NULL, a.X + b.X, a.Y + b.Y, a.Z + b.Z);
}

Float3 Float3__op_Division(::uStatic* __this, Float3 a, float b)
{
    return Float3__New_2(NULL, a.X / b, a.Y / b, a.Z / b);
}

bool Float3__op_Inequality(::uStatic* __this, Float3 a, Float3 b)
{
    return !::app::Uno::Generic__Equals__float3(NULL, a, b);
}

Float3 Float3__op_Multiply_1(::uStatic* __this, Float3 a, Float3 b)
{
    return Float3__New_2(NULL, a.X * b.X, a.Y * b.Y, a.Z * b.Z);
}

Float3 Float3__op_Multiply_2(::uStatic* __this, Float3 a, float b)
{
    return Float3__New_2(NULL, a.X * b, a.Y * b, a.Z * b);
}

Float3 Float3__op_Subtraction_2(::uStatic* __this, Float3 a, Float3 b)
{
    return Float3__New_2(NULL, a.X - b.X, a.Y - b.Y, a.Z - b.Z);
}

Float3 Float3__op_UnaryNegation(::uStatic* __this, Float3 a)
{
    return Float3__op_Multiply_2(NULL, a, -1.0f);
}

::uString* Float3__ToString(Float3* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::Float::ToString(__this->X), ::uGetConstString(", ")), ::app::Uno::Float::ToString(__this->Y)), ::uGetConstString(", ")), ::app::Uno::Float::ToString(__this->Z));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Float3x3__uType* Float3x3__typeof()
{
    static ::uStaticStrong<Float3x3__uType*> type;
    if (type != NULL) return type;

    type = (Float3x3__uType*)::uAllocStructType(sizeof(Float3x3__uType), "Uno.Float3x3", sizeof(Float3x3), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Float3x3__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Float3x3__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Float3x3__ToString;

    return type;
}

void Float3x3___ObjInit_1(Float3x3* __this, float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33)
{
    __this->M11 = m11;
    __this->M12 = m12;
    __this->M13 = m13;
    __this->M21 = m21;
    __this->M22 = m22;
    __this->M23 = m23;
    __this->M31 = m31;
    __this->M32 = m32;
    __this->M33 = m33;
}

bool Float3x3__Equals(Float3x3* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Float3x3__typeof(), *__this), o);
}

int Float3x3__GetHashCode(Float3x3* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(Float3x3__typeof(), *__this));
}

Float3x3 Float3x3__New_2(::uStatic* __this, float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33)
{
    Float3x3 inst = ::uDefault< Float3x3>();
    inst._ObjInit_1(m11, m12, m13, m21, m22, m23, m31, m32, m33);
    return inst;
}

::uString* Float3x3__ToString(Float3x3* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::Float::ToString(__this->M11), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M12)), ::app::Uno::Float::ToString(__this->M13)), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M21)), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M22)), ::app::Uno::Float::ToString(__this->M23)), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M31)), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M32)), ::app::Uno::Float::ToString(__this->M33));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Float4__uType* Float4__typeof()
{
    static ::uStaticStrong<Float4__uType*> type;
    if (type != NULL) return type;

    type = (Float4__uType*)::uAllocStructType(sizeof(Float4__uType), "Uno.Float4", sizeof(Float4), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Float4__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Float4__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Float4__ToString;

    return type;
}

void Float4___ObjInit(Float4* __this, ::app::Uno::Float2 xy, float z, float w)
{
    __this->X = xy.X;
    __this->Y = xy.Y;
    __this->Z = z;
    __this->W = w;
}

void Float4___ObjInit_1(Float4* __this, float x, float y, float z, float w)
{
    __this->X = x;
    __this->Y = y;
    __this->Z = z;
    __this->W = w;
}

void Float4___ObjInit_2(Float4* __this, float xyzw)
{
    __this->X = __this->Y = __this->Z = __this->W = xyzw;
}

void Float4___ObjInit_5(Float4* __this, ::app::Uno::Float3 xyz, float w)
{
    __this->X = xyz.X;
    __this->Y = xyz.Y;
    __this->Z = xyz.Z;
    __this->W = w;
}

void Float4___ObjInit_6(Float4* __this, ::app::Uno::Float2 xy, ::app::Uno::Float2 zw)
{
    __this->X = xy.X;
    __this->Y = xy.Y;
    __this->Z = zw.X;
    __this->W = zw.Y;
}

bool Float4__Equals(Float4* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Float4__typeof(), *__this), o);
}

Float4 Float4__get_Identity(::uStatic* __this)
{
    return Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f);
}

float Float4__get_Item(Float4* __this, int index)
{
    if (index == 0)
    {
        return __this->X;
    }
    else if (index == 1)
    {
        return __this->Y;
    }
    else if (index == 2)
    {
        return __this->Z;
    }
    else if (index == 3)
    {
        return __this->W;
    }
    else
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

int Float4__GetHashCode(Float4* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(Float4__typeof(), *__this));
}

Float4 Float4__New_1(::uStatic* __this, ::app::Uno::Float2 xy, float z, float w)
{
    Float4 inst = ::uDefault< Float4>();
    inst._ObjInit(xy, z, w);
    return inst;
}

Float4 Float4__New_2(::uStatic* __this, float x, float y, float z, float w)
{
    Float4 inst = ::uDefault< Float4>();
    inst._ObjInit_1(x, y, z, w);
    return inst;
}

Float4 Float4__New_3(::uStatic* __this, float xyzw)
{
    Float4 inst = ::uDefault< Float4>();
    inst._ObjInit_2(xyzw);
    return inst;
}

Float4 Float4__New_5(::uStatic* __this, ::app::Uno::Float3 xyz, float w)
{
    Float4 inst = ::uDefault< Float4>();
    inst._ObjInit_5(xyz, w);
    return inst;
}

Float4 Float4__New_6(::uStatic* __this, ::app::Uno::Float2 xy, ::app::Uno::Float2 zw)
{
    Float4 inst = ::uDefault< Float4>();
    inst._ObjInit_6(xy, zw);
    return inst;
}

Float4 Float4__op_Addition(::uStatic* __this, Float4 a, Float4 b)
{
    return Float4__New_2(NULL, a.X + b.X, a.Y + b.Y, a.Z + b.Z, a.W + b.W);
}

Float4 Float4__op_Division_2(::uStatic* __this, Float4 a, float b)
{
    return Float4__New_2(NULL, a.X / b, a.Y / b, a.Z / b, a.W / b);
}

bool Float4__op_Inequality(::uStatic* __this, Float4 a, Float4 b)
{
    return !::app::Uno::Generic__Equals__float4(NULL, a, b);
}

Float4 Float4__op_Multiply_2(::uStatic* __this, Float4 a, float b)
{
    return Float4__New_2(NULL, a.X * b, a.Y * b, a.Z * b, a.W * b);
}

void Float4__set_Item(Float4* __this, int index, float value)
{
    if (index == 0)
    {
        __this->X = value;
    }
    else if (index == 1)
    {
        __this->Y = value;
    }
    else if (index == 2)
    {
        __this->Z = value;
    }
    else if (index == 3)
    {
        __this->W = value;
    }
    else
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

::uString* Float4__ToString(Float4* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::Float::ToString(__this->X), ::uGetConstString(", ")), ::app::Uno::Float::ToString(__this->Y)), ::uGetConstString(", ")), ::app::Uno::Float::ToString(__this->Z)), ::uGetConstString(", ")), ::app::Uno::Float::ToString(__this->W));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Float4x4__uType* Float4x4__typeof()
{
    static ::uStaticStrong<Float4x4__uType*> type;
    if (type != NULL) return type;

    type = (Float4x4__uType*)::uAllocStructType(sizeof(Float4x4__uType), "Uno.Float4x4", sizeof(Float4x4), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Float4x4__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Float4x4__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Float4x4__ToString;

    return type;
}

void Float4x4___ObjInit_1(Float4x4* __this, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
    __this->M11 = m11;
    __this->M12 = m12;
    __this->M13 = m13;
    __this->M14 = m14;
    __this->M21 = m21;
    __this->M22 = m22;
    __this->M23 = m23;
    __this->M24 = m24;
    __this->M31 = m31;
    __this->M32 = m32;
    __this->M33 = m33;
    __this->M34 = m34;
    __this->M41 = m41;
    __this->M42 = m42;
    __this->M43 = m43;
    __this->M44 = m44;
}

bool Float4x4__Equals(Float4x4* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Float4x4__typeof(), *__this), o);
}

Float4x4 Float4x4__get_Identity(::uStatic* __this)
{
    return Float4x4__New_2(NULL, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f);
}

::app::Uno::Float4 Float4x4__get_Item(Float4x4* __this, int index)
{
    if (index == 0)
    {
        return ::app::Uno::Float4__New_2(NULL, __this->M11, __this->M12, __this->M13, __this->M14);
    }
    else if (index == 1)
    {
        return ::app::Uno::Float4__New_2(NULL, __this->M21, __this->M22, __this->M23, __this->M24);
    }
    else if (index == 2)
    {
        return ::app::Uno::Float4__New_2(NULL, __this->M31, __this->M32, __this->M33, __this->M34);
    }
    else if (index == 3)
    {
        return ::app::Uno::Float4__New_2(NULL, __this->M41, __this->M42, __this->M43, __this->M44);
    }
    else
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

int Float4x4__GetHashCode(Float4x4* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(Float4x4__typeof(), *__this));
}

Float4x4 Float4x4__New_2(::uStatic* __this, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
    Float4x4 inst = ::uDefault< Float4x4>();
    inst._ObjInit_1(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
    return inst;
}

void Float4x4__set_Item(Float4x4* __this, int index, ::app::Uno::Float4 value)
{
    if (index == 0)
    {
        __this->M11 = value.X;
        __this->M12 = value.Y;
        __this->M13 = value.Z;
        __this->M14 = value.W;
    }
    else if (index == 1)
    {
        __this->M21 = value.X;
        __this->M22 = value.Y;
        __this->M23 = value.Z;
        __this->M24 = value.W;
    }
    else if (index == 2)
    {
        __this->M31 = value.X;
        __this->M32 = value.Y;
        __this->M33 = value.Z;
        __this->M34 = value.W;
    }
    else if (index == 3)
    {
        __this->M41 = value.X;
        __this->M42 = value.Y;
        __this->M43 = value.Z;
        __this->M44 = value.W;
    }
    else
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

::uString* Float4x4__ToString(Float4x4* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::Float::ToString(__this->M11), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M12)), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M13)), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M14)), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M21)), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M22)), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M23)), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M24)), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M31)), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M32)), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M33)), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M34)), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M41)), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M42)), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M43)), ::uGetConstString(",")), ::app::Uno::Float::ToString(__this->M44));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Exceptions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FormatException__uType* FormatException__typeof()
{
    static ::uStaticStrong<FormatException__uType*> type;
    if (type != NULL) return type;

    type = (FormatException__uType*)::uAllocClassType(sizeof(FormatException__uType), "Uno.FormatException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    return type;
}

void FormatException___ObjInit_2(FormatException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit_1(__this, message);
}

FormatException* FormatException__New_3(::uStatic* __this, ::uString* message)
{
    FormatException* inst = (FormatException*)::uAllocObject(sizeof(FormatException), FormatException__typeof());
    inst->_ObjInit_2(message);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Android_android_view_MotionEvent__bool__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Android.android.view.MotionEvent,bool>", 1);

    type->SetSignature(::app::Uno::Bool__typeof(),
        ::app::Android::android::view::MotionEvent__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__double__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<double>", 0);

    type->SetSignature(::app::Uno::Double__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Android_Button__float4__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Android.Button,float4>", 1);

    type->SetSignature(::app::Uno::Float4__typeof(),
        ::app::Fuse::Android::Button__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_Button__string__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.Button,string>", 1);

    type->SetSignature(::app::Uno::String__typeof(),
        ::app::Fuse::Controls::Button__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_Control__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.Control,Fuse.Drawing.Brush>", 1);

    type->SetSignature(::app::Fuse::Drawing::Brush__typeof(),
        ::app::Fuse::Controls::Control__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_GraphicsView__float4__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.GraphicsView,float4>", 1);

    type->SetSignature(::app::Uno::Float4__typeof(),
        ::app::Fuse::Controls::GraphicsView__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_Grid__float__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.Grid,float>", 1);

    type->SetSignature(::app::Uno::Float__typeof(),
        ::app::Fuse::Controls::Grid__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_Image__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.Image,Fuse.Elements.Alignment>", 1);

    type->SetSignature(::app::Fuse::Elements::Alignment__typeof(),
        ::app::Fuse::Controls::Image__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_Image__Fuse_Elements_StretchDirection__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.Image,Fuse.Elements.StretchDirection>", 1);

    type->SetSignature(::app::Fuse::Elements::StretchDirection__typeof(),
        ::app::Fuse::Controls::Image__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_Image__Fuse_Elements_StretchMode__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.Image,Fuse.Elements.StretchMode>", 1);

    type->SetSignature(::app::Fuse::Elements::StretchMode__typeof(),
        ::app::Fuse::Controls::Image__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_Image__Fuse_Elements_StretchSizing__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.Image,Fuse.Elements.StretchSizing>", 1);

    type->SetSignature(::app::Fuse::Elements::StretchSizing__typeof(),
        ::app::Fuse::Controls::Image__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.Image,Fuse.Resources.MemoryPolicy>", 1);

    type->SetSignature(::app::Fuse::Resources::MemoryPolicy__typeof(),
        ::app::Fuse::Controls::Image__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_Number__float__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.Number,float>", 1);

    type->SetSignature(::app::Uno::Float__typeof(),
        ::app::Fuse::Controls::Number__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_Number__string__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.Number,string>", 1);

    type->SetSignature(::app::Uno::String__typeof(),
        ::app::Fuse::Controls::Number__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_PageIndicator__Uno_UX_IFactory__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.PageIndicator,Uno.UX.IFactory>", 1);

    type->SetSignature(::app::Uno::UX::IFactory__typeof(),
        ::app::Fuse::Controls::PageIndicator__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_Panel__Fuse_Layouts_Layout__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.Panel,Fuse.Layouts.Layout>", 1);

    type->SetSignature(::app::Fuse::Layouts::Layout__typeof(),
        ::app::Fuse::Controls::Panel__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_Panel__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.Panel,Fuse.Node>", 1);

    type->SetSignature(::app::Fuse::Node__typeof(),
        ::app::Fuse::Controls::Panel__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.PlainTextEdit,Uno.UX.IFactory>", 1);

    type->SetSignature(::app::Uno::UX::IFactory__typeof(),
        ::app::Fuse::Controls::PlainTextEdit__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_RangeControl__double__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.RangeControl,double>", 1);

    type->SetSignature(::app::Uno::Double__typeof(),
        ::app::Fuse::Controls::RangeControl__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_Rectangle__float4__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.Rectangle,float4>", 1);

    type->SetSignature(::app::Uno::Float4__typeof(),
        ::app::Fuse::Controls::Rectangle__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.ScrollView,Fuse.Gestures.ScrollDirections>", 1);

    type->SetSignature(::app::Fuse::Gestures::ScrollDirections__typeof(),
        ::app::Fuse::Controls::ScrollView__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_Shape__float__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.Shape,float>", 1);

    type->SetSignature(::app::Uno::Float__typeof(),
        ::app::Fuse::Controls::Shape__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_Shape__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.Shape,Fuse.Drawing.Brush>", 1);

    type->SetSignature(::app::Fuse::Drawing::Brush__typeof(),
        ::app::Fuse::Controls::Shape__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_Shape__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.Shape,Fuse.Drawing.Stroke>", 1);

    type->SetSignature(::app::Fuse::Drawing::Stroke__typeof(),
        ::app::Fuse::Controls::Shape__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_StackPanel__float__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.StackPanel,float>", 1);

    type->SetSignature(::app::Uno::Float__typeof(),
        ::app::Fuse::Controls::StackPanel__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.StackPanel,Fuse.Layouts.Orientation>", 1);

    type->SetSignature(::app::Fuse::Layouts::Orientation__typeof(),
        ::app::Fuse::Controls::StackPanel__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_TextControl__float__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.TextControl,float>", 1);

    type->SetSignature(::app::Uno::Float__typeof(),
        ::app::Fuse::Controls::TextControl__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_TextControl__float4__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.TextControl,float4>", 1);

    type->SetSignature(::app::Uno::Float4__typeof(),
        ::app::Fuse::Controls::TextControl__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.TextControl,Fuse.Elements.TextAlignment>", 1);

    type->SetSignature(::app::Fuse::Elements::TextAlignment__typeof(),
        ::app::Fuse::Controls::TextControl__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.TextControl,Fuse.Elements.TextWrapping>", 1);

    type->SetSignature(::app::Fuse::Elements::TextWrapping__typeof(),
        ::app::Fuse::Controls::TextControl__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_TextControl__Fuse_Font__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.TextControl,Fuse.Font>", 1);

    type->SetSignature(::app::Fuse::Font__typeof(),
        ::app::Fuse::Controls::TextControl__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_TextControl__string__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.TextControl,string>", 1);

    type->SetSignature(::app::Uno::String__typeof(),
        ::app::Fuse::Controls::TextControl__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_TextInput__bool__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.TextInput,bool>", 1);

    type->SetSignature(::app::Uno::Bool__typeof(),
        ::app::Fuse::Controls::TextInput__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_TextInput__float4__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.TextInput,float4>", 1);

    type->SetSignature(::app::Uno::Float4__typeof(),
        ::app::Fuse::Controls::TextInput__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.TextInput,Uno.Platform.TextInputHint>", 1);

    type->SetSignature(::app::Uno::Platform::TextInputHint__typeof(),
        ::app::Fuse::Controls::TextInput__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Controls_ToggleControl__bool__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Controls.ToggleControl,bool>", 1);

    type->SetSignature(::app::Uno::Bool__typeof(),
        ::app::Fuse::Controls::ToggleControl__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Drawing_Border__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Drawing.Border,Fuse.Drawing.Contour>", 1);

    type->SetSignature(::app::Fuse::Drawing::Contour__typeof(),
        ::app::Fuse::Drawing::Border__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Drawing_Contour__Fuse_Drawing_Border__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Drawing.Contour,Fuse.Drawing.Border>", 1);

    type->SetSignature(::app::Fuse::Drawing::Border__typeof(),
        ::app::Fuse::Drawing::Contour__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Drawing.Tesselation.Face,Fuse.Drawing.Contour>", 1);

    type->SetSignature(::app::Fuse::Drawing::Contour__typeof(),
        ::app::Fuse::Drawing::Tesselation::Face__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Drawing.Tesselation.HalfEdge,float2>", 1);

    type->SetSignature(::app::Uno::Float2__typeof(),
        ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Elements_Element__bool__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Elements.Element,bool>", 1);

    type->SetSignature(::app::Uno::Bool__typeof(),
        ::app::Fuse::Elements::Element__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Elements_Element__float__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Elements.Element,float>", 1);

    type->SetSignature(::app::Uno::Float__typeof(),
        ::app::Fuse::Elements::Element__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Elements_Element__float2__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Elements.Element,float2>", 1);

    type->SetSignature(::app::Uno::Float2__typeof(),
        ::app::Fuse::Elements::Element__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Elements_Element__float4__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Elements.Element,float4>", 1);

    type->SetSignature(::app::Uno::Float4__typeof(),
        ::app::Fuse::Elements::Element__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Elements_Element__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Elements.Element,Fuse.Elements.Alignment>", 1);

    type->SetSignature(::app::Fuse::Elements::Alignment__typeof(),
        ::app::Fuse::Elements::Element__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Elements_Element__Fuse_Elements_CachingMode__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Elements.Element,Fuse.Elements.CachingMode>", 1);

    type->SetSignature(::app::Fuse::Elements::CachingMode__typeof(),
        ::app::Fuse::Elements::Element__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Elements_Element__Fuse_Elements_HitTestMode__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Elements.Element,Fuse.Elements.HitTestMode>", 1);

    type->SetSignature(::app::Fuse::Elements::HitTestMode__typeof(),
        ::app::Fuse::Elements::Element__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Elements_Element__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Elements.Element,Fuse.Elements.Visibility>", 1);

    type->SetSignature(::app::Fuse::Elements::Visibility__typeof(),
        ::app::Fuse::Elements::Element__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Node__bool__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Node,bool>", 1);

    type->SetSignature(::app::Uno::Bool__typeof(),
        ::app::Fuse::Node__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Node__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Node,Fuse.Node>", 1);

    type->SetSignature(::app::Fuse::Node__typeof(),
        ::app::Fuse::Node__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Node__string__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Node,string>", 1);

    type->SetSignature(::app::Uno::String__typeof(),
        ::app::Fuse::Node__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Shapes_Rectangle__float4__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Shapes.Rectangle,float4>", 1);

    type->SetSignature(::app::Uno::Float4__typeof(),
        ::app::Fuse::Shapes::Rectangle__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Shapes_Shape__float__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Shapes.Shape,float>", 1);

    type->SetSignature(::app::Uno::Float__typeof(),
        ::app::Fuse::Shapes::Shape__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Shapes_Shape__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Shapes.Shape,Fuse.Drawing.Brush>", 1);

    type->SetSignature(::app::Fuse::Drawing::Brush__typeof(),
        ::app::Fuse::Shapes::Shape__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Fuse.Shapes.Shape,Fuse.Drawing.Stroke>", 1);

    type->SetSignature(::app::Fuse::Drawing::Stroke__typeof(),
        ::app::Fuse::Shapes::Shape__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket,char>", 1);

    type->SetSignature(::app::Uno::Char__typeof(),
        ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket,int>", 1);

    type->SetSignature(::app::Uno::Int__typeof(),
        ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Uno.Time.Text.LocalTimePattern_LocalTimeBucket,char>", 1);

    type->SetSignature(::app::Uno::Char__typeof(),
        ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Uno.Time.Text.LocalTimePattern_LocalTimeBucket,int>", 1);

    type->SetSignature(::app::Uno::Int__typeof(),
        ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Uno_Time_Text_OffsetPattern_OffsetBucket__char__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Uno.Time.Text.OffsetPattern_OffsetBucket,char>", 1);

    type->SetSignature(::app::Uno::Char__typeof(),
        ::app::Uno::Time::Text::OffsetPattern_OffsetBucket__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Func__Uno_Time_Text_OffsetPattern_OffsetBucket__int__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Func<Uno.Time.Text.OffsetPattern_OffsetBucket,int>", 1);

    type->SetSignature(::app::Uno::Int__typeof(),
        ::app::Uno::Time::Text::OffsetPattern_OffsetBucket__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GC__uType* GC__typeof()
{
    static ::uStaticStrong<GC__uType*> type;
    if (type != NULL) return type;

    type = (GC__uType*)::uAllocClassType(sizeof(GC__uType), "Uno.GC");

    return type;
}

void GC__SuppressFinalize(::uStatic* __this, ::uObject* obj)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Generic__uType* Generic__typeof()
{
    static ::uStaticStrong<Generic__uType*> type;
    if (type != NULL) return type;

    type = (Generic__uType*)::uAllocClassType(sizeof(Generic__uType), "Uno.Generic");

    return type;
}

bool Generic__Equals__Android_android_view_View(::uStatic* __this, ::app::Android::android::view::View* left, ::app::Android::android::view::View* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Android_android_view_View(NULL, left, right);
}

bool Generic__Equals__char(::uStatic* __this, ::uChar left, ::uChar right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__char(NULL, left, right);
}

bool Generic__Equals__Experimental_Audio_Channel(::uStatic* __this, ::app::Experimental::Audio::Channel* left, ::app::Experimental::Audio::Channel* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Experimental_Audio_Channel(NULL, left, right);
}

bool Generic__Equals__float2(::uStatic* __this, ::app::Uno::Float2 left, ::app::Uno::Float2 right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__float2(NULL, left, right);
}

bool Generic__Equals__float3(::uStatic* __this, ::app::Uno::Float3 left, ::app::Uno::Float3 right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__float3(NULL, left, right);
}

bool Generic__Equals__float4(::uStatic* __this, ::app::Uno::Float4 left, ::app::Uno::Float4 right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__float4(NULL, left, right);
}

bool Generic__Equals__framebuffer(::uStatic* __this, ::app::Uno::Graphics::Framebuffer* left, ::app::Uno::Graphics::Framebuffer* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__framebuffer(NULL, left, right);
}

bool Generic__Equals__Fuse_Animations_IMixerMaster(::uStatic* __this, ::uObject* left, ::uObject* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Animations_IMixerMaster(NULL, left, right);
}

bool Generic__Equals__Fuse_Animations_MixerHandle_bool_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__bool* left, ::app::Fuse::Animations::MixerHandle__bool* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_bool_(NULL, left, right);
}

bool Generic__Equals__Fuse_Animations_MixerHandle_float_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__float* left, ::app::Fuse::Animations::MixerHandle__float* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_float_(NULL, left, right);
}

bool Generic__Equals__Fuse_Animations_MixerHandle_float4_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__float4* left, ::app::Fuse::Animations::MixerHandle__float4* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_float4_(NULL, left, right);
}

bool Generic__Equals__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* left, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_(NULL, left, right);
}

bool Generic__Equals__Fuse_Animations_MixerHandle_Fuse_Transform_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* left, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Transform_(NULL, left, right);
}

bool Generic__Equals__Fuse_Behavior(::uStatic* __this, ::app::Fuse::Behavior* left, ::app::Fuse::Behavior* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Behavior(NULL, left, right);
}

bool Generic__Equals__Fuse_CacheFramebuffer(::uStatic* __this, ::app::Fuse::CacheFramebuffer* left, ::app::Fuse::CacheFramebuffer* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_CacheFramebuffer(NULL, left, right);
}

bool Generic__Equals__Fuse_Controls_Internal_DefaultTextRenderer_FontKey(::uStatic* __this, ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey* left, ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Controls_Internal_DefaultTextRenderer_FontKey(NULL, left, right);
}

bool Generic__Equals__Fuse_Drawing_Brush(::uStatic* __this, ::app::Fuse::Drawing::Brush* left, ::app::Fuse::Drawing::Brush* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Drawing_Brush(NULL, left, right);
}

bool Generic__Equals__Fuse_Drawing_Stroke(::uStatic* __this, ::app::Fuse::Drawing::Stroke* left, ::app::Fuse::Drawing::Stroke* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Drawing_Stroke(NULL, left, right);
}

bool Generic__Equals__Fuse_Effects_Effect(::uStatic* __this, ::app::Fuse::Effects::Effect* left, ::app::Fuse::Effects::Effect* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Effects_Effect(NULL, left, right);
}

bool Generic__Equals__Fuse_Elements_Element(::uStatic* __this, ::app::Fuse::Elements::Element* left, ::app::Fuse::Elements::Element* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Elements_Element(NULL, left, right);
}

bool Generic__Equals__Fuse_Elements_ElementAtlas(::uStatic* __this, ::app::Fuse::Elements::ElementAtlas* left, ::app::Fuse::Elements::ElementAtlas* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Elements_ElementAtlas(NULL, left, right);
}

bool Generic__Equals__Fuse_Font(::uStatic* __this, ::app::Fuse::Font* left, ::app::Fuse::Font* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Font(NULL, left, right);
}

bool Generic__Equals__Fuse_iOS_StatusBarConfig(::uStatic* __this, ::app::Fuse::iOS::StatusBarConfig* left, ::app::Fuse::iOS::StatusBarConfig* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_iOS_StatusBarConfig(NULL, left, right);
}

bool Generic__Equals__Fuse_Navigation_NavigationEdge(::uStatic* __this, int left, int right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Navigation_NavigationEdge(NULL, left, right);
}

bool Generic__Equals__Fuse_Node(::uStatic* __this, ::app::Fuse::Node* left, ::app::Fuse::Node* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Node(NULL, left, right);
}

bool Generic__Equals__Fuse_Physics_Body(::uStatic* __this, ::app::Fuse::Physics::Body* left, ::app::Fuse::Physics::Body* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Physics_Body(NULL, left, right);
}

bool Generic__Equals__Fuse_Physics_IRule(::uStatic* __this, ::uObject* left, ::uObject* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Physics_IRule(NULL, left, right);
}

bool Generic__Equals__Fuse_Reactive_JavaScript(::uStatic* __this, ::app::Fuse::Reactive::JavaScript* left, ::app::Fuse::Reactive::JavaScript* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Reactive_JavaScript(NULL, left, right);
}

bool Generic__Equals__Fuse_Resources_IMemoryResource(::uStatic* __this, ::uObject* left, ::uObject* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Resources_IMemoryResource(NULL, left, right);
}

bool Generic__Equals__Fuse_Scripting_INameListener(::uStatic* __this, ::uObject* left, ::uObject* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Scripting_INameListener(NULL, left, right);
}

bool Generic__Equals__Fuse_Style(::uStatic* __this, ::app::Fuse::Style* left, ::app::Fuse::Style* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Style(NULL, left, right);
}

bool Generic__Equals__Fuse_Transform(::uStatic* __this, ::app::Fuse::Transform* left, ::app::Fuse::Transform* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Fuse_Transform(NULL, left, right);
}

bool Generic__Equals__int(::uStatic* __this, int left, int right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__int(NULL, left, right);
}

bool Generic__Equals__int2(::uStatic* __this, ::app::Uno::Int2 left, ::app::Uno::Int2 right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__int2(NULL, left, right);
}

bool Generic__Equals__object(::uStatic* __this, ::uObject* left, ::uObject* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__object(NULL, left, right);
}

bool Generic__Equals__string(::uStatic* __this, ::uString* left, ::uString* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__string(NULL, left, right);
}

bool Generic__Equals__Uno_Action(::uStatic* __this, ::uDelegate* left, ::uDelegate* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Uno_Action(NULL, left, right);
}

bool Generic__Equals__Uno_Content_Fonts_BitmapFont_CharPair(::uStatic* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair left, ::app::Uno::Content::Fonts::BitmapFont_CharPair right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Uno_Content_Fonts_BitmapFont_CharPair(NULL, left, right);
}

bool Generic__Equals__Uno_EventHandler(::uStatic* __this, ::uDelegate* left, ::uDelegate* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Uno_EventHandler(NULL, left, right);
}

bool Generic__Equals__Uno_Type(::uStatic* __this, ::uType* left, ::uType* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Uno_Type(NULL, left, right);
}

bool Generic__Equals__Uno_UX_FileSource(::uStatic* __this, ::app::Uno::UX::FileSource* left, ::app::Uno::UX::FileSource* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Uno_UX_FileSource(NULL, left, right);
}

bool Generic__Equals__Uno_UX_Resource(::uStatic* __this, ::app::Uno::UX::Resource* left, ::app::Uno::UX::Resource* right)
{
    return ::app::Uno::Runtime::Implementation::GenericEqualsImpl__Equals__Uno_UX_Resource(NULL, left, right);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDisposable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.IDisposable");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Exceptions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IndexOutOfRangeException__uType* IndexOutOfRangeException__typeof()
{
    static ::uStaticStrong<IndexOutOfRangeException__uType*> type;
    if (type != NULL) return type;

    type = (IndexOutOfRangeException__uType*)::uAllocClassType(sizeof(IndexOutOfRangeException__uType), "Uno.IndexOutOfRangeException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    return type;
}

void IndexOutOfRangeException___ObjInit_2(IndexOutOfRangeException* __this)
{
    ::app::Uno::Exception___ObjInit_1(__this, ::uGetConstString("Index out of range"));
}

IndexOutOfRangeException* IndexOutOfRangeException__New_3(::uStatic* __this)
{
    IndexOutOfRangeException* inst = (IndexOutOfRangeException*)::uAllocObject(sizeof(IndexOutOfRangeException), IndexOutOfRangeException__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Int__uType* Int__typeof()
{
    static ::uStaticStrong<Int__uType*> type;
    if (type != NULL) return type;

    type = (Int__uType*)::uAllocStructType(sizeof(Int__uType), "Uno.Int", sizeof(int), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Int__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Int__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Int__ToString;

    return type;
}

bool Int__Equals(int* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox< int>(Int__typeof(), *__this), o);
}

int Int__GetHashCode(int* __this)
{
    return *__this;
}

int Int__Parse(::uStatic* __this, ::uString* str_)
{
    try
    {
        if (str_ == NULL)
        {
            XLI_THROW_INVALID_ARGUMENT("String");
        }
    
        Xli::String s = Xli::Unicode::Utf16To8(str_->_ptr, str_->_len);
        return s.ToInt();
    }
    catch (const Xli::FormatException& e)
    {
        throw uThrowable(::app::Uno::FormatException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
    catch (const Xli::ArgumentException& e)
    {
        throw uThrowable(::app::Uno::ArgumentNullException__New_5(NULL, ::uStringFromXliString("String")), e.GetFunction(), e.GetLine());
    }
    catch (const Xli::OverflowException& e)
    {
        throw uThrowable(::app::Uno::OverflowException__New_3(NULL, ::uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

::uString* Int__ToString(int* __this)
{
    Xli::String ansi(*__this);
    return uNewStringAnsi(ansi.Ptr(), ansi.Length());
}

bool Int__TryParse(::uStatic* __this, ::uString* str_, int* res_)
{
    *res_ = 0;
    if (str_ == NULL)
    {
        return false;
    }
    
    Xli::String s = Xli::Unicode::Utf16To8(str_->_ptr, str_->_len);
    return s.TryToInt(res_);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Int2__uType* Int2__typeof()
{
    static ::uStaticStrong<Int2__uType*> type;
    if (type != NULL) return type;

    type = (Int2__uType*)::uAllocStructType(sizeof(Int2__uType), "Uno.Int2", sizeof(Int2), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Int2__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Int2__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Int2__ToString;

    return type;
}

void Int2___ObjInit(Int2* __this, int xy)
{
    __this->X = __this->Y = xy;
}

void Int2___ObjInit_1(Int2* __this, int x, int y)
{
    __this->X = x;
    __this->Y = y;
}

bool Int2__Equals(Int2* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Int2__typeof(), *__this), o);
}

int Int2__GetHashCode(Int2* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(Int2__typeof(), *__this));
}

Int2 Int2__New_1(::uStatic* __this, int xy)
{
    Int2 inst = ::uDefault< Int2>();
    inst._ObjInit(xy);
    return inst;
}

Int2 Int2__New_2(::uStatic* __this, int x, int y)
{
    Int2 inst = ::uDefault< Int2>();
    inst._ObjInit_1(x, y);
    return inst;
}

Int2 Int2__op_Addition_1(::uStatic* __this, Int2 a, Int2 b)
{
    return Int2__New_2(NULL, a.X + b.X, a.Y + b.Y);
}

Int2 Int2__op_Explicit(::uStatic* __this, ::app::Uno::Float2 v)
{
    return Int2__New_2(NULL, (int)v.X, (int)v.Y);
}

bool Int2__op_Inequality(::uStatic* __this, Int2 a, Int2 b)
{
    return !::app::Uno::Generic__Equals__int2(NULL, a, b);
}

Int2 Int2__op_Multiply_1(::uStatic* __this, Int2 a, int b)
{
    return Int2__New_2(NULL, a.X * b, a.Y * b);
}

Int2 Int2__op_Subtraction(::uStatic* __this, Int2 a, Int2 b)
{
    return Int2__New_2(NULL, a.X - b.X, a.Y - b.Y);
}

::uString* Int2__ToString(Int2* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::Int::ToString(__this->X), ::uGetConstString(", ")), ::app::Uno::Int::ToString(__this->Y));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Int4__uType* Int4__typeof()
{
    static ::uStaticStrong<Int4__uType*> type;
    if (type != NULL) return type;

    type = (Int4__uType*)::uAllocStructType(sizeof(Int4__uType), "Uno.Int4", sizeof(Int4), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Int4__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Int4__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Int4__ToString;

    return type;
}

void Int4___ObjInit_3(Int4* __this, int x, int y, int z, int w)
{
    __this->X = x;
    __this->Y = y;
    __this->Z = z;
    __this->W = w;
}

bool Int4__Equals(Int4* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(Int4__typeof(), *__this), o);
}

int Int4__GetHashCode(Int4* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(Int4__typeof(), *__this));
}

Int4 Int4__New_3(::uStatic* __this, int x, int y, int z, int w)
{
    Int4 inst = ::uDefault< Int4>();
    inst._ObjInit_3(x, y, z, w);
    return inst;
}

::uString* Int4__ToString(Int4* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::Int::ToString(__this->X), ::uGetConstString(", ")), ::app::Uno::Int::ToString(__this->Y)), ::uGetConstString(", ")), ::app::Uno::Int::ToString(__this->Z)), ::uGetConstString(", ")), ::app::Uno::Int::ToString(__this->W));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

void* IntPtr__Zero;

IntPtr__uType* IntPtr__typeof()
{
    static ::uStaticStrong<IntPtr__uType*> type;
    if (type != NULL) return type;

    type = (IntPtr__uType*)::uAllocStructType(sizeof(IntPtr__uType), "Uno.IntPtr", sizeof(void*), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))IntPtr__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))IntPtr__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))IntPtr__ToString;

    return type;
}

bool IntPtr__Equals(void** __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(IntPtr__typeof(), *__this), o);
}

int IntPtr__GetHashCode(void** __this)
{
    return (int)Xli::DefaultTraits::Hash(*__this);
}

bool IntPtr__op_Equality(::uStatic* __this, void* left_, void* right_)
{
    return left_ == right_;
}

bool IntPtr__op_Inequality(::uStatic* __this, void* left_, void* right_)
{
    return left_ != right_;
}

::uString* IntPtr__ToString(void** __this)
{
    Xli::String ansi = Xli::DefaultTraits::ToString(*__this);
    return uNewStringAnsi(ansi.Ptr(), ansi.Length());
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Exceptions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

InvalidCastException__uType* InvalidCastException__typeof()
{
    static ::uStaticStrong<InvalidCastException__uType*> type;
    if (type != NULL) return type;

    type = (InvalidCastException__uType*)::uAllocClassType(sizeof(InvalidCastException__uType), "Uno.InvalidCastException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    return type;
}

void InvalidCastException___ObjInit_2(InvalidCastException* __this)
{
    ::app::Uno::Exception___ObjInit_1(__this, ::uGetConstString("Invalid cast"));
}

InvalidCastException* InvalidCastException__New_3(::uStatic* __this)
{
    InvalidCastException* inst = (InvalidCastException*)::uAllocObject(sizeof(InvalidCastException), InvalidCastException__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Exceptions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

InvalidOperationException__uType* InvalidOperationException__typeof()
{
    static ::uStaticStrong<InvalidOperationException__uType*> type;
    if (type != NULL) return type;

    type = (InvalidOperationException__uType*)::uAllocClassType(sizeof(InvalidOperationException__uType), "Uno.InvalidOperationException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    return type;
}

void InvalidOperationException___ObjInit_2(InvalidOperationException* __this)
{
    ::app::Uno::Exception___ObjInit_1(__this, ::uGetConstString("Invalid operation"));
}

void InvalidOperationException___ObjInit_3(InvalidOperationException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit_1(__this, message);
}

InvalidOperationException* InvalidOperationException__New_3(::uStatic* __this)
{
    InvalidOperationException* inst = (InvalidOperationException*)::uAllocObject(sizeof(InvalidOperationException), InvalidOperationException__typeof());
    inst->_ObjInit_2();
    return inst;
}

InvalidOperationException* InvalidOperationException__New_4(::uStatic* __this, ::uString* message)
{
    InvalidOperationException* inst = (InvalidOperationException*)::uAllocObject(sizeof(InvalidOperationException), InvalidOperationException__typeof());
    inst->_ObjInit_3(message);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Long__uType* Long__typeof()
{
    static ::uStaticStrong<Long__uType*> type;
    if (type != NULL) return type;

    type = (Long__uType*)::uAllocStructType(sizeof(Long__uType), "Uno.Long", sizeof(::uLong), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Long__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Long__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Long__ToString;

    return type;
}

bool Long__Equals(::uLong* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox< ::uLong>(Long__typeof(), *__this), o);
}

int Long__GetHashCode(::uLong* __this)
{
    return (int)Xli::DefaultTraits::Hash(*__this);
}

::uString* Long__ToString(::uLong* __this)
{
    Xli::String ansi = Xli::DefaultTraits::ToString(*__this);
    return uNewStringAnsi(ansi.Ptr(), ansi.Length());
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Math__uType* Math__typeof()
{
    static ::uStaticStrong<Math__uType*> type;
    if (type != NULL) return type;

    type = (Math__uType*)::uAllocClassType(sizeof(Math__uType), "Uno.Math");

    return type;
}

int Math__Abs_2(::uStatic* __this, int x)
{
    return (x >= 0) ? x : -x;
}

::app::Uno::Float2 Math__Abs_6(::uStatic* __this, ::app::Uno::Float2 a)
{
    return ::app::Uno::Float2__New_2(NULL, Math__Abs_8(NULL, a.X), Math__Abs_8(NULL, a.Y));
}

double Math__Abs_7(::uStatic* __this, double x)
{
    return (x >= 0.0) ? x : -x;
}

float Math__Abs_8(::uStatic* __this, float x)
{
    return (x >= 0.0f) ? x : -x;
}

float Math__Acos(::uStatic* __this, float radians_)
{
    return acosf(radians_);
}

float Math__Asin_1(::uStatic* __this, float radians_)
{
    return asinf(radians_);
}

float Math__Atan2_1(::uStatic* __this, float y_, float x_)
{
    return atan2f(y_, x_);
}

double Math__Ceil(::uStatic* __this, double x_)
{
    return ceil(x_);
}

float Math__Ceil_1(::uStatic* __this, float x_)
{
    return ceilf(x_);
}

::app::Uno::Float2 Math__Ceil_2(::uStatic* __this, ::app::Uno::Float2 v)
{
    return ::app::Uno::Float2__New_2(NULL, Math__Ceil_1(NULL, v.X), Math__Ceil_1(NULL, v.Y));
}

::app::Uno::Float2 Math__Clamp_10(::uStatic* __this, ::app::Uno::Float2 x, ::app::Uno::Float2 minimum, ::app::Uno::Float2 maximum)
{
    return Math__Max_10(NULL, Math__Min_13(NULL, x, maximum), minimum);
}

int Math__Clamp_3(::uStatic* __this, int x, int minimum, int maximum)
{
    return Math__Max_2(NULL, Math__Min_5(NULL, x, maximum), minimum);
}

double Math__Clamp_7(::uStatic* __this, double x, double minimum, double maximum)
{
    return Math__Max_7(NULL, Math__Min_10(NULL, x, maximum), minimum);
}

float Math__Clamp_8(::uStatic* __this, float x, float minimum, float maximum)
{
    return Math__Max_8(NULL, Math__Min_11(NULL, x, maximum), minimum);
}

float Math__Cos_1(::uStatic* __this, float radians_)
{
    return cosf(radians_);
}

float Math__DegreesToRadians_1(::uStatic* __this, float degrees)
{
    return degrees * 0.0174532924f;
}

float Math__Exp_4(::uStatic* __this, float x)
{
    return Math__Pow_1(NULL, 2.71828175f, x);
}

double Math__Floor(::uStatic* __this, double x_)
{
    return floor(x_);
}

float Math__Floor_1(::uStatic* __this, float x_)
{
    return floorf(x_);
}

::app::Uno::Float2 Math__Floor_2(::uStatic* __this, ::app::Uno::Float2 v)
{
    return ::app::Uno::Float2__New_2(NULL, Math__Floor_1(NULL, v.X), Math__Floor_1(NULL, v.Y));
}

bool Math__IsPow2(::uStatic* __this, int x)
{
    return x == (x & -x);
}

::app::Uno::Float3 Math__Lerp_3(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b, float t)
{
    return ::app::Uno::Float3__op_Addition_2(NULL, a, ::app::Uno::Float3__op_Multiply_2(NULL, ::app::Uno::Float3__op_Subtraction_2(NULL, b, a), t));
}

::app::Uno::Float2 Math__Lerp_6(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b, float t)
{
    return ::app::Uno::Float2__op_Addition_2(NULL, a, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, b, a), t));
}

float Math__Log_1(::uStatic* __this, float x_)
{
    return logf(x_);
}

::app::Uno::Float4 Math__Max_1(::uStatic* __this, ::app::Uno::Float4 a, ::app::Uno::Float4 b)
{
    return ::app::Uno::Float4__New_2(NULL, Math__Max_8(NULL, a.X, b.X), Math__Max_8(NULL, a.Y, b.Y), Math__Max_8(NULL, a.Z, b.Z), Math__Max_8(NULL, a.W, b.W));
}

::app::Uno::Float2 Math__Max_10(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b)
{
    return ::app::Uno::Float2__New_2(NULL, Math__Max_8(NULL, a.X, b.X), Math__Max_8(NULL, a.Y, b.Y));
}

int Math__Max_2(::uStatic* __this, int a, int b)
{
    return (a > b) ? a : b;
}

::app::Uno::Float3 Math__Max_6(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b)
{
    return ::app::Uno::Float3__New_2(NULL, Math__Max_8(NULL, a.X, b.X), Math__Max_8(NULL, a.Y, b.Y), Math__Max_8(NULL, a.Z, b.Z));
}

double Math__Max_7(::uStatic* __this, double a, double b)
{
    return (a > b) ? a : b;
}

float Math__Max_8(::uStatic* __this, float a, float b)
{
    return (a > b) ? a : b;
}

::app::Uno::Float2 Math__Max_9(::uStatic* __this, ::app::Uno::Float2 a, float b)
{
    return ::app::Uno::Float2__New_2(NULL, Math__Max_8(NULL, a.X, b), Math__Max_8(NULL, a.Y, b));
}

double Math__Min_10(::uStatic* __this, double a, double b)
{
    return (a < b) ? a : b;
}

float Math__Min_11(::uStatic* __this, float a, float b)
{
    return (a < b) ? a : b;
}

::app::Uno::Float2 Math__Min_13(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b)
{
    return ::app::Uno::Float2__New_2(NULL, Math__Min_11(NULL, a.X, b.X), Math__Min_11(NULL, a.Y, b.Y));
}

int Math__Min_5(::uStatic* __this, int a, int b)
{
    return (a < b) ? a : b;
}

::app::Uno::Float3 Math__Min_9(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b)
{
    return ::app::Uno::Float3__New_2(NULL, Math__Min_11(NULL, a.X, b.X), Math__Min_11(NULL, a.Y, b.Y), Math__Min_11(NULL, a.Z, b.Z));
}

double Math__Mod_3(::uStatic* __this, double x, double y)
{
    return x - (y * Math__Floor(NULL, x / y));
}

float Math__Mod_4(::uStatic* __this, float x, float y)
{
    return x - (y * Math__Floor_1(NULL, x / y));
}

int Math__NextPow2(::uStatic* __this, int x)
{
    int y = x - 1;
    y = y | (y >> 1);
    y = y | (y >> 2);
    y = y | (y >> 4);
    y = y | (y >> 8);
    y = y | (y >> 16);
    return y + 1;
}

double Math__Pow(::uStatic* __this, double x_, double y_)
{
    return pow(x_, y_);
}

float Math__Pow_1(::uStatic* __this, float x_, float y_)
{
    return powf(x_, y_);
}

float Math__RadiansToDegrees_3(::uStatic* __this, float radians)
{
    return radians * 57.2957764f;
}

float Math__Round_3(::uStatic* __this, float x)
{
    return Math__Floor_1(NULL, x + 0.5f);
}

::app::Uno::Float2 Math__Round_4(::uStatic* __this, ::app::Uno::Float2 x)
{
    return Math__Floor_2(NULL, ::app::Uno::Float2__op_Addition(NULL, x, 0.5f));
}

double Math__Round_8(::uStatic* __this, double d, int decimals)
{
    ::uLong multiplier = (::uLong)Math__Pow_1(NULL, 10.0f, (float)decimals);
    ::uLong intPart = (::uLong)d;
    double decimalPart = Math__Round_9(NULL, (d - (double)intPart) * (double)multiplier) / (double)multiplier;
    return (double)intPart + decimalPart;
}

double Math__Round_9(::uStatic* __this, double x)
{
    return Math__Floor(NULL, x + 0.5);
}

float Math__Saturate_1(::uStatic* __this, float x)
{
    return Math__Clamp_8(NULL, x, 0.0f, 1.0f);
}

double Math__Sin(::uStatic* __this, double radians_)
{
    return sin(radians_);
}

float Math__Sin_1(::uStatic* __this, float radians_)
{
    return sinf(radians_);
}

double Math__Sqrt(::uStatic* __this, double x_)
{
    return sqrt(x_);
}

float Math__Sqrt_1(::uStatic* __this, float x_)
{
    return sqrtf(x_);
}

::app::Uno::Float2 Math__Sqrt_2(::uStatic* __this, ::app::Uno::Float2 x)
{
    return ::app::Uno::Float2__New_2(NULL, Math__Sqrt_1(NULL, x.X), Math__Sqrt_1(NULL, x.Y));
}

float Math__Tan_3(::uStatic* __this, float radians_)
{
    return tanf(radians_);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Matrix__uType* Matrix__typeof()
{
    static ::uStaticStrong<Matrix__uType*> type;
    if (type != NULL) return type;

    type = (Matrix__uType*)::uAllocClassType(sizeof(Matrix__uType), "Uno.Matrix");

    return type;
}

bool Matrix__Decompose(::uStatic* __this, ::app::Uno::Float4x4 value, ::app::Uno::Float3* scale, ::app::Uno::Float4* rotationQuaternion, ::app::Uno::Float3* translation)
{
    (*translation).X = value.M41;
    (*translation).Y = value.M42;
    (*translation).Z = value.M43;
    (*scale).X = ::app::Uno::Math__Sqrt_1(NULL, ((value.M11 * value.M11) + (value.M12 * value.M12)) + (value.M13 * value.M13));
    (*scale).Y = ::app::Uno::Math__Sqrt_1(NULL, ((value.M21 * value.M21) + (value.M22 * value.M22)) + (value.M23 * value.M23));
    (*scale).Z = ::app::Uno::Math__Sqrt_1(NULL, ((value.M31 * value.M31) + (value.M32 * value.M32)) + (value.M33 * value.M33));

    if (((::app::Uno::Math__Abs_8(NULL, (*scale).X) < 1e-05f) || (::app::Uno::Math__Abs_8(NULL, (*scale).Y) < 1e-05f)) || (::app::Uno::Math__Abs_8(NULL, (*scale).Z) < 1e-05f))
    {
        *rotationQuaternion = ::app::Uno::Float4__get_Identity(NULL);
        return false;
    }

    ::app::Uno::Float3x3 rotationMatrix = ::app::Uno::Float3x3__New_2(NULL, value.M11 / (*scale).X, value.M12 / (*scale).X, value.M13 / (*scale).X, value.M21 / (*scale).Y, value.M22 / (*scale).Y, value.M23 / (*scale).Y, value.M31 / (*scale).Z, value.M32 / (*scale).Z, value.M33 / (*scale).Z);
    *rotationQuaternion = ::app::Uno::Quaternion__RotationMatrix(NULL, rotationMatrix);
    return true;
}

::app::Uno::Float4x4 Matrix__Invert_2(::uStatic* __this, ::app::Uno::Float4x4 value)
{
    float b0 = (value.M31 * value.M42) - (value.M32 * value.M41);
    float b1 = (value.M31 * value.M43) - (value.M33 * value.M41);
    float b2 = (value.M34 * value.M41) - (value.M31 * value.M44);
    float b3 = (value.M32 * value.M43) - (value.M33 * value.M42);
    float b4 = (value.M34 * value.M42) - (value.M32 * value.M44);
    float b5 = (value.M33 * value.M44) - (value.M34 * value.M43);
    float d11 = ((value.M22 * b5) + (value.M23 * b4)) + (value.M24 * b3);
    float d12 = ((value.M21 * b5) + (value.M23 * b2)) + (value.M24 * b1);
    float d13 = ((value.M21 * -b4) + (value.M22 * b2)) + (value.M24 * b0);
    float d14 = ((value.M21 * b3) + (value.M22 * -b1)) + (value.M23 * b0);
    float det = (((value.M11 * d11) - (value.M12 * d12)) + (value.M13 * d13)) - (value.M14 * d14);

    if (::app::Uno::Math__Abs_8(NULL, det) <= 1e-05f)
    {
        return ::app::Uno::Float4x4__get_Identity(NULL);
    }

    det = 1.0f / det;
    float a0 = (value.M11 * value.M22) - (value.M12 * value.M21);
    float a1 = (value.M11 * value.M23) - (value.M13 * value.M21);
    float a2 = (value.M14 * value.M21) - (value.M11 * value.M24);
    float a3 = (value.M12 * value.M23) - (value.M13 * value.M22);
    float a4 = (value.M14 * value.M22) - (value.M12 * value.M24);
    float a5 = (value.M13 * value.M24) - (value.M14 * value.M23);
    float d21 = ((value.M12 * b5) + (value.M13 * b4)) + (value.M14 * b3);
    float d22 = ((value.M11 * b5) + (value.M13 * b2)) + (value.M14 * b1);
    float d23 = ((value.M11 * -b4) + (value.M12 * b2)) + (value.M14 * b0);
    float d24 = ((value.M11 * b3) + (value.M12 * -b1)) + (value.M13 * b0);
    float d31 = ((value.M42 * a5) + (value.M43 * a4)) + (value.M44 * a3);
    float d32 = ((value.M41 * a5) + (value.M43 * a2)) + (value.M44 * a1);
    float d33 = ((value.M41 * -a4) + (value.M42 * a2)) + (value.M44 * a0);
    float d34 = ((value.M41 * a3) + (value.M42 * -a1)) + (value.M43 * a0);
    float d41 = ((value.M32 * a5) + (value.M33 * a4)) + (value.M34 * a3);
    float d42 = ((value.M31 * a5) + (value.M33 * a2)) + (value.M34 * a1);
    float d43 = ((value.M31 * -a4) + (value.M32 * a2)) + (value.M34 * a0);
    float d44 = ((value.M31 * a3) + (value.M32 * -a1)) + (value.M33 * a0);
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4();
    result.M11 = d11 * det;
    result.M12 = -d21 * det;
    result.M13 = d31 * det;
    result.M14 = -d41 * det;
    result.M21 = -d12 * det;
    result.M22 = d22 * det;
    result.M23 = -d32 * det;
    result.M24 = d42 * det;
    result.M31 = d13 * det;
    result.M32 = -d23 * det;
    result.M33 = d33 * det;
    result.M34 = -d43 * det;
    result.M41 = -d14 * det;
    result.M42 = d24 * det;
    result.M43 = -d34 * det;
    result.M44 = d44 * det;
    return result;
}

::app::Uno::Float4x4 Matrix__Mul_10(::uStatic* __this, ::app::Uno::Float4x4 left, ::app::Uno::Float4x4 right)
{
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4();
    result.M11 = (((left.M11 * right.M11) + (left.M12 * right.M21)) + (left.M13 * right.M31)) + (left.M14 * right.M41);
    result.M12 = (((left.M11 * right.M12) + (left.M12 * right.M22)) + (left.M13 * right.M32)) + (left.M14 * right.M42);
    result.M13 = (((left.M11 * right.M13) + (left.M12 * right.M23)) + (left.M13 * right.M33)) + (left.M14 * right.M43);
    result.M14 = (((left.M11 * right.M14) + (left.M12 * right.M24)) + (left.M13 * right.M34)) + (left.M14 * right.M44);
    result.M21 = (((left.M21 * right.M11) + (left.M22 * right.M21)) + (left.M23 * right.M31)) + (left.M24 * right.M41);
    result.M22 = (((left.M21 * right.M12) + (left.M22 * right.M22)) + (left.M23 * right.M32)) + (left.M24 * right.M42);
    result.M23 = (((left.M21 * right.M13) + (left.M22 * right.M23)) + (left.M23 * right.M33)) + (left.M24 * right.M43);
    result.M24 = (((left.M21 * right.M14) + (left.M22 * right.M24)) + (left.M23 * right.M34)) + (left.M24 * right.M44);
    result.M31 = (((left.M31 * right.M11) + (left.M32 * right.M21)) + (left.M33 * right.M31)) + (left.M34 * right.M41);
    result.M32 = (((left.M31 * right.M12) + (left.M32 * right.M22)) + (left.M33 * right.M32)) + (left.M34 * right.M42);
    result.M33 = (((left.M31 * right.M13) + (left.M32 * right.M23)) + (left.M33 * right.M33)) + (left.M34 * right.M43);
    result.M34 = (((left.M31 * right.M14) + (left.M32 * right.M24)) + (left.M33 * right.M34)) + (left.M34 * right.M44);
    result.M41 = (((left.M41 * right.M11) + (left.M42 * right.M21)) + (left.M43 * right.M31)) + (left.M44 * right.M41);
    result.M42 = (((left.M41 * right.M12) + (left.M42 * right.M22)) + (left.M43 * right.M32)) + (left.M44 * right.M42);
    result.M43 = (((left.M41 * right.M13) + (left.M42 * right.M23)) + (left.M43 * right.M33)) + (left.M44 * right.M43);
    result.M44 = (((left.M41 * right.M14) + (left.M42 * right.M24)) + (left.M43 * right.M34)) + (left.M44 * right.M44);
    return result;
}

::app::Uno::Float4x4 Matrix__Mul_2(::uStatic* __this, ::app::Uno::Float4x4 a, ::app::Uno::Float4x4 b, ::app::Uno::Float4x4 c)
{
    return Matrix__Mul_10(NULL, Matrix__Mul_10(NULL, a, b), c);
}

::app::Uno::Float4x4 Matrix__Mul_3(::uStatic* __this, ::app::Uno::Float4x4 a, ::app::Uno::Float4x4 b, ::app::Uno::Float4x4 c, ::app::Uno::Float4x4 d)
{
    return Matrix__Mul_10(NULL, Matrix__Mul_2(NULL, a, b, c), d);
}

::app::Uno::Float4x4 Matrix__RotationAxis(::uStatic* __this, ::app::Uno::Float3 axisNormalized, float angleRadians)
{
    axisNormalized = ::app::Uno::Vector__Normalize_1(NULL, axisNormalized);
    float x = axisNormalized.X;
    float y = axisNormalized.Y;
    float z = axisNormalized.Z;
    float c = ::app::Uno::Math__Cos_1(NULL, angleRadians);
    float s = ::app::Uno::Math__Sin_1(NULL, angleRadians);
    float xx = x * x;
    float yy = y * y;
    float zz = z * z;
    float xy = x * y;
    float xz = x * z;
    float yz = y * z;
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4__get_Identity(NULL);
    result.M11 = xx + (c * (1.0f - xx));
    result.M12 = (xy - (c * xy)) + (s * z);
    result.M13 = (xz - (c * xz)) - (s * y);
    result.M21 = (xy - (c * xy)) - (s * z);
    result.M22 = yy + (c * (1.0f - yy));
    result.M23 = (yz - (c * yz)) + (s * x);
    result.M31 = (xz - (c * xz)) + (s * y);
    result.M32 = (yz - (c * yz)) - (s * x);
    result.M33 = zz + (c * (1.0f - zz));
    return result;
}

::app::Uno::Float4x4 Matrix__RotationQuaternion(::uStatic* __this, ::app::Uno::Float4 rotation)
{
    float xx = rotation.X * rotation.X;
    float yy = rotation.Y * rotation.Y;
    float zz = rotation.Z * rotation.Z;
    float xy = rotation.X * rotation.Y;
    float zw = rotation.Z * rotation.W;
    float zx = rotation.Z * rotation.X;
    float yw = rotation.Y * rotation.W;
    float yz = rotation.Y * rotation.Z;
    float xw = rotation.X * rotation.W;
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4__get_Identity(NULL);
    result.M11 = 1.0f - (2.0f * (yy + zz));
    result.M12 = 2.0f * (xy + zw);
    result.M13 = 2.0f * (zx - yw);
    result.M21 = 2.0f * (xy - zw);
    result.M22 = 1.0f - (2.0f * (zz + xx));
    result.M23 = 2.0f * (yz + xw);
    result.M31 = 2.0f * (zx + yw);
    result.M32 = 2.0f * (yz - xw);
    result.M33 = 1.0f - (2.0f * (yy + xx));
    return result;
}

::app::Uno::Float4x4 Matrix__RotationZ(::uStatic* __this, float angleRadians)
{
    return Matrix__RotationAxis(NULL, ::app::Uno::Float3__New_2(NULL, 0.0f, 0.0f, 1.0f), angleRadians);
}

::app::Uno::Float4x4 Matrix__Scaling(::uStatic* __this, float scale)
{
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4__get_Identity(NULL);
    result.M11 = scale;
    result.M22 = scale;
    result.M33 = scale;
    return result;
}

::app::Uno::Float4x4 Matrix__Scaling_1(::uStatic* __this, float x, float y, float z)
{
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4__get_Identity(NULL);
    result.M11 = x;
    result.M22 = y;
    result.M33 = z;
    return result;
}

::app::Uno::Float4x4 Matrix__Scaling_2(::uStatic* __this, ::app::Uno::Float3 scale)
{
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4__get_Identity(NULL);
    result.M11 = scale.X;
    result.M22 = scale.Y;
    result.M33 = scale.Z;
    return result;
}

::app::Uno::Float4x4 Matrix__Shear(::uStatic* __this, ::app::Uno::Float2 angle)
{
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4__get_Identity(NULL);
    result.M12 = ::app::Uno::Math__Tan_3(NULL, angle.Y);
    result.M21 = ::app::Uno::Math__Tan_3(NULL, angle.X);
    return result;
}

::app::Uno::Float4x4 Matrix__Translation(::uStatic* __this, float x, float y, float z)
{
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4__get_Identity(NULL);
    result.M41 = x;
    result.M42 = y;
    result.M43 = z;
    return result;
}

::app::Uno::Float4x4 Matrix__Translation_1(::uStatic* __this, ::app::Uno::Float3 offset)
{
    ::app::Uno::Float4x4 result = ::app::Uno::Float4x4__get_Identity(NULL);
    result.M41 = offset.X;
    result.M42 = offset.Y;
    result.M43 = offset.Z;
    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Exceptions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NotImplementedException__uType* NotImplementedException__typeof()
{
    static ::uStaticStrong<NotImplementedException__uType*> type;
    if (type != NULL) return type;

    type = (NotImplementedException__uType*)::uAllocClassType(sizeof(NotImplementedException__uType), "Uno.NotImplementedException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    return type;
}

void NotImplementedException___ObjInit_2(NotImplementedException* __this)
{
    ::app::Uno::Exception___ObjInit_1(__this, ::uGetConstString("Not implemented"));
}

NotImplementedException* NotImplementedException__New_3(::uStatic* __this)
{
    NotImplementedException* inst = (NotImplementedException*)::uAllocObject(sizeof(NotImplementedException), NotImplementedException__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Exceptions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NotSupportedException__uType* NotSupportedException__typeof()
{
    static ::uStaticStrong<NotSupportedException__uType*> type;
    if (type != NULL) return type;

    type = (NotSupportedException__uType*)::uAllocClassType(sizeof(NotSupportedException__uType), "Uno.NotSupportedException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    return type;
}

void NotSupportedException___ObjInit_2(NotSupportedException* __this)
{
    ::app::Uno::Exception___ObjInit_1(__this, ::uGetConstString("Method not supported"));
}

void NotSupportedException___ObjInit_3(NotSupportedException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit_1(__this, message);
}

NotSupportedException* NotSupportedException__New_3(::uStatic* __this)
{
    NotSupportedException* inst = (NotSupportedException*)::uAllocObject(sizeof(NotSupportedException), NotSupportedException__typeof());
    inst->_ObjInit_2();
    return inst;
}

NotSupportedException* NotSupportedException__New_4(::uStatic* __this, ::uString* message)
{
    NotSupportedException* inst = (NotSupportedException*)::uAllocObject(sizeof(NotSupportedException), NotSupportedException__typeof());
    inst->_ObjInit_3(message);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Exceptions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NullReferenceException__uType* NullReferenceException__typeof()
{
    static ::uStaticStrong<NullReferenceException__uType*> type;
    if (type != NULL) return type;

    type = (NullReferenceException__uType*)::uAllocClassType(sizeof(NullReferenceException__uType), "Uno.NullReferenceException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    return type;
}

void NullReferenceException___ObjInit_2(NullReferenceException* __this)
{
    ::app::Uno::Exception___ObjInit_1(__this, ::uGetConstString("Object reference was null"));
}

NullReferenceException* NullReferenceException__New_3(::uStatic* __this)
{
    NullReferenceException* inst = (NullReferenceException*)::uAllocObject(sizeof(NullReferenceException), NullReferenceException__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

bool Object__Equals(::uObject* __this, ::uObject* o_)
{
    switch (__this->__obj_type->TypeType)
    {
        case uTypeTypeEnum:
        case uTypeTypeStruct:
            return __this == o_ ||
                   (o_ != NULL &&
                    (o_->__obj_type == __this->__obj_type || 
                     (o_->__obj_type->TypeType == uTypeTypeEnum && o_->__obj_type->BaseType == __this->__obj_type)) &&
                    memcmp((const uByte*)__this + sizeof(uObject), (const uByte*)o_ + sizeof(uObject), __this->__obj_type->ValueSize) == 0);
        default:
            return __this == o_;
    }
}

bool Object__Equals_1(::uStatic* __this, ::uObject* left, ::uObject* right)
{
    if (left == right)
    {
        return true;
    }

    if ((left == NULL) || (right == NULL))
    {
        return false;
    }

    return Object::Equals(::uPtr< ::uObject*>(left), right);
}

int Object__GetHashCode(::uObject* __this)
{
    switch (__this->__obj_type->TypeType)
    {
        case uTypeTypeEnum:
        case uTypeTypeStruct:
            return (int)Xli::DefaultTraits::Hash((const Xli::UInt8*)__this + sizeof(uObject), (int)__this->__obj_type->ValueSize);
        default:
            return (int)Xli::DefaultTraits::Hash(__this);
    }
}

::uType* Object__GetType(::uObject* __this)
{
    return __this->__obj_type;
}

::uObject* Object__New(::uStatic* __this)
{
    ::uObject* inst = (::uObject*)::uAllocObject(sizeof(::uObject), ::uObject__typeof());
    return inst;
}

bool Object__ReferenceEquals(::uStatic* __this, ::uObject* left, ::uObject* right)
{
    return left == right;
}

::uString* Object__ToString(::uObject* __this)
{
    return __this->__obj_type->TypeType == uTypeTypeEnum 
        ? uGetEnumString(__this->__obj_type, (uByte*)__this + sizeof(uObject), __this->__obj_type->ValueSize)
        : uGetConstString(__this->__obj_type->TypeName);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Exceptions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ObjectDisposedException__uType* ObjectDisposedException__typeof()
{
    static ::uStaticStrong<ObjectDisposedException__uType*> type;
    if (type != NULL) return type;

    type = (ObjectDisposedException__uType*)::uAllocClassType(sizeof(ObjectDisposedException__uType), "Uno.ObjectDisposedException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    return type;
}

void ObjectDisposedException___ObjInit_2(ObjectDisposedException* __this, ::uString* objectName)
{
    ::app::Uno::Exception___ObjInit_1(__this, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Attempt to access disposed object: "), objectName));
}

ObjectDisposedException* ObjectDisposedException__New_3(::uStatic* __this, ::uString* objectName)
{
    ObjectDisposedException* inst = (ObjectDisposedException*)::uAllocObject(sizeof(ObjectDisposedException), ObjectDisposedException__typeof());
    inst->_ObjInit_2(objectName);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Exceptions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

OverflowException__uType* OverflowException__typeof()
{
    static ::uStaticStrong<OverflowException__uType*> type;
    if (type != NULL) return type;

    type = (OverflowException__uType*)::uAllocClassType(sizeof(OverflowException__uType), "Uno.OverflowException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    return type;
}

void OverflowException___ObjInit_2(OverflowException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit_1(__this, message);
}

OverflowException* OverflowException__New_3(::uStatic* __this, ::uString* message)
{
    OverflowException* inst = (OverflowException*)::uAllocObject(sizeof(OverflowException), OverflowException__typeof());
    inst->_ObjInit_2(message);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Predicate__Fuse_Drawing_Tesselation_Face__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Predicate<Fuse.Drawing.Tesselation.Face>", 1);

    type->SetSignature(::app::Uno::Bool__typeof(),
        ::app::Fuse::Drawing::Tesselation::Face__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Predicate__Fuse_Drawing_Tesselation_HalfEdge__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Predicate<Fuse.Drawing.Tesselation.HalfEdge>", 1);

    type->SetSignature(::app::Uno::Bool__typeof(),
        ::app::Fuse::Drawing::Tesselation::HalfEdge__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Predicate__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Predicate<Fuse.Node>", 1);

    type->SetSignature(::app::Uno::Bool__typeof(),
        ::app::Fuse::Node__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Predicate__int__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Predicate<int>", 1);

    type->SetSignature(::app::Uno::Bool__typeof(),
        ::app::Uno::Int__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* Predicate__object__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Uno.Predicate<object>", 1);

    type->SetSignature(::app::Uno::Bool__typeof(),
        ::uObject__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Quaternion__uType* Quaternion__typeof()
{
    static ::uStaticStrong<Quaternion__uType*> type;
    if (type != NULL) return type;

    type = (Quaternion__uType*)::uAllocClassType(sizeof(Quaternion__uType), "Uno.Quaternion");

    return type;
}

::app::Uno::Float4 Quaternion__FromEulerAngle(::uStatic* __this, float pitch, float yaw, float roll)
{
    float tmp = pitch;
    pitch = yaw;
    yaw = tmp;
    float rollOver2 = roll * 0.5f;
    float sinRollOver2 = ::app::Uno::Math__Sin_1(NULL, rollOver2);
    float cosRollOver2 = ::app::Uno::Math__Cos_1(NULL, rollOver2);
    float yawOver2 = yaw * 0.5f;
    float sinYawOver2 = ::app::Uno::Math__Sin_1(NULL, yawOver2);
    float cosYawOver2 = ::app::Uno::Math__Cos_1(NULL, yawOver2);
    float pitchOver2 = pitch * 0.5f;
    float sinPitchOver2 = ::app::Uno::Math__Sin_1(NULL, pitchOver2);
    float cosPitchOver2 = ::app::Uno::Math__Cos_1(NULL, pitchOver2);
    ::app::Uno::Float4 result = ::app::Uno::Float4();
    result.W = ((cosPitchOver2 * cosYawOver2) * cosRollOver2) + ((sinPitchOver2 * sinYawOver2) * sinRollOver2);
    result.X = ((cosPitchOver2 * sinYawOver2) * cosRollOver2) + ((sinPitchOver2 * cosYawOver2) * sinRollOver2);
    result.Y = ((sinPitchOver2 * cosYawOver2) * cosRollOver2) - ((cosPitchOver2 * sinYawOver2) * sinRollOver2);
    result.Z = ((cosPitchOver2 * cosYawOver2) * sinRollOver2) - ((sinPitchOver2 * sinYawOver2) * cosRollOver2);
    return result;
}

::app::Uno::Float4 Quaternion__FromEulerAngle_1(::uStatic* __this, ::app::Uno::Float3 v)
{
    return Quaternion__FromEulerAngle(NULL, v.X, v.Y, v.Z);
}

::app::Uno::Float4 Quaternion__FromEulerAngleDegrees(::uStatic* __this, ::app::Uno::Float3 v)
{
    return Quaternion__FromEulerAngleDegrees_1(NULL, v.X, v.Y, v.Z);
}

::app::Uno::Float4 Quaternion__FromEulerAngleDegrees_1(::uStatic* __this, float pitch, float yaw, float roll)
{
    return Quaternion__FromEulerAngle(NULL, ::app::Uno::Math__DegreesToRadians_1(NULL, pitch), ::app::Uno::Math__DegreesToRadians_1(NULL, yaw), ::app::Uno::Math__DegreesToRadians_1(NULL, roll));
}

::app::Uno::Float4 Quaternion__Mul(::uStatic* __this, ::app::Uno::Float4 left, ::app::Uno::Float4 right)
{
    float lx = left.X;
    float ly = left.Y;
    float lz = left.Z;
    float lw = left.W;
    float rx = right.X;
    float ry = right.Y;
    float rz = right.Z;
    float rw = right.W;
    return ::app::Uno::Float4__New_2(NULL, (((rx * lw) + (lx * rw)) + (ry * lz)) - (rz * ly), (((ry * lw) + (ly * rw)) + (rz * lx)) - (rx * lz), (((rz * lw) + (lz * rw)) + (rx * ly)) - (ry * lx), (rw * lw) - (((rx * lx) + (ry * ly)) + (rz * lz)));
}

float Quaternion__NormalizeAngleDegrees(::uStatic* __this, float angle)
{
    while (angle > 360.0f)
    {
        angle = angle - 360.0f;
    }

    while (angle < 0.0f)
    {
        angle = angle + 360.0f;
    }

    return angle;
}

::app::Uno::Float3 Quaternion__NormalizeAnglesDegrees(::uStatic* __this, ::app::Uno::Float3 angles)
{
    angles.X = Quaternion__NormalizeAngleDegrees(NULL, angles.X);
    angles.Y = Quaternion__NormalizeAngleDegrees(NULL, angles.Y);
    angles.Z = Quaternion__NormalizeAngleDegrees(NULL, angles.Z);
    return angles;
}

::app::Uno::Float4 Quaternion__RotationAxis(::uStatic* __this, ::app::Uno::Float3 axisNormalized, float angleRadians)
{
    axisNormalized = ::app::Uno::Vector__Normalize_1(NULL, axisNormalized);
    float h = angleRadians * 0.5f;
    float s = ::app::Uno::Math__Sin_1(NULL, h);
    float c = ::app::Uno::Math__Cos_1(NULL, h);
    return ::app::Uno::Float4__New_2(NULL, axisNormalized.X * s, axisNormalized.Y * s, axisNormalized.Z * s, c);
}

::app::Uno::Float4 Quaternion__RotationMatrix(::uStatic* __this, ::app::Uno::Float3x3 matrix)
{
    float sqrt = float();
    float halff = float();
    float scale = (matrix.M11 + matrix.M22) + matrix.M33;
    ::app::Uno::Float4 result = ::app::Uno::Float4();

    if (scale > 0.0f)
    {
        sqrt = ::app::Uno::Math__Sqrt_1(NULL, scale + 1.0f);
        result.W = sqrt * 0.5f;
        sqrt = 0.5f / sqrt;
        result.X = (matrix.M23 - matrix.M32) * sqrt;
        result.Y = (matrix.M31 - matrix.M13) * sqrt;
        result.Z = (matrix.M12 - matrix.M21) * sqrt;
    }
    else if ((matrix.M11 >= matrix.M22) && (matrix.M11 >= matrix.M33))
    {
        sqrt = ::app::Uno::Math__Sqrt_1(NULL, ((1.0f + matrix.M11) - matrix.M22) - matrix.M33);
        halff = 0.5f / sqrt;
        result.X = 0.5f * sqrt;
        result.Y = (matrix.M12 + matrix.M21) * halff;
        result.Z = (matrix.M13 + matrix.M31) * halff;
        result.W = (matrix.M23 - matrix.M32) * halff;
    }
    else if (matrix.M22 > matrix.M33)
    {
        sqrt = ::app::Uno::Math__Sqrt_1(NULL, ((1.0f + matrix.M22) - matrix.M11) - matrix.M33);
        halff = 0.5f / sqrt;
        result.X = (matrix.M21 + matrix.M12) * halff;
        result.Y = 0.5f * sqrt;
        result.Z = (matrix.M32 + matrix.M23) * halff;
        result.W = (matrix.M31 - matrix.M13) * halff;
    }
    else
    {
        sqrt = ::app::Uno::Math__Sqrt_1(NULL, ((1.0f + matrix.M33) - matrix.M11) - matrix.M22);
        halff = 0.5f / sqrt;
        result.X = (matrix.M31 + matrix.M13) * halff;
        result.Y = (matrix.M32 + matrix.M23) * halff;
        result.Z = 0.5f * sqrt;
        result.W = (matrix.M12 - matrix.M21) * halff;
    }

    return result;
}

::app::Uno::Float3 Quaternion__ToEulerAngle(::uStatic* __this, ::app::Uno::Float4 q1)
{
    float sqw = q1.W * q1.W;
    float sqx = q1.X * q1.X;
    float sqy = q1.Y * q1.Y;
    float sqz = q1.Z * q1.Z;
    float unit = ((sqx + sqy) + sqz) + sqw;
    float test = (q1.X * q1.W) - (q1.Y * q1.Z);
    ::app::Uno::Float3 v = ::app::Uno::Float3();

    if (test > (0.4995f * unit))
    {
        v.Y = 2.0f * ::app::Uno::Math__Atan2_1(NULL, q1.Y, q1.X);
        v.X = 1.57079637f;
        v.Z = 0.0f;
        return v;
    }

    if (test < (-0.4995f * unit))
    {
        v.Y = -2.0f * ::app::Uno::Math__Atan2_1(NULL, q1.Y, q1.X);
        v.X = -1.57079637f;
        v.Z = 0.0f;
        return v;
    }

    ::app::Uno::Float4 q = ::app::Uno::Float4__New_2(NULL, q1.W, q1.Z, q1.X, q1.Y);
    v.Y = ::app::Uno::Math__Atan2_1(NULL, ((2.0f * q.X) * q.W) + ((2.0f * q.Y) * q.Z), 1.0f - (2.0f * ((q.Z * q.Z) + (q.W * q.W))));
    v.X = ::app::Uno::Math__Asin_1(NULL, 2.0f * ((q.X * q.Z) - (q.W * q.Y)));
    v.Z = ::app::Uno::Math__Atan2_1(NULL, ((2.0f * q.X) * q.Y) + ((2.0f * q.Z) * q.W), 1.0f - (2.0f * ((q.Y * q.Y) + (q.Z * q.Z))));
    return v;
}

::app::Uno::Float3 Quaternion__ToEulerAngleDegrees(::uStatic* __this, ::app::Uno::Float4 q1)
{
    ::app::Uno::Float3 v = Quaternion__ToEulerAngle(NULL, q1);
    return Quaternion__NormalizeAnglesDegrees(NULL, ::app::Uno::Float3__New_2(NULL, ::app::Uno::Math__RadiansToDegrees_3(NULL, v.X), ::app::Uno::Math__RadiansToDegrees_3(NULL, v.Y), ::app::Uno::Math__RadiansToDegrees_3(NULL, v.Z)));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Rect__uType* Rect__typeof()
{
    static ::uStaticStrong<Rect__uType*> type;
    if (type != NULL) return type;

    type = (Rect__uType*)::uAllocStructType(sizeof(Rect__uType), "Uno.Rect", sizeof(Rect), 0, 0, 0);

    type->__fp_ToString_value = (::uString*(*)(void*))Rect__ToString;

    return type;
}

void Rect___ObjInit(Rect* __this, float left, float top, float right, float bottom)
{
    __this->Left = left;
    __this->Top = top;
    __this->Right = right;
    __this->Bottom = bottom;
}

void Rect___ObjInit_1(Rect* __this, ::app::Uno::Float2 pos, ::app::Uno::Float2 size)
{
    __this->Left = pos.X;
    __this->Top = pos.Y;
    __this->Right = __this->Left + size.X;
    __this->Bottom = __this->Top + size.Y;
}

Rect Rect__ContainingPoints(::uStatic* __this, ::app::Uno::Float2 point0, ::app::Uno::Float2 point1)
{
    float minX = point0.X;
    float maxX = point0.X;
    float minY = point0.Y;
    float maxY = point0.Y;
    minX = ::app::Uno::Math__Min_11(NULL, minX, point1.X);
    maxX = ::app::Uno::Math__Max_8(NULL, maxX, point1.X);
    minY = ::app::Uno::Math__Min_11(NULL, minY, point1.Y);
    maxY = ::app::Uno::Math__Max_8(NULL, maxY, point1.Y);
    return Rect__New_1(NULL, minX, minY, maxX, maxY);
}

Rect Rect__ContainingPoints_1(::uStatic* __this, ::app::Uno::Float2 point0, ::app::Uno::Float2 point1, ::app::Uno::Float2 point2, ::app::Uno::Float2 point3)
{
    float minX = point0.X;
    float maxX = point0.X;
    float minY = point0.Y;
    float maxY = point0.Y;
    minX = ::app::Uno::Math__Min_11(NULL, minX, point1.X);
    maxX = ::app::Uno::Math__Max_8(NULL, maxX, point1.X);
    minY = ::app::Uno::Math__Min_11(NULL, minY, point1.Y);
    maxY = ::app::Uno::Math__Max_8(NULL, maxY, point1.Y);
    minX = ::app::Uno::Math__Min_11(NULL, minX, point2.X);
    maxX = ::app::Uno::Math__Max_8(NULL, maxX, point2.X);
    minY = ::app::Uno::Math__Min_11(NULL, minY, point2.Y);
    maxY = ::app::Uno::Math__Max_8(NULL, maxY, point2.Y);
    minX = ::app::Uno::Math__Min_11(NULL, minX, point3.X);
    maxX = ::app::Uno::Math__Max_8(NULL, maxX, point3.X);
    minY = ::app::Uno::Math__Min_11(NULL, minY, point3.Y);
    maxY = ::app::Uno::Math__Max_8(NULL, maxY, point3.Y);
    return Rect__New_1(NULL, minX, minY, maxX, maxY);
}

bool Rect__Equals_2(::uStatic* __this, Rect rect1, Rect rect2)
{
    return (((rect1.Left == rect2.Left) && (rect1.Top == rect2.Top)) && (rect1.Right == rect2.Right)) && (rect1.Bottom == rect2.Bottom);
}

::app::Uno::Float2 Rect__get_LeftBottom(Rect* __this)
{
    return ::app::Uno::Float2__New_2(NULL, __this->Left, __this->Bottom);
}

::app::Uno::Float2 Rect__get_LeftTop(Rect* __this)
{
    return ::app::Uno::Float2__New_2(NULL, __this->Left, __this->Top);
}

::app::Uno::Float2 Rect__get_Maximum(Rect* __this)
{
    return ::app::Uno::Float2__New_2(NULL, __this->Right, __this->Bottom);
}

::app::Uno::Float2 Rect__get_Minimum(Rect* __this)
{
    return ::app::Uno::Float2__New_2(NULL, __this->Left, __this->Top);
}

::app::Uno::Float2 Rect__get_Position(Rect* __this)
{
    return __this->Minimum();
}

::app::Uno::Float2 Rect__get_RightBottom(Rect* __this)
{
    return ::app::Uno::Float2__New_2(NULL, __this->Right, __this->Bottom);
}

::app::Uno::Float2 Rect__get_RightTop(Rect* __this)
{
    return ::app::Uno::Float2__New_2(NULL, __this->Right, __this->Top);
}

::app::Uno::Float2 Rect__get_Size(Rect* __this)
{
    return ::app::Uno::Float2__New_2(NULL, __this->Right - __this->Left, __this->Bottom - __this->Top);
}

Rect Rect__Inflate(::uStatic* __this, Rect r, ::app::Uno::Float2 size)
{
    return Rect__New_1(NULL, r.Left - size.X, r.Top - size.Y, r.Right + size.X, r.Bottom + size.Y);
}

Rect Rect__Inflate_1(::uStatic* __this, Rect r, float size)
{
    return Rect__Inflate(NULL, r, ::app::Uno::Float2__New_2(NULL, size, size));
}

Rect Rect__Intersect(::uStatic* __this, Rect a, Rect b)
{
    return Rect__New_1(NULL, ::app::Uno::Math__Max_8(NULL, a.Left, b.Left), ::app::Uno::Math__Max_8(NULL, a.Top, b.Top), ::app::Uno::Math__Min_11(NULL, a.Right, b.Right), ::app::Uno::Math__Min_11(NULL, a.Bottom, b.Bottom));
}

bool Rect__Intersects(Rect* __this, Rect r)
{
    return !((((r.Left > __this->Right) || (r.Right < __this->Left)) || (r.Top > __this->Bottom)) || (r.Bottom < __this->Top));
}

Rect Rect__New_1(::uStatic* __this, float left, float top, float right, float bottom)
{
    Rect inst = ::uDefault< Rect>();
    inst._ObjInit(left, top, right, bottom);
    return inst;
}

Rect Rect__New_2(::uStatic* __this, ::app::Uno::Float2 pos, ::app::Uno::Float2 size)
{
    Rect inst = ::uDefault< Rect>();
    inst._ObjInit_1(pos, size);
    return inst;
}

Rect Rect__op_Implicit(::uStatic* __this, ::app::Uno::Recti r)
{
    return Rect__New_1(NULL, (float)r.Left, (float)r.Top, (float)r.Right, (float)r.Bottom);
}

Rect Rect__Scale(::uStatic* __this, Rect r, float scale)
{
    return Rect__Scale_1(NULL, r, ::app::Uno::Float2__New_2(NULL, scale, scale));
}

Rect Rect__Scale_1(::uStatic* __this, Rect r, ::app::Uno::Float2 scale)
{
    return Rect__New_1(NULL, r.Left * scale.X, r.Top * scale.Y, r.Right * scale.X, r.Bottom * scale.Y);
}

void Rect__set_Maximum(Rect* __this, ::app::Uno::Float2 value)
{
    __this->Right = value.X;
    __this->Bottom = value.Y;
}

void Rect__set_Minimum(Rect* __this, ::app::Uno::Float2 value)
{
    __this->Left = value.X;
    __this->Top = value.Y;
}

void Rect__set_Position(Rect* __this, ::app::Uno::Float2 value)
{
    ::app::Uno::Float2 dp = ::app::Uno::Float2__op_Subtraction_2(NULL, value, __this->Position());
    __this->Left = value.X;
    __this->Right = __this->Right + dp.X;
    __this->Top = value.Y;
    __this->Bottom = __this->Bottom + dp.Y;
}

void Rect__set_Size(Rect* __this, ::app::Uno::Float2 value)
{
    __this->Right = __this->Left + value.X;
    __this->Bottom = __this->Top + value.Y;
}

::uString* Rect__ToString(Rect* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::Float::ToString(__this->Left), ::uGetConstString(", ")), ::app::Uno::Float::ToString(__this->Top)), ::uGetConstString(", ")), ::app::Uno::Float::ToString(__this->Right)), ::uGetConstString(", ")), ::app::Uno::Float::ToString(__this->Bottom));
}

Rect Rect__Transform(::uStatic* __this, Rect r, ::app::Uno::Float4x4 matrix)
{
    return Rect__ContainingPoints_1(NULL, ::app::Uno::Vector__TransformCoordinate(NULL, r.LeftTop(), matrix), ::app::Uno::Vector__TransformCoordinate(NULL, r.RightTop(), matrix), ::app::Uno::Vector__TransformCoordinate(NULL, r.RightBottom(), matrix), ::app::Uno::Vector__TransformCoordinate(NULL, r.LeftBottom(), matrix));
}

Rect Rect__Translate(::uStatic* __this, Rect r, ::app::Uno::Float2 offset)
{
    return Rect__New_1(NULL, r.Left + offset.X, r.Top + offset.Y, r.Right + offset.X, r.Bottom + offset.Y);
}

Rect Rect__Union(::uStatic* __this, Rect a, Rect b)
{
    return Rect__New_1(NULL, ::app::Uno::Math__Min_11(NULL, a.Left, b.Left), ::app::Uno::Math__Min_11(NULL, a.Top, b.Top), ::app::Uno::Math__Max_8(NULL, a.Right, b.Right), ::app::Uno::Math__Max_8(NULL, a.Bottom, b.Bottom));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Recti__uType* Recti__typeof()
{
    static ::uStaticStrong<Recti__uType*> type;
    if (type != NULL) return type;

    type = (Recti__uType*)::uAllocStructType(sizeof(Recti__uType), "Uno.Recti", sizeof(Recti), 0, 0, 0);

    type->__fp_ToString_value = (::uString*(*)(void*))Recti__ToString;

    return type;
}

void Recti___ObjInit(Recti* __this, int left, int top, int right, int bottom)
{
    __this->Left = left;
    __this->Top = top;
    __this->Right = right;
    __this->Bottom = bottom;
}

void Recti___ObjInit_1(Recti* __this, ::app::Uno::Int2 pos, ::app::Uno::Int2 size)
{
    __this->Left = pos.X;
    __this->Top = pos.Y;
    __this->Right = __this->Left + size.X;
    __this->Bottom = __this->Top + size.Y;
}

bool Recti__Equals_2(::uStatic* __this, Recti rect1, Recti rect2)
{
    return (((rect1.Left == rect2.Left) && (rect1.Top == rect2.Top)) && (rect1.Right == rect2.Right)) && (rect1.Bottom == rect2.Bottom);
}

int Recti__get_Area(Recti* __this)
{
    return (__this->Right - __this->Left) * (__this->Bottom - __this->Top);
}

::app::Uno::Int2 Recti__get_LeftBottom(Recti* __this)
{
    return ::app::Uno::Int2__New_2(NULL, __this->Left, __this->Bottom);
}

::app::Uno::Int2 Recti__get_Maximum(Recti* __this)
{
    return ::app::Uno::Int2__New_2(NULL, __this->Right, __this->Bottom);
}

::app::Uno::Int2 Recti__get_Minimum(Recti* __this)
{
    return ::app::Uno::Int2__New_2(NULL, __this->Left, __this->Top);
}

::app::Uno::Int2 Recti__get_Position(Recti* __this)
{
    return __this->Minimum();
}

::app::Uno::Int2 Recti__get_RightTop(Recti* __this)
{
    return ::app::Uno::Int2__New_2(NULL, __this->Right, __this->Top);
}

::app::Uno::Int2 Recti__get_Size(Recti* __this)
{
    return ::app::Uno::Int2__New_2(NULL, __this->Right - __this->Left, __this->Bottom - __this->Top);
}

Recti Recti__Inflate(::uStatic* __this, Recti r, ::app::Uno::Int2 size)
{
    return Recti__New_1(NULL, r.Left - size.X, r.Top - size.Y, r.Right + size.X, r.Bottom + size.Y);
}

Recti Recti__Inflate_1(::uStatic* __this, Recti r, int size)
{
    return Recti__Inflate(NULL, r, ::app::Uno::Int2__New_2(NULL, size, size));
}

Recti Recti__Intersect(::uStatic* __this, Recti a, Recti b)
{
    return Recti__New_1(NULL, ::app::Uno::Math__Max_2(NULL, a.Left, b.Left), ::app::Uno::Math__Max_2(NULL, a.Top, b.Top), ::app::Uno::Math__Min_5(NULL, a.Right, b.Right), ::app::Uno::Math__Min_5(NULL, a.Bottom, b.Bottom));
}

bool Recti__Intersects(Recti* __this, Recti r)
{
    return !((((r.Left > __this->Right) || (r.Right < __this->Left)) || (r.Top > __this->Bottom)) || (r.Bottom < __this->Top));
}

Recti Recti__New_1(::uStatic* __this, int left, int top, int right, int bottom)
{
    Recti inst = ::uDefault< Recti>();
    inst._ObjInit(left, top, right, bottom);
    return inst;
}

Recti Recti__New_2(::uStatic* __this, ::app::Uno::Int2 pos, ::app::Uno::Int2 size)
{
    Recti inst = ::uDefault< Recti>();
    inst._ObjInit_1(pos, size);
    return inst;
}

void Recti__set_Maximum(Recti* __this, ::app::Uno::Int2 value)
{
    __this->Right = value.X;
    __this->Bottom = value.Y;
}

void Recti__set_Minimum(Recti* __this, ::app::Uno::Int2 value)
{
    __this->Left = value.X;
    __this->Top = value.Y;
}

void Recti__set_Position(Recti* __this, ::app::Uno::Int2 value)
{
    ::app::Uno::Int2 dp = ::app::Uno::Int2__op_Subtraction(NULL, value, __this->Position());
    __this->Left = value.X;
    __this->Right = __this->Right + dp.X;
    __this->Top = value.Y;
    __this->Bottom = __this->Bottom + dp.Y;
}

void Recti__set_Size(Recti* __this, ::app::Uno::Int2 value)
{
    __this->Right = __this->Left + value.X;
    __this->Bottom = __this->Top + value.Y;
}

::uString* Recti__ToString(Recti* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::Int::ToString(__this->Left), ::uGetConstString(", ")), ::app::Uno::Int::ToString(__this->Top)), ::uGetConstString(", ")), ::app::Uno::Int::ToString(__this->Right)), ::uGetConstString(", ")), ::app::Uno::Int::ToString(__this->Bottom));
}

Recti Recti__Union(::uStatic* __this, Recti a, Recti b)
{
    return Recti__New_1(NULL, ::app::Uno::Math__Min_5(NULL, a.Left, b.Left), ::app::Uno::Math__Min_5(NULL, a.Top, b.Top), ::app::Uno::Math__Max_2(NULL, a.Right, b.Right), ::app::Uno::Math__Max_2(NULL, a.Bottom, b.Bottom));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SByte__uType* SByte__typeof()
{
    static ::uStaticStrong<SByte__uType*> type;
    if (type != NULL) return type;

    type = (SByte__uType*)::uAllocStructType(sizeof(SByte__uType), "Uno.SByte", sizeof(::uSByte), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))SByte__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))SByte__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))SByte__ToString;

    return type;
}

bool SByte__Equals(::uSByte* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox< ::uSByte>(SByte__typeof(), *__this), o);
}

int SByte__GetHashCode(::uSByte* __this)
{
    return (int)*__this;
}

::uString* SByte__ToString(::uSByte* __this)
{
    Xli::String ansi((int)*__this);
    return uNewStringAnsi(ansi.Ptr(), ansi.Length());
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Short__uType* Short__typeof()
{
    static ::uStaticStrong<Short__uType*> type;
    if (type != NULL) return type;

    type = (Short__uType*)::uAllocStructType(sizeof(Short__uType), "Uno.Short", sizeof(::uShort), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Short__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Short__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Short__ToString;

    return type;
}

bool Short__Equals(::uShort* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox< ::uShort>(Short__typeof(), *__this), o);
}

int Short__GetHashCode(::uShort* __this)
{
    return (int)*__this;
}

::uString* Short__ToString(::uShort* __this)
{
    Xli::String ansi((int)*__this);
    return uNewStringAnsi(ansi.Ptr(), ansi.Length());
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uString*> String__Empty;

String__uType* String__typeof()
{
    static ::uStaticStrong<String__uType*> type;
    if (type != NULL) return type;

    type = (String__uType*)::uAllocClassType(sizeof(String__uType), "Uno.String", false, 0, 0, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))String__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))String__GetHashCode;
    type->__fp_ToString = (::uString*(*)(::uObject*))String__ToString;

    return type;
}

void String___TypeInit(::uStatic* __this)
{
    String__Empty = ::uGetConstString("");
}

::uString* String__Concat(::uStatic* __this, ::uObject* a, ::uObject* b)
{
    return String__Concat_1(NULL, (a == NULL) ? (::uString*)NULL : ::app::Uno::Object::ToString(::uPtr< ::uObject*>(a)), (b == NULL) ? (::uString*)NULL : ::app::Uno::Object::ToString(::uPtr< ::uObject*>(b)));
}

::uString* String__Concat_1(::uStatic* __this, ::uString* a, ::uString* b)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)a, NULL) && ::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)b, NULL))
    {
        return String__Empty;
    }

    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)a, NULL))
    {
        return b;
    }

    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)b, NULL))
    {
        return a;
    }

    ::uArray* s = ::uNewArray(::app::Uno::Char__typeof(), ::uPtr< ::uString*>(a)->Length() + ::uPtr< ::uString*>(b)->Length());

    for (int i = 0; i < a->Length(); i++)
    {
        s->Item< ::uChar>(i) = a->Item(i);
    }

    for (int i = 0; i < b->Length(); i++)
    {
        s->Item< ::uChar>(a->Length() + i) = b->Item(i);
    }

    return ::uNewStringFromArray(s);
}

bool String__EndsWith(::uString* __this, ::uString* value)
{
    if (String__op_Equality(NULL, value, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("value")));
    }

    if (__this->Length() < ::uPtr< ::uString*>(value)->Length())
    {
        return false;
    }

    int index = __this->Length() - ::uPtr< ::uString*>(value)->Length();

    for (int i = 0; i < value->Length(); i++)
    {
        if (__this->Item(index++) != ::uPtr< ::uString*>(value)->Item(i))
        {
            return false;
        }
    }

    return true;
}

bool String__Equals(::uString* __this, ::uObject* other_)
{
    if (other_ != NULL &&
        __this->__obj_type == other_->__obj_type)
    {
        uString* str = (uString*)other_;
        return __this->_len == str->_len && !memcmp(__this->_ptr, str->_ptr, sizeof(uChar) * __this->_len);
    }
    
    return false;
}

bool String__Equals_2(::uStatic* __this, ::uString* left, ::uString* right)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)left, (::uObject*)right))
    {
        return true;
    }

    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)left, NULL) || ::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)right, NULL))
    {
        return false;
    }

    if (::uPtr< ::uString*>(left)->Length() != ::uPtr< ::uString*>(right)->Length())
    {
        return false;
    }

    for (int i = 0; i < ::uPtr< ::uString*>(left)->Length(); i++)
    {
        if (::uPtr< ::uString*>(left)->Item(i) != ::uPtr< ::uString*>(right)->Item(i))
        {
            return false;
        }
    }

    return true;
}

::uString* String__Format(::uStatic* __this, ::uString* str, ::uArray* objs)
{
    ::app::Uno::Text::StringBuilder* builder = ::app::Uno::Text::StringBuilder__New_1(NULL);
    ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken* tokens = ::app::Uno::Runtime::Implementation::Internal::FormatStringTokenizer__TokenizeFormatString(NULL, str);

    for (::app::Uno::Collections::List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken enum_123 = ::uPtr< ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken*>(tokens)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Uno::Runtime::Implementation::Internal::FormatStringToken* token = enum_123.Current();
        ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->Append_1(::uPtr< ::app::Uno::Runtime::Implementation::Internal::FormatStringToken*>(token)->ToString_1(objs));
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(builder)->ToString();
}

int String__GetHashCode(::uString* __this)
{
    return (int)Xli::DefaultTraits::Hash((const Xli::UInt8*)__this->_ptr, sizeof(uChar) * __this->_len);
}

int String__IndexOf(::uString* __this, ::uString* str, int startIndex)
{
    if (String__op_Equality(NULL, str, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("str")));
    }

    if (String__op_Equality(NULL, str, String__Empty))
    {
        return 0;
    }

    if (startIndex > __this->Length())
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_6(NULL, ::uGetConstString("startIndex")));
    }

    for (int hay = startIndex; hay < __this->Length(); hay++)
    {
        if (::uPtr< ::uString*>(str)->Length() > (__this->Length() - hay))
        {
            return -1;
        }

        if (String::MatchesAt(__this, str, hay))
        {
            return hay;
        }
    }

    return -1;
}

int String__IndexOf_1(::uString* __this, ::uChar c, int startIndex)
{
    if (startIndex > __this->Length())
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_6(NULL, ::uGetConstString("startIndex")));
    }

    for (int i = startIndex; i < __this->Length(); i++)
    {
        if (__this->Item(i) == c)
        {
            return i;
        }
    }

    return -1;
}

int String__IndexOfFirstNotInSet(::uString* __this, ::uArray* charSet)
{
    for (int i = 0; i < __this->Length(); i++)
    {
        if (!String::InSet(__this, __this->Item(i), charSet))
        {
            return i;
        }
    }

    return -1;
}

int String__IndexOfFirstNotWhiteSpace(::uString* __this)
{
    for (int i = 0; i < __this->Length(); i++)
    {
        if (!::app::Uno::Char__IsWhiteSpace(NULL, __this->Item(i)))
        {
            return i;
        }
    }

    return -1;
}

int String__IndexOfLastNotInSet(::uString* __this, ::uArray* charSet)
{
    for (int i = __this->Length() - 1; i >= 0; i--)
    {
        if (!String::InSet(__this, __this->Item(i), charSet))
        {
            return i;
        }
    }

    return -1;
}

int String__IndexOfLastNotWhiteSpace(::uString* __this)
{
    for (int i = __this->Length() - 1; i >= 0; i--)
    {
        if (!::app::Uno::Char__IsWhiteSpace(NULL, __this->Item(i)))
        {
            return i;
        }
    }

    return -1;
}

::uString* String__Insert(::uString* __this, int pos, ::uString* str)
{
    if (String__op_Equality(NULL, str, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("str")));
    }

    if ((pos < 0) || (pos > __this->Length()))
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_6(NULL, ::uGetConstString("pos")));
    }

    if (::uPtr< ::uString*>(str)->Length() == 0)
    {
        return __this;
    }

    if (__this->Length() == 0)
    {
        return str;
    }

    ::uArray* s = ::uNewArray(::app::Uno::Char__typeof(), __this->Length() + ::uPtr< ::uString*>(str)->Length());

    for (int i = 0; i < pos; i++)
    {
        s->Item< ::uChar>(i) = __this->Item(i);
    }

    for (int i = 0; i < str->Length(); i++)
    {
        s->Item< ::uChar>(i + pos) = str->Item(i);
    }

    for (int i = pos; i < __this->Length(); i++)
    {
        s->Item< ::uChar>(i + str->Length()) = __this->Item(i);
    }

    return ::uNewStringFromArray(s);
}

bool String__InSet(::uString* __this, ::uChar c, ::uArray* charSet)
{
    for (int i = 0; i < ::uPtr< ::uArray*>(charSet)->Length(); i++)
    {
        if (::uPtr< ::uArray*>(charSet)->Item< ::uChar>(i) == c)
        {
            return true;
        }
    }

    return false;
}

bool String__IsNullOrEmpty(::uStatic* __this, ::uString* s)
{
    return String__op_Equality(NULL, s, NULL) || String__op_Equality(NULL, s, String__Empty);
}

::uString* String__Join(::uStatic* __this, ::uString* separator, ::uArray* value)
{
    ::uString* result = ::uGetConstString("");

    for (int i = 0; i < ::uPtr< ::uArray*>(value)->Length(); i++)
    {
        if (i > 0)
        {
            result = String__op_Addition_1(NULL, result, separator);
        }

        result = String__op_Addition_1(NULL, result, ::uPtr< ::uArray*>(value)->Item< ::uString*>(i));
    }

    return result;
}

bool String__MatchesAt(::uString* __this, ::uString* str, int pos)
{
    for (int i = 0; i < ::uPtr< ::uString*>(str)->Length(); i++)
    {
        if (((pos + i) == __this->Length()) || (__this->Item(pos + i) != ::uPtr< ::uString*>(str)->Item(i)))
        {
            return false;
        }
    }

    return true;
}

::uString* String__op_Addition(::uStatic* __this, ::uString* a, ::uObject* b)
{
    return String__Concat(NULL, (::uObject*)a, b);
}

::uString* String__op_Addition_1(::uStatic* __this, ::uString* a, ::uString* b)
{
    return String__Concat_1(NULL, a, b);
}

::uString* String__op_Addition_2(::uStatic* __this, ::uObject* a, ::uString* b)
{
    return String__Concat(NULL, a, (::uObject*)b);
}

bool String__op_Equality(::uStatic* __this, ::uString* left, ::uString* right)
{
    return String__Equals_2(NULL, left, right);
}

bool String__op_Inequality(::uStatic* __this, ::uString* left, ::uString* right)
{
    return !String__Equals_2(NULL, left, right);
}

::uString* String__Replace_1(::uString* __this, ::uString* oldValue, ::uString* newValue)
{
    if (String__op_Equality(NULL, oldValue, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("oldValue")));
    }

    if (String__op_Equality(NULL, oldValue, String__Empty))
    {
        U_THROW(::app::Uno::ArgumentException__New_4(NULL, ::uGetConstString(""), ::uGetConstString("oldValue")));
    }

    int index = String::IndexOf(__this, oldValue, 0);

    if (index == -1)
    {
        return __this;
    }

    ::app::Uno::Text::StringBuilder* sb = ::app::Uno::Text::StringBuilder__New_1(NULL);
    int pos = 0;

    while (index != -1)
    {
        ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->Append(String::SubCharArray(__this, pos, index - pos));
        sb->Append_1(newValue);
        pos = index + ::uPtr< ::uString*>(oldValue)->Length();
        index = String::IndexOf(__this, oldValue, pos);
    }

    ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->Append(String::SubCharArray(__this, pos, __this->Length() - pos));
    return sb->ToString();
}

::uArray* String__Split(::uString* __this, ::uArray* splitChars)
{
    ::uArray* array_124;

    if ((splitChars == NULL) || (::uPtr< ::uArray*>(splitChars)->Length() == 0))
    {
        splitChars = (array_124 = ::uNewArray(::app::Uno::Char__typeof(), 4), ::uPtr< ::uArray*>(array_124)->Item< ::uChar>(0) = ' ', ::uPtr< ::uArray*>(array_124)->Item< ::uChar>(1) = 9, ::uPtr< ::uArray*>(array_124)->Item< ::uChar>(2) = 10, ::uPtr< ::uArray*>(array_124)->Item< ::uChar>(3) = 13, array_124);
    }

    int splitCount = 0;
    int charCount = 0;

    for (int i = 0; i < __this->Length(); i++)
    {
        for (int k = 0; k < ::uPtr< ::uArray*>(splitChars)->Length(); k++)
        {
            if (__this->Item(i) == ::uPtr< ::uArray*>(splitChars)->Item< ::uChar>(k))
            {
                splitCount++;
            }
        }
    }

    ::uArray* r = ::uNewArray(String__typeof(), splitCount + 1);
    ::uArray* ch = ::uNewArray(::uGetArrayType(::app::Uno::Char__typeof()), splitCount + 1);
    splitCount = 0;
    int start = 0;

    for (int i = 0; i < __this->Length(); i++)
    {
        bool found = false;

        for (int k = 0; k < ::uPtr< ::uArray*>(splitChars)->Length(); k++)
        {
            if (__this->Item(i) == ::uPtr< ::uArray*>(splitChars)->Item< ::uChar>(k))
            {
                ::uPtr< ::uArray*>(ch)->ItemStrong< ::uArray*>(splitCount) = ::uNewArray(::app::Uno::Char__typeof(), charCount);

                for (int n = 0; n < charCount; n++)
                {
                    ::uPtr< ::uArray*>(ch->Item< ::uArray*>(splitCount))->Item< ::uChar>(n) = __this->Item(start + n);
                }

                start = i + 1;
                splitCount++;
                charCount = 0;
                found = true;
                break;
            }
        }

        if (!found)
        {
            charCount++;
        }
    }

    ch->ItemStrong< ::uArray*>(splitCount) = ::uNewArray(::app::Uno::Char__typeof(), charCount);

    for (int n = 0; n < charCount; n++)
    {
        ::uPtr< ::uArray*>(ch->Item< ::uArray*>(splitCount))->Item< ::uChar>(n) = __this->Item(start + n);
    }

    for (int i = 0; i < ch->Length(); i++)
    {
        r->ItemStrong< ::uString*>(i) = ::uNewStringFromArray(ch->Item< ::uArray*>(i));
    }

    return r;
}

bool String__StartsWith(::uString* __this, ::uString* value)
{
    if (String__op_Equality(NULL, value, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("value")));
    }

    if (__this->Length() < ::uPtr< ::uString*>(value)->Length())
    {
        return false;
    }

    for (int i = 0; i < ::uPtr< ::uString*>(value)->Length(); i++)
    {
        if (__this->Item(i) != ::uPtr< ::uString*>(value)->Item(i))
        {
            return false;
        }
    }

    return true;
}

::uArray* String__SubCharArray(::uString* __this, int start, int len)
{
    ::uArray* chars = ::uNewArray(::app::Uno::Char__typeof(), len);

    for (int i = 0; i < len; i++)
    {
        ::uPtr< ::uArray*>(chars)->Item< ::uChar>(i) = __this->Item(start + i);
    }

    return chars;
}

::uString* String__Substring(::uString* __this, int start, int len)
{
    if ((start == __this->Length()) && (len == 0))
    {
        return String__Empty;
    }

    ::uArray* s = ::uNewArray(::app::Uno::Char__typeof(), len);

    for (int i = 0; i < len; i++)
    {
        s->Item< ::uChar>(i) = __this->Item(start + i);
    }

    return ::uNewStringFromArray(s);
}

::uString* String__Substring_1(::uString* __this, int start)
{
    return String::Substring(__this, start, __this->Length() - start);
}

::uArray* String__ToCharArray(::uString* __this)
{
    return String::ToCharArray_1(__this, 0, __this->Length());
}

::uArray* String__ToCharArray_1(::uString* __this, int start, int length)
{
    ::uArray* result = ::uNewArray(::app::Uno::Char__typeof(), length);

    for (int i = 0; i < length; i++)
    {
        result->Item< ::uChar>(i) = __this->Item(start + i);
    }

    return result;
}

::uString* String__ToLower(::uString* __this)
{
    ::uArray* chars = ::uNewArray(::app::Uno::Char__typeof(), __this->Length());

    for (int i = 0; i < __this->Length(); i++)
    {
        ::uPtr< ::uArray*>(chars)->Item< ::uChar>(i) = ::app::Uno::Char__ToLower(NULL, __this->Item(i));
    }

    return ::uNewStringFromArray(chars);
}

::uString* String__ToString(::uString* __this)
{
    return __this;
}

::uString* String__ToUpper(::uString* __this)
{
    ::uArray* chars = ::uNewArray(::app::Uno::Char__typeof(), __this->Length());

    for (int i = 0; i < __this->Length(); i++)
    {
        ::uPtr< ::uArray*>(chars)->Item< ::uChar>(i) = ::app::Uno::Char__ToUpper(NULL, __this->Item(i));
    }

    return ::uNewStringFromArray(chars);
}

::uString* String__Trim(::uString* __this)
{
    if (String__op_Equality(NULL, __this, String__Empty))
    {
        return String__Empty;
    }

    int first = String::IndexOfFirstNotWhiteSpace(__this);

    if (first == -1)
    {
        return String__Empty;
    }

    int last = String::IndexOfLastNotWhiteSpace(__this);
    int length = (last - first) + 1;
    return String::Substring(__this, first, length);
}

::uString* String__Trim_1(::uString* __this, ::uArray* trimChars)
{
    if (String__op_Equality(NULL, __this, String__Empty))
    {
        return String__Empty;
    }

    int first = String::IndexOfFirstNotInSet(__this, trimChars);

    if (first == -1)
    {
        return String__Empty;
    }

    int last = String::IndexOfLastNotInSet(__this, trimChars);
    int length = (last - first) + 1;
    return String::Substring(__this, first, length);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uString* Type__ToString(::uType* __this)
{
    return uNewStringUtf8(__this->TypeName);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UInt__uType* UInt__typeof()
{
    static ::uStaticStrong<UInt__uType*> type;
    if (type != NULL) return type;

    type = (UInt__uType*)::uAllocStructType(sizeof(UInt__uType), "Uno.UInt", sizeof(::uUInt), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))UInt__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))UInt__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))UInt__ToString;

    return type;
}

bool UInt__Equals(::uUInt* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox< ::uUInt>(UInt__typeof(), *__this), o);
}

int UInt__GetHashCode(::uUInt* __this)
{
    return (int)*__this;
}

::uString* UInt__ToString(::uUInt* __this)
{
    Xli::String ansi = Xli::DefaultTraits::ToString(*__this);
    return uNewStringAnsi(ansi.Ptr(), ansi.Length());
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ULong__uType* ULong__typeof()
{
    static ::uStaticStrong<ULong__uType*> type;
    if (type != NULL) return type;

    type = (ULong__uType*)::uAllocStructType(sizeof(ULong__uType), "Uno.ULong", sizeof(::uULong), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))ULong__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))ULong__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))ULong__ToString;

    return type;
}

bool ULong__Equals(::uULong* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox< ::uULong>(ULong__typeof(), *__this), o);
}

int ULong__GetHashCode(::uULong* __this)
{
    return (int)Xli::DefaultTraits::Hash(*__this);
}

::uString* ULong__ToString(::uULong* __this)
{
    Xli::String ansi = Xli::DefaultTraits::ToString(*__this);
    return uNewStringAnsi(ansi.Ptr(), ansi.Length());
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UShort__uType* UShort__typeof()
{
    static ::uStaticStrong<UShort__uType*> type;
    if (type != NULL) return type;

    type = (UShort__uType*)::uAllocStructType(sizeof(UShort__uType), "Uno.UShort", sizeof(::uUShort), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))UShort__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))UShort__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))UShort__ToString;

    return type;
}

bool UShort__Equals(::uUShort* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox< ::uUShort>(UShort__typeof(), *__this), o);
}

int UShort__GetHashCode(::uUShort* __this)
{
    return (int)*__this;
}

::uString* UShort__ToString(::uUShort* __this)
{
    Xli::String ansi((int)*__this);
    return uNewStringAnsi(ansi.Ptr(), ansi.Length());
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UShort2__uType* UShort2__typeof()
{
    static ::uStaticStrong<UShort2__uType*> type;
    if (type != NULL) return type;

    type = (UShort2__uType*)::uAllocStructType(sizeof(UShort2__uType), "Uno.UShort2", sizeof(UShort2), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))UShort2__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))UShort2__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))UShort2__ToString;

    return type;
}

bool UShort2__Equals(UShort2* __this, ::uObject* o)
{
    return ::app::Uno::Object__Equals(::uBox(UShort2__typeof(), *__this), o);
}

int UShort2__GetHashCode(UShort2* __this)
{
    return ::app::Uno::Object__GetHashCode(::uBox(UShort2__typeof(), *__this));
}

::uString* UShort2__ToString(UShort2* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::UShort::ToString(__this->X), ::uGetConstString(", ")), ::app::Uno::UShort::ToString(__this->Y));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Vector__uType* Vector__typeof()
{
    static ::uStaticStrong<Vector__uType*> type;
    if (type != NULL) return type;

    type = (Vector__uType*)::uAllocClassType(sizeof(Vector__uType), "Uno.Vector");

    return type;
}

float Vector__Distance_2(::uStatic* __this, ::app::Uno::Float2 p0, ::app::Uno::Float2 p1)
{
    return Vector__Length_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, p1, p0));
}

float Vector__Dot_2(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b)
{
    return (a.X * b.X) + (a.Y * b.Y);
}

float Vector__Length(::uStatic* __this, ::app::Uno::Float4 v)
{
    return ::app::Uno::Math__Sqrt_1(NULL, Vector__LengthSquared_1(NULL, v));
}

float Vector__Length_1(::uStatic* __this, ::app::Uno::Float3 v)
{
    return ::app::Uno::Math__Sqrt_1(NULL, Vector__LengthSquared_2(NULL, v));
}

float Vector__Length_2(::uStatic* __this, ::app::Uno::Float2 v)
{
    return ::app::Uno::Math__Sqrt_1(NULL, Vector__LengthSquared(NULL, v));
}

float Vector__LengthSquared(::uStatic* __this, ::app::Uno::Float2 v)
{
    return (v.X * v.X) + (v.Y * v.Y);
}

float Vector__LengthSquared_1(::uStatic* __this, ::app::Uno::Float4 v)
{
    return (((v.X * v.X) + (v.Y * v.Y)) + (v.Z * v.Z)) + (v.W * v.W);
}

float Vector__LengthSquared_2(::uStatic* __this, ::app::Uno::Float3 v)
{
    return ((v.X * v.X) + (v.Y * v.Y)) + (v.Z * v.Z);
}

::app::Uno::Float2 Vector__Normalize(::uStatic* __this, ::app::Uno::Float2 v)
{
    return ::app::Uno::Float2__op_Division_1(NULL, v, Vector__Length_2(NULL, v));
}

::app::Uno::Float3 Vector__Normalize_1(::uStatic* __this, ::app::Uno::Float3 v)
{
    return ::app::Uno::Float3__op_Division(NULL, v, Vector__Length_1(NULL, v));
}

::app::Uno::Float4 Vector__Normalize_2(::uStatic* __this, ::app::Uno::Float4 v)
{
    return ::app::Uno::Float4__op_Division_2(NULL, v, Vector__Length(NULL, v));
}

::app::Uno::Float4 Vector__Transform_1(::uStatic* __this, ::app::Uno::Float3 vector, ::app::Uno::Float4x4 matrix)
{
    return ::app::Uno::Float4__New_2(NULL, (((vector.X * matrix.M11) + (vector.Y * matrix.M21)) + (vector.Z * matrix.M31)) + matrix.M41, (((vector.X * matrix.M12) + (vector.Y * matrix.M22)) + (vector.Z * matrix.M32)) + matrix.M42, (((vector.X * matrix.M13) + (vector.Y * matrix.M23)) + (vector.Z * matrix.M33)) + matrix.M43, (((vector.X * matrix.M14) + (vector.Y * matrix.M24)) + (vector.Z * matrix.M34)) + matrix.M44);
}

::app::Uno::Float4 Vector__Transform_2(::uStatic* __this, ::app::Uno::Float2 vector, ::app::Uno::Float4x4 matrix)
{
    return ::app::Uno::Float4__New_2(NULL, ((vector.X * matrix.M11) + (vector.Y * matrix.M21)) + matrix.M41, ((vector.X * matrix.M12) + (vector.Y * matrix.M22)) + matrix.M42, ((vector.X * matrix.M13) + (vector.Y * matrix.M23)) + matrix.M43, ((vector.X * matrix.M14) + (vector.Y * matrix.M24)) + matrix.M44);
}

::app::Uno::Float4 Vector__Transform_3(::uStatic* __this, ::app::Uno::Float4 vector, ::app::Uno::Float4x4 matrix)
{
    return ::app::Uno::Float4__New_2(NULL, (((vector.X * matrix.M11) + (vector.Y * matrix.M21)) + (vector.Z * matrix.M31)) + (vector.W * matrix.M41), (((vector.X * matrix.M12) + (vector.Y * matrix.M22)) + (vector.Z * matrix.M32)) + (vector.W * matrix.M42), (((vector.X * matrix.M13) + (vector.Y * matrix.M23)) + (vector.Z * matrix.M33)) + (vector.W * matrix.M43), (((vector.X * matrix.M14) + (vector.Y * matrix.M24)) + (vector.Z * matrix.M34)) + (vector.W * matrix.M44));
}

::app::Uno::Float2 Vector__Transform_4(::uStatic* __this, ::app::Uno::Float2 vector, ::app::Uno::Float2x2 matrix)
{
    return ::app::Uno::Float2__New_2(NULL, (vector.X * matrix.M11) + (vector.Y * matrix.M21), (vector.X * matrix.M12) + (vector.Y * matrix.M22));
}

::app::Uno::Float2 Vector__TransformCoordinate(::uStatic* __this, ::app::Uno::Float2 vector, ::app::Uno::Float4x4 matrix)
{
    ::app::Uno::Float4 tmp = Vector__Transform_2(NULL, vector, matrix);
    return ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, tmp.X, tmp.Y), tmp.W);
}

::app::Uno::Float3 Vector__TransformCoordinate_1(::uStatic* __this, ::app::Uno::Float3 vector, ::app::Uno::Float4x4 matrix)
{
    ::app::Uno::Float4 tmp = Vector__Transform_1(NULL, vector, matrix);
    return ::app::Uno::Float3__op_Division(NULL, ::app::Uno::Float3__New_2(NULL, tmp.X, tmp.Y, tmp.Z), tmp.W);
}

::app::Uno::Float3 Vector__TransformNormal(::uStatic* __this, ::app::Uno::Float3 vector, ::app::Uno::Float4x4 matrix)
{
    return ::app::Uno::Float3__New_2(NULL, ((vector.X * matrix.M11) + (vector.Y * matrix.M21)) + (vector.Z * matrix.M31), ((vector.X * matrix.M12) + (vector.Y * matrix.M22)) + (vector.Z * matrix.M32), ((vector.X * matrix.M13) + (vector.Y * matrix.M23)) + (vector.Z * matrix.M33));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WeakReferenceAttribute__uType* WeakReferenceAttribute__typeof()
{
    static ::uStaticStrong<WeakReferenceAttribute__uType*> type;
    if (type != NULL) return type;

    type = (WeakReferenceAttribute__uType*)::uAllocClassType(sizeof(WeakReferenceAttribute__uType), "Uno.WeakReferenceAttribute", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Attribute__typeof());

    return type;
}

void WeakReferenceAttribute___ObjInit_1(WeakReferenceAttribute* __this)
{
    ::app::Uno::Attribute___ObjInit(__this);
}

WeakReferenceAttribute* WeakReferenceAttribute__New_1(::uStatic* __this)
{
    WeakReferenceAttribute* inst = (WeakReferenceAttribute*)::uAllocObject(sizeof(WeakReferenceAttribute), WeakReferenceAttribute__typeof());
    inst->_ObjInit_1();
    return inst;
}

}}
