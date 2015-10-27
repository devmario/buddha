#include <app/Experimental.Audio.Channel.h>
#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MixerHandle__bool.h>
#include <app/Fuse.Animations.MixerHandle__float.h>
#include <app/Fuse.Animations.MixerHandle__float4.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Transform.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.CacheFramebuffer.h>
#include <app/Fuse.Controls.Internal.WordWrapperWord.h>
#include <app/Fuse.Controls.Internal.WrappedLine.h>
#include <app/Fuse.Controls.TextEdit.LineCacheLine.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.ElementAtlas.h>
#include <app/Fuse.Elements.ElementBatch.h>
#include <app/Fuse.Elements.ElementBatchEntry.h>
#include <app/Fuse.Elements.IElementBatchDrawable.h>
#include <app/Fuse.Entities.Entity.h>
#include <app/Fuse.Input.Capturer.h>
#include <app/Fuse.Input.FocusGainedHandler.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Fuse.Input.IsFocusableChangedHandler.h>
#include <app/Fuse.Input.KeyPressedHandler.h>
#include <app/Fuse.Input.KeyReleasedHandler.h>
#include <app/Fuse.Input.Pointer_PELHolder.h>
#include <app/Fuse.Input.PointerEnteredHandler.h>
#include <app/Fuse.Input.PointerLeftHandler.h>
#include <app/Fuse.Input.PointerMovedHandler.h>
#include <app/Fuse.Input.PointerPressedHandler.h>
#include <app/Fuse.Input.PointerReleasedHandler.h>
#include <app/Fuse.Input.PointerWheelMovedHandler.h>
#include <app/Fuse.Input.TextEnteredHandler.h>
#include <app/Fuse.iOS.StatusBarConfig.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.Layouts.Column.h>
#include <app/Fuse.Layouts.Row.h>
#include <app/Fuse.Navigation.INavigationAnimator.h>
#include <app/Fuse.Navigation.IPageResourceBinding.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Physics.Body.h>
#include <app/Fuse.Physics.IRule.h>
#include <app/Fuse.Reactive.FuseJS.Timer_Time.h>
#include <app/Fuse.Reactive.JavaScript.h>
#include <app/Fuse.RenderTargetEntry.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Resources.IMemoryResource.h>
#include <app/Fuse.Resources.ISoftDisposable.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <app/Fuse.Scripting.NativeMember.h>
#include <app/Fuse.Stage.h>
#include <app/Fuse.Style.h>
#include <app/Fuse.StyleProperty.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <app/Fuse.UpdateListener.h>
#include <app/Uno.Action.h>
#include <app/Uno.Array.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.CharPunctuationChecker_PunctuationRange.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Controls_Internal_WrappedLine.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Controls_TextEdit_LineCacheLine.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Layouts_DefinitionBase_ParseDataItem.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Physics_IRule.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Style.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Transform.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_IFactory.h>
#include <app/Uno.Collections.List__byte__.h>
#include <app/Uno.Collections.List__char.h>
#include <app/Uno.Collections.List__Experimental_Audio_Channel.h>
#include <app/Uno.Collections.List__float2.h>
#include <app/Uno.Collections.List__framebuffer.h>
#include <app/Uno.Collections.List__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.List__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_bool_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_float_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_float4_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Elements-6d92b8d4.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Transform_.h>
#include <app/Uno.Collections.List__Fuse_Behavior.h>
#include <app/Uno.Collections.List__Fuse_CacheFramebuffer.h>
#include <app/Uno.Collections.List__Fuse_Controls_Internal_WordWrapperWord.h>
#include <app/Uno.Collections.List__Fuse_Controls_Internal_WrappedLine.h>
#include <app/Uno.Collections.List__Fuse_Controls_TextEdit_LineCacheLine.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.List__Fuse_Drawing_PathGeometry.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.List__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.List__Fuse_Elements_Element.h>
#include <app/Uno.Collections.List__Fuse_Elements_ElementAtlas.h>
#include <app/Uno.Collections.List__Fuse_Elements_ElementBatch.h>
#include <app/Uno.Collections.List__Fuse_Elements_ElementBatchEntry.h>
#include <app/Uno.Collections.List__Fuse_Elements_IElementBatchDrawable.h>
#include <app/Uno.Collections.List__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.List__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.List__Fuse_Input_FocusGainedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_FocusLostHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_IsFocusableChangedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_KeyPressedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_KeyReleasedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_Pointer_PELHolder.h>
#include <app/Uno.Collections.List__Fuse_Input_PointerEnteredHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_PointerLeftHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_PointerMovedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_PointerPressedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_PointerReleasedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_PointerWheelMovedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_TextEnteredHandler.h>
#include <app/Uno.Collections.List__Fuse_iOS_StatusBarConfig.h>
#include <app/Uno.Collections.List__Fuse_IViewport.h>
#include <app/Uno.Collections.List__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.List__Fuse_Layouts_DefinitionBase_ParseDataItem.h>
#include <app/Uno.Collections.List__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.List__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Collections.List__Fuse_Navigation_IPageResourceBinding.h>
#include <app/Uno.Collections.List__Fuse_Node.h>
#include <app/Uno.Collections.List__Fuse_Physics_Body.h>
#include <app/Uno.Collections.List__Fuse_Physics_IRule.h>
#include <app/Uno.Collections.List__Fuse_Reactive_FuseJS_Timer_Time.h>
#include <app/Uno.Collections.List__Fuse_Reactive_JavaScript.h>
#include <app/Uno.Collections.List__Fuse_RenderTargetEntry.h>
#include <app/Uno.Collections.List__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.List__Fuse_Resources_IMemoryResource.h>
#include <app/Uno.Collections.List__Fuse_Resources_ISoftDisposable.h>
#include <app/Uno.Collections.List__Fuse_Scripting_INameListener.h>
#include <app/Uno.Collections.List__Fuse_Scripting_NativeMember.h>
#include <app/Uno.Collections.List__Fuse_Stage.h>
#include <app/Uno.Collections.List__Fuse_Style.h>
#include <app/Uno.Collections.List__Fuse_StyleProperty.h>
#include <app/Uno.Collections.List__Fuse_Transform.h>
#include <app/Uno.Collections.List__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.List__Fuse_UpdateListener.h>
#include <app/Uno.Collections.List__int.h>
#include <app/Uno.Collections.List__object.h>
#include <app/Uno.Collections.List__string.h>
#include <app/Uno.Collections.List__Uno_Action.h>
#include <app/Uno.Collections.List__Uno_CharPunctuationChecker_PunctuationRange.h>
#include <app/Uno.Collections.List__Uno_Collections_ConcurrentCollection1_Mod-450746b7.h>
#include <app/Uno.Collections.List__Uno_Collections_ConcurrentCollection1_Mod-6c76231c.h>
#include <app/Uno.Collections.List__Uno_EventHandler.h>
#include <app/Uno.Collections.List__Uno_Graphics_PolygonFace.h>
#include <app/Uno.Collections.List__Uno_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Collections.List__Uno_Platform_Key.h>
#include <app/Uno.Collections.List__Uno_Recti.h>
#include <app/Uno.Collections.List__Uno_Runtime_Implementation_Internal_Forma-238cb01d.h>
#include <app/Uno.Collections.List__Uno_UX_FileSource.h>
#include <app/Uno.Collections.List__Uno_UX_IFactory.h>
#include <app/Uno.Collections.List__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.List__Uno_UX_Resource.h>
#include <app/Uno.Comparison__Fuse_Node.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Generic.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.IndexOutOfRangeException.h>
#include <app/Uno.Int.h>
#include <app/Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <app/Uno.Platform.Key.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringToken.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.IFactory.h>
#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Resource.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__byte____uType* List__byte____typeof()
{
    static ::uStaticStrong<List__byte____uType*> type;
    if (type != NULL) return type;

    type = (List__byte____uType*)::uAllocClassType(sizeof(List__byte____uType), "Uno.Collections.List<byte[]>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__byte__, _data));

    return type;
}

void List__byte_____ObjInit(List__byte__* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__byte____Add(List__byte__* __this, ::uArray* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uArray*>(__this->_used++) = item;
    __this->_version++;
}

void List__byte____EnsureCapacity(List__byte__* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::uGetArrayType(::app::Uno::Byte__typeof()), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::uGetArrayType(::app::Uno::Byte__typeof()), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::uArray*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uArray*>(i);
        }

        __this->_data = newData;
    }
}

::app::Uno::Collections::List1_Enumerator__byte__ List__byte____GetEnumerator(List__byte__* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__byte____New_1(NULL, __this);
}

