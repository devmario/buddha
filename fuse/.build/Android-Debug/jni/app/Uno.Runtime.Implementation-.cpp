#include <app/Android.android.view.View.h>
#include <app/Experimental.Audio.Channel.h>
#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.MixerHandle__bool.h>
#include <app/Fuse.Animations.MixerHandle__float.h>
#include <app/Fuse.Animations.MixerHandle__float4.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Transform.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.CacheFramebuffer.h>
#include <app/Fuse.Controls.Internal.DefaultTextRenderer_FontKey.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.ElementAtlas.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.iOS.StatusBarConfig.h>
#include <app/Fuse.Navigation.NavigationEdge.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Physics.Body.h>
#include <app/Fuse.Physics.IRule.h>
#include <app/Fuse.Reactive.JavaScript.h>
#include <app/Fuse.Resources.IMemoryResource.h>
#include <app/Fuse.Scripting.INameListener.h>
#include <app/Fuse.Style.h>
#include <app/Fuse.Transform.h>
#include <app/OpenGL.GLFramebufferHandle.h>
#include <app/Uno.Action.h>
#include <app/Uno.ArgumentException.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.ArgumentOutOfRangeException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Comparison__Fuse_Node.h>
#include <app/Uno.Content.Fonts.BitmapFont_CharPair.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__Uno_Platform_SystemUIWillResizeEventArgs.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.Long.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.Key.h>
#include <app/Uno.Platform.MouseButton.h>
#include <app/Uno.Platform.SystemUI.h>
#include <app/Uno.Platform.SystemUIResizeReason.h>
#include <app/Uno.Platform.SystemUIWillResizeEventArgs.h>
#include <app/Uno.Platform2.Display.h>
#include <app/Uno.Rect.h>
#include <app/Uno.Recti.h>
#include <app/Uno.Runtime.Implementation.ArrayCopyImpl.h>
#include <app/Uno.Runtime.Implementation.ArraySortImpl.h>
#include <app/Uno.Runtime.Implementation.BufferImpl.h>
#include <app/Uno.Runtime.Implementation.ClockImpl.h>
#include <app/Uno.Runtime.Implementation.DebugImpl.h>
#include <app/Uno.Runtime.Implementation.GenericEqualsImpl.h>
#include <app/Uno.Runtime.Implementation.GraphicsContextHandle.h>
#include <app/Uno.Runtime.Implementation.GraphicsContextImpl.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <app/Uno.Runtime.Implementation.TextEncodingImpl.h>
#include <app/Uno.String.h>
#include <app/Uno.Type.h>
#include <app/Uno.UShort.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.Resource.h>
#include <time.h>
#include <Uno/Base64.h>
#include <Uno/Support.h>
#include <Uno/XliInterop.h>
#include <Xli.h>
#include <Xli/DateTime.h>
#include <Xli/Time.h>
#include <XliPlatform/Display.h>
extern ::Xli::Window* uXliWindowPtr;

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayCopyImpl__uType* ArrayCopyImpl__typeof()
{
    static ::uStaticStrong<ArrayCopyImpl__uType*> type;
    if (type != NULL) return type;

    type = (ArrayCopyImpl__uType*)::uAllocClassType(sizeof(ArrayCopyImpl__uType), "Uno.Runtime.Implementation.ArrayCopyImpl");

    return type;
}

void ArrayCopyImpl__Copy__byte(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length)
{
    ArrayCopyImpl__ValidateArguments__byte(NULL, sourceArray, sourceIndex, destinationArray, destinationIndex, length);

    for (int i = 0; i < length; i++)
    {
        ::uPtr< ::uArray*>(destinationArray)->Item< ::uByte>(destinationIndex + i) = ::uPtr< ::uArray*>(sourceArray)->Item< ::uByte>(sourceIndex + i);
    }
}

