#include <app/Experimental.Audio.Channel.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Transform.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.CacheFramebuffer.h>
#include <app/Fuse.Controls.Internal.WrappedLine.h>
#include <app/Fuse.Controls.TextEdit.LineCacheLine.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.ElementAtlas.h>
#include <app/Fuse.Elements.ElementBatch.h>
#include <app/Fuse.Elements.ElementBatchEntry.h>
#include <app/Fuse.Elements.IElementBatchDrawable.h>
#include <app/Fuse.Input.Capturer.h>
#include <app/Fuse.Layouts.Column.h>
#include <app/Fuse.Layouts.Row.h>
#include <app/Fuse.Navigation.IPageResourceBinding.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Physics.Body.h>
#include <app/Fuse.Physics.IRule.h>
#include <app/Fuse.Reactive.JavaScript.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Scripting.NativeMember.h>
#include <app/Fuse.Style.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Collections.List__byte__.h>
#include <app/Uno.Collections.List__Experimental_Audio_Channel.h>
#include <app/Uno.Collections.List__float2.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Transform_.h>
#include <app/Uno.Collections.List__Fuse_Behavior.h>
#include <app/Uno.Collections.List__Fuse_CacheFramebuffer.h>
#include <app/Uno.Collections.List__Fuse_Controls_Internal_WrappedLine.h>
#include <app/Uno.Collections.List__Fuse_Controls_TextEdit_LineCacheLine.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.List__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.List__Fuse_Elements_Element.h>
#include <app/Uno.Collections.List__Fuse_Elements_ElementAtlas.h>
#include <app/Uno.Collections.List__Fuse_Elements_ElementBatch.h>
#include <app/Uno.Collections.List__Fuse_Elements_ElementBatchEntry.h>
#include <app/Uno.Collections.List__Fuse_Elements_IElementBatchDrawable.h>
#include <app/Uno.Collections.List__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.List__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.List__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.List__Fuse_Navigation_IPageResourceBinding.h>
#include <app/Uno.Collections.List__Fuse_Node.h>
#include <app/Uno.Collections.List__Fuse_Physics_Body.h>
#include <app/Uno.Collections.List__Fuse_Physics_IRule.h>
#include <app/Uno.Collections.List__Fuse_Reactive_JavaScript.h>
#include <app/Uno.Collections.List__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.List__Fuse_Scripting_NativeMember.h>
#include <app/Uno.Collections.List__Fuse_Style.h>
#include <app/Uno.Collections.List__Fuse_Transform.h>
#include <app/Uno.Collections.List__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.List__int.h>
#include <app/Uno.Collections.List__string.h>
#include <app/Uno.Collections.List__Uno_Action.h>
#include <app/Uno.Collections.List__Uno_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Collections.List__Uno_Runtime_Implementation_Internal_Forma-238cb01d.h>
#include <app/Uno.Collections.List__Uno_UX_FileSource.h>
#include <app/Uno.Collections.List__Uno_UX_IFactory.h>
#include <app/Uno.Collections.List1_Enumerator__byte__.h>
#include <app/Uno.Collections.List1_Enumerator__Experimental_Audio_Channel.h>
#include <app/Uno.Collections.List1_Enumerator__float2.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-b6df34f0.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Behavior.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_CacheFramebuffer.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Controls_Internal_WrappedLine.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_Element.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_ElementAtlas.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_ElementBatch.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_ElementBatchEntry.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_IElementBatchDrawable.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Navigation_IPageResourceBinding.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Node.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Physics_Body.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Physics_IRule.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Reactive_JavaScript.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Scripting_NativeMember.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Style.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Transform.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.List1_Enumerator__int.h>
#include <app/Uno.Collections.List1_Enumerator__string.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Action.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Runtime_Implementation_In-9496fdab.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_UX_FileSource.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_UX_IFactory.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <app/Uno.Runtime.Implementation.Internal.FormatStringToken.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.IFactory.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__byte____uType* List1_Enumerator__byte____typeof()
{
    static ::uStaticStrong<List1_Enumerator__byte____uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__byte____uType*)::uAllocStructType(sizeof(List1_Enumerator__byte____uType), "Uno.Collections.List<byte[]>.Enumerator", sizeof(List1_Enumerator__byte__), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__byte____Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__byte____MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__byte____uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__byte____uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__byte__, _current),
        "_source", offsetof(List1_Enumerator__byte__, _source));

    return type;
}

void List1_Enumerator__byte_____ObjInit(List1_Enumerator__byte__* __this, ::app::Uno::Collections::List__byte__* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__byte__*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__byte____Dispose(List1_Enumerator__byte__* __this)
{
}

::uArray* List1_Enumerator__byte____get_Current(List1_Enumerator__byte__* __this)
{
    return __this->_current;
}

bool List1_Enumerator__byte____MoveNext(List1_Enumerator__byte__* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__byte__*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__byte__*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__byte__*>(__this->_source)->_data)->Item< ::uArray*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__byte__ List1_Enumerator__byte____New_1(::uStatic* __this, ::app::Uno::Collections::List__byte__* source)
{
    List1_Enumerator__byte__ inst = ::uDefault< List1_Enumerator__byte__>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Experimental_Audio_Channel__uType* List1_Enumerator__Experimental_Audio_Channel__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Experimental_Audio_Channel__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Experimental_Audio_Channel__uType*)::uAllocStructType(sizeof(List1_Enumerator__Experimental_Audio_Channel__uType), "Uno.Collections.List<Experimental.Audio.Channel>.Enumerator", sizeof(List1_Enumerator__Experimental_Audio_Channel), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Experimental_Audio_Channel__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Experimental_Audio_Channel__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Experimental_Audio_Channel__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Experimental_Audio_Channel__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Experimental_Audio_Channel, _current),
        "_source", offsetof(List1_Enumerator__Experimental_Audio_Channel, _source));

    return type;
}