List__byte__* List__byte____New_1(::uStatic* __this)
{
    List__byte__* inst = (List__byte__*)::uAllocObject(sizeof(List__byte__), List__byte____typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__char__uType* List__char__typeof()
{
    static ::uStaticStrong<List__char__uType*> type;
    if (type != NULL) return type;

    type = (List__char__uType*)::uAllocClassType(sizeof(List__char__uType), "Uno.Collections.List<char>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__char, _data));

    return type;
}

void List__char___ObjInit_1(List__char* __this, int capacity)
{
    __this->_data = ::uNewArray(::app::Uno::Char__typeof(), capacity);
    __this->_used = 0;
}

void List__char__Add(List__char* __this, ::uChar item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->Item< ::uChar>(__this->_used++) = item;
    __this->_version++;
}

void List__char__EnsureCapacity(List__char* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Char__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::Char__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->Item< ::uChar>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uChar>(i);
        }

        __this->_data = newData;
    }
}

List__char* List__char__New_2(::uStatic* __this, int capacity)
{
    List__char* inst = (List__char*)::uAllocObject(sizeof(List__char), List__char__typeof());
    inst->_ObjInit_1(capacity);
    return inst;
}

::uArray* List__char__ToArray(List__char* __this)
{
    ::uArray* t = ::uNewArray(::app::Uno::Char__typeof(), __this->_used);

    for (int i = 0; i < __this->_used; i++)
    {
        t->Item< ::uChar>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uChar>(i);
    }

    return t;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Experimental_Audio_Channel__uType* List__Experimental_Audio_Channel__typeof()
{
    static ::uStaticStrong<List__Experimental_Audio_Channel__uType*> type;
    if (type != NULL) return type;

    type = (List__Experimental_Audio_Channel__uType*)::uAllocClassType(sizeof(List__Experimental_Audio_Channel__uType), "Uno.Collections.List<Experimental.Audio.Channel>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Experimental_Audio_Channel, _data));

    return type;
}

void List__Experimental_Audio_Channel___ObjInit(List__Experimental_Audio_Channel* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Experimental_Audio_Channel__Add(List__Experimental_Audio_Channel* __this, ::app::Experimental::Audio::Channel* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Experimental::Audio::Channel*>(__this->_used++) = item;
    __this->_version++;
}

void List__Experimental_Audio_Channel__BoundsCheck(List__Experimental_Audio_Channel* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Experimental_Audio_Channel__EnsureCapacity(List__Experimental_Audio_Channel* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Experimental::Audio::Channel__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Experimental::Audio::Channel__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Experimental::Audio::Channel*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Experimental::Audio::Channel*>(i);
        }

        __this->_data = newData;
    }
}

int List__Experimental_Audio_Channel__get_Count(List__Experimental_Audio_Channel* __this)
{
    return __this->_used;
}

::app::Uno::Collections::List1_Enumerator__Experimental_Audio_Channel List__Experimental_Audio_Channel__GetEnumerator(List__Experimental_Audio_Channel* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Experimental_Audio_Channel__New_1(NULL, __this);
}

List__Experimental_Audio_Channel* List__Experimental_Audio_Channel__New_1(::uStatic* __this)
{
    List__Experimental_Audio_Channel* inst = (List__Experimental_Audio_Channel*)::uAllocObject(sizeof(List__Experimental_Audio_Channel), List__Experimental_Audio_Channel__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Experimental_Audio_Channel__Remove(List__Experimental_Audio_Channel* __this, ::app::Experimental::Audio::Channel* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Experimental_Audio_Channel(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Experimental::Audio::Channel*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Experimental_Audio_Channel__RemoveAt(List__Experimental_Audio_Channel* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Experimental::Audio::Channel*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Experimental::Audio::Channel*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Experimental::Audio::Channel*>(__this->_used) = NULL;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__float2__uType* List__float2__typeof()
{
    static ::uStaticStrong<List__float2__uType*> type;
    if (type != NULL) return type;

    type = (List__float2__uType*)::uAllocClassType(sizeof(List__float2__uType), "Uno.Collections.List<float2>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))List__float2__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__float2__typeof(), offsetof(List__float2__uType, __interface_0));

    type->SetStrongRefs(
        "_data", offsetof(List__float2, _data));

    return type;
}

::uObject* List__float2__GetEnumerator_boxed(List__float2* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__float2__typeof(), __this->GetEnumerator());
}

void List__float2___ObjInit(List__float2* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__float2__Add(List__float2* __this, ::app::Uno::Float2 item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Float2>(__this->_used++) = item;
    __this->_version++;
}

void List__float2__BoundsCheck(List__float2* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__float2__EnsureCapacity(List__float2* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Float2__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::Float2__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->Item< ::app::Uno::Float2>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Float2>(i);
        }

        __this->_data = newData;
    }
}

int List__float2__get_Count(List__float2* __this)
{
    return __this->_used;
}

::app::Uno::Float2 List__float2__get_Item(List__float2* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Float2>(index);
}

::app::Uno::Collections::List1_Enumerator__float2 List__float2__GetEnumerator(List__float2* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__float2__New_1(NULL, __this);
}

List__float2* List__float2__New_1(::uStatic* __this)
{
    List__float2* inst = (List__float2*)::uAllocObject(sizeof(List__float2), List__float2__typeof());
    inst->_ObjInit();
    return inst;
}

void List__float2__set_Item(List__float2* __this, int index, ::app::Uno::Float2 value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Float2>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__framebuffer__uType* List__framebuffer__typeof()
{
    static ::uStaticStrong<List__framebuffer__uType*> type;
    if (type != NULL) return type;

    type = (List__framebuffer__uType*)::uAllocClassType(sizeof(List__framebuffer__uType), "Uno.Collections.List<framebuffer>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__framebuffer, _data));

    return type;
}

void List__framebuffer___ObjInit(List__framebuffer* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__framebuffer__Add(List__framebuffer* __this, ::app::Uno::Graphics::Framebuffer* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Graphics::Framebuffer*>(__this->_used++) = item;
    __this->_version++;
}

void List__framebuffer__BoundsCheck(List__framebuffer* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__framebuffer__EnsureCapacity(List__framebuffer* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Graphics::Framebuffer__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::Graphics::Framebuffer__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Uno::Graphics::Framebuffer*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Graphics::Framebuffer*>(i);
        }

        __this->_data = newData;
    }
}

int List__framebuffer__get_Count(List__framebuffer* __this)
{
    return __this->_used;
}

::app::Uno::Graphics::Framebuffer* List__framebuffer__get_Item(List__framebuffer* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Graphics::Framebuffer*>(index);
}

List__framebuffer* List__framebuffer__New_1(::uStatic* __this)
{
    List__framebuffer* inst = (List__framebuffer*)::uAllocObject(sizeof(List__framebuffer), List__framebuffer__typeof());
    inst->_ObjInit();
    return inst;
}

void List__framebuffer__RemoveAt(List__framebuffer* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Graphics::Framebuffer*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Graphics::Framebuffer*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Graphics::Framebuffer*>(__this->_used) = NULL;
    __this->_version++;
}

void List__framebuffer__set_Item(List__framebuffer* __this, int index, ::app::Uno::Graphics::Framebuffer* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Graphics::Framebuffer*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Animations_Animator__uType* List__Fuse_Animations_Animator__typeof()
{
    static ::uStaticStrong<List__Fuse_Animations_Animator__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Animations_Animator__uType*)::uAllocClassType(sizeof(List__Fuse_Animations_Animator__uType), "Uno.Collections.List<Fuse.Animations.Animator>", false, 2, 1, 0);

    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Animations::Animator*))List__Fuse_Animations_Animator__Add;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Animations_Animator__typeof(), offsetof(List__Fuse_Animations_Animator__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Animations_Animator__typeof(), offsetof(List__Fuse_Animations_Animator__uType, __interface_1));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Animations_Animator, _data));

    return type;
}

void List__Fuse_Animations_Animator___ObjInit(List__Fuse_Animations_Animator* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Animations_Animator__Add(List__Fuse_Animations_Animator* __this, ::app::Fuse::Animations::Animator* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::Animator*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Animations_Animator__BoundsCheck(List__Fuse_Animations_Animator* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Animations_Animator__EnsureCapacity(List__Fuse_Animations_Animator* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Animations::Animator__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Animations::Animator__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Animations::Animator*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::Animator*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Animations_Animator__get_Count(List__Fuse_Animations_Animator* __this)
{
    return __this->_used;
}

::app::Fuse::Animations::Animator* List__Fuse_Animations_Animator__get_Item(List__Fuse_Animations_Animator* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::Animator*>(index);
}

List__Fuse_Animations_Animator* List__Fuse_Animations_Animator__New_1(::uStatic* __this)
{
    List__Fuse_Animations_Animator* inst = (List__Fuse_Animations_Animator*)::uAllocObject(sizeof(List__Fuse_Animations_Animator), List__Fuse_Animations_Animator__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Animations_Animator__set_Item(List__Fuse_Animations_Animator* __this, int index, ::app::Fuse::Animations::Animator* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::Animator*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Animations_IMixerMaster__uType* List__Fuse_Animations_IMixerMaster__typeof()
{
    static ::uStaticStrong<List__Fuse_Animations_IMixerMaster__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Animations_IMixerMaster__uType*)::uAllocClassType(sizeof(List__Fuse_Animations_IMixerMaster__uType), "Uno.Collections.List<Fuse.Animations.IMixerMaster>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Animations_IMixerMaster, _data));

    return type;
}

void List__Fuse_Animations_IMixerMaster___ObjInit(List__Fuse_Animations_IMixerMaster* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Animations_IMixerMaster__Add(List__Fuse_Animations_IMixerMaster* __this, ::uObject* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Animations_IMixerMaster__BoundsCheck(List__Fuse_Animations_IMixerMaster* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

bool List__Fuse_Animations_IMixerMaster__Contains(List__Fuse_Animations_IMixerMaster* __this, ::uObject* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Animations_IMixerMaster(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i), item))
        {
            return true;
        }
    }

    return false;
}

void List__Fuse_Animations_IMixerMaster__EnsureCapacity(List__Fuse_Animations_IMixerMaster* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Animations::IMixerMaster__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Animations::IMixerMaster__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::uObject*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Animations_IMixerMaster__get_Count(List__Fuse_Animations_IMixerMaster* __this)
{
    return __this->_used;
}

::uObject* List__Fuse_Animations_IMixerMaster__get_Item(List__Fuse_Animations_IMixerMaster* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(index);
}

List__Fuse_Animations_IMixerMaster* List__Fuse_Animations_IMixerMaster__New_1(::uStatic* __this)
{
    List__Fuse_Animations_IMixerMaster* inst = (List__Fuse_Animations_IMixerMaster*)::uAllocObject(sizeof(List__Fuse_Animations_IMixerMaster), List__Fuse_Animations_IMixerMaster__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_Animations_IMixerMaster__Remove(List__Fuse_Animations_IMixerMaster* __this, ::uObject* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Animations_IMixerMaster(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Animations_IMixerMaster__RemoveAt(List__Fuse_Animations_IMixerMaster* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Animations_IMixerMaster__set_Item(List__Fuse_Animations_IMixerMaster* __this, int index, ::uObject* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Animations_MixerHandle_bool___uType* List__Fuse_Animations_MixerHandle_bool___typeof()
{
    static ::uStaticStrong<List__Fuse_Animations_MixerHandle_bool___uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Animations_MixerHandle_bool___uType*)::uAllocClassType(sizeof(List__Fuse_Animations_MixerHandle_bool___uType), "Uno.Collections.List<Fuse.Animations.MixerHandle<bool>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Animations_MixerHandle_bool_, _data));

    return type;
}

void List__Fuse_Animations_MixerHandle_bool____ObjInit(List__Fuse_Animations_MixerHandle_bool_* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Animations_MixerHandle_bool___BoundsCheck(List__Fuse_Animations_MixerHandle_bool_* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Animations_MixerHandle_bool___EnsureCapacity(List__Fuse_Animations_MixerHandle_bool_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Animations::MixerHandle__bool__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Animations::MixerHandle__bool__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Animations::MixerHandle__bool*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__bool*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Animations_MixerHandle_bool___get_Count(List__Fuse_Animations_MixerHandle_bool_* __this)
{
    return __this->_used;
}

::app::Fuse::Animations::MixerHandle__bool* List__Fuse_Animations_MixerHandle_bool___get_Item(List__Fuse_Animations_MixerHandle_bool_* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__bool*>(index);
}

::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_bool_ List__Fuse_Animations_MixerHandle_bool___GetEnumerator(List__Fuse_Animations_MixerHandle_bool_* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_bool___New_1(NULL, __this);
}

void List__Fuse_Animations_MixerHandle_bool___Insert(List__Fuse_Animations_MixerHandle_bool_* __this, int index, ::app::Fuse::Animations::MixerHandle__bool* item)
{
    if ((index < 0) || (index > __this->_used))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->EnsureCapacity();

    for (int i = __this->_used; i >= index; i--)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__bool*>(i + 1) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__bool*>(i);
    }

    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__bool*>(index) = item;
    __this->_version++;
    __this->_used++;
}

List__Fuse_Animations_MixerHandle_bool_* List__Fuse_Animations_MixerHandle_bool___New_1(::uStatic* __this)
{
    List__Fuse_Animations_MixerHandle_bool_* inst = (List__Fuse_Animations_MixerHandle_bool_*)::uAllocObject(sizeof(List__Fuse_Animations_MixerHandle_bool_), List__Fuse_Animations_MixerHandle_bool___typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_Animations_MixerHandle_bool___Remove(List__Fuse_Animations_MixerHandle_bool_* __this, ::app::Fuse::Animations::MixerHandle__bool* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Animations_MixerHandle_bool_(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__bool*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Animations_MixerHandle_bool___RemoveAt(List__Fuse_Animations_MixerHandle_bool_* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__bool*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__bool*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__bool*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Animations_MixerHandle_bool___set_Item(List__Fuse_Animations_MixerHandle_bool_* __this, int index, ::app::Fuse::Animations::MixerHandle__bool* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__bool*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Animations_MixerHandle_float___uType* List__Fuse_Animations_MixerHandle_float___typeof()
{
    static ::uStaticStrong<List__Fuse_Animations_MixerHandle_float___uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Animations_MixerHandle_float___uType*)::uAllocClassType(sizeof(List__Fuse_Animations_MixerHandle_float___uType), "Uno.Collections.List<Fuse.Animations.MixerHandle<float>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Animations_MixerHandle_float_, _data));

    return type;
}

void List__Fuse_Animations_MixerHandle_float____ObjInit(List__Fuse_Animations_MixerHandle_float_* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Animations_MixerHandle_float___BoundsCheck(List__Fuse_Animations_MixerHandle_float_* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Animations_MixerHandle_float___EnsureCapacity(List__Fuse_Animations_MixerHandle_float_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Animations::MixerHandle__float__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Animations::MixerHandle__float__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Animations::MixerHandle__float*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__float*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Animations_MixerHandle_float___get_Count(List__Fuse_Animations_MixerHandle_float_* __this)
{
    return __this->_used;
}

::app::Fuse::Animations::MixerHandle__float* List__Fuse_Animations_MixerHandle_float___get_Item(List__Fuse_Animations_MixerHandle_float_* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__float*>(index);
}

::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_float_ List__Fuse_Animations_MixerHandle_float___GetEnumerator(List__Fuse_Animations_MixerHandle_float_* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_float___New_1(NULL, __this);
}

void List__Fuse_Animations_MixerHandle_float___Insert(List__Fuse_Animations_MixerHandle_float_* __this, int index, ::app::Fuse::Animations::MixerHandle__float* item)
{
    if ((index < 0) || (index > __this->_used))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->EnsureCapacity();

    for (int i = __this->_used; i >= index; i--)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__float*>(i + 1) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__float*>(i);
    }

    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__float*>(index) = item;
    __this->_version++;
    __this->_used++;
}

List__Fuse_Animations_MixerHandle_float_* List__Fuse_Animations_MixerHandle_float___New_1(::uStatic* __this)
{
    List__Fuse_Animations_MixerHandle_float_* inst = (List__Fuse_Animations_MixerHandle_float_*)::uAllocObject(sizeof(List__Fuse_Animations_MixerHandle_float_), List__Fuse_Animations_MixerHandle_float___typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_Animations_MixerHandle_float___Remove(List__Fuse_Animations_MixerHandle_float_* __this, ::app::Fuse::Animations::MixerHandle__float* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Animations_MixerHandle_float_(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__float*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Animations_MixerHandle_float___RemoveAt(List__Fuse_Animations_MixerHandle_float_* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__float*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__float*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__float*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Animations_MixerHandle_float___set_Item(List__Fuse_Animations_MixerHandle_float_* __this, int index, ::app::Fuse::Animations::MixerHandle__float* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__float*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Animations_MixerHandle_float4___uType* List__Fuse_Animations_MixerHandle_float4___typeof()
{
    static ::uStaticStrong<List__Fuse_Animations_MixerHandle_float4___uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Animations_MixerHandle_float4___uType*)::uAllocClassType(sizeof(List__Fuse_Animations_MixerHandle_float4___uType), "Uno.Collections.List<Fuse.Animations.MixerHandle<float4>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Animations_MixerHandle_float4_, _data));

    return type;
}

void List__Fuse_Animations_MixerHandle_float4____ObjInit(List__Fuse_Animations_MixerHandle_float4_* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Animations_MixerHandle_float4___BoundsCheck(List__Fuse_Animations_MixerHandle_float4_* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Animations_MixerHandle_float4___EnsureCapacity(List__Fuse_Animations_MixerHandle_float4_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Animations::MixerHandle__float4__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Animations::MixerHandle__float4__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Animations::MixerHandle__float4*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__float4*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Animations_MixerHandle_float4___get_Count(List__Fuse_Animations_MixerHandle_float4_* __this)
{
    return __this->_used;
}

::app::Fuse::Animations::MixerHandle__float4* List__Fuse_Animations_MixerHandle_float4___get_Item(List__Fuse_Animations_MixerHandle_float4_* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__float4*>(index);
}

::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_float4_ List__Fuse_Animations_MixerHandle_float4___GetEnumerator(List__Fuse_Animations_MixerHandle_float4_* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_float4___New_1(NULL, __this);
}

void List__Fuse_Animations_MixerHandle_float4___Insert(List__Fuse_Animations_MixerHandle_float4_* __this, int index, ::app::Fuse::Animations::MixerHandle__float4* item)
{
    if ((index < 0) || (index > __this->_used))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->EnsureCapacity();

    for (int i = __this->_used; i >= index; i--)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__float4*>(i + 1) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__float4*>(i);
    }

    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__float4*>(index) = item;
    __this->_version++;
    __this->_used++;
}

List__Fuse_Animations_MixerHandle_float4_* List__Fuse_Animations_MixerHandle_float4___New_1(::uStatic* __this)
{
    List__Fuse_Animations_MixerHandle_float4_* inst = (List__Fuse_Animations_MixerHandle_float4_*)::uAllocObject(sizeof(List__Fuse_Animations_MixerHandle_float4_), List__Fuse_Animations_MixerHandle_float4___typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_Animations_MixerHandle_float4___Remove(List__Fuse_Animations_MixerHandle_float4_* __this, ::app::Fuse::Animations::MixerHandle__float4* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Animations_MixerHandle_float4_(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__float4*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Animations_MixerHandle_float4___RemoveAt(List__Fuse_Animations_MixerHandle_float4_* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__float4*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__float4*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__float4*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Animations_MixerHandle_float4___set_Item(List__Fuse_Animations_MixerHandle_float4_* __this, int index, ::app::Fuse::Animations::MixerHandle__float4* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__float4*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___uType* List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___typeof()
{
    static ::uStaticStrong<List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___uType*)::uAllocClassType(sizeof(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___uType), "Uno.Collections.List<Fuse.Animations.MixerHandle<Fuse.Elements.Visibility>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_, _data));

    return type;
}

void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility____ObjInit(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___BoundsCheck(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___EnsureCapacity(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___get_Count(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this)
{
    return __this->_used;
}

::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___get_Item(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(index);
}

::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_ List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___GetEnumerator(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___New_1(NULL, __this);
}

void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___Insert(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* item)
{
    if ((index < 0) || (index > __this->_used))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->EnsureCapacity();

    for (int i = __this->_used; i >= index; i--)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(i + 1) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(i);
    }

    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(index) = item;
    __this->_version++;
    __this->_used++;
}

List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___New_1(::uStatic* __this)
{
    List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* inst = (List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*)::uAllocObject(sizeof(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_), List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___Remove(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___RemoveAt(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility___set_Item(List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Animations_MixerHandle_Fuse_Transform___uType* List__Fuse_Animations_MixerHandle_Fuse_Transform___typeof()
{
    static ::uStaticStrong<List__Fuse_Animations_MixerHandle_Fuse_Transform___uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Animations_MixerHandle_Fuse_Transform___uType*)::uAllocClassType(sizeof(List__Fuse_Animations_MixerHandle_Fuse_Transform___uType), "Uno.Collections.List<Fuse.Animations.MixerHandle<Fuse.Transform>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Animations_MixerHandle_Fuse_Transform_, _data));

    return type;
}

void List__Fuse_Animations_MixerHandle_Fuse_Transform____ObjInit(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Animations_MixerHandle_Fuse_Transform___BoundsCheck(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Animations_MixerHandle_Fuse_Transform___EnsureCapacity(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Animations::MixerHandle__Fuse_Transform__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Animations::MixerHandle__Fuse_Transform__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Animations_MixerHandle_Fuse_Transform___get_Count(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this)
{
    return __this->_used;
}

::app::Fuse::Animations::MixerHandle__Fuse_Transform* List__Fuse_Animations_MixerHandle_Fuse_Transform___get_Item(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(index);
}

::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_ List__Fuse_Animations_MixerHandle_Fuse_Transform___GetEnumerator(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___New_1(NULL, __this);
}

void List__Fuse_Animations_MixerHandle_Fuse_Transform___Insert(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* item)
{
    if ((index < 0) || (index > __this->_used))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->EnsureCapacity();

    for (int i = __this->_used; i >= index; i--)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(i + 1) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(i);
    }

    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(index) = item;
    __this->_version++;
    __this->_used++;
}

List__Fuse_Animations_MixerHandle_Fuse_Transform_* List__Fuse_Animations_MixerHandle_Fuse_Transform___New_1(::uStatic* __this)
{
    List__Fuse_Animations_MixerHandle_Fuse_Transform_* inst = (List__Fuse_Animations_MixerHandle_Fuse_Transform_*)::uAllocObject(sizeof(List__Fuse_Animations_MixerHandle_Fuse_Transform_), List__Fuse_Animations_MixerHandle_Fuse_Transform___typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_Animations_MixerHandle_Fuse_Transform___Remove(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Animations_MixerHandle_Fuse_Transform_(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Animations_MixerHandle_Fuse_Transform___RemoveAt(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Animations_MixerHandle_Fuse_Transform___set_Item(List__Fuse_Animations_MixerHandle_Fuse_Transform_* __this, int index, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Behavior__uType* List__Fuse_Behavior__typeof()
{
    static ::uStaticStrong<List__Fuse_Behavior__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Behavior__uType*)::uAllocClassType(sizeof(List__Fuse_Behavior__uType), "Uno.Collections.List<Fuse.Behavior>", false, 3, 1, 0);

    type->__interface_0.__fp_get_Item = (::app::Fuse::Behavior*(*)(void*, int))List__Fuse_Behavior__get_Item;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Behavior*))List__Fuse_Behavior__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Behavior*))List__Fuse_Behavior__Remove;
    type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_Behavior__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Behavior__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Behavior__typeof(), offsetof(List__Fuse_Behavior__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Behavior__typeof(), offsetof(List__Fuse_Behavior__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Behavior__typeof(), offsetof(List__Fuse_Behavior__uType, __interface_2));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Behavior, _data));

    return type;
}

::uObject* List__Fuse_Behavior__GetEnumerator_boxed(List__Fuse_Behavior* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Behavior__typeof(), __this->GetEnumerator());
}

void List__Fuse_Behavior___ObjInit(List__Fuse_Behavior* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Behavior__Add(List__Fuse_Behavior* __this, ::app::Fuse::Behavior* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Behavior*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Behavior__BoundsCheck(List__Fuse_Behavior* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Behavior__EnsureCapacity(List__Fuse_Behavior* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Behavior__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Behavior__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Behavior*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Behavior*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Behavior__get_Count(List__Fuse_Behavior* __this)
{
    return __this->_used;
}

::app::Fuse::Behavior* List__Fuse_Behavior__get_Item(List__Fuse_Behavior* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Behavior*>(index);
}

::app::Uno::Collections::List1_Enumerator__Fuse_Behavior List__Fuse_Behavior__GetEnumerator(List__Fuse_Behavior* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Behavior__New_1(NULL, __this);
}

List__Fuse_Behavior* List__Fuse_Behavior__New_1(::uStatic* __this)
{
    List__Fuse_Behavior* inst = (List__Fuse_Behavior*)::uAllocObject(sizeof(List__Fuse_Behavior), List__Fuse_Behavior__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_Behavior__Remove(List__Fuse_Behavior* __this, ::app::Fuse::Behavior* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Behavior(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Behavior*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Behavior__RemoveAt(List__Fuse_Behavior* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Behavior*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Behavior*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Behavior*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Behavior__set_Item(List__Fuse_Behavior* __this, int index, ::app::Fuse::Behavior* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Behavior*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_CacheFramebuffer__uType* List__Fuse_CacheFramebuffer__typeof()
{
    static ::uStaticStrong<List__Fuse_CacheFramebuffer__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_CacheFramebuffer__uType*)::uAllocClassType(sizeof(List__Fuse_CacheFramebuffer__uType), "Uno.Collections.List<Fuse.CacheFramebuffer>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_CacheFramebuffer, _data));

    return type;
}

void List__Fuse_CacheFramebuffer___ObjInit(List__Fuse_CacheFramebuffer* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_CacheFramebuffer__Add(List__Fuse_CacheFramebuffer* __this, ::app::Fuse::CacheFramebuffer* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::CacheFramebuffer*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_CacheFramebuffer__BoundsCheck(List__Fuse_CacheFramebuffer* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_CacheFramebuffer__EnsureCapacity(List__Fuse_CacheFramebuffer* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::CacheFramebuffer__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::CacheFramebuffer__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::CacheFramebuffer*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::CacheFramebuffer*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_CacheFramebuffer__get_Count(List__Fuse_CacheFramebuffer* __this)
{
    return __this->_used;
}

::app::Fuse::CacheFramebuffer* List__Fuse_CacheFramebuffer__get_Item(List__Fuse_CacheFramebuffer* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::CacheFramebuffer*>(index);
}

::app::Uno::Collections::List1_Enumerator__Fuse_CacheFramebuffer List__Fuse_CacheFramebuffer__GetEnumerator(List__Fuse_CacheFramebuffer* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_CacheFramebuffer__New_1(NULL, __this);
}

List__Fuse_CacheFramebuffer* List__Fuse_CacheFramebuffer__New_1(::uStatic* __this)
{
    List__Fuse_CacheFramebuffer* inst = (List__Fuse_CacheFramebuffer*)::uAllocObject(sizeof(List__Fuse_CacheFramebuffer), List__Fuse_CacheFramebuffer__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_CacheFramebuffer__Remove(List__Fuse_CacheFramebuffer* __this, ::app::Fuse::CacheFramebuffer* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_CacheFramebuffer(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::CacheFramebuffer*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_CacheFramebuffer__RemoveAt(List__Fuse_CacheFramebuffer* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::CacheFramebuffer*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::CacheFramebuffer*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::CacheFramebuffer*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_CacheFramebuffer__set_Item(List__Fuse_CacheFramebuffer* __this, int index, ::app::Fuse::CacheFramebuffer* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::CacheFramebuffer*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Controls_Internal_WordWrapperWord__uType* List__Fuse_Controls_Internal_WordWrapperWord__typeof()
{
    static ::uStaticStrong<List__Fuse_Controls_Internal_WordWrapperWord__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Controls_Internal_WordWrapperWord__uType*)::uAllocClassType(sizeof(List__Fuse_Controls_Internal_WordWrapperWord__uType), "Uno.Collections.List<Fuse.Controls.Internal.WordWrapperWord>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Controls_Internal_WordWrapperWord, _data));

    return type;
}

void List__Fuse_Controls_Internal_WordWrapperWord___ObjInit(List__Fuse_Controls_Internal_WordWrapperWord* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Controls_Internal_WordWrapperWord__Add(List__Fuse_Controls_Internal_WordWrapperWord* __this, ::app::Fuse::Controls::Internal::WordWrapperWord* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Controls::Internal::WordWrapperWord*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Controls_Internal_WordWrapperWord__BoundsCheck(List__Fuse_Controls_Internal_WordWrapperWord* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Controls_Internal_WordWrapperWord__EnsureCapacity(List__Fuse_Controls_Internal_WordWrapperWord* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Controls::Internal::WordWrapperWord__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Controls::Internal::WordWrapperWord__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Controls::Internal::WordWrapperWord*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Controls::Internal::WordWrapperWord*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Controls_Internal_WordWrapperWord__get_Count(List__Fuse_Controls_Internal_WordWrapperWord* __this)
{
    return __this->_used;
}

::app::Fuse::Controls::Internal::WordWrapperWord* List__Fuse_Controls_Internal_WordWrapperWord__get_Item(List__Fuse_Controls_Internal_WordWrapperWord* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Controls::Internal::WordWrapperWord*>(index);
}

List__Fuse_Controls_Internal_WordWrapperWord* List__Fuse_Controls_Internal_WordWrapperWord__New_1(::uStatic* __this)
{
    List__Fuse_Controls_Internal_WordWrapperWord* inst = (List__Fuse_Controls_Internal_WordWrapperWord*)::uAllocObject(sizeof(List__Fuse_Controls_Internal_WordWrapperWord), List__Fuse_Controls_Internal_WordWrapperWord__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Controls_Internal_WordWrapperWord__set_Item(List__Fuse_Controls_Internal_WordWrapperWord* __this, int index, ::app::Fuse::Controls::Internal::WordWrapperWord* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Controls::Internal::WordWrapperWord*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Controls_Internal_WrappedLine__uType* List__Fuse_Controls_Internal_WrappedLine__typeof()
{
    static ::uStaticStrong<List__Fuse_Controls_Internal_WrappedLine__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Controls_Internal_WrappedLine__uType*)::uAllocClassType(sizeof(List__Fuse_Controls_Internal_WrappedLine__uType), "Uno.Collections.List<Fuse.Controls.Internal.WrappedLine>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Controls_Internal_WrappedLine__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Controls_Internal_WrappedLine__typeof(), offsetof(List__Fuse_Controls_Internal_WrappedLine__uType, __interface_0));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Controls_Internal_WrappedLine, _data));

    return type;
}

::uObject* List__Fuse_Controls_Internal_WrappedLine__GetEnumerator_boxed(List__Fuse_Controls_Internal_WrappedLine* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Controls_Internal_WrappedLine__typeof(), __this->GetEnumerator());
}

void List__Fuse_Controls_Internal_WrappedLine___ObjInit(List__Fuse_Controls_Internal_WrappedLine* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Controls_Internal_WrappedLine__Add(List__Fuse_Controls_Internal_WrappedLine* __this, ::app::Fuse::Controls::Internal::WrappedLine* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Controls::Internal::WrappedLine*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Controls_Internal_WrappedLine__AddRange(List__Fuse_Controls_Internal_WrappedLine* __this, ::uObject* items)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Controls_Internal_WrappedLine::GetEnumerator(::uPtr< ::uObject*>(items)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Controls::Internal::WrappedLine* i = ::app::Uno::Collections::IEnumerator__Fuse_Controls_Internal_WrappedLine::Current(::uPtr< ::uObject*>(enum_123));
        __this->Add(i);
    }
}

void List__Fuse_Controls_Internal_WrappedLine__EnsureCapacity(List__Fuse_Controls_Internal_WrappedLine* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Controls::Internal::WrappedLine__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Controls::Internal::WrappedLine__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Controls::Internal::WrappedLine*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Controls::Internal::WrappedLine*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Controls_Internal_WrappedLine__get_Count(List__Fuse_Controls_Internal_WrappedLine* __this)
{
    return __this->_used;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Controls_Internal_WrappedLine List__Fuse_Controls_Internal_WrappedLine__GetEnumerator(List__Fuse_Controls_Internal_WrappedLine* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Controls_Internal_WrappedLine__New_1(NULL, __this);
}

List__Fuse_Controls_Internal_WrappedLine* List__Fuse_Controls_Internal_WrappedLine__New_1(::uStatic* __this)
{
    List__Fuse_Controls_Internal_WrappedLine* inst = (List__Fuse_Controls_Internal_WrappedLine*)::uAllocObject(sizeof(List__Fuse_Controls_Internal_WrappedLine), List__Fuse_Controls_Internal_WrappedLine__typeof());
    inst->_ObjInit();
    return inst;
}

::uArray* List__Fuse_Controls_Internal_WrappedLine__ToArray(List__Fuse_Controls_Internal_WrappedLine* __this)
{
    ::uArray* t = ::uNewArray(::app::Fuse::Controls::Internal::WrappedLine__typeof(), __this->_used);

    for (int i = 0; i < __this->_used; i++)
    {
        t->ItemStrong< ::app::Fuse::Controls::Internal::WrappedLine*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Controls::Internal::WrappedLine*>(i);
    }

    return t;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Controls_TextEdit_LineCacheLine__uType* List__Fuse_Controls_TextEdit_LineCacheLine__typeof()
{
    static ::uStaticStrong<List__Fuse_Controls_TextEdit_LineCacheLine__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Controls_TextEdit_LineCacheLine__uType*)::uAllocClassType(sizeof(List__Fuse_Controls_TextEdit_LineCacheLine__uType), "Uno.Collections.List<Fuse.Controls.TextEdit.LineCacheLine>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Controls_TextEdit_LineCacheLine__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Controls_TextEdit_LineCacheLine__typeof(), offsetof(List__Fuse_Controls_TextEdit_LineCacheLine__uType, __interface_0));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Controls_TextEdit_LineCacheLine, _data));

    return type;
}

::uObject* List__Fuse_Controls_TextEdit_LineCacheLine__GetEnumerator_boxed(List__Fuse_Controls_TextEdit_LineCacheLine* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__typeof(), __this->GetEnumerator());
}

void List__Fuse_Controls_TextEdit_LineCacheLine___ObjInit(List__Fuse_Controls_TextEdit_LineCacheLine* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Controls_TextEdit_LineCacheLine__Add(List__Fuse_Controls_TextEdit_LineCacheLine* __this, ::app::Fuse::Controls::TextEdit::LineCacheLine* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Controls_TextEdit_LineCacheLine__BoundsCheck(List__Fuse_Controls_TextEdit_LineCacheLine* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Controls_TextEdit_LineCacheLine__EnsureCapacity(List__Fuse_Controls_TextEdit_LineCacheLine* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Controls::TextEdit::LineCacheLine__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Controls::TextEdit::LineCacheLine__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Controls_TextEdit_LineCacheLine__get_Count(List__Fuse_Controls_TextEdit_LineCacheLine* __this)
{
    return __this->_used;
}

::app::Fuse::Controls::TextEdit::LineCacheLine* List__Fuse_Controls_TextEdit_LineCacheLine__get_Item(List__Fuse_Controls_TextEdit_LineCacheLine* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(index);
}

::app::Uno::Collections::List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine List__Fuse_Controls_TextEdit_LineCacheLine__GetEnumerator(List__Fuse_Controls_TextEdit_LineCacheLine* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__New_1(NULL, __this);
}

void List__Fuse_Controls_TextEdit_LineCacheLine__Insert(List__Fuse_Controls_TextEdit_LineCacheLine* __this, int index, ::app::Fuse::Controls::TextEdit::LineCacheLine* item)
{
    if ((index < 0) || (index > __this->_used))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->EnsureCapacity();

    for (int i = __this->_used; i >= index; i--)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(i + 1) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(i);
    }

    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(index) = item;
    __this->_version++;
    __this->_used++;
}

List__Fuse_Controls_TextEdit_LineCacheLine* List__Fuse_Controls_TextEdit_LineCacheLine__New_1(::uStatic* __this)
{
    List__Fuse_Controls_TextEdit_LineCacheLine* inst = (List__Fuse_Controls_TextEdit_LineCacheLine*)::uAllocObject(sizeof(List__Fuse_Controls_TextEdit_LineCacheLine), List__Fuse_Controls_TextEdit_LineCacheLine__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Controls_TextEdit_LineCacheLine__RemoveAt(List__Fuse_Controls_TextEdit_LineCacheLine* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Controls_TextEdit_LineCacheLine__set_Item(List__Fuse_Controls_TextEdit_LineCacheLine* __this, int index, ::app::Fuse::Controls::TextEdit::LineCacheLine* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Drawing_Brush__uType* List__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<List__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Drawing_Brush__uType*)::uAllocClassType(sizeof(List__Fuse_Drawing_Brush__uType), "Uno.Collections.List<Fuse.Drawing.Brush>", false, 3, 1, 0);

    type->__interface_0.__fp_get_Item = (::app::Fuse::Drawing::Brush*(*)(void*, int))List__Fuse_Drawing_Brush__get_Item;
    type->__interface_1.__fp_Clear = (void(*)(void*))List__Fuse_Drawing_Brush__Clear;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Drawing::Brush*))List__Fuse_Drawing_Brush__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Drawing::Brush*))List__Fuse_Drawing_Brush__Remove;
    type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_Drawing_Brush__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Drawing_Brush__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Drawing_Brush__typeof(), offsetof(List__Fuse_Drawing_Brush__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush__typeof(), offsetof(List__Fuse_Drawing_Brush__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Brush__typeof(), offsetof(List__Fuse_Drawing_Brush__uType, __interface_2));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Drawing_Brush, _data));

    return type;
}

::uObject* List__Fuse_Drawing_Brush__GetEnumerator_boxed(List__Fuse_Drawing_Brush* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Brush__typeof(), __this->GetEnumerator());
}

void List__Fuse_Drawing_Brush___ObjInit(List__Fuse_Drawing_Brush* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Drawing_Brush__Add(List__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Drawing::Brush*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Drawing_Brush__BoundsCheck(List__Fuse_Drawing_Brush* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Drawing_Brush__Clear(List__Fuse_Drawing_Brush* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
    __this->_version++;
}

void List__Fuse_Drawing_Brush__EnsureCapacity(List__Fuse_Drawing_Brush* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Drawing::Brush__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Drawing::Brush__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Drawing::Brush*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Drawing::Brush*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Drawing_Brush__get_Count(List__Fuse_Drawing_Brush* __this)
{
    return __this->_used;
}

::app::Fuse::Drawing::Brush* List__Fuse_Drawing_Brush__get_Item(List__Fuse_Drawing_Brush* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Drawing::Brush*>(index);
}

::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Brush List__Fuse_Drawing_Brush__GetEnumerator(List__Fuse_Drawing_Brush* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Brush__New_1(NULL, __this);
}

List__Fuse_Drawing_Brush* List__Fuse_Drawing_Brush__New_1(::uStatic* __this)
{
    List__Fuse_Drawing_Brush* inst = (List__Fuse_Drawing_Brush*)::uAllocObject(sizeof(List__Fuse_Drawing_Brush), List__Fuse_Drawing_Brush__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_Drawing_Brush__Remove(List__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Drawing_Brush(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Drawing::Brush*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Drawing_Brush__RemoveAt(List__Fuse_Drawing_Brush* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Drawing::Brush*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Drawing::Brush*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Drawing::Brush*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Drawing_Brush__set_Item(List__Fuse_Drawing_Brush* __this, int index, ::app::Fuse::Drawing::Brush* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Drawing::Brush*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Drawing_Contour__uType* List__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong<List__Fuse_Drawing_Contour__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(List__Fuse_Drawing_Contour__uType), "Uno.Collections.List<Fuse.Drawing.Contour>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Drawing_Contour__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof(), offsetof(List__Fuse_Drawing_Contour__uType, __interface_0));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Drawing_Contour, _data));

    return type;
}

::uObject* List__Fuse_Drawing_Contour__GetEnumerator_boxed(List__Fuse_Drawing_Contour* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Contour__typeof(), __this->GetEnumerator());
}

void List__Fuse_Drawing_Contour___ObjInit(List__Fuse_Drawing_Contour* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Drawing_Contour__Add(List__Fuse_Drawing_Contour* __this, ::app::Fuse::Drawing::Contour* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Drawing::Contour*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Drawing_Contour__EnsureCapacity(List__Fuse_Drawing_Contour* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Drawing::Contour__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Drawing::Contour__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Drawing::Contour*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Drawing::Contour*>(i);
        }

        __this->_data = newData;
    }
}

::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Contour List__Fuse_Drawing_Contour__GetEnumerator(List__Fuse_Drawing_Contour* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Contour__New_1(NULL, __this);
}

List__Fuse_Drawing_Contour* List__Fuse_Drawing_Contour__New_1(::uStatic* __this)
{
    List__Fuse_Drawing_Contour* inst = (List__Fuse_Drawing_Contour*)::uAllocObject(sizeof(List__Fuse_Drawing_Contour), List__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Drawing_PathGeometry__uType* List__Fuse_Drawing_PathGeometry__typeof()
{
    static ::uStaticStrong<List__Fuse_Drawing_PathGeometry__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Drawing_PathGeometry__uType*)::uAllocClassType(sizeof(List__Fuse_Drawing_PathGeometry__uType), "Uno.Collections.List<Fuse.Drawing.PathGeometry>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Drawing_PathGeometry, _data));

    return type;
}

void List__Fuse_Drawing_PathGeometry___ObjInit(List__Fuse_Drawing_PathGeometry* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Drawing_PathGeometry__Add(List__Fuse_Drawing_PathGeometry* __this, ::app::Fuse::Drawing::PathGeometry* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Drawing::PathGeometry*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Drawing_PathGeometry__BoundsCheck(List__Fuse_Drawing_PathGeometry* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Drawing_PathGeometry__EnsureCapacity(List__Fuse_Drawing_PathGeometry* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Drawing::PathGeometry__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Drawing::PathGeometry__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Drawing::PathGeometry*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Drawing::PathGeometry*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Drawing_PathGeometry__get_Count(List__Fuse_Drawing_PathGeometry* __this)
{
    return __this->_used;
}

::app::Fuse::Drawing::PathGeometry* List__Fuse_Drawing_PathGeometry__get_Item(List__Fuse_Drawing_PathGeometry* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Drawing::PathGeometry*>(index);
}

List__Fuse_Drawing_PathGeometry* List__Fuse_Drawing_PathGeometry__New_1(::uStatic* __this)
{
    List__Fuse_Drawing_PathGeometry* inst = (List__Fuse_Drawing_PathGeometry*)::uAllocObject(sizeof(List__Fuse_Drawing_PathGeometry), List__Fuse_Drawing_PathGeometry__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Drawing_PathGeometry__set_Item(List__Fuse_Drawing_PathGeometry* __this, int index, ::app::Fuse::Drawing::PathGeometry* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Drawing::PathGeometry*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Drawing_Stroke__uType* List__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong<List__Fuse_Drawing_Stroke__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Drawing_Stroke__uType*)::uAllocClassType(sizeof(List__Fuse_Drawing_Stroke__uType), "Uno.Collections.List<Fuse.Drawing.Stroke>", false, 3, 1, 0);

    type->__interface_0.__fp_get_Item = (::app::Fuse::Drawing::Stroke*(*)(void*, int))List__Fuse_Drawing_Stroke__get_Item;
    type->__interface_1.__fp_Clear = (void(*)(void*))List__Fuse_Drawing_Stroke__Clear;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Drawing::Stroke*))List__Fuse_Drawing_Stroke__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Drawing::Stroke*))List__Fuse_Drawing_Stroke__Remove;
    type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_Drawing_Stroke__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Drawing_Stroke__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Drawing_Stroke__typeof(), offsetof(List__Fuse_Drawing_Stroke__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke__typeof(), offsetof(List__Fuse_Drawing_Stroke__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke__typeof(), offsetof(List__Fuse_Drawing_Stroke__uType, __interface_2));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Drawing_Stroke, _data));

    return type;
}

::uObject* List__Fuse_Drawing_Stroke__GetEnumerator_boxed(List__Fuse_Drawing_Stroke* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Stroke__typeof(), __this->GetEnumerator());
}

void List__Fuse_Drawing_Stroke___ObjInit(List__Fuse_Drawing_Stroke* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Drawing_Stroke__Add(List__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Drawing::Stroke*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Drawing_Stroke__BoundsCheck(List__Fuse_Drawing_Stroke* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Drawing_Stroke__Clear(List__Fuse_Drawing_Stroke* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
    __this->_version++;
}

void List__Fuse_Drawing_Stroke__EnsureCapacity(List__Fuse_Drawing_Stroke* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Drawing::Stroke__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Drawing::Stroke__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Drawing::Stroke*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Drawing::Stroke*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Drawing_Stroke__get_Count(List__Fuse_Drawing_Stroke* __this)
{
    return __this->_used;
}

::app::Fuse::Drawing::Stroke* List__Fuse_Drawing_Stroke__get_Item(List__Fuse_Drawing_Stroke* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Drawing::Stroke*>(index);
}

::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Stroke List__Fuse_Drawing_Stroke__GetEnumerator(List__Fuse_Drawing_Stroke* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Drawing_Stroke__New_1(NULL, __this);
}

List__Fuse_Drawing_Stroke* List__Fuse_Drawing_Stroke__New_1(::uStatic* __this)
{
    List__Fuse_Drawing_Stroke* inst = (List__Fuse_Drawing_Stroke*)::uAllocObject(sizeof(List__Fuse_Drawing_Stroke), List__Fuse_Drawing_Stroke__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_Drawing_Stroke__Remove(List__Fuse_Drawing_Stroke* __this, ::app::Fuse::Drawing::Stroke* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Drawing_Stroke(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Drawing::Stroke*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Drawing_Stroke__RemoveAt(List__Fuse_Drawing_Stroke* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Drawing::Stroke*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Drawing::Stroke*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Drawing::Stroke*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Drawing_Stroke__set_Item(List__Fuse_Drawing_Stroke* __this, int index, ::app::Fuse::Drawing::Stroke* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Drawing::Stroke*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Effects_Effect__uType* List__Fuse_Effects_Effect__typeof()
{
    static ::uStaticStrong<List__Fuse_Effects_Effect__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Effects_Effect__uType*)::uAllocClassType(sizeof(List__Fuse_Effects_Effect__uType), "Uno.Collections.List<Fuse.Effects.Effect>", false, 3, 1, 0);

    type->__interface_0.__fp_get_Item = (::app::Fuse::Effects::Effect*(*)(void*, int))List__Fuse_Effects_Effect__get_Item;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Effects::Effect*))List__Fuse_Effects_Effect__Add;
    type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_Effects_Effect__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Effects_Effect__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Effects_Effect__typeof(), offsetof(List__Fuse_Effects_Effect__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Effects_Effect__typeof(), offsetof(List__Fuse_Effects_Effect__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Effects_Effect__typeof(), offsetof(List__Fuse_Effects_Effect__uType, __interface_2));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Effects_Effect, _data));

    return type;
}

::uObject* List__Fuse_Effects_Effect__GetEnumerator_boxed(List__Fuse_Effects_Effect* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Effects_Effect__typeof(), __this->GetEnumerator());
}

void List__Fuse_Effects_Effect___ObjInit(List__Fuse_Effects_Effect* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Effects_Effect__Add(List__Fuse_Effects_Effect* __this, ::app::Fuse::Effects::Effect* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Effects::Effect*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Effects_Effect__BoundsCheck(List__Fuse_Effects_Effect* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Effects_Effect__EnsureCapacity(List__Fuse_Effects_Effect* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Effects::Effect__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Effects::Effect__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Effects::Effect*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Effects::Effect*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Effects_Effect__get_Count(List__Fuse_Effects_Effect* __this)
{
    return __this->_used;
}

::app::Fuse::Effects::Effect* List__Fuse_Effects_Effect__get_Item(List__Fuse_Effects_Effect* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Effects::Effect*>(index);
}

::app::Uno::Collections::List1_Enumerator__Fuse_Effects_Effect List__Fuse_Effects_Effect__GetEnumerator(List__Fuse_Effects_Effect* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Effects_Effect__New_1(NULL, __this);
}

List__Fuse_Effects_Effect* List__Fuse_Effects_Effect__New_1(::uStatic* __this)
{
    List__Fuse_Effects_Effect* inst = (List__Fuse_Effects_Effect*)::uAllocObject(sizeof(List__Fuse_Effects_Effect), List__Fuse_Effects_Effect__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_Effects_Effect__Remove(List__Fuse_Effects_Effect* __this, ::app::Fuse::Effects::Effect* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Effects_Effect(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Effects::Effect*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Effects_Effect__RemoveAt(List__Fuse_Effects_Effect* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Effects::Effect*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Effects::Effect*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Effects::Effect*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Effects_Effect__set_Item(List__Fuse_Effects_Effect* __this, int index, ::app::Fuse::Effects::Effect* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Effects::Effect*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Elements_Element__uType* List__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong<List__Fuse_Elements_Element__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Elements_Element__uType*)::uAllocClassType(sizeof(List__Fuse_Elements_Element__uType), "Uno.Collections.List<Fuse.Elements.Element>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Elements_Element, _data));

    return type;
}

void List__Fuse_Elements_Element___ObjInit(List__Fuse_Elements_Element* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Elements_Element__Add(List__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Elements::Element*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Elements_Element__BoundsCheck(List__Fuse_Elements_Element* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Elements_Element__Clear(List__Fuse_Elements_Element* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
    __this->_version++;
}

void List__Fuse_Elements_Element__EnsureCapacity(List__Fuse_Elements_Element* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Elements::Element__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Elements::Element__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Elements::Element*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Elements::Element*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Elements_Element__get_Count(List__Fuse_Elements_Element* __this)
{
    return __this->_used;
}

::app::Fuse::Elements::Element* List__Fuse_Elements_Element__get_Item(List__Fuse_Elements_Element* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Elements::Element*>(index);
}

::app::Uno::Collections::List1_Enumerator__Fuse_Elements_Element List__Fuse_Elements_Element__GetEnumerator(List__Fuse_Elements_Element* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_Element__New_1(NULL, __this);
}

List__Fuse_Elements_Element* List__Fuse_Elements_Element__New_1(::uStatic* __this)
{
    List__Fuse_Elements_Element* inst = (List__Fuse_Elements_Element*)::uAllocObject(sizeof(List__Fuse_Elements_Element), List__Fuse_Elements_Element__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_Elements_Element__Remove(List__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Elements_Element(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Elements::Element*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Elements_Element__RemoveAt(List__Fuse_Elements_Element* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Elements::Element*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Elements::Element*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Elements::Element*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Elements_Element__set_Item(List__Fuse_Elements_Element* __this, int index, ::app::Fuse::Elements::Element* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Elements::Element*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Elements_ElementAtlas__uType* List__Fuse_Elements_ElementAtlas__typeof()
{
    static ::uStaticStrong<List__Fuse_Elements_ElementAtlas__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Elements_ElementAtlas__uType*)::uAllocClassType(sizeof(List__Fuse_Elements_ElementAtlas__uType), "Uno.Collections.List<Fuse.Elements.ElementAtlas>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Elements_ElementAtlas, _data));

    return type;
}

void List__Fuse_Elements_ElementAtlas___ObjInit(List__Fuse_Elements_ElementAtlas* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Elements_ElementAtlas__Add(List__Fuse_Elements_ElementAtlas* __this, ::app::Fuse::Elements::ElementAtlas* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Elements::ElementAtlas*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Elements_ElementAtlas__BoundsCheck(List__Fuse_Elements_ElementAtlas* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Elements_ElementAtlas__Clear(List__Fuse_Elements_ElementAtlas* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
    __this->_version++;
}

void List__Fuse_Elements_ElementAtlas__EnsureCapacity(List__Fuse_Elements_ElementAtlas* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Elements::ElementAtlas__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Elements::ElementAtlas__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Elements::ElementAtlas*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Elements::ElementAtlas*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Elements_ElementAtlas__get_Count(List__Fuse_Elements_ElementAtlas* __this)
{
    return __this->_used;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementAtlas List__Fuse_Elements_ElementAtlas__GetEnumerator(List__Fuse_Elements_ElementAtlas* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementAtlas__New_1(NULL, __this);
}

List__Fuse_Elements_ElementAtlas* List__Fuse_Elements_ElementAtlas__New_1(::uStatic* __this)
{
    List__Fuse_Elements_ElementAtlas* inst = (List__Fuse_Elements_ElementAtlas*)::uAllocObject(sizeof(List__Fuse_Elements_ElementAtlas), List__Fuse_Elements_ElementAtlas__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_Elements_ElementAtlas__Remove(List__Fuse_Elements_ElementAtlas* __this, ::app::Fuse::Elements::ElementAtlas* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Elements_ElementAtlas(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Elements::ElementAtlas*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Elements_ElementAtlas__RemoveAt(List__Fuse_Elements_ElementAtlas* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Elements::ElementAtlas*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Elements::ElementAtlas*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Elements::ElementAtlas*>(__this->_used) = NULL;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Elements_ElementBatch__uType* List__Fuse_Elements_ElementBatch__typeof()
{
    static ::uStaticStrong<List__Fuse_Elements_ElementBatch__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Elements_ElementBatch__uType*)::uAllocClassType(sizeof(List__Fuse_Elements_ElementBatch__uType), "Uno.Collections.List<Fuse.Elements.ElementBatch>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Elements_ElementBatch, _data));

    return type;
}

void List__Fuse_Elements_ElementBatch___ObjInit(List__Fuse_Elements_ElementBatch* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Elements_ElementBatch__Add(List__Fuse_Elements_ElementBatch* __this, ::app::Fuse::Elements::ElementBatch* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Elements::ElementBatch*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Elements_ElementBatch__Clear(List__Fuse_Elements_ElementBatch* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
    __this->_version++;
}

void List__Fuse_Elements_ElementBatch__EnsureCapacity(List__Fuse_Elements_ElementBatch* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Elements::ElementBatch__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Elements::ElementBatch__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Elements::ElementBatch*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Elements::ElementBatch*>(i);
        }

        __this->_data = newData;
    }
}

::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementBatch List__Fuse_Elements_ElementBatch__GetEnumerator(List__Fuse_Elements_ElementBatch* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementBatch__New_1(NULL, __this);
}

List__Fuse_Elements_ElementBatch* List__Fuse_Elements_ElementBatch__New_1(::uStatic* __this)
{
    List__Fuse_Elements_ElementBatch* inst = (List__Fuse_Elements_ElementBatch*)::uAllocObject(sizeof(List__Fuse_Elements_ElementBatch), List__Fuse_Elements_ElementBatch__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Elements_ElementBatchEntry__uType* List__Fuse_Elements_ElementBatchEntry__typeof()
{
    static ::uStaticStrong<List__Fuse_Elements_ElementBatchEntry__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Elements_ElementBatchEntry__uType*)::uAllocClassType(sizeof(List__Fuse_Elements_ElementBatchEntry__uType), "Uno.Collections.List<Fuse.Elements.ElementBatchEntry>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Elements_ElementBatchEntry, _data));

    return type;
}

void List__Fuse_Elements_ElementBatchEntry___ObjInit(List__Fuse_Elements_ElementBatchEntry* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Elements_ElementBatchEntry__Add(List__Fuse_Elements_ElementBatchEntry* __this, ::app::Fuse::Elements::ElementBatchEntry* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Elements::ElementBatchEntry*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Elements_ElementBatchEntry__BoundsCheck(List__Fuse_Elements_ElementBatchEntry* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Elements_ElementBatchEntry__EnsureCapacity(List__Fuse_Elements_ElementBatchEntry* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Elements::ElementBatchEntry__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Elements::ElementBatchEntry__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Elements::ElementBatchEntry*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Elements::ElementBatchEntry*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Elements_ElementBatchEntry__get_Count(List__Fuse_Elements_ElementBatchEntry* __this)
{
    return __this->_used;
}

::app::Fuse::Elements::ElementBatchEntry* List__Fuse_Elements_ElementBatchEntry__get_Item(List__Fuse_Elements_ElementBatchEntry* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Elements::ElementBatchEntry*>(index);
}

::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementBatchEntry List__Fuse_Elements_ElementBatchEntry__GetEnumerator(List__Fuse_Elements_ElementBatchEntry* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementBatchEntry__New_1(NULL, __this);
}

List__Fuse_Elements_ElementBatchEntry* List__Fuse_Elements_ElementBatchEntry__New_1(::uStatic* __this)
{
    List__Fuse_Elements_ElementBatchEntry* inst = (List__Fuse_Elements_ElementBatchEntry*)::uAllocObject(sizeof(List__Fuse_Elements_ElementBatchEntry), List__Fuse_Elements_ElementBatchEntry__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Elements_ElementBatchEntry__set_Item(List__Fuse_Elements_ElementBatchEntry* __this, int index, ::app::Fuse::Elements::ElementBatchEntry* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Elements::ElementBatchEntry*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Elements_IElementBatchDrawable__uType* List__Fuse_Elements_IElementBatchDrawable__typeof()
{
    static ::uStaticStrong<List__Fuse_Elements_IElementBatchDrawable__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Elements_IElementBatchDrawable__uType*)::uAllocClassType(sizeof(List__Fuse_Elements_IElementBatchDrawable__uType), "Uno.Collections.List<Fuse.Elements.IElementBatchDrawable>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Elements_IElementBatchDrawable, _data));

    return type;
}

void List__Fuse_Elements_IElementBatchDrawable___ObjInit(List__Fuse_Elements_IElementBatchDrawable* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Elements_IElementBatchDrawable__Add(List__Fuse_Elements_IElementBatchDrawable* __this, ::uObject* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Elements_IElementBatchDrawable__Clear(List__Fuse_Elements_IElementBatchDrawable* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
    __this->_version++;
}

void List__Fuse_Elements_IElementBatchDrawable__EnsureCapacity(List__Fuse_Elements_IElementBatchDrawable* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Elements::IElementBatchDrawable__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Elements::IElementBatchDrawable__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::uObject*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i);
        }

        __this->_data = newData;
    }
}

::app::Uno::Collections::List1_Enumerator__Fuse_Elements_IElementBatchDrawable List__Fuse_Elements_IElementBatchDrawable__GetEnumerator(List__Fuse_Elements_IElementBatchDrawable* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_IElementBatchDrawable__New_1(NULL, __this);
}

List__Fuse_Elements_IElementBatchDrawable* List__Fuse_Elements_IElementBatchDrawable__New_1(::uStatic* __this)
{
    List__Fuse_Elements_IElementBatchDrawable* inst = (List__Fuse_Elements_IElementBatchDrawable*)::uAllocObject(sizeof(List__Fuse_Elements_IElementBatchDrawable), List__Fuse_Elements_IElementBatchDrawable__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Entities_Entity__uType* List__Fuse_Entities_Entity__typeof()
{
    static ::uStaticStrong<List__Fuse_Entities_Entity__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Entities_Entity__uType*)::uAllocClassType(sizeof(List__Fuse_Entities_Entity__uType), "Uno.Collections.List<Fuse.Entities.Entity>", false, 2, 1, 0);

    type->__interface_0.__fp_get_Item = (::app::Fuse::Entities::Entity*(*)(void*, int))List__Fuse_Entities_Entity__get_Item;
    type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_Entities_Entity__get_Count;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Entities_Entity__typeof(), offsetof(List__Fuse_Entities_Entity__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Entities_Entity__typeof(), offsetof(List__Fuse_Entities_Entity__uType, __interface_1));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Entities_Entity, _data));

    return type;
}

void List__Fuse_Entities_Entity__BoundsCheck(List__Fuse_Entities_Entity* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

int List__Fuse_Entities_Entity__get_Count(List__Fuse_Entities_Entity* __this)
{
    return __this->_used;
}

::app::Fuse::Entities::Entity* List__Fuse_Entities_Entity__get_Item(List__Fuse_Entities_Entity* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Entities::Entity*>(index);
}

void List__Fuse_Entities_Entity__set_Item(List__Fuse_Entities_Entity* __this, int index, ::app::Fuse::Entities::Entity* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Entities::Entity*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Input_Capturer__uType* List__Fuse_Input_Capturer__typeof()
{
    static ::uStaticStrong<List__Fuse_Input_Capturer__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Input_Capturer__uType*)::uAllocClassType(sizeof(List__Fuse_Input_Capturer__uType), "Uno.Collections.List<Fuse.Input.Capturer>", false, 3, 1, 0);

    type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))List__Fuse_Input_Capturer__RemoveAt;
    type->__interface_0.__fp_get_Item = (::app::Fuse::Input::Capturer*(*)(void*, int))List__Fuse_Input_Capturer__get_Item;
    type->__interface_1.__fp_Clear = (void(*)(void*))List__Fuse_Input_Capturer__Clear;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Input::Capturer*))List__Fuse_Input_Capturer__Add;
    type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_Input_Capturer__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Input_Capturer__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Input_Capturer__typeof(), offsetof(List__Fuse_Input_Capturer__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Input_Capturer__typeof(), offsetof(List__Fuse_Input_Capturer__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Input_Capturer__typeof(), offsetof(List__Fuse_Input_Capturer__uType, __interface_2));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Input_Capturer, _data));

    return type;
}

::uObject* List__Fuse_Input_Capturer__GetEnumerator_boxed(List__Fuse_Input_Capturer* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Input_Capturer__typeof(), __this->GetEnumerator());
}

void List__Fuse_Input_Capturer___ObjInit(List__Fuse_Input_Capturer* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Input_Capturer__Add(List__Fuse_Input_Capturer* __this, ::app::Fuse::Input::Capturer* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Input::Capturer*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Input_Capturer__BoundsCheck(List__Fuse_Input_Capturer* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Input_Capturer__Clear(List__Fuse_Input_Capturer* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
    __this->_version++;
}

void List__Fuse_Input_Capturer__EnsureCapacity(List__Fuse_Input_Capturer* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Input::Capturer__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Input::Capturer__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Input::Capturer*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Input::Capturer*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Input_Capturer__get_Count(List__Fuse_Input_Capturer* __this)
{
    return __this->_used;
}

::app::Fuse::Input::Capturer* List__Fuse_Input_Capturer__get_Item(List__Fuse_Input_Capturer* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Input::Capturer*>(index);
}

::app::Uno::Collections::List1_Enumerator__Fuse_Input_Capturer List__Fuse_Input_Capturer__GetEnumerator(List__Fuse_Input_Capturer* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Input_Capturer__New_1(NULL, __this);
}

List__Fuse_Input_Capturer* List__Fuse_Input_Capturer__New_1(::uStatic* __this)
{
    List__Fuse_Input_Capturer* inst = (List__Fuse_Input_Capturer*)::uAllocObject(sizeof(List__Fuse_Input_Capturer), List__Fuse_Input_Capturer__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Input_Capturer__RemoveAt(List__Fuse_Input_Capturer* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Input::Capturer*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Input::Capturer*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Input::Capturer*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Input_Capturer__set_Item(List__Fuse_Input_Capturer* __this, int index, ::app::Fuse::Input::Capturer* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Input::Capturer*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Input_FocusGainedHandler__uType* List__Fuse_Input_FocusGainedHandler__typeof()
{
    static ::uStaticStrong<List__Fuse_Input_FocusGainedHandler__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Input_FocusGainedHandler__uType*)::uAllocClassType(sizeof(List__Fuse_Input_FocusGainedHandler__uType), "Uno.Collections.List<Fuse.Input.FocusGainedHandler>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Input_FocusGainedHandler, _data));

    return type;
}

void List__Fuse_Input_FocusGainedHandler___ObjInit(List__Fuse_Input_FocusGainedHandler* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Input_FocusGainedHandler__BoundsCheck(List__Fuse_Input_FocusGainedHandler* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

int List__Fuse_Input_FocusGainedHandler__get_Count(List__Fuse_Input_FocusGainedHandler* __this)
{
    return __this->_used;
}

::uDelegate* List__Fuse_Input_FocusGainedHandler__get_Item(List__Fuse_Input_FocusGainedHandler* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(index);
}

List__Fuse_Input_FocusGainedHandler* List__Fuse_Input_FocusGainedHandler__New_1(::uStatic* __this)
{
    List__Fuse_Input_FocusGainedHandler* inst = (List__Fuse_Input_FocusGainedHandler*)::uAllocObject(sizeof(List__Fuse_Input_FocusGainedHandler), List__Fuse_Input_FocusGainedHandler__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Input_FocusGainedHandler__set_Item(List__Fuse_Input_FocusGainedHandler* __this, int index, ::uDelegate* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Input_FocusLostHandler__uType* List__Fuse_Input_FocusLostHandler__typeof()
{
    static ::uStaticStrong<List__Fuse_Input_FocusLostHandler__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Input_FocusLostHandler__uType*)::uAllocClassType(sizeof(List__Fuse_Input_FocusLostHandler__uType), "Uno.Collections.List<Fuse.Input.FocusLostHandler>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Input_FocusLostHandler, _data));

    return type;
}

void List__Fuse_Input_FocusLostHandler___ObjInit(List__Fuse_Input_FocusLostHandler* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Input_FocusLostHandler__BoundsCheck(List__Fuse_Input_FocusLostHandler* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

int List__Fuse_Input_FocusLostHandler__get_Count(List__Fuse_Input_FocusLostHandler* __this)
{
    return __this->_used;
}

::uDelegate* List__Fuse_Input_FocusLostHandler__get_Item(List__Fuse_Input_FocusLostHandler* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(index);
}

List__Fuse_Input_FocusLostHandler* List__Fuse_Input_FocusLostHandler__New_1(::uStatic* __this)
{
    List__Fuse_Input_FocusLostHandler* inst = (List__Fuse_Input_FocusLostHandler*)::uAllocObject(sizeof(List__Fuse_Input_FocusLostHandler), List__Fuse_Input_FocusLostHandler__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Input_FocusLostHandler__set_Item(List__Fuse_Input_FocusLostHandler* __this, int index, ::uDelegate* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Input_IsFocusableChangedHandler__uType* List__Fuse_Input_IsFocusableChangedHandler__typeof()
{
    static ::uStaticStrong<List__Fuse_Input_IsFocusableChangedHandler__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Input_IsFocusableChangedHandler__uType*)::uAllocClassType(sizeof(List__Fuse_Input_IsFocusableChangedHandler__uType), "Uno.Collections.List<Fuse.Input.IsFocusableChangedHandler>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Input_IsFocusableChangedHandler, _data));

    return type;
}

void List__Fuse_Input_IsFocusableChangedHandler___ObjInit(List__Fuse_Input_IsFocusableChangedHandler* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Input_IsFocusableChangedHandler__BoundsCheck(List__Fuse_Input_IsFocusableChangedHandler* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

int List__Fuse_Input_IsFocusableChangedHandler__get_Count(List__Fuse_Input_IsFocusableChangedHandler* __this)
{
    return __this->_used;
}

::uDelegate* List__Fuse_Input_IsFocusableChangedHandler__get_Item(List__Fuse_Input_IsFocusableChangedHandler* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(index);
}

List__Fuse_Input_IsFocusableChangedHandler* List__Fuse_Input_IsFocusableChangedHandler__New_1(::uStatic* __this)
{
    List__Fuse_Input_IsFocusableChangedHandler* inst = (List__Fuse_Input_IsFocusableChangedHandler*)::uAllocObject(sizeof(List__Fuse_Input_IsFocusableChangedHandler), List__Fuse_Input_IsFocusableChangedHandler__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Input_IsFocusableChangedHandler__set_Item(List__Fuse_Input_IsFocusableChangedHandler* __this, int index, ::uDelegate* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Input_KeyPressedHandler__uType* List__Fuse_Input_KeyPressedHandler__typeof()
{
    static ::uStaticStrong<List__Fuse_Input_KeyPressedHandler__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Input_KeyPressedHandler__uType*)::uAllocClassType(sizeof(List__Fuse_Input_KeyPressedHandler__uType), "Uno.Collections.List<Fuse.Input.KeyPressedHandler>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Input_KeyPressedHandler, _data));

    return type;
}

void List__Fuse_Input_KeyPressedHandler___ObjInit(List__Fuse_Input_KeyPressedHandler* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Input_KeyPressedHandler__BoundsCheck(List__Fuse_Input_KeyPressedHandler* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

int List__Fuse_Input_KeyPressedHandler__get_Count(List__Fuse_Input_KeyPressedHandler* __this)
{
    return __this->_used;
}

::uDelegate* List__Fuse_Input_KeyPressedHandler__get_Item(List__Fuse_Input_KeyPressedHandler* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(index);
}

List__Fuse_Input_KeyPressedHandler* List__Fuse_Input_KeyPressedHandler__New_1(::uStatic* __this)
{
    List__Fuse_Input_KeyPressedHandler* inst = (List__Fuse_Input_KeyPressedHandler*)::uAllocObject(sizeof(List__Fuse_Input_KeyPressedHandler), List__Fuse_Input_KeyPressedHandler__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Input_KeyPressedHandler__set_Item(List__Fuse_Input_KeyPressedHandler* __this, int index, ::uDelegate* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Input_KeyReleasedHandler__uType* List__Fuse_Input_KeyReleasedHandler__typeof()
{
    static ::uStaticStrong<List__Fuse_Input_KeyReleasedHandler__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Input_KeyReleasedHandler__uType*)::uAllocClassType(sizeof(List__Fuse_Input_KeyReleasedHandler__uType), "Uno.Collections.List<Fuse.Input.KeyReleasedHandler>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Input_KeyReleasedHandler, _data));

    return type;
}

void List__Fuse_Input_KeyReleasedHandler___ObjInit(List__Fuse_Input_KeyReleasedHandler* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Input_KeyReleasedHandler__BoundsCheck(List__Fuse_Input_KeyReleasedHandler* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

int List__Fuse_Input_KeyReleasedHandler__get_Count(List__Fuse_Input_KeyReleasedHandler* __this)
{
    return __this->_used;
}

::uDelegate* List__Fuse_Input_KeyReleasedHandler__get_Item(List__Fuse_Input_KeyReleasedHandler* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(index);
}

List__Fuse_Input_KeyReleasedHandler* List__Fuse_Input_KeyReleasedHandler__New_1(::uStatic* __this)
{
    List__Fuse_Input_KeyReleasedHandler* inst = (List__Fuse_Input_KeyReleasedHandler*)::uAllocObject(sizeof(List__Fuse_Input_KeyReleasedHandler), List__Fuse_Input_KeyReleasedHandler__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Input_KeyReleasedHandler__set_Item(List__Fuse_Input_KeyReleasedHandler* __this, int index, ::uDelegate* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Input_Pointer_PELHolder__uType* List__Fuse_Input_Pointer_PELHolder__typeof()
{
    static ::uStaticStrong<List__Fuse_Input_Pointer_PELHolder__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Input_Pointer_PELHolder__uType*)::uAllocClassType(sizeof(List__Fuse_Input_Pointer_PELHolder__uType), "Uno.Collections.List<Fuse.Input.Pointer_PELHolder>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Input_Pointer_PELHolder, _data));

    return type;
}

void List__Fuse_Input_Pointer_PELHolder___ObjInit(List__Fuse_Input_Pointer_PELHolder* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Input_Pointer_PELHolder__Add(List__Fuse_Input_Pointer_PELHolder* __this, ::app::Fuse::Input::Pointer_PELHolder* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Input::Pointer_PELHolder*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Input_Pointer_PELHolder__BoundsCheck(List__Fuse_Input_Pointer_PELHolder* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Input_Pointer_PELHolder__EnsureCapacity(List__Fuse_Input_Pointer_PELHolder* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Input::Pointer_PELHolder__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Input::Pointer_PELHolder__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Input::Pointer_PELHolder*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Input::Pointer_PELHolder*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Input_Pointer_PELHolder__get_Count(List__Fuse_Input_Pointer_PELHolder* __this)
{
    return __this->_used;
}

::app::Fuse::Input::Pointer_PELHolder* List__Fuse_Input_Pointer_PELHolder__get_Item(List__Fuse_Input_Pointer_PELHolder* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Input::Pointer_PELHolder*>(index);
}

List__Fuse_Input_Pointer_PELHolder* List__Fuse_Input_Pointer_PELHolder__New_1(::uStatic* __this)
{
    List__Fuse_Input_Pointer_PELHolder* inst = (List__Fuse_Input_Pointer_PELHolder*)::uAllocObject(sizeof(List__Fuse_Input_Pointer_PELHolder), List__Fuse_Input_Pointer_PELHolder__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Input_Pointer_PELHolder__RemoveAt(List__Fuse_Input_Pointer_PELHolder* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Input::Pointer_PELHolder*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Input::Pointer_PELHolder*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Input::Pointer_PELHolder*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Input_Pointer_PELHolder__set_Item(List__Fuse_Input_Pointer_PELHolder* __this, int index, ::app::Fuse::Input::Pointer_PELHolder* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Input::Pointer_PELHolder*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Input_PointerEnteredHandler__uType* List__Fuse_Input_PointerEnteredHandler__typeof()
{
    static ::uStaticStrong<List__Fuse_Input_PointerEnteredHandler__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Input_PointerEnteredHandler__uType*)::uAllocClassType(sizeof(List__Fuse_Input_PointerEnteredHandler__uType), "Uno.Collections.List<Fuse.Input.PointerEnteredHandler>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Input_PointerEnteredHandler, _data));

    return type;
}

void List__Fuse_Input_PointerEnteredHandler___ObjInit(List__Fuse_Input_PointerEnteredHandler* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Input_PointerEnteredHandler__BoundsCheck(List__Fuse_Input_PointerEnteredHandler* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

int List__Fuse_Input_PointerEnteredHandler__get_Count(List__Fuse_Input_PointerEnteredHandler* __this)
{
    return __this->_used;
}

::uDelegate* List__Fuse_Input_PointerEnteredHandler__get_Item(List__Fuse_Input_PointerEnteredHandler* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(index);
}

List__Fuse_Input_PointerEnteredHandler* List__Fuse_Input_PointerEnteredHandler__New_1(::uStatic* __this)
{
    List__Fuse_Input_PointerEnteredHandler* inst = (List__Fuse_Input_PointerEnteredHandler*)::uAllocObject(sizeof(List__Fuse_Input_PointerEnteredHandler), List__Fuse_Input_PointerEnteredHandler__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Input_PointerEnteredHandler__set_Item(List__Fuse_Input_PointerEnteredHandler* __this, int index, ::uDelegate* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Input_PointerLeftHandler__uType* List__Fuse_Input_PointerLeftHandler__typeof()
{
    static ::uStaticStrong<List__Fuse_Input_PointerLeftHandler__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Input_PointerLeftHandler__uType*)::uAllocClassType(sizeof(List__Fuse_Input_PointerLeftHandler__uType), "Uno.Collections.List<Fuse.Input.PointerLeftHandler>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Input_PointerLeftHandler, _data));

    return type;
}

void List__Fuse_Input_PointerLeftHandler___ObjInit(List__Fuse_Input_PointerLeftHandler* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Input_PointerLeftHandler__BoundsCheck(List__Fuse_Input_PointerLeftHandler* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

int List__Fuse_Input_PointerLeftHandler__get_Count(List__Fuse_Input_PointerLeftHandler* __this)
{
    return __this->_used;
}

::uDelegate* List__Fuse_Input_PointerLeftHandler__get_Item(List__Fuse_Input_PointerLeftHandler* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(index);
}

List__Fuse_Input_PointerLeftHandler* List__Fuse_Input_PointerLeftHandler__New_1(::uStatic* __this)
{
    List__Fuse_Input_PointerLeftHandler* inst = (List__Fuse_Input_PointerLeftHandler*)::uAllocObject(sizeof(List__Fuse_Input_PointerLeftHandler), List__Fuse_Input_PointerLeftHandler__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Input_PointerLeftHandler__set_Item(List__Fuse_Input_PointerLeftHandler* __this, int index, ::uDelegate* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Input_PointerMovedHandler__uType* List__Fuse_Input_PointerMovedHandler__typeof()
{
    static ::uStaticStrong<List__Fuse_Input_PointerMovedHandler__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Input_PointerMovedHandler__uType*)::uAllocClassType(sizeof(List__Fuse_Input_PointerMovedHandler__uType), "Uno.Collections.List<Fuse.Input.PointerMovedHandler>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Input_PointerMovedHandler, _data));

    return type;
}

void List__Fuse_Input_PointerMovedHandler___ObjInit(List__Fuse_Input_PointerMovedHandler* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Input_PointerMovedHandler__BoundsCheck(List__Fuse_Input_PointerMovedHandler* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

int List__Fuse_Input_PointerMovedHandler__get_Count(List__Fuse_Input_PointerMovedHandler* __this)
{
    return __this->_used;
}

::uDelegate* List__Fuse_Input_PointerMovedHandler__get_Item(List__Fuse_Input_PointerMovedHandler* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(index);
}

List__Fuse_Input_PointerMovedHandler* List__Fuse_Input_PointerMovedHandler__New_1(::uStatic* __this)
{
    List__Fuse_Input_PointerMovedHandler* inst = (List__Fuse_Input_PointerMovedHandler*)::uAllocObject(sizeof(List__Fuse_Input_PointerMovedHandler), List__Fuse_Input_PointerMovedHandler__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Input_PointerMovedHandler__set_Item(List__Fuse_Input_PointerMovedHandler* __this, int index, ::uDelegate* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Input_PointerPressedHandler__uType* List__Fuse_Input_PointerPressedHandler__typeof()
{
    static ::uStaticStrong<List__Fuse_Input_PointerPressedHandler__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Input_PointerPressedHandler__uType*)::uAllocClassType(sizeof(List__Fuse_Input_PointerPressedHandler__uType), "Uno.Collections.List<Fuse.Input.PointerPressedHandler>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Input_PointerPressedHandler, _data));

    return type;
}

void List__Fuse_Input_PointerPressedHandler___ObjInit(List__Fuse_Input_PointerPressedHandler* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Input_PointerPressedHandler__BoundsCheck(List__Fuse_Input_PointerPressedHandler* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

int List__Fuse_Input_PointerPressedHandler__get_Count(List__Fuse_Input_PointerPressedHandler* __this)
{
    return __this->_used;
}

::uDelegate* List__Fuse_Input_PointerPressedHandler__get_Item(List__Fuse_Input_PointerPressedHandler* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(index);
}

List__Fuse_Input_PointerPressedHandler* List__Fuse_Input_PointerPressedHandler__New_1(::uStatic* __this)
{
    List__Fuse_Input_PointerPressedHandler* inst = (List__Fuse_Input_PointerPressedHandler*)::uAllocObject(sizeof(List__Fuse_Input_PointerPressedHandler), List__Fuse_Input_PointerPressedHandler__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Input_PointerPressedHandler__set_Item(List__Fuse_Input_PointerPressedHandler* __this, int index, ::uDelegate* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Input_PointerReleasedHandler__uType* List__Fuse_Input_PointerReleasedHandler__typeof()
{
    static ::uStaticStrong<List__Fuse_Input_PointerReleasedHandler__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Input_PointerReleasedHandler__uType*)::uAllocClassType(sizeof(List__Fuse_Input_PointerReleasedHandler__uType), "Uno.Collections.List<Fuse.Input.PointerReleasedHandler>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Input_PointerReleasedHandler, _data));

    return type;
}

void List__Fuse_Input_PointerReleasedHandler___ObjInit(List__Fuse_Input_PointerReleasedHandler* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Input_PointerReleasedHandler__BoundsCheck(List__Fuse_Input_PointerReleasedHandler* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

int List__Fuse_Input_PointerReleasedHandler__get_Count(List__Fuse_Input_PointerReleasedHandler* __this)
{
    return __this->_used;
}

::uDelegate* List__Fuse_Input_PointerReleasedHandler__get_Item(List__Fuse_Input_PointerReleasedHandler* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(index);
}

List__Fuse_Input_PointerReleasedHandler* List__Fuse_Input_PointerReleasedHandler__New_1(::uStatic* __this)
{
    List__Fuse_Input_PointerReleasedHandler* inst = (List__Fuse_Input_PointerReleasedHandler*)::uAllocObject(sizeof(List__Fuse_Input_PointerReleasedHandler), List__Fuse_Input_PointerReleasedHandler__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Input_PointerReleasedHandler__set_Item(List__Fuse_Input_PointerReleasedHandler* __this, int index, ::uDelegate* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Input_PointerWheelMovedHandler__uType* List__Fuse_Input_PointerWheelMovedHandler__typeof()
{
    static ::uStaticStrong<List__Fuse_Input_PointerWheelMovedHandler__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Input_PointerWheelMovedHandler__uType*)::uAllocClassType(sizeof(List__Fuse_Input_PointerWheelMovedHandler__uType), "Uno.Collections.List<Fuse.Input.PointerWheelMovedHandler>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Input_PointerWheelMovedHandler, _data));

    return type;
}

void List__Fuse_Input_PointerWheelMovedHandler___ObjInit(List__Fuse_Input_PointerWheelMovedHandler* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Input_PointerWheelMovedHandler* List__Fuse_Input_PointerWheelMovedHandler__New_1(::uStatic* __this)
{
    List__Fuse_Input_PointerWheelMovedHandler* inst = (List__Fuse_Input_PointerWheelMovedHandler*)::uAllocObject(sizeof(List__Fuse_Input_PointerWheelMovedHandler), List__Fuse_Input_PointerWheelMovedHandler__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Input_TextEnteredHandler__uType* List__Fuse_Input_TextEnteredHandler__typeof()
{
    static ::uStaticStrong<List__Fuse_Input_TextEnteredHandler__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Input_TextEnteredHandler__uType*)::uAllocClassType(sizeof(List__Fuse_Input_TextEnteredHandler__uType), "Uno.Collections.List<Fuse.Input.TextEnteredHandler>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Input_TextEnteredHandler, _data));

    return type;
}

void List__Fuse_Input_TextEnteredHandler___ObjInit(List__Fuse_Input_TextEnteredHandler* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Fuse_Input_TextEnteredHandler* List__Fuse_Input_TextEnteredHandler__New_1(::uStatic* __this)
{
    List__Fuse_Input_TextEnteredHandler* inst = (List__Fuse_Input_TextEnteredHandler*)::uAllocObject(sizeof(List__Fuse_Input_TextEnteredHandler), List__Fuse_Input_TextEnteredHandler__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_iOS_StatusBarConfig__uType* List__Fuse_iOS_StatusBarConfig__typeof()
{
    static ::uStaticStrong<List__Fuse_iOS_StatusBarConfig__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_iOS_StatusBarConfig__uType*)::uAllocClassType(sizeof(List__Fuse_iOS_StatusBarConfig__uType), "Uno.Collections.List<Fuse.iOS.StatusBarConfig>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_iOS_StatusBarConfig, _data));

    return type;
}

void List__Fuse_iOS_StatusBarConfig___ObjInit(List__Fuse_iOS_StatusBarConfig* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_iOS_StatusBarConfig__Add(List__Fuse_iOS_StatusBarConfig* __this, ::app::Fuse::iOS::StatusBarConfig* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::iOS::StatusBarConfig*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_iOS_StatusBarConfig__BoundsCheck(List__Fuse_iOS_StatusBarConfig* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_iOS_StatusBarConfig__EnsureCapacity(List__Fuse_iOS_StatusBarConfig* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::iOS::StatusBarConfig__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::iOS::StatusBarConfig__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::iOS::StatusBarConfig*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::iOS::StatusBarConfig*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_iOS_StatusBarConfig__get_Count(List__Fuse_iOS_StatusBarConfig* __this)
{
    return __this->_used;
}

List__Fuse_iOS_StatusBarConfig* List__Fuse_iOS_StatusBarConfig__New_1(::uStatic* __this)
{
    List__Fuse_iOS_StatusBarConfig* inst = (List__Fuse_iOS_StatusBarConfig*)::uAllocObject(sizeof(List__Fuse_iOS_StatusBarConfig), List__Fuse_iOS_StatusBarConfig__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_iOS_StatusBarConfig__Remove(List__Fuse_iOS_StatusBarConfig* __this, ::app::Fuse::iOS::StatusBarConfig* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_iOS_StatusBarConfig(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::iOS::StatusBarConfig*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_iOS_StatusBarConfig__RemoveAt(List__Fuse_iOS_StatusBarConfig* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::iOS::StatusBarConfig*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::iOS::StatusBarConfig*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::iOS::StatusBarConfig*>(__this->_used) = NULL;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_IViewport__uType* List__Fuse_IViewport__typeof()
{
    static ::uStaticStrong<List__Fuse_IViewport__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_IViewport__uType*)::uAllocClassType(sizeof(List__Fuse_IViewport__uType), "Uno.Collections.List<Fuse.IViewport>", false, 2, 1, 0);

    type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))List__Fuse_IViewport__RemoveAt;
    type->__interface_0.__fp_get_Item = (::uObject*(*)(void*, int))List__Fuse_IViewport__get_Item;
    type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_IViewport__get_Count;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_IViewport__typeof(), offsetof(List__Fuse_IViewport__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_IViewport__typeof(), offsetof(List__Fuse_IViewport__uType, __interface_1));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_IViewport, _data));

    return type;
}

void List__Fuse_IViewport___ObjInit(List__Fuse_IViewport* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_IViewport__Add(List__Fuse_IViewport* __this, ::uObject* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_IViewport__BoundsCheck(List__Fuse_IViewport* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_IViewport__EnsureCapacity(List__Fuse_IViewport* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::IViewport__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::IViewport__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::uObject*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_IViewport__get_Count(List__Fuse_IViewport* __this)
{
    return __this->_used;
}

::uObject* List__Fuse_IViewport__get_Item(List__Fuse_IViewport* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(index);
}

List__Fuse_IViewport* List__Fuse_IViewport__New_1(::uStatic* __this)
{
    List__Fuse_IViewport* inst = (List__Fuse_IViewport*)::uAllocObject(sizeof(List__Fuse_IViewport), List__Fuse_IViewport__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_IViewport__RemoveAt(List__Fuse_IViewport* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_IViewport__set_Item(List__Fuse_IViewport* __this, int index, ::uObject* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Layouts_Column__uType* List__Fuse_Layouts_Column__typeof()
{
    static ::uStaticStrong<List__Fuse_Layouts_Column__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Layouts_Column__uType*)::uAllocClassType(sizeof(List__Fuse_Layouts_Column__uType), "Uno.Collections.List<Fuse.Layouts.Column>", false, 2, 1, 0);

    type->__interface_0.__fp_get_Item = (::app::Fuse::Layouts::Column*(*)(void*, int))List__Fuse_Layouts_Column__get_Item;
    type->__interface_1.__fp_Clear = (void(*)(void*))List__Fuse_Layouts_Column__Clear;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Layouts::Column*))List__Fuse_Layouts_Column__Add;
    type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_Layouts_Column__get_Count;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Layouts_Column__typeof(), offsetof(List__Fuse_Layouts_Column__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Layouts_Column__typeof(), offsetof(List__Fuse_Layouts_Column__uType, __interface_1));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Layouts_Column, _data));

    return type;
}

void List__Fuse_Layouts_Column___ObjInit(List__Fuse_Layouts_Column* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Layouts_Column__Add(List__Fuse_Layouts_Column* __this, ::app::Fuse::Layouts::Column* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Layouts::Column*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Layouts_Column__BoundsCheck(List__Fuse_Layouts_Column* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Layouts_Column__Clear(List__Fuse_Layouts_Column* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
    __this->_version++;
}

void List__Fuse_Layouts_Column__EnsureCapacity(List__Fuse_Layouts_Column* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Layouts::Column__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Layouts::Column__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Layouts::Column*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Layouts::Column*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Layouts_Column__get_Count(List__Fuse_Layouts_Column* __this)
{
    return __this->_used;
}

::app::Fuse::Layouts::Column* List__Fuse_Layouts_Column__get_Item(List__Fuse_Layouts_Column* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Layouts::Column*>(index);
}

::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_Column List__Fuse_Layouts_Column__GetEnumerator(List__Fuse_Layouts_Column* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_Column__New_1(NULL, __this);
}

List__Fuse_Layouts_Column* List__Fuse_Layouts_Column__New_1(::uStatic* __this)
{
    List__Fuse_Layouts_Column* inst = (List__Fuse_Layouts_Column*)::uAllocObject(sizeof(List__Fuse_Layouts_Column), List__Fuse_Layouts_Column__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Layouts_Column__set_Item(List__Fuse_Layouts_Column* __this, int index, ::app::Fuse::Layouts::Column* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Layouts::Column*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Layouts_DefinitionBase_ParseDataItem__uType* List__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof()
{
    static ::uStaticStrong<List__Fuse_Layouts_DefinitionBase_ParseDataItem__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Layouts_DefinitionBase_ParseDataItem__uType*)::uAllocClassType(sizeof(List__Fuse_Layouts_DefinitionBase_ParseDataItem__uType), "Uno.Collections.List<Fuse.Layouts.DefinitionBase_ParseDataItem>", false, 2, 1, 0);

    type->__interface_1.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Layouts_DefinitionBase_ParseDataItem__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof(), offsetof(List__Fuse_Layouts_DefinitionBase_ParseDataItem__uType, __interface_0),
        ::app::Uno::Collections::IEnumerable__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof(), offsetof(List__Fuse_Layouts_DefinitionBase_ParseDataItem__uType, __interface_1));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Layouts_DefinitionBase_ParseDataItem, _data));

    return type;
}

::uObject* List__Fuse_Layouts_DefinitionBase_ParseDataItem__GetEnumerator_boxed(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof(), __this->GetEnumerator());
}

void List__Fuse_Layouts_DefinitionBase_ParseDataItem___ObjInit(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Layouts_DefinitionBase_ParseDataItem__Add(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this, ::app::Fuse::Layouts::DefinitionBase_ParseDataItem item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Layouts::DefinitionBase_ParseDataItem>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Layouts_DefinitionBase_ParseDataItem__EnsureCapacity(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Layouts::DefinitionBase_ParseDataItem__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Layouts::DefinitionBase_ParseDataItem__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->Item< ::app::Fuse::Layouts::DefinitionBase_ParseDataItem>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Layouts::DefinitionBase_ParseDataItem>(i);
        }

        __this->_data = newData;
    }
}

::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem List__Fuse_Layouts_DefinitionBase_ParseDataItem__GetEnumerator(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__New_1(NULL, __this);
}

List__Fuse_Layouts_DefinitionBase_ParseDataItem* List__Fuse_Layouts_DefinitionBase_ParseDataItem__New_1(::uStatic* __this)
{
    List__Fuse_Layouts_DefinitionBase_ParseDataItem* inst = (List__Fuse_Layouts_DefinitionBase_ParseDataItem*)::uAllocObject(sizeof(List__Fuse_Layouts_DefinitionBase_ParseDataItem), List__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Layouts_Row__uType* List__Fuse_Layouts_Row__typeof()
{
    static ::uStaticStrong<List__Fuse_Layouts_Row__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Layouts_Row__uType*)::uAllocClassType(sizeof(List__Fuse_Layouts_Row__uType), "Uno.Collections.List<Fuse.Layouts.Row>", false, 2, 1, 0);

    type->__interface_0.__fp_get_Item = (::app::Fuse::Layouts::Row*(*)(void*, int))List__Fuse_Layouts_Row__get_Item;
    type->__interface_1.__fp_Clear = (void(*)(void*))List__Fuse_Layouts_Row__Clear;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Layouts::Row*))List__Fuse_Layouts_Row__Add;
    type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_Layouts_Row__get_Count;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Layouts_Row__typeof(), offsetof(List__Fuse_Layouts_Row__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Layouts_Row__typeof(), offsetof(List__Fuse_Layouts_Row__uType, __interface_1));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Layouts_Row, _data));

    return type;
}

void List__Fuse_Layouts_Row___ObjInit(List__Fuse_Layouts_Row* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Layouts_Row__Add(List__Fuse_Layouts_Row* __this, ::app::Fuse::Layouts::Row* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Layouts::Row*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Layouts_Row__BoundsCheck(List__Fuse_Layouts_Row* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Layouts_Row__Clear(List__Fuse_Layouts_Row* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
    __this->_version++;
}

void List__Fuse_Layouts_Row__EnsureCapacity(List__Fuse_Layouts_Row* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Layouts::Row__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Layouts::Row__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Layouts::Row*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Layouts::Row*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Layouts_Row__get_Count(List__Fuse_Layouts_Row* __this)
{
    return __this->_used;
}

::app::Fuse::Layouts::Row* List__Fuse_Layouts_Row__get_Item(List__Fuse_Layouts_Row* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Layouts::Row*>(index);
}

::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_Row List__Fuse_Layouts_Row__GetEnumerator(List__Fuse_Layouts_Row* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_Row__New_1(NULL, __this);
}

List__Fuse_Layouts_Row* List__Fuse_Layouts_Row__New_1(::uStatic* __this)
{
    List__Fuse_Layouts_Row* inst = (List__Fuse_Layouts_Row*)::uAllocObject(sizeof(List__Fuse_Layouts_Row), List__Fuse_Layouts_Row__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Layouts_Row__set_Item(List__Fuse_Layouts_Row* __this, int index, ::app::Fuse::Layouts::Row* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Layouts::Row*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Navigation_INavigationAnimator__uType* List__Fuse_Navigation_INavigationAnimator__typeof()
{
    static ::uStaticStrong<List__Fuse_Navigation_INavigationAnimator__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Navigation_INavigationAnimator__uType*)::uAllocClassType(sizeof(List__Fuse_Navigation_INavigationAnimator__uType), "Uno.Collections.List<Fuse.Navigation.INavigationAnimator>", false, 2, 1, 0);

    type->__interface_0.__fp_get_Item = (::uObject*(*)(void*, int))List__Fuse_Navigation_INavigationAnimator__get_Item;
    type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_Navigation_INavigationAnimator__get_Count;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Navigation_INavigationAnimator__typeof(), offsetof(List__Fuse_Navigation_INavigationAnimator__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Navigation_INavigationAnimator__typeof(), offsetof(List__Fuse_Navigation_INavigationAnimator__uType, __interface_1));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Navigation_INavigationAnimator, _data));

    return type;
}

void List__Fuse_Navigation_INavigationAnimator___ObjInit_1(List__Fuse_Navigation_INavigationAnimator* __this, int capacity)
{
    __this->_data = ::uNewArray(::app::Fuse::Navigation::INavigationAnimator__typeof(), capacity);
    __this->_used = 0;
}

void List__Fuse_Navigation_INavigationAnimator__Add(List__Fuse_Navigation_INavigationAnimator* __this, ::uObject* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Navigation_INavigationAnimator__BoundsCheck(List__Fuse_Navigation_INavigationAnimator* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Navigation_INavigationAnimator__EnsureCapacity(List__Fuse_Navigation_INavigationAnimator* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Navigation::INavigationAnimator__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Navigation::INavigationAnimator__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::uObject*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Navigation_INavigationAnimator__get_Count(List__Fuse_Navigation_INavigationAnimator* __this)
{
    return __this->_used;
}

::uObject* List__Fuse_Navigation_INavigationAnimator__get_Item(List__Fuse_Navigation_INavigationAnimator* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(index);
}

List__Fuse_Navigation_INavigationAnimator* List__Fuse_Navigation_INavigationAnimator__New_2(::uStatic* __this, int capacity)
{
    List__Fuse_Navigation_INavigationAnimator* inst = (List__Fuse_Navigation_INavigationAnimator*)::uAllocObject(sizeof(List__Fuse_Navigation_INavigationAnimator), List__Fuse_Navigation_INavigationAnimator__typeof());
    inst->_ObjInit_1(capacity);
    return inst;
}

void List__Fuse_Navigation_INavigationAnimator__set_Item(List__Fuse_Navigation_INavigationAnimator* __this, int index, ::uObject* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Navigation_IPageResourceBinding__uType* List__Fuse_Navigation_IPageResourceBinding__typeof()
{
    static ::uStaticStrong<List__Fuse_Navigation_IPageResourceBinding__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Navigation_IPageResourceBinding__uType*)::uAllocClassType(sizeof(List__Fuse_Navigation_IPageResourceBinding__uType), "Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Navigation_IPageResourceBinding, _data));

    return type;
}

void List__Fuse_Navigation_IPageResourceBinding___ObjInit(List__Fuse_Navigation_IPageResourceBinding* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Navigation_IPageResourceBinding List__Fuse_Navigation_IPageResourceBinding__GetEnumerator(List__Fuse_Navigation_IPageResourceBinding* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Navigation_IPageResourceBinding__New_1(NULL, __this);
}

List__Fuse_Navigation_IPageResourceBinding* List__Fuse_Navigation_IPageResourceBinding__New_1(::uStatic* __this)
{
    List__Fuse_Navigation_IPageResourceBinding* inst = (List__Fuse_Navigation_IPageResourceBinding*)::uAllocObject(sizeof(List__Fuse_Navigation_IPageResourceBinding), List__Fuse_Navigation_IPageResourceBinding__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Node__uType* List__Fuse_Node__typeof()
{
    static ::uStaticStrong<List__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Node__uType*)::uAllocClassType(sizeof(List__Fuse_Node__uType), "Uno.Collections.List<Fuse.Node>", false, 3, 1, 0);

    type->__interface_0.__fp_Insert = (void(*)(void*, int, ::app::Fuse::Node*))List__Fuse_Node__Insert;
    type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))List__Fuse_Node__RemoveAt;
    type->__interface_0.__fp_get_Item = (::app::Fuse::Node*(*)(void*, int))List__Fuse_Node__get_Item;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Node*))List__Fuse_Node__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Node*))List__Fuse_Node__Remove;
    type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_Node__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Node__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Node__typeof(), offsetof(List__Fuse_Node__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Node__typeof(), offsetof(List__Fuse_Node__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Node__typeof(), offsetof(List__Fuse_Node__uType, __interface_2));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Node, _data));

    return type;
}

::uObject* List__Fuse_Node__GetEnumerator_boxed(List__Fuse_Node* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Node__typeof(), __this->GetEnumerator());
}

void List__Fuse_Node___ObjInit(List__Fuse_Node* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Node__Add(List__Fuse_Node* __this, ::app::Fuse::Node* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Node*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Node__BoundsCheck(List__Fuse_Node* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Node__Clear(List__Fuse_Node* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
    __this->_version++;
}

bool List__Fuse_Node__Contains(List__Fuse_Node* __this, ::app::Fuse::Node* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Node(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Node*>(i), item))
        {
            return true;
        }
    }

    return false;
}

void List__Fuse_Node__EnsureCapacity(List__Fuse_Node* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Node__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Node__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Node*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Node*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Node__get_Count(List__Fuse_Node* __this)
{
    return __this->_used;
}

::app::Fuse::Node* List__Fuse_Node__get_Item(List__Fuse_Node* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Node*>(index);
}

::app::Uno::Collections::List1_Enumerator__Fuse_Node List__Fuse_Node__GetEnumerator(List__Fuse_Node* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Node__New_1(NULL, __this);
}

void List__Fuse_Node__Insert(List__Fuse_Node* __this, int index, ::app::Fuse::Node* item)
{
    if ((index < 0) || (index > __this->_used))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->EnsureCapacity();

    for (int i = __this->_used; i >= index; i--)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Node*>(i + 1) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Node*>(i);
    }

    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Node*>(index) = item;
    __this->_version++;
    __this->_used++;
}

List__Fuse_Node* List__Fuse_Node__New_1(::uStatic* __this)
{
    List__Fuse_Node* inst = (List__Fuse_Node*)::uAllocObject(sizeof(List__Fuse_Node), List__Fuse_Node__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_Node__Remove(List__Fuse_Node* __this, ::app::Fuse::Node* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Node(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Node*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Node__RemoveAt(List__Fuse_Node* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Node*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Node*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Node*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Node__set_Item(List__Fuse_Node* __this, int index, ::app::Fuse::Node* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Node*>(index) = value;
    __this->_version++;
}

void List__Fuse_Node__Sort(List__Fuse_Node* __this, ::uDelegate* comparer)
{
    ::app::Uno::Array__Sort__Fuse_Node(NULL, __this->_data, 0, __this->_used, comparer);
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Physics_Body__uType* List__Fuse_Physics_Body__typeof()
{
    static ::uStaticStrong<List__Fuse_Physics_Body__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Physics_Body__uType*)::uAllocClassType(sizeof(List__Fuse_Physics_Body__uType), "Uno.Collections.List<Fuse.Physics.Body>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Physics_Body, _data));

    return type;
}

void List__Fuse_Physics_Body___ObjInit(List__Fuse_Physics_Body* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Physics_Body__Add(List__Fuse_Physics_Body* __this, ::app::Fuse::Physics::Body* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Physics::Body*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Physics_Body__BoundsCheck(List__Fuse_Physics_Body* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Physics_Body__EnsureCapacity(List__Fuse_Physics_Body* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Physics::Body__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Physics::Body__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Physics::Body*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Physics::Body*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Physics_Body__get_Count(List__Fuse_Physics_Body* __this)
{
    return __this->_used;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Physics_Body List__Fuse_Physics_Body__GetEnumerator(List__Fuse_Physics_Body* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Physics_Body__New_1(NULL, __this);
}

List__Fuse_Physics_Body* List__Fuse_Physics_Body__New_1(::uStatic* __this)
{
    List__Fuse_Physics_Body* inst = (List__Fuse_Physics_Body*)::uAllocObject(sizeof(List__Fuse_Physics_Body), List__Fuse_Physics_Body__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_Physics_Body__Remove(List__Fuse_Physics_Body* __this, ::app::Fuse::Physics::Body* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Physics_Body(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Physics::Body*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Physics_Body__RemoveAt(List__Fuse_Physics_Body* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Physics::Body*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Physics::Body*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Physics::Body*>(__this->_used) = NULL;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Physics_IRule__uType* List__Fuse_Physics_IRule__typeof()
{
    static ::uStaticStrong<List__Fuse_Physics_IRule__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Physics_IRule__uType*)::uAllocClassType(sizeof(List__Fuse_Physics_IRule__uType), "Uno.Collections.List<Fuse.Physics.IRule>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Physics_IRule__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Physics_IRule__typeof(), offsetof(List__Fuse_Physics_IRule__uType, __interface_0));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Physics_IRule, _data));

    return type;
}

::uObject* List__Fuse_Physics_IRule__GetEnumerator_boxed(List__Fuse_Physics_IRule* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Physics_IRule__typeof(), __this->GetEnumerator());
}

void List__Fuse_Physics_IRule___ObjInit(List__Fuse_Physics_IRule* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Physics_IRule__Add(List__Fuse_Physics_IRule* __this, ::uObject* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Physics_IRule__BoundsCheck(List__Fuse_Physics_IRule* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Physics_IRule__EnsureCapacity(List__Fuse_Physics_IRule* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Physics::IRule__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Physics::IRule__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::uObject*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Physics_IRule__get_Count(List__Fuse_Physics_IRule* __this)
{
    return __this->_used;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Physics_IRule List__Fuse_Physics_IRule__GetEnumerator(List__Fuse_Physics_IRule* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Physics_IRule__New_1(NULL, __this);
}

List__Fuse_Physics_IRule* List__Fuse_Physics_IRule__New_1(::uStatic* __this)
{
    List__Fuse_Physics_IRule* inst = (List__Fuse_Physics_IRule*)::uAllocObject(sizeof(List__Fuse_Physics_IRule), List__Fuse_Physics_IRule__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_Physics_IRule__Remove(List__Fuse_Physics_IRule* __this, ::uObject* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Physics_IRule(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Physics_IRule__RemoveAt(List__Fuse_Physics_IRule* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(__this->_used) = NULL;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Reactive_FuseJS_Timer_Time__uType* List__Fuse_Reactive_FuseJS_Timer_Time__typeof()
{
    static ::uStaticStrong<List__Fuse_Reactive_FuseJS_Timer_Time__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Reactive_FuseJS_Timer_Time__uType*)::uAllocClassType(sizeof(List__Fuse_Reactive_FuseJS_Timer_Time__uType), "Uno.Collections.List<Fuse.Reactive.FuseJS.Timer_Time>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Reactive_FuseJS_Timer_Time, _data));

    return type;
}

void List__Fuse_Reactive_FuseJS_Timer_Time___ObjInit(List__Fuse_Reactive_FuseJS_Timer_Time* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Reactive_FuseJS_Timer_Time__Add(List__Fuse_Reactive_FuseJS_Timer_Time* __this, ::app::Fuse::Reactive::FuseJS::Timer_Time* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Reactive::FuseJS::Timer_Time*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Reactive_FuseJS_Timer_Time__BoundsCheck(List__Fuse_Reactive_FuseJS_Timer_Time* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Reactive_FuseJS_Timer_Time__EnsureCapacity(List__Fuse_Reactive_FuseJS_Timer_Time* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Reactive::FuseJS::Timer_Time__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Reactive::FuseJS::Timer_Time__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Reactive::FuseJS::Timer_Time*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Reactive::FuseJS::Timer_Time*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Reactive_FuseJS_Timer_Time__get_Count(List__Fuse_Reactive_FuseJS_Timer_Time* __this)
{
    return __this->_used;
}

::app::Fuse::Reactive::FuseJS::Timer_Time* List__Fuse_Reactive_FuseJS_Timer_Time__get_Item(List__Fuse_Reactive_FuseJS_Timer_Time* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Reactive::FuseJS::Timer_Time*>(index);
}

List__Fuse_Reactive_FuseJS_Timer_Time* List__Fuse_Reactive_FuseJS_Timer_Time__New_1(::uStatic* __this)
{
    List__Fuse_Reactive_FuseJS_Timer_Time* inst = (List__Fuse_Reactive_FuseJS_Timer_Time*)::uAllocObject(sizeof(List__Fuse_Reactive_FuseJS_Timer_Time), List__Fuse_Reactive_FuseJS_Timer_Time__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Reactive_FuseJS_Timer_Time__RemoveAt(List__Fuse_Reactive_FuseJS_Timer_Time* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Reactive::FuseJS::Timer_Time*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Reactive::FuseJS::Timer_Time*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Reactive::FuseJS::Timer_Time*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Reactive_FuseJS_Timer_Time__set_Item(List__Fuse_Reactive_FuseJS_Timer_Time* __this, int index, ::app::Fuse::Reactive::FuseJS::Timer_Time* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Reactive::FuseJS::Timer_Time*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Reactive_JavaScript__uType* List__Fuse_Reactive_JavaScript__typeof()
{
    static ::uStaticStrong<List__Fuse_Reactive_JavaScript__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Reactive_JavaScript__uType*)::uAllocClassType(sizeof(List__Fuse_Reactive_JavaScript__uType), "Uno.Collections.List<Fuse.Reactive.JavaScript>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Reactive_JavaScript, _data));

    return type;
}

void List__Fuse_Reactive_JavaScript___ObjInit(List__Fuse_Reactive_JavaScript* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Reactive_JavaScript__Add(List__Fuse_Reactive_JavaScript* __this, ::app::Fuse::Reactive::JavaScript* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Reactive::JavaScript*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Reactive_JavaScript__BoundsCheck(List__Fuse_Reactive_JavaScript* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Reactive_JavaScript__EnsureCapacity(List__Fuse_Reactive_JavaScript* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Reactive::JavaScript__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Reactive::JavaScript__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Reactive::JavaScript*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Reactive::JavaScript*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Reactive_JavaScript__get_Count(List__Fuse_Reactive_JavaScript* __this)
{
    return __this->_used;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Reactive_JavaScript List__Fuse_Reactive_JavaScript__GetEnumerator(List__Fuse_Reactive_JavaScript* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Reactive_JavaScript__New_1(NULL, __this);
}

List__Fuse_Reactive_JavaScript* List__Fuse_Reactive_JavaScript__New_1(::uStatic* __this)
{
    List__Fuse_Reactive_JavaScript* inst = (List__Fuse_Reactive_JavaScript*)::uAllocObject(sizeof(List__Fuse_Reactive_JavaScript), List__Fuse_Reactive_JavaScript__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_Reactive_JavaScript__Remove(List__Fuse_Reactive_JavaScript* __this, ::app::Fuse::Reactive::JavaScript* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Reactive_JavaScript(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Reactive::JavaScript*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Reactive_JavaScript__RemoveAt(List__Fuse_Reactive_JavaScript* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Reactive::JavaScript*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Reactive::JavaScript*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Reactive::JavaScript*>(__this->_used) = NULL;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_RenderTargetEntry__uType* List__Fuse_RenderTargetEntry__typeof()
{
    static ::uStaticStrong<List__Fuse_RenderTargetEntry__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_RenderTargetEntry__uType*)::uAllocClassType(sizeof(List__Fuse_RenderTargetEntry__uType), "Uno.Collections.List<Fuse.RenderTargetEntry>", false, 2, 1, 0);

    type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))List__Fuse_RenderTargetEntry__RemoveAt;
    type->__interface_0.__fp_get_Item = (::app::Fuse::RenderTargetEntry*(*)(void*, int))List__Fuse_RenderTargetEntry__get_Item;
    type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_RenderTargetEntry__get_Count;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_RenderTargetEntry__typeof(), offsetof(List__Fuse_RenderTargetEntry__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_RenderTargetEntry__typeof(), offsetof(List__Fuse_RenderTargetEntry__uType, __interface_1));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_RenderTargetEntry, _data));

    return type;
}

void List__Fuse_RenderTargetEntry___ObjInit(List__Fuse_RenderTargetEntry* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_RenderTargetEntry__Add(List__Fuse_RenderTargetEntry* __this, ::app::Fuse::RenderTargetEntry* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::RenderTargetEntry*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_RenderTargetEntry__BoundsCheck(List__Fuse_RenderTargetEntry* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_RenderTargetEntry__EnsureCapacity(List__Fuse_RenderTargetEntry* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::RenderTargetEntry__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::RenderTargetEntry__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::RenderTargetEntry*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::RenderTargetEntry*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_RenderTargetEntry__get_Count(List__Fuse_RenderTargetEntry* __this)
{
    return __this->_used;
}

::app::Fuse::RenderTargetEntry* List__Fuse_RenderTargetEntry__get_Item(List__Fuse_RenderTargetEntry* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::RenderTargetEntry*>(index);
}

List__Fuse_RenderTargetEntry* List__Fuse_RenderTargetEntry__New_1(::uStatic* __this)
{
    List__Fuse_RenderTargetEntry* inst = (List__Fuse_RenderTargetEntry*)::uAllocObject(sizeof(List__Fuse_RenderTargetEntry), List__Fuse_RenderTargetEntry__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_RenderTargetEntry__RemoveAt(List__Fuse_RenderTargetEntry* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::RenderTargetEntry*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::RenderTargetEntry*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::RenderTargetEntry*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_RenderTargetEntry__set_Item(List__Fuse_RenderTargetEntry* __this, int index, ::app::Fuse::RenderTargetEntry* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::RenderTargetEntry*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Resources_ImageSource__uType* List__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong<List__Fuse_Resources_ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Resources_ImageSource__uType*)::uAllocClassType(sizeof(List__Fuse_Resources_ImageSource__uType), "Uno.Collections.List<Fuse.Resources.ImageSource>", false, 3, 1, 0);

    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Resources::ImageSource*))List__Fuse_Resources_ImageSource__Add;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Resources_ImageSource__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Resources_ImageSource__typeof(), offsetof(List__Fuse_Resources_ImageSource__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Resources_ImageSource__typeof(), offsetof(List__Fuse_Resources_ImageSource__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Resources_ImageSource__typeof(), offsetof(List__Fuse_Resources_ImageSource__uType, __interface_2));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Resources_ImageSource, _data));

    return type;
}

::uObject* List__Fuse_Resources_ImageSource__GetEnumerator_boxed(List__Fuse_Resources_ImageSource* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Resources_ImageSource__typeof(), __this->GetEnumerator());
}

void List__Fuse_Resources_ImageSource___ObjInit(List__Fuse_Resources_ImageSource* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Resources_ImageSource__Add(List__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Resources::ImageSource*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Resources_ImageSource__EnsureCapacity(List__Fuse_Resources_ImageSource* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Resources::ImageSource__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Resources::ImageSource__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Resources::ImageSource*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Resources::ImageSource*>(i);
        }

        __this->_data = newData;
    }
}

::app::Uno::Collections::List1_Enumerator__Fuse_Resources_ImageSource List__Fuse_Resources_ImageSource__GetEnumerator(List__Fuse_Resources_ImageSource* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Resources_ImageSource__New_1(NULL, __this);
}

List__Fuse_Resources_ImageSource* List__Fuse_Resources_ImageSource__New_1(::uStatic* __this)
{
    List__Fuse_Resources_ImageSource* inst = (List__Fuse_Resources_ImageSource*)::uAllocObject(sizeof(List__Fuse_Resources_ImageSource), List__Fuse_Resources_ImageSource__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Resources_IMemoryResource__uType* List__Fuse_Resources_IMemoryResource__typeof()
{
    static ::uStaticStrong<List__Fuse_Resources_IMemoryResource__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Resources_IMemoryResource__uType*)::uAllocClassType(sizeof(List__Fuse_Resources_IMemoryResource__uType), "Uno.Collections.List<Fuse.Resources.IMemoryResource>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Resources_IMemoryResource, _data));

    return type;
}

void List__Fuse_Resources_IMemoryResource___ObjInit(List__Fuse_Resources_IMemoryResource* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Resources_IMemoryResource__Add(List__Fuse_Resources_IMemoryResource* __this, ::uObject* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Resources_IMemoryResource__BoundsCheck(List__Fuse_Resources_IMemoryResource* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Resources_IMemoryResource__EnsureCapacity(List__Fuse_Resources_IMemoryResource* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Resources::IMemoryResource__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Resources::IMemoryResource__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::uObject*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Resources_IMemoryResource__get_Count(List__Fuse_Resources_IMemoryResource* __this)
{
    return __this->_used;
}

::uObject* List__Fuse_Resources_IMemoryResource__get_Item(List__Fuse_Resources_IMemoryResource* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(index);
}

List__Fuse_Resources_IMemoryResource* List__Fuse_Resources_IMemoryResource__New_1(::uStatic* __this)
{
    List__Fuse_Resources_IMemoryResource* inst = (List__Fuse_Resources_IMemoryResource*)::uAllocObject(sizeof(List__Fuse_Resources_IMemoryResource), List__Fuse_Resources_IMemoryResource__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_Resources_IMemoryResource__Remove(List__Fuse_Resources_IMemoryResource* __this, ::uObject* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Resources_IMemoryResource(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Resources_IMemoryResource__RemoveAt(List__Fuse_Resources_IMemoryResource* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Resources_IMemoryResource__set_Item(List__Fuse_Resources_IMemoryResource* __this, int index, ::uObject* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Resources_ISoftDisposable__uType* List__Fuse_Resources_ISoftDisposable__typeof()
{
    static ::uStaticStrong<List__Fuse_Resources_ISoftDisposable__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Resources_ISoftDisposable__uType*)::uAllocClassType(sizeof(List__Fuse_Resources_ISoftDisposable__uType), "Uno.Collections.List<Fuse.Resources.ISoftDisposable>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Resources_ISoftDisposable, _data));

    return type;
}

void List__Fuse_Resources_ISoftDisposable___ObjInit(List__Fuse_Resources_ISoftDisposable* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Resources_ISoftDisposable__Add(List__Fuse_Resources_ISoftDisposable* __this, ::uObject* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Resources_ISoftDisposable__BoundsCheck(List__Fuse_Resources_ISoftDisposable* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Resources_ISoftDisposable__EnsureCapacity(List__Fuse_Resources_ISoftDisposable* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Resources::ISoftDisposable__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Resources::ISoftDisposable__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::uObject*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Resources_ISoftDisposable__get_Count(List__Fuse_Resources_ISoftDisposable* __this)
{
    return __this->_used;
}

::uObject* List__Fuse_Resources_ISoftDisposable__get_Item(List__Fuse_Resources_ISoftDisposable* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(index);
}

List__Fuse_Resources_ISoftDisposable* List__Fuse_Resources_ISoftDisposable__New_1(::uStatic* __this)
{
    List__Fuse_Resources_ISoftDisposable* inst = (List__Fuse_Resources_ISoftDisposable*)::uAllocObject(sizeof(List__Fuse_Resources_ISoftDisposable), List__Fuse_Resources_ISoftDisposable__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Resources_ISoftDisposable__set_Item(List__Fuse_Resources_ISoftDisposable* __this, int index, ::uObject* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Scripting_INameListener__uType* List__Fuse_Scripting_INameListener__typeof()
{
    static ::uStaticStrong<List__Fuse_Scripting_INameListener__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Scripting_INameListener__uType*)::uAllocClassType(sizeof(List__Fuse_Scripting_INameListener__uType), "Uno.Collections.List<Fuse.Scripting.INameListener>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Scripting_INameListener, _data));

    return type;
}

void List__Fuse_Scripting_INameListener___ObjInit(List__Fuse_Scripting_INameListener* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Scripting_INameListener__Add(List__Fuse_Scripting_INameListener* __this, ::uObject* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Scripting_INameListener__BoundsCheck(List__Fuse_Scripting_INameListener* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

bool List__Fuse_Scripting_INameListener__Contains(List__Fuse_Scripting_INameListener* __this, ::uObject* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Scripting_INameListener(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i), item))
        {
            return true;
        }
    }

    return false;
}

void List__Fuse_Scripting_INameListener__EnsureCapacity(List__Fuse_Scripting_INameListener* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Scripting::INameListener__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Scripting::INameListener__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::uObject*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Scripting_INameListener__get_Count(List__Fuse_Scripting_INameListener* __this)
{
    return __this->_used;
}

List__Fuse_Scripting_INameListener* List__Fuse_Scripting_INameListener__New_1(::uStatic* __this)
{
    List__Fuse_Scripting_INameListener* inst = (List__Fuse_Scripting_INameListener*)::uAllocObject(sizeof(List__Fuse_Scripting_INameListener), List__Fuse_Scripting_INameListener__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_Scripting_INameListener__Remove(List__Fuse_Scripting_INameListener* __this, ::uObject* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Scripting_INameListener(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Scripting_INameListener__RemoveAt(List__Fuse_Scripting_INameListener* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(__this->_used) = NULL;
    __this->_version++;
}

::uArray* List__Fuse_Scripting_INameListener__ToArray(List__Fuse_Scripting_INameListener* __this)
{
    ::uArray* t = ::uNewArray(::app::Fuse::Scripting::INameListener__typeof(), __this->_used);

    for (int i = 0; i < __this->_used; i++)
    {
        t->ItemStrong< ::uObject*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i);
    }

    return t;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Scripting_NativeMember__uType* List__Fuse_Scripting_NativeMember__typeof()
{
    static ::uStaticStrong<List__Fuse_Scripting_NativeMember__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Scripting_NativeMember__uType*)::uAllocClassType(sizeof(List__Fuse_Scripting_NativeMember__uType), "Uno.Collections.List<Fuse.Scripting.NativeMember>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Scripting_NativeMember, _data));

    return type;
}

void List__Fuse_Scripting_NativeMember___ObjInit(List__Fuse_Scripting_NativeMember* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Scripting_NativeMember__Add(List__Fuse_Scripting_NativeMember* __this, ::app::Fuse::Scripting::NativeMember* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Scripting_NativeMember__EnsureCapacity(List__Fuse_Scripting_NativeMember* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Scripting::NativeMember__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Scripting::NativeMember__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Scripting::NativeMember*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Scripting::NativeMember*>(i);
        }

        __this->_data = newData;
    }
}

::app::Uno::Collections::List1_Enumerator__Fuse_Scripting_NativeMember List__Fuse_Scripting_NativeMember__GetEnumerator(List__Fuse_Scripting_NativeMember* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Scripting_NativeMember__New_1(NULL, __this);
}

List__Fuse_Scripting_NativeMember* List__Fuse_Scripting_NativeMember__New_1(::uStatic* __this)
{
    List__Fuse_Scripting_NativeMember* inst = (List__Fuse_Scripting_NativeMember*)::uAllocObject(sizeof(List__Fuse_Scripting_NativeMember), List__Fuse_Scripting_NativeMember__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Stage__uType* List__Fuse_Stage__typeof()
{
    static ::uStaticStrong<List__Fuse_Stage__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Stage__uType*)::uAllocClassType(sizeof(List__Fuse_Stage__uType), "Uno.Collections.List<Fuse.Stage>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Stage, _data));

    return type;
}

void List__Fuse_Stage___ObjInit(List__Fuse_Stage* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Stage__Add(List__Fuse_Stage* __this, ::app::Fuse::Stage* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Stage*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Stage__BoundsCheck(List__Fuse_Stage* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Stage__EnsureCapacity(List__Fuse_Stage* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Stage__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Stage__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Stage*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Stage*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Stage__get_Count(List__Fuse_Stage* __this)
{
    return __this->_used;
}

::app::Fuse::Stage* List__Fuse_Stage__get_Item(List__Fuse_Stage* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Stage*>(index);
}

List__Fuse_Stage* List__Fuse_Stage__New_1(::uStatic* __this)
{
    List__Fuse_Stage* inst = (List__Fuse_Stage*)::uAllocObject(sizeof(List__Fuse_Stage), List__Fuse_Stage__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_Stage__set_Item(List__Fuse_Stage* __this, int index, ::app::Fuse::Stage* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Stage*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Style__uType* List__Fuse_Style__typeof()
{
    static ::uStaticStrong<List__Fuse_Style__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Style__uType*)::uAllocClassType(sizeof(List__Fuse_Style__uType), "Uno.Collections.List<Fuse.Style>", false, 3, 1, 0);

    type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))List__Fuse_Style__RemoveAt;
    type->__interface_0.__fp_get_Item = (::app::Fuse::Style*(*)(void*, int))List__Fuse_Style__get_Item;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Style*))List__Fuse_Style__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Style*))List__Fuse_Style__Remove;
    type->__interface_1.__fp_get_Count = (int(*)(void*))List__Fuse_Style__get_Count;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Style__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Style__typeof(), offsetof(List__Fuse_Style__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Style__typeof(), offsetof(List__Fuse_Style__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Style__typeof(), offsetof(List__Fuse_Style__uType, __interface_2));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Style, _data));

    return type;
}

::uObject* List__Fuse_Style__GetEnumerator_boxed(List__Fuse_Style* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Style__typeof(), __this->GetEnumerator());
}

void List__Fuse_Style___ObjInit(List__Fuse_Style* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Style__Add(List__Fuse_Style* __this, ::app::Fuse::Style* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Style*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Style__BoundsCheck(List__Fuse_Style* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Style__EnsureCapacity(List__Fuse_Style* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Style__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Style__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Style*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Style*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Style__get_Count(List__Fuse_Style* __this)
{
    return __this->_used;
}

::app::Fuse::Style* List__Fuse_Style__get_Item(List__Fuse_Style* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Style*>(index);
}

::app::Uno::Collections::List1_Enumerator__Fuse_Style List__Fuse_Style__GetEnumerator(List__Fuse_Style* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Style__New_1(NULL, __this);
}

List__Fuse_Style* List__Fuse_Style__New_1(::uStatic* __this)
{
    List__Fuse_Style* inst = (List__Fuse_Style*)::uAllocObject(sizeof(List__Fuse_Style), List__Fuse_Style__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_Style__Remove(List__Fuse_Style* __this, ::app::Fuse::Style* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Style(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Style*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Style__RemoveAt(List__Fuse_Style* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Style*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Style*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Style*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Style__set_Item(List__Fuse_Style* __this, int index, ::app::Fuse::Style* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Style*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_StyleProperty__uType* List__Fuse_StyleProperty__typeof()
{
    static ::uStaticStrong<List__Fuse_StyleProperty__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_StyleProperty__uType*)::uAllocClassType(sizeof(List__Fuse_StyleProperty__uType), "Uno.Collections.List<Fuse.StyleProperty>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_StyleProperty, _data));

    return type;
}

void List__Fuse_StyleProperty___ObjInit(List__Fuse_StyleProperty* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_StyleProperty__Add(List__Fuse_StyleProperty* __this, ::app::Fuse::StyleProperty* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::StyleProperty*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_StyleProperty__BoundsCheck(List__Fuse_StyleProperty* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_StyleProperty__EnsureCapacity(List__Fuse_StyleProperty* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::StyleProperty__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::StyleProperty__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::StyleProperty*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::StyleProperty*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_StyleProperty__get_Count(List__Fuse_StyleProperty* __this)
{
    return __this->_used;
}

::app::Fuse::StyleProperty* List__Fuse_StyleProperty__get_Item(List__Fuse_StyleProperty* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::StyleProperty*>(index);
}

List__Fuse_StyleProperty* List__Fuse_StyleProperty__New_1(::uStatic* __this)
{
    List__Fuse_StyleProperty* inst = (List__Fuse_StyleProperty*)::uAllocObject(sizeof(List__Fuse_StyleProperty), List__Fuse_StyleProperty__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_StyleProperty__set_Item(List__Fuse_StyleProperty* __this, int index, ::app::Fuse::StyleProperty* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::StyleProperty*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Transform__uType* List__Fuse_Transform__typeof()
{
    static ::uStaticStrong<List__Fuse_Transform__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Transform__uType*)::uAllocClassType(sizeof(List__Fuse_Transform__uType), "Uno.Collections.List<Fuse.Transform>", false, 3, 1, 0);

    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Transform*))List__Fuse_Transform__Add;
    type->__interface_1.__fp_Remove = (bool(*)(void*, ::app::Fuse::Transform*))List__Fuse_Transform__Remove;
    type->__interface_2.__fp_GetEnumerator = (::uObject*(*)(void*))List__Fuse_Transform__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Transform__typeof(), offsetof(List__Fuse_Transform__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Transform__typeof(), offsetof(List__Fuse_Transform__uType, __interface_1),
        ::app::Uno::Collections::IEnumerable__Fuse_Transform__typeof(), offsetof(List__Fuse_Transform__uType, __interface_2));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Transform, _data));

    return type;
}

::uObject* List__Fuse_Transform__GetEnumerator_boxed(List__Fuse_Transform* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Fuse_Transform__typeof(), __this->GetEnumerator());
}

void List__Fuse_Transform___ObjInit(List__Fuse_Transform* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Transform__Add(List__Fuse_Transform* __this, ::app::Fuse::Transform* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Transform*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Transform__BoundsCheck(List__Fuse_Transform* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_Transform__EnsureCapacity(List__Fuse_Transform* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Transform__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Transform__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Transform*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Transform*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Transform__get_Count(List__Fuse_Transform* __this)
{
    return __this->_used;
}

::app::Fuse::Transform* List__Fuse_Transform__get_Item(List__Fuse_Transform* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Transform*>(index);
}

::app::Uno::Collections::List1_Enumerator__Fuse_Transform List__Fuse_Transform__GetEnumerator(List__Fuse_Transform* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Transform__New_1(NULL, __this);
}

List__Fuse_Transform* List__Fuse_Transform__New_1(::uStatic* __this)
{
    List__Fuse_Transform* inst = (List__Fuse_Transform*)::uAllocObject(sizeof(List__Fuse_Transform), List__Fuse_Transform__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Fuse_Transform__Remove(List__Fuse_Transform* __this, ::app::Fuse::Transform* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Fuse_Transform(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Transform*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Fuse_Transform__RemoveAt(List__Fuse_Transform* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Transform*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Transform*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Transform*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_Transform__set_Item(List__Fuse_Transform* __this, int index, ::app::Fuse::Transform* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Transform*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_Triggers_Actions_TriggerAction__uType* List__Fuse_Triggers_Actions_TriggerAction__typeof()
{
    static ::uStaticStrong<List__Fuse_Triggers_Actions_TriggerAction__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_Triggers_Actions_TriggerAction__uType*)::uAllocClassType(sizeof(List__Fuse_Triggers_Actions_TriggerAction__uType), "Uno.Collections.List<Fuse.Triggers.Actions.TriggerAction>", false, 2, 1, 0);

    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Fuse::Triggers::Actions::TriggerAction*))List__Fuse_Triggers_Actions_TriggerAction__Add;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Fuse_Triggers_Actions_TriggerAction__typeof(), offsetof(List__Fuse_Triggers_Actions_TriggerAction__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Fuse_Triggers_Actions_TriggerAction__typeof(), offsetof(List__Fuse_Triggers_Actions_TriggerAction__uType, __interface_1));

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_Triggers_Actions_TriggerAction, _data));

    return type;
}

void List__Fuse_Triggers_Actions_TriggerAction___ObjInit(List__Fuse_Triggers_Actions_TriggerAction* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_Triggers_Actions_TriggerAction__Add(List__Fuse_Triggers_Actions_TriggerAction* __this, ::app::Fuse::Triggers::Actions::TriggerAction* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::Triggers::Actions::TriggerAction*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_Triggers_Actions_TriggerAction__EnsureCapacity(List__Fuse_Triggers_Actions_TriggerAction* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::Triggers::Actions::TriggerAction__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::Triggers::Actions::TriggerAction__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::Triggers::Actions::TriggerAction*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::Triggers::Actions::TriggerAction*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_Triggers_Actions_TriggerAction__get_Count(List__Fuse_Triggers_Actions_TriggerAction* __this)
{
    return __this->_used;
}

::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_Actions_TriggerAction List__Fuse_Triggers_Actions_TriggerAction__GetEnumerator(List__Fuse_Triggers_Actions_TriggerAction* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__New_1(NULL, __this);
}

List__Fuse_Triggers_Actions_TriggerAction* List__Fuse_Triggers_Actions_TriggerAction__New_1(::uStatic* __this)
{
    List__Fuse_Triggers_Actions_TriggerAction* inst = (List__Fuse_Triggers_Actions_TriggerAction*)::uAllocObject(sizeof(List__Fuse_Triggers_Actions_TriggerAction), List__Fuse_Triggers_Actions_TriggerAction__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Fuse_UpdateListener__uType* List__Fuse_UpdateListener__typeof()
{
    static ::uStaticStrong<List__Fuse_UpdateListener__uType*> type;
    if (type != NULL) return type;

    type = (List__Fuse_UpdateListener__uType*)::uAllocClassType(sizeof(List__Fuse_UpdateListener__uType), "Uno.Collections.List<Fuse.UpdateListener>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Fuse_UpdateListener, _data));

    return type;
}

void List__Fuse_UpdateListener___ObjInit(List__Fuse_UpdateListener* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Fuse_UpdateListener__Add(List__Fuse_UpdateListener* __this, ::app::Fuse::UpdateListener* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::UpdateListener*>(__this->_used++) = item;
    __this->_version++;
}

void List__Fuse_UpdateListener__BoundsCheck(List__Fuse_UpdateListener* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Fuse_UpdateListener__Clear(List__Fuse_UpdateListener* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
    __this->_version++;
}

void List__Fuse_UpdateListener__EnsureCapacity(List__Fuse_UpdateListener* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Fuse::UpdateListener__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Fuse::UpdateListener__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Fuse::UpdateListener*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::UpdateListener*>(i);
        }

        __this->_data = newData;
    }
}

int List__Fuse_UpdateListener__get_Count(List__Fuse_UpdateListener* __this)
{
    return __this->_used;
}

::app::Fuse::UpdateListener* List__Fuse_UpdateListener__get_Item(List__Fuse_UpdateListener* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::UpdateListener*>(index);
}

void List__Fuse_UpdateListener__Insert(List__Fuse_UpdateListener* __this, int index, ::app::Fuse::UpdateListener* item)
{
    if ((index < 0) || (index > __this->_used))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }

    __this->EnsureCapacity();

    for (int i = __this->_used; i >= index; i--)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::UpdateListener*>(i + 1) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::UpdateListener*>(i);
    }

    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::UpdateListener*>(index) = item;
    __this->_version++;
    __this->_used++;
}

List__Fuse_UpdateListener* List__Fuse_UpdateListener__New_1(::uStatic* __this)
{
    List__Fuse_UpdateListener* inst = (List__Fuse_UpdateListener*)::uAllocObject(sizeof(List__Fuse_UpdateListener), List__Fuse_UpdateListener__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Fuse_UpdateListener__RemoveAt(List__Fuse_UpdateListener* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::UpdateListener*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Fuse::UpdateListener*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::UpdateListener*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Fuse_UpdateListener__set_Item(List__Fuse_UpdateListener* __this, int index, ::app::Fuse::UpdateListener* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Fuse::UpdateListener*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__int__uType* List__int__typeof()
{
    static ::uStaticStrong<List__int__uType*> type;
    if (type != NULL) return type;

    type = (List__int__uType*)::uAllocClassType(sizeof(List__int__uType), "Uno.Collections.List<int>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__int, _data));

    return type;
}

void List__int___ObjInit(List__int* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__int___ObjInit_1(List__int* __this, int capacity)
{
    __this->_data = ::uNewArray(::app::Uno::Int__typeof(), capacity);
    __this->_used = 0;
}

void List__int__Add(List__int* __this, int item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->Item< int>(__this->_used++) = item;
    __this->_version++;
}

void List__int__BoundsCheck(List__int* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__int__Clear(List__int* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
    __this->_version++;
}

void List__int__EnsureCapacity(List__int* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Int__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::Int__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->Item< int>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< int>(i);
        }

        __this->_data = newData;
    }
}

int List__int__get_Count(List__int* __this)
{
    return __this->_used;
}

int List__int__get_Item(List__int* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< int>(index);
}

::app::Uno::Collections::List1_Enumerator__int List__int__GetEnumerator(List__int* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__int__New_1(NULL, __this);
}

List__int* List__int__New_1(::uStatic* __this)
{
    List__int* inst = (List__int*)::uAllocObject(sizeof(List__int), List__int__typeof());
    inst->_ObjInit();
    return inst;
}

List__int* List__int__New_2(::uStatic* __this, int capacity)
{
    List__int* inst = (List__int*)::uAllocObject(sizeof(List__int), List__int__typeof());
    inst->_ObjInit_1(capacity);
    return inst;
}

void List__int__set_Item(List__int* __this, int index, int value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->Item< int>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__object__uType* List__object__typeof()
{
    static ::uStaticStrong<List__object__uType*> type;
    if (type != NULL) return type;

    type = (List__object__uType*)::uAllocClassType(sizeof(List__object__uType), "Uno.Collections.List<object>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__object, _data));

    return type;
}

void List__object___ObjInit(List__object* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__object__Add(List__object* __this, ::uObject* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(__this->_used++) = item;
    __this->_version++;
}

void List__object__BoundsCheck(List__object* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

bool List__object__Contains(List__object* __this, ::uObject* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__object(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i), item))
        {
            return true;
        }
    }

    return false;
}

void List__object__EnsureCapacity(List__object* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::uObject__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::uObject__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::uObject*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i);
        }

        __this->_data = newData;
    }
}

int List__object__get_Count(List__object* __this)
{
    return __this->_used;
}

::uObject* List__object__get_Item(List__object* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(index);
}

List__object* List__object__New_1(::uStatic* __this)
{
    List__object* inst = (List__object*)::uAllocObject(sizeof(List__object), List__object__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__object__Remove(List__object* __this, ::uObject* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__object(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__object__RemoveAt(List__object* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(__this->_used) = NULL;
    __this->_version++;
}

void List__object__set_Item(List__object* __this, int index, ::uObject* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__string__uType* List__string__typeof()
{
    static ::uStaticStrong<List__string__uType*> type;
    if (type != NULL) return type;

    type = (List__string__uType*)::uAllocClassType(sizeof(List__string__uType), "Uno.Collections.List<string>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__string, _data));

    return type;
}

void List__string___ObjInit(List__string* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__string__Add(List__string* __this, ::uString* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uString*>(__this->_used++) = item;
    __this->_version++;
}

bool List__string__Contains(List__string* __this, ::uString* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__string(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::uString*>(i), item))
        {
            return true;
        }
    }

    return false;
}

void List__string__EnsureCapacity(List__string* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::String__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::String__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::uString*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uString*>(i);
        }

        __this->_data = newData;
    }
}

::app::Uno::Collections::List1_Enumerator__string List__string__GetEnumerator(List__string* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__string__New_1(NULL, __this);
}

List__string* List__string__New_1(::uStatic* __this)
{
    List__string* inst = (List__string*)::uAllocObject(sizeof(List__string), List__string__typeof());
    inst->_ObjInit();
    return inst;
}

::uArray* List__string__ToArray(List__string* __this)
{
    ::uArray* t = ::uNewArray(::app::Uno::String__typeof(), __this->_used);

    for (int i = 0; i < __this->_used; i++)
    {
        t->ItemStrong< ::uString*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uString*>(i);
    }

    return t;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Uno_Action__uType* List__Uno_Action__typeof()
{
    static ::uStaticStrong<List__Uno_Action__uType*> type;
    if (type != NULL) return type;

    type = (List__Uno_Action__uType*)::uAllocClassType(sizeof(List__Uno_Action__uType), "Uno.Collections.List<Uno.Action>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Uno_Action, _data));

    return type;
}

void List__Uno_Action___ObjInit(List__Uno_Action* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Uno_Action__Add(List__Uno_Action* __this, ::uDelegate* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_used++) = item;
    __this->_version++;
}

void List__Uno_Action__BoundsCheck(List__Uno_Action* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Uno_Action__Clear(List__Uno_Action* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
    __this->_version++;
}

void List__Uno_Action__EnsureCapacity(List__Uno_Action* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Action__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::Action__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::uDelegate*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(i);
        }

        __this->_data = newData;
    }
}

int List__Uno_Action__get_Count(List__Uno_Action* __this)
{
    return __this->_used;
}

::uDelegate* List__Uno_Action__get_Item(List__Uno_Action* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(index);
}

::app::Uno::Collections::List1_Enumerator__Uno_Action List__Uno_Action__GetEnumerator(List__Uno_Action* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Uno_Action__New_1(NULL, __this);
}

List__Uno_Action* List__Uno_Action__New_1(::uStatic* __this)
{
    List__Uno_Action* inst = (List__Uno_Action*)::uAllocObject(sizeof(List__Uno_Action), List__Uno_Action__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Uno_Action__Remove(List__Uno_Action* __this, ::uDelegate* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Uno_Action(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Uno_Action__RemoveAt(List__Uno_Action* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Uno_Action__set_Item(List__Uno_Action* __this, int index, ::uDelegate* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(index) = value;
    __this->_version++;
}

::uArray* List__Uno_Action__ToArray(List__Uno_Action* __this)
{
    ::uArray* t = ::uNewArray(::app::Uno::Action__typeof(), __this->_used);

    for (int i = 0; i < __this->_used; i++)
    {
        t->ItemStrong< ::uDelegate*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(i);
    }

    return t;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Uno_CharPunctuationChecker_PunctuationRange__uType* List__Uno_CharPunctuationChecker_PunctuationRange__typeof()
{
    static ::uStaticStrong<List__Uno_CharPunctuationChecker_PunctuationRange__uType*> type;
    if (type != NULL) return type;

    type = (List__Uno_CharPunctuationChecker_PunctuationRange__uType*)::uAllocClassType(sizeof(List__Uno_CharPunctuationChecker_PunctuationRange__uType), "Uno.Collections.List<Uno.CharPunctuationChecker_PunctuationRange>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Uno_CharPunctuationChecker_PunctuationRange, _data));

    return type;
}

void List__Uno_CharPunctuationChecker_PunctuationRange___ObjInit(List__Uno_CharPunctuationChecker_PunctuationRange* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Uno_CharPunctuationChecker_PunctuationRange__Add(List__Uno_CharPunctuationChecker_PunctuationRange* __this, ::app::Uno::CharPunctuationChecker_PunctuationRange* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::CharPunctuationChecker_PunctuationRange*>(__this->_used++) = item;
    __this->_version++;
}

void List__Uno_CharPunctuationChecker_PunctuationRange__EnsureCapacity(List__Uno_CharPunctuationChecker_PunctuationRange* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::CharPunctuationChecker_PunctuationRange__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::CharPunctuationChecker_PunctuationRange__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Uno::CharPunctuationChecker_PunctuationRange*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::CharPunctuationChecker_PunctuationRange*>(i);
        }

        __this->_data = newData;
    }
}

List__Uno_CharPunctuationChecker_PunctuationRange* List__Uno_CharPunctuationChecker_PunctuationRange__New_1(::uStatic* __this)
{
    List__Uno_CharPunctuationChecker_PunctuationRange* inst = (List__Uno_CharPunctuationChecker_PunctuationRange*)::uAllocObject(sizeof(List__Uno_CharPunctuationChecker_PunctuationRange), List__Uno_CharPunctuationChecker_PunctuationRange__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___uType* List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___typeof()
{
    static ::uStaticStrong<List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___uType*> type;
    if (type != NULL) return type;

    type = (List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___uType*)::uAllocClassType(sizeof(List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___uType), "Uno.Collections.List<Uno.Collections.ConcurrentCollection1_ModItem<Fuse.Animations.IMixerMaster>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_, _data));

    return type;
}

void List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster____ObjInit(List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___Add(List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster>(__this->_used++) = item;
    __this->_version++;
}

void List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___BoundsCheck(List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___Clear(List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
    __this->_version++;
}

void List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___EnsureCapacity(List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->Item< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster>(i);
        }

        __this->_data = newData;
    }
}

int List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___get_Count(List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this)
{
    return __this->_used;
}

::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___get_Item(List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster>(index);
}

List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___New_1(::uStatic* __this)
{
    List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* inst = (List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_*)::uAllocObject(sizeof(List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_), List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___typeof());
    inst->_ObjInit();
    return inst;
}

void List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___RemoveAt(List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster>(__this->_used) = ::uDefault< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster>();
    __this->_version++;
}

void List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster___set_Item(List__Uno_Collections_ConcurrentCollection1_ModItem_Fuse_Animations_IMixerMaster_* __this, int index, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Fuse_Animations_IMixerMaster>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___uType* List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___typeof()
{
    static ::uStaticStrong<List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___uType*> type;
    if (type != NULL) return type;

    type = (List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___uType*)::uAllocClassType(sizeof(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___uType), "Uno.Collections.List<Uno.Collections.ConcurrentCollection1_ModItem<Uno.EventHandler>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_, _data));

    return type;
}

void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler____ObjInit(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___Add(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler>(__this->_used++) = item;
    __this->_version++;
}

void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___BoundsCheck(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___Clear(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
    __this->_version++;
}

void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___EnsureCapacity(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->Item< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler>(i);
        }

        __this->_data = newData;
    }
}

int List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___get_Count(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this)
{
    return __this->_used;
}

::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___get_Item(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler>(index);
}

List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___New_1(::uStatic* __this)
{
    List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* inst = (List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_*)::uAllocObject(sizeof(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_), List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___typeof());
    inst->_ObjInit();
    return inst;
}

void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___RemoveAt(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler>(__this->_used) = ::uDefault< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler>();
    __this->_version++;
}

void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___set_Item(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, int index, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Uno_EventHandler__uType* List__Uno_EventHandler__typeof()
{
    static ::uStaticStrong<List__Uno_EventHandler__uType*> type;
    if (type != NULL) return type;

    type = (List__Uno_EventHandler__uType*)::uAllocClassType(sizeof(List__Uno_EventHandler__uType), "Uno.Collections.List<Uno.EventHandler>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Uno_EventHandler, _data));

    return type;
}

void List__Uno_EventHandler___ObjInit(List__Uno_EventHandler* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Uno_EventHandler__Add(List__Uno_EventHandler* __this, ::uDelegate* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_used++) = item;
    __this->_version++;
}

void List__Uno_EventHandler__BoundsCheck(List__Uno_EventHandler* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

bool List__Uno_EventHandler__Contains(List__Uno_EventHandler* __this, ::uDelegate* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Uno_EventHandler(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(i), item))
        {
            return true;
        }
    }

    return false;
}

void List__Uno_EventHandler__EnsureCapacity(List__Uno_EventHandler* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::EventHandler__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::EventHandler__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::uDelegate*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(i);
        }

        __this->_data = newData;
    }
}

int List__Uno_EventHandler__get_Count(List__Uno_EventHandler* __this)
{
    return __this->_used;
}

::uDelegate* List__Uno_EventHandler__get_Item(List__Uno_EventHandler* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(index);
}

List__Uno_EventHandler* List__Uno_EventHandler__New_1(::uStatic* __this)
{
    List__Uno_EventHandler* inst = (List__Uno_EventHandler*)::uAllocObject(sizeof(List__Uno_EventHandler), List__Uno_EventHandler__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Uno_EventHandler__Remove(List__Uno_EventHandler* __this, ::uDelegate* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Uno_EventHandler(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Uno_EventHandler__RemoveAt(List__Uno_EventHandler* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uDelegate*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Uno_EventHandler__set_Item(List__Uno_EventHandler* __this, int index, ::uDelegate* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uDelegate*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Uno_Graphics_PolygonFace__uType* List__Uno_Graphics_PolygonFace__typeof()
{
    static ::uStaticStrong<List__Uno_Graphics_PolygonFace__uType*> type;
    if (type != NULL) return type;

    type = (List__Uno_Graphics_PolygonFace__uType*)::uAllocClassType(sizeof(List__Uno_Graphics_PolygonFace__uType), "Uno.Collections.List<Uno.Graphics.PolygonFace>", false, 2, 1, 0);

    type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))List__Uno_Graphics_PolygonFace__RemoveAt;
    type->__interface_0.__fp_get_Item = (int(*)(void*, int))List__Uno_Graphics_PolygonFace__get_Item;
    type->__interface_1.__fp_get_Count = (int(*)(void*))List__Uno_Graphics_PolygonFace__get_Count;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Uno_Graphics_PolygonFace__typeof(), offsetof(List__Uno_Graphics_PolygonFace__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Uno_Graphics_PolygonFace__typeof(), offsetof(List__Uno_Graphics_PolygonFace__uType, __interface_1));

    type->SetStrongRefs(
        "_data", offsetof(List__Uno_Graphics_PolygonFace, _data));

    return type;
}

void List__Uno_Graphics_PolygonFace___ObjInit(List__Uno_Graphics_PolygonFace* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Uno_Graphics_PolygonFace__Add(List__Uno_Graphics_PolygonFace* __this, int item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->Item< int>(__this->_used++) = item;
    __this->_version++;
}

void List__Uno_Graphics_PolygonFace__BoundsCheck(List__Uno_Graphics_PolygonFace* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Uno_Graphics_PolygonFace__EnsureCapacity(List__Uno_Graphics_PolygonFace* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Graphics::PolygonFace__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::Graphics::PolygonFace__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->Item< int>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< int>(i);
        }

        __this->_data = newData;
    }
}

int List__Uno_Graphics_PolygonFace__get_Count(List__Uno_Graphics_PolygonFace* __this)
{
    return __this->_used;
}

int List__Uno_Graphics_PolygonFace__get_Item(List__Uno_Graphics_PolygonFace* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< int>(index);
}

List__Uno_Graphics_PolygonFace* List__Uno_Graphics_PolygonFace__New_1(::uStatic* __this)
{
    List__Uno_Graphics_PolygonFace* inst = (List__Uno_Graphics_PolygonFace*)::uAllocObject(sizeof(List__Uno_Graphics_PolygonFace), List__Uno_Graphics_PolygonFace__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Uno_Graphics_PolygonFace__RemoveAt(List__Uno_Graphics_PolygonFace* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->Item< int>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< int>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->Item< int>(__this->_used) = 0;
    __this->_version++;
}

void List__Uno_Graphics_PolygonFace__set_Item(List__Uno_Graphics_PolygonFace* __this, int index, int value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->Item< int>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Uno_Net_Http_HttpMessageHandlerRequest__uType* List__Uno_Net_Http_HttpMessageHandlerRequest__typeof()
{
    static ::uStaticStrong<List__Uno_Net_Http_HttpMessageHandlerRequest__uType*> type;
    if (type != NULL) return type;

    type = (List__Uno_Net_Http_HttpMessageHandlerRequest__uType*)::uAllocClassType(sizeof(List__Uno_Net_Http_HttpMessageHandlerRequest__uType), "Uno.Collections.List<Uno.Net.Http.HttpMessageHandlerRequest>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Uno_Net_Http_HttpMessageHandlerRequest, _data));

    return type;
}

void List__Uno_Net_Http_HttpMessageHandlerRequest___ObjInit(List__Uno_Net_Http_HttpMessageHandlerRequest* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Uno_Net_Http_HttpMessageHandlerRequest__Add(List__Uno_Net_Http_HttpMessageHandlerRequest* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_used++) = item;
    __this->_version++;
}

void List__Uno_Net_Http_HttpMessageHandlerRequest__BoundsCheck(List__Uno_Net_Http_HttpMessageHandlerRequest* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Uno_Net_Http_HttpMessageHandlerRequest__EnsureCapacity(List__Uno_Net_Http_HttpMessageHandlerRequest* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Net::Http::HttpMessageHandlerRequest__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::Net::Http::HttpMessageHandlerRequest__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(i);
        }

        __this->_data = newData;
    }
}

int List__Uno_Net_Http_HttpMessageHandlerRequest__get_Count(List__Uno_Net_Http_HttpMessageHandlerRequest* __this)
{
    return __this->_used;
}

::app::Uno::Net::Http::HttpMessageHandlerRequest* List__Uno_Net_Http_HttpMessageHandlerRequest__get_Item(List__Uno_Net_Http_HttpMessageHandlerRequest* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(index);
}

::app::Uno::Collections::List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest List__Uno_Net_Http_HttpMessageHandlerRequest__GetEnumerator(List__Uno_Net_Http_HttpMessageHandlerRequest* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__New_1(NULL, __this);
}

List__Uno_Net_Http_HttpMessageHandlerRequest* List__Uno_Net_Http_HttpMessageHandlerRequest__New_1(::uStatic* __this)
{
    List__Uno_Net_Http_HttpMessageHandlerRequest* inst = (List__Uno_Net_Http_HttpMessageHandlerRequest*)::uAllocObject(sizeof(List__Uno_Net_Http_HttpMessageHandlerRequest), List__Uno_Net_Http_HttpMessageHandlerRequest__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Uno_Net_Http_HttpMessageHandlerRequest__set_Item(List__Uno_Net_Http_HttpMessageHandlerRequest* __this, int index, ::app::Uno::Net::Http::HttpMessageHandlerRequest* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Uno_Platform_Key__uType* List__Uno_Platform_Key__typeof()
{
    static ::uStaticStrong<List__Uno_Platform_Key__uType*> type;
    if (type != NULL) return type;

    type = (List__Uno_Platform_Key__uType*)::uAllocClassType(sizeof(List__Uno_Platform_Key__uType), "Uno.Collections.List<Uno.Platform.Key>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Uno_Platform_Key, _data));

    return type;
}

void List__Uno_Platform_Key___ObjInit(List__Uno_Platform_Key* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Uno_Platform_Key__Add(List__Uno_Platform_Key* __this, int item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->Item< int>(__this->_used++) = item;
    __this->_version++;
}

void List__Uno_Platform_Key__BoundsCheck(List__Uno_Platform_Key* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Uno_Platform_Key__EnsureCapacity(List__Uno_Platform_Key* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Platform::Key__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::Platform::Key__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->Item< int>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< int>(i);
        }

        __this->_data = newData;
    }
}

int List__Uno_Platform_Key__get_Count(List__Uno_Platform_Key* __this)
{
    return __this->_used;
}

int List__Uno_Platform_Key__get_Item(List__Uno_Platform_Key* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< int>(index);
}

List__Uno_Platform_Key* List__Uno_Platform_Key__New_1(::uStatic* __this)
{
    List__Uno_Platform_Key* inst = (List__Uno_Platform_Key*)::uAllocObject(sizeof(List__Uno_Platform_Key), List__Uno_Platform_Key__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Uno_Platform_Key__RemoveAt(List__Uno_Platform_Key* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->Item< int>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< int>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->Item< int>(__this->_used) = 0;
    __this->_version++;
}

void List__Uno_Platform_Key__set_Item(List__Uno_Platform_Key* __this, int index, int value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->Item< int>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Uno_Recti__uType* List__Uno_Recti__typeof()
{
    static ::uStaticStrong<List__Uno_Recti__uType*> type;
    if (type != NULL) return type;

    type = (List__Uno_Recti__uType*)::uAllocClassType(sizeof(List__Uno_Recti__uType), "Uno.Collections.List<Uno.Recti>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Uno_Recti, _data));

    return type;
}

void List__Uno_Recti___ObjInit(List__Uno_Recti* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

List__Uno_Recti* List__Uno_Recti__New_1(::uStatic* __this)
{
    List__Uno_Recti* inst = (List__Uno_Recti*)::uAllocObject(sizeof(List__Uno_Recti), List__Uno_Recti__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Uno_Runtime_Implementation_Internal_FormatStringToken__uType* List__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof()
{
    static ::uStaticStrong<List__Uno_Runtime_Implementation_Internal_FormatStringToken__uType*> type;
    if (type != NULL) return type;

    type = (List__Uno_Runtime_Implementation_Internal_FormatStringToken__uType*)::uAllocClassType(sizeof(List__Uno_Runtime_Implementation_Internal_FormatStringToken__uType), "Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_data", offsetof(List__Uno_Runtime_Implementation_Internal_FormatStringToken, _data));

    return type;
}

void List__Uno_Runtime_Implementation_Internal_FormatStringToken___ObjInit(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Uno_Runtime_Implementation_Internal_FormatStringToken__Add(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this, ::app::Uno::Runtime::Implementation::Internal::FormatStringToken* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::Runtime::Implementation::Internal::FormatStringToken*>(__this->_used++) = item;
    __this->_version++;
}

void List__Uno_Runtime_Implementation_Internal_FormatStringToken__EnsureCapacity(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::Runtime::Implementation::Internal::FormatStringToken__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::Runtime::Implementation::Internal::FormatStringToken__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Uno::Runtime::Implementation::Internal::FormatStringToken*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::Runtime::Implementation::Internal::FormatStringToken*>(i);
        }

        __this->_data = newData;
    }
}

::app::Uno::Collections::List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken List__Uno_Runtime_Implementation_Internal_FormatStringToken__GetEnumerator(List__Uno_Runtime_Implementation_Internal_FormatStringToken* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__New_1(NULL, __this);
}

List__Uno_Runtime_Implementation_Internal_FormatStringToken* List__Uno_Runtime_Implementation_Internal_FormatStringToken__New_1(::uStatic* __this)
{
    List__Uno_Runtime_Implementation_Internal_FormatStringToken* inst = (List__Uno_Runtime_Implementation_Internal_FormatStringToken*)::uAllocObject(sizeof(List__Uno_Runtime_Implementation_Internal_FormatStringToken), List__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Uno_UX_FileSource__uType* List__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong<List__Uno_UX_FileSource__uType*> type;
    if (type != NULL) return type;

    type = (List__Uno_UX_FileSource__uType*)::uAllocClassType(sizeof(List__Uno_UX_FileSource__uType), "Uno.Collections.List<Uno.UX.FileSource>", false, 2, 1, 0);

    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Uno::UX::FileSource*))List__Uno_UX_FileSource__Add;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Uno_UX_FileSource__typeof(), offsetof(List__Uno_UX_FileSource__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Uno_UX_FileSource__typeof(), offsetof(List__Uno_UX_FileSource__uType, __interface_1));

    type->SetStrongRefs(
        "_data", offsetof(List__Uno_UX_FileSource, _data));

    return type;
}

void List__Uno_UX_FileSource___ObjInit(List__Uno_UX_FileSource* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Uno_UX_FileSource__Add(List__Uno_UX_FileSource* __this, ::app::Uno::UX::FileSource* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::UX::FileSource*>(__this->_used++) = item;
    __this->_version++;
}

void List__Uno_UX_FileSource__BoundsCheck(List__Uno_UX_FileSource* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Uno_UX_FileSource__EnsureCapacity(List__Uno_UX_FileSource* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::UX::FileSource__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::UX::FileSource__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Uno::UX::FileSource*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::UX::FileSource*>(i);
        }

        __this->_data = newData;
    }
}

int List__Uno_UX_FileSource__get_Count(List__Uno_UX_FileSource* __this)
{
    return __this->_used;
}

::app::Uno::UX::FileSource* List__Uno_UX_FileSource__get_Item(List__Uno_UX_FileSource* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::UX::FileSource*>(index);
}

::app::Uno::Collections::List1_Enumerator__Uno_UX_FileSource List__Uno_UX_FileSource__GetEnumerator(List__Uno_UX_FileSource* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Uno_UX_FileSource__New_1(NULL, __this);
}

List__Uno_UX_FileSource* List__Uno_UX_FileSource__New_1(::uStatic* __this)
{
    List__Uno_UX_FileSource* inst = (List__Uno_UX_FileSource*)::uAllocObject(sizeof(List__Uno_UX_FileSource), List__Uno_UX_FileSource__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Uno_UX_FileSource__set_Item(List__Uno_UX_FileSource* __this, int index, ::app::Uno::UX::FileSource* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::UX::FileSource*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Uno_UX_IFactory__uType* List__Uno_UX_IFactory__typeof()
{
    static ::uStaticStrong<List__Uno_UX_IFactory__uType*> type;
    if (type != NULL) return type;

    type = (List__Uno_UX_IFactory__uType*)::uAllocClassType(sizeof(List__Uno_UX_IFactory__uType), "Uno.Collections.List<Uno.UX.IFactory>", false, 2, 1, 0);

    type->__interface_1.__fp_GetEnumerator = (::uObject*(*)(void*))List__Uno_UX_IFactory__GetEnumerator_boxed;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Uno_UX_IFactory__typeof(), offsetof(List__Uno_UX_IFactory__uType, __interface_0),
        ::app::Uno::Collections::IEnumerable__Uno_UX_IFactory__typeof(), offsetof(List__Uno_UX_IFactory__uType, __interface_1));

    type->SetStrongRefs(
        "_data", offsetof(List__Uno_UX_IFactory, _data));

    return type;
}

::uObject* List__Uno_UX_IFactory__GetEnumerator_boxed(List__Uno_UX_IFactory* __this)
{
    return ::uBox(::app::Uno::Collections::List1_Enumerator__Uno_UX_IFactory__typeof(), __this->GetEnumerator());
}

void List__Uno_UX_IFactory___ObjInit(List__Uno_UX_IFactory* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

::app::Uno::Collections::List1_Enumerator__Uno_UX_IFactory List__Uno_UX_IFactory__GetEnumerator(List__Uno_UX_IFactory* __this)
{
    return ::app::Uno::Collections::List1_Enumerator__Uno_UX_IFactory__New_1(NULL, __this);
}

List__Uno_UX_IFactory* List__Uno_UX_IFactory__New_1(::uStatic* __this)
{
    List__Uno_UX_IFactory* inst = (List__Uno_UX_IFactory*)::uAllocObject(sizeof(List__Uno_UX_IFactory), List__Uno_UX_IFactory__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Uno_UX_ITemplate__uType* List__Uno_UX_ITemplate__typeof()
{
    static ::uStaticStrong<List__Uno_UX_ITemplate__uType*> type;
    if (type != NULL) return type;

    type = (List__Uno_UX_ITemplate__uType*)::uAllocClassType(sizeof(List__Uno_UX_ITemplate__uType), "Uno.Collections.List<Uno.UX.ITemplate>", false, 2, 1, 0);

    type->__interface_0.__fp_get_Item = (::uObject*(*)(void*, int))List__Uno_UX_ITemplate__get_Item;
    type->__interface_1.__fp_Add = (void(*)(void*, ::uObject*))List__Uno_UX_ITemplate__Add;
    type->__interface_1.__fp_get_Count = (int(*)(void*))List__Uno_UX_ITemplate__get_Count;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Uno_UX_ITemplate__typeof(), offsetof(List__Uno_UX_ITemplate__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Uno_UX_ITemplate__typeof(), offsetof(List__Uno_UX_ITemplate__uType, __interface_1));

    type->SetStrongRefs(
        "_data", offsetof(List__Uno_UX_ITemplate, _data));

    return type;
}

void List__Uno_UX_ITemplate___ObjInit(List__Uno_UX_ITemplate* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Uno_UX_ITemplate__Add(List__Uno_UX_ITemplate* __this, ::uObject* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(__this->_used++) = item;
    __this->_version++;
}

void List__Uno_UX_ITemplate__BoundsCheck(List__Uno_UX_ITemplate* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Uno_UX_ITemplate__EnsureCapacity(List__Uno_UX_ITemplate* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::UX::ITemplate__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::UX::ITemplate__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::uObject*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(i);
        }

        __this->_data = newData;
    }
}

int List__Uno_UX_ITemplate__get_Count(List__Uno_UX_ITemplate* __this)
{
    return __this->_used;
}

::uObject* List__Uno_UX_ITemplate__get_Item(List__Uno_UX_ITemplate* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::uObject*>(index);
}

List__Uno_UX_ITemplate* List__Uno_UX_ITemplate__New_1(::uStatic* __this)
{
    List__Uno_UX_ITemplate* inst = (List__Uno_UX_ITemplate*)::uAllocObject(sizeof(List__Uno_UX_ITemplate), List__Uno_UX_ITemplate__typeof());
    inst->_ObjInit();
    return inst;
}

void List__Uno_UX_ITemplate__set_Item(List__Uno_UX_ITemplate* __this, int index, ::uObject* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::uObject*>(index) = value;
    __this->_version++;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List__Uno_UX_Resource__uType* List__Uno_UX_Resource__typeof()
{
    static ::uStaticStrong<List__Uno_UX_Resource__uType*> type;
    if (type != NULL) return type;

    type = (List__Uno_UX_Resource__uType*)::uAllocClassType(sizeof(List__Uno_UX_Resource__uType), "Uno.Collections.List<Uno.UX.Resource>", false, 2, 1, 0);

    type->__interface_0.__fp_RemoveAt = (void(*)(void*, int))List__Uno_UX_Resource__RemoveAt;
    type->__interface_0.__fp_get_Item = (::app::Uno::UX::Resource*(*)(void*, int))List__Uno_UX_Resource__get_Item;
    type->__interface_1.__fp_Add = (void(*)(void*, ::app::Uno::UX::Resource*))List__Uno_UX_Resource__Add;
    type->__interface_1.__fp_get_Count = (int(*)(void*))List__Uno_UX_Resource__get_Count;

    type->SetInterfaces(
        ::app::Uno::Collections::IList__Uno_UX_Resource__typeof(), offsetof(List__Uno_UX_Resource__uType, __interface_0),
        ::app::Uno::Collections::ICollection__Uno_UX_Resource__typeof(), offsetof(List__Uno_UX_Resource__uType, __interface_1));

    type->SetStrongRefs(
        "_data", offsetof(List__Uno_UX_Resource, _data));

    return type;
}

void List__Uno_UX_Resource___ObjInit(List__Uno_UX_Resource* __this)
{
    __this->_data = NULL;
    __this->_used = 0;
}

void List__Uno_UX_Resource__Add(List__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item)
{
    __this->EnsureCapacity();
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::UX::Resource*>(__this->_used++) = item;
    __this->_version++;
}

void List__Uno_UX_Resource__BoundsCheck(List__Uno_UX_Resource* __this, int index)
{
    if ((index < 0) || (index >= __this->Count()))
    {
        U_THROW(::app::Uno::IndexOutOfRangeException__New_3(NULL));
    }
}

void List__Uno_UX_Resource__EnsureCapacity(List__Uno_UX_Resource* __this)
{
    if (__this->_data == NULL)
    {
        __this->_data = ::uNewArray(::app::Uno::UX::Resource__typeof(), 2);
    }
    else if ((__this->_used + 1) == ::uPtr< ::uArray*>(__this->_data)->Length())
    {
        ::uArray* newData = ::uNewArray(::app::Uno::UX::Resource__typeof(), ::uPtr< ::uArray*>(__this->_data)->Length() * 2);

        for (int i = 0; i < __this->_used; i++)
        {
            newData->ItemStrong< ::app::Uno::UX::Resource*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::UX::Resource*>(i);
        }

        __this->_data = newData;
    }
}

int List__Uno_UX_Resource__get_Count(List__Uno_UX_Resource* __this)
{
    return __this->_used;
}

::app::Uno::UX::Resource* List__Uno_UX_Resource__get_Item(List__Uno_UX_Resource* __this, int index)
{
    __this->BoundsCheck(index);
    return ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::UX::Resource*>(index);
}

List__Uno_UX_Resource* List__Uno_UX_Resource__New_1(::uStatic* __this)
{
    List__Uno_UX_Resource* inst = (List__Uno_UX_Resource*)::uAllocObject(sizeof(List__Uno_UX_Resource), List__Uno_UX_Resource__typeof());
    inst->_ObjInit();
    return inst;
}

bool List__Uno_UX_Resource__Remove(List__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item)
{
    for (int i = 0; i < __this->_used; i++)
    {
        if (::app::Uno::Generic__Equals__Uno_UX_Resource(NULL, ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::UX::Resource*>(i), item))
        {
            __this->RemoveAt(i);
            return true;
        }
    }

    return false;
}

void List__Uno_UX_Resource__RemoveAt(List__Uno_UX_Resource* __this, int index)
{
    __this->BoundsCheck(index);

    for (int i = index; i < (__this->_used - 1); i++)
    {
        ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::UX::Resource*>(i) = ::uPtr< ::uArray*>(__this->_data)->Item< ::app::Uno::UX::Resource*>(i + 1);
    }

    __this->_used = __this->_used - 1;
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::UX::Resource*>(__this->_used) = NULL;
    __this->_version++;
}

void List__Uno_UX_Resource__set_Item(List__Uno_UX_Resource* __this, int index, ::app::Uno::UX::Resource* value)
{
    __this->BoundsCheck(index);
    ::uPtr< ::uArray*>(__this->_data)->ItemStrong< ::app::Uno::UX::Resource*>(index) = value;
    __this->_version++;
}

}}}