void ArrayCopyImpl__ValidateArguments__byte(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length)
{
    if (sourceArray == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("sourceArray")));
    }

    if (destinationArray == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("destinationArray")));
    }

    if (sourceIndex < 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("Non-negative number required."), ::uGetConstString("sourceIndex")));
    }

    if (destinationIndex < 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("Non-negative number required."), ::uGetConstString("destinationIndex")));
    }

    if (length < 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("Non-negative number required."), ::uGetConstString("length")));
    }

    if (::uPtr< ::uArray*>(sourceArray)->Length() < (sourceIndex + length))
    {
        U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Destination array was not long enough. Check destinationIndex and length, and the array's lower bounds."), ::uBox< int>(::app::Uno::Int__typeof(), ::uPtr< ::uArray*>(sourceArray)->Length())), ::uGetConstString(", ")), ::uBox< int>(::app::Uno::Int__typeof(), destinationIndex)), ::uGetConstString(", ")), ::uBox< int>(::app::Uno::Int__typeof(), length))));
    }

    if (::uPtr< ::uArray*>(destinationArray)->Length() < (destinationIndex + length))
    {
        U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::uGetConstString("Source array was not long enough. Check sourceIndex and length, and the array's lower bounds.")));
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArraySortImpl__uType* ArraySortImpl__typeof()
{
    static ::uStaticStrong<ArraySortImpl__uType*> type;
    if (type != NULL) return type;

    type = (ArraySortImpl__uType*)::uAllocClassType(sizeof(ArraySortImpl__uType), "Uno.Runtime.Implementation.ArraySortImpl");

    return type;
}

void ArraySortImpl__QuickSortInternal__Fuse_Node(::uStatic* __this, ::uArray* data, ::uDelegate* comparison, int left, int right)
{
    if (left < right)
    {
        int rightIndex = right - 1;
        int pivotIndex = left;
        ::app::Fuse::Node* pivotValue = ::uPtr< ::uArray*>(data)->Item< ::app::Fuse::Node*>(pivotIndex);
        ArraySortImpl__SwapInternal__Fuse_Node(NULL, data, pivotIndex, rightIndex);

        for (int i = left; i < rightIndex; i++)
        {
            if (::uPtr< ::uDelegate*>(comparison)->Invoke< int, ::app::Fuse::Node*, ::app::Fuse::Node*>(::uPtr< ::uArray*>(data)->Item< ::app::Fuse::Node*>(i), pivotValue) < 0)
            {
                ArraySortImpl__SwapInternal__Fuse_Node(NULL, data, i, pivotIndex);
                pivotIndex++;
            }
        }

        ArraySortImpl__SwapInternal__Fuse_Node(NULL, data, pivotIndex, rightIndex);
        ArraySortImpl__QuickSortInternal__Fuse_Node(NULL, data, comparison, left, pivotIndex);
        ArraySortImpl__QuickSortInternal__Fuse_Node(NULL, data, comparison, pivotIndex + 1, right);
    }
}

void ArraySortImpl__ShellSortInternal__Fuse_Node(::uStatic* __this, ::uArray* data, ::uDelegate* comparison, int left, int right)
{
    float s = 2.8f;
    int size = right - left;
    int increment = size / 2;

    while (increment > 0)
    {
        for (int i = left + increment; i < size; i++)
        {
            int j = i;
            ::app::Fuse::Node* temp = ::uPtr< ::uArray*>(data)->Item< ::app::Fuse::Node*>(i);

            while ((j >= increment) && (::uPtr< ::uDelegate*>(comparison)->Invoke< int, ::app::Fuse::Node*, ::app::Fuse::Node*>(temp, data->Item< ::app::Fuse::Node*>(j - increment)) < 0))
            {
                ArraySortImpl__SwapInternal__Fuse_Node(NULL, data, j, j - increment);
                j = j - increment;
            }

            data->ItemStrong< ::app::Fuse::Node*>(j) = temp;
        }

        if (((float)increment < 2.8f) && (increment > 1))
        {
            increment = 1;
        }
        else
        {
            increment = (int)((float)increment / 2.8f);
        }
    }
}

