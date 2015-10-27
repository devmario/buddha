#include <app/Fuse.Animations.AnimationVariant.h>
#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Move.h>
#include <app/Fuse.Animations.TrackAnimator.h>
#include <app/Fuse.Animations.TransformAnimator__Fuse_Translation.h>
#include <app/Fuse.AppBase.h>
#include <app/Fuse.BeginRemoveArgs.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.BackButton.h>
#include <app/Fuse.Controls.BeginRemoveArgsImpl.h>
#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.Controls.Circle.h>
#include <app/Fuse.Controls.ContentControl.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.DefaultSwitchBehavior.h>
#include <app/Fuse.Controls.DockPanel.h>
#include <app/Fuse.Controls.Ellipse.h>
#include <app/Fuse.Controls.FillRule.h>
#include <app/Fuse.Controls.FitMode.h>
#include <app/Fuse.Controls.GraphicsView.h>
#include <app/Fuse.Controls.Grid.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Controls.IWebView.h>
#include <app/Fuse.Controls.MapView.h>
#include <app/Fuse.Controls.MultiLayout.h>
#include <app/Fuse.Controls.NativeViewHost.h>
#include <app/Fuse.Controls.NavigationBar.h>
#include <app/Fuse.Controls.Number.h>
#include <app/Fuse.Controls.Page.h>
#include <app/Fuse.Controls.PageControl_Template.h>
#include <app/Fuse.Controls.PageIndicator.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.Controls.Path.h>
#include <app/Fuse.Controls.PathScaleMode.h>
#include <app/Fuse.Controls.Placeholder.h>
#include <app/Fuse.Controls.PlainTextEdit.h>
#include <app/Fuse.Controls.RangeControl.h>
#include <app/Fuse.Controls.Rectangle.h>
#include <app/Fuse.Controls.RegularPolygon.h>
#include <app/Fuse.Controls.ScrollPropertyChangedArgs.h>
#include <app/Fuse.Controls.ScrollPropertyChangedHandler.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.Controls.Shape.h>
#include <app/Fuse.Controls.Slider.h>
#include <app/Fuse.Controls.StackPanel.h>
#include <app/Fuse.Controls.Star.h>
#include <app/Fuse.Controls.Switch.h>
#include <app/Fuse.Controls.Text.h>
#include <app/Fuse.Controls.TextBlock.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Controls.TextInput.h>
#include <app/Fuse.Controls.Toggle.h>
#include <app/Fuse.Controls.ToggleControl.h>
#include <app/Fuse.Controls.WebView.h>
#include <app/Fuse.Diagnostics.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.ResampleMode.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.ElementBatcher.h>
#include <app/Fuse.Elements.HitTestMode.h>
#include <app/Fuse.Elements.SizeUnit.h>
#include <app/Fuse.Elements.StretchDirection.h>
#include <app/Fuse.Elements.StretchMode.h>
#include <app/Fuse.Elements.StretchSizing.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Fonts.h>
#include <app/Fuse.FrustumViewport.h>
#include <app/Fuse.Gestures.Clicker.h>
#include <app/Fuse.Gestures.ClickerEventHandler.h>
#include <app/Fuse.Gestures.ScrollDirections.h>
#include <app/Fuse.Gestures.Scroller.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.IFrustum.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.FocusDelegator.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Fuse.Input.PointerMovedArgs.h>
#include <app/Fuse.Input.PointerMovedHandler.h>
#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Input.PointerPressedHandler.h>
#include <app/Fuse.Input.PointerReleasedArgs.h>
#include <app/Fuse.Input.PointerReleasedHandler.h>
#include <app/Fuse.Internal.Drawing.SolidRectangle.h>
#include <app/Fuse.Internal.IImageContainerOwner.h>
#include <app/Fuse.Internal.ImageContainer.h>
#include <app/Fuse.Internal.SizingContainer.h>
#include <app/Fuse.InvalidateLayoutReason.h>
#include <app/Fuse.ITranslationMode.h>
#include <app/Fuse.LayoutDependent.h>
#include <app/Fuse.Layouts.Dock.h>
#include <app/Fuse.Layouts.DockLayout.h>
#include <app/Fuse.Layouts.GridLayout.h>
#include <app/Fuse.Layouts.Layer.h>
#include <app/Fuse.Layouts.Layout.h>
#include <app/Fuse.Layouts.LayoutRole.h>
#include <app/Fuse.Layouts.Layouts.h>
#include <app/Fuse.Layouts.Orientation.h>
#include <app/Fuse.Layouts.StackLayout.h>
#include <app/Fuse.Navigation.EnteringAnimation.h>
#include <app/Fuse.Navigation.ExitingAnimation.h>
#include <app/Fuse.Navigation.INavigation.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <app/Fuse.Navigation.NavigationArgs.h>
#include <app/Fuse.Navigation.NavigationMode.h>
#include <app/Fuse.Navigation.NavigationPageCountHandler.h>
#include <app/Fuse.Navigation.NavigationPageProgressHandler.h>
#include <app/Fuse.Navigation.NavigationPageProperty.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeBounds.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_Poin-b0dbd2da.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_Po-bf1c51b8.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_P-40044f7c.h>
#include <app/Fuse.OrthographicFrustum.h>
#include <app/Fuse.PlacedArgs.h>
#include <app/Fuse.PlacedHandler.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Resources.MemoryPolicy.h>
#include <app/Fuse.RootViewport.h>
#include <app/Fuse.Scripting.BoolChangedArgs.h>
#include <app/Fuse.Scripting.DoubleChangedArgs.h>
#include <app/Fuse.Scripting.StringChangedArgs.h>
#include <app/Fuse.SizeFlags.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Button__string.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_GraphicsView__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Grid__float.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Number__float.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Number__string.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Panel__Fuse_Node.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_RangeControl__double.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Rectangle__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_Scr-d9df836e.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Shape__float.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_StackPanel__float.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__float.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_Te-97c0c9ff.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_Te-caeb9d00.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__Fuse_Font.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__string.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextInput__bool.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextInput__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_ToggleControl__bool.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__float.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment.h>
#include <app/Fuse.StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_-710aaa9c.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.Translation.h>
#include <app/Fuse.TranslationModes.h>
#include <app/Fuse.Triggers.IValue__bool.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Fuse.UpdateStage.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Fuse_Controls_Button.h>
#include <app/Uno.Action__Fuse_Controls_Button__string.h>
#include <app/Uno.Action__Fuse_Controls_Control.h>
#include <app/Uno.Action__Fuse_Controls_Control__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Controls_GraphicsView.h>
#include <app/Uno.Action__Fuse_Controls_Grid.h>
#include <app/Uno.Action__Fuse_Controls_Image.h>
#include <app/Uno.Action__Fuse_Controls_Image__Fuse_Elements_Alignment.h>
#include <app/Uno.Action__Fuse_Controls_Image__Fuse_Elements_StretchDirection.h>
#include <app/Uno.Action__Fuse_Controls_Image__Fuse_Elements_StretchMode.h>
#include <app/Uno.Action__Fuse_Controls_Image__Fuse_Elements_StretchSizing.h>
#include <app/Uno.Action__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy.h>
#include <app/Uno.Action__Fuse_Controls_Number.h>
#include <app/Uno.Action__Fuse_Controls_PageIndicator.h>
#include <app/Uno.Action__Fuse_Controls_Panel.h>
#include <app/Uno.Action__Fuse_Controls_Panel__Fuse_Layouts_Layout.h>
#include <app/Uno.Action__Fuse_Controls_Panel__Fuse_Node.h>
#include <app/Uno.Action__Fuse_Controls_PlainTextEdit.h>
#include <app/Uno.Action__Fuse_Controls_RangeControl.h>
#include <app/Uno.Action__Fuse_Controls_RangeControl__double.h>
#include <app/Uno.Action__Fuse_Controls_Rectangle.h>
#include <app/Uno.Action__Fuse_Controls_ScrollView.h>
#include <app/Uno.Action__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections.h>
#include <app/Uno.Action__Fuse_Controls_Shape.h>
#include <app/Uno.Action__Fuse_Controls_Shape__float.h>
#include <app/Uno.Action__Fuse_Controls_Shape__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Controls_Shape__Fuse_Drawing_Stroke.h>
#include <app/Uno.Action__Fuse_Controls_StackPanel.h>
#include <app/Uno.Action__Fuse_Controls_TextControl.h>
#include <app/Uno.Action__Fuse_Controls_TextControl__string.h>
#include <app/Uno.Action__Fuse_Controls_TextInput.h>
#include <app/Uno.Action__Fuse_Controls_ToggleControl.h>
#include <app/Uno.Action__Fuse_Controls_ToggleControl__bool.h>
#include <app/Uno.Action__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Drawing_Stroke.h>
#include <app/Uno.Action__Fuse_Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.ICollection__Fuse_Node.h>
#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IList__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.List__Fuse_Node.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Node.h>
#include <app/Uno.Collections.ObservableList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ObservableList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.ObservableList__Fuse_Node.h>
#include <app/Uno.Comparison__Fuse_Node.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__Fuse_Node.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Func__Fuse_Controls_Button__string.h>
#include <app/Uno.Func__Fuse_Controls_Control__Fuse_Drawing_Brush.h>
#include <app/Uno.Func__Fuse_Controls_Image__Fuse_Elements_Alignment.h>
#include <app/Uno.Func__Fuse_Controls_Image__Fuse_Elements_StretchDirection.h>
#include <app/Uno.Func__Fuse_Controls_Image__Fuse_Elements_StretchMode.h>
#include <app/Uno.Func__Fuse_Controls_Image__Fuse_Elements_StretchSizing.h>
#include <app/Uno.Func__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy.h>
#include <app/Uno.Func__Fuse_Controls_Panel__Fuse_Layouts_Layout.h>
#include <app/Uno.Func__Fuse_Controls_Panel__Fuse_Node.h>
#include <app/Uno.Func__Fuse_Controls_RangeControl__double.h>
#include <app/Uno.Func__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections.h>
#include <app/Uno.Func__Fuse_Controls_Shape__float.h>
#include <app/Uno.Func__Fuse_Controls_Shape__Fuse_Drawing_Brush.h>
#include <app/Uno.Func__Fuse_Controls_Shape__Fuse_Drawing_Stroke.h>
#include <app/Uno.Func__Fuse_Controls_TextControl__string.h>
#include <app/Uno.Func__Fuse_Controls_ToggleControl__bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.TextInputHint.h>
#include <app/Uno.Rect.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.IFactory.h>
#include <app/Uno.UX.ValueChangedArgs__bool.h>
#include <app/Uno.UX.ValueChangedArgs__double.h>
#include <app/Uno.UX.ValueChangedArgs__float.h>
#include <app/Uno.UX.ValueChangedArgs__string.h>
#include <app/Uno.UX.ValueChangedHandler__bool.h>
#include <app/Uno.UX.ValueChangedHandler__double.h>
#include <app/Uno.UX.ValueChangedHandler__float.h>
#include <app/Uno.UX.ValueChangedHandler__string.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Controls {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/.cache/GeneratedCode/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BackButton__uType* BackButton__typeof()
{
    static ::uStaticStrong<BackButton__uType*> type;
    if (type != NULL) return type;

    type = (BackButton__uType*)::uAllocClassType(sizeof(BackButton__uType), "Fuse.Controls.BackButton", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Button__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(BackButton__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(BackButton__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(BackButton__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(BackButton__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(BackButton__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(BackButton__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(BackButton__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(BackButton__uType, __interface_7));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BeginRemoveArgsImpl__uType* BeginRemoveArgsImpl__typeof()
{
    static ::uStaticStrong<BeginRemoveArgsImpl__uType*> type;
    if (type != NULL) return type;

    type = (BeginRemoveArgsImpl__uType*)::uAllocClassType(sizeof(BeginRemoveArgsImpl__uType), "Fuse.Controls.BeginRemoveArgsImpl", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::BeginRemoveArgs__typeof());

    type->SetStrongRefs(
        "_Child", offsetof(BeginRemoveArgsImpl, _Child),
        "_Parent", offsetof(BeginRemoveArgsImpl, _Parent));

    return type;
}

void BeginRemoveArgsImpl___ObjInit_2(BeginRemoveArgsImpl* __this, ::app::Fuse::Node* child, ::app::Fuse::Controls::Panel* parent)
{
    ::app::Fuse::BeginRemoveArgs___ObjInit_1(__this);
    __this->Parent(parent);
    __this->Child(child);
}

::app::Fuse::Node* BeginRemoveArgsImpl__get_Child(BeginRemoveArgsImpl* __this)
{
    return __this->_Child;
}

::app::Fuse::Controls::Panel* BeginRemoveArgsImpl__get_Parent(BeginRemoveArgsImpl* __this)
{
    return __this->_Parent;
}

BeginRemoveArgsImpl* BeginRemoveArgsImpl__New_2(::uStatic* __this, ::app::Fuse::Node* child, ::app::Fuse::Controls::Panel* parent)
{
    BeginRemoveArgsImpl* inst = (BeginRemoveArgsImpl*)::uAllocObject(sizeof(BeginRemoveArgsImpl), BeginRemoveArgsImpl__typeof());
    inst->_ObjInit_2(child, parent);
    return inst;
}

void BeginRemoveArgsImpl__set_Child(BeginRemoveArgsImpl* __this, ::app::Fuse::Node* value)
{
    __this->_Child = value;
}

void BeginRemoveArgsImpl__set_Parent(BeginRemoveArgsImpl* __this, ::app::Fuse::Controls::Panel* value)
{
    __this->_Parent = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Button__string*> Button__TextProperty;

Button__uType* Button__typeof()
{
    static ::uStaticStrong<Button__uType*> type;
    if (type != NULL) return type;

    type = (Button__uType*)::uAllocClassType(sizeof(Button__uType), "Fuse.Controls.Button", false, 8, 2, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Button__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Button__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Button__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Button__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Button__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Button__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Button__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Button__uType, __interface_7));

    type->SetStrongRefs(
        "_text", offsetof(Button, _text),
        "TextChanged", offsetof(Button, TextChanged));

    return type;
}

void Button___TypeInit_4(::uStatic* __this)
{
    Button__TextProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Button__string__New_2(NULL, ::uGetConstString(""), NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Button__string__typeof(), (const void*)Button__SetText_1), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Button__string__typeof(), (const void*)Button__GetText));
}

void Button__add_TextChanged(Button* __this, ::uDelegate* value)
{
    __this->TextChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TextChanged, (::uDelegate*)value), ::app::Uno::UX::ValueChangedHandler__string__typeof());
}

::uString* Button__get_Text(Button* __this)
{
    return Button__GetText(NULL, __this);
}

::uString* Button__GetText(::uStatic* __this, Button* b)
{
    return ::uPtr< Button*>(b)->_text;
}

void Button__OnTextChanged(Button* __this, ::uString* value, ::uString* orig)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TextChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->TextChanged)->InvokeVoid< ::uObject*, ::app::Uno::UX::ValueChangedArgs__string*>((::uObject*)__this, ::app::Uno::UX::ValueChangedArgs__string__New_2(NULL, value, (::uObject*)orig));
    }
}

void Button__remove_TextChanged(Button* __this, ::uDelegate* value)
{
    __this->TextChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->TextChanged, (::uDelegate*)value), ::app::Uno::UX::ValueChangedHandler__string__typeof());
}

void Button__set_Text(Button* __this, ::uString* value)
{
    Button__SetText_1(NULL, __this, value);
}

void Button__SetText(Button* __this, ::uString* value, ::uObject* origin)
{
    __this->Text(value);
}

void Button__SetText_1(::uStatic* __this, Button* b, ::uString* value)
{
    if (::app::Uno::String__op_Inequality(NULL, ::uPtr< Button*>(b)->_text, value))
    {
        ::uString* s = ::uPtr< Button*>(b)->_text;
        b->_text = value;
        b->OnTextChanged(value, s);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Circle__uType* Circle__typeof()
{
    static ::uStaticStrong<Circle__uType*> type;
    if (type != NULL) return type;

    type = (Circle__uType*)::uAllocClassType(sizeof(Circle__uType), "Fuse.Controls.Circle", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Shape__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Circle__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Circle__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Circle__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Circle__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Circle__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Circle__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Circle__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Circle__uType, __interface_7));

    return type;
}

void Circle___ObjInit_5(Circle* __this)
{
    ::app::Fuse::Controls::Shape___ObjInit_4(__this);
}

bool Circle__AngleInRange(::uStatic* __this, float angle, float start, float end)
{
    angle = ::app::Uno::Math__Mod_4(NULL, angle, 6.28318548f);
    float pStartAngle = ::app::Uno::Math__Mod_4(NULL, start, 6.28318548f);
    float pEndAngle = ::app::Uno::Math__Mod_4(NULL, end, 6.28318548f);

    if (pStartAngle > pEndAngle)
    {
        return (angle > pStartAngle) || (angle < pEndAngle);
    }
    else
    {
        return (angle > pStartAngle) && (angle < pEndAngle);
    }
}

::app::Uno::Float2 Circle__get_Center(Circle* __this)
{
    return ::app::Uno::Float2__op_Division_1(NULL, __this->ActualSize(), 2.0f);
}

float Circle__get_EffectiveEndAngle(Circle* __this)
{
    return __this->_hasLengthAngle ? (__this->_startAngle + __this->_lengthAngle) : __this->_endAngle;
}

float Circle__get_EffectiveEndAngleDegrees(Circle* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_3(NULL, __this->EffectiveEndAngle());
}

float Circle__get_Radius(Circle* __this)
{
    return ::app::Uno::Math__Min_11(NULL, __this->ActualSize().X, __this->ActualSize().Y) * 0.5f;
}

float Circle__get_StartAngle(Circle* __this)
{
    return __this->_startAngle;
}

float Circle__get_StartAngleDegrees(Circle* __this)
{
    return ::app::Uno::Math__RadiansToDegrees_3(NULL, __this->_startAngle);
}

bool Circle__get_UseAngle(Circle* __this)
{
    if (!__this->_hasAngle)
    {
        return false;
    }

    if (__this->_hasLengthAngle && (__this->_lengthAngle >= 6.28318548f))
    {
        return false;
    }

    return true;
}

Circle* Circle__New_2(::uStatic* __this)
{
    Circle* inst = (Circle*)::uAllocObject(sizeof(Circle), Circle__typeof());
    inst->_ObjInit_5();
    return inst;
}

void Circle__set_StartAngle(Circle* __this, float value)
{
    __this->_startAngle = value;
    __this->_hasAngle = true;
    __this->OnShapeChanged();
}

void Circle__set_StartAngleDegrees(Circle* __this, float value)
{
    __this->StartAngle(::app::Uno::Math__DegreesToRadians_1(NULL, value));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContentControl__uType* ContentControl__typeof()
{
    static ::uStaticStrong<ContentControl__uType*> type;
    if (type != NULL) return type;

    type = (ContentControl__uType*)::uAllocClassType(sizeof(ContentControl__uType), "Fuse.Controls.ContentControl", false, 6, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Control__typeof());
    type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2))ContentControl__ArrangePaddingBox;
    type->__fp_CalcRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Elements::Element*))ContentControl__CalcRenderBounds;
    type->__fp_get_SubNodeCount = (int(*)(::app::Fuse::Node*))ContentControl__get_SubNodeCount;
    type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))ContentControl__GetContentSize;
    type->__fp_GetSubNode = (::app::Fuse::Node*(*)(::app::Fuse::Node*, int))ContentControl__GetSubNode;
    type->__fp_OnContentChanged = ContentControl__OnContentChanged;
    type->__fp_OnDrawControl = (void(*)(::app::Fuse::Controls::Control*, ::app::Fuse::DrawContext*))ContentControl__OnDrawControl;
    type->__fp_OnHitTestChildren = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::HitTestContext*))ContentControl__OnHitTestChildren;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ContentControl__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(ContentControl__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(ContentControl__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(ContentControl__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(ContentControl__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(ContentControl__uType, __interface_5));

    type->SetStrongRefs(
        "_content", offsetof(ContentControl, _content));

    return type;
}

void ContentControl___ObjInit_3(ContentControl* __this)
{
    ::app::Fuse::Controls::Control___ObjInit_2(__this);
}

void ContentControl__ArrangePaddingBox(ContentControl* __this, ::app::Uno::Float2 size)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();

    if (__this->Content() != NULL)
    {
        ::uPtr< ::app::Fuse::Node*>(__this->Content())->ArrangeMarginBox((ind_123 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y)), ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, size, (ind_124 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_124.X, ind_124.Y))), (ind_125 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_125.Z, ind_125.W))), 3);
    }
}

::app::Uno::Rect ContentControl__CalcRenderBounds(ContentControl* __this)
{
    ::app::Uno::Rect baseRect = ::app::Fuse::Elements::Element__CalcRenderBounds(__this);

    if (__this->Content() != NULL)
    {
        baseRect = ::app::Uno::Rect__Union(NULL, baseRect, ::uPtr< ::app::Fuse::Node*>(__this->Content())->CalcRenderBoundsInParentSpace());
    }

    return baseRect;
}