void List1_Enumerator__Experimental_Audio_Channel___ObjInit(List1_Enumerator__Experimental_Audio_Channel* __this, ::app::Uno::Collections::List__Experimental_Audio_Channel* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Experimental_Audio_Channel*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Experimental_Audio_Channel__Dispose(List1_Enumerator__Experimental_Audio_Channel* __this)
{
}

::app::Experimental::Audio::Channel* List1_Enumerator__Experimental_Audio_Channel__get_Current(List1_Enumerator__Experimental_Audio_Channel* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Experimental_Audio_Channel__MoveNext(List1_Enumerator__Experimental_Audio_Channel* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Experimental_Audio_Channel*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Experimental_Audio_Channel*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Experimental_Audio_Channel*>(__this->_source)->_data)->Item< ::app::Experimental::Audio::Channel*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Experimental_Audio_Channel List1_Enumerator__Experimental_Audio_Channel__New_1(::uStatic* __this, ::app::Uno::Collections::List__Experimental_Audio_Channel* source)
{
    List1_Enumerator__Experimental_Audio_Channel inst = ::uDefault< List1_Enumerator__Experimental_Audio_Channel>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__float2__uType* List1_Enumerator__float2__typeof()
{
    static ::uStaticStrong<List1_Enumerator__float2__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__float2__uType*)::uAllocStructType(sizeof(List1_Enumerator__float2__uType), "Uno.Collections.List<float2>.Enumerator", sizeof(List1_Enumerator__float2), 3, 1, 0);

    type->__interface_0.__fp_get_Current = (::app::Uno::Float2(*)(void*))List1_Enumerator__float2__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__float2__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__float2__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__float2__typeof(), offsetof(List1_Enumerator__float2__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__float2__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__float2__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(List1_Enumerator__float2, _source));

    return type;
}

void List1_Enumerator__float2___ObjInit(List1_Enumerator__float2* __this, ::app::Uno::Collections::List__float2* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__float2*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__float2__Dispose(List1_Enumerator__float2* __this)
{
}

::app::Uno::Float2 List1_Enumerator__float2__get_Current(List1_Enumerator__float2* __this)
{
    return __this->_current;
}

bool List1_Enumerator__float2__MoveNext(List1_Enumerator__float2* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__float2*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__float2*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__float2*>(__this->_source)->_data)->Item< ::app::Uno::Float2>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__float2 List1_Enumerator__float2__New_1(::uStatic* __this, ::app::Uno::Collections::List__float2* source)
{
    List1_Enumerator__float2 inst = ::uDefault< List1_Enumerator__float2>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___uType* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___uType), "Uno.Collections.List<Fuse.Animations.MixerHandle<Fuse.Transform>>.Enumerator", sizeof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_, _source));

    return type;
}

void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform____ObjInit(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___Dispose(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_* __this)
{
}

::app::Fuse::Animations::MixerHandle__Fuse_Transform* List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___get_Current(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___MoveNext(List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->_source)->_data)->Item< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_ List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform___New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_* source)
{
    List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_ inst = ::uDefault< List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Behavior__uType* List1_Enumerator__Fuse_Behavior__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Behavior__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Behavior__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Behavior__uType), "Uno.Collections.List<Fuse.Behavior>.Enumerator", sizeof(List1_Enumerator__Fuse_Behavior), 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Behavior*(*)(void*))List1_Enumerator__Fuse_Behavior__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Behavior__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Behavior__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Behavior__typeof(), offsetof(List1_Enumerator__Fuse_Behavior__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Behavior__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Behavior__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Behavior, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Behavior, _source));

    return type;
}

void List1_Enumerator__Fuse_Behavior___ObjInit(List1_Enumerator__Fuse_Behavior* __this, ::app::Uno::Collections::List__Fuse_Behavior* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Behavior__Dispose(List1_Enumerator__Fuse_Behavior* __this)
{
}

::app::Fuse::Behavior* List1_Enumerator__Fuse_Behavior__get_Current(List1_Enumerator__Fuse_Behavior* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Behavior__MoveNext(List1_Enumerator__Fuse_Behavior* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Behavior*>(__this->_source)->_data)->Item< ::app::Fuse::Behavior*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Behavior List1_Enumerator__Fuse_Behavior__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Behavior* source)
{
    List1_Enumerator__Fuse_Behavior inst = ::uDefault< List1_Enumerator__Fuse_Behavior>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_CacheFramebuffer__uType* List1_Enumerator__Fuse_CacheFramebuffer__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_CacheFramebuffer__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_CacheFramebuffer__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_CacheFramebuffer__uType), "Uno.Collections.List<Fuse.CacheFramebuffer>.Enumerator", sizeof(List1_Enumerator__Fuse_CacheFramebuffer), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_CacheFramebuffer__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_CacheFramebuffer__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_CacheFramebuffer__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_CacheFramebuffer__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_CacheFramebuffer, _current),
        "_source", offsetof(List1_Enumerator__Fuse_CacheFramebuffer, _source));

    return type;
}

void List1_Enumerator__Fuse_CacheFramebuffer___ObjInit(List1_Enumerator__Fuse_CacheFramebuffer* __this, ::app::Uno::Collections::List__Fuse_CacheFramebuffer* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_CacheFramebuffer__Dispose(List1_Enumerator__Fuse_CacheFramebuffer* __this)
{
}

::app::Fuse::CacheFramebuffer* List1_Enumerator__Fuse_CacheFramebuffer__get_Current(List1_Enumerator__Fuse_CacheFramebuffer* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_CacheFramebuffer__MoveNext(List1_Enumerator__Fuse_CacheFramebuffer* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_CacheFramebuffer*>(__this->_source)->_data)->Item< ::app::Fuse::CacheFramebuffer*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_CacheFramebuffer List1_Enumerator__Fuse_CacheFramebuffer__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_CacheFramebuffer* source)
{
    List1_Enumerator__Fuse_CacheFramebuffer inst = ::uDefault< List1_Enumerator__Fuse_CacheFramebuffer>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Controls_Internal_WrappedLine__uType* List1_Enumerator__Fuse_Controls_Internal_WrappedLine__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Controls_Internal_WrappedLine__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Controls_Internal_WrappedLine__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Controls_Internal_WrappedLine__uType), "Uno.Collections.List<Fuse.Controls.Internal.WrappedLine>.Enumerator", sizeof(List1_Enumerator__Fuse_Controls_Internal_WrappedLine), 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Controls::Internal::WrappedLine*(*)(void*))List1_Enumerator__Fuse_Controls_Internal_WrappedLine__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Controls_Internal_WrappedLine__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Controls_Internal_WrappedLine__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Controls_Internal_WrappedLine__typeof(), offsetof(List1_Enumerator__Fuse_Controls_Internal_WrappedLine__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Controls_Internal_WrappedLine__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Controls_Internal_WrappedLine__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Controls_Internal_WrappedLine, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Controls_Internal_WrappedLine, _source));

    return type;
}

void List1_Enumerator__Fuse_Controls_Internal_WrappedLine___ObjInit(List1_Enumerator__Fuse_Controls_Internal_WrappedLine* __this, ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Controls_Internal_WrappedLine__Dispose(List1_Enumerator__Fuse_Controls_Internal_WrappedLine* __this)
{
}

::app::Fuse::Controls::Internal::WrappedLine* List1_Enumerator__Fuse_Controls_Internal_WrappedLine__get_Current(List1_Enumerator__Fuse_Controls_Internal_WrappedLine* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Controls_Internal_WrappedLine__MoveNext(List1_Enumerator__Fuse_Controls_Internal_WrappedLine* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine*>(__this->_source)->_data)->Item< ::app::Fuse::Controls::Internal::WrappedLine*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Controls_Internal_WrappedLine List1_Enumerator__Fuse_Controls_Internal_WrappedLine__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Controls_Internal_WrappedLine* source)
{
    List1_Enumerator__Fuse_Controls_Internal_WrappedLine inst = ::uDefault< List1_Enumerator__Fuse_Controls_Internal_WrappedLine>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__uType* List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__uType), "Uno.Collections.List<Fuse.Controls.TextEdit.LineCacheLine>.Enumerator", sizeof(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine), 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Controls::TextEdit::LineCacheLine*(*)(void*))List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Controls_TextEdit_LineCacheLine__typeof(), offsetof(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine, _source));

    return type;
}

