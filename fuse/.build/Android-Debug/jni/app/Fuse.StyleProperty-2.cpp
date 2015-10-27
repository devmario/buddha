#include <app/Fuse.Android.Button.h>
#include <app/Fuse.Controls.Button.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Controls.GraphicsView.h>
#include <app/Fuse.Controls.Grid.h>
#include <app/Fuse.Controls.Image.h>
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
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.CachingMode.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.HitTestMode.h>
#include <app/Fuse.Elements.StretchDirection.h>
#include <app/Fuse.Elements.StretchMode.h>
#include <app/Fuse.Elements.StretchSizing.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Fuse.Elements.Visibility.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.Gestures.ScrollDirections.h>
#include <app/Fuse.iOS.Button.h>
#include <app/Fuse.Layouts.Layout.h>
#include <app/Fuse.Layouts.Orientation.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.PropertyState.h>
#include <app/Fuse.Resources.MemoryPolicy.h>
#include <app/Fuse.Shapes.Rectangle.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Fuse.StyleProperty__Fuse_Android_Button__float4.h>
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
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__bool.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__float.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__float2.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility.h>
#include <app/Fuse.StyleProperty__Fuse_iOS_Button__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Node__bool.h>
#include <app/Fuse.StyleProperty__Fuse_Node__Fuse_Node.h>
#include <app/Fuse.StyleProperty__Fuse_Node__string.h>
#include <app/Fuse.StyleProperty__Fuse_Shapes_Rectangle__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Shapes_Shape__float.h>
#include <app/Fuse.StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush.h>
#include <app/Fuse.StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke.h>
#include <app/Uno.Action__Fuse_Android_Button.h>
#include <app/Uno.Action__Fuse_Android_Button__float4.h>
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
#include <app/Uno.Action__Fuse_Elements_Element.h>
#include <app/Uno.Action__Fuse_Elements_Element__bool.h>
#include <app/Uno.Action__Fuse_Elements_Element__float.h>
#include <app/Uno.Action__Fuse_Elements_Element__float2.h>
#include <app/Uno.Action__Fuse_Elements_Element__float4.h>
#include <app/Uno.Action__Fuse_Elements_Element__Fuse_Elements_Alignment.h>
#include <app/Uno.Action__Fuse_Elements_Element__Fuse_Elements_CachingMode.h>
#include <app/Uno.Action__Fuse_Elements_Element__Fuse_Elements_HitTestMode.h>
#include <app/Uno.Action__Fuse_Elements_Element__Fuse_Elements_Visibility.h>
#include <app/Uno.Action__Fuse_iOS_Button.h>
#include <app/Uno.Action__Fuse_iOS_Button__float4.h>
#include <app/Uno.Action__Fuse_Node.h>
#include <app/Uno.Action__Fuse_Node__bool.h>
#include <app/Uno.Action__Fuse_Node__Fuse_Node.h>
#include <app/Uno.Action__Fuse_Node__string.h>
#include <app/Uno.Action__Fuse_Shapes_Rectangle.h>
#include <app/Uno.Action__Fuse_Shapes_Rectangle__float4.h>
#include <app/Uno.Action__Fuse_Shapes_Shape.h>
#include <app/Uno.Action__Fuse_Shapes_Shape__float.h>
#include <app/Uno.Action__Fuse_Shapes_Shape__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Shapes_Shape__Fuse_Drawing_Stroke.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
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
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.TextInputHint.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.IFactory.h>

namespace app {
namespace Fuse {

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Android_Button__float4__uType* StyleProperty__Fuse_Android_Button__float4__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Android_Button__float4__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Android_Button__float4__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Android_Button__float4__uType), "Fuse.StyleProperty<Fuse.Android.Button,float4>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Android_Button__float4__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Android_Button__float4, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Android_Button__float4, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Android_Button__float4, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Android_Button__float4, _setter));

    return type;
}