::app::Fuse::Node* ContentControl__get_Content(ContentControl* __this)
{
    return __this->_content;
}

int ContentControl__get_SubNodeCount(ContentControl* __this)
{
    return ::app::Fuse::Node__get_SubNodeCount(__this) + ((__this->Content() == NULL) ? 0 : 1);
}

::app::Uno::Float2 ContentControl__GetContentSize(ContentControl* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    if (__this->Content() != NULL)
    {
        return ::uPtr< ::app::Fuse::Node*>(__this->Content())->GetMarginSize(fillSize, fillSet);
    }

    return ::app::Fuse::Elements::Element__GetContentSize(__this, fillSize, fillSet);
}

::app::Fuse::Node* ContentControl__GetSubNode(ContentControl* __this, int index)
{
    int b = ::app::Fuse::Node__get_SubNodeCount(__this);

    if (index >= b)
    {
        return __this->Content();
    }

    return ::app::Fuse::Node__GetSubNode(__this, index);
}

void ContentControl__OnContentChanged(ContentControl* __this, ::app::Fuse::Node* oldContent, ::app::Fuse::Node* newContent)
{
    __this->InvalidateLayout(2);
}

void ContentControl__OnDrawControl(ContentControl* __this, ::app::Fuse::DrawContext* dc)
{
    if (__this->Content() != NULL)
    {
        ::uPtr< ::app::Fuse::Node*>(__this->Content())->Draw(dc);
    }
}

void ContentControl__OnHitTestChildren(ContentControl* __this, ::app::Fuse::HitTestContext* htc)
{
    if (__this->Content() != NULL)
    {
        ::uPtr< ::app::Fuse::Node*>(__this->Content())->HitTest(htc);
    }

    ::app::Fuse::Elements::Element__OnHitTestChildren(__this, htc);
}

void ContentControl__set_Content(ContentControl* __this, ::app::Fuse::Node* value)
{
    if (__this->_content != value)
    {
        ::app::Fuse::Node* old = __this->_content;

        if ((__this->_content != NULL) && (::uPtr< ::app::Fuse::Node*>(__this->_content)->Parent() == __this))
        {
            ::uPtr< ::app::Fuse::Node*>(__this->_content)->OnRemoved((::app::Fuse::Node*)__this);
        }

        __this->_content = value;

        if ((__this->_content != NULL) && (::uPtr< ::app::Fuse::Node*>(__this->_content)->Parent() != __this))
        {
            ::uPtr< ::app::Fuse::Node*>(__this->_content)->OnAdded((::app::Fuse::Node*)__this);
        }

        __this->OnContentChanged(old, value);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush*> Control__BackgroundProperty;

Control__uType* Control__typeof()
{
    static ::uStaticStrong<Control__uType*> type;
    if (type != NULL) return type;

    type = (Control__uType*)::uAllocClassType(sizeof(Control__uType), "Fuse.Controls.Control", false, 6, 2, 0);

    type->SetBaseType(::app::Fuse::Elements::Element__typeof());
    type->__fp_get_HitTestLocalVisualBounds = (::app::Fuse::NodeBounds*(*)(::app::Fuse::Elements::Element*))Control__get_HitTestLocalVisualBounds;
    type->__fp_OnDraw = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::DrawContext*))Control__OnDraw;
    type->__fp_OnDrawControl = Control__OnDrawControl;
    type->__fp_OnHitTestLocalVisual = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::HitTestContext*))Control__OnHitTestLocalVisual;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Control__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Control__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Control__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Control__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Control__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Control__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Control__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Control__uType, __interface_5));

    type->SetStrongRefs(
        "_background", offsetof(Control, _background),
        "IsInteractingChanged", offsetof(Control, IsInteractingChanged));

    return type;
}

void Control___ObjInit_2(Control* __this)
{
    ::app::Fuse::Elements::Element___ObjInit_1(__this);
}

void Control___TypeInit_2(::uStatic* __this)
{
    Control__BackgroundProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__New_2(NULL, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Control__typeof(), (const void*)Control__OnBackgroundChanged), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Control__Fuse_Drawing_Brush__typeof(), (const void*)Control__SetBackground), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Control__Fuse_Drawing_Brush__typeof(), (const void*)Control__GetBackground));
}

void Control__add_IsInteractingChanged(Control* __this, ::uDelegate* value)
{
    __this->IsInteractingChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->IsInteractingChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Control__DrawBackground(Control* __this, ::app::Fuse::DrawContext* dc, float opacity)
{
    if ((__this->Background() != NULL) && !::uPtr< ::app::Fuse::Drawing::Brush*>(__this->Background())->IsCompletelyTransparent())
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(__this->Background())->Prepare(dc, __this->ActualSize());
        ::uPtr< ::app::Fuse::Internal::Drawing::SolidRectangle*>(::app::Fuse::Internal::Drawing::SolidRectangle__Impl)->DrawElement(dc, (::app::Fuse::Elements::Element*)__this, __this->Background(), opacity);
    }
}

::app::Fuse::Drawing::Brush* Control__get_Background(Control* __this)
{
    return __this->_background;
}

::app::Fuse::NodeBounds* Control__get_HitTestLocalVisualBounds(Control* __this)
{
    ::app::Fuse::NodeBounds* nb = ::app::Fuse::Elements::Element__get_HitTestLocalVisualBounds(__this);

    if (__this->Background() != NULL)
    {
        nb = ::uPtr< ::app::Fuse::NodeBounds*>(nb)->AddRect(::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());
    }

    return nb;
}

bool Control__get_IsInteracting(Control* __this)
{
    return __this->_isInteracting;
}

::app::Fuse::Drawing::Brush* Control__GetBackground(::uStatic* __this, Control* c)
{
    return ::uPtr< Control*>(c)->_background;
}

void Control__OnBackgroundChanged(::uStatic* __this, Control* c)
{
    ::uPtr< Control*>(c)->OnShadingChanged();
}

void Control__OnDraw(Control* __this, ::app::Fuse::DrawContext* dc)
{
    __this->DrawBackground(dc, 1.0f);
    __this->OnDrawControl(dc);
}

void Control__OnDrawControl(Control* __this, ::app::Fuse::DrawContext* dc)
{
}

void Control__OnHitTestLocalVisual(Control* __this, ::app::Fuse::HitTestContext* htc)
{
    if ((__this->Background() != NULL) && __this->IsPointInside(::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint()))
    {
        ::uPtr< ::app::Fuse::HitTestContext*>(htc)->Hit_1((::app::Fuse::Node*)__this);
    }

    ::app::Fuse::Elements::Element__OnHitTestLocalVisual(__this, htc);
}

void Control__OnRooted(Control* __this)
{
    ::app::Fuse::Elements::Element__OnRooted(__this);

    if (__this->_background != NULL)
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(__this->_background)->Pin();
    }
}

void Control__OnShadingChanged(Control* __this)
{
    __this->InvalidateVisual();
}

void Control__OnUnrooted(Control* __this)
{
    if (__this->_background != NULL)
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(__this->_background)->Unpin();
    }

    ::app::Fuse::Elements::Element__OnUnrooted(__this);
}

void Control__remove_IsInteractingChanged(Control* __this, ::uDelegate* value)
{
    __this->IsInteractingChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->IsInteractingChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Control__set_Background(Control* __this, ::app::Fuse::Drawing::Brush* value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush*>(Control__BackgroundProperty)->Set(__this, value);
}

void Control__SetBackground(::uStatic* __this, Control* c, ::app::Fuse::Drawing::Brush* value)
{
    if (::uPtr< Control*>(c)->IsLocalRooted() && (::uPtr< Control*>(c)->_background != NULL))
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(::uPtr< Control*>(c)->_background)->Unpin();
    }

    if (::uIs(c->_background, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(c->_background, ::app::Fuse::Drawing::DynamicBrush__typeof()))->remove_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Control__OnShadingChanged, c));
    }

    c->_background = value;

    if (::uIs(c->_background, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(c->_background, ::app::Fuse::Drawing::DynamicBrush__typeof()))->add_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Control__OnShadingChanged, c));
    }

    if (c->IsLocalRooted() && (c->_background != NULL))
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(c->_background)->Pin();
    }
}

void Control__SetIsInteracting(Control* __this, ::uObject* what, bool on)
{
    if (__this->_isInteracting == on)
    {
        return;
    }

    __this->_isInteracting = on;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->IsInteractingChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->IsInteractingChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DefaultSwitchBehavior__uType* DefaultSwitchBehavior__typeof()
{
    static ::uStaticStrong<DefaultSwitchBehavior__uType*> type;
    if (type != NULL) return type;

    type = (DefaultSwitchBehavior__uType*)::uAllocClassType(sizeof(DefaultSwitchBehavior__uType), "Fuse.Controls.DefaultSwitchBehavior", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DefaultSwitchBehavior__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DefaultSwitchBehavior__OnUnrooted;

    type->SetStrongRefs(
        "_bounds", offsetof(DefaultSwitchBehavior, _bounds),
        "_clicker", offsetof(DefaultSwitchBehavior, _clicker),
        "_switch", offsetof(DefaultSwitchBehavior, _switch));

    return type;
}

void DefaultSwitchBehavior___ObjInit_2(DefaultSwitchBehavior* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

::app::Fuse::Elements::Element* DefaultSwitchBehavior__get_Bounds(DefaultSwitchBehavior* __this)
{
    return __this->_bounds;
}

::app::Uno::Float2 DefaultSwitchBehavior__get_Size(DefaultSwitchBehavior* __this)
{
    return ::uPtr< ::app::Fuse::Elements::Element*>(__this->_bounds)->ActualSize();
}

DefaultSwitchBehavior* DefaultSwitchBehavior__New_1(::uStatic* __this)
{
    DefaultSwitchBehavior* inst = (DefaultSwitchBehavior*)::uAllocObject(sizeof(DefaultSwitchBehavior), DefaultSwitchBehavior__typeof());
    inst->_ObjInit_2();
    return inst;
}

void DefaultSwitchBehavior__OnCaptureLost(DefaultSwitchBehavior* __this)
{
    __this->_captured = false;
    __this->PlayEnd(::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Value(), NULL);
}

void DefaultSwitchBehavior__OnPlaced(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Fuse::PlacedArgs* args)
{
    __this->PlayEnd(::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Value(), NULL);
}

void DefaultSwitchBehavior__OnPointerMoved(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args)
{
    if (__this->_captured)
    {
        if (!::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->IsHardCapturedTo((::uObject*)__this))
        {
            if (::app::Uno::Math__Abs_8(NULL, __this->_originalP.X - ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->WindowToLocal(::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint()).X) > 10.0f)
            {
                ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->TryHardCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)DefaultSwitchBehavior__OnCaptureLost, __this), NULL);
            }
        }

        __this->_prevCoord = __this->_currentCoord;
        __this->_currentCoord = ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->WindowToLocal(::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint());
        ::app::Uno::Float2 delta = ::app::Uno::Float2__op_Subtraction_2(NULL, __this->_currentCoord, __this->_prevCoord);
        float p = delta.X / __this->Size().X;
        __this->Seek(__this->Progress() + (double)p, ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Value() ? 1 : 0);
    }
}

void DefaultSwitchBehavior__OnPointerPressed(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args)
{
    if (__this->_captured)
    {
        return;
    }

    if (::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->TrySoftCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)DefaultSwitchBehavior__OnCaptureLost, __this), NULL))
    {
        __this->_captured = true;
        __this->_capturedIndex = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->PointIndex();
        __this->_originalP = __this->_prevCoord = __this->_currentCoord = ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->WindowToLocal(args->WindowPoint());
    }
}

void DefaultSwitchBehavior__OnPointerReleased(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    if (__this->ReleaseCapture())
    {
        ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Value(__this->Progress() >= 0.5);
        __this->PlayEnd(::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Value(), NULL);
    }
}

void DefaultSwitchBehavior__OnPointerTapped(DefaultSwitchBehavior* __this, ::uObject* a, int tapCount)
{
    __this->ReleaseCapture();
    ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Value(!::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Value());
    __this->PlayEnd(::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Value(), NULL);
}

void DefaultSwitchBehavior__OnRooted(DefaultSwitchBehavior* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    __this->_switch = ::uAs< ::app::Fuse::Controls::Switch*>(elm, ::app::Fuse::Controls::Switch__typeof());

    if (__this->_switch == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("SwitchBehavior must be rooted in a Switch")));
    }

    ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->add_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__bool__typeof(), (const void*)DefaultSwitchBehavior__OnValueChanged, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)DefaultSwitchBehavior__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)DefaultSwitchBehavior__OnPointerMoved, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)DefaultSwitchBehavior__OnPointerReleased, __this));
    __this->_clicker = ::app::Fuse::Gestures::Clicker__AttachClicker(NULL, elm);
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->_clicker)->add_TappedEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)DefaultSwitchBehavior__OnPointerTapped, __this));

    if (__this->Bounds() == NULL)
    {
        __this->Bounds(::uAs< ::app::Fuse::Elements::Element*>(__this->_switch, ::app::Fuse::Elements::Element__typeof()));
    }

    if (::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->Value())
    {
        __this->BypassActivate();
    }
}

void DefaultSwitchBehavior__OnUnrooted(DefaultSwitchBehavior* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->remove_ValueChanged(::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__bool__typeof(), (const void*)DefaultSwitchBehavior__OnValueChanged, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->RemoveHandler((::app::Fuse::Node*)__this->_switch, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)DefaultSwitchBehavior__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->RemoveHandler((::app::Fuse::Node*)__this->_switch, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)DefaultSwitchBehavior__OnPointerMoved, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->RemoveHandler((::app::Fuse::Node*)__this->_switch, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)DefaultSwitchBehavior__OnPointerReleased, __this));
    ::uPtr< ::app::Fuse::Controls::Switch*>(__this->_switch)->remove_Placed(::uNewDelegateNonVirt(::app::Fuse::PlacedHandler__typeof(), (const void*)DefaultSwitchBehavior__OnPlaced, __this));
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->_clicker)->remove_TappedEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)DefaultSwitchBehavior__OnPointerTapped, __this));
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->_clicker)->Detach();
    __this->_clicker = NULL;
    __this->_switch = NULL;
    __this->Bounds(NULL);
    ::app::Fuse::Input::Pointer__ReleaseAllCaptures(NULL, (::uObject*)__this);
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

void DefaultSwitchBehavior__OnValueChanged(DefaultSwitchBehavior* __this, ::uObject* sender, ::app::Uno::UX::ValueChangedArgs__bool* args)
{
    __this->PlayEnd(::uPtr< ::app::Uno::UX::ValueChangedArgs__bool*>(args)->Value(), NULL);
}

bool DefaultSwitchBehavior__ReleaseCapture(DefaultSwitchBehavior* __this)
{
    if (!__this->_captured)
    {
        return false;
    }

    ::app::Fuse::Input::Pointer__ReleaseAllCaptures(NULL, (::uObject*)__this);
    __this->_captured = false;
    return true;
}