void List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine___ObjInit(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine* __this, ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__Dispose(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine* __this)
{
}

::app::Fuse::Controls::TextEdit::LineCacheLine* List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__get_Current(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__MoveNext(List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine*>(__this->_source)->_data)->Item< ::app::Fuse::Controls::TextEdit::LineCacheLine*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Controls_TextEdit_LineCacheLine* source)
{
    List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine inst = ::uDefault< List1_Enumerator__Fuse_Controls_TextEdit_LineCacheLine>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Drawing_Brush__uType* List1_Enumerator__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Drawing_Brush__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Drawing_Brush__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Drawing_Brush__uType), "Uno.Collections.List<Fuse.Drawing.Brush>.Enumerator", sizeof(List1_Enumerator__Fuse_Drawing_Brush), 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Brush*(*)(void*))List1_Enumerator__Fuse_Drawing_Brush__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Drawing_Brush__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Drawing_Brush__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Brush__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Brush__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Brush__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Brush__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Drawing_Brush, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Drawing_Brush, _source));

    return type;
}

void List1_Enumerator__Fuse_Drawing_Brush___ObjInit(List1_Enumerator__Fuse_Drawing_Brush* __this, ::app::Uno::Collections::List__Fuse_Drawing_Brush* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Drawing_Brush__Dispose(List1_Enumerator__Fuse_Drawing_Brush* __this)
{
}

::app::Fuse::Drawing::Brush* List1_Enumerator__Fuse_Drawing_Brush__get_Current(List1_Enumerator__Fuse_Drawing_Brush* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Drawing_Brush__MoveNext(List1_Enumerator__Fuse_Drawing_Brush* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->_source)->_data)->Item< ::app::Fuse::Drawing::Brush*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Drawing_Brush List1_Enumerator__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Drawing_Brush* source)
{
    List1_Enumerator__Fuse_Drawing_Brush inst = ::uDefault< List1_Enumerator__Fuse_Drawing_Brush>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Drawing_Contour__uType* List1_Enumerator__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Drawing_Contour__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Drawing_Contour__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Drawing_Contour__uType), "Uno.Collections.List<Fuse.Drawing.Contour>.Enumerator", sizeof(List1_Enumerator__Fuse_Drawing_Contour), 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Contour*(*)(void*))List1_Enumerator__Fuse_Drawing_Contour__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Drawing_Contour__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Drawing_Contour__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Contour__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Contour__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Contour__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Drawing_Contour, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Drawing_Contour, _source));

    return type;
}

void List1_Enumerator__Fuse_Drawing_Contour___ObjInit(List1_Enumerator__Fuse_Drawing_Contour* __this, ::app::Uno::Collections::List__Fuse_Drawing_Contour* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Contour*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Drawing_Contour__Dispose(List1_Enumerator__Fuse_Drawing_Contour* __this)
{
}

::app::Fuse::Drawing::Contour* List1_Enumerator__Fuse_Drawing_Contour__get_Current(List1_Enumerator__Fuse_Drawing_Contour* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Drawing_Contour__MoveNext(List1_Enumerator__Fuse_Drawing_Contour* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Contour*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Contour*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Contour*>(__this->_source)->_data)->Item< ::app::Fuse::Drawing::Contour*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Drawing_Contour List1_Enumerator__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Drawing_Contour* source)
{
    List1_Enumerator__Fuse_Drawing_Contour inst = ::uDefault< List1_Enumerator__Fuse_Drawing_Contour>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Drawing_Stroke__uType* List1_Enumerator__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Drawing_Stroke__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Drawing_Stroke__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Drawing_Stroke__uType), "Uno.Collections.List<Fuse.Drawing.Stroke>.Enumerator", sizeof(List1_Enumerator__Fuse_Drawing_Stroke), 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Stroke*(*)(void*))List1_Enumerator__Fuse_Drawing_Stroke__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Drawing_Stroke__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Drawing_Stroke__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Stroke__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Stroke__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Drawing_Stroke__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Drawing_Stroke, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Drawing_Stroke, _source));

    return type;
}

void List1_Enumerator__Fuse_Drawing_Stroke___ObjInit(List1_Enumerator__Fuse_Drawing_Stroke* __this, ::app::Uno::Collections::List__Fuse_Drawing_Stroke* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Drawing_Stroke__Dispose(List1_Enumerator__Fuse_Drawing_Stroke* __this)
{
}

::app::Fuse::Drawing::Stroke* List1_Enumerator__Fuse_Drawing_Stroke__get_Current(List1_Enumerator__Fuse_Drawing_Stroke* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Drawing_Stroke__MoveNext(List1_Enumerator__Fuse_Drawing_Stroke* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->_source)->_data)->Item< ::app::Fuse::Drawing::Stroke*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Drawing_Stroke List1_Enumerator__Fuse_Drawing_Stroke__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Drawing_Stroke* source)
{
    List1_Enumerator__Fuse_Drawing_Stroke inst = ::uDefault< List1_Enumerator__Fuse_Drawing_Stroke>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Effects_Effect__uType* List1_Enumerator__Fuse_Effects_Effect__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Effects_Effect__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Effects_Effect__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Effects_Effect__uType), "Uno.Collections.List<Fuse.Effects.Effect>.Enumerator", sizeof(List1_Enumerator__Fuse_Effects_Effect), 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Effects::Effect*(*)(void*))List1_Enumerator__Fuse_Effects_Effect__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Effects_Effect__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Effects_Effect__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Effects_Effect__typeof(), offsetof(List1_Enumerator__Fuse_Effects_Effect__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Effects_Effect__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Effects_Effect__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Effects_Effect, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Effects_Effect, _source));

    return type;
}

void List1_Enumerator__Fuse_Effects_Effect___ObjInit(List1_Enumerator__Fuse_Effects_Effect* __this, ::app::Uno::Collections::List__Fuse_Effects_Effect* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Effects_Effect__Dispose(List1_Enumerator__Fuse_Effects_Effect* __this)
{
}

::app::Fuse::Effects::Effect* List1_Enumerator__Fuse_Effects_Effect__get_Current(List1_Enumerator__Fuse_Effects_Effect* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Effects_Effect__MoveNext(List1_Enumerator__Fuse_Effects_Effect* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Effects_Effect*>(__this->_source)->_data)->Item< ::app::Fuse::Effects::Effect*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Effects_Effect List1_Enumerator__Fuse_Effects_Effect__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Effects_Effect* source)
{
    List1_Enumerator__Fuse_Effects_Effect inst = ::uDefault< List1_Enumerator__Fuse_Effects_Effect>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Elements_Element__uType* List1_Enumerator__Fuse_Elements_Element__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Elements_Element__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Elements_Element__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Elements_Element__uType), "Uno.Collections.List<Fuse.Elements.Element>.Enumerator", sizeof(List1_Enumerator__Fuse_Elements_Element), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Elements_Element__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Elements_Element__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Elements_Element__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Elements_Element__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Elements_Element, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Elements_Element, _source));

    return type;
}