void ArraySortImpl__Sort__Fuse_Node(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison)
{
    ArraySortImpl__ValidateArguments__Fuse_Node(NULL, elements, index, length, comparison);

    if (length > 280)
    {
        ArraySortImpl__QuickSortInternal__Fuse_Node(NULL, elements, comparison, index, index + length);
    }
    else
    {
        ArraySortImpl__ShellSortInternal__Fuse_Node(NULL, elements, comparison, index, index + length);
    }
}

void ArraySortImpl__SwapInternal__Fuse_Node(::uStatic* __this, ::uArray* data, int a, int b)
{
    ::app::Fuse::Node* temp = ::uPtr< ::uArray*>(data)->Item< ::app::Fuse::Node*>(a);
    data->ItemStrong< ::app::Fuse::Node*>(a) = data->Item< ::app::Fuse::Node*>(b);
    data->ItemStrong< ::app::Fuse::Node*>(b) = temp;
}

void ArraySortImpl__ValidateArguments__Fuse_Node(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison)
{
    if (elements == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("elements")));
    }

    if (index < 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("Non-negative number required."), ::uGetConstString("index")));
    }

    if (length < 0)
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, ::uGetConstString("Non-negative number required."), ::uGetConstString("length")));
    }

    if (::uPtr< ::uArray*>(elements)->Length() < (index + length))
    {
        U_THROW(::app::Uno::ArgumentException__New_3(NULL, ::uGetConstString("Index and length do not specify a valid range in elements.")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)comparison, NULL))
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Comparer is null.")));
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BufferImpl__uType* BufferImpl__typeof()
{
    static ::uStaticStrong<BufferImpl__uType*> type;
    if (type != NULL) return type;

    type = (BufferImpl__uType*)::uAllocClassType(sizeof(BufferImpl__uType), "Uno.Runtime.Implementation.BufferImpl");

    return type;
}

int BufferImpl__GetInt(::uStatic* __this, ::uArray* buffer_, int offset_, bool littleEndian_)
{
    return uReadBytes<int>((uByte*)buffer_->_ptr + offset_, littleEndian_);
}

void BufferImpl__SetFloat(::uStatic* __this, ::uArray* buffer_, int offset_, float value_, bool littleEndian_)
{
    uWriteBytes((uByte*)buffer_->_ptr + offset_, value_, littleEndian_);
}

void BufferImpl__SetInt(::uStatic* __this, ::uArray* buffer_, int offset_, int value_, bool littleEndian_)
{
    uWriteBytes((uByte*)buffer_->_ptr + offset_, value_, littleEndian_);
}