void DefaultSwitchBehavior__set_Bounds(DefaultSwitchBehavior* __this, ::app::Fuse::Elements::Element* value)
{
    __this->_bounds = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DockPanel__uType* DockPanel__typeof()
{
    static ::uStaticStrong<DockPanel__uType*> type;
    if (type != NULL) return type;

    type = (DockPanel__uType*)::uAllocClassType(sizeof(DockPanel__uType), "Fuse.Controls.DockPanel", false, 8, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(DockPanel__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(DockPanel__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(DockPanel__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(DockPanel__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(DockPanel__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(DockPanel__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(DockPanel__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(DockPanel__uType, __interface_7));

    type->SetStrongRefs(
        "_dockLayout", offsetof(DockPanel, _dockLayout));

    return type;
}

void DockPanel___ObjInit_4(DockPanel* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
    __this->Layout((::app::Fuse::Layouts::Layout*)(__this->_dockLayout = ::app::Fuse::Layouts::DockLayout__New_1(NULL)));
}

DockPanel* DockPanel__New_2(::uStatic* __this)
{
    DockPanel* inst = (DockPanel*)::uAllocObject(sizeof(DockPanel), DockPanel__typeof());
    inst->_ObjInit_4();
    return inst;
}

void DockPanel__SetDock(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int dock)
{
    ::app::Fuse::Layouts::DockLayout__SetDock(NULL, (::app::Fuse::Node*)elm, dock);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Ellipse__uType* Ellipse__typeof()
{
    static ::uStaticStrong<Ellipse__uType*> type;
    if (type != NULL) return type;

    type = (Ellipse__uType*)::uAllocClassType(sizeof(Ellipse__uType), "Fuse.Controls.Ellipse", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Shape__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Ellipse__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Ellipse__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Ellipse__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Ellipse__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Ellipse__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Ellipse__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Ellipse__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Ellipse__uType, __interface_7));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* FillRule__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Controls.FillRule", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "NonZero", 0LL,
        "EvenOdd", 1LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* FitMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Controls.FitMode", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "GeometryMaximum", 0LL,
        "StrokeMaximum", 1LL,
        "ShrinkToGeometry", 2LL,
        "ShrinkToStroke", 3LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_GraphicsView__float4*> GraphicsView__BackgroundProperty_1;

GraphicsView__uType* GraphicsView__typeof()
{
    static ::uStaticStrong<GraphicsView__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsView__uType*)::uAllocClassType(sizeof(GraphicsView__uType), "Fuse.Controls.GraphicsView", false, 7, 3, 0);

    type->SetBaseType(::app::Fuse::Controls::ContentControl__typeof());
    type->__fp_Draw = (void(*)(::app::Fuse::Node*, ::app::Fuse::DrawContext*))GraphicsView__Draw;
    type->__fp_InvalidateVisual = (void(*)(::app::Fuse::Node*))GraphicsView__InvalidateVisual;
    type->__interface_6.__fp_PointToWorldRay = (::app::Uno::Geometry::Ray(*)(void*, ::app::Uno::Float2))GraphicsView__PointToWorldRay;
    type->__interface_6.__fp_get_PointDensity = (float(*)(void*))GraphicsView__get_PointDensity_1;
    type->__interface_6.__fp_get_Size = (::app::Uno::Float2(*)(void*))GraphicsView__get_Size;
    type->__interface_6.__fp_get_ViewProjectionTransform = (::app::Uno::Float4x4(*)(void*))GraphicsView__get_ViewProjectionTransform;
    type->__interface_6.__fp_get_ViewProjectionTransformInverse = (::app::Uno::Float4x4(*)(void*))GraphicsView__get_ViewProjectionTransformInverse;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(GraphicsView__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(GraphicsView__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(GraphicsView__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(GraphicsView__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(GraphicsView__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(GraphicsView__uType, __interface_5),
        ::app::Fuse::IViewport__typeof(), offsetof(GraphicsView__uType, __interface_6));

    type->SetStrongRefs(
        "_frustum", offsetof(GraphicsView, _frustum),
        "_frustumViewport", offsetof(GraphicsView, _frustumViewport),
        "Redraw", offsetof(GraphicsView, Redraw));

    return type;
}

void GraphicsView___ObjInit_4(GraphicsView* __this)
{
    __this->_frustum = ::app::Fuse::OrthographicFrustum__New_1(NULL);
    ::app::Fuse::Controls::ContentControl___ObjInit_3(__this);
    __this->_frustumViewport = ::app::Fuse::FrustumViewport__New_1(NULL);
    ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->Update((::uObject*)__this, (::uObject*)__this->_frustum);
}

void GraphicsView___TypeInit_3(::uStatic* __this)
{
    GraphicsView__BackgroundProperty_1 = ::app::Fuse::StyleProperty__Fuse_Controls_GraphicsView__float4__New_1(NULL, ::app::Uno::Float4__New_3(NULL, 0.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_GraphicsView__typeof(), (const void*)GraphicsView__OnBackgroundChanged_1));
}

void GraphicsView__add_Redraw(GraphicsView* __this, ::uDelegate* value)
{
    __this->Redraw = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Redraw, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void GraphicsView__Draw(GraphicsView* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Fuse::Elements::Element__Draw(__this, dc);
    ::uPtr< ::app::Fuse::AppBase*>(::app::Fuse::AppBase__get_Current_1(NULL))->DrawSelection(dc);
}

void GraphicsView__DrawFrame(GraphicsView* __this)
{
    __this->_frameScheduled = false;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Redraw, NULL))
    {
        ::uPtr< ::app::Fuse::OrthographicFrustum*>(__this->_frustum)->LocalFromWorld(__this->WorldTransformInverse());
        ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->Update((::uObject*)__this, (::uObject*)__this->_frustum);
        ::uPtr< ::uDelegate*>(__this->Redraw)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

::app::Uno::Float4 GraphicsView__get_Background_1(GraphicsView* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_GraphicsView__float4*>(GraphicsView__BackgroundProperty_1)->Get(__this);
}

float GraphicsView__get_PointDensity_1(GraphicsView* __this)
{
    return (__this->Parent() != NULL) ? ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->Parent())->Viewport())) : ::app::Fuse::RootViewport__get_DefaultDensity(NULL);
}

::app::Uno::Float2 GraphicsView__get_Size(GraphicsView* __this)
{
    return __this->ActualSize();
}

::app::Uno::Float4x4 GraphicsView__get_ViewProjectionTransform(GraphicsView* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ViewProjectionTransform;
}

::app::Uno::Float4x4 GraphicsView__get_ViewProjectionTransformInverse(GraphicsView* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ViewProjectionTransformInverse;
}

void GraphicsView__InvalidateVisual(GraphicsView* __this)
{
    if (__this->IsRooted() && !__this->_frameScheduled)
    {
        ::app::Fuse::UpdateManager__AddOnceAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)GraphicsView__DrawFrame, __this), 4);
        __this->_frameScheduled = true;
    }

    ::app::Fuse::Elements::Element__InvalidateVisual(__this);
}

GraphicsView* GraphicsView__New_2(::uStatic* __this)
{
    GraphicsView* inst = (GraphicsView*)::uAllocObject(sizeof(GraphicsView), GraphicsView__typeof());
    inst->_ObjInit_4();
    return inst;
}

void GraphicsView__OnBackgroundChanged_1(::uStatic* __this, GraphicsView* gv)
{
    ::uPtr< GraphicsView*>(gv)->InvalidateVisual();
}

::app::Uno::Geometry::Ray GraphicsView__PointToWorldRay(GraphicsView* __this, ::app::Uno::Float2 pixelPos)
{
    return ::app::Fuse::FrustumViewport__PointToWorldRay(NULL, (::uObject*)__this, pixelPos);
}

void GraphicsView__remove_Redraw(GraphicsView* __this, ::uDelegate* value)
{
    __this->Redraw = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Redraw, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void GraphicsView__set_Background_1(GraphicsView* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_GraphicsView__float4*>(GraphicsView__BackgroundProperty_1)->Set(__this, value);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Grid__float*> Grid__CellSpacingProperty;

Grid__uType* Grid__typeof()
{
    static ::uStaticStrong<Grid__uType*> type;
    if (type != NULL) return type;

    type = (Grid__uType*)::uAllocClassType(sizeof(Grid__uType), "Fuse.Controls.Grid", false, 8, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Grid__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Grid__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Grid__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Grid__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Grid__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Grid__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Grid__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Grid__uType, __interface_7));

    type->SetStrongRefs(
        "_gridLayout", offsetof(Grid, _gridLayout));

    return type;
}

void Grid___ObjInit_4(Grid* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
    __this->Layout((::app::Fuse::Layouts::Layout*)(__this->_gridLayout = ::app::Fuse::Layouts::GridLayout__New_1(NULL)));
}

void Grid___TypeInit_4(::uStatic* __this)
{
    Grid__CellSpacingProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Grid__float__New_1(NULL, 0.0f, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Grid__typeof(), (const void*)Grid__OnCellSpacingChanged));
}

float Grid__get_CellSpacing(Grid* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Grid__float*>(Grid__CellSpacingProperty)->Get(__this);
}

::uString* Grid__get_ColumnData(Grid* __this)
{
    return ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->Columns();
}

::uString* Grid__get_Rows(Grid* __this)
{
    return ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->Rows();
}

Grid* Grid__New_2(::uStatic* __this)
{
    Grid* inst = (Grid*)::uAllocObject(sizeof(Grid), Grid__typeof());
    inst->_ObjInit_4();
    return inst;
}

void Grid__OnCellSpacingChanged(::uStatic* __this, Grid* p)
{
    ::uPtr< ::app::Fuse::Layouts::GridLayout*>(::uPtr< Grid*>(p)->_gridLayout)->CellSpacing(::uPtr< Grid*>(p)->CellSpacing());
}

void Grid__set_CellSpacing(Grid* __this, float value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Grid__float*>(Grid__CellSpacingProperty)->Set(__this, value);
}

void Grid__set_ColumnData(Grid* __this, ::uString* value)
{
    ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->Columns(value);
}

void Grid__set_Rows(Grid* __this, ::uString* value)
{
    ::uPtr< ::app::Fuse::Layouts::GridLayout*>(__this->_gridLayout)->Rows(value);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment*> Image__ContentAlignmentProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy*> Image__MemoryPolicyProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection*> Image__StretchDirectionProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode*> Image__StretchModeProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing*> Image__StretchSizingProperty;

Image__uType* Image__typeof()
{
    static ::uStaticStrong<Image__uType*> type;
    if (type != NULL) return type;

    type = (Image__uType*)::uAllocClassType(sizeof(Image__uType), "Fuse.Controls.Image", false, 8, 3, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Image__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Image__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Image__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Image__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Image__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Image__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Image__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Image__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Image__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Image__uType, __interface_7));

    type->SetStrongRefs(
        "_container", offsetof(Image, _container),
        "ParamChanged", offsetof(Image, ParamChanged),
        "SourceChanged", offsetof(Image, SourceChanged));

    return type;
}

void Image___ObjInit_4(Image* __this)
{
    __this->_container = ::app::Fuse::Internal::ImageContainer__New_1(NULL, NULL);
    __this->_color = ::app::Uno::Float4__New_3(NULL, 1.0f);
    __this->_scale9Margin = ::app::Uno::Float4__New_3(NULL, 10.0f);
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
}

void Image___TypeInit_4(::uStatic* __this)
{
    Image__MemoryPolicyProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__New_2(NULL, ::app::Fuse::Resources::MemoryPolicy__PreloadRetain, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Image__typeof(), (const void*)Image__UpdateParam), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__typeof(), (const void*)Image__SetMemoryPolicy), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__typeof(), (const void*)Image__GetMemoryPolicy));
    Image__StretchModeProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__New_2(NULL, 5, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Image__typeof(), (const void*)Image__UpdateParam), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Image__Fuse_Elements_StretchMode__typeof(), (const void*)Image__SetStretchMode), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Image__Fuse_Elements_StretchMode__typeof(), (const void*)Image__GetStretchMode));
    Image__StretchDirectionProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__New_2(NULL, 0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Image__typeof(), (const void*)Image__UpdateParam), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Image__Fuse_Elements_StretchDirection__typeof(), (const void*)Image__SetStretchDirection), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Image__Fuse_Elements_StretchDirection__typeof(), (const void*)Image__GetStretchDirection));
    Image__StretchSizingProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__New_2(NULL, 1, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Image__typeof(), (const void*)Image__UpdateParam), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Image__Fuse_Elements_StretchSizing__typeof(), (const void*)Image__SetStretchSizing), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Image__Fuse_Elements_StretchSizing__typeof(), (const void*)Image__GetStretchSizing));
    Image__ContentAlignmentProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__New_2(NULL, 10, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Image__typeof(), (const void*)Image__UpdateParam), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Image__Fuse_Elements_Alignment__typeof(), (const void*)Image__SetContentAlignment), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Image__Fuse_Elements_Alignment__typeof(), (const void*)Image__GetContentAlignment));
}

void Image__add_ParamChanged(Image* __this, ::uDelegate* value)
{
    __this->ParamChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ParamChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Image__add_SourceChanged(Image* __this, ::uDelegate* value)
{
    __this->SourceChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->SourceChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

::app::Uno::Float4 Image__get_Color(Image* __this)
{
    return __this->_color;
}

::app::Fuse::Internal::ImageContainer* Image__get_Container(Image* __this)
{
    return __this->_container;
}

int Image__get_ContentAlignment(Image* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment*>(Image__ContentAlignmentProperty)->Get(__this);
}

float Image__get_Density(Image* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Density();
}

::app::Uno::UX::FileSource* Image__get_File(Image* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->File();
}

int Image__get_ResampleMode(Image* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->ResampleMode();
}

::app::Uno::Float4 Image__get_Scale9Margin(Image* __this)
{
    return __this->_scale9Margin;
}

::app::Fuse::Resources::ImageSource* Image__get_Source(Image* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Source();
}

int Image__get_StretchDirection(Image* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection*>(Image__StretchDirectionProperty)->Get(__this);
}

int Image__get_StretchMode(Image* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode*>(Image__StretchModeProperty)->Get(__this);
}

int Image__get_StretchSizing(Image* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing*>(Image__StretchSizingProperty)->Get(__this);
}

int Image__GetContentAlignment(::uStatic* __this, Image* img)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(::uPtr< Image*>(img)->_container)->ContentAlignment();
}

::app::Fuse::Resources::MemoryPolicy* Image__GetMemoryPolicy(::uStatic* __this, Image* img)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(::uPtr< Image*>(img)->_container)->MemoryPolicy();
}

int Image__GetStretchDirection(::uStatic* __this, Image* img)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(::uPtr< Image*>(img)->_container)->StretchDirection();
}

int Image__GetStretchMode(::uStatic* __this, Image* img)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(::uPtr< Image*>(img)->_container)->StretchMode();
}

int Image__GetStretchSizing(::uStatic* __this, Image* img)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(::uPtr< Image*>(img)->_container)->StretchSizing();
}

Image* Image__New_2(::uStatic* __this)
{
    Image* inst = (Image*)::uAllocObject(sizeof(Image), Image__typeof());
    inst->_ObjInit_4();
    return inst;
}

void Image__OnContainerParamChanged(Image* __this, ::uObject* s, ::uObject* a)
{
    __this->OnParamChanged();
}

void Image__OnContainerSourceChanged(Image* __this, ::uObject* s, ::uObject* a)
{
    __this->OnSourceChanged();
}

void Image__OnIsVisibleChanged_1(Image* __this, ::uObject* s, ::uObject* a)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->IsVisible(__this->IsVisible());
}

void Image__OnParamChanged(Image* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ParamChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ParamChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void Image__OnRooted(Image* __this)
{
    ::app::Fuse::Controls::Panel__OnRooted(__this);
    __this->AddDrawCost(1.0);
    __this->add_IsVisibleChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Image__OnIsVisibleChanged_1, __this));
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->IsRooted(true);
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->add_ParamChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Image__OnContainerParamChanged, __this));
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->add_SourceChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Image__OnContainerSourceChanged, __this));
}

void Image__OnSourceChanged(Image* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->SourceChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->SourceChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void Image__OnUnrooted(Image* __this)
{
    __this->remove_IsVisibleChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Image__OnIsVisibleChanged_1, __this));
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->IsRooted(false);
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->remove_ParamChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Image__OnContainerParamChanged, __this));
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->remove_SourceChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Image__OnContainerSourceChanged, __this));
    __this->RemoveDrawCost(1.0);
    ::app::Fuse::Controls::Panel__OnUnrooted(__this);
}

void Image__remove_ParamChanged(Image* __this, ::uDelegate* value)
{
    __this->ParamChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ParamChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Image__remove_SourceChanged(Image* __this, ::uDelegate* value)
{
    __this->SourceChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->SourceChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Image__set_Color(Image* __this, ::app::Uno::Float4 value)
{
    if (::app::Uno::Float4__op_Inequality(NULL, __this->_color, value))
    {
        __this->_color = value;
        __this->OnParamChanged();
    }
}

void Image__set_ContentAlignment(Image* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment*>(Image__ContentAlignmentProperty)->Set(__this, value);
}

void Image__set_Density(Image* __this, float value)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Density(value);
}

void Image__set_File(Image* __this, ::app::Uno::UX::FileSource* value)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->File(value);
}

void Image__set_ResampleMode(Image* __this, int value)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->ResampleMode(value);
}

void Image__set_Scale9Margin(Image* __this, ::app::Uno::Float4 value)
{
    if (!__this->_hasScale9Margin || ::app::Uno::Float4__op_Inequality(NULL, __this->_scale9Margin, value))
    {
        __this->_scale9Margin = value;
        __this->_hasScale9Margin = true;
        __this->OnParamChanged();
    }
}

void Image__set_Source(Image* __this, ::app::Fuse::Resources::ImageSource* value)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Source(value);
}

void Image__set_StretchDirection(Image* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection*>(Image__StretchDirectionProperty)->Set(__this, value);
}

void Image__set_StretchMode(Image* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode*>(Image__StretchModeProperty)->Set(__this, value);
}

void Image__set_StretchSizing(Image* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing*>(Image__StretchSizingProperty)->Set(__this, value);
}

void Image__SetContentAlignment(::uStatic* __this, Image* img, int v)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(::uPtr< Image*>(img)->_container)->ContentAlignment(v);
}

void Image__SetMemoryPolicy(::uStatic* __this, Image* img, ::app::Fuse::Resources::MemoryPolicy* v)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(::uPtr< Image*>(img)->_container)->MemoryPolicy(v);
}

void Image__SetStretchDirection(::uStatic* __this, Image* img, int v)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(::uPtr< Image*>(img)->_container)->StretchDirection(v);
}

void Image__SetStretchMode(::uStatic* __this, Image* img, int v)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(::uPtr< Image*>(img)->_container)->StretchMode(v);
}

void Image__SetStretchSizing(::uStatic* __this, Image* img, int v)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(::uPtr< Image*>(img)->_container)->StretchSizing(v);
}

void Image__UpdateParam(::uStatic* __this, Image* img)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IWebView__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Controls.IWebView");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MapView__uType* MapView__typeof()
{
    static ::uStaticStrong<MapView__uType*> type;
    if (type != NULL) return type;

    type = (MapView__uType*)::uAllocClassType(sizeof(MapView__uType), "Fuse.Controls.MapView", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(MapView__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(MapView__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(MapView__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(MapView__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(MapView__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(MapView__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(MapView__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(MapView__uType, __interface_7));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MultiLayout__uType* MultiLayout__typeof()
{
    static ::uStaticStrong<MultiLayout__uType*> type;
    if (type != NULL) return type;

    type = (MultiLayout__uType*)::uAllocClassType(sizeof(MultiLayout__uType), "Fuse.Controls.MultiLayout", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))MultiLayout__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))MultiLayout__OnUnrooted;

    type->SetStrongRefs(
        "_layoutElement", offsetof(MultiLayout, _layoutElement));

    return type;
}

void MultiLayout__ChangeLayout(MultiLayout* __this, ::app::Fuse::Node* layoutRoot)
{
    if (layoutRoot == NULL)
    {
        return;
    }

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Behavior::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(layoutRoot)->Behaviors())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Behavior* b = ::app::Uno::Collections::IEnumerator__Fuse_Behavior::Current(::uPtr< ::uObject*>(enum_123));

        if (::uIs(b, MultiLayout__typeof()))
        {
            return;
        }
    }

    if (::uIs(layoutRoot, ::app::Fuse::Controls::Placeholder__typeof()))
    {
        ::uPtr< ::app::Fuse::Controls::Placeholder*>(::uCast< ::app::Fuse::Controls::Placeholder*>(layoutRoot, ::app::Fuse::Controls::Placeholder__typeof()))->AcquireTarget();
    }

    for (int i = 0; i < layoutRoot->SubNodeCount(); i++)
    {
        __this->ChangeLayout(::uPtr< ::app::Fuse::Node*>(layoutRoot)->GetSubNode(i));
    }
}

void MultiLayout__OnRooted(MultiLayout* __this, ::app::Fuse::Node* node)
{
    __this->ChangeLayout((::app::Fuse::Node*)__this->_layoutElement);
}

void MultiLayout__OnUnrooted(MultiLayout* __this, ::app::Fuse::Node* node)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NativeViewHost__uType* NativeViewHost__typeof()
{
    static ::uStaticStrong<NativeViewHost__uType*> type;
    if (type != NULL) return type;

    type = (NativeViewHost__uType*)::uAllocClassType(sizeof(NativeViewHost__uType), "Fuse.Controls.NativeViewHost", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(NativeViewHost__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(NativeViewHost__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(NativeViewHost__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(NativeViewHost__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(NativeViewHost__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(NativeViewHost__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(NativeViewHost__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(NativeViewHost__uType, __interface_7));

    return type;
}

void NativeViewHost___ObjInit_4(NativeViewHost* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
}

NativeViewHost* NativeViewHost__New_2(::uStatic* __this)
{
    NativeViewHost* inst = (NativeViewHost*)::uAllocObject(sizeof(NativeViewHost), NativeViewHost__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NavigationBar__uType* NavigationBar__typeof()
{
    static ::uStaticStrong<NavigationBar__uType*> type;
    if (type != NULL) return type;

    type = (NavigationBar__uType*)::uAllocClassType(sizeof(NavigationBar__uType), "Fuse.Controls.NavigationBar", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(NavigationBar__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(NavigationBar__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(NavigationBar__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(NavigationBar__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(NavigationBar__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(NavigationBar__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(NavigationBar__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(NavigationBar__uType, __interface_7));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Number__string*> Number__FormatProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Number__float*> Number__ValueProperty;

Number__uType* Number__typeof()
{
    static ::uStaticStrong<Number__uType*> type;
    if (type != NULL) return type;

    type = (Number__uType*)::uAllocClassType(sizeof(Number__uType), "Fuse.Controls.Number", false, 8, 2, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Number__OnRooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Number__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Number__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Number__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Number__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Number__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Number__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Number__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Number__uType, __interface_7));

    type->SetStrongRefs(
        "_text", offsetof(Number, _text),
        "ValueChanged", offsetof(Number, ValueChanged));

    return type;
}

void Number___TypeInit_4(::uStatic* __this)
{
    Number__FormatProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Number__string__New_1(NULL, ::uGetConstString("F0"), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Number__typeof(), (const void*)Number__FormatChanged));
    Number__ValueProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Number__float__New_1(NULL, 0.0f, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Number__typeof(), (const void*)Number__StaticValueChanged));
}

void Number__FormatChanged(::uStatic* __this, Number* n)
{
    ::uPtr< Number*>(n)->UpdateValue();
}

::uString* Number__get_Format(Number* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Number__string*>(Number__FormatProperty)->Get(__this);
}

float Number__get_Value(Number* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Number__float*>(Number__ValueProperty)->Get(__this);
}

void Number__OnRooted(Number* __this)
{
    ::app::Fuse::Controls::Panel__OnRooted(__this);
    __this->UpdateValue();
}

void Number__OnValueChanged(Number* __this, float n, ::uObject* origin)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ValueChanged, NULL))
    {
        ::app::Uno::UX::ValueChangedArgs__float* args = ::app::Uno::UX::ValueChangedArgs__float__New_2(NULL, n, origin);
        ::uPtr< ::uDelegate*>(__this->ValueChanged)->InvokeVoid< ::uObject*, ::app::Uno::UX::ValueChangedArgs__float*>(::uBox(::app::Uno::Float__typeof(), n), args);
    }
}

void Number__set_Format(Number* __this, ::uString* value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Number__string*>(Number__FormatProperty)->Set(__this, value);
}

void Number__set_Value(Number* __this, float value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Number__float*>(Number__ValueProperty)->Set(__this, value);
}

void Number__StaticValueChanged(::uStatic* __this, Number* n)
{
    ::uPtr< Number*>(n)->UpdateValue();
    n->OnValueChanged(n->Value(), (::uObject*)n);
}

void Number__UpdateValue(Number* __this)
{
    ::uArray* array_123;
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->_text)->Value(::app::Uno::String__Format(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("{0:"), __this->Format()), ::uGetConstString("}")), (array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = ::uBox(::app::Uno::Float__typeof(), __this->Value()), array_123)));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Page__uType* Page__typeof()
{
    static ::uStaticStrong<Page__uType*> type;
    if (type != NULL) return type;

    type = (Page__uType*)::uAllocClassType(sizeof(Page__uType), "Fuse.Controls.Page", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Page__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Page__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Page__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Page__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Page__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Page__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Page__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Page__uType, __interface_7));

    return type;
}

void Page___ObjInit_4(Page* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
}

Page* Page__New_2(::uStatic* __this)
{
    Page* inst = (Page*)::uAllocObject(sizeof(Page), Page__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/.cache/GeneratedCode/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PageControl_Template__uType* PageControl_Template__typeof()
{
    static ::uStaticStrong<PageControl_Template__uType*> type;
    if (type != NULL) return type;

    type = (PageControl_Template__uType*)::uAllocClassType(sizeof(PageControl_Template__uType), "Fuse.Controls.PageControl.Template", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_Page__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Page*, ::app::Fuse::Controls::Page*))PageControl_Template__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(PageControl_Template__uType, __interface_0));

    return type;
}

void PageControl_Template__OnApply(PageControl_Template* __this, ::app::Fuse::Controls::Page* self)
{
    ::app::Fuse::Navigation::EnteringAnimation* temp = ::app::Fuse::Navigation::EnteringAnimation__New_1(NULL);
    ::app::Fuse::Animations::Move* temp1 = ::app::Fuse::Animations::Move__New_1(NULL);
    ::app::Fuse::Navigation::ExitingAnimation* temp2 = ::app::Fuse::Navigation::ExitingAnimation__New_1(NULL);
    ::app::Fuse::Animations::Move* temp3 = ::app::Fuse::Animations::Move__New_1(NULL);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::EnteringAnimation*>(temp)->Animators()), (::app::Fuse::Animations::Animator*)temp1);
    ::uPtr< ::app::Fuse::Animations::Move*>(temp1)->X(-1.0f);
    temp1->RelativeTo(::app::Fuse::TranslationModes__ParentSize);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::ExitingAnimation*>(temp2)->Animators()), (::app::Fuse::Animations::Animator*)temp3);
    ::uPtr< ::app::Fuse::Animations::Move*>(temp3)->X(1.0f);
    temp3->Duration(0.5);
    temp3->RelativeTo(::app::Fuse::TranslationModes__ParentSize);
    ::uPtr< ::app::Fuse::Controls::Page*>(self)->AddStyleBehavior((::app::Fuse::Behavior*)temp);
    self->AddStyleBehavior((::app::Fuse::Behavior*)temp2);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory*> PageIndicator__DotFactoryProperty;

PageIndicator__uType* PageIndicator__typeof()
{
    static ::uStaticStrong<PageIndicator__uType*> type;
    if (type != NULL) return type;

    type = (PageIndicator__uType*)::uAllocClassType(sizeof(PageIndicator__uType), "Fuse.Controls.PageIndicator", false, 8, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::StackPanel__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))PageIndicator__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))PageIndicator__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(PageIndicator__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(PageIndicator__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(PageIndicator__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(PageIndicator__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(PageIndicator__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(PageIndicator__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(PageIndicator__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(PageIndicator__uType, __interface_7));

    type->SetStrongRefs(
        "_pageProgress", offsetof(PageIndicator, _pageProgress));

    return type;
}

void PageIndicator___TypeInit_5(::uStatic* __this)
{
    PageIndicator__DotFactoryProperty = ::app::Fuse::StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__New_1(NULL, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_PageIndicator__typeof(), (const void*)PageIndicator__OnDotFactoryChanged));
}

::uObject* PageIndicator__get_DotFactory(PageIndicator* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory*>(PageIndicator__DotFactoryProperty)->Get(__this);
}

void PageIndicator__OnDotFactoryChanged(::uStatic* __this, PageIndicator* p)
{
    ::uPtr< PageIndicator*>(p)->RecreateDots();
}

void PageIndicator__OnRooted(PageIndicator* __this)
{
    ::app::Fuse::Controls::Panel__OnRooted(__this);
    ::app::Fuse::Navigation::INavigation::add_PageCountChanged(::uPtr< ::uObject*>(__this->_pageProgress), ::uNewDelegateNonVirt(::app::Fuse::Navigation::NavigationPageCountHandler__typeof(), (const void*)PageIndicator__UpdateCount, __this));
    ::app::Fuse::Navigation::INavigation::add_PageProgressChanged(::uPtr< ::uObject*>(__this->_pageProgress), ::uNewDelegateNonVirt(::app::Fuse::Navigation::NavigationPageProgressHandler__typeof(), (const void*)PageIndicator__UpdateCurrent, __this));
    __this->UpdateCount(NULL);
    __this->UpdateCurrent(NULL, ::app::Fuse::Navigation::INavigation::PageProgress(::uPtr< ::uObject*>(__this->_pageProgress)), ::app::Fuse::Navigation::INavigation::PageProgress(::uPtr< ::uObject*>(__this->_pageProgress)));
}

void PageIndicator__OnUnrooted(PageIndicator* __this)
{
    ::app::Fuse::Navigation::INavigation::remove_PageCountChanged(::uPtr< ::uObject*>(__this->_pageProgress), ::uNewDelegateNonVirt(::app::Fuse::Navigation::NavigationPageCountHandler__typeof(), (const void*)PageIndicator__UpdateCount, __this));
    ::app::Fuse::Navigation::INavigation::remove_PageProgressChanged(::uPtr< ::uObject*>(__this->_pageProgress), ::uNewDelegateNonVirt(::app::Fuse::Navigation::NavigationPageProgressHandler__typeof(), (const void*)PageIndicator__UpdateCurrent, __this));
    ::app::Fuse::Controls::Panel__OnUnrooted(__this);
}

void PageIndicator__RecreateDots(PageIndicator* __this)
{
    int count = ::app::Fuse::Navigation::INavigation::PageCount(::uPtr< ::uObject*>(__this->_pageProgress));

    while (::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())) > count)
    {
        ::app::Uno::Collections::IList__Fuse_Node::RemoveAt(::uPtr< ::uObject*>(__this->Children()), ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())) - 1);
    }

    while (::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())) < count)
    {
        ::app::Fuse::Node* dot = ::uAs< ::app::Fuse::Node*>(::app::Uno::UX::IFactory::New_1(::uPtr< ::uObject*>(__this->DotFactory())), ::app::Fuse::Node__typeof());
        ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(__this->Children()), dot);
    }

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())); ++i)
    {
        ::app::Fuse::Navigation::NavigationPageProperty__SetNavigationPage(NULL, ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(__this->Children()), i), ::app::Fuse::Navigation::INavigation::GetPage(::uPtr< ::uObject*>(__this->_pageProgress), i));
    }

    __this->UpdateCurrent((::uObject*)__this->_pageProgress, ::app::Fuse::Navigation::INavigation::PageProgress(::uPtr< ::uObject*>(__this->_pageProgress)), ::app::Fuse::Navigation::INavigation::PageProgress(::uPtr< ::uObject*>(__this->_pageProgress)));
}