void List1_Enumerator__Fuse_Elements_Element___ObjInit(List1_Enumerator__Fuse_Elements_Element* __this, ::app::Uno::Collections::List__Fuse_Elements_Element* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Elements_Element__Dispose(List1_Enumerator__Fuse_Elements_Element* __this)
{
}

::app::Fuse::Elements::Element* List1_Enumerator__Fuse_Elements_Element__get_Current(List1_Enumerator__Fuse_Elements_Element* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Elements_Element__MoveNext(List1_Enumerator__Fuse_Elements_Element* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_source)->_data)->Item< ::app::Fuse::Elements::Element*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Elements_Element List1_Enumerator__Fuse_Elements_Element__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Elements_Element* source)
{
    List1_Enumerator__Fuse_Elements_Element inst = ::uDefault< List1_Enumerator__Fuse_Elements_Element>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Elements_ElementAtlas__uType* List1_Enumerator__Fuse_Elements_ElementAtlas__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Elements_ElementAtlas__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Elements_ElementAtlas__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Elements_ElementAtlas__uType), "Uno.Collections.List<Fuse.Elements.ElementAtlas>.Enumerator", sizeof(List1_Enumerator__Fuse_Elements_ElementAtlas), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Elements_ElementAtlas__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Elements_ElementAtlas__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Elements_ElementAtlas__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Elements_ElementAtlas__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Elements_ElementAtlas, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Elements_ElementAtlas, _source));

    return type;
}

void List1_Enumerator__Fuse_Elements_ElementAtlas___ObjInit(List1_Enumerator__Fuse_Elements_ElementAtlas* __this, ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Elements_ElementAtlas__Dispose(List1_Enumerator__Fuse_Elements_ElementAtlas* __this)
{
}

::app::Fuse::Elements::ElementAtlas* List1_Enumerator__Fuse_Elements_ElementAtlas__get_Current(List1_Enumerator__Fuse_Elements_ElementAtlas* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Elements_ElementAtlas__MoveNext(List1_Enumerator__Fuse_Elements_ElementAtlas* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas*>(__this->_source)->_data)->Item< ::app::Fuse::Elements::ElementAtlas*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Elements_ElementAtlas List1_Enumerator__Fuse_Elements_ElementAtlas__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas* source)
{
    List1_Enumerator__Fuse_Elements_ElementAtlas inst = ::uDefault< List1_Enumerator__Fuse_Elements_ElementAtlas>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Elements_ElementBatch__uType* List1_Enumerator__Fuse_Elements_ElementBatch__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Elements_ElementBatch__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Elements_ElementBatch__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Elements_ElementBatch__uType), "Uno.Collections.List<Fuse.Elements.ElementBatch>.Enumerator", sizeof(List1_Enumerator__Fuse_Elements_ElementBatch), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Elements_ElementBatch__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Elements_ElementBatch__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Elements_ElementBatch__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Elements_ElementBatch__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Elements_ElementBatch, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Elements_ElementBatch, _source));

    return type;
}

void List1_Enumerator__Fuse_Elements_ElementBatch___ObjInit(List1_Enumerator__Fuse_Elements_ElementBatch* __this, ::app::Uno::Collections::List__Fuse_Elements_ElementBatch* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatch*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Elements_ElementBatch__Dispose(List1_Enumerator__Fuse_Elements_ElementBatch* __this)
{
}

::app::Fuse::Elements::ElementBatch* List1_Enumerator__Fuse_Elements_ElementBatch__get_Current(List1_Enumerator__Fuse_Elements_ElementBatch* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Elements_ElementBatch__MoveNext(List1_Enumerator__Fuse_Elements_ElementBatch* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatch*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatch*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatch*>(__this->_source)->_data)->Item< ::app::Fuse::Elements::ElementBatch*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Elements_ElementBatch List1_Enumerator__Fuse_Elements_ElementBatch__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Elements_ElementBatch* source)
{
    List1_Enumerator__Fuse_Elements_ElementBatch inst = ::uDefault< List1_Enumerator__Fuse_Elements_ElementBatch>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Elements_ElementBatchEntry__uType* List1_Enumerator__Fuse_Elements_ElementBatchEntry__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Elements_ElementBatchEntry__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Elements_ElementBatchEntry__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Elements_ElementBatchEntry__uType), "Uno.Collections.List<Fuse.Elements.ElementBatchEntry>.Enumerator", sizeof(List1_Enumerator__Fuse_Elements_ElementBatchEntry), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Elements_ElementBatchEntry__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Elements_ElementBatchEntry__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Elements_ElementBatchEntry__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Elements_ElementBatchEntry__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Elements_ElementBatchEntry, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Elements_ElementBatchEntry, _source));

    return type;
}

void List1_Enumerator__Fuse_Elements_ElementBatchEntry___ObjInit(List1_Enumerator__Fuse_Elements_ElementBatchEntry* __this, ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Elements_ElementBatchEntry__Dispose(List1_Enumerator__Fuse_Elements_ElementBatchEntry* __this)
{
}

::app::Fuse::Elements::ElementBatchEntry* List1_Enumerator__Fuse_Elements_ElementBatchEntry__get_Current(List1_Enumerator__Fuse_Elements_ElementBatchEntry* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Elements_ElementBatchEntry__MoveNext(List1_Enumerator__Fuse_Elements_ElementBatchEntry* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_source)->_data)->Item< ::app::Fuse::Elements::ElementBatchEntry*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Elements_ElementBatchEntry List1_Enumerator__Fuse_Elements_ElementBatchEntry__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry* source)
{
    List1_Enumerator__Fuse_Elements_ElementBatchEntry inst = ::uDefault< List1_Enumerator__Fuse_Elements_ElementBatchEntry>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Elements_IElementBatchDrawable__uType* List1_Enumerator__Fuse_Elements_IElementBatchDrawable__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Elements_IElementBatchDrawable__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Elements_IElementBatchDrawable__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Elements_IElementBatchDrawable__uType), "Uno.Collections.List<Fuse.Elements.IElementBatchDrawable>.Enumerator", sizeof(List1_Enumerator__Fuse_Elements_IElementBatchDrawable), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Elements_IElementBatchDrawable__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Elements_IElementBatchDrawable__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Elements_IElementBatchDrawable__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Elements_IElementBatchDrawable__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Elements_IElementBatchDrawable, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Elements_IElementBatchDrawable, _source));

    return type;
}