void StyleProperty__Fuse_Android_Button__float4___ObjInit_1(StyleProperty__Fuse_Android_Button__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

::app::Uno::Float4 StyleProperty__Fuse_Android_Button__float4__Get(StyleProperty__Fuse_Android_Button__float4* __this, ::app::Fuse::Android::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Uno::Float4, ::app::Fuse::Android::Button*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Android_Button__float4__IsEqual(StyleProperty__Fuse_Android_Button__float4* __this, ::app::Uno::Float4 value, ::app::Uno::Float4 oldValue)
{
    if (::uBox(::app::Uno::Float4__typeof(), value) == ::uBox(::app::Uno::Float4__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float4__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float4__typeof(), value), ::uBox(::app::Uno::Float4__typeof(), oldValue));
}

StyleProperty__Fuse_Android_Button__float4* StyleProperty__Fuse_Android_Button__float4__New_1(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Android_Button__float4* inst = (StyleProperty__Fuse_Android_Button__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Android_Button__float4), StyleProperty__Fuse_Android_Button__float4__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Android_Button__float4__OnChanged(StyleProperty__Fuse_Android_Button__float4* __this, ::app::Fuse::Android::Button* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Android::Button*>(owner);
    }
}

bool StyleProperty__Fuse_Android_Button__float4__Reset(StyleProperty__Fuse_Android_Button__float4* __this, ::app::Fuse::Android::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Android::Button*, ::app::Uno::Float4>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Android_Button__float4__ResetStyle(StyleProperty__Fuse_Android_Button__float4* __this, ::app::Fuse::Android::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Android_Button__float4__ResetStyleFor(StyleProperty__Fuse_Android_Button__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Android::Button__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Android::Button*>((::uObject*)n, ::app::Fuse::Android::Button__typeof()));
    }
}

bool StyleProperty__Fuse_Android_Button__float4__Set(StyleProperty__Fuse_Android_Button__float4* __this, ::app::Fuse::Android::Button* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Uno::Float4 oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Android::Button*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Button__string__uType* StyleProperty__Fuse_Controls_Button__string__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Button__string__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Button__string__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Button__string__uType), "Fuse.StyleProperty<Fuse.Controls.Button,string>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Button__string__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Button__string, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_Button__string, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Button__string, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Button__string, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Button__string, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_Button__string___ObjInit_1(StyleProperty__Fuse_Controls_Button__string* __this, ::uString* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Button__string___ObjInit_2(StyleProperty__Fuse_Controls_Button__string* __this, ::uString* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

StyleProperty__Fuse_Controls_Button__string* StyleProperty__Fuse_Controls_Button__string__New_2(::uStatic* __this, ::uString* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Button__string* inst = (StyleProperty__Fuse_Controls_Button__string*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Button__string), StyleProperty__Fuse_Controls_Button__string__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Button__string__OnChanged(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Controls::Button* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Button*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Button__string__Reset(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Controls::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Button*, ::uString*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_Button__string__ResetStyle(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Controls::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Button__string__ResetStyleFor(StyleProperty__Fuse_Controls_Button__string* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Button__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Button*>((::uObject*)n, ::app::Fuse::Controls::Button__typeof()));
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__uType* StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__uType), "Fuse.StyleProperty<Fuse.Controls.Control,Fuse.Drawing.Brush>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush___ObjInit_1(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush___ObjInit_2(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Fuse::Drawing::Brush* StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__Get(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Control* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Fuse::Drawing::Brush*, ::app::Fuse::Controls::Control*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::app::Fuse::Drawing::Brush*>(res, ::app::Fuse::Drawing::Brush__typeof());
        }
    }
}

bool StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__HasValue(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Control* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__IsEqual(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value, ::app::Fuse::Drawing::Brush* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::app::Fuse::Drawing::Brush*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__New_2(::uStatic* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* inst = (StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush), StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__OnChanged(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Control* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Control*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__Reset(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Control* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Control*, ::app::Fuse::Drawing::Brush*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__ResetStyle(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Control* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__ResetStyleFor(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Control__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Control*>((::uObject*)n, ::app::Fuse::Controls::Control__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush__Set(StyleProperty__Fuse_Controls_Control__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Control* owner, ::app::Fuse::Drawing::Brush* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Fuse::Drawing::Brush* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Control*, ::app::Fuse::Drawing::Brush*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_GraphicsView__float4__uType* StyleProperty__Fuse_Controls_GraphicsView__float4__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_GraphicsView__float4__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_GraphicsView__float4__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_GraphicsView__float4__uType), "Fuse.StyleProperty<Fuse.Controls.GraphicsView,float4>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_GraphicsView__float4__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_GraphicsView__float4, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_GraphicsView__float4, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_GraphicsView__float4, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_GraphicsView__float4, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_GraphicsView__float4___ObjInit_1(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

::app::Uno::Float4 StyleProperty__Fuse_Controls_GraphicsView__float4__Get(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::app::Fuse::Controls::GraphicsView* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Uno::Float4, ::app::Fuse::Controls::GraphicsView*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_GraphicsView__float4__IsEqual(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::app::Uno::Float4 value, ::app::Uno::Float4 oldValue)
{
    if (::uBox(::app::Uno::Float4__typeof(), value) == ::uBox(::app::Uno::Float4__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float4__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float4__typeof(), value), ::uBox(::app::Uno::Float4__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_GraphicsView__float4* StyleProperty__Fuse_Controls_GraphicsView__float4__New_1(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_GraphicsView__float4* inst = (StyleProperty__Fuse_Controls_GraphicsView__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_GraphicsView__float4), StyleProperty__Fuse_Controls_GraphicsView__float4__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Controls_GraphicsView__float4__OnChanged(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::app::Fuse::Controls::GraphicsView* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::GraphicsView*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_GraphicsView__float4__Reset(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::app::Fuse::Controls::GraphicsView* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::GraphicsView*, ::app::Uno::Float4>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_GraphicsView__float4__ResetStyle(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::app::Fuse::Controls::GraphicsView* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_GraphicsView__float4__ResetStyleFor(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::GraphicsView__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::GraphicsView*>((::uObject*)n, ::app::Fuse::Controls::GraphicsView__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_GraphicsView__float4__Set(StyleProperty__Fuse_Controls_GraphicsView__float4* __this, ::app::Fuse::Controls::GraphicsView* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Uno::Float4 oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::GraphicsView*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Grid__float__uType* StyleProperty__Fuse_Controls_Grid__float__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Grid__float__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Grid__float__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Grid__float__uType), "Fuse.StyleProperty<Fuse.Controls.Grid,float>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Grid__float__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Grid__float, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Grid__float, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Grid__float, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Grid__float, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_Grid__float___ObjInit_1(StyleProperty__Fuse_Controls_Grid__float* __this, float defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

float StyleProperty__Fuse_Controls_Grid__float__Get(StyleProperty__Fuse_Controls_Grid__float* __this, ::app::Fuse::Controls::Grid* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< float, ::app::Fuse::Controls::Grid*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< float>(::app::Uno::Float__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_Grid__float__IsEqual(StyleProperty__Fuse_Controls_Grid__float* __this, float value, float oldValue)
{
    if (::uBox(::app::Uno::Float__typeof(), value) == ::uBox(::app::Uno::Float__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float__typeof(), value), ::uBox(::app::Uno::Float__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_Grid__float* StyleProperty__Fuse_Controls_Grid__float__New_1(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_Grid__float* inst = (StyleProperty__Fuse_Controls_Grid__float*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Grid__float), StyleProperty__Fuse_Controls_Grid__float__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Controls_Grid__float__OnChanged(StyleProperty__Fuse_Controls_Grid__float* __this, ::app::Fuse::Controls::Grid* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Grid*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Grid__float__Reset(StyleProperty__Fuse_Controls_Grid__float* __this, ::app::Fuse::Controls::Grid* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Grid*, float>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_Grid__float__ResetStyle(StyleProperty__Fuse_Controls_Grid__float* __this, ::app::Fuse::Controls::Grid* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Grid__float__ResetStyleFor(StyleProperty__Fuse_Controls_Grid__float* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Grid__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Grid*>((::uObject*)n, ::app::Fuse::Controls::Grid__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Grid__float__Set(StyleProperty__Fuse_Controls_Grid__float* __this, ::app::Fuse::Controls::Grid* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    float oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Grid*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__uType* StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__uType), "Fuse.StyleProperty<Fuse.Controls.Image,Fuse.Elements.Alignment>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment___ObjInit_1(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment___ObjInit_2(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

int StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__Get(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Controls::Image*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Elements::Alignment__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__IsEqual(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), value) == ::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), value), ::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* inst = (StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment), StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__OnChanged(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, ::app::Fuse::Controls::Image* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Image*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__Reset(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__ResetStyle(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__ResetStyleFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Image__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Image*>((::uObject*)n, ::app::Fuse::Controls::Image__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment__Set(StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment* __this, ::app::Fuse::Controls::Image* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__uType* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__uType), "Fuse.StyleProperty<Fuse.Controls.Image,Fuse.Elements.StretchDirection>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection___ObjInit_1(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection___ObjInit_2(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

int StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__Get(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Controls::Image*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Elements::StretchDirection__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__IsEqual(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Elements::StretchDirection__typeof(), value) == ::uBox< int>(::app::Fuse::Elements::StretchDirection__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Elements::StretchDirection__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::StretchDirection__typeof(), value), ::uBox< int>(::app::Fuse::Elements::StretchDirection__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* inst = (StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection), StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__OnChanged(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Controls::Image* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Image*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__Reset(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__ResetStyle(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__ResetStyleFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Image__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Image*>((::uObject*)n, ::app::Fuse::Controls::Image__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection__Set(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection* __this, ::app::Fuse::Controls::Image* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::StretchDirection__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__uType* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__uType), "Fuse.StyleProperty<Fuse.Controls.Image,Fuse.Elements.StretchMode>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode___ObjInit_1(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode___ObjInit_2(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

int StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__Get(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Controls::Image*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Elements::StretchMode__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__IsEqual(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Elements::StretchMode__typeof(), value) == ::uBox< int>(::app::Fuse::Elements::StretchMode__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Elements::StretchMode__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::StretchMode__typeof(), value), ::uBox< int>(::app::Fuse::Elements::StretchMode__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* inst = (StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode), StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__OnChanged(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Controls::Image* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Image*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__Reset(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__ResetStyle(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__ResetStyleFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Image__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Image*>((::uObject*)n, ::app::Fuse::Controls::Image__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode__Set(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode* __this, ::app::Fuse::Controls::Image* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::StretchMode__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__uType* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__uType), "Fuse.StyleProperty<Fuse.Controls.Image,Fuse.Elements.StretchSizing>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing___ObjInit_1(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing___ObjInit_2(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

int StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__Get(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Controls::Image*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Elements::StretchSizing__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__IsEqual(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Elements::StretchSizing__typeof(), value) == ::uBox< int>(::app::Fuse::Elements::StretchSizing__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Elements::StretchSizing__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::StretchSizing__typeof(), value), ::uBox< int>(::app::Fuse::Elements::StretchSizing__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* inst = (StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing), StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__OnChanged(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Controls::Image* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Image*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__Reset(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__ResetStyle(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__ResetStyleFor(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Image__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Image*>((::uObject*)n, ::app::Fuse::Controls::Image__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing__Set(StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing* __this, ::app::Fuse::Controls::Image* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::StretchSizing__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__uType* StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__uType), "Fuse.StyleProperty<Fuse.Controls.Image,Fuse.Resources.MemoryPolicy>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy___ObjInit_1(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Resources::MemoryPolicy* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy___ObjInit_2(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Resources::MemoryPolicy* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__New_2(::uStatic* __this, ::app::Fuse::Resources::MemoryPolicy* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* inst = (StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy), StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__OnChanged(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Controls::Image* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Image*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__Reset(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Image*, ::app::Fuse::Resources::MemoryPolicy*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__ResetStyle(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Controls::Image* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy__ResetStyleFor(StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Image__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Image*>((::uObject*)n, ::app::Fuse::Controls::Image__typeof()));
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Number__float__uType* StyleProperty__Fuse_Controls_Number__float__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Number__float__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Number__float__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Number__float__uType), "Fuse.StyleProperty<Fuse.Controls.Number,float>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Number__float__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Number__float, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Number__float, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Number__float, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Number__float, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_Number__float___ObjInit_1(StyleProperty__Fuse_Controls_Number__float* __this, float defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

float StyleProperty__Fuse_Controls_Number__float__Get(StyleProperty__Fuse_Controls_Number__float* __this, ::app::Fuse::Controls::Number* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< float, ::app::Fuse::Controls::Number*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< float>(::app::Uno::Float__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_Number__float__IsEqual(StyleProperty__Fuse_Controls_Number__float* __this, float value, float oldValue)
{
    if (::uBox(::app::Uno::Float__typeof(), value) == ::uBox(::app::Uno::Float__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float__typeof(), value), ::uBox(::app::Uno::Float__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_Number__float* StyleProperty__Fuse_Controls_Number__float__New_1(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_Number__float* inst = (StyleProperty__Fuse_Controls_Number__float*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Number__float), StyleProperty__Fuse_Controls_Number__float__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Controls_Number__float__OnChanged(StyleProperty__Fuse_Controls_Number__float* __this, ::app::Fuse::Controls::Number* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Number*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Number__float__Reset(StyleProperty__Fuse_Controls_Number__float* __this, ::app::Fuse::Controls::Number* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Number*, float>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_Number__float__ResetStyle(StyleProperty__Fuse_Controls_Number__float* __this, ::app::Fuse::Controls::Number* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Number__float__ResetStyleFor(StyleProperty__Fuse_Controls_Number__float* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Number__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Number*>((::uObject*)n, ::app::Fuse::Controls::Number__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Number__float__Set(StyleProperty__Fuse_Controls_Number__float* __this, ::app::Fuse::Controls::Number* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    float oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Number*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Number__string__uType* StyleProperty__Fuse_Controls_Number__string__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Number__string__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Number__string__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Number__string__uType), "Fuse.StyleProperty<Fuse.Controls.Number,string>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Number__string__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Number__string, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_Number__string, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Number__string, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Number__string, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Number__string, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_Number__string___ObjInit_1(StyleProperty__Fuse_Controls_Number__string* __this, ::uString* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

::uString* StyleProperty__Fuse_Controls_Number__string__Get(StyleProperty__Fuse_Controls_Number__string* __this, ::app::Fuse::Controls::Number* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uString*, ::app::Fuse::Controls::Number*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::uString*>(res, ::app::Uno::String__typeof());
        }
    }
}

bool StyleProperty__Fuse_Controls_Number__string__IsEqual(StyleProperty__Fuse_Controls_Number__string* __this, ::uString* value, ::uString* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::uString*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Controls_Number__string* StyleProperty__Fuse_Controls_Number__string__New_1(::uStatic* __this, ::uString* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_Number__string* inst = (StyleProperty__Fuse_Controls_Number__string*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Number__string), StyleProperty__Fuse_Controls_Number__string__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Controls_Number__string__OnChanged(StyleProperty__Fuse_Controls_Number__string* __this, ::app::Fuse::Controls::Number* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Number*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Number__string__Reset(StyleProperty__Fuse_Controls_Number__string* __this, ::app::Fuse::Controls::Number* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Number*, ::uString*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_Number__string__ResetStyle(StyleProperty__Fuse_Controls_Number__string* __this, ::app::Fuse::Controls::Number* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Number__string__ResetStyleFor(StyleProperty__Fuse_Controls_Number__string* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Number__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Number*>((::uObject*)n, ::app::Fuse::Controls::Number__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Number__string__Set(StyleProperty__Fuse_Controls_Number__string* __this, ::app::Fuse::Controls::Number* owner, ::uString* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uString* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Number*, ::uString*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__uType* StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__uType), "Fuse.StyleProperty<Fuse.Controls.PageIndicator,Uno.UX.IFactory>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory___ObjInit_1(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::uObject* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

::uObject* StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__Get(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PageIndicator* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*, ::app::Fuse::Controls::PageIndicator*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return (::uObject*)res;
        }
    }
}

bool StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__IsEqual(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::uObject* value, ::uObject* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::uObject*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__New_1(::uStatic* __this, ::uObject* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* inst = (StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory), StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__OnChanged(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PageIndicator* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::PageIndicator*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__Reset(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PageIndicator* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::PageIndicator*, ::uObject*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__ResetStyle(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PageIndicator* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__ResetStyleFor(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::PageIndicator__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::PageIndicator*>((::uObject*)n, ::app::Fuse::Controls::PageIndicator__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory__Set(StyleProperty__Fuse_Controls_PageIndicator__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PageIndicator* owner, ::uObject* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uObject* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::PageIndicator*, ::uObject*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__uType* StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__uType), "Fuse.StyleProperty<Fuse.Controls.Panel,Fuse.Layouts.Layout>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout___ObjInit_1(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Layouts::Layout* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout___ObjInit_2(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Layouts::Layout* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Fuse::Layouts::Layout* StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__Get(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Controls::Panel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Fuse::Layouts::Layout*, ::app::Fuse::Controls::Panel*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::app::Fuse::Layouts::Layout*>(res, ::app::Fuse::Layouts::Layout__typeof());
        }
    }
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__IsEqual(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Layouts::Layout* value, ::app::Fuse::Layouts::Layout* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::app::Fuse::Layouts::Layout*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__New_2(::uStatic* __this, ::app::Fuse::Layouts::Layout* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* inst = (StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout), StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__OnChanged(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Controls::Panel* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Panel*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__Reset(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Controls::Panel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Panel*, ::app::Fuse::Layouts::Layout*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__ResetStyle(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Controls::Panel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__ResetStyleFor(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Panel__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Panel*>((::uObject*)n, ::app::Fuse::Controls::Panel__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout__Set(StyleProperty__Fuse_Controls_Panel__Fuse_Layouts_Layout* __this, ::app::Fuse::Controls::Panel* owner, ::app::Fuse::Layouts::Layout* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Fuse::Layouts::Layout* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Panel*, ::app::Fuse::Layouts::Layout*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Panel__Fuse_Node__uType* StyleProperty__Fuse_Controls_Panel__Fuse_Node__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Panel__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Panel__Fuse_Node__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Panel__Fuse_Node__uType), "Fuse.StyleProperty<Fuse.Controls.Panel,Fuse.Node>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Panel__Fuse_Node__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Node, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Node, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Node, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Node, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Panel__Fuse_Node, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_Panel__Fuse_Node___ObjInit_1(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Node* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Panel__Fuse_Node___ObjInit_2(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Node* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Fuse::Node* StyleProperty__Fuse_Controls_Panel__Fuse_Node__Get(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Controls::Panel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Fuse::Node*, ::app::Fuse::Controls::Panel*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::app::Fuse::Node*>(res, ::app::Fuse::Node__typeof());
        }
    }
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Node__IsEqual(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Node* value, ::app::Fuse::Node* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::app::Fuse::Node*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Controls_Panel__Fuse_Node* StyleProperty__Fuse_Controls_Panel__Fuse_Node__New_2(::uStatic* __this, ::app::Fuse::Node* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Panel__Fuse_Node* inst = (StyleProperty__Fuse_Controls_Panel__Fuse_Node*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Panel__Fuse_Node), StyleProperty__Fuse_Controls_Panel__Fuse_Node__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Panel__Fuse_Node__OnChanged(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Controls::Panel* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Panel*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Node__Reset(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Controls::Panel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Panel*, ::app::Fuse::Node*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Node__ResetStyle(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Controls::Panel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Panel__Fuse_Node__ResetStyleFor(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Panel__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Panel*>((::uObject*)n, ::app::Fuse::Controls::Panel__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Panel__Fuse_Node__Set(StyleProperty__Fuse_Controls_Panel__Fuse_Node* __this, ::app::Fuse::Controls::Panel* owner, ::app::Fuse::Node* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Fuse::Node* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Panel*, ::app::Fuse::Node*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__uType* StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__uType), "Fuse.StyleProperty<Fuse.Controls.PlainTextEdit,Uno.UX.IFactory>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory___ObjInit_1(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::uObject* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

::uObject* StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__Get(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PlainTextEdit* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uObject*, ::app::Fuse::Controls::PlainTextEdit*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return (::uObject*)res;
        }
    }
}

bool StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__HasValue(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PlainTextEdit* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__IsEqual(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::uObject* value, ::uObject* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::uObject*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__New_1(::uStatic* __this, ::uObject* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* inst = (StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory), StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__OnChanged(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PlainTextEdit* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::PlainTextEdit*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__Reset(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PlainTextEdit* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::PlainTextEdit*, ::uObject*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__ResetStyle(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PlainTextEdit* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__ResetStyleFor(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::PlainTextEdit__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::PlainTextEdit*>((::uObject*)n, ::app::Fuse::Controls::PlainTextEdit__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__Set(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PlainTextEdit* owner, ::uObject* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uObject* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::PlainTextEdit*, ::uObject*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory__SetStyle(StyleProperty__Fuse_Controls_PlainTextEdit__Uno_UX_IFactory* __this, ::app::Fuse::Controls::PlainTextEdit* owner, ::uObject* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::PlainTextEdit*, ::uObject*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_RangeControl__double__uType* StyleProperty__Fuse_Controls_RangeControl__double__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_RangeControl__double__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_RangeControl__double__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_RangeControl__double__uType), "Fuse.StyleProperty<Fuse.Controls.RangeControl,double>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_RangeControl__double__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_RangeControl__double, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_RangeControl__double, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_RangeControl__double, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_RangeControl__double, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_RangeControl__double___ObjInit_1(StyleProperty__Fuse_Controls_RangeControl__double* __this, double defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_RangeControl__double___ObjInit_2(StyleProperty__Fuse_Controls_RangeControl__double* __this, double defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

double StyleProperty__Fuse_Controls_RangeControl__double__Get(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< double, ::app::Fuse::Controls::RangeControl*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< double>(::app::Uno::Double__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_RangeControl__double__IsEqual(StyleProperty__Fuse_Controls_RangeControl__double* __this, double value, double oldValue)
{
    if (::uBox(::app::Uno::Double__typeof(), value) == ::uBox(::app::Uno::Double__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Double__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Double__typeof(), value), ::uBox(::app::Uno::Double__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_RangeControl__double* StyleProperty__Fuse_Controls_RangeControl__double__New_1(::uStatic* __this, double defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_RangeControl__double* inst = (StyleProperty__Fuse_Controls_RangeControl__double*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_RangeControl__double), StyleProperty__Fuse_Controls_RangeControl__double__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Controls_RangeControl__double* StyleProperty__Fuse_Controls_RangeControl__double__New_2(::uStatic* __this, double defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_RangeControl__double* inst = (StyleProperty__Fuse_Controls_RangeControl__double*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_RangeControl__double), StyleProperty__Fuse_Controls_RangeControl__double__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_RangeControl__double__OnChanged(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::RangeControl*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_RangeControl__double__Reset(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::RangeControl*, double>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_RangeControl__double__ResetStyle(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_RangeControl__double__ResetStyleFor(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::RangeControl__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::RangeControl*>((::uObject*)n, ::app::Fuse::Controls::RangeControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_RangeControl__double__Set(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner, double value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    double oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::RangeControl*, double>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Double__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_RangeControl__double__SetLocalState(StyleProperty__Fuse_Controls_RangeControl__double* __this, ::app::Fuse::Controls::RangeControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Rectangle__float4__uType* StyleProperty__Fuse_Controls_Rectangle__float4__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Rectangle__float4__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Rectangle__float4__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Rectangle__float4__uType), "Fuse.StyleProperty<Fuse.Controls.Rectangle,float4>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Rectangle__float4__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Rectangle__float4, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Rectangle__float4, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Rectangle__float4, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Rectangle__float4, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_Rectangle__float4___ObjInit_1(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

::app::Uno::Float4 StyleProperty__Fuse_Controls_Rectangle__float4__Get(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::app::Fuse::Controls::Rectangle* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Uno::Float4, ::app::Fuse::Controls::Rectangle*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_Rectangle__float4__IsEqual(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::app::Uno::Float4 value, ::app::Uno::Float4 oldValue)
{
    if (::uBox(::app::Uno::Float4__typeof(), value) == ::uBox(::app::Uno::Float4__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float4__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float4__typeof(), value), ::uBox(::app::Uno::Float4__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_Rectangle__float4* StyleProperty__Fuse_Controls_Rectangle__float4__New_1(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_Rectangle__float4* inst = (StyleProperty__Fuse_Controls_Rectangle__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Rectangle__float4), StyleProperty__Fuse_Controls_Rectangle__float4__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Controls_Rectangle__float4__OnChanged(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::app::Fuse::Controls::Rectangle* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Rectangle*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Rectangle__float4__Reset(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::app::Fuse::Controls::Rectangle* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Rectangle*, ::app::Uno::Float4>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_Rectangle__float4__ResetStyle(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::app::Fuse::Controls::Rectangle* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Rectangle__float4__ResetStyleFor(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Rectangle__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Rectangle*>((::uObject*)n, ::app::Fuse::Controls::Rectangle__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Rectangle__float4__Set(StyleProperty__Fuse_Controls_Rectangle__float4* __this, ::app::Fuse::Controls::Rectangle* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Uno::Float4 oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Rectangle*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__uType* StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__uType), "Fuse.StyleProperty<Fuse.Controls.ScrollView,Fuse.Gestures.ScrollDirections>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections___ObjInit_1(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections___ObjInit_2(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

int StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__Get(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Controls::ScrollView* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Controls::ScrollView*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__IsEqual(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), value) == ::uBox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), value), ::uBox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* inst = (StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections), StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__OnChanged(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Controls::ScrollView* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::ScrollView*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__Reset(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Controls::ScrollView* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::ScrollView*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__ResetStyle(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Controls::ScrollView* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__ResetStyleFor(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::ScrollView__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::ScrollView*>((::uObject*)n, ::app::Fuse::Controls::ScrollView__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections__Set(StyleProperty__Fuse_Controls_ScrollView__Fuse_Gestures_ScrollDirections* __this, ::app::Fuse::Controls::ScrollView* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::ScrollView*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Gestures::ScrollDirections__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Shape__float__uType* StyleProperty__Fuse_Controls_Shape__float__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Shape__float__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Shape__float__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Shape__float__uType), "Fuse.StyleProperty<Fuse.Controls.Shape,float>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Shape__float__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Shape__float, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Shape__float, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Shape__float, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Shape__float, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_Shape__float___ObjInit_1(StyleProperty__Fuse_Controls_Shape__float* __this, float defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Shape__float___ObjInit_2(StyleProperty__Fuse_Controls_Shape__float* __this, float defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

float StyleProperty__Fuse_Controls_Shape__float__Get(StyleProperty__Fuse_Controls_Shape__float* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< float, ::app::Fuse::Controls::Shape*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< float>(::app::Uno::Float__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_Shape__float__IsEqual(StyleProperty__Fuse_Controls_Shape__float* __this, float value, float oldValue)
{
    if (::uBox(::app::Uno::Float__typeof(), value) == ::uBox(::app::Uno::Float__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float__typeof(), value), ::uBox(::app::Uno::Float__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_Shape__float* StyleProperty__Fuse_Controls_Shape__float__New_2(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Shape__float* inst = (StyleProperty__Fuse_Controls_Shape__float*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Shape__float), StyleProperty__Fuse_Controls_Shape__float__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Shape__float__OnChanged(StyleProperty__Fuse_Controls_Shape__float* __this, ::app::Fuse::Controls::Shape* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Shape*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Shape__float__Reset(StyleProperty__Fuse_Controls_Shape__float* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Shape*, float>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_Shape__float__ResetStyle(StyleProperty__Fuse_Controls_Shape__float* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Shape__float__ResetStyleFor(StyleProperty__Fuse_Controls_Shape__float* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Shape__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Shape*>((::uObject*)n, ::app::Fuse::Controls::Shape__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_Shape__float__Set(StyleProperty__Fuse_Controls_Shape__float* __this, ::app::Fuse::Controls::Shape* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    float oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Shape*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__uType* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__uType), "Fuse.StyleProperty<Fuse.Controls.Shape,Fuse.Drawing.Brush>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush___ObjInit_1(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush___ObjInit_2(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__New_2(::uStatic* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* inst = (StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush), StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__OnChanged(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Shape* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Shape*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__Reset(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Shape*, ::app::Fuse::Drawing::Brush*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__ResetStyle(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush__ResetStyleFor(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Shape__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Shape*>((::uObject*)n, ::app::Fuse::Controls::Shape__typeof()));
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__uType* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__uType), "Fuse.StyleProperty<Fuse.Controls.Shape,Fuse.Drawing.Stroke>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke___ObjInit_1(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke___ObjInit_2(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__New_2(::uStatic* __this, ::app::Fuse::Drawing::Stroke* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* inst = (StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke), StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__OnChanged(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Controls::Shape* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::Shape*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__Reset(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::Shape*, ::app::Fuse::Drawing::Stroke*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__ResetStyle(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Controls::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke__ResetStyleFor(StyleProperty__Fuse_Controls_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::Shape__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::Shape*>((::uObject*)n, ::app::Fuse::Controls::Shape__typeof()));
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_StackPanel__float__uType* StyleProperty__Fuse_Controls_StackPanel__float__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_StackPanel__float__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_StackPanel__float__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_StackPanel__float__uType), "Fuse.StyleProperty<Fuse.Controls.StackPanel,float>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_StackPanel__float__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_StackPanel__float, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_StackPanel__float, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_StackPanel__float, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_StackPanel__float, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_StackPanel__float___ObjInit_1(StyleProperty__Fuse_Controls_StackPanel__float* __this, float defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

float StyleProperty__Fuse_Controls_StackPanel__float__Get(StyleProperty__Fuse_Controls_StackPanel__float* __this, ::app::Fuse::Controls::StackPanel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< float, ::app::Fuse::Controls::StackPanel*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< float>(::app::Uno::Float__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_StackPanel__float__IsEqual(StyleProperty__Fuse_Controls_StackPanel__float* __this, float value, float oldValue)
{
    if (::uBox(::app::Uno::Float__typeof(), value) == ::uBox(::app::Uno::Float__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float__typeof(), value), ::uBox(::app::Uno::Float__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_StackPanel__float* StyleProperty__Fuse_Controls_StackPanel__float__New_1(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_StackPanel__float* inst = (StyleProperty__Fuse_Controls_StackPanel__float*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_StackPanel__float), StyleProperty__Fuse_Controls_StackPanel__float__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Controls_StackPanel__float__OnChanged(StyleProperty__Fuse_Controls_StackPanel__float* __this, ::app::Fuse::Controls::StackPanel* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::StackPanel*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_StackPanel__float__Reset(StyleProperty__Fuse_Controls_StackPanel__float* __this, ::app::Fuse::Controls::StackPanel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::StackPanel*, float>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_StackPanel__float__ResetStyle(StyleProperty__Fuse_Controls_StackPanel__float* __this, ::app::Fuse::Controls::StackPanel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_StackPanel__float__ResetStyleFor(StyleProperty__Fuse_Controls_StackPanel__float* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::StackPanel__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::StackPanel*>((::uObject*)n, ::app::Fuse::Controls::StackPanel__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_StackPanel__float__Set(StyleProperty__Fuse_Controls_StackPanel__float* __this, ::app::Fuse::Controls::StackPanel* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    float oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::StackPanel*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__uType* StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__uType), "Fuse.StyleProperty<Fuse.Controls.StackPanel,Fuse.Layouts.Orientation>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation___ObjInit_1(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

int StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__Get(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Controls::StackPanel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Controls::StackPanel*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Layouts::Orientation__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__IsEqual(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Layouts::Orientation__typeof(), value) == ::uBox< int>(::app::Fuse::Layouts::Orientation__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Layouts::Orientation__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Layouts::Orientation__typeof(), value), ::uBox< int>(::app::Fuse::Layouts::Orientation__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* inst = (StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation), StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__OnChanged(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Controls::StackPanel* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::StackPanel*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__Reset(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Controls::StackPanel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::StackPanel*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__ResetStyle(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Controls::StackPanel* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__ResetStyleFor(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::StackPanel__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::StackPanel*>((::uObject*)n, ::app::Fuse::Controls::StackPanel__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation__Set(StyleProperty__Fuse_Controls_StackPanel__Fuse_Layouts_Orientation* __this, ::app::Fuse::Controls::StackPanel* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::StackPanel*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Layouts::Orientation__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_TextControl__float__uType* StyleProperty__Fuse_Controls_TextControl__float__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_TextControl__float__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_TextControl__float__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_TextControl__float__uType), "Fuse.StyleProperty<Fuse.Controls.TextControl,float>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextControl__float__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_TextControl__float, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_TextControl__float, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_TextControl__float, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_TextControl__float, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_TextControl__float___ObjInit_1(StyleProperty__Fuse_Controls_TextControl__float* __this, float defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

float StyleProperty__Fuse_Controls_TextControl__float__Get(StyleProperty__Fuse_Controls_TextControl__float* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< float, ::app::Fuse::Controls::TextControl*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< float>(::app::Uno::Float__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_TextControl__float__HasValue(StyleProperty__Fuse_Controls_TextControl__float* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_TextControl__float__IsEqual(StyleProperty__Fuse_Controls_TextControl__float* __this, float value, float oldValue)
{
    if (::uBox(::app::Uno::Float__typeof(), value) == ::uBox(::app::Uno::Float__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float__typeof(), value), ::uBox(::app::Uno::Float__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_TextControl__float* StyleProperty__Fuse_Controls_TextControl__float__New_1(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_TextControl__float* inst = (StyleProperty__Fuse_Controls_TextControl__float*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextControl__float), StyleProperty__Fuse_Controls_TextControl__float__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Controls_TextControl__float__OnChanged(StyleProperty__Fuse_Controls_TextControl__float* __this, ::app::Fuse::Controls::TextControl* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::TextControl*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_TextControl__float__Reset(StyleProperty__Fuse_Controls_TextControl__float* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, float>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_TextControl__float__ResetStyle(StyleProperty__Fuse_Controls_TextControl__float* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_TextControl__float__ResetStyleFor(StyleProperty__Fuse_Controls_TextControl__float* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextControl__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::TextControl*>((::uObject*)n, ::app::Fuse::Controls::TextControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextControl__float__Set(StyleProperty__Fuse_Controls_TextControl__float* __this, ::app::Fuse::Controls::TextControl* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    float oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_TextControl__float__SetStyle(StyleProperty__Fuse_Controls_TextControl__float* __this, ::app::Fuse::Controls::TextControl* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_TextControl__float4__uType* StyleProperty__Fuse_Controls_TextControl__float4__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_TextControl__float4__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_TextControl__float4__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_TextControl__float4__uType), "Fuse.StyleProperty<Fuse.Controls.TextControl,float4>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextControl__float4__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_TextControl__float4, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_TextControl__float4, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_TextControl__float4, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_TextControl__float4, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_TextControl__float4___ObjInit_1(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

::app::Uno::Float4 StyleProperty__Fuse_Controls_TextControl__float4__Get(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Uno::Float4, ::app::Fuse::Controls::TextControl*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_TextControl__float4__HasValue(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_TextControl__float4__IsEqual(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Uno::Float4 value, ::app::Uno::Float4 oldValue)
{
    if (::uBox(::app::Uno::Float4__typeof(), value) == ::uBox(::app::Uno::Float4__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float4__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float4__typeof(), value), ::uBox(::app::Uno::Float4__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_TextControl__float4* StyleProperty__Fuse_Controls_TextControl__float4__New_1(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_TextControl__float4* inst = (StyleProperty__Fuse_Controls_TextControl__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextControl__float4), StyleProperty__Fuse_Controls_TextControl__float4__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Controls_TextControl__float4__OnChanged(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Fuse::Controls::TextControl* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::TextControl*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_TextControl__float4__Reset(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, ::app::Uno::Float4>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_TextControl__float4__ResetStyle(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_TextControl__float4__ResetStyleFor(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextControl__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::TextControl*>((::uObject*)n, ::app::Fuse::Controls::TextControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextControl__float4__Set(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Fuse::Controls::TextControl* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Uno::Float4 oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_TextControl__float4__SetStyle(StyleProperty__Fuse_Controls_TextControl__float4* __this, ::app::Fuse::Controls::TextControl* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__uType* StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__uType), "Fuse.StyleProperty<Fuse.Controls.TextControl,Fuse.Elements.TextAlignment>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment___ObjInit_1(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

int StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__Get(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Controls::TextControl*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Elements::TextAlignment__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__HasValue(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__IsEqual(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Elements::TextAlignment__typeof(), value) == ::uBox< int>(::app::Fuse::Elements::TextAlignment__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Elements::TextAlignment__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::TextAlignment__typeof(), value), ::uBox< int>(::app::Fuse::Elements::TextAlignment__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* inst = (StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment), StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__OnChanged(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::TextControl*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__Reset(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__ResetStyle(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__ResetStyleFor(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextControl__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::TextControl*>((::uObject*)n, ::app::Fuse::Controls::TextControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__Set(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::TextAlignment__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment__SetStyle(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextAlignment* __this, ::app::Fuse::Controls::TextControl* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::TextAlignment__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__uType* StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__uType), "Fuse.StyleProperty<Fuse.Controls.TextControl,Fuse.Elements.TextWrapping>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping___ObjInit_1(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

int StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__Get(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Controls::TextControl*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Elements::TextWrapping__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__IsEqual(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Elements::TextWrapping__typeof(), value) == ::uBox< int>(::app::Fuse::Elements::TextWrapping__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Elements::TextWrapping__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::TextWrapping__typeof(), value), ::uBox< int>(::app::Fuse::Elements::TextWrapping__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* inst = (StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping), StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__OnChanged(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Controls::TextControl* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::TextControl*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__Reset(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__ResetStyle(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__ResetStyleFor(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextControl__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::TextControl*>((::uObject*)n, ::app::Fuse::Controls::TextControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping__Set(StyleProperty__Fuse_Controls_TextControl__Fuse_Elements_TextWrapping* __this, ::app::Fuse::Controls::TextControl* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::TextWrapping__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_TextControl__Fuse_Font__uType* StyleProperty__Fuse_Controls_TextControl__Fuse_Font__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_TextControl__Fuse_Font__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_TextControl__Fuse_Font__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_TextControl__Fuse_Font__uType), "Fuse.StyleProperty<Fuse.Controls.TextControl,Fuse.Font>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextControl__Fuse_Font__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Font, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Font, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Font, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Font, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_TextControl__Fuse_Font, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Font___ObjInit_1(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Font* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

::app::Fuse::Font* StyleProperty__Fuse_Controls_TextControl__Fuse_Font__Get(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Fuse::Font*, ::app::Fuse::Controls::TextControl*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::app::Fuse::Font*>(res, ::app::Fuse::Font__typeof());
        }
    }
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Font__HasValue(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Font__IsEqual(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Font* value, ::app::Fuse::Font* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::app::Fuse::Font*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Controls_TextControl__Fuse_Font* StyleProperty__Fuse_Controls_TextControl__Fuse_Font__New_1(::uStatic* __this, ::app::Fuse::Font* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_TextControl__Fuse_Font* inst = (StyleProperty__Fuse_Controls_TextControl__Fuse_Font*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextControl__Fuse_Font), StyleProperty__Fuse_Controls_TextControl__Fuse_Font__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Font__OnChanged(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::TextControl*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Font__Reset(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, ::app::Fuse::Font*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Font__ResetStyle(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_TextControl__Fuse_Font__ResetStyleFor(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextControl__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::TextControl*>((::uObject*)n, ::app::Fuse::Controls::TextControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Font__Set(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner, ::app::Fuse::Font* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Fuse::Font* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, ::app::Fuse::Font*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_TextControl__Fuse_Font__SetStyle(StyleProperty__Fuse_Controls_TextControl__Fuse_Font* __this, ::app::Fuse::Controls::TextControl* owner, ::app::Fuse::Font* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, ::app::Fuse::Font*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_TextControl__string__uType* StyleProperty__Fuse_Controls_TextControl__string__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_TextControl__string__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_TextControl__string__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_TextControl__string__uType), "Fuse.StyleProperty<Fuse.Controls.TextControl,string>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextControl__string__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_TextControl__string, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Controls_TextControl__string, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Controls_TextControl__string, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_TextControl__string, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_TextControl__string, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_TextControl__string___ObjInit_1(StyleProperty__Fuse_Controls_TextControl__string* __this, ::uString* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_TextControl__string___ObjInit_2(StyleProperty__Fuse_Controls_TextControl__string* __this, ::uString* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::uString* StyleProperty__Fuse_Controls_TextControl__string__Get(StyleProperty__Fuse_Controls_TextControl__string* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uString*, ::app::Fuse::Controls::TextControl*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::uString*>(res, ::app::Uno::String__typeof());
        }
    }
}

bool StyleProperty__Fuse_Controls_TextControl__string__IsEqual(StyleProperty__Fuse_Controls_TextControl__string* __this, ::uString* value, ::uString* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::uString*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Controls_TextControl__string* StyleProperty__Fuse_Controls_TextControl__string__New_2(::uStatic* __this, ::uString* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_TextControl__string* inst = (StyleProperty__Fuse_Controls_TextControl__string*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextControl__string), StyleProperty__Fuse_Controls_TextControl__string__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_TextControl__string__OnChanged(StyleProperty__Fuse_Controls_TextControl__string* __this, ::app::Fuse::Controls::TextControl* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::TextControl*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_TextControl__string__Reset(StyleProperty__Fuse_Controls_TextControl__string* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, ::uString*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_TextControl__string__ResetStyle(StyleProperty__Fuse_Controls_TextControl__string* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_TextControl__string__ResetStyleFor(StyleProperty__Fuse_Controls_TextControl__string* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextControl__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::TextControl*>((::uObject*)n, ::app::Fuse::Controls::TextControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextControl__string__Set(StyleProperty__Fuse_Controls_TextControl__string* __this, ::app::Fuse::Controls::TextControl* owner, ::uString* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uString* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextControl*, ::uString*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_TextControl__string__SetLocalState(StyleProperty__Fuse_Controls_TextControl__string* __this, ::app::Fuse::Controls::TextControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_TextInput__bool__uType* StyleProperty__Fuse_Controls_TextInput__bool__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_TextInput__bool__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_TextInput__bool__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_TextInput__bool__uType), "Fuse.StyleProperty<Fuse.Controls.TextInput,bool>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextInput__bool__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_TextInput__bool, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_TextInput__bool, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_TextInput__bool, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_TextInput__bool, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_TextInput__bool___ObjInit_1(StyleProperty__Fuse_Controls_TextInput__bool* __this, bool defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

bool StyleProperty__Fuse_Controls_TextInput__bool__Get(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< bool, ::app::Fuse::Controls::TextInput*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< bool>(::app::Uno::Bool__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_TextInput__bool__IsEqual(StyleProperty__Fuse_Controls_TextInput__bool* __this, bool value, bool oldValue)
{
    if (::uBox(::app::Uno::Bool__typeof(), value) == ::uBox(::app::Uno::Bool__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Bool__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Bool__typeof(), value), ::uBox(::app::Uno::Bool__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_TextInput__bool* StyleProperty__Fuse_Controls_TextInput__bool__New_1(::uStatic* __this, bool defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_TextInput__bool* inst = (StyleProperty__Fuse_Controls_TextInput__bool*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextInput__bool), StyleProperty__Fuse_Controls_TextInput__bool__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Controls_TextInput__bool__OnChanged(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Controls::TextInput* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::TextInput*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_TextInput__bool__Reset(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextInput*, bool>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_TextInput__bool__ResetStyle(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_TextInput__bool__ResetStyleFor(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextInput__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::TextInput*>((::uObject*)n, ::app::Fuse::Controls::TextInput__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextInput__bool__Set(StyleProperty__Fuse_Controls_TextInput__bool* __this, ::app::Fuse::Controls::TextInput* owner, bool value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    bool oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextInput*, bool>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Bool__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_TextInput__float4__uType* StyleProperty__Fuse_Controls_TextInput__float4__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_TextInput__float4__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_TextInput__float4__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_TextInput__float4__uType), "Fuse.StyleProperty<Fuse.Controls.TextInput,float4>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextInput__float4__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_TextInput__float4, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_TextInput__float4, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_TextInput__float4, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_TextInput__float4, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_TextInput__float4___ObjInit_1(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

::app::Uno::Float4 StyleProperty__Fuse_Controls_TextInput__float4__Get(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Uno::Float4, ::app::Fuse::Controls::TextInput*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_TextInput__float4__HasValue(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Controls_TextInput__float4__IsEqual(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Uno::Float4 value, ::app::Uno::Float4 oldValue)
{
    if (::uBox(::app::Uno::Float4__typeof(), value) == ::uBox(::app::Uno::Float4__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float4__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float4__typeof(), value), ::uBox(::app::Uno::Float4__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_TextInput__float4* StyleProperty__Fuse_Controls_TextInput__float4__New_1(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_TextInput__float4* inst = (StyleProperty__Fuse_Controls_TextInput__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextInput__float4), StyleProperty__Fuse_Controls_TextInput__float4__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Controls_TextInput__float4__OnChanged(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Fuse::Controls::TextInput* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::TextInput*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_TextInput__float4__Reset(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextInput*, ::app::Uno::Float4>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_TextInput__float4__ResetStyle(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_TextInput__float4__ResetStyleFor(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextInput__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::TextInput*>((::uObject*)n, ::app::Fuse::Controls::TextInput__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextInput__float4__Set(StyleProperty__Fuse_Controls_TextInput__float4* __this, ::app::Fuse::Controls::TextInput* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Uno::Float4 oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextInput*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__uType* StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__uType), "Fuse.StyleProperty<Fuse.Controls.TextInput,Uno.Platform.TextInputHint>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint___ObjInit_1(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

int StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__Get(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Controls::TextInput*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Uno::Platform::TextInputHint__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__IsEqual(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Uno::Platform::TextInputHint__typeof(), value) == ::uBox< int>(::app::Uno::Platform::TextInputHint__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Uno::Platform::TextInputHint__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Uno::Platform::TextInputHint__typeof(), value), ::uBox< int>(::app::Uno::Platform::TextInputHint__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* inst = (StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint), StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__OnChanged(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::TextInput*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__Reset(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextInput*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__ResetStyle(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__ResetStyleFor(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::TextInput__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::TextInput*>((::uObject*)n, ::app::Fuse::Controls::TextInput__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint__Set(StyleProperty__Fuse_Controls_TextInput__Uno_Platform_TextInputHint* __this, ::app::Fuse::Controls::TextInput* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::TextInput*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Uno::Platform::TextInputHint__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Controls_ToggleControl__bool__uType* StyleProperty__Fuse_Controls_ToggleControl__bool__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Controls_ToggleControl__bool__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Controls_ToggleControl__bool__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Controls_ToggleControl__bool__uType), "Fuse.StyleProperty<Fuse.Controls.ToggleControl,bool>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Controls_ToggleControl__bool__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Controls_ToggleControl__bool, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Controls_ToggleControl__bool, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Controls_ToggleControl__bool, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Controls_ToggleControl__bool, _setter));

    return type;
}

void StyleProperty__Fuse_Controls_ToggleControl__bool___ObjInit_1(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, bool defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Controls_ToggleControl__bool___ObjInit_2(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, bool defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

bool StyleProperty__Fuse_Controls_ToggleControl__bool__Get(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, ::app::Fuse::Controls::ToggleControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< bool, ::app::Fuse::Controls::ToggleControl*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< bool>(::app::Uno::Bool__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Controls_ToggleControl__bool__IsEqual(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, bool value, bool oldValue)
{
    if (::uBox(::app::Uno::Bool__typeof(), value) == ::uBox(::app::Uno::Bool__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Bool__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Bool__typeof(), value), ::uBox(::app::Uno::Bool__typeof(), oldValue));
}

StyleProperty__Fuse_Controls_ToggleControl__bool* StyleProperty__Fuse_Controls_ToggleControl__bool__New_2(::uStatic* __this, bool defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Controls_ToggleControl__bool* inst = (StyleProperty__Fuse_Controls_ToggleControl__bool*)::uAllocObject(sizeof(StyleProperty__Fuse_Controls_ToggleControl__bool), StyleProperty__Fuse_Controls_ToggleControl__bool__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Controls_ToggleControl__bool__OnChanged(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, ::app::Fuse::Controls::ToggleControl* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Controls::ToggleControl*>(owner);
    }
}

bool StyleProperty__Fuse_Controls_ToggleControl__bool__Reset(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, ::app::Fuse::Controls::ToggleControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::ToggleControl*, bool>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Controls_ToggleControl__bool__ResetStyle(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, ::app::Fuse::Controls::ToggleControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Controls_ToggleControl__bool__ResetStyleFor(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Controls::ToggleControl__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Controls::ToggleControl*>((::uObject*)n, ::app::Fuse::Controls::ToggleControl__typeof()));
    }
}

bool StyleProperty__Fuse_Controls_ToggleControl__bool__Set(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, ::app::Fuse::Controls::ToggleControl* owner, bool value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    bool oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Controls::ToggleControl*, bool>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Bool__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

void StyleProperty__Fuse_Controls_ToggleControl__bool__SetLocalState(StyleProperty__Fuse_Controls_ToggleControl__bool* __this, ::app::Fuse::Controls::ToggleControl* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Elements_Element__bool__uType* StyleProperty__Fuse_Elements_Element__bool__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Elements_Element__bool__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Elements_Element__bool__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Elements_Element__bool__uType), "Fuse.StyleProperty<Fuse.Elements.Element,bool>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__bool__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Elements_Element__bool, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Elements_Element__bool, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Elements_Element__bool, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Elements_Element__bool, _setter));

    return type;
}

void StyleProperty__Fuse_Elements_Element__bool___ObjInit_1(StyleProperty__Fuse_Elements_Element__bool* __this, bool defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

bool StyleProperty__Fuse_Elements_Element__bool__Get(StyleProperty__Fuse_Elements_Element__bool* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< bool, ::app::Fuse::Elements::Element*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< bool>(::app::Uno::Bool__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Elements_Element__bool__IsEqual(StyleProperty__Fuse_Elements_Element__bool* __this, bool value, bool oldValue)
{
    if (::uBox(::app::Uno::Bool__typeof(), value) == ::uBox(::app::Uno::Bool__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Bool__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Bool__typeof(), value), ::uBox(::app::Uno::Bool__typeof(), oldValue));
}

StyleProperty__Fuse_Elements_Element__bool* StyleProperty__Fuse_Elements_Element__bool__New_1(::uStatic* __this, bool defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Elements_Element__bool* inst = (StyleProperty__Fuse_Elements_Element__bool*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__bool), StyleProperty__Fuse_Elements_Element__bool__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Elements_Element__bool__OnChanged(StyleProperty__Fuse_Elements_Element__bool* __this, ::app::Fuse::Elements::Element* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Elements::Element*>(owner);
    }
}

bool StyleProperty__Fuse_Elements_Element__bool__Reset(StyleProperty__Fuse_Elements_Element__bool* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, bool>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Elements_Element__bool__ResetStyle(StyleProperty__Fuse_Elements_Element__bool* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Elements_Element__bool__ResetStyleFor(StyleProperty__Fuse_Elements_Element__bool* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__bool__Set(StyleProperty__Fuse_Elements_Element__bool* __this, ::app::Fuse::Elements::Element* owner, bool value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    bool oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, bool>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Bool__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Elements_Element__float__uType* StyleProperty__Fuse_Elements_Element__float__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Elements_Element__float__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Elements_Element__float__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Elements_Element__float__uType), "Fuse.StyleProperty<Fuse.Elements.Element,float>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__float__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Elements_Element__float, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Elements_Element__float, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Elements_Element__float, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Elements_Element__float, _setter));

    return type;
}

void StyleProperty__Fuse_Elements_Element__float___ObjInit_1(StyleProperty__Fuse_Elements_Element__float* __this, float defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Elements_Element__float___ObjInit_2(StyleProperty__Fuse_Elements_Element__float* __this, float defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

float StyleProperty__Fuse_Elements_Element__float__Get(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< float, ::app::Fuse::Elements::Element*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< float>(::app::Uno::Float__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Elements_Element__float__HasValue(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Elements_Element__float__IsEqual(StyleProperty__Fuse_Elements_Element__float* __this, float value, float oldValue)
{
    if (::uBox(::app::Uno::Float__typeof(), value) == ::uBox(::app::Uno::Float__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float__typeof(), value), ::uBox(::app::Uno::Float__typeof(), oldValue));
}

StyleProperty__Fuse_Elements_Element__float* StyleProperty__Fuse_Elements_Element__float__New_1(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Elements_Element__float* inst = (StyleProperty__Fuse_Elements_Element__float*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__float), StyleProperty__Fuse_Elements_Element__float__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Elements_Element__float__OnChanged(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Elements::Element*>(owner);
    }
}

bool StyleProperty__Fuse_Elements_Element__float__Reset(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, float>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Elements_Element__float__ResetStyle(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Elements_Element__float__ResetStyleFor(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__float__Set(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    float oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Elements_Element__float__SetStyle(StyleProperty__Fuse_Elements_Element__float* __this, ::app::Fuse::Elements::Element* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Elements_Element__float2__uType* StyleProperty__Fuse_Elements_Element__float2__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Elements_Element__float2__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Elements_Element__float2__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Elements_Element__float2__uType), "Fuse.StyleProperty<Fuse.Elements.Element,float2>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__float2__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Elements_Element__float2, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Elements_Element__float2, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Elements_Element__float2, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Elements_Element__float2, _setter));

    return type;
}

void StyleProperty__Fuse_Elements_Element__float2___ObjInit_1(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Uno::Float2 defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Elements_Element__float2___ObjInit_2(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Uno::Float2 defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

::app::Uno::Float2 StyleProperty__Fuse_Elements_Element__float2__Get(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Uno::Float2, ::app::Fuse::Elements::Element*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< ::app::Uno::Float2>(::app::Uno::Float2__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Elements_Element__float2__HasValue(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Elements_Element__float2__IsEqual(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Uno::Float2 value, ::app::Uno::Float2 oldValue)
{
    if (::uBox(::app::Uno::Float2__typeof(), value) == ::uBox(::app::Uno::Float2__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float2__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float2__typeof(), value), ::uBox(::app::Uno::Float2__typeof(), oldValue));
}

void StyleProperty__Fuse_Elements_Element__float2__OnChanged(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Elements::Element*>(owner);
    }
}

bool StyleProperty__Fuse_Elements_Element__float2__Reset(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, ::app::Uno::Float2>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Elements_Element__float2__ResetStyle(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Elements_Element__float2__ResetStyleFor(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__float2__Set(StyleProperty__Fuse_Elements_Element__float2* __this, ::app::Fuse::Elements::Element* owner, ::app::Uno::Float2 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Uno::Float2 oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, ::app::Uno::Float2>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float2__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Elements_Element__float4__uType* StyleProperty__Fuse_Elements_Element__float4__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Elements_Element__float4__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Elements_Element__float4__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Elements_Element__float4__uType), "Fuse.StyleProperty<Fuse.Elements.Element,float4>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__float4__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Elements_Element__float4, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Elements_Element__float4, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Elements_Element__float4, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Elements_Element__float4, _setter));

    return type;
}

void StyleProperty__Fuse_Elements_Element__float4___ObjInit_1(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

::app::Uno::Float4 StyleProperty__Fuse_Elements_Element__float4__Get(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Uno::Float4, ::app::Fuse::Elements::Element*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Elements_Element__float4__HasValue(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Elements_Element__float4__IsEqual(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Uno::Float4 value, ::app::Uno::Float4 oldValue)
{
    if (::uBox(::app::Uno::Float4__typeof(), value) == ::uBox(::app::Uno::Float4__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float4__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float4__typeof(), value), ::uBox(::app::Uno::Float4__typeof(), oldValue));
}

StyleProperty__Fuse_Elements_Element__float4* StyleProperty__Fuse_Elements_Element__float4__New_1(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Elements_Element__float4* inst = (StyleProperty__Fuse_Elements_Element__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__float4), StyleProperty__Fuse_Elements_Element__float4__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Elements_Element__float4__OnChanged(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Fuse::Elements::Element* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Elements::Element*>(owner);
    }
}

bool StyleProperty__Fuse_Elements_Element__float4__Reset(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, ::app::Uno::Float4>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Elements_Element__float4__ResetStyle(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Elements_Element__float4__ResetStyleFor(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__float4__Set(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Fuse::Elements::Element* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Uno::Float4 oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Elements_Element__float4__SetStyle(StyleProperty__Fuse_Elements_Element__float4* __this, ::app::Fuse::Elements::Element* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__uType* StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__uType), "Fuse.StyleProperty<Fuse.Elements.Element,Fuse.Elements.Alignment>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment, _setter));

    return type;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment___ObjInit_1(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

int StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__Get(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Elements::Element*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Elements::Alignment__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__HasValue(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__IsEqual(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), value) == ::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), value), ::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), oldValue));
}

StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* inst = (StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment), StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__OnChanged(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, ::app::Fuse::Elements::Element* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Elements::Element*>(owner);
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__Reset(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__ResetStyle(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__ResetStyleFor(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__Set(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, ::app::Fuse::Elements::Element* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__SetStyle(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment* __this, ::app::Fuse::Elements::Element* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::Alignment__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__uType* StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__uType), "Fuse.StyleProperty<Fuse.Elements.Element,Fuse.Elements.CachingMode>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode, _setter));

    return type;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode___ObjInit_1(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode___ObjInit_2(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

int StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__Get(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Elements::Element*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Elements::CachingMode__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__IsEqual(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Elements::CachingMode__typeof(), value) == ::uBox< int>(::app::Fuse::Elements::CachingMode__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Elements::CachingMode__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::CachingMode__typeof(), value), ::uBox< int>(::app::Fuse::Elements::CachingMode__typeof(), oldValue));
}

StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__New_2(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* inst = (StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode), StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__OnChanged(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Elements::Element* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Elements::Element*>(owner);
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__Reset(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__ResetStyle(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__ResetStyleFor(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__Set(StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode* __this, ::app::Fuse::Elements::Element* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::CachingMode__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__uType* StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__uType), "Fuse.StyleProperty<Fuse.Elements.Element,Fuse.Elements.HitTestMode>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode, _setter));

    return type;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode___ObjInit_1(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

int StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__Get(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Elements::Element*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Elements::HitTestMode__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__HasValue(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__IsEqual(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Elements::HitTestMode__typeof(), value) == ::uBox< int>(::app::Fuse::Elements::HitTestMode__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Elements::HitTestMode__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::HitTestMode__typeof(), value), ::uBox< int>(::app::Fuse::Elements::HitTestMode__typeof(), oldValue));
}

StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* inst = (StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode), StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__OnChanged(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Elements::Element*>(owner);
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__Reset(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__ResetStyle(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__ResetStyleFor(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__Set(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::HitTestMode__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__SetStyle(StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode* __this, ::app::Fuse::Elements::Element* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::HitTestMode__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__uType* StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__uType), "Fuse.StyleProperty<Fuse.Elements.Element,Fuse.Elements.Visibility>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility, _setter));

    return type;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility___ObjInit_1(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, int defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

int StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__Get(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< int, ::app::Fuse::Elements::Element*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< int>(::app::Fuse::Elements::Visibility__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__IsEqual(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, int value, int oldValue)
{
    if (::uBox< int>(::app::Fuse::Elements::Visibility__typeof(), value) == ::uBox< int>(::app::Fuse::Elements::Visibility__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox< int>(::app::Fuse::Elements::Visibility__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::Visibility__typeof(), value), ::uBox< int>(::app::Fuse::Elements::Visibility__typeof(), oldValue));
}

StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__New_1(::uStatic* __this, int defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* inst = (StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility*)::uAllocObject(sizeof(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility), StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__OnChanged(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, ::app::Fuse::Elements::Element* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Elements::Element*>(owner);
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__Reset(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__ResetStyle(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__ResetStyleFor(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Elements::Element__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Elements::Element*>((::uObject*)n, ::app::Fuse::Elements::Element__typeof()));
    }
}

bool StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__Set(StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility* __this, ::app::Fuse::Elements::Element* owner, int value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Elements::Element*, int>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox< int>(::app::Fuse::Elements::Visibility__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_iOS_Button__float4__uType* StyleProperty__Fuse_iOS_Button__float4__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_iOS_Button__float4__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_iOS_Button__float4__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_iOS_Button__float4__uType), "Fuse.StyleProperty<Fuse.iOS.Button,float4>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_iOS_Button__float4__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_iOS_Button__float4, _changedCallback),
        "_handle", offsetof(StyleProperty__Fuse_iOS_Button__float4, _handle),
        "_setter", offsetof(StyleProperty__Fuse_iOS_Button__float4, _setter));

    return type;
}

void StyleProperty__Fuse_iOS_Button__float4___ObjInit_1(StyleProperty__Fuse_iOS_Button__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

StyleProperty__Fuse_iOS_Button__float4* StyleProperty__Fuse_iOS_Button__float4__New_1(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_iOS_Button__float4* inst = (StyleProperty__Fuse_iOS_Button__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_iOS_Button__float4), StyleProperty__Fuse_iOS_Button__float4__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_iOS_Button__float4__OnChanged(StyleProperty__Fuse_iOS_Button__float4* __this, ::app::Fuse::iOS::Button* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::iOS::Button*>(owner);
    }
}

bool StyleProperty__Fuse_iOS_Button__float4__Reset(StyleProperty__Fuse_iOS_Button__float4* __this, ::app::Fuse::iOS::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::iOS::Button*, ::app::Uno::Float4>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_iOS_Button__float4__ResetStyle(StyleProperty__Fuse_iOS_Button__float4* __this, ::app::Fuse::iOS::Button* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_iOS_Button__float4__ResetStyleFor(StyleProperty__Fuse_iOS_Button__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::iOS::Button__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::iOS::Button*>((::uObject*)n, ::app::Fuse::iOS::Button__typeof()));
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Node__bool__uType* StyleProperty__Fuse_Node__bool__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Node__bool__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Node__bool__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Node__bool__uType), "Fuse.StyleProperty<Fuse.Node,bool>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Node__bool__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Node__bool, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Node__bool, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Node__bool, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Node__bool, _setter));

    return type;
}

void StyleProperty__Fuse_Node__bool___ObjInit_1(StyleProperty__Fuse_Node__bool* __this, bool defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Node__bool___ObjInit_2(StyleProperty__Fuse_Node__bool* __this, bool defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

bool StyleProperty__Fuse_Node__bool__Get(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< bool, ::app::Fuse::Node*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< bool>(::app::Uno::Bool__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Node__bool__HasValue(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Node__bool__IsEqual(StyleProperty__Fuse_Node__bool* __this, bool value, bool oldValue)
{
    if (::uBox(::app::Uno::Bool__typeof(), value) == ::uBox(::app::Uno::Bool__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Bool__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Bool__typeof(), value), ::uBox(::app::Uno::Bool__typeof(), oldValue));
}

StyleProperty__Fuse_Node__bool* StyleProperty__Fuse_Node__bool__New_1(::uStatic* __this, bool defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Node__bool* inst = (StyleProperty__Fuse_Node__bool*)::uAllocObject(sizeof(StyleProperty__Fuse_Node__bool), StyleProperty__Fuse_Node__bool__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

StyleProperty__Fuse_Node__bool* StyleProperty__Fuse_Node__bool__New_2(::uStatic* __this, bool defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Node__bool* inst = (StyleProperty__Fuse_Node__bool*)::uAllocObject(sizeof(StyleProperty__Fuse_Node__bool), StyleProperty__Fuse_Node__bool__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Node__bool__OnChanged(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Node*>(owner);
    }
}

bool StyleProperty__Fuse_Node__bool__Reset(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Node*, bool>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Node__bool__ResetStyle(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Node__bool__ResetStyleFor(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Node__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Node*>((::uObject*)n, ::app::Fuse::Node__typeof()));
    }
}

bool StyleProperty__Fuse_Node__bool__Set(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner, bool value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    bool oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Node*, bool>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Bool__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Node__bool__SetStyle(StyleProperty__Fuse_Node__bool* __this, ::app::Fuse::Node* owner, bool value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Node*, bool>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Bool__typeof(), value));
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Node__Fuse_Node__uType* StyleProperty__Fuse_Node__Fuse_Node__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Node__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Node__Fuse_Node__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Node__Fuse_Node__uType), "Fuse.StyleProperty<Fuse.Node,Fuse.Node>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Node__Fuse_Node__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Node__Fuse_Node, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Node__Fuse_Node, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Node__Fuse_Node, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Node__Fuse_Node, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Node__Fuse_Node, _setter));

    return type;
}

void StyleProperty__Fuse_Node__Fuse_Node___ObjInit_1(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

::app::Fuse::Node* StyleProperty__Fuse_Node__Fuse_Node__Get(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Fuse::Node*, ::app::Fuse::Node*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::app::Fuse::Node*>(res, ::app::Fuse::Node__typeof());
        }
    }
}

bool StyleProperty__Fuse_Node__Fuse_Node__HasValue(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

StyleProperty__Fuse_Node__Fuse_Node* StyleProperty__Fuse_Node__Fuse_Node__New_1(::uStatic* __this, ::app::Fuse::Node* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Node__Fuse_Node* inst = (StyleProperty__Fuse_Node__Fuse_Node*)::uAllocObject(sizeof(StyleProperty__Fuse_Node__Fuse_Node), StyleProperty__Fuse_Node__Fuse_Node__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Node__Fuse_Node__OnChanged(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Node*>(owner);
    }
}

bool StyleProperty__Fuse_Node__Fuse_Node__Reset(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Node*, ::app::Fuse::Node*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Node__Fuse_Node__ResetStyle(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Node__Fuse_Node__ResetStyleFor(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Node__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Node*>((::uObject*)n, ::app::Fuse::Node__typeof()));
    }
}

bool StyleProperty__Fuse_Node__Fuse_Node__SetStyle(StyleProperty__Fuse_Node__Fuse_Node* __this, ::app::Fuse::Node* owner, ::app::Fuse::Node* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Node*, ::app::Fuse::Node*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Node__string__uType* StyleProperty__Fuse_Node__string__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Node__string__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Node__string__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Node__string__uType), "Fuse.StyleProperty<Fuse.Node,string>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Node__string__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Node__string, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Node__string, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Node__string, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Node__string, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Node__string, _setter));

    return type;
}

void StyleProperty__Fuse_Node__string___ObjInit_1(StyleProperty__Fuse_Node__string* __this, ::uString* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

::uString* StyleProperty__Fuse_Node__string__Get(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::uString*, ::app::Fuse::Node*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uCast< ::uString*>(res, ::app::Uno::String__typeof());
        }
    }
}

bool StyleProperty__Fuse_Node__string__HasValue(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    return ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 0;
}

bool StyleProperty__Fuse_Node__string__IsEqual(StyleProperty__Fuse_Node__string* __this, ::uString* value, ::uString* oldValue)
{
    if ((::uObject*)value == (::uObject*)oldValue)
    {
        return true;
    }

    if ((::uObject*)value == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uPtr< ::uString*>(value), (::uObject*)oldValue);
}

StyleProperty__Fuse_Node__string* StyleProperty__Fuse_Node__string__New_1(::uStatic* __this, ::uString* defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Node__string* inst = (StyleProperty__Fuse_Node__string*)::uAllocObject(sizeof(StyleProperty__Fuse_Node__string), StyleProperty__Fuse_Node__string__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Node__string__OnChanged(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Node*>(owner);
    }
}

bool StyleProperty__Fuse_Node__string__Reset(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Node*, ::uString*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Node__string__ResetStyle(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Node__string__ResetStyleFor(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Node__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Node*>((::uObject*)n, ::app::Fuse::Node__typeof()));
    }
}

bool StyleProperty__Fuse_Node__string__Set(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner, ::uString* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::uString* oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Node*, ::uString*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Node__string__SetStyle(StyleProperty__Fuse_Node__string* __this, ::app::Fuse::Node* owner, ::uString* value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (!__this->HasValue(owner))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Node*, ::uString*>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 1);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, (::uObject*)value);
            n->SetPropertyState(__this->_id, 1);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Shapes_Rectangle__float4__uType* StyleProperty__Fuse_Shapes_Rectangle__float4__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Shapes_Rectangle__float4__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Shapes_Rectangle__float4__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Shapes_Rectangle__float4__uType), "Fuse.StyleProperty<Fuse.Shapes.Rectangle,float4>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Shapes_Rectangle__float4__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Shapes_Rectangle__float4, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Shapes_Rectangle__float4, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Shapes_Rectangle__float4, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Shapes_Rectangle__float4, _setter));

    return type;
}

void StyleProperty__Fuse_Shapes_Rectangle__float4___ObjInit_1(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

::app::Uno::Float4 StyleProperty__Fuse_Shapes_Rectangle__float4__Get(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::app::Fuse::Shapes::Rectangle* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< ::app::Uno::Float4, ::app::Fuse::Shapes::Rectangle*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Shapes_Rectangle__float4__IsEqual(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::app::Uno::Float4 value, ::app::Uno::Float4 oldValue)
{
    if (::uBox(::app::Uno::Float4__typeof(), value) == ::uBox(::app::Uno::Float4__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float4__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float4__typeof(), value), ::uBox(::app::Uno::Float4__typeof(), oldValue));
}

StyleProperty__Fuse_Shapes_Rectangle__float4* StyleProperty__Fuse_Shapes_Rectangle__float4__New_1(::uStatic* __this, ::app::Uno::Float4 defaultValue, ::uDelegate* changedCallback)
{
    StyleProperty__Fuse_Shapes_Rectangle__float4* inst = (StyleProperty__Fuse_Shapes_Rectangle__float4*)::uAllocObject(sizeof(StyleProperty__Fuse_Shapes_Rectangle__float4), StyleProperty__Fuse_Shapes_Rectangle__float4__typeof());
    inst->_ObjInit_1(defaultValue, changedCallback);
    return inst;
}

void StyleProperty__Fuse_Shapes_Rectangle__float4__OnChanged(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::app::Fuse::Shapes::Rectangle* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Shapes::Rectangle*>(owner);
    }
}

bool StyleProperty__Fuse_Shapes_Rectangle__float4__Reset(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::app::Fuse::Shapes::Rectangle* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Shapes::Rectangle*, ::app::Uno::Float4>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Shapes_Rectangle__float4__ResetStyle(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::app::Fuse::Shapes::Rectangle* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Shapes_Rectangle__float4__ResetStyleFor(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Shapes::Rectangle__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Shapes::Rectangle*>((::uObject*)n, ::app::Fuse::Shapes::Rectangle__typeof()));
    }
}

bool StyleProperty__Fuse_Shapes_Rectangle__float4__Set(StyleProperty__Fuse_Shapes_Rectangle__float4* __this, ::app::Fuse::Shapes::Rectangle* owner, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    ::app::Uno::Float4 oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Shapes::Rectangle*, ::app::Uno::Float4>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float4__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Shapes_Shape__float__uType* StyleProperty__Fuse_Shapes_Shape__float__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Shapes_Shape__float__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Shapes_Shape__float__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Shapes_Shape__float__uType), "Fuse.StyleProperty<Fuse.Shapes.Shape,float>", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Shapes_Shape__float__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Shapes_Shape__float, _changedCallback),
        "_getter", offsetof(StyleProperty__Fuse_Shapes_Shape__float, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Shapes_Shape__float, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Shapes_Shape__float, _setter));

    return type;
}

void StyleProperty__Fuse_Shapes_Shape__float___ObjInit_1(StyleProperty__Fuse_Shapes_Shape__float* __this, float defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Shapes_Shape__float___ObjInit_2(StyleProperty__Fuse_Shapes_Shape__float* __this, float defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

float StyleProperty__Fuse_Shapes_Shape__float__Get(StyleProperty__Fuse_Shapes_Shape__float* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->_getter)->Invoke< float, ::app::Fuse::Shapes::Shape*>(owner);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) == 0)
        {
            return __this->_defaultValue;
        }
        else
        {
            ::uObject* res;
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_handle, &res);
            return ::uUnbox< float>(::app::Uno::Float__typeof(), res);
        }
    }
}

bool StyleProperty__Fuse_Shapes_Shape__float__IsEqual(StyleProperty__Fuse_Shapes_Shape__float* __this, float value, float oldValue)
{
    if (::uBox(::app::Uno::Float__typeof(), value) == ::uBox(::app::Uno::Float__typeof(), oldValue))
    {
        return true;
    }

    if (::uBox(::app::Uno::Float__typeof(), value) == NULL)
    {
        return false;
    }

    return ::app::Uno::Object::Equals(::uBox(::app::Uno::Float__typeof(), value), ::uBox(::app::Uno::Float__typeof(), oldValue));
}

StyleProperty__Fuse_Shapes_Shape__float* StyleProperty__Fuse_Shapes_Shape__float__New_2(::uStatic* __this, float defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Shapes_Shape__float* inst = (StyleProperty__Fuse_Shapes_Shape__float*)::uAllocObject(sizeof(StyleProperty__Fuse_Shapes_Shape__float), StyleProperty__Fuse_Shapes_Shape__float__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Shapes_Shape__float__OnChanged(StyleProperty__Fuse_Shapes_Shape__float* __this, ::app::Fuse::Shapes::Shape* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Shapes::Shape*>(owner);
    }
}

bool StyleProperty__Fuse_Shapes_Shape__float__Reset(StyleProperty__Fuse_Shapes_Shape__float* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Shapes::Shape*, float>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Shapes_Shape__float__ResetStyle(StyleProperty__Fuse_Shapes_Shape__float* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Shapes_Shape__float__ResetStyleFor(StyleProperty__Fuse_Shapes_Shape__float* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Shapes::Shape__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Shapes::Shape*>((::uObject*)n, ::app::Fuse::Shapes::Shape__typeof()));
    }
}

bool StyleProperty__Fuse_Shapes_Shape__float__Set(StyleProperty__Fuse_Shapes_Shape__float* __this, ::app::Fuse::Shapes::Shape* owner, float value)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    float oldValue = __this->Get(owner);

    if ((::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id) != 2) || !__this->IsEqual(value, oldValue))
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Shapes::Shape*, float>(owner, value);
            ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 2);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_handle, ::uBox(::app::Uno::Float__typeof(), value));
            n->SetPropertyState(__this->_id, 2);
        }

        __this->OnChanged(owner);
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__uType* StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__uType), "Fuse.StyleProperty<Fuse.Shapes.Shape,Fuse.Drawing.Brush>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush, _setter));

    return type;
}

void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush___ObjInit_1(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush___ObjInit_2(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__New_2(::uStatic* __this, ::app::Fuse::Drawing::Brush* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* inst = (StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush*)::uAllocObject(sizeof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush), StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__OnChanged(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Shapes::Shape* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Shapes::Shape*>(owner);
    }
}

bool StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__Reset(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Shapes::Shape*, ::app::Fuse::Drawing::Brush*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__ResetStyle(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__ResetStyleFor(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Shapes::Shape__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Shapes::Shape*>((::uObject*)n, ::app::Fuse::Shapes::Shape__typeof()));
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__uType* StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong<StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__uType*> type;
    if (type != NULL) return type;

    type = (StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__uType*)::uAllocClassType(sizeof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__uType), "Fuse.StyleProperty<Fuse.Shapes.Shape,Fuse.Drawing.Stroke>", false, 0, 5, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__typeof());
    type->__fp_ResetStyleFor = (void(*)(::app::Fuse::StyleProperty*, ::app::Fuse::Node*))StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__ResetStyleFor;

    type->SetStrongRefs(
        "_changedCallback", offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke, _changedCallback),
        "_defaultValue", offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke, _defaultValue),
        "_getter", offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke, _getter),
        "_handle", offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke, _handle),
        "_setter", offsetof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke, _setter));

    return type;
}

void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke___ObjInit_1(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* defaultValue, ::uDelegate* changedCallback)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty___ObjInit(__this);
    __this->_id = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultValue = defaultValue;
    __this->_changedCallback = changedCallback;
}

void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke___ObjInit_2(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_ObjInit_1(defaultValue, changedCallback);

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_setter, NULL) != ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_getter, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Style property - must provide getter and setter as a pair")));
    }

    __this->_setter = setter;
    __this->_getter = getter;
}

StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__New_2(::uStatic* __this, ::app::Fuse::Drawing::Stroke* defaultValue, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* inst = (StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke*)::uAllocObject(sizeof(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke), StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__typeof());
    inst->_ObjInit_2(defaultValue, changedCallback, setter, getter);
    return inst;
}

void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__OnChanged(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Shapes::Shape* owner)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_changedCallback, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->_changedCallback)->InvokeVoid< ::app::Fuse::Shapes::Shape*>(owner);
    }
}

bool StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__Reset(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s != 0)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->_setter, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->_setter)->InvokeVoid< ::app::Fuse::Shapes::Shape*, ::app::Fuse::Drawing::Stroke*>(owner, __this->_defaultValue);
        }
        else
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Clear(__this->_handle);
        }

        ::uPtr< ::app::Fuse::Node*>(n)->SetPropertyState(__this->_id, 0);
        __this->OnChanged(owner);
        return true;
    }

    return false;
}

bool StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__ResetStyle(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Shapes::Shape* owner)
{
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>((::uObject*)owner, ::app::Fuse::Node__typeof());
    int s = ::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_id);

    if (s == 1)
    {
        return __this->Reset(owner);
    }
    else
    {
        return false;
    }
}

void StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__ResetStyleFor(StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Shapes::Shape__typeof()))
    {
        __this->ResetStyle(::uCast< ::app::Fuse::Shapes::Shape*>((::uObject*)n, ::app::Fuse::Shapes::Shape__typeof()));
    }
}

}}