void PageIndicator__set_DotFactory(PageIndicator* __this, ::uObject* value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory*>(PageIndicator__DotFactoryProperty)->Set(__this, value);
}

void PageIndicator__UpdateCount(PageIndicator* __this, ::uObject* s)
{
    __this->RecreateDots();
}

void PageIndicator__UpdateCurrent(PageIndicator* __this, ::uObject* s, double progress, double prevProgress)
{
    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())); ++i)
    {
        double p = progress - (double)i;
        double pp = prevProgress - (double)i;
        ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(__this->Children()), i), ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, p, pp, 2));
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Panel__Fuse_Node*> Panel__AppearanceProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout*> Panel__LayoutProperty;

Panel__uType* Panel__typeof()
{
    static ::uStaticStrong<Panel__uType*> type;
    if (type != NULL) return type;

    type = (Panel__uType*)::uAllocClassType(sizeof(Panel__uType), "Fuse.Controls.Panel", false, 8, 8, 0);

    type->SetBaseType(::app::Fuse::Controls::Control__typeof());
    type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2))Panel__ArrangePaddingBox;
    type->__fp_CalcRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Elements::Element*))Panel__CalcRenderBounds;
    type->__fp_FastTrackDrawWithOpacity = (bool(*)(::app::Fuse::Elements::Element*, ::app::Fuse::DrawContext*))Panel__FastTrackDrawWithOpacity;
    type->__fp_get_SubNodeCount = (int(*)(::app::Fuse::Node*))Panel__get_SubNodeCount;
    type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))Panel__GetContentSize;
    type->__fp_GetSubNode = (::app::Fuse::Node*(*)(::app::Fuse::Node*, int))Panel__GetSubNode;
    type->__fp_IsMarginBoxDependent = (int(*)(::app::Fuse::Node*, ::app::Fuse::Node*))Panel__IsMarginBoxDependent;
    type->__fp_OnDrawControl = (void(*)(::app::Fuse::Controls::Control*, ::app::Fuse::DrawContext*))Panel__OnDrawControl;
    type->__fp_OnHitTestChildren = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::HitTestContext*))Panel__OnHitTestChildren;
    type->__fp_OnInvalidateLayout = (void(*)(::app::Fuse::Node*))Panel__OnInvalidateLayout;
    type->__fp_OnResetStyle = (void(*)(::app::Fuse::Node*))Panel__OnResetStyle;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Panel__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Panel__OnUnrooted;
    type->__interface_6.__fp_AddChildAt = (void(*)(void*, int, ::app::Fuse::Node*))Panel__Fuse_Navigation_INavigationPanel_AddChildAt;
    type->__interface_6.__fp_RemoveChild = (void(*)(void*, ::app::Fuse::Node*))Panel__Fuse_Navigation_INavigationPanel_RemoveChild;
    type->__interface_6.__fp_GetChild = (::app::Fuse::Node*(*)(void*, int))Panel__Fuse_Navigation_INavigationPanel_GetChild;
    type->__interface_6.__fp_IsPage = (bool(*)(void*, ::app::Fuse::Node*))Panel__Fuse_Navigation_INavigationPanel_IsPage;
    type->__interface_7.__fp_Add = (void(*)(void*, ::app::Fuse::Node*))Panel__Fuse_Triggers_IAddRemove_Add;
    type->__interface_7.__fp_Remove = (void(*)(void*, ::app::Fuse::Node*))Panel__Fuse_Triggers_IAddRemove_Remove;
    type->__interface_6.__fp_get_ChildCount = (int(*)(void*))Panel__Fuse_Navigation_INavigationPanel_get_ChildCount;
    type->__interface_6.__fp_get_ActualSize = (::app::Uno::Float2(*)(void*))::app::Fuse::Elements::Element__get_ActualSize;
    type->__interface_6.__fp_add_ChildAdded = (void(*)(void*, ::uDelegate*))Panel__add_ChildAdded;
    type->__interface_6.__fp_remove_ChildAdded = (void(*)(void*, ::uDelegate*))Panel__remove_ChildAdded;
    type->__interface_6.__fp_add_ChildRemoved = (void(*)(void*, ::uDelegate*))Panel__add_ChildRemoved;
    type->__interface_6.__fp_remove_ChildRemoved = (void(*)(void*, ::uDelegate*))Panel__remove_ChildRemoved;
    type->__interface_6.__fp_add_Placed = (void(*)(void*, ::uDelegate*))::app::Fuse::Elements::Element__add_Placed;
    type->__interface_6.__fp_remove_Placed = (void(*)(void*, ::uDelegate*))::app::Fuse::Elements::Element__remove_Placed;
    type->__interface_6.__fp_add_Update = (void(*)(void*, ::uDelegate*))::app::Fuse::Node__add_Update;
    type->__interface_6.__fp_remove_Update = (void(*)(void*, ::uDelegate*))::app::Fuse::Node__remove_Update;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Panel__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Panel__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Panel__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Panel__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Panel__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Panel__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Panel__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Panel__uType, __interface_7));

    type->SetStrongRefs(
        "_appearance", offsetof(Panel, _appearance),
        "_children", offsetof(Panel, _children),
        "_elementBatcher", offsetof(Panel, _elementBatcher),
        "_layout", offsetof(Panel, _layout),
        "_zOrder", offsetof(Panel, _zOrder),
        "ChildAdded", offsetof(Panel, ChildAdded),
        "ChildRemoved", offsetof(Panel, ChildRemoved),
        "ZOrderChanged", offsetof(Panel, ZOrderChanged));

    return type;
}

void Panel___ObjInit_3(Panel* __this)
{
    ::app::Fuse::Controls::Control___ObjInit_2(__this);
}

void Panel___TypeInit_3(::uStatic* __this)
{
    Panel__AppearanceProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Panel__Fuse_Node__New_2(NULL, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Panel__typeof(), (const void*)Panel__OnAppearanceChanged), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Panel__Fuse_Node__typeof(), (const void*)Panel__SetAppearance), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Panel__Fuse_Node__typeof(), (const void*)Panel__GetAppearance));
    Panel__LayoutProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__New_2(NULL, ::app::Fuse::Layouts::Layouts__Default, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Panel__typeof(), (const void*)Panel__OnLayoutChanged), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Panel__Fuse_Layouts_Layout__typeof(), (const void*)Panel__SetLayout), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Panel__Fuse_Layouts_Layout__typeof(), (const void*)Panel__GetLayout));
}

void Panel__add_ChildAdded(Panel* __this, ::uDelegate* value)
{
    __this->ChildAdded = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ChildAdded, (::uDelegate*)value), ::app::Uno::EventHandler__Fuse_Node__typeof());
}

void Panel__add_ChildRemoved(Panel* __this, ::uDelegate* value)
{
    __this->ChildRemoved = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ChildRemoved, (::uDelegate*)value), ::app::Uno::EventHandler__Fuse_Node__typeof());
}

void Panel__add_ZOrderChanged(Panel* __this, ::uDelegate* value)
{
    __this->ZOrderChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ZOrderChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Panel__AddStyleChild(Panel* __this, ::app::Fuse::Node* child)
{
    ::uPtr< ::app::Fuse::Node*>(child)->AddedByStyle(true);
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(__this->Children()), child);
}

void Panel__ArrangePaddingBox(Panel* __this, ::app::Uno::Float2 size)
{
    if (__this->HasChildren())
    {
        ::uPtr< ::app::Fuse::Layouts::Layout*>(__this->Layout())->ArrangePaddingBox(__this->Children(), __this->Padding(), size);
    }

    ::app::Fuse::Elements::Element__ArrangePaddingBox(__this, size);
}

void Panel__BeginRemoveChild(Panel* __this, ::app::Fuse::Node* child)
{
    ::app::Fuse::Controls::BeginRemoveArgsImpl* args = ::app::Fuse::Controls::BeginRemoveArgsImpl__New_2(NULL, child, __this);
    ::uPtr< ::app::Fuse::Node*>(child)->OnBeginRemove((::app::Fuse::BeginRemoveArgs*)args);

    if (::uPtr< ::app::Fuse::Controls::BeginRemoveArgsImpl*>(args)->HasSubscribers())
    {
        __this->InvalidateLayout(2);
        return;
    }

    __this->EndRemoveChild(child);
}

void Panel__BringToFront(Panel* __this, ::app::Fuse::Node* item)
{
    if (!__this->HasChildren())
    {
        return;
    }

    int mx = ::uPtr< ::app::Fuse::Node*>(item)->ZOffset;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Node enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->ZOrder())->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Node* c = enum_123.Current();

        if (::uPtr< ::app::Fuse::Node*>(c)->ZLayer == ::uPtr< ::app::Fuse::Node*>(item)->ZLayer)
        {
            mx = ::app::Uno::Math__Max_2(NULL, mx, ::uPtr< ::app::Fuse::Node*>(c)->ZOffset);
        }
    }

    item->ZOffset = mx + 1;
    item->ZOffsetFixed = true;
    __this->_elementBatchValid = false;
    __this->SoftInvalidateZOrder(false);
}

::app::Uno::Rect Panel__CalcRenderBounds(Panel* __this)
{
    ::app::Uno::Rect r = ::app::Fuse::Elements::Element__CalcRenderBounds(__this);

    if (__this->HasChildren())
    {
        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())); i++)
        {
            r = ::app::Uno::Rect__Union(NULL, r, ::uPtr< ::app::Fuse::Node*>(::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(__this->Children()), i))->CalcRenderBoundsInParentSpace());
        }
    }

    return r;
}

void Panel__EmitZOrderChanged(Panel* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ZOrderChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ZOrderChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void Panel__EndRemoveChild(Panel* __this, ::app::Fuse::Node* child)
{
    ::app::Uno::Collections::ICollection__Fuse_Node::Remove(::uPtr< ::uObject*>(__this->Children()), child);
}

void Panel__EnsureSortedZOrder(Panel* __this)
{
    if (__this->_sortedZOrder && __this->_nodeZOrders)
    {
        return;
    }

    if (!__this->_nodeZOrders)
    {
        ::app::Fuse::Layouts::Layout__AssignZOrder(NULL, __this->Children());
        __this->_nodeZOrders = true;
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->ZOrder())->Sort(::uNewDelegateNonVirt(::app::Uno::Comparison__Fuse_Node__typeof(), (const void*)Panel__ZOrderComparator, __this));
    __this->_sortedZOrder = true;
}

bool Panel__FastTrackDrawWithOpacity(Panel* __this, ::app::Fuse::DrawContext* dc)
{
    if (__this->HasChildren())
    {
        return false;
    }

    if (__this->Background() == NULL)
    {
        return true;
    }

    __this->DrawBackground(dc, __this->Opacity());
    return true;
}

void Panel__Fuse_Navigation_INavigationPanel_AddChildAt(Panel* __this, int index, ::app::Fuse::Node* n)
{
    ::app::Uno::Collections::IList__Fuse_Node::Insert(::uPtr< ::uObject*>(__this->Children()), index, n);
}

int Panel__Fuse_Navigation_INavigationPanel_get_ChildCount(Panel* __this)
{
    return __this->HasChildren() ? ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())) : 0;
}

::app::Fuse::Node* Panel__Fuse_Navigation_INavigationPanel_GetChild(Panel* __this, int index)
{
    return ((index < 0) || (index >= ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())))) ? (::app::Fuse::Node*)NULL : ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(__this->Children()), index);
}

bool Panel__Fuse_Navigation_INavigationPanel_IsPage(Panel* __this, ::app::Fuse::Node* child)
{
    return ::app::Fuse::Layouts::Layout__GetLayoutRole(NULL, child) == 0;
}

void Panel__Fuse_Navigation_INavigationPanel_RemoveChild(Panel* __this, ::app::Fuse::Node* child)
{
    ::app::Uno::Collections::ICollection__Fuse_Node::Remove(::uPtr< ::uObject*>(__this->Children()), child);
}

void Panel__Fuse_Triggers_IAddRemove_Add(Panel* __this, ::app::Fuse::Node* n)
{
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(__this->Children()), n);
}

void Panel__Fuse_Triggers_IAddRemove_Remove(Panel* __this, ::app::Fuse::Node* n)
{
    __this->BeginRemoveChild(n);
}

::app::Fuse::Node* Panel__get_Appearance(Panel* __this)
{
    return __this->_appearance;
}

::uObject* Panel__get_Children(Panel* __this)
{
    if (__this->_children == NULL)
    {
        __this->_children = (::uObject*)::app::Uno::Collections::ObservableList__Fuse_Node__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)Panel__ListChildAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)Panel__ListChildRemoved, __this));
    }

    return __this->_children;
}

bool Panel__get_HasChildren(Panel* __this)
{
    return (__this->_children != NULL) && (::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->_children)) > 0);
}

::app::Fuse::Layouts::Layout* Panel__get_Layout(Panel* __this)
{
    ::app::Fuse::Layouts::Layout* ind_126 = __this->_layout;
    return (ind_126 != NULL) ? ind_126 : ::app::Fuse::Layouts::Layouts__Default;
}

int Panel__get_SubNodeCount(Panel* __this)
{
    return ::app::Fuse::Node__get_SubNodeCount(__this) + (__this->HasChildren() ? ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())) : 0);
}

::app::Uno::Collections::List__Fuse_Node* Panel__get_ZOrder(Panel* __this)
{
    if (__this->_zOrder == NULL)
    {
        __this->_zOrder = ::app::Uno::Collections::List__Fuse_Node__New_1(NULL);
    }

    return __this->_zOrder;
}

::app::Fuse::Node* Panel__GetAppearance(::uStatic* __this, Panel* c)
{
    return ::uPtr< Panel*>(c)->_appearance;
}

::app::Uno::Float2 Panel__GetContentSize(Panel* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    if (__this->HasChildren())
    {
        return ::uPtr< ::app::Fuse::Layouts::Layout*>(__this->Layout())->GetContentSize(__this->Children(), fillSize, fillSet);
    }

    return ::app::Fuse::Elements::Element__GetContentSize(__this, fillSize, fillSet);
}

::app::Fuse::Layouts::Layout* Panel__GetLayout(::uStatic* __this, Panel* p)
{
    return ::uPtr< Panel*>(p)->_layout;
}

::app::Fuse::Node* Panel__GetSubNode(Panel* __this, int index)
{
    if (index < ::app::Fuse::Node__get_SubNodeCount(__this))
    {
        return ::app::Fuse::Node__GetSubNode(__this, index);
    }

    return ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(__this->Children()), index - ::app::Fuse::Node__get_SubNodeCount(__this));
}

::app::Fuse::Node* Panel__GetZOrderChild(Panel* __this, int index)
{
    __this->EnsureSortedZOrder();
    return ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->ZOrder())->Item(index);
}

void Panel__InvalidateZOrder(Panel* __this)
{
    if (!__this->_nodeZOrders)
    {
        return;
    }

    __this->_nodeZOrders = false;
    __this->SoftInvalidateZOrder(true);
}

int Panel__IsMarginBoxDependent(Panel* __this, ::app::Fuse::Node* child)
{
    return ::uPtr< ::app::Fuse::Layouts::Layout*>(__this->Layout())->IsMarginBoxDependent(child);
}

void Panel__ListChildAdded(Panel* __this, ::app::Fuse::Node* item)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->ZOrder())->Insert(0, item);
    __this->InvalidateZOrder();
    ::uPtr< ::app::Fuse::Node*>(item)->OnAdded((::app::Fuse::Node*)__this);
    __this->_elementBatchValid = false;
    __this->OnChildAdded(item);

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ChildAdded, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ChildAdded)->InvokeVoid< ::uObject*, ::app::Fuse::Node*>((::uObject*)__this, item);
    }
}