void List1_Enumerator__Fuse_Elements_IElementBatchDrawable___ObjInit(List1_Enumerator__Fuse_Elements_IElementBatchDrawable* __this, ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Elements_IElementBatchDrawable__Dispose(List1_Enumerator__Fuse_Elements_IElementBatchDrawable* __this)
{
}

::uObject* List1_Enumerator__Fuse_Elements_IElementBatchDrawable__get_Current(List1_Enumerator__Fuse_Elements_IElementBatchDrawable* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Elements_IElementBatchDrawable__MoveNext(List1_Enumerator__Fuse_Elements_IElementBatchDrawable* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable*>(__this->_source)->_data)->Item< ::uObject*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Elements_IElementBatchDrawable List1_Enumerator__Fuse_Elements_IElementBatchDrawable__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable* source)
{
    List1_Enumerator__Fuse_Elements_IElementBatchDrawable inst = ::uDefault< List1_Enumerator__Fuse_Elements_IElementBatchDrawable>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Input_Capturer__uType* List1_Enumerator__Fuse_Input_Capturer__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Input_Capturer__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Input_Capturer__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Input_Capturer__uType), "Uno.Collections.List<Fuse.Input.Capturer>.Enumerator", sizeof(List1_Enumerator__Fuse_Input_Capturer), 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Input::Capturer*(*)(void*))List1_Enumerator__Fuse_Input_Capturer__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Input_Capturer__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Input_Capturer__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Input_Capturer__typeof(), offsetof(List1_Enumerator__Fuse_Input_Capturer__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Input_Capturer__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Input_Capturer__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Input_Capturer, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Input_Capturer, _source));

    return type;
}

void List1_Enumerator__Fuse_Input_Capturer___ObjInit(List1_Enumerator__Fuse_Input_Capturer* __this, ::app::Uno::Collections::List__Fuse_Input_Capturer* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_Capturer*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Input_Capturer__Dispose(List1_Enumerator__Fuse_Input_Capturer* __this)
{
}

::app::Fuse::Input::Capturer* List1_Enumerator__Fuse_Input_Capturer__get_Current(List1_Enumerator__Fuse_Input_Capturer* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Input_Capturer__MoveNext(List1_Enumerator__Fuse_Input_Capturer* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_Capturer*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_Capturer*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Capturer*>(__this->_source)->_data)->Item< ::app::Fuse::Input::Capturer*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Input_Capturer List1_Enumerator__Fuse_Input_Capturer__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Input_Capturer* source)
{
    List1_Enumerator__Fuse_Input_Capturer inst = ::uDefault< List1_Enumerator__Fuse_Input_Capturer>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Layouts_Column__uType* List1_Enumerator__Fuse_Layouts_Column__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Layouts_Column__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Layouts_Column__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Layouts_Column__uType), "Uno.Collections.List<Fuse.Layouts.Column>.Enumerator", sizeof(List1_Enumerator__Fuse_Layouts_Column), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Layouts_Column__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Layouts_Column__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Layouts_Column__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Layouts_Column__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Layouts_Column, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Layouts_Column, _source));

    return type;
}

void List1_Enumerator__Fuse_Layouts_Column___ObjInit(List1_Enumerator__Fuse_Layouts_Column* __this, ::app::Uno::Collections::List__Fuse_Layouts_Column* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Layouts_Column__Dispose(List1_Enumerator__Fuse_Layouts_Column* __this)
{
}

::app::Fuse::Layouts::Column* List1_Enumerator__Fuse_Layouts_Column__get_Current(List1_Enumerator__Fuse_Layouts_Column* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Layouts_Column__MoveNext(List1_Enumerator__Fuse_Layouts_Column* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Column*>(__this->_source)->_data)->Item< ::app::Fuse::Layouts::Column*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Layouts_Column List1_Enumerator__Fuse_Layouts_Column__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Layouts_Column* source)
{
    List1_Enumerator__Fuse_Layouts_Column inst = ::uDefault< List1_Enumerator__Fuse_Layouts_Column>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Layouts_Row__uType* List1_Enumerator__Fuse_Layouts_Row__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Layouts_Row__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Layouts_Row__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Layouts_Row__uType), "Uno.Collections.List<Fuse.Layouts.Row>.Enumerator", sizeof(List1_Enumerator__Fuse_Layouts_Row), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Layouts_Row__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Layouts_Row__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Layouts_Row__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Layouts_Row__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Layouts_Row, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Layouts_Row, _source));

    return type;
}

void List1_Enumerator__Fuse_Layouts_Row___ObjInit(List1_Enumerator__Fuse_Layouts_Row* __this, ::app::Uno::Collections::List__Fuse_Layouts_Row* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Layouts_Row__Dispose(List1_Enumerator__Fuse_Layouts_Row* __this)
{
}

::app::Fuse::Layouts::Row* List1_Enumerator__Fuse_Layouts_Row__get_Current(List1_Enumerator__Fuse_Layouts_Row* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Layouts_Row__MoveNext(List1_Enumerator__Fuse_Layouts_Row* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Layouts_Row*>(__this->_source)->_data)->Item< ::app::Fuse::Layouts::Row*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Layouts_Row List1_Enumerator__Fuse_Layouts_Row__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Layouts_Row* source)
{
    List1_Enumerator__Fuse_Layouts_Row inst = ::uDefault< List1_Enumerator__Fuse_Layouts_Row>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Navigation_IPageResourceBinding__uType* List1_Enumerator__Fuse_Navigation_IPageResourceBinding__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Navigation_IPageResourceBinding__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Navigation_IPageResourceBinding__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Navigation_IPageResourceBinding__uType), "Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>.Enumerator", sizeof(List1_Enumerator__Fuse_Navigation_IPageResourceBinding), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Navigation_IPageResourceBinding__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Navigation_IPageResourceBinding__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Navigation_IPageResourceBinding__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Navigation_IPageResourceBinding__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Navigation_IPageResourceBinding, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Navigation_IPageResourceBinding, _source));

    return type;
}

void List1_Enumerator__Fuse_Navigation_IPageResourceBinding___ObjInit(List1_Enumerator__Fuse_Navigation_IPageResourceBinding* __this, ::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Navigation_IPageResourceBinding__Dispose(List1_Enumerator__Fuse_Navigation_IPageResourceBinding* __this)
{
}

::uObject* List1_Enumerator__Fuse_Navigation_IPageResourceBinding__get_Current(List1_Enumerator__Fuse_Navigation_IPageResourceBinding* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Navigation_IPageResourceBinding__MoveNext(List1_Enumerator__Fuse_Navigation_IPageResourceBinding* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding*>(__this->_source)->_data)->Item< ::uObject*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Navigation_IPageResourceBinding List1_Enumerator__Fuse_Navigation_IPageResourceBinding__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding* source)
{
    List1_Enumerator__Fuse_Navigation_IPageResourceBinding inst = ::uDefault< List1_Enumerator__Fuse_Navigation_IPageResourceBinding>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Node__uType* List1_Enumerator__Fuse_Node__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Node__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Node__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Node__uType), "Uno.Collections.List<Fuse.Node>.Enumerator", sizeof(List1_Enumerator__Fuse_Node), 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Node*(*)(void*))List1_Enumerator__Fuse_Node__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Node__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Node__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Node__typeof(), offsetof(List1_Enumerator__Fuse_Node__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Node__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Node__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Node, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Node, _source));

    return type;
}