void BufferImpl__SetUShort(::uStatic* __this, ::uArray* buffer_, int offset_, ::uUShort value_, bool littleEndian_)
{
    uWriteBytes((uByte*)buffer_->_ptr + offset_, value_, littleEndian_);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ClockImpl__uType* ClockImpl__typeof()
{
    static ::uStaticStrong<ClockImpl__uType*> type;
    if (type != NULL) return type;

    type = (ClockImpl__uType*)::uAllocClassType(sizeof(ClockImpl__uType), "Uno.Runtime.Implementation.ClockImpl");

    return type;
}

double ClockImpl__GetSeconds(::uStatic* __this)
{
    return Xli::GetSeconds();
}

::uLong ClockImpl__GetTicks(::uStatic* __this)
{
    return Xli::GetTicks();
}

int ClockImpl__GetTimezoneOffset(::uStatic* __this, int year_, int month_, int day_)
{
    struct tm stm;
    stm.tm_year = year_ - 1900;
    stm.tm_mon = month_ - 1;
    stm.tm_mday = day_;
    stm.tm_hour = 0;
    stm.tm_min = 0;
    stm.tm_sec = 0;
    stm.tm_wday = 0;
    stm.tm_yday = 0;
    stm.tm_isdst = 0;
    time_t current_time = mktime(&stm);
    
    #ifdef XLI_PLATFORM_WIN32
    gmtime_s(&stm, &current_time);
    time_t utc = mktime(&stm);
    
    localtime_s(&stm, &current_time);
    time_t local = mktime(&stm);
    return (local - utc) / 60 + stm.tm_isdst * 60;
    #else
    struct tm *info;
    info = gmtime(&current_time);
    time_t utc = mktime(info);
    
    info = localtime(&current_time);
    time_t local = mktime(info);
    return (local - utc) / 60 + stm.tm_isdst * 60;
    #endif
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DebugImpl__uType* DebugImpl__typeof()
{
    static ::uStaticStrong<DebugImpl__uType*> type;
    if (type != NULL) return type;

    type = (DebugImpl__uType*)::uAllocClassType(sizeof(DebugImpl__uType), "Uno.Runtime.Implementation.DebugImpl");

    return type;
}

void DebugImpl__Log(::uStatic* __this, ::uString* message_, int type_)
{
    Xli::PrintLine(::uStringToXliString(message_));
    Xli::Out->GetStream()->Flush();
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GenericEqualsImpl__uType* GenericEqualsImpl__typeof()
{
    static ::uStaticStrong<GenericEqualsImpl__uType*> type;
    if (type != NULL) return type;

    type = (GenericEqualsImpl__uType*)::uAllocClassType(sizeof(GenericEqualsImpl__uType), "Uno.Runtime.Implementation.GenericEqualsImpl");

    return type;
}

bool GenericEqualsImpl__Equals__Android_android_view_View(::uStatic* __this, ::app::Android::android::view::View* left_, ::app::Android::android::view::View* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__char(::uStatic* __this, ::uChar left_, ::uChar right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Experimental_Audio_Channel(::uStatic* __this, ::app::Experimental::Audio::Channel* left_, ::app::Experimental::Audio::Channel* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__float2(::uStatic* __this, ::app::Uno::Float2 left_, ::app::Uno::Float2 right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__float3(::uStatic* __this, ::app::Uno::Float3 left_, ::app::Uno::Float3 right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__float4(::uStatic* __this, ::app::Uno::Float4 left_, ::app::Uno::Float4 right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__framebuffer(::uStatic* __this, ::app::Uno::Graphics::Framebuffer* left_, ::app::Uno::Graphics::Framebuffer* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Animations_IMixerMaster(::uStatic* __this, ::uObject* left_, ::uObject* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_bool_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__bool* left_, ::app::Fuse::Animations::MixerHandle__bool* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_float_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__float* left_, ::app::Fuse::Animations::MixerHandle__float* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_float4_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__float4* left_, ::app::Fuse::Animations::MixerHandle__float4* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Animations_MixerHandle_Fuse_Transform_(::uStatic* __this, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* left_, ::app::Fuse::Animations::MixerHandle__Fuse_Transform* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Behavior(::uStatic* __this, ::app::Fuse::Behavior* left_, ::app::Fuse::Behavior* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_CacheFramebuffer(::uStatic* __this, ::app::Fuse::CacheFramebuffer* left_, ::app::Fuse::CacheFramebuffer* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Controls_Internal_DefaultTextRenderer_FontKey(::uStatic* __this, ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey* left_, ::app::Fuse::Controls::Internal::DefaultTextRenderer_FontKey* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Drawing_Brush(::uStatic* __this, ::app::Fuse::Drawing::Brush* left_, ::app::Fuse::Drawing::Brush* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Drawing_Stroke(::uStatic* __this, ::app::Fuse::Drawing::Stroke* left_, ::app::Fuse::Drawing::Stroke* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Effects_Effect(::uStatic* __this, ::app::Fuse::Effects::Effect* left_, ::app::Fuse::Effects::Effect* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Elements_Element(::uStatic* __this, ::app::Fuse::Elements::Element* left_, ::app::Fuse::Elements::Element* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Elements_ElementAtlas(::uStatic* __this, ::app::Fuse::Elements::ElementAtlas* left_, ::app::Fuse::Elements::ElementAtlas* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Font(::uStatic* __this, ::app::Fuse::Font* left_, ::app::Fuse::Font* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_iOS_StatusBarConfig(::uStatic* __this, ::app::Fuse::iOS::StatusBarConfig* left_, ::app::Fuse::iOS::StatusBarConfig* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Navigation_NavigationEdge(::uStatic* __this, int left_, int right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Node(::uStatic* __this, ::app::Fuse::Node* left_, ::app::Fuse::Node* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Physics_Body(::uStatic* __this, ::app::Fuse::Physics::Body* left_, ::app::Fuse::Physics::Body* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Physics_IRule(::uStatic* __this, ::uObject* left_, ::uObject* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Reactive_JavaScript(::uStatic* __this, ::app::Fuse::Reactive::JavaScript* left_, ::app::Fuse::Reactive::JavaScript* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Resources_IMemoryResource(::uStatic* __this, ::uObject* left_, ::uObject* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Scripting_INameListener(::uStatic* __this, ::uObject* left_, ::uObject* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Style(::uStatic* __this, ::app::Fuse::Style* left_, ::app::Fuse::Style* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Fuse_Transform(::uStatic* __this, ::app::Fuse::Transform* left_, ::app::Fuse::Transform* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__int(::uStatic* __this, int left_, int right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__int2(::uStatic* __this, ::app::Uno::Int2 left_, ::app::Uno::Int2 right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__object(::uStatic* __this, ::uObject* left_, ::uObject* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__string(::uStatic* __this, ::uString* left_, ::uString* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Uno_Action(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Uno_Content_Fonts_BitmapFont_CharPair(::uStatic* __this, ::app::Uno::Content::Fonts::BitmapFont_CharPair left_, ::app::Uno::Content::Fonts::BitmapFont_CharPair right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Uno_EventHandler(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Uno_Type(::uStatic* __this, ::uType* left_, ::uType* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Uno_UX_FileSource(::uStatic* __this, ::app::Uno::UX::FileSource* left_, ::app::Uno::UX::FileSource* right_)
{
    return ::uGenericEquals(left_, right_);
}

bool GenericEqualsImpl__Equals__Uno_UX_Resource(::uStatic* __this, ::app::Uno::UX::Resource* left_, ::app::Uno::UX::Resource* right_)
{
    return ::uGenericEquals(left_, right_);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GraphicsContextHandle__uType* GraphicsContextHandle__typeof()
{
    static ::uStaticStrong<GraphicsContextHandle__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsContextHandle__uType*)::uAllocStructType(sizeof(GraphicsContextHandle__uType), "Uno.Runtime.Implementation.GraphicsContextHandle", sizeof(::uGraphicsContext), 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GraphicsContextImpl__uType* GraphicsContextImpl__typeof()
{
    static ::uStaticStrong<GraphicsContextImpl__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsContextImpl__uType*)::uAllocClassType(sizeof(GraphicsContextImpl__uType), "Uno.Runtime.Implementation.GraphicsContextImpl");

    return type;
}

::uUInt GraphicsContextImpl__GetBackbufferGLHandle(::uStatic* __this, ::uGraphicsContext handle_)
{
    return handle_.GetBackbufferGLHandle();
}

::app::Uno::Int2 GraphicsContextImpl__GetBackbufferOffset(::uStatic* __this, ::uGraphicsContext handle)
{
    return ::app::Uno::Int2__New_2(NULL, 0, 0);
}

::app::Uno::Recti GraphicsContextImpl__GetBackbufferScissor(::uStatic* __this, ::uGraphicsContext handle)
{
    return ::app::Uno::Recti__New_2(NULL, GraphicsContextImpl__GetBackbufferOffset(NULL, handle), GraphicsContextImpl__GetBackbufferSize(NULL, handle));
}

::app::Uno::Int2 GraphicsContextImpl__GetBackbufferSize(::uStatic* __this, ::uGraphicsContext handle)
{
    {
        ::app::Uno::Float2 size = ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->Frame().Size();
        return ::app::Uno::Int2__New_2(NULL, (int)size.X, (int)size.Y);
    }
}

::uGraphicsContext GraphicsContextImpl__GetInstance(::uStatic* __this)
{
    return uGraphicsContext::GetInstance();
}

int GraphicsContextImpl__GetRealBackbufferHeight(::uStatic* __this, ::uGraphicsContext handle)
{
    return GraphicsContextImpl__GetBackbufferSize(NULL, handle).Y;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PlatformWindowHandle__uType* PlatformWindowHandle__typeof()
{
    static ::uStaticStrong<PlatformWindowHandle__uType*> type;
    if (type != NULL) return type;

    type = (PlatformWindowHandle__uType*)::uAllocStructType(sizeof(PlatformWindowHandle__uType), "Uno.Runtime.Implementation.PlatformWindowHandle", sizeof(::Xli::Window*), 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::app::Uno::Rect PlatformWindowImpl__keyboardFrame;
bool PlatformWindowImpl__keyboardVisible;

PlatformWindowImpl__uType* PlatformWindowImpl__typeof()
{
    static ::uStaticStrong<PlatformWindowImpl__uType*> type;
    if (type != NULL) return type;

    type = (PlatformWindowImpl__uType*)::uAllocClassType(sizeof(PlatformWindowImpl__uType), "Uno.Runtime.Implementation.PlatformWindowImpl");

    return type;
}

void PlatformWindowImpl___TypeInit(::uStatic* __this)
{
    ::app::Uno::Platform::SystemUI__add_BottomFrameWillResize(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_SystemUIWillResizeEventArgs__typeof(), (const void*)PlatformWindowImpl__OnSoftKeyboardWillResize));
}

::app::Uno::Int2 PlatformWindowImpl__GetClientSize(::uStatic* __this, ::Xli::Window* handle)
{
    {
        ::app::Uno::Float2 size = ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->Frame().Size();
        return ::app::Uno::Int2__New_2(NULL, (int)size.X, (int)size.Y);
    }
}

float PlatformWindowImpl__GetDensity(::uStatic* __this, ::Xli::Window* handle)
{
    return ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->Density();
}

::Xli::Window* PlatformWindowImpl__GetInstance(::uStatic* __this)
{
    return uXliWindowPtr;
}

bool PlatformWindowImpl__GetKeyState(::uStatic* __this, ::Xli::Window* handle_, int key_)
{
    return handle_->GetKeyState((Xli::Key)key_);
}

bool PlatformWindowImpl__GetMouseButtonState(::uStatic* __this, ::Xli::Window* handle_, int button_)
{
    return handle_->GetMouseButtonState((Xli::MouseButton)button_);
}

bool PlatformWindowImpl__IsTextInputActive(::uStatic* __this, ::Xli::Window* handle)
{
    return false;
}

void PlatformWindowImpl__OnSoftKeyboardWillResize(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    PlatformWindowImpl__keyboardVisible = ::uPtr< ::app::Uno::Platform::SystemUIWillResizeEventArgs*>(args)->ResizeReason() != 2;
    PlatformWindowImpl__keyboardFrame = args->EndFrame();
}

void PlatformWindowImpl__SetClientSize(::uStatic* __this, ::Xli::Window* handle_, ::app::Uno::Int2 clientSize_)
{
    handle_->SetClientSize(::uInt2ToXliVector2i(clientSize_));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextEncodingImpl__uType* TextEncodingImpl__typeof()
{
    static ::uStaticStrong<TextEncodingImpl__uType*> type;
    if (type != NULL) return type;

    type = (TextEncodingImpl__uType*)::uAllocClassType(sizeof(TextEncodingImpl__uType), "Uno.Runtime.Implementation.TextEncodingImpl");

    return type;
}

::uString* TextEncodingImpl__DecodeUtf8(::uStatic* __this, ::uArray* value_)
{
    return ::uNewStringUtf8((const char*)::uPtr(value_)->Ptr(), ::uPtr(value_)->Length());
}

::uString* TextEncodingImpl__EncodeBase64(::uStatic* __this, ::uArray* value_)
{
    return ::uBase64Encode(value_);
}

::uArray* TextEncodingImpl__EncodeUtf8(::uStatic* __this, ::uString* value_)
{
    Xli::String str(::uStringToXliString(value_));
    return ::uNewArray(::app::Uno::Byte__typeof(), str.Length(), str.Ptr());
}

}}}}