void Panel__ListChildRemoved(Panel* __this, ::app::Fuse::Node* child)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->ZOrder())->Remove(child);
    ::uPtr< ::app::Fuse::Node*>(child)->OnRemoved((::app::Fuse::Node*)__this);
    __this->_elementBatchValid = false;
    __this->OnChildRemoved(child);

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ChildRemoved, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ChildRemoved)->InvokeVoid< ::uObject*, ::app::Fuse::Node*>((::uObject*)__this, child);
    }
}

Panel* Panel__New_1(::uStatic* __this)
{
    Panel* inst = (Panel*)::uAllocObject(sizeof(Panel), Panel__typeof());
    inst->_ObjInit_3();
    return inst;
}

void Panel__OnAppearanceChanged(::uStatic* __this, Panel* c)
{
}

void Panel__OnChildAdded(Panel* __this, ::app::Fuse::Node* elm)
{
    __this->InvalidateLayout(2);
}

void Panel__OnChildRemoved(Panel* __this, ::app::Fuse::Node* elm)
{
    __this->InvalidateLayout(2);
}

void Panel__OnDrawControl(Panel* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Fuse::Controls::Control__OnDrawControl(__this, dc);

    if (!__this->HasChildren())
    {
        return;
    }

    if (!__this->ShouldBatch())
    {
        if (__this->_elementBatcher != NULL)
        {
            __this->_elementBatcher = NULL;
        }

        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())); ++i)
        {
            ::uPtr< ::app::Fuse::Node*>(__this->GetZOrderChild(i))->Draw(dc);
        }
    }
    else
    {
        if ((__this->_elementBatcher == NULL) || !__this->_elementBatchValid)
        {
            if (__this->_elementBatcher == NULL)
            {
                __this->_elementBatcher = ::app::Fuse::Elements::ElementBatcher__New_1(NULL);
            }
            else
            {
                ::uPtr< ::app::Fuse::Elements::ElementBatcher*>(__this->_elementBatcher)->RemoveAllElements();
            }

            for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())); ++i)
            {
                ::uPtr< ::app::Fuse::Elements::ElementBatcher*>(__this->_elementBatcher)->AddElement(__this->GetZOrderChild(i));
            }

            __this->_elementBatchValid = true;
        }

        ::uPtr< ::app::Fuse::Elements::ElementBatcher*>(__this->_elementBatcher)->Draw(dc);
    }
}

void Panel__OnHitTestChildren(Panel* __this, ::app::Fuse::HitTestContext* htc)
{
    if (__this->HasChildren())
    {
        for (int i = ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())) - 1; i >= 0; --i)
        {
            ::uPtr< ::app::Fuse::Node*>(__this->GetZOrderChild(i))->HitTest(htc);
        }
    }

    ::app::Fuse::Elements::Element__OnHitTestChildren(__this, htc);
}

void Panel__OnInvalidateLayout(Panel* __this)
{
    ::app::Fuse::Elements::Element__OnInvalidateLayout(__this);

    if (__this->HasChildren())
    {
        __this->InvalidateZOrder();
    }
}

void Panel__OnLayoutChanged(::uStatic* __this, Panel* p)
{
    ::uPtr< Panel*>(p)->InvalidateLayout(2);
}

void Panel__OnResetStyle(Panel* __this)
{
    if (__this->HasChildren())
    {
        __this->RemoveStyleChildren();
    }

    ::app::Fuse::Elements::Element__OnResetStyle(__this);
}

void Panel__OnRooted(Panel* __this)
{
    if (__this->_layout != NULL)
    {
        ::uPtr< ::app::Fuse::Layouts::Layout*>(__this->_layout)->AddSubscriber((::app::Fuse::Node*)__this);
    }

    ::app::Fuse::Controls::Control__OnRooted(__this);
}

void Panel__OnUnrooted(Panel* __this)
{
    if (__this->_layout != NULL)
    {
        ::uPtr< ::app::Fuse::Layouts::Layout*>(__this->_layout)->RemoveSubscriber((::app::Fuse::Node*)__this);
    }

    ::app::Fuse::Controls::Control__OnUnrooted(__this);
}

void Panel__remove_ChildAdded(Panel* __this, ::uDelegate* value)
{
    __this->ChildAdded = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ChildAdded, (::uDelegate*)value), ::app::Uno::EventHandler__Fuse_Node__typeof());
}

void Panel__remove_ChildRemoved(Panel* __this, ::uDelegate* value)
{
    __this->ChildRemoved = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ChildRemoved, (::uDelegate*)value), ::app::Uno::EventHandler__Fuse_Node__typeof());
}

void Panel__remove_ZOrderChanged(Panel* __this, ::uDelegate* value)
{
    __this->ZOrderChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ZOrderChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Panel__RemoveStyleChildren(Panel* __this)
{
    for (int i = ::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())) - 1; i >= 0; --i)
    {
        ::app::Fuse::Node* n = ::app::Uno::Collections::IList__Fuse_Node::Item(::uPtr< ::uObject*>(__this->Children()), i);

        if (::uPtr< ::app::Fuse::Node*>(n)->AddedByStyle())
        {
            ::app::Uno::Collections::ICollection__Fuse_Node::Remove(::uPtr< ::uObject*>(__this->Children()), n);
        }
    }
}

void Panel__SendToBack(Panel* __this, ::app::Fuse::Node* item)
{
    if (!__this->HasChildren())
    {
        return;
    }

    int mn = ::uPtr< ::app::Fuse::Node*>(item)->ZOffset;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Node enum_124 = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->ZOrder())->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Fuse::Node* c = enum_124.Current();

        if (::uPtr< ::app::Fuse::Node*>(c)->ZLayer == ::uPtr< ::app::Fuse::Node*>(item)->ZLayer)
        {
            mn = ::app::Uno::Math__Min_5(NULL, mn, ::uPtr< ::app::Fuse::Node*>(c)->ZOffset);
        }
    }

    item->ZOffset = mn - 1;
    item->ZOffsetFixed = true;
    __this->_elementBatchValid = false;
    __this->SoftInvalidateZOrder(false);
}

void Panel__set_Appearance(Panel* __this, ::app::Fuse::Node* value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Panel__Fuse_Node*>(Panel__AppearanceProperty)->Set(__this, value);
}

void Panel__set_Layout(Panel* __this, ::app::Fuse::Layouts::Layout* value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout*>(Panel__LayoutProperty)->Set(__this, value);
}

void Panel__SetAppearance(::uStatic* __this, Panel* c, ::app::Fuse::Node* a)
{
    ::app::Fuse::Diagnostics__Deprecated(NULL, ::uGetConstString("Use `Layer=\"Background\"` instead of setting the appearance on a Panel"), (::uObject*)c, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno"), 2028, ::uGetConstString("SetAppearance"));

    if (::uPtr< Panel*>(c)->_appearance != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Node::Remove(::uPtr< ::uObject*>(::uPtr< Panel*>(c)->Children()), a);
    }

    c->_appearance = a;

    if (c->_appearance != NULL)
    {
        ::app::Fuse::Layouts::Layout__SetLayer(NULL, a, 0);
        ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< Panel*>(c)->Children()), a);
    }
}

void Panel__SetLayout(::uStatic* __this, Panel* p, ::app::Fuse::Layouts::Layout* value)
{
    if (::uPtr< Panel*>(p)->IsRooted() && (::uPtr< Panel*>(p)->_layout != NULL))
    {
        ::uPtr< ::app::Fuse::Layouts::Layout*>(::uPtr< Panel*>(p)->_layout)->RemoveSubscriber((::app::Fuse::Node*)p);
    }

    p->_layout = value;

    if (p->IsRooted() && (p->_layout != NULL))
    {
        ::uPtr< ::app::Fuse::Layouts::Layout*>(p->_layout)->AddSubscriber((::app::Fuse::Node*)p);
    }
}

bool Panel__ShouldBatch(Panel* __this)
{
    if (::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())) < 10)
    {
        return false;
    }

    int batchable = 0;

    for (::uObject* enum_125 = ::app::Uno::Collections::IEnumerable__Fuse_Node::GetEnumerator(::uPtr< ::uObject*>(__this->Children())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
    {
        ::app::Fuse::Node* node = ::app::Uno::Collections::IEnumerator__Fuse_Node::Current(::uPtr< ::uObject*>(enum_125));

        if (::app::Fuse::Elements::ElementBatcher__ShouldBatchElement(NULL, node))
        {
            batchable++;
        }
    }

    return batchable > (::app::Uno::Collections::ICollection__Fuse_Node::Count(::uPtr< ::uObject*>(__this->Children())) / 2);
}

void Panel__SoftInvalidateZOrder(Panel* __this, bool force)
{
    if (!__this->_sortedZOrder && !force)
    {
        return;
    }

    __this->_sortedZOrder = false;
    __this->InvalidateVisual();

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ZOrderChanged, NULL))
    {
        ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Panel__EmitZOrderChanged, __this));
    }
}

int Panel__ZOrderComparator(Panel* __this, ::app::Fuse::Node* a, ::app::Fuse::Node* b)
{
    if (::uPtr< ::app::Fuse::Node*>(a)->ZLayer != ::uPtr< ::app::Fuse::Node*>(b)->ZLayer)
    {
        return ::uPtr< ::app::Fuse::Node*>(a)->ZLayer - ::uPtr< ::app::Fuse::Node*>(b)->ZLayer;
    }

    return ::uPtr< ::app::Fuse::Node*>(a)->ZOffset - ::uPtr< ::app::Fuse::Node*>(b)->ZOffset;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Path__uType* Path__typeof()
{
    static ::uStaticStrong<Path__uType*> type;
    if (type != NULL) return type;

    type = (Path__uType*)::uAllocClassType(sizeof(Path__uType), "Fuse.Controls.Path", false, 8, 2, 0);

    type->SetBaseType(::app::Fuse::Controls::Shape__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Path__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Path__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Path__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Path__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Path__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Path__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Path__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Path__uType, __interface_7));

    type->SetStrongRefs(
        "_geometry", offsetof(Path, _geometry),
        "sizing", offsetof(Path, sizing));

    return type;
}

void Path___ObjInit_5(Path* __this)
{
    __this->sizing = ::app::Fuse::Internal::SizingContainer__New_1(NULL);
    __this->_fitMode = 2;
    __this->_scaleMode = 1;
    __this->_geometry = ::app::Fuse::Drawing::PathGeometry__New_1(NULL);
    ::app::Fuse::Controls::Shape___ObjInit_4(__this);
}

::uString* Path__get_Data(Path* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->Geometry())->ToString();
}

int Path__get_FillRule(Path* __this)
{
    return __this->_fillRule;
}

int Path__get_FitMode(Path* __this)
{
    return __this->_fitMode;
}

::app::Fuse::Drawing::PathGeometry* Path__get_Geometry(Path* __this)
{
    return __this->_geometry;
}

int Path__get_ScaleMode(Path* __this)
{
    return __this->_scaleMode;
}

::app::Fuse::Internal::SizingContainer* Path__get_Sizing(Path* __this)
{
    return __this->sizing;
}

Path* Path__New_2(::uStatic* __this)
{
    Path* inst = (Path*)::uAllocObject(sizeof(Path), Path__typeof());
    inst->_ObjInit_5();
    return inst;
}

void Path__set_Data(Path* __this, ::uString* value)
{
    __this->Geometry(::app::Fuse::Drawing::PathGeometry__Parse(NULL, value));
}

void Path__set_FillRule(Path* __this, int value)
{
    __this->_fillRule = value;
    __this->OnShapeChanged();
}

void Path__set_FitMode(Path* __this, int value)
{
    if (value != __this->_fitMode)
    {
        __this->_fitMode = value;
        __this->OnShapeChanged();
    }
}

void Path__set_Geometry(Path* __this, ::app::Fuse::Drawing::PathGeometry* value)
{
    __this->_geometry = value;
    __this->OnShapeChanged();
}

void Path__set_ScaleMode(Path* __this, int value)
{
    if (__this->_scaleMode != value)
    {
        __this->_scaleMode = value;
        __this->OnShapeChanged();
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* PathScaleMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Controls.PathScaleMode", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Pre", 0LL,
        "Post", 1LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Placeholder__uType* Placeholder__typeof()
{
    static ::uStaticStrong<Placeholder__uType*> type;
    if (type != NULL) return type;

    type = (Placeholder__uType*)::uAllocClassType(sizeof(Placeholder__uType), "Fuse.Controls.Placeholder", false, 6, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::ContentControl__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Placeholder__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Placeholder__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Placeholder__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Placeholder__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Placeholder__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Placeholder__uType, __interface_5));

    type->SetStrongRefs(
        "_Target", offsetof(Placeholder, _Target));

    return type;
}

void Placeholder__AcquireTarget(Placeholder* __this)
{
    if (__this->Target() == NULL)
    {
        return;
    }

    if (__this->Content() == __this->Target())
    {
        return;
    }

    __this->DataContext(::uPtr< ::app::Fuse::Node*>(__this->Target())->DataContext());
    Placeholder* oldParent = ::uAs< Placeholder*>(::uPtr< ::app::Fuse::Node*>(__this->Target())->Parent(), Placeholder__typeof());

    if (oldParent == NULL)
    {
        return;
    }

    ::uPtr< Placeholder*>(oldParent)->PrepareLayoutChange();
    oldParent->Content(NULL);
    __this->Content(__this->Target());
}

::app::Fuse::Node* Placeholder__get_Target(Placeholder* __this)
{
    return __this->_Target;
}

void Placeholder__set_Target(Placeholder* __this, ::app::Fuse::Node* value)
{
    __this->_Target = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*> PlainTextEdit__NativeEditProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*> PlainTextEdit__NativeTextProperty;

PlainTextEdit__uType* PlainTextEdit__typeof()
{
    static ::uStaticStrong<PlainTextEdit__uType*> type;
    if (type != NULL) return type;

    type = (PlainTextEdit__uType*)::uAllocClassType(sizeof(PlainTextEdit__uType), "Fuse.Controls.PlainTextEdit", false, 8, 3, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))PlainTextEdit__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))PlainTextEdit__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(PlainTextEdit__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(PlainTextEdit__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(PlainTextEdit__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(PlainTextEdit__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(PlainTextEdit__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(PlainTextEdit__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(PlainTextEdit__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(PlainTextEdit__uType, __interface_7));

    type->SetStrongRefs(
        "_nativeEdit", offsetof(PlainTextEdit, _nativeEdit),
        "_nativeText", offsetof(PlainTextEdit, _nativeText),
        "_nativeViewHost", offsetof(PlainTextEdit, _nativeViewHost));

    return type;
}

void PlainTextEdit___ObjInit_4(PlainTextEdit* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
    ::app::Fuse::Input::Focus__SetDelegator(NULL, (::app::Fuse::Node*)__this, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusDelegator__typeof(), (const void*)PlainTextEdit__ForwardFocusNode, __this));
    __this->HitTestMode(6);
}

void PlainTextEdit___TypeInit_4(::uStatic* __this)
{
    PlainTextEdit__NativeEditProperty = ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__New_1(NULL, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_PlainTextEdit__typeof(), (const void*)PlainTextEdit__OnFactoryChanged));
    PlainTextEdit__NativeTextProperty = ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__New_1(NULL, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_PlainTextEdit__typeof(), (const void*)PlainTextEdit__OnFactoryChanged));
}

::app::Fuse::Node* PlainTextEdit__ForwardFocusNode(PlainTextEdit* __this)
{
    __this->SetupEdit();
    return __this->_nativeEdit;
}

::uObject* PlainTextEdit__get_NativeEdit(PlainTextEdit* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*>(PlainTextEdit__NativeEditProperty)->Get(__this);
}

::uObject* PlainTextEdit__get_NativeText(PlainTextEdit* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*>(PlainTextEdit__NativeTextProperty)->Get(__this);
}

PlainTextEdit* PlainTextEdit__New_2(::uStatic* __this)
{
    PlainTextEdit* inst = (PlainTextEdit*)::uAllocObject(sizeof(PlainTextEdit), PlainTextEdit__typeof());
    inst->_ObjInit_4();
    return inst;
}

void PlainTextEdit__OnFactoryChanged(::uStatic* __this, PlainTextEdit* pte)
{
    if (!::uPtr< PlainTextEdit*>(pte)->IsLocalRooted())
    {
        return;
    }

    if (::uPtr< PlainTextEdit*>(pte)->_textMode)
    {
        ::uPtr< PlainTextEdit*>(pte)->SetupText();
    }
    else
    {
        pte->SetupEdit();
    }
}

void PlainTextEdit__OnLostFocus(PlainTextEdit* __this, ::uObject* s, ::uObject* a)
{
    ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)PlainTextEdit__SetupText, __this));
}

void PlainTextEdit__OnRooted(PlainTextEdit* __this)
{
    ::app::Fuse::Controls::Panel__OnRooted(__this);
    __this->SetupText();
}

void PlainTextEdit__OnUnrooted(PlainTextEdit* __this)
{
    ::app::Fuse::Controls::Panel__OnUnrooted(__this);
}

void PlainTextEdit__set_NativeEdit(PlainTextEdit* __this, ::uObject* value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*>(PlainTextEdit__NativeEditProperty)->Set(__this, value);
}

void PlainTextEdit__set_NativeText(PlainTextEdit* __this, ::uObject* value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*>(PlainTextEdit__NativeTextProperty)->Set(__this, value);
}

void PlainTextEdit__SetupEdit(PlainTextEdit* __this)
{
    if (__this->_nativeText != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Node::Remove(::uPtr< ::uObject*>(__this->Children()), __this->_nativeText);
        __this->_nativeText = NULL;
    }

    __this->_textMode = false;

    if ((__this->NativeEdit() == NULL) || (__this->_nativeViewHost != NULL))
    {
        return;
    }

    __this->_nativeViewHost = ::app::Fuse::Controls::NativeViewHost__New_2(NULL);
    __this->_nativeEdit = ::uAs< ::app::Fuse::Node*>(::app::Uno::UX::IFactory::New_1(::uPtr< ::uObject*>(__this->NativeEdit())), ::app::Fuse::Node__typeof());
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Controls::NativeViewHost*>(__this->_nativeViewHost)->Children()), __this->_nativeEdit);
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler(__this->_nativeEdit, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)PlainTextEdit__OnLostFocus, __this));
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(__this->Children()), (::app::Fuse::Node*)__this->_nativeViewHost);
}

void PlainTextEdit__SetupText(PlainTextEdit* __this)
{
    if ((__this->NativeText() == NULL) && (__this->NativeEdit() != NULL))
    {
        __this->SetupEdit();
        return;
    }

    if (__this->_nativeViewHost != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Node::Remove(::uPtr< ::uObject*>(__this->Children()), (::app::Fuse::Node*)__this->_nativeViewHost);
        __this->_nativeViewHost = NULL;
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler(__this->_nativeEdit, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)PlainTextEdit__OnLostFocus, __this));
    }

    __this->_textMode = true;

    if ((__this->NativeText() == NULL) || (__this->_nativeText != NULL))
    {
        return;
    }

    __this->_nativeText = ::uAs< ::app::Fuse::Node*>(::app::Uno::UX::IFactory::New_1(::uPtr< ::uObject*>(__this->NativeText())), ::app::Fuse::Node__typeof());
    ::app::Uno::Collections::ICollection__Fuse_Node::Add(::uPtr< ::uObject*>(__this->Children()), __this->_nativeText);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double*> RangeControl__MaximumProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double*> RangeControl__MinimumProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double*> RangeControl__ValueProperty;