void List1_Enumerator__Fuse_Node___ObjInit(List1_Enumerator__Fuse_Node* __this, ::app::Uno::Collections::List__Fuse_Node* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Node__Dispose(List1_Enumerator__Fuse_Node* __this)
{
}

::app::Fuse::Node* List1_Enumerator__Fuse_Node__get_Current(List1_Enumerator__Fuse_Node* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Node__MoveNext(List1_Enumerator__Fuse_Node* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_source)->_data)->Item< ::app::Fuse::Node*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Node List1_Enumerator__Fuse_Node__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Node* source)
{
    List1_Enumerator__Fuse_Node inst = ::uDefault< List1_Enumerator__Fuse_Node>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Physics_Body__uType* List1_Enumerator__Fuse_Physics_Body__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Physics_Body__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Physics_Body__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Physics_Body__uType), "Uno.Collections.List<Fuse.Physics.Body>.Enumerator", sizeof(List1_Enumerator__Fuse_Physics_Body), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Physics_Body__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Physics_Body__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Physics_Body__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Physics_Body__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Physics_Body, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Physics_Body, _source));

    return type;
}

void List1_Enumerator__Fuse_Physics_Body___ObjInit(List1_Enumerator__Fuse_Physics_Body* __this, ::app::Uno::Collections::List__Fuse_Physics_Body* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Physics_Body*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Physics_Body__Dispose(List1_Enumerator__Fuse_Physics_Body* __this)
{
}

::app::Fuse::Physics::Body* List1_Enumerator__Fuse_Physics_Body__get_Current(List1_Enumerator__Fuse_Physics_Body* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Physics_Body__MoveNext(List1_Enumerator__Fuse_Physics_Body* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Physics_Body*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Physics_Body*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Physics_Body*>(__this->_source)->_data)->Item< ::app::Fuse::Physics::Body*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Physics_Body List1_Enumerator__Fuse_Physics_Body__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Physics_Body* source)
{
    List1_Enumerator__Fuse_Physics_Body inst = ::uDefault< List1_Enumerator__Fuse_Physics_Body>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Physics_IRule__uType* List1_Enumerator__Fuse_Physics_IRule__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Physics_IRule__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Physics_IRule__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Physics_IRule__uType), "Uno.Collections.List<Fuse.Physics.IRule>.Enumerator", sizeof(List1_Enumerator__Fuse_Physics_IRule), 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::uObject*(*)(void*))List1_Enumerator__Fuse_Physics_IRule__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Physics_IRule__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Physics_IRule__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Physics_IRule__typeof(), offsetof(List1_Enumerator__Fuse_Physics_IRule__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Physics_IRule__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Physics_IRule__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Physics_IRule, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Physics_IRule, _source));

    return type;
}

void List1_Enumerator__Fuse_Physics_IRule___ObjInit(List1_Enumerator__Fuse_Physics_IRule* __this, ::app::Uno::Collections::List__Fuse_Physics_IRule* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Physics_IRule*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Physics_IRule__Dispose(List1_Enumerator__Fuse_Physics_IRule* __this)
{
}

::uObject* List1_Enumerator__Fuse_Physics_IRule__get_Current(List1_Enumerator__Fuse_Physics_IRule* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Physics_IRule__MoveNext(List1_Enumerator__Fuse_Physics_IRule* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Physics_IRule*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Physics_IRule*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Physics_IRule*>(__this->_source)->_data)->Item< ::uObject*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Physics_IRule List1_Enumerator__Fuse_Physics_IRule__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Physics_IRule* source)
{
    List1_Enumerator__Fuse_Physics_IRule inst = ::uDefault< List1_Enumerator__Fuse_Physics_IRule>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Reactive_JavaScript__uType* List1_Enumerator__Fuse_Reactive_JavaScript__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Reactive_JavaScript__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Reactive_JavaScript__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Reactive_JavaScript__uType), "Uno.Collections.List<Fuse.Reactive.JavaScript>.Enumerator", sizeof(List1_Enumerator__Fuse_Reactive_JavaScript), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Reactive_JavaScript__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Reactive_JavaScript__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Reactive_JavaScript__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Reactive_JavaScript__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Reactive_JavaScript, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Reactive_JavaScript, _source));

    return type;
}

void List1_Enumerator__Fuse_Reactive_JavaScript___ObjInit(List1_Enumerator__Fuse_Reactive_JavaScript* __this, ::app::Uno::Collections::List__Fuse_Reactive_JavaScript* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_JavaScript*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Reactive_JavaScript__Dispose(List1_Enumerator__Fuse_Reactive_JavaScript* __this)
{
}

::app::Fuse::Reactive::JavaScript* List1_Enumerator__Fuse_Reactive_JavaScript__get_Current(List1_Enumerator__Fuse_Reactive_JavaScript* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Reactive_JavaScript__MoveNext(List1_Enumerator__Fuse_Reactive_JavaScript* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_JavaScript*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_JavaScript*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Reactive_JavaScript*>(__this->_source)->_data)->Item< ::app::Fuse::Reactive::JavaScript*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Reactive_JavaScript List1_Enumerator__Fuse_Reactive_JavaScript__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Reactive_JavaScript* source)
{
    List1_Enumerator__Fuse_Reactive_JavaScript inst = ::uDefault< List1_Enumerator__Fuse_Reactive_JavaScript>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Resources_ImageSource__uType* List1_Enumerator__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Resources_ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Resources_ImageSource__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Resources_ImageSource__uType), "Uno.Collections.List<Fuse.Resources.ImageSource>.Enumerator", sizeof(List1_Enumerator__Fuse_Resources_ImageSource), 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Resources::ImageSource*(*)(void*))List1_Enumerator__Fuse_Resources_ImageSource__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Resources_ImageSource__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Resources_ImageSource__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Resources_ImageSource__typeof(), offsetof(List1_Enumerator__Fuse_Resources_ImageSource__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Resources_ImageSource__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Resources_ImageSource__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Resources_ImageSource, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Resources_ImageSource, _source));

    return type;
}

void List1_Enumerator__Fuse_Resources_ImageSource___ObjInit(List1_Enumerator__Fuse_Resources_ImageSource* __this, ::app::Uno::Collections::List__Fuse_Resources_ImageSource* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Resources_ImageSource__Dispose(List1_Enumerator__Fuse_Resources_ImageSource* __this)
{
}

::app::Fuse::Resources::ImageSource* List1_Enumerator__Fuse_Resources_ImageSource__get_Current(List1_Enumerator__Fuse_Resources_ImageSource* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Resources_ImageSource__MoveNext(List1_Enumerator__Fuse_Resources_ImageSource* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Resources_ImageSource*>(__this->_source)->_data)->Item< ::app::Fuse::Resources::ImageSource*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Resources_ImageSource List1_Enumerator__Fuse_Resources_ImageSource__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Resources_ImageSource* source)
{
    List1_Enumerator__Fuse_Resources_ImageSource inst = ::uDefault< List1_Enumerator__Fuse_Resources_ImageSource>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Scripting_NativeMember__uType* List1_Enumerator__Fuse_Scripting_NativeMember__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Scripting_NativeMember__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Scripting_NativeMember__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Scripting_NativeMember__uType), "Uno.Collections.List<Fuse.Scripting.NativeMember>.Enumerator", sizeof(List1_Enumerator__Fuse_Scripting_NativeMember), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Scripting_NativeMember__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Scripting_NativeMember__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Scripting_NativeMember__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Scripting_NativeMember__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Scripting_NativeMember, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Scripting_NativeMember, _source));

    return type;
}