RangeControl__uType* RangeControl__typeof()
{
    static ::uStaticStrong<RangeControl__uType*> type;
    if (type != NULL) return type;

    type = (RangeControl__uType*)::uAllocClassType(sizeof(RangeControl__uType), "Fuse.Controls.RangeControl", false, 9, 2, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());
    type->__interface_8.__fp_get_Progress = (double(*)(void*))RangeControl__get_Progress;
    type->__interface_8.__fp_add_ProgressChanged = (void(*)(void*, ::uDelegate*))RangeControl__add_ProgressChanged;
    type->__interface_8.__fp_remove_ProgressChanged = (void(*)(void*, ::uDelegate*))RangeControl__remove_ProgressChanged;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(RangeControl__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(RangeControl__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(RangeControl__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(RangeControl__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(RangeControl__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(RangeControl__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(RangeControl__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(RangeControl__uType, __interface_7),
        ::app::Fuse::Triggers::IProgress__typeof(), offsetof(RangeControl__uType, __interface_8));

    type->SetStrongRefs(
        "ProgressChanged", offsetof(RangeControl, ProgressChanged),
        "ValueChanged", offsetof(RangeControl, ValueChanged));

    return type;
}

void RangeControl___TypeInit_4(::uStatic* __this)
{
    RangeControl__MinimumProperty = ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double__New_1(NULL, 0.0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_RangeControl__typeof(), (const void*)RangeControl__OnRangeChanged));
    RangeControl__MaximumProperty = ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double__New_1(NULL, 100.0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_RangeControl__typeof(), (const void*)RangeControl__OnRangeChanged));
    RangeControl__ValueProperty = ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double__New_2(NULL, 0.0, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_RangeControl__double__typeof(), (const void*)RangeControl__SetValue), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_RangeControl__double__typeof(), (const void*)RangeControl__GetValue));
}

void RangeControl__add_ProgressChanged(RangeControl* __this, ::uDelegate* value)
{
    __this->ProgressChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ProgressChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

double RangeControl__ClampToRange(RangeControl* __this, double v)
{
    return ::app::Uno::Math__Min_10(NULL, ::app::Uno::Math__Max_7(NULL, __this->Minimum(), v), __this->Maximum());
}

double RangeControl__get_Maximum(RangeControl* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double*>(RangeControl__MaximumProperty)->Get(__this);
}

double RangeControl__get_Minimum(RangeControl* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double*>(RangeControl__MinimumProperty)->Get(__this);
}

double RangeControl__get_Progress(RangeControl* __this)
{
    return (__this->Value() - __this->Minimum()) / (__this->Maximum() - __this->Minimum());
}

double RangeControl__get_RelativeValue(RangeControl* __this)
{
    return (__this->_value - __this->Minimum()) / (__this->Maximum() - __this->Minimum());
}

double RangeControl__get_Value(RangeControl* __this)
{
    return __this->_value;
}

double RangeControl__GetValue(::uStatic* __this, RangeControl* rc)
{
    return ::uPtr< RangeControl*>(rc)->_value;
}

void RangeControl__OnProgressChanged(RangeControl* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ProgressChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ProgressChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void RangeControl__OnRangeChanged(::uStatic* __this, RangeControl* rc)
{
    ::uPtr< RangeControl*>(rc)->SetValue_1(::uPtr< RangeControl*>(rc)->Value(), NULL);
    rc->OnProgressChanged();
}

void RangeControl__OnValueChanged(RangeControl* __this, double value, ::uObject* origin)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ValueChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ValueChanged)->InvokeVoid< ::uObject*, ::app::Uno::UX::ValueChangedArgs__double*>((::uObject*)__this, (::app::Uno::UX::ValueChangedArgs__double*)::app::Fuse::Scripting::DoubleChangedArgs__New_3(NULL, value, origin));
    }

    __this->OnProgressChanged();
}

void RangeControl__remove_ProgressChanged(RangeControl* __this, ::uDelegate* value)
{
    __this->ProgressChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ProgressChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void RangeControl__set_Maximum(RangeControl* __this, double value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double*>(RangeControl__MaximumProperty)->Set(__this, value);
}

void RangeControl__set_Minimum(RangeControl* __this, double value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double*>(RangeControl__MinimumProperty)->Set(__this, value);
}

void RangeControl__set_Progress(RangeControl* __this, double value)
{
    if (__this->Progress() != value)
    {
        __this->Value((value * (__this->Maximum() - __this->Minimum())) + __this->Minimum());
    }
}

void RangeControl__set_RelativeValue(RangeControl* __this, double value)
{
    __this->Value((value * (__this->Maximum() - __this->Minimum())) + __this->Minimum());
}

void RangeControl__set_Value(RangeControl* __this, double value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double*>(RangeControl__ValueProperty)->Set(__this, value);
}

void RangeControl__SetInternal(RangeControl* __this, double value, ::uObject* origin)
{
    double v = __this->ClampToRange(value);

    if (v != __this->_value)
    {
        __this->_value = v;
        __this->OnValueChanged(v, origin);
    }
}

void RangeControl__SetValue(::uStatic* __this, RangeControl* rc, double value)
{
    ::uPtr< RangeControl*>(rc)->SetInternal(value, NULL);
}

void RangeControl__SetValue_1(RangeControl* __this, double value, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_RangeControl__double*>(RangeControl__ValueProperty)->SetLocalState(__this);
    __this->SetInternal(value, origin);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Rectangle__float4*> Rectangle__CornerRadiusProperty;

Rectangle__uType* Rectangle__typeof()
{
    static ::uStaticStrong<Rectangle__uType*> type;
    if (type != NULL) return type;

    type = (Rectangle__uType*)::uAllocClassType(sizeof(Rectangle__uType), "Fuse.Controls.Rectangle", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Shape__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Rectangle__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Rectangle__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Rectangle__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Rectangle__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Rectangle__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Rectangle__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Rectangle__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Rectangle__uType, __interface_7));

    return type;
}

void Rectangle___ObjInit_5(Rectangle* __this)
{
    ::app::Fuse::Controls::Shape___ObjInit_4(__this);
}

void Rectangle___TypeInit_5(::uStatic* __this)
{
    Rectangle__CornerRadiusProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Rectangle__float4__New_1(NULL, ::app::Uno::Float4__New_3(NULL, 0.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Rectangle__typeof(), (const void*)Rectangle__OnCornerRadiusChanged));
}

::app::Uno::Float4 Rectangle__get_CornerRadius(Rectangle* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Rectangle__float4*>(Rectangle__CornerRadiusProperty)->Get(__this);
}

Rectangle* Rectangle__New_2(::uStatic* __this)
{
    Rectangle* inst = (Rectangle*)::uAllocObject(sizeof(Rectangle), Rectangle__typeof());
    inst->_ObjInit_5();
    return inst;
}

void Rectangle__OnCornerRadiusChanged(::uStatic* __this, Rectangle* r)
{
    ::uPtr< Rectangle*>(r)->OnShapeChanged();
}

void Rectangle__set_CornerRadius(Rectangle* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Rectangle__float4*>(Rectangle__CornerRadiusProperty)->Set(__this, value);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RegularPolygon__uType* RegularPolygon__typeof()
{
    static ::uStaticStrong<RegularPolygon__uType*> type;
    if (type != NULL) return type;

    type = (RegularPolygon__uType*)::uAllocClassType(sizeof(RegularPolygon__uType), "Fuse.Controls.RegularPolygon", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Shape__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(RegularPolygon__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(RegularPolygon__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(RegularPolygon__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(RegularPolygon__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(RegularPolygon__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(RegularPolygon__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(RegularPolygon__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(RegularPolygon__uType, __interface_7));

    return type;
}

int RegularPolygon__get_Sides(RegularPolygon* __this)
{
    return __this->_sides;
}

void RegularPolygon__set_Sides(RegularPolygon* __this, int value)
{
    if (value == __this->_sides)
    {
        return;
    }

    __this->_sides = value;
    __this->OnShapeChanged();
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ScrollPropertyChangedArgs__uType* ScrollPropertyChangedArgs__typeof()
{
    static ::uStaticStrong<ScrollPropertyChangedArgs__uType*> type;
    if (type != NULL) return type;

    type = (ScrollPropertyChangedArgs__uType*)::uAllocClassType(sizeof(ScrollPropertyChangedArgs__uType), "Fuse.Controls.ScrollPropertyChangedArgs", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ScrollPropertyChangedArgs, _Origin));

    return type;
}

void ScrollPropertyChangedArgs___ObjInit_1(ScrollPropertyChangedArgs* __this, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Origin(origin);
}

::uObject* ScrollPropertyChangedArgs__get_Origin(ScrollPropertyChangedArgs* __this)
{
    return __this->_Origin;
}

ScrollPropertyChangedArgs* ScrollPropertyChangedArgs__New_2(::uStatic* __this, ::uObject* origin)
{
    ScrollPropertyChangedArgs* inst = (ScrollPropertyChangedArgs*)::uAllocObject(sizeof(ScrollPropertyChangedArgs), ScrollPropertyChangedArgs__typeof());
    inst->_ObjInit_1(origin);
    return inst;
}

void ScrollPropertyChangedArgs__set_Origin(ScrollPropertyChangedArgs* __this, ::uObject* value)
{
    __this->_Origin = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ScrollPropertyChangedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Controls.ScrollPropertyChangedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Controls::ScrollPropertyChangedArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections*> ScrollView__AllowedScrollDirectionsProperty;

ScrollView__uType* ScrollView__typeof()
{
    static ::uStaticStrong<ScrollView__uType*> type;
    if (type != NULL) return type;

    type = (ScrollView__uType*)::uAllocClassType(sizeof(ScrollView__uType), "Fuse.Controls.ScrollView", false, 6, 4, 0);

    type->SetBaseType(::app::Fuse::Controls::ContentControl__typeof());
    type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2))ScrollView__ArrangePaddingBox;
    type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))ScrollView__GetContentSize;
    type->__fp_OnApplyStyle = (void(*)(::app::Fuse::Node*, ::uObject*))ScrollView__OnApplyStyle;
    type->__fp_OnContentChanged = (void(*)(::app::Fuse::Controls::ContentControl*, ::app::Fuse::Node*, ::app::Fuse::Node*))ScrollView__OnContentChanged;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ScrollView__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(ScrollView__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(ScrollView__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(ScrollView__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(ScrollView__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(ScrollView__uType, __interface_5));

    type->SetStrongRefs(
        "_scroller", offsetof(ScrollView, _scroller),
        "_scrollTranslation", offsetof(ScrollView, _scrollTranslation),
        "ScrollPositionChanged", offsetof(ScrollView, ScrollPositionChanged),
        "ScrollPropertyChanged", offsetof(ScrollView, ScrollPropertyChanged));

    return type;
}

void ScrollView___TypeInit_3(::uStatic* __this)
{
    ScrollView__AllowedScrollDirectionsProperty = ::app::Fuse::StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__New_2(NULL, 12, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_ScrollView__typeof(), (const void*)::app::Fuse::Node__InvalidateLayout_1), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__typeof(), (const void*)ScrollView__SetAllowedScrollDirections), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__typeof(), (const void*)ScrollView__GetAllowedScrollDirections));
}

void ScrollView__add_ScrollPropertyChanged(ScrollView* __this, ::uDelegate* value)
{
    __this->ScrollPropertyChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ScrollPropertyChanged, (::uDelegate*)value), ::app::Fuse::Controls::ScrollPropertyChangedHandler__typeof());
}

void ScrollView__ArrangePaddingBox(ScrollView* __this, ::app::Uno::Float2 size)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();

    if (__this->Content_1() == NULL)
    {
        __this->_cacheContentMarginSize = ::app::Uno::Float2__New_1(NULL, 0.0f);
    }
    else
    {
        size = ::app::Uno::Float2__op_Subtraction_2(NULL, size, ::app::Uno::Float2__op_Addition_2(NULL, (ind_123 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y)), (ind_124 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_124.Z, ind_124.W))));
        __this->_cacheContentMarginSize = ::uPtr< ::app::Fuse::Elements::Element*>(__this->Content_1())->ArrangeMarginBox((ind_125 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_125.X, ind_125.Y)), size, 3);
    }

    ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)ScrollView__UpdateScrollPosition, __this));
}

::app::Uno::Float2 ScrollView__ConstrainExtent(ScrollView* __this, ::app::Uno::Float2 t)
{
    if (__this->AllowedScrollDirections() == 3)
    {
        t.Y = 0.0f;
    }
    else if (__this->AllowedScrollDirections() == 12)
    {
        t.X = 0.0f;
    }

    return t;
}

int ScrollView__get_AllowedScrollDirections(ScrollView* __this)
{
    return __this->_allowedScrollDirections;
}

::app::Fuse::Elements::Element* ScrollView__get_Content_1(ScrollView* __this)
{
    return ::uAs< ::app::Fuse::Elements::Element*>(::app::Fuse::Controls::ContentControl__get_Content(__this), ::app::Fuse::Elements::Element__typeof());
}

bool ScrollView__get_KeepFocusInView(ScrollView* __this)
{
    return __this->_keepFocusInView;
}

::app::Uno::Float2 ScrollView__get_MaxScroll(ScrollView* __this)
{
    ::app::Uno::Float4 ind_128 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_129 = ::app::Uno::Float4();

    if (__this->Content_1() == NULL)
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    return __this->ConstrainExtent(::app::Uno::Math__Max_10(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, __this->_cacheContentMarginSize, ::uPtr< ::app::Fuse::Elements::Element*>(__this->Content_1())->ActualPosition()), (ind_128 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_128.X, ind_128.Y))), (ind_129 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_129.Z, ind_129.W))), __this->ActualSize()), ::app::Uno::Float2__New_1(NULL, 0.0f)));
}

::app::Uno::Float2 ScrollView__get_MinScroll(ScrollView* __this)
{
    ::app::Uno::Float4 ind_130 = ::app::Uno::Float4();

    if (__this->Content_1() == NULL)
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    return __this->ConstrainExtent(::app::Uno::Math__Min_13(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(__this->Content_1())->ActualPosition(), (ind_130 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_130.X, ind_130.Y)))));
}

::app::Uno::Float2 ScrollView__get_ScrollPosition(ScrollView* __this)
{
    return ::app::Uno::Float2__op_UnaryNegation(NULL, ::uPtr< ::app::Fuse::Translation*>(__this->_scrollTranslation)->XY());
}

bool ScrollView__get_SnapMaxTransform(ScrollView* __this)
{
    return __this->_snapMaxTransform;
}

bool ScrollView__get_SnapMinTransform(ScrollView* __this)
{
    return __this->_snapMinTransform;
}

bool ScrollView__get_UserScroll(ScrollView* __this)
{
    return __this->_userScroll;
}

int ScrollView__GetAllowedScrollDirections(::uStatic* __this, ScrollView* sv)
{
    return ::uPtr< ScrollView*>(sv)->_allowedScrollDirections;
}

::app::Uno::Float2 ScrollView__GetContentSize(ScrollView* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::app::Uno::Float4 ind_126 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_127 = ::app::Uno::Float4();

    if (__this->Content_1() != NULL)
    {
        fillSize = ::app::Uno::Float2__op_Subtraction_2(NULL, fillSize, ::app::Uno::Float2__op_Addition_2(NULL, (ind_126 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_126.X, ind_126.Y)), (ind_127 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_127.Z, ind_127.W))));
        ::app::Uno::Float2 r = ::uPtr< ::app::Fuse::Elements::Element*>(__this->Content_1())->GetMarginSize(fillSize, fillSet);
        return r;
    }

    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

::app::Uno::Float2 ScrollView__GetNodeScrollPosition(ScrollView* __this, ::app::Fuse::Node* n)
{
    if ((n == NULL) || (__this->Content_1() == NULL))
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    ::app::Uno::Float4x4 trans = ::uPtr< ::app::Fuse::Node*>(n)->GetTransformTo((::app::Fuse::Node*)__this->Content_1());
    ::app::Uno::Float4 local = ::app::Uno::Vector__Transform_1(NULL, ::app::Uno::Float3__New_1(NULL, 0.0f), trans);
    ::app::Fuse::Elements::Element* elm = ::uAs< ::app::Fuse::Elements::Element*>(n, ::app::Fuse::Elements::Element__typeof());

    if (elm == NULL)
    {
        return ::app::Uno::Float2__New_2(NULL, local.X, local.Y);
    }

    return ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__New_2(NULL, local.X, local.Y), ::app::Uno::Float2__op_Division_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(elm)->ActualSize(), 2.0f)), ::app::Uno::Float2__op_Division_1(NULL, __this->ActualSize(), 2.0f));
}

void ScrollView__Goto(ScrollView* __this, ::app::Uno::Float2 position)
{
    if (__this->_scroller == NULL)
    {
        __this->ScrollPosition(::app::Uno::Math__Min_13(NULL, __this->MaxScroll(), ::app::Uno::Math__Max_10(NULL, __this->MinScroll(), __this->ScrollPosition())));
    }
    else
    {
        ::uPtr< ::app::Fuse::Gestures::Scroller*>(__this->_scroller)->Goto(position);
    }
}

void ScrollView__OnApplyStyle(ScrollView* __this, ::uObject* target)
{
    ::app::Fuse::Node__OnApplyStyle(__this, target);
    ::app::Fuse::Elements::Element* elm = __this->Content_1();

    if (target != elm)
    {
        return;
    }

    int align = 0;
    bool setWidth = false;
    bool setHeight = false;

    if (__this->AllowedScrollDirections() == 15)
    {
        align = 5;
        setWidth = true;
        setHeight = true;
    }
    else if (__this->AllowedScrollDirections() == 3)
    {
        align = 1;
        setWidth = true;
    }
    else if (__this->AllowedScrollDirections() == 12)
    {
        align = 4;
        setHeight = true;
    }

    if (!::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MaxWidthProperty)->HasValue(elm) && setWidth)
    {
        ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MaxWidthProperty)->SetStyle_1(elm, FLT_INF, 1);
    }

    if (!::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MaxHeightProperty)->HasValue(elm) && setHeight)
    {
        ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MaxHeightProperty)->SetStyle_1(elm, FLT_INF, 1);
    }

    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment*>(::app::Fuse::Elements::Element__AlignmentProperty)->HasValue(elm))
    {
        return;
    }

    bool setAlign = false;

    if ((setWidth && !::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->HasValue(elm)) && !::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MinWidthProperty)->HasValue(elm))
    {
        ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MinWidthProperty)->SetStyle_1(elm, 100.0f, 1);
        setAlign = true;
    }

    if ((setHeight && !::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->HasValue(elm)) && !::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MinHeightProperty)->HasValue(elm))
    {
        ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MinHeightProperty)->SetStyle_1(elm, 100.0f, 1);
        setAlign = true;
    }

    if (setAlign)
    {
        ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment*>(::app::Fuse::Elements::Element__AlignmentProperty)->SetStyle(elm, align);
    }
}

void ScrollView__OnContentChanged(ScrollView* __this, ::app::Fuse::Node* oldContent, ::app::Fuse::Node* newContent)
{
    ::app::Fuse::Controls::ContentControl__OnContentChanged(__this, oldContent, newContent);

    if (oldContent != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Transform::Remove(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(oldContent)->Transforms()), (::app::Fuse::Transform*)__this->_scrollTranslation);
    }

    if (newContent != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Transform::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(newContent)->Transforms()), (::app::Fuse::Transform*)__this->_scrollTranslation);
    }
}

void ScrollView__OnScrollPositionChanged(ScrollView* __this, ::uObject* origin)
{
    ::uDelegate* handler = __this->ScrollPositionChanged;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }

    __this->OnScrollPropertyChanged(origin);
}

void ScrollView__OnScrollPropertyChanged(ScrollView* __this, ::uObject* origin)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ScrollPropertyChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ScrollPropertyChanged)->InvokeVoid< ::uObject*, ::app::Fuse::Controls::ScrollPropertyChangedArgs*>((::uObject*)__this, ::app::Fuse::Controls::ScrollPropertyChangedArgs__New_2(NULL, origin));
    }
}

void ScrollView__remove_ScrollPropertyChanged(ScrollView* __this, ::uDelegate* value)
{
    __this->ScrollPropertyChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ScrollPropertyChanged, (::uDelegate*)value), ::app::Fuse::Controls::ScrollPropertyChangedHandler__typeof());
}

void ScrollView__set_AllowedScrollDirections(ScrollView* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections*>(ScrollView__AllowedScrollDirectionsProperty)->Set(__this, value);
}

void ScrollView__set_Content_1(ScrollView* __this, ::app::Fuse::Elements::Element* value)
{
    ::app::Fuse::Controls::ContentControl__set_Content(__this, (::app::Fuse::Node*)value);
}

void ScrollView__set_KeepFocusInView(ScrollView* __this, bool value)
{
    if (__this->_keepFocusInView != value)
    {
        __this->_keepFocusInView = value;
        __this->OnScrollPropertyChanged((::uObject*)__this);
    }
}

void ScrollView__set_ScrollPosition(ScrollView* __this, ::app::Uno::Float2 value)
{
    __this->SetScrollPosition(value, (::uObject*)__this);
}

void ScrollView__set_SnapMaxTransform(ScrollView* __this, bool value)
{
    __this->_snapMaxTransform = value;
}

void ScrollView__set_SnapMinTransform(ScrollView* __this, bool value)
{
    __this->_snapMinTransform = value;
}

void ScrollView__set_UserScroll(ScrollView* __this, bool value)
{
    __this->_userScroll = value;
    __this->OnScrollPropertyChanged((::uObject*)__this);
}

void ScrollView__SetAllowedScrollDirections(::uStatic* __this, ScrollView* sv, int value)
{
    ::uPtr< ScrollView*>(sv)->_allowedScrollDirections = value;
    sv->OnScrollPropertyChanged((::uObject*)sv);
}

void ScrollView__SetScrollPosition(ScrollView* __this, ::app::Uno::Float2 position, ::uObject* origin)
{
    position = __this->ConstrainExtent(position);
    ::uPtr< ::app::Fuse::Translation*>(__this->_scrollTranslation)->Vector(::app::Uno::Float3__New_4(NULL, ::app::Uno::Float2__op_UnaryNegation(NULL, position), 0.0f));
    __this->OnScrollPositionChanged(origin);
}

void ScrollView__UpdateScrollPosition(ScrollView* __this)
{
    if (__this->_scroller != NULL)
    {
        ::uPtr< ::app::Fuse::Gestures::Scroller*>(__this->_scroller)->CheckLimits();
    }
    else
    {
        __this->ScrollPosition(::app::Uno::Math__Min_13(NULL, __this->MaxScroll(), ::app::Uno::Math__Max_10(NULL, __this->MinScroll(), __this->ScrollPosition())));
    }

    __this->OnScrollPositionChanged((::uObject*)__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush*> Shape__FillProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Shape__float*> Shape__SmoothnessProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke*> Shape__StrokeProperty;

Shape__uType* Shape__typeof()
{
    static ::uStaticStrong<Shape__uType*> type;
    if (type != NULL) return type;

    type = (Shape__uType*)::uAllocClassType(sizeof(Shape__uType), "Fuse.Controls.Shape", false, 8, 5, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());
    type->__fp_CalcRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Elements::Element*))Shape__CalcRenderBounds;
    type->__fp_OnResetStyle = (void(*)(::app::Fuse::Node*))Shape__OnResetStyle;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Shape__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Shape__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Shape__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Shape__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Shape__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Shape__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Shape__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Shape__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Shape__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Shape__uType, __interface_7));

    type->SetStrongRefs(
        "_fills", offsetof(Shape, _fills),
        "_strokes", offsetof(Shape, _strokes),
        "_styleFills", offsetof(Shape, _styleFills),
        "_styleStrokes", offsetof(Shape, _styleStrokes),
        "ShapeChanged", offsetof(Shape, ShapeChanged));

    return type;
}

void Shape___ObjInit_4(Shape* __this)
{
    __this->_smoothness = 1.0f;
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
}

void Shape___TypeInit_4(::uStatic* __this)
{
    Shape__FillProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__New_2(NULL, NULL, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Shape__Fuse_Drawing_Brush__typeof(), (const void*)Shape__SetFill), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Shape__Fuse_Drawing_Brush__typeof(), (const void*)Shape__GetFill));
    Shape__StrokeProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__New_2(NULL, NULL, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Shape__Fuse_Drawing_Stroke__typeof(), (const void*)Shape__SetStroke), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Shape__Fuse_Drawing_Stroke__typeof(), (const void*)Shape__GetStroke));
    Shape__SmoothnessProperty = ::app::Fuse::StyleProperty__Fuse_Controls_Shape__float__New_2(NULL, 1.0f, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Shape__typeof(), (const void*)Shape__OnSmoothnessChanged), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_Shape__float__typeof(), (const void*)Shape__SetSmoothness), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_Shape__float__typeof(), (const void*)Shape__GetSmoothness));
}

void Shape__add_ShapeChanged(Shape* __this, ::uDelegate* value)
{
    __this->ShapeChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ShapeChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

::app::Uno::Rect Shape__CalcRenderBounds(Shape* __this)
{
    ::app::Uno::Rect r = ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());

    if (__this->HasStrokes())
    {
        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke::GetEnumerator(::uPtr< ::uObject*>(__this->Strokes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Fuse::Drawing::Stroke* stroke = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke::Current(::uPtr< ::uObject*>(enum_123));
            float b = ::uPtr< ::app::Fuse::Drawing::Stroke*>(stroke)->Offset() + ::uPtr< ::app::Fuse::Drawing::Stroke*>(stroke)->Width();

            if (b > 0.0f)
            {
                r = ::app::Uno::Rect__Inflate_1(NULL, r, b);
            }
        }
    }

    r = ::app::Uno::Rect__Inflate_1(NULL, r, __this->Smoothness() - 1.0f);
    return r;
}

float Shape__get_DrawCost_1(Shape* __this)
{
    float cost = 0.0f;

    if (__this->HasFills())
    {
        cost = cost + (float)::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Count(::uPtr< ::uObject*>(__this->Fills()));
    }

    if (__this->HasStrokes())
    {
        cost = cost + (float)::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Count(::uPtr< ::uObject*>(__this->Strokes()));
    }

    return cost;
}

::uObject* Shape__get_Fills(Shape* __this)
{
    if (__this->_fills == NULL)
    {
        __this->_fills = ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Brush__typeof(), (const void*)Shape__OnFillAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Brush__typeof(), (const void*)Shape__OnFillRemoved, __this));
    }

    return (::uObject*)__this->_fills;
}

bool Shape__get_HasFills(Shape* __this)
{
    return (__this->_fills != NULL) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Count() > 0);
}

bool Shape__get_HasStrokes(Shape* __this)
{
    return (__this->_strokes != NULL) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(__this->_strokes)->Count() > 0);
}

float Shape__get_Smoothness(Shape* __this)
{
    return __this->_smoothness;
}

::uObject* Shape__get_Strokes(Shape* __this)
{
    if (__this->_strokes == NULL)
    {
        __this->_strokes = ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)Shape__OnStrokeAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)Shape__OnStrokeRemoved, __this));
    }

    return (::uObject*)__this->_strokes;
}

::app::Fuse::Drawing::Brush* Shape__GetFill(::uStatic* __this, Shape* s)
{
    if ((::uPtr< Shape*>(s)->_fills == NULL) || (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(::uPtr< Shape*>(s)->_fills)->Count() == 0))
    {
        return NULL;
    }
    else
    {
        return ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(::uPtr< Shape*>(s)->_fills)->Item(0);
    }
}

float Shape__GetSmoothness(::uStatic* __this, Shape* s)
{
    return ::uPtr< Shape*>(s)->_smoothness;
}

::app::Fuse::Drawing::Stroke* Shape__GetStroke(::uStatic* __this, Shape* s)
{
    if ((::uPtr< Shape*>(s)->_strokes == NULL) || (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(::uPtr< Shape*>(s)->_strokes)->Count() == 0))
    {
        return NULL;
    }

    return ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(::uPtr< Shape*>(s)->_strokes)->Item(0);
}

void Shape__OnFillAdded(Shape* __this, ::app::Fuse::Drawing::Brush* f)
{
    if (__this->IsLocalRooted() && (f != NULL))
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(f)->Pin();
        __this->AddDrawCost(1.0);
    }

    if (::uIs(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))->add_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Shape__OnShadingChanged_1, __this));
    }

    __this->OnShadingChanged_1();
}

void Shape__OnFillRemoved(Shape* __this, ::app::Fuse::Drawing::Brush* f)
{
    if (__this->IsLocalRooted() && (f != NULL))
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(f)->Unpin();
        __this->RemoveDrawCost(1.0);
    }

    if (::uIs(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))->remove_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Shape__OnShadingChanged_1, __this));
    }

    __this->OnShadingChanged_1();
}

void Shape__OnResetStyle(Shape* __this)
{
    if (__this->_styleFills != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->_styleFills)->Count(); i++)
        {
            ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Remove(::uPtr< ::uObject*>(__this->Fills()), ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->_styleFills)->Item(i));
        }

        __this->_styleFills = NULL;
    }

    if (__this->_styleStrokes != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->_styleStrokes)->Count(); i++)
        {
            ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Remove(::uPtr< ::uObject*>(__this->Strokes()), ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->_styleStrokes)->Item(i));
        }

        __this->_styleStrokes = NULL;
    }

    ::app::Fuse::Controls::Panel__OnResetStyle(__this);
}

void Shape__OnRooted(Shape* __this)
{
    ::app::Fuse::Controls::Panel__OnRooted(__this);

    if (__this->HasStrokes())
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(__this->_strokes)->Count(); ++i)
        {
            ::uPtr< ::app::Fuse::Drawing::Stroke*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(__this->_strokes)->Item(i))->Pin();
        }
    }

    if (__this->HasFills())
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Count(); ++i)
        {
            ::uPtr< ::app::Fuse::Drawing::Brush*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Item(i))->Pin();
        }
    }

    __this->AddDrawCost((double)__this->DrawCost_1());
}

void Shape__OnShadingChanged_1(Shape* __this)
{
    __this->OnShapeChanged();
}

void Shape__OnShapeChanged(Shape* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ShapeChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ShapeChanged)->InvokeVoid();
    }
}

void Shape__OnSmoothnessChanged(::uStatic* __this, Shape* s)
{
    ::uPtr< Shape*>(s)->InvalidateVisual();
    s->InvalidateRenderBounds();
}

void Shape__OnStrokeAdded(Shape* __this, ::app::Fuse::Drawing::Stroke* s)
{
    if (__this->IsLocalRooted() && (s != NULL))
    {
        ::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->Pin();
        __this->AddDrawCost(1.0);
    }

    ::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->add_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Shape__OnShadingChanged_1, __this));
    s->add_StrokeChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)Shape__OnStrokeChanged, __this));
    __this->OnStrokeChanged(s);
}

void Shape__OnStrokeChanged(Shape* __this, ::app::Fuse::Drawing::Stroke* s)
{
    __this->OnShapeChanged();
}

void Shape__OnStrokeRemoved(Shape* __this, ::app::Fuse::Drawing::Stroke* s)
{
    if (__this->IsLocalRooted() && (s != NULL))
    {
        ::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->Unpin();
        __this->RemoveDrawCost(1.0);
    }

    ::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->remove_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Shape__OnShadingChanged_1, __this));
    s->remove_StrokeChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)Shape__OnStrokeChanged, __this));
    __this->OnStrokeChanged(s);
}

void Shape__OnUnrooted(Shape* __this)
{
    ::app::Fuse::Controls::Panel__OnUnrooted(__this);

    if (__this->HasStrokes())
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(__this->_strokes)->Count(); ++i)
        {
            ::uPtr< ::app::Fuse::Drawing::Stroke*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(__this->_strokes)->Item(i))->Unpin();
        }
    }

    if (__this->HasFills())
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Count(); ++i)
        {
            ::uPtr< ::app::Fuse::Drawing::Brush*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Item(i))->Unpin();
        }
    }

    __this->RemoveDrawCost((double)__this->DrawCost_1());
}

void Shape__PrepareDraw(Shape* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize)
{
    if (__this->HasFills())
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Count(); ++i)
        {
            ::uPtr< ::app::Fuse::Drawing::Brush*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Item(i))->Prepare(dc, canvasSize);
        }
    }

    if (__this->HasStrokes())
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(__this->_strokes)->Count(); ++i)
        {
            ::uPtr< ::app::Fuse::Drawing::Stroke*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(__this->_strokes)->Item(i))->Prepare(dc, canvasSize);
        }
    }
}

void Shape__remove_ShapeChanged(Shape* __this, ::uDelegate* value)
{
    __this->ShapeChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ShapeChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

void Shape__set_Smoothness(Shape* __this, float value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_Shape__float*>(Shape__SmoothnessProperty)->Set(__this, value);
}

void Shape__SetFill(::uStatic* __this, Shape* s, ::app::Fuse::Drawing::Brush* value)
{
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Clear(::uPtr< ::uObject*>(::uPtr< Shape*>(s)->Fills()));
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(s->Fills()), value);
}

void Shape__SetSmoothness(::uStatic* __this, Shape* s, float value)
{
    ::uPtr< Shape*>(s)->_smoothness = value;
}