void List1_Enumerator__Fuse_Scripting_NativeMember___ObjInit(List1_Enumerator__Fuse_Scripting_NativeMember* __this, ::app::Uno::Collections::List__Fuse_Scripting_NativeMember* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Scripting_NativeMember*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Scripting_NativeMember__Dispose(List1_Enumerator__Fuse_Scripting_NativeMember* __this)
{
}

::app::Fuse::Scripting::NativeMember* List1_Enumerator__Fuse_Scripting_NativeMember__get_Current(List1_Enumerator__Fuse_Scripting_NativeMember* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Scripting_NativeMember__MoveNext(List1_Enumerator__Fuse_Scripting_NativeMember* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Scripting_NativeMember*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Scripting_NativeMember*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Scripting_NativeMember*>(__this->_source)->_data)->Item< ::app::Fuse::Scripting::NativeMember*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Scripting_NativeMember List1_Enumerator__Fuse_Scripting_NativeMember__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Scripting_NativeMember* source)
{
    List1_Enumerator__Fuse_Scripting_NativeMember inst = ::uDefault< List1_Enumerator__Fuse_Scripting_NativeMember>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Style__uType* List1_Enumerator__Fuse_Style__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Style__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Style__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Style__uType), "Uno.Collections.List<Fuse.Style>.Enumerator", sizeof(List1_Enumerator__Fuse_Style), 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Style*(*)(void*))List1_Enumerator__Fuse_Style__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Style__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Style__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Style__typeof(), offsetof(List1_Enumerator__Fuse_Style__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Style__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Style__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Style, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Style, _source));

    return type;
}

void List1_Enumerator__Fuse_Style___ObjInit(List1_Enumerator__Fuse_Style* __this, ::app::Uno::Collections::List__Fuse_Style* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Style__Dispose(List1_Enumerator__Fuse_Style* __this)
{
}

::app::Fuse::Style* List1_Enumerator__Fuse_Style__get_Current(List1_Enumerator__Fuse_Style* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Style__MoveNext(List1_Enumerator__Fuse_Style* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Style*>(__this->_source)->_data)->Item< ::app::Fuse::Style*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Style List1_Enumerator__Fuse_Style__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Style* source)
{
    List1_Enumerator__Fuse_Style inst = ::uDefault< List1_Enumerator__Fuse_Style>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Transform__uType* List1_Enumerator__Fuse_Transform__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Transform__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Transform__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Transform__uType), "Uno.Collections.List<Fuse.Transform>.Enumerator", sizeof(List1_Enumerator__Fuse_Transform), 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Transform*(*)(void*))List1_Enumerator__Fuse_Transform__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Transform__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Transform__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Transform__typeof(), offsetof(List1_Enumerator__Fuse_Transform__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Transform__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Transform__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Transform, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Transform, _source));

    return type;
}

void List1_Enumerator__Fuse_Transform___ObjInit(List1_Enumerator__Fuse_Transform* __this, ::app::Uno::Collections::List__Fuse_Transform* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Transform__Dispose(List1_Enumerator__Fuse_Transform* __this)
{
}

::app::Fuse::Transform* List1_Enumerator__Fuse_Transform__get_Current(List1_Enumerator__Fuse_Transform* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Transform__MoveNext(List1_Enumerator__Fuse_Transform* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Transform*>(__this->_source)->_data)->Item< ::app::Fuse::Transform*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Transform List1_Enumerator__Fuse_Transform__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Transform* source)
{
    List1_Enumerator__Fuse_Transform inst = ::uDefault< List1_Enumerator__Fuse_Transform>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__uType* List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__uType*)::uAllocStructType(sizeof(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__uType), "Uno.Collections.List<Fuse.Triggers.Actions.TriggerAction>.Enumerator", sizeof(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction, _current),
        "_source", offsetof(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction, _source));

    return type;
}

void List1_Enumerator__Fuse_Triggers_Actions_TriggerAction___ObjInit(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction* __this, ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__Dispose(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction* __this)
{
}

::app::Fuse::Triggers::Actions::TriggerAction* List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__get_Current(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__MoveNext(List1_Enumerator__Fuse_Triggers_Actions_TriggerAction* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*>(__this->_source)->_data)->Item< ::app::Fuse::Triggers::Actions::TriggerAction*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Fuse_Triggers_Actions_TriggerAction List1_Enumerator__Fuse_Triggers_Actions_TriggerAction__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction* source)
{
    List1_Enumerator__Fuse_Triggers_Actions_TriggerAction inst = ::uDefault< List1_Enumerator__Fuse_Triggers_Actions_TriggerAction>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__int__uType* List1_Enumerator__int__typeof()
{
    static ::uStaticStrong<List1_Enumerator__int__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__int__uType*)::uAllocStructType(sizeof(List1_Enumerator__int__uType), "Uno.Collections.List<int>.Enumerator", sizeof(List1_Enumerator__int), 2, 1, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__int__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__int__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__int__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__int__uType, __interface_1));

    type->SetStrongRefs(
        "_source", offsetof(List1_Enumerator__int, _source));

    return type;
}

void List1_Enumerator__int___ObjInit(List1_Enumerator__int* __this, ::app::Uno::Collections::List__int* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__int*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__int__Dispose(List1_Enumerator__int* __this)
{
}

int List1_Enumerator__int__get_Current(List1_Enumerator__int* __this)
{
    return __this->_current;
}

bool List1_Enumerator__int__MoveNext(List1_Enumerator__int* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__int*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__int*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__int*>(__this->_source)->_data)->Item< int>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__int List1_Enumerator__int__New_1(::uStatic* __this, ::app::Uno::Collections::List__int* source)
{
    List1_Enumerator__int inst = ::uDefault< List1_Enumerator__int>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__string__uType* List1_Enumerator__string__typeof()
{
    static ::uStaticStrong<List1_Enumerator__string__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__string__uType*)::uAllocStructType(sizeof(List1_Enumerator__string__uType), "Uno.Collections.List<string>.Enumerator", sizeof(List1_Enumerator__string), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__string__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__string__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__string__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__string__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__string, _current),
        "_source", offsetof(List1_Enumerator__string, _source));

    return type;
}