void Shape__SetStroke(::uStatic* __this, Shape* s, ::app::Fuse::Drawing::Stroke* value)
{
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Clear(::uPtr< ::uObject*>(::uPtr< Shape*>(s)->Strokes()));
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Add(::uPtr< ::uObject*>(s->Strokes()), value);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Slider__uType* Slider__typeof()
{
    static ::uStaticStrong<Slider__uType*> type;
    if (type != NULL) return type;

    type = (Slider__uType*)::uAllocClassType(sizeof(Slider__uType), "Fuse.Controls.Slider", false, 9, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::RangeControl__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Slider__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Slider__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Slider__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Slider__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Slider__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Slider__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Slider__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Slider__uType, __interface_7),
        ::app::Fuse::Triggers::IProgress__typeof(), offsetof(Slider__uType, __interface_8));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__float*> StackPanel__ItemSpacingProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation*> StackPanel__OrientationProperty;

StackPanel__uType* StackPanel__typeof()
{
    static ::uStaticStrong<StackPanel__uType*> type;
    if (type != NULL) return type;

    type = (StackPanel__uType*)::uAllocClassType(sizeof(StackPanel__uType), "Fuse.Controls.StackPanel", false, 8, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(StackPanel__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(StackPanel__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(StackPanel__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(StackPanel__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(StackPanel__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(StackPanel__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(StackPanel__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(StackPanel__uType, __interface_7));

    type->SetStrongRefs(
        "_stackLayout", offsetof(StackPanel, _stackLayout));

    return type;
}

void StackPanel___ObjInit_4(StackPanel* __this)
{
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
    __this->Layout((::app::Fuse::Layouts::Layout*)(__this->_stackLayout = ::app::Fuse::Layouts::StackLayout__New_1(NULL)));
}

void StackPanel___TypeInit_4(::uStatic* __this)
{
    StackPanel__OrientationProperty = ::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__New_1(NULL, 1, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_StackPanel__typeof(), (const void*)StackPanel__OnOrientationChanged));
    StackPanel__ItemSpacingProperty = ::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__float__New_1(NULL, 0.0f, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_StackPanel__typeof(), (const void*)StackPanel__OnItemSpacingChanged));
}

float StackPanel__get_ItemSpacing(StackPanel* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__float*>(StackPanel__ItemSpacingProperty)->Get(__this);
}

int StackPanel__get_Orientation(StackPanel* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation*>(StackPanel__OrientationProperty)->Get(__this);
}

StackPanel* StackPanel__New_2(::uStatic* __this)
{
    StackPanel* inst = (StackPanel*)::uAllocObject(sizeof(StackPanel), StackPanel__typeof());
    inst->_ObjInit_4();
    return inst;
}

void StackPanel__OnItemSpacingChanged(::uStatic* __this, StackPanel* p)
{
    ::uPtr< ::app::Fuse::Layouts::StackLayout*>(::uPtr< StackPanel*>(p)->_stackLayout)->ItemSpacing(::uPtr< StackPanel*>(p)->ItemSpacing());
}

void StackPanel__OnOrientationChanged(::uStatic* __this, StackPanel* p)
{
    ::uPtr< ::app::Fuse::Layouts::StackLayout*>(::uPtr< StackPanel*>(p)->_stackLayout)->Orientation(::uPtr< StackPanel*>(p)->Orientation());
}

void StackPanel__set_ItemSpacing(StackPanel* __this, float value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__float*>(StackPanel__ItemSpacingProperty)->Set(__this, value);
}

void StackPanel__set_Orientation(StackPanel* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation*>(StackPanel__OrientationProperty)->Set(__this, value);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Star__uType* Star__typeof()
{
    static ::uStaticStrong<Star__uType*> type;
    if (type != NULL) return type;

    type = (Star__uType*)::uAllocClassType(sizeof(Star__uType), "Fuse.Controls.Star", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::Shape__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Star__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Star__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Star__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Star__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Star__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Star__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Star__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Star__uType, __interface_7));

    return type;
}

int Star__get_Points(Star* __this)
{
    return __this->_points;
}

float Star__get_Ratio(Star* __this)
{
    return __this->_ratio;
}

float Star__get_RotationDegrees(Star* __this)
{
    return __this->_degrees;
}

float Star__get_RotationRadians(Star* __this)
{
    return (__this->_degrees / 180.0f) * 3.14159274f;
}

float Star__get_RoundRatio(Star* __this)
{
    return __this->_roundRatio;
}

void Star__set_Points(Star* __this, int value)
{
    if (value == __this->_points)
    {
        return;
    }

    __this->_points = value;
    __this->OnShapeChanged();
}

void Star__set_Ratio(Star* __this, float value)
{
    if (value == __this->_ratio)
    {
        return;
    }

    __this->_ratio = value;
    __this->OnShapeChanged();
}

void Star__set_RotationDegrees(Star* __this, float value)
{
    if (value == __this->_degrees)
    {
        return;
    }

    __this->_degrees = value;
    __this->InvalidateVisual();
}

void Star__set_RoundRatio(Star* __this, float value)
{
    if (value == __this->_roundRatio)
    {
        return;
    }

    __this->_roundRatio = value;
    __this->OnShapeChanged();
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Switch__uType* Switch__typeof()
{
    static ::uStaticStrong<Switch__uType*> type;
    if (type != NULL) return type;

    type = (Switch__uType*)::uAllocClassType(sizeof(Switch__uType), "Fuse.Controls.Switch", false, 9, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::ToggleControl__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Switch__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Switch__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Switch__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Switch__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Switch__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Switch__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Switch__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Switch__uType, __interface_7),
        ::app::Fuse::Triggers::IValue__bool__typeof(), offsetof(Switch__uType, __interface_8));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Text__uType* Text__typeof()
{
    static ::uStaticStrong<Text__uType*> type;
    if (type != NULL) return type;

    type = (Text__uType*)::uAllocClassType(sizeof(Text__uType), "Fuse.Controls.Text", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::TextBlock__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Text__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Text__OnUnrooted;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Text__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Text__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Text__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Text__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Text__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Text__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(Text__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(Text__uType, __interface_7));

    return type;
}

void Text___ObjInit_6(Text* __this)
{
    ::app::Fuse::Controls::TextBlock___ObjInit_5(__this);
}

Text* Text__New_2(::uStatic* __this)
{
    Text* inst = (Text*)::uAllocObject(sizeof(Text), Text__typeof());
    inst->_ObjInit_6();
    return inst;
}

void Text__OnRooted(Text* __this)
{
    ::app::Fuse::Controls::Panel__OnRooted(__this);
    __this->AddDrawCost(2.0);
}

void Text__OnUnrooted(Text* __this)
{
    __this->RemoveDrawCost(2.0);
    ::app::Fuse::Controls::Panel__OnUnrooted(__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextBlock__uType* TextBlock__typeof()
{
    static ::uStaticStrong<TextBlock__uType*> type;
    if (type != NULL) return type;

    type = (TextBlock__uType*)::uAllocClassType(sizeof(TextBlock__uType), "Fuse.Controls.TextBlock", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::TextControl__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextBlock__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(TextBlock__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(TextBlock__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(TextBlock__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(TextBlock__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(TextBlock__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(TextBlock__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(TextBlock__uType, __interface_7));

    return type;
}

void TextBlock___ObjInit_5(TextBlock* __this)
{
    ::app::Fuse::Controls::TextControl___ObjInit_4(__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Font*> TextControl__FontProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float*> TextControl__FontSizeProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float*> TextControl__LineSpacingProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment*> TextControl__TextAlignmentProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float4*> TextControl__TextColorProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping*> TextControl__TextWrappingProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__string*> TextControl__ValueProperty;

TextControl__uType* TextControl__typeof()
{
    static ::uStaticStrong<TextControl__uType*> type;
    if (type != NULL) return type;

    type = (TextControl__uType*)::uAllocClassType(sizeof(TextControl__uType), "Fuse.Controls.TextControl", false, 8, 4, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());
    type->__fp_get_RenderValue = TextControl__get_RenderValue;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextControl__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(TextControl__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(TextControl__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(TextControl__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(TextControl__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(TextControl__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(TextControl__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(TextControl__uType, __interface_7));

    type->SetStrongRefs(
        "_value", offsetof(TextControl, _value),
        "TextLayoutPropertyChanged", offsetof(TextControl, TextLayoutPropertyChanged),
        "TextRenderPropertyChanged", offsetof(TextControl, TextRenderPropertyChanged),
        "ValueChanged", offsetof(TextControl, ValueChanged));

    return type;
}

void TextControl___ObjInit_4(TextControl* __this)
{
    __this->_value = ::uGetConstString("");
    ::app::Fuse::Controls::Panel___ObjInit_3(__this);
}

void TextControl___TypeInit_4(::uStatic* __this)
{
    TextControl__ValueProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__string__New_2(NULL, ::uGetConstString(""), NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextControl__string__typeof(), (const void*)TextControl__SetValue), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_TextControl__string__typeof(), (const void*)TextControl__GetValue));
    TextControl__TextWrappingProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__New_1(NULL, 0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextControl__typeof(), (const void*)TextControl__OnTextLayoutPropertyChanged));
    TextControl__LineSpacingProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float__New_1(NULL, 0.0f, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextControl__typeof(), (const void*)TextControl__OnTextLayoutPropertyChanged));
    TextControl__FontSizeProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float__New_1(NULL, 16.0f, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextControl__typeof(), (const void*)TextControl__OnTextLayoutPropertyChanged));
    TextControl__FontProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Font__New_1(NULL, ::app::Fuse::Fonts__get_Fallback(NULL), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextControl__typeof(), (const void*)TextControl__OnTextLayoutPropertyChanged));
    TextControl__TextAlignmentProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__New_1(NULL, 0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextControl__typeof(), (const void*)TextControl__OnTextLayoutPropertyChanged));
    TextControl__TextColorProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float4__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextControl__typeof(), (const void*)TextControl__OnTextRenderPropertyChanged));
}

void TextControl__add_TextLayoutPropertyChanged(TextControl* __this, ::uDelegate* value)
{
    __this->TextLayoutPropertyChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TextLayoutPropertyChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void TextControl__add_TextRenderPropertyChanged(TextControl* __this, ::uDelegate* value)
{
    __this->TextRenderPropertyChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TextRenderPropertyChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void TextControl__add_ValueChanged(TextControl* __this, ::uDelegate* value)
{
    __this->ValueChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ValueChanged, (::uDelegate*)value), ::app::Uno::UX::ValueChangedHandler__string__typeof());
}

::app::Fuse::Font* TextControl__get_Font(TextControl* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Font*>(TextControl__FontProperty)->Get(__this);
}

float TextControl__get_FontSize(TextControl* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float*>(TextControl__FontSizeProperty)->Get(__this);
}

float TextControl__get_LineSpacing(TextControl* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float*>(TextControl__LineSpacingProperty)->Get(__this);
}

::uString* TextControl__get_RenderValue(TextControl* __this)
{
    return __this->Value();
}

int TextControl__get_TextAlignment(TextControl* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment*>(TextControl__TextAlignmentProperty)->Get(__this);
}

::app::Uno::Float4 TextControl__get_TextColor(TextControl* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float4*>(TextControl__TextColorProperty)->Get(__this);
}

int TextControl__get_TextWrapping(TextControl* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping*>(TextControl__TextWrappingProperty)->Get(__this);
}

::uString* TextControl__get_Value(TextControl* __this)
{
    return __this->_value;
}

::uString* TextControl__GetValue(::uStatic* __this, TextControl* t)
{
    return ::uPtr< TextControl*>(t)->_value;
}

void TextControl__OnTextLayoutPropertyChanged(::uStatic* __this, TextControl* t)
{
    ::uPtr< TextControl*>(t)->OnTextLayoutPropertyChanged_1();
}

void TextControl__OnTextLayoutPropertyChanged_1(TextControl* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TextLayoutPropertyChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->TextLayoutPropertyChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void TextControl__OnTextRenderPropertyChanged(::uStatic* __this, TextControl* t)
{
    ::uPtr< TextControl*>(t)->OnTextRenderPropertyChanged_1();
}

void TextControl__OnTextRenderPropertyChanged_1(TextControl* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TextRenderPropertyChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->TextRenderPropertyChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void TextControl__OnValueChanged(TextControl* __this, ::uString* newString, ::uObject* origin)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ValueChanged, NULL))
    {
        ::app::Fuse::Scripting::StringChangedArgs* args = ::app::Fuse::Scripting::StringChangedArgs__New_3(NULL, newString, origin);
        ::uPtr< ::uDelegate*>(__this->ValueChanged)->InvokeVoid< ::uObject*, ::app::Uno::UX::ValueChangedArgs__string*>((::uObject*)__this, (::app::Uno::UX::ValueChangedArgs__string*)args);
    }
}

void TextControl__remove_TextLayoutPropertyChanged(TextControl* __this, ::uDelegate* value)
{
    __this->TextLayoutPropertyChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->TextLayoutPropertyChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void TextControl__remove_TextRenderPropertyChanged(TextControl* __this, ::uDelegate* value)
{
    __this->TextRenderPropertyChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->TextRenderPropertyChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void TextControl__remove_ValueChanged(TextControl* __this, ::uDelegate* value)
{
    __this->ValueChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ValueChanged, (::uDelegate*)value), ::app::Uno::UX::ValueChangedHandler__string__typeof());
}

void TextControl__set_Font(TextControl* __this, ::app::Fuse::Font* value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Font*>(TextControl__FontProperty)->Set(__this, value);
}

void TextControl__set_FontSize(TextControl* __this, float value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float*>(TextControl__FontSizeProperty)->Set(__this, value);
}

void TextControl__set_LineSpacing(TextControl* __this, float value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float*>(TextControl__LineSpacingProperty)->Set(__this, value);
}

void TextControl__set_TextAlignment(TextControl* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment*>(TextControl__TextAlignmentProperty)->Set(__this, value);
}

void TextControl__set_TextColor(TextControl* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__float4*>(TextControl__TextColorProperty)->Set(__this, value);
}

void TextControl__set_TextWrapping(TextControl* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping*>(TextControl__TextWrappingProperty)->Set(__this, value);
}

void TextControl__set_Value(TextControl* __this, ::uString* value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__string*>(TextControl__ValueProperty)->Set(__this, (value != NULL) ? value : ::uGetConstString(""));
}

void TextControl__SetValue(::uStatic* __this, TextControl* t, ::uString* value)
{
    ::uPtr< TextControl*>(t)->_value = value;
    t->OnValueChanged(value, NULL);
}

void TextControl__SetValue_1(TextControl* __this, ::uString* value, ::uObject* origin)
{
    __this->_value = value;
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__string*>(TextControl__ValueProperty)->SetLocalState(__this);
    __this->OnValueChanged(value, origin);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4*> TextInput__CaretColorProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint*> TextInput__InputHintProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool*> TextInput__IsMultilineProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool*> TextInput__IsPasswordProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool*> TextInput__IsReadOnlyProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4*> TextInput__SelectionColorProperty;

TextInput__uType* TextInput__typeof()
{
    static ::uStaticStrong<TextInput__uType*> type;
    if (type != NULL) return type;

    type = (TextInput__uType*)::uAllocClassType(sizeof(TextInput__uType), "Fuse.Controls.TextInput", false, 8, 0, 0);

    type->SetBaseType(::app::Fuse::Controls::TextControl__typeof());
    type->__fp_get_RenderValue = (::uString*(*)(::app::Fuse::Controls::TextControl*))TextInput__get_RenderValue;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(TextInput__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(TextInput__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(TextInput__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(TextInput__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(TextInput__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(TextInput__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(TextInput__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(TextInput__uType, __interface_7));

    return type;
}

void TextInput___TypeInit_5(::uStatic* __this)
{
    TextInput__IsMultilineProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool__New_1(NULL, false, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextInput__typeof(), (const void*)::app::Fuse::Controls::TextControl__OnTextLayoutPropertyChanged));
    TextInput__IsPasswordProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool__New_1(NULL, false, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextInput__typeof(), (const void*)::app::Fuse::Controls::TextControl__OnTextLayoutPropertyChanged));
    TextInput__IsReadOnlyProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool__New_1(NULL, false, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextInput__typeof(), (const void*)::app::Fuse::Controls::TextControl__OnTextRenderPropertyChanged));
    TextInput__InputHintProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__New_1(NULL, 0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextInput__typeof(), (const void*)::app::Fuse::Controls::TextControl__OnTextRenderPropertyChanged));
    TextInput__CaretColorProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextInput__typeof(), (const void*)::app::Fuse::Controls::TextControl__OnTextRenderPropertyChanged));
    TextInput__SelectionColorProperty = ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4__New_1(NULL, ::app::Uno::Float4__New_2(NULL, 0.6f, 0.8f, 1.0f, 0.5f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_TextInput__typeof(), (const void*)::app::Fuse::Controls::TextControl__OnTextRenderPropertyChanged));
}

::app::Uno::Float4 TextInput__get_CaretColor(TextInput* __this)
{
    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4*>(TextInput__CaretColorProperty)->HasValue(__this))
    {
        return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4*>(TextInput__CaretColorProperty)->Get(__this);
    }

    return __this->TextColor();
}

int TextInput__get_InputHint(TextInput* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint*>(TextInput__InputHintProperty)->Get(__this);
}

bool TextInput__get_IsMultiline(TextInput* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool*>(TextInput__IsMultilineProperty)->Get(__this);
}

bool TextInput__get_IsPassword(TextInput* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool*>(TextInput__IsPasswordProperty)->Get(__this);
}

bool TextInput__get_IsReadOnly(TextInput* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool*>(TextInput__IsReadOnlyProperty)->Get(__this);
}

::uString* TextInput__get_RenderValue(TextInput* __this)
{
    if (__this->IsPassword())
    {
        ::uArray* c = ::uNewArray(::app::Uno::Char__typeof(), ::uPtr< ::uString*>(__this->Value())->Length());
        ::uChar replacementChar = 8226;

        for (int i = 0; i < c->Length(); ++i)
        {
            c->Item< ::uChar>(i) = replacementChar;
        }

        return ::uNewStringFromArray(c);
    }

    return __this->Value();
}

::app::Uno::Float4 TextInput__get_SelectionColor(TextInput* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4*>(TextInput__SelectionColorProperty)->Get(__this);
}

void TextInput__set_CaretColor(TextInput* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4*>(TextInput__CaretColorProperty)->Set(__this, value);
}

void TextInput__set_InputHint(TextInput* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint*>(TextInput__InputHintProperty)->Set(__this, value);
}

void TextInput__set_IsMultiline(TextInput* __this, bool value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool*>(TextInput__IsMultilineProperty)->Set(__this, value);
}

void TextInput__set_IsPassword(TextInput* __this, bool value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool*>(TextInput__IsPasswordProperty)->Set(__this, value);
}

void TextInput__set_IsReadOnly(TextInput* __this, bool value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__bool*>(TextInput__IsReadOnlyProperty)->Set(__this, value);
}

void TextInput__set_SelectionColor(TextInput* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextInput__float4*>(TextInput__SelectionColorProperty)->Set(__this, value);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Toggle__uType* Toggle__typeof()
{
    static ::uStaticStrong<Toggle__uType*> type;
    if (type != NULL) return type;

    type = (Toggle__uType*)::uAllocClassType(sizeof(Toggle__uType), "Fuse.Controls.Toggle", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Toggle__Perform;

    type->SetStrongRefs(
        "_Target", offsetof(Toggle, _Target));

    return type;
}

::uObject* Toggle__FindTarget(Toggle* __this, ::app::Fuse::Node* n)
{
    while (n != NULL)
    {
        ::uObject* iv = ::uAs< ::uObject*>(n, ::app::Fuse::Triggers::IValue__bool__typeof());

        if (iv != NULL)
        {
            return iv;
        }

        n = ::uPtr< ::app::Fuse::Node*>(n)->Parent();
    }

    return NULL;
}

::uObject* Toggle__get_Target(Toggle* __this)
{
    return __this->_Target;
}

void Toggle__Perform(Toggle* __this, ::app::Fuse::Node* target)
{
    ::uObject* ind_123 = __this->Target();
    ::uObject* t = (ind_123 != NULL) ? ind_123 : __this->FindTarget(target);

    if (t != NULL)
    {
        ::app::Fuse::Triggers::IValue__bool::Value(::uPtr< ::uObject*>(t), !::app::Fuse::Triggers::IValue__bool::Value(::uPtr< ::uObject*>(t)));
    }
}

void Toggle__set_Target(Toggle* __this, ::uObject* value)
{
    __this->_Target = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_ToggleControl__bool*> ToggleControl__ValueProperty;

ToggleControl__uType* ToggleControl__typeof()
{
    static ::uStaticStrong<ToggleControl__uType*> type;
    if (type != NULL) return type;

    type = (ToggleControl__uType*)::uAllocClassType(sizeof(ToggleControl__uType), "Fuse.Controls.ToggleControl", false, 9, 1, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());
    type->__interface_8.__fp_get_Value = (bool(*)(void*))ToggleControl__get_Value;
    type->__interface_8.__fp_set_Value = (void(*)(void*, bool))ToggleControl__set_Value;
    type->__interface_8.__fp_add_ValueChanged = (void(*)(void*, ::uDelegate*))ToggleControl__add_ValueChanged;
    type->__interface_8.__fp_remove_ValueChanged = (void(*)(void*, ::uDelegate*))ToggleControl__remove_ValueChanged;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ToggleControl__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(ToggleControl__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(ToggleControl__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(ToggleControl__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(ToggleControl__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(ToggleControl__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(ToggleControl__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(ToggleControl__uType, __interface_7),
        ::app::Fuse::Triggers::IValue__bool__typeof(), offsetof(ToggleControl__uType, __interface_8));

    type->SetStrongRefs(
        "ValueChanged", offsetof(ToggleControl, ValueChanged));

    return type;
}

void ToggleControl___TypeInit_4(::uStatic* __this)
{
    ToggleControl__ValueProperty = ::app::Fuse::StyleProperty__Fuse_Controls_ToggleControl__bool__New_2(NULL, false, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Controls_ToggleControl__bool__typeof(), (const void*)ToggleControl__SetValue_1), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Controls_ToggleControl__bool__typeof(), (const void*)ToggleControl__GetValue));
}

void ToggleControl__add_ValueChanged(ToggleControl* __this, ::uDelegate* value)
{
    __this->ValueChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ValueChanged, (::uDelegate*)value), ::app::Uno::UX::ValueChangedHandler__bool__typeof());
}

bool ToggleControl__get_Value(ToggleControl* __this)
{
    return __this->_value;
}

bool ToggleControl__GetValue(::uStatic* __this, ToggleControl* s)
{
    return ::uPtr< ToggleControl*>(s)->_value;
}

void ToggleControl__OnValueChanged(ToggleControl* __this, bool value, ::uObject* origin)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ValueChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ValueChanged)->InvokeVoid< ::uObject*, ::app::Uno::UX::ValueChangedArgs__bool*>((::uObject*)__this, (::app::Uno::UX::ValueChangedArgs__bool*)::app::Fuse::Scripting::BoolChangedArgs__New_3(NULL, value, origin));
    }
}

void ToggleControl__remove_ValueChanged(ToggleControl* __this, ::uDelegate* value)
{
    __this->ValueChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ValueChanged, (::uDelegate*)value), ::app::Uno::UX::ValueChangedHandler__bool__typeof());
}

void ToggleControl__set_Value(ToggleControl* __this, bool value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_ToggleControl__bool*>(ToggleControl__ValueProperty)->Set(__this, value);
}

void ToggleControl__SetValue(ToggleControl* __this, bool value, ::uObject* origin)
{
    __this->_value = value;
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_ToggleControl__bool*>(ToggleControl__ValueProperty)->SetLocalState(__this);
    __this->OnValueChanged(value, origin);
}

void ToggleControl__SetValue_1(::uStatic* __this, ToggleControl* s, bool value)
{
    ::uPtr< ToggleControl*>(s)->_value = value;
    s->OnValueChanged(value, NULL);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WebView__uType* WebView__typeof()
{
    static ::uStaticStrong<WebView__uType*> type;
    if (type != NULL) return type;

    type = (WebView__uType*)::uAllocClassType(sizeof(WebView__uType), "Fuse.Controls.WebView", false, 11, 3, 0);

    type->SetBaseType(::app::Fuse::Controls::Panel__typeof());
    type->__interface_8.__fp_get_Url = (::uString*(*)(void*))WebView__get_Url;
    type->__interface_8.__fp_set_Url = (void(*)(void*, ::uString*))WebView__set_Url;
    type->__interface_8.__fp_get_File = (::app::Uno::UX::FileSource*(*)(void*))WebView__get_File;
    type->__interface_8.__fp_set_File = (void(*)(void*, ::app::Uno::UX::FileSource*))WebView__set_File;
    type->__interface_9.__fp_get_Progress = (double(*)(void*))WebView__get_Progress;
    type->__interface_9.__fp_add_ProgressChanged = (void(*)(void*, ::uDelegate*))WebView__add_ProgressChanged;
    type->__interface_9.__fp_remove_ProgressChanged = (void(*)(void*, ::uDelegate*))WebView__remove_ProgressChanged;
    type->__interface_10.__fp_GoBack = (void(*)(void*))WebView__GoBack;
    type->__interface_10.__fp_GoForward = (void(*)(void*))WebView__GoForward;
    type->__interface_10.__fp_Reload = (void(*)(void*))WebView__Reload;
    type->__interface_10.__fp_Stop = (void(*)(void*))WebView__Stop;
    type->__interface_10.__fp_LoadUrl = (void(*)(void*, ::uString*))WebView__LoadUrl;
    type->__interface_10.__fp_get_CanGoBack = (bool(*)(void*))WebView__get_CanGoBack;
    type->__interface_10.__fp_get_CanGoForward = (bool(*)(void*))WebView__get_CanGoForward;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(WebView__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(WebView__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(WebView__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(WebView__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(WebView__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(WebView__uType, __interface_5),
        ::app::Fuse::Navigation::INavigationPanel__typeof(), offsetof(WebView__uType, __interface_6),
        ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof(), offsetof(WebView__uType, __interface_7),
        ::app::Fuse::Controls::IWebView__typeof(), offsetof(WebView__uType, __interface_8),
        ::app::Fuse::Triggers::IProgress__typeof(), offsetof(WebView__uType, __interface_9),
        ::app::Fuse::Navigation::IWebViewNavgation__typeof(), offsetof(WebView__uType, __interface_10));

    type->SetStrongRefs(
        "_fallbackClient", offsetof(WebView, _fallbackClient),
        "_webViewClient", offsetof(WebView, _webViewClient),
        "ProgressChanged", offsetof(WebView, ProgressChanged));

    return type;
}

void WebView__add_ProgressChanged(WebView* __this, ::uDelegate* value)
{
    __this->ProgressChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ProgressChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

bool WebView__get_CanGoBack(WebView* __this)
{
    return ::app::Fuse::Navigation::IWebViewNavgation::CanGoBack(::uPtr< ::uObject*>(__this->WebViewClient()));
}

bool WebView__get_CanGoForward(WebView* __this)
{
    return ::app::Fuse::Navigation::IWebViewNavgation::CanGoForward(::uPtr< ::uObject*>(__this->WebViewClient()));
}

::app::Uno::UX::FileSource* WebView__get_File(WebView* __this)
{
    return ::app::Fuse::Controls::IWebView::File(::uPtr< ::uObject*>(__this->WebViewClient()));
}

double WebView__get_Progress(WebView* __this)
{
    return ::app::Fuse::Triggers::IProgress::Progress(::uPtr< ::uObject*>(__this->WebViewClient()));
}

::uString* WebView__get_Url(WebView* __this)
{
    return ::app::Fuse::Controls::IWebView::Url(::uPtr< ::uObject*>(__this->WebViewClient()));
}

::uObject* WebView__get_WebViewClient(WebView* __this)
{
    ::uObject* ind_123 = __this->_webViewClient;
    return (ind_123 != NULL) ? ind_123 : __this->_fallbackClient;
}

void WebView__GoBack(WebView* __this)
{
    ::app::Fuse::Navigation::IWebViewNavgation::GoBack(::uPtr< ::uObject*>(__this->WebViewClient()));
}

void WebView__GoForward(WebView* __this)
{
    ::app::Fuse::Navigation::IWebViewNavgation::GoForward(::uPtr< ::uObject*>(__this->WebViewClient()));
}

void WebView__LoadUrl(WebView* __this, ::uString* url)
{
    ::app::Fuse::Navigation::IWebViewNavgation::LoadUrl(::uPtr< ::uObject*>(__this->WebViewClient()), url);
}

void WebView__OnProgressChanged(WebView* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ProgressChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ProgressChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void WebView__Reload(WebView* __this)
{
    ::app::Fuse::Navigation::IWebViewNavgation::Reload(::uPtr< ::uObject*>(__this->WebViewClient()));
}

void WebView__remove_ProgressChanged(WebView* __this, ::uDelegate* value)
{
    __this->ProgressChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ProgressChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void WebView__set_File(WebView* __this, ::app::Uno::UX::FileSource* value)
{
    ::app::Fuse::Controls::IWebView::File(::uPtr< ::uObject*>(__this->WebViewClient()), value);
}

void WebView__set_Url(WebView* __this, ::uString* value)
{
    ::app::Fuse::Controls::IWebView::Url(::uPtr< ::uObject*>(__this->WebViewClient()), value);
}

void WebView__set_WebViewClient(WebView* __this, ::uObject* value)
{
    ::uString* url = ::uGetConstString("about:blank");
    ::app::Uno::UX::FileSource* file = NULL;

    if (__this->_webViewClient != NULL)
    {
        ::app::Fuse::Triggers::IProgress::remove_ProgressChanged(::uPtr< ::uObject*>(__this->_webViewClient), ::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WebView__OnProgressChanged, __this));
        url = ::app::Fuse::Controls::IWebView::Url(::uPtr< ::uObject*>(__this->_webViewClient));
        file = ::app::Fuse::Controls::IWebView::File(::uPtr< ::uObject*>(__this->_webViewClient));
    }

    __this->_webViewClient = (value != NULL) ? value : __this->_fallbackClient;

    if (__this->_webViewClient != NULL)
    {
        ::app::Fuse::Triggers::IProgress::add_ProgressChanged(::uPtr< ::uObject*>(__this->_webViewClient), ::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WebView__OnProgressChanged, __this));
        ::app::Fuse::Controls::IWebView::Url(::uPtr< ::uObject*>(__this->_webViewClient), url);
        ::app::Fuse::Controls::IWebView::File(::uPtr< ::uObject*>(__this->_webViewClient), file);
    }
}

void WebView__Stop(WebView* __this)
{
    ::app::Fuse::Navigation::IWebViewNavgation::Stop(::uPtr< ::uObject*>(__this->WebViewClient()));
}

}}}