void List1_Enumerator__string___ObjInit(List1_Enumerator__string* __this, ::app::Uno::Collections::List__string* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__string*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__string__Dispose(List1_Enumerator__string* __this)
{
}

::uString* List1_Enumerator__string__get_Current(List1_Enumerator__string* __this)
{
    return __this->_current;
}

bool List1_Enumerator__string__MoveNext(List1_Enumerator__string* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__string*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__string*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__string*>(__this->_source)->_data)->Item< ::uString*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__string List1_Enumerator__string__New_1(::uStatic* __this, ::app::Uno::Collections::List__string* source)
{
    List1_Enumerator__string inst = ::uDefault< List1_Enumerator__string>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Action__uType* List1_Enumerator__Uno_Action__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Action__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Action__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Action__uType), "Uno.Collections.List<Uno.Action>.Enumerator", sizeof(List1_Enumerator__Uno_Action), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Action__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Action__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Action__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Action__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_Action, _current),
        "_source", offsetof(List1_Enumerator__Uno_Action, _source));

    return type;
}

void List1_Enumerator__Uno_Action___ObjInit(List1_Enumerator__Uno_Action* __this, ::app::Uno::Collections::List__Uno_Action* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Action__Dispose(List1_Enumerator__Uno_Action* __this)
{
}

::uDelegate* List1_Enumerator__Uno_Action__get_Current(List1_Enumerator__Uno_Action* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Action__MoveNext(List1_Enumerator__Uno_Action* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Action*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Action*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Action*>(__this->_source)->_data)->Item< ::uDelegate*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Action List1_Enumerator__Uno_Action__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Action* source)
{
    List1_Enumerator__Uno_Action inst = ::uDefault< List1_Enumerator__Uno_Action>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__uType* List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__uType), "Uno.Collections.List<Uno.Net.Http.HttpMessageHandlerRequest>.Enumerator", sizeof(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest, _current),
        "_source", offsetof(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest, _source));

    return type;
}

void List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest___ObjInit(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest* __this, ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__Dispose(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest* __this)
{
}

::app::Uno::Net::Http::HttpMessageHandlerRequest* List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__get_Current(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__MoveNext(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_source)->_data)->Item< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest* source)
{
    List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest inst = ::uDefault< List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__uType* List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__uType), "Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken>.Enumerator", sizeof(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken), 2, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__Dispose;
    type->__interface_1.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__MoveNext;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__uType, __interface_0),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__uType, __interface_1));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken, _current),
        "_source", offsetof(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken, _source));

    return type;
}

void List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken___ObjInit(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken* __this, ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__Dispose(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken* __this)
{
}

::app::Uno::Runtime::Implementation::Internal::FormatStringToken* List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__get_Current(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__MoveNext(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken*>(__this->_source)->_data)->Item< ::app::Uno::Runtime::Implementation::Internal::FormatStringToken*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken* source)
{
    List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken inst = ::uDefault< List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_UX_FileSource__uType* List1_Enumerator__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_UX_FileSource__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_UX_FileSource__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_UX_FileSource__uType), "Uno.Collections.List<Uno.UX.FileSource>.Enumerator", sizeof(List1_Enumerator__Uno_UX_FileSource), 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Uno::UX::FileSource*(*)(void*))List1_Enumerator__Uno_UX_FileSource__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_UX_FileSource__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_UX_FileSource__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_UX_FileSource__typeof(), offsetof(List1_Enumerator__Uno_UX_FileSource__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_UX_FileSource__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_UX_FileSource__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_UX_FileSource, _current),
        "_source", offsetof(List1_Enumerator__Uno_UX_FileSource, _source));

    return type;
}

void List1_Enumerator__Uno_UX_FileSource___ObjInit(List1_Enumerator__Uno_UX_FileSource* __this, ::app::Uno::Collections::List__Uno_UX_FileSource* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_UX_FileSource__Dispose(List1_Enumerator__Uno_UX_FileSource* __this)
{
}

::app::Uno::UX::FileSource* List1_Enumerator__Uno_UX_FileSource__get_Current(List1_Enumerator__Uno_UX_FileSource* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_UX_FileSource__MoveNext(List1_Enumerator__Uno_UX_FileSource* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_UX_FileSource*>(__this->_source)->_data)->Item< ::app::Uno::UX::FileSource*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_UX_FileSource List1_Enumerator__Uno_UX_FileSource__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_UX_FileSource* source)
{
    List1_Enumerator__Uno_UX_FileSource inst = ::uDefault< List1_Enumerator__Uno_UX_FileSource>();
    inst._ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

List1_Enumerator__Uno_UX_IFactory__uType* List1_Enumerator__Uno_UX_IFactory__typeof()
{
    static ::uStaticStrong<List1_Enumerator__Uno_UX_IFactory__uType*> type;
    if (type != NULL) return type;

    type = (List1_Enumerator__Uno_UX_IFactory__uType*)::uAllocStructType(sizeof(List1_Enumerator__Uno_UX_IFactory__uType), "Uno.Collections.List<Uno.UX.IFactory>.Enumerator", sizeof(List1_Enumerator__Uno_UX_IFactory), 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::uObject*(*)(void*))List1_Enumerator__Uno_UX_IFactory__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))List1_Enumerator__Uno_UX_IFactory__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))List1_Enumerator__Uno_UX_IFactory__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Uno_UX_IFactory__typeof(), offsetof(List1_Enumerator__Uno_UX_IFactory__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(List1_Enumerator__Uno_UX_IFactory__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(List1_Enumerator__Uno_UX_IFactory__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(List1_Enumerator__Uno_UX_IFactory, _current),
        "_source", offsetof(List1_Enumerator__Uno_UX_IFactory, _source));

    return type;
}

void List1_Enumerator__Uno_UX_IFactory___ObjInit(List1_Enumerator__Uno_UX_IFactory* __this, ::app::Uno::Collections::List__Uno_UX_IFactory* source)
{
    __this->_source = source;
    __this->_version = ::uPtr< ::app::Uno::Collections::List__Uno_UX_IFactory*>(source)->_version;
    __this->_iterator = -1;
}

void List1_Enumerator__Uno_UX_IFactory__Dispose(List1_Enumerator__Uno_UX_IFactory* __this)
{
}

::uObject* List1_Enumerator__Uno_UX_IFactory__get_Current(List1_Enumerator__Uno_UX_IFactory* __this)
{
    return __this->_current;
}

bool List1_Enumerator__Uno_UX_IFactory__MoveNext(List1_Enumerator__Uno_UX_IFactory* __this)
{
    if (::uPtr< ::app::Uno::Collections::List__Uno_UX_IFactory*>(__this->_source)->_version != __this->_version)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Collection was modified")));
    }

    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::app::Uno::Collections::List__Uno_UX_IFactory*>(__this->_source)->_used)
    {
        __this->_current = ::uPtr< ::uArray*>(::uPtr< ::app::Uno::Collections::List__Uno_UX_IFactory*>(__this->_source)->_data)->Item< ::uObject*>(__this->_iterator);
        return true;
    }

    return false;
}

List1_Enumerator__Uno_UX_IFactory List1_Enumerator__Uno_UX_IFactory__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_UX_IFactory* source)
{
    List1_Enumerator__Uno_UX_IFactory inst = ::uDefault< List1_Enumerator__Uno_UX_IFactory>();
    inst._ObjInit(source);
    return inst;
}

}}}
