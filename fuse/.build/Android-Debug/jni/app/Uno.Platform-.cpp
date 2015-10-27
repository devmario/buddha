#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__Uno_Platform_ClosingEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_KeyEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_PointerEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_SystemUIWillResizeEventArgs.h>
#include <app/Uno.EventHandler__Uno_Platform_TextInputEventArgs.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.ClosingEventArgs.h>
#include <app/Uno.Platform.EventModifiers.h>
#include <app/Uno.Platform.FrameChangedEventArgs.h>
#include <app/Uno.Platform.Key.h>
#include <app/Uno.Platform.KeyEventArgs.h>
#include <app/Uno.Platform.MouseButton.h>
#include <app/Uno.Platform.PointerEventArgs.h>
#include <app/Uno.Platform.PointerType.h>
#include <app/Uno.Platform.SystemUI.h>
#include <app/Uno.Platform.SystemUIID.h>
#include <app/Uno.Platform.SystemUIResizeReason.h>
#include <app/Uno.Platform.SystemUIWillResizeEventArgs.h>
#include <app/Uno.Platform.TextInputEventArgs.h>
#include <app/Uno.Platform.TextInputHint.h>
#include <app/Uno.Platform.TimerEventArgs.h>
#include <app/Uno.Platform.ViewNativeHandle.h>
#include <app/Uno.Platform.WheelDeltaMode.h>
#include <app/Uno.Platform.Window.h>
#include <app/Uno.Rect.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <app/Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <app/Uno.String.h>
#include <Xli/Traits.h>

namespace app {
namespace Uno {
namespace Platform {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ClosingEventArgs__uType* ClosingEventArgs__typeof()
{
    static ::uStaticStrong<ClosingEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (ClosingEventArgs__uType*)::uAllocClassType(sizeof(ClosingEventArgs__uType), "Uno.Platform.ClosingEventArgs", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* EventModifiers__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Platform.EventModifiers", ::app::Uno::Int__typeof(), 9);

    type->SetLiterals(
        "MetaKey", 1LL,
        "ControlKey", 2LL,
        "ShiftKey", 4LL,
        "AltKey", 8LL,
        "LeftButton", 16LL,
        "MiddleButton", 32LL,
        "RightButton", 64LL,
        "X1Button", 128LL,
        "X2Button", 256LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FrameChangedEventArgs__uType* FrameChangedEventArgs__typeof()
{
    static ::uStaticStrong<FrameChangedEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (FrameChangedEventArgs__uType*)::uAllocClassType(sizeof(FrameChangedEventArgs__uType), "Uno.Platform.FrameChangedEventArgs", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    return type;
}

void FrameChangedEventArgs___ObjInit_1(FrameChangedEventArgs* __this, ::app::Uno::Rect newFrame)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->NewFrame(newFrame);
}

::app::Uno::Rect FrameChangedEventArgs__get_NewFrame(FrameChangedEventArgs* __this)
{
    return __this->_NewFrame;
}

FrameChangedEventArgs* FrameChangedEventArgs__New_2(::uStatic* __this, ::app::Uno::Rect newFrame)
{
    FrameChangedEventArgs* inst = (FrameChangedEventArgs*)::uAllocObject(sizeof(FrameChangedEventArgs), FrameChangedEventArgs__typeof());
    inst->_ObjInit_1(newFrame);
    return inst;
}

void FrameChangedEventArgs__set_NewFrame(FrameChangedEventArgs* __this, ::app::Uno::Rect value)
{
    __this->_NewFrame = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Key__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Platform.Key", ::app::Uno::Int__typeof(), 82);

    type->SetLiterals(
        "Backspace", 8LL,
        "Tab", 9LL,
        "Enter", 13LL,
        "ShiftKey", 16LL,
        "ControlKey", 17LL,
        "AltKey", 18LL,
        "Break", 19LL,
        "CapsLock", 20LL,
        "Escape", 27LL,
        "Space", 32LL,
        "PageUp", 33LL,
        "PageDown", 34LL,
        "End", 35LL,
        "Home", 36LL,
        "Left", 37LL,
        "Up", 38LL,
        "Right", 39LL,
        "Down", 40LL,
        "Insert", 45LL,
        "Delete", 46LL,
        "D0", 48LL,
        "D1", 49LL,
        "D2", 50LL,
        "D3", 51LL,
        "D4", 52LL,
        "D5", 53LL,
        "D6", 54LL,
        "D7", 55LL,
        "D8", 56LL,
        "D9", 57LL,
        "A", 65LL,
        "B", 66LL,
        "C", 67LL,
        "D", 68LL,
        "E", 69LL,
        "F", 70LL,
        "G", 71LL,
        "H", 72LL,
        "I", 73LL,
        "J", 74LL,
        "K", 75LL,
        "L", 76LL,
        "M", 77LL,
        "N", 78LL,
        "O", 79LL,
        "P", 80LL,
        "Q", 81LL,
        "R", 82LL,
        "S", 83LL,
        "T", 84LL,
        "U", 85LL,
        "V", 86LL,
        "W", 87LL,
        "X", 88LL,
        "Y", 89LL,
        "Z", 90LL,
        "NumPad0", 96LL,
        "NumPad1", 97LL,
        "NumPad2", 98LL,
        "NumPad3", 99LL,
        "NumPad4", 100LL,
        "NumPad5", 101LL,
        "NumPad6", 102LL,
        "NumPad7", 103LL,
        "NumPad8", 104LL,
        "NumPad9", 105LL,
        "F1", 112LL,
        "F2", 113LL,
        "F3", 114LL,
        "F4", 115LL,
        "F5", 116LL,
        "F6", 117LL,
        "F7", 118LL,
        "F8", 119LL,
        "F9", 120LL,
        "F10", 121LL,
        "F11", 122LL,
        "F12", 123LL,
        "MenuButton", 200LL,
        "BackButton", 201LL,
        "OSKey", 202LL,
        "MetaKey", 203LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyEventArgs__uType* KeyEventArgs__typeof()
{
    static ::uStaticStrong<KeyEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (KeyEventArgs__uType*)::uAllocClassType(sizeof(KeyEventArgs__uType), "Uno.Platform.KeyEventArgs", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    return type;
}

void KeyEventArgs___ObjInit_1(KeyEventArgs* __this, int key, int modifiers)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Key(key);
    __this->Modifiers(modifiers);
}

bool KeyEventArgs__get_Handled(KeyEventArgs* __this)
{
    return __this->_Handled;
}

bool KeyEventArgs__get_IsAltKeyPressed(KeyEventArgs* __this)
{
    return (__this->Modifiers() & 8) == 8;
}

bool KeyEventArgs__get_IsControlKeyPressed(KeyEventArgs* __this)
{
    return (__this->Modifiers() & 2) == 2;
}

bool KeyEventArgs__get_IsMetaKeyPressed(KeyEventArgs* __this)
{
    return (__this->Modifiers() & 1) == 1;
}

bool KeyEventArgs__get_IsShiftKeyPressed(KeyEventArgs* __this)
{
    return (__this->Modifiers() & 4) == 4;
}

int KeyEventArgs__get_Key(KeyEventArgs* __this)
{
    return __this->_Key;
}

int KeyEventArgs__get_Modifiers(KeyEventArgs* __this)
{
    return __this->_Modifiers;
}

KeyEventArgs* KeyEventArgs__New_2(::uStatic* __this, int key, int modifiers)
{
    KeyEventArgs* inst = (KeyEventArgs*)::uAllocObject(sizeof(KeyEventArgs), KeyEventArgs__typeof());
    inst->_ObjInit_1(key, modifiers);
    return inst;
}

void KeyEventArgs__set_Handled(KeyEventArgs* __this, bool value)
{
    __this->_Handled = value;
}

void KeyEventArgs__set_Key(KeyEventArgs* __this, int value)
{
    __this->_Key = value;
}

void KeyEventArgs__set_Modifiers(KeyEventArgs* __this, int value)
{
    __this->_Modifiers = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* MouseButton__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Platform.MouseButton", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "Left", 1LL,
        "Middle", 2LL,
        "Right", 3LL,
        "X1", 4LL,
        "X2", 5LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerEventArgs__uType* PointerEventArgs__typeof()
{
    static ::uStaticStrong<PointerEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (PointerEventArgs__uType*)::uAllocClassType(sizeof(PointerEventArgs__uType), "Uno.Platform.PointerEventArgs", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    return type;
}

void PointerEventArgs___ObjInit_1(PointerEventArgs* __this, int type, int modifiers, bool primary, ::app::Uno::Float2 position, int fingerId, int mouseButton, ::app::Uno::Float2 wheelDelta, int wheelDeltaMode)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->PointerType(type);
    __this->Modifiers(modifiers);
    __this->IsPrimary(primary);
    __this->Position(position);
    __this->FingerId(fingerId);
    __this->MouseButton(mouseButton);
    __this->WheelDelta(wheelDelta);
    __this->WheelDeltaMode(wheelDeltaMode);
}

int PointerEventArgs__get_FingerId(PointerEventArgs* __this)
{
    return __this->_FingerId;
}

bool PointerEventArgs__get_Handled(PointerEventArgs* __this)
{
    return __this->_Handled;
}

bool PointerEventArgs__get_IsPrimary(PointerEventArgs* __this)
{
    return __this->_IsPrimary;
}

int PointerEventArgs__get_Modifiers(PointerEventArgs* __this)
{
    return __this->_Modifiers;
}

int PointerEventArgs__get_MouseButton(PointerEventArgs* __this)
{
    return __this->_MouseButton;
}

int PointerEventArgs__get_PointerType(PointerEventArgs* __this)
{
    return __this->_PointerType;
}

::app::Uno::Float2 PointerEventArgs__get_Position(PointerEventArgs* __this)
{
    return __this->_Position;
}

::app::Uno::Float2 PointerEventArgs__get_WheelDelta(PointerEventArgs* __this)
{
    return __this->_WheelDelta;
}

int PointerEventArgs__get_WheelDeltaMode(PointerEventArgs* __this)
{
    return __this->_WheelDeltaMode;
}

PointerEventArgs* PointerEventArgs__New_2(::uStatic* __this, int type, int modifiers, bool primary, ::app::Uno::Float2 position, int fingerId, int mouseButton, ::app::Uno::Float2 wheelDelta, int wheelDeltaMode)
{
    PointerEventArgs* inst = (PointerEventArgs*)::uAllocObject(sizeof(PointerEventArgs), PointerEventArgs__typeof());
    inst->_ObjInit_1(type, modifiers, primary, position, fingerId, mouseButton, wheelDelta, wheelDeltaMode);
    return inst;
}

void PointerEventArgs__set_FingerId(PointerEventArgs* __this, int value)
{
    __this->_FingerId = value;
}

void PointerEventArgs__set_Handled(PointerEventArgs* __this, bool value)
{
    __this->_Handled = value;
}

void PointerEventArgs__set_IsPrimary(PointerEventArgs* __this, bool value)
{
    __this->_IsPrimary = value;
}

void PointerEventArgs__set_Modifiers(PointerEventArgs* __this, int value)
{
    __this->_Modifiers = value;
}

void PointerEventArgs__set_MouseButton(PointerEventArgs* __this, int value)
{
    __this->_MouseButton = value;
}

void PointerEventArgs__set_PointerType(PointerEventArgs* __this, int value)
{
    __this->_PointerType = value;
}

void PointerEventArgs__set_Position(PointerEventArgs* __this, ::app::Uno::Float2 value)
{
    __this->_Position = value;
}

void PointerEventArgs__set_WheelDelta(PointerEventArgs* __this, ::app::Uno::Float2 value)
{
    __this->_WheelDelta = value;
}

void PointerEventArgs__set_WheelDeltaMode(PointerEventArgs* __this, int value)
{
    __this->_WheelDeltaMode = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* PointerType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Platform.PointerType", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Mouse", 1LL,
        "Touch", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::app::Uno::Rect SystemUI___cachedBottomFrame;
::uStaticStrong< ::uDelegate*> SystemUI__BottomFrameWillResize;
::uStaticStrong< ::uDelegate*> SystemUI__TopFrameWillResize;

SystemUI__uType* SystemUI__typeof()
{
    static ::uStaticStrong<SystemUI__uType*> type;
    if (type != NULL) return type;

    type = (SystemUI__uType*)::uAllocClassType(sizeof(SystemUI__uType), "Uno.Platform.SystemUI");

    return type;
}

void SystemUI__add_BottomFrameWillResize(::uStatic* __this, ::uDelegate* value)
{
    SystemUI__BottomFrameWillResize = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)SystemUI__BottomFrameWillResize, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_SystemUIWillResizeEventArgs__typeof());
}

void SystemUI__EnterFullscreen(::uStatic* __this)
{
    uPlatform2::Application::EnterFullscreen();
}

::app::Uno::Rect SystemUI__get_BottomFrame(::uStatic* __this)
{
    return SystemUI___cachedBottomFrame;
}

void SystemUI__OnWillResize(::uStatic* __this, ::app::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    if (::uPtr< ::app::Uno::Platform::SystemUIWillResizeEventArgs*>(args)->ID() == 0)
    {
        ::uDelegate* handler = SystemUI__TopFrameWillResize;

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
        {
            ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::Platform::SystemUIWillResizeEventArgs*>(NULL, args);
        }
    }
    else
    {
        SystemUI___cachedBottomFrame = ::uPtr< ::app::Uno::Platform::SystemUIWillResizeEventArgs*>(args)->EndFrame();
        ::uDelegate* handler = SystemUI__BottomFrameWillResize;

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
        {
            ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Uno::Platform::SystemUIWillResizeEventArgs*>(NULL, args);
        }
    }
}

void SystemUI__remove_BottomFrameWillResize(::uStatic* __this, ::uDelegate* value)
{
    SystemUI__BottomFrameWillResize = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)SystemUI__BottomFrameWillResize, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_SystemUIWillResizeEventArgs__typeof());
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* SystemUIID__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Platform.SystemUIID", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "TopFrame", 0LL,
        "BottomFrame", 1LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* SystemUIResizeReason__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Platform.SystemUIResizeReason", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "WillShow", 0LL,
        "WillChangeFrame", 1LL,
        "WillHide", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SystemUIWillResizeEventArgs__uType* SystemUIWillResizeEventArgs__typeof()
{
    static ::uStaticStrong<SystemUIWillResizeEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (SystemUIWillResizeEventArgs__uType*)::uAllocClassType(sizeof(SystemUIWillResizeEventArgs__uType), "Uno.Platform.SystemUIWillResizeEventArgs", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    return type;
}

void SystemUIWillResizeEventArgs___ObjInit_1(SystemUIWillResizeEventArgs* __this, int id, int resizeReason, ::app::Uno::Rect endFrame, ::app::Uno::Rect startFrame, double animationDuration, int animationCurve)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->ID(id);
    __this->ResizeReason(resizeReason);
    __this->StartFrame(startFrame);
    __this->EndFrame(endFrame);

    if (animationDuration != 0.0)
    {
        __this->IsAnimated(true);
        __this->AnimationDuration(animationDuration);
        __this->AnimationCurve(animationCurve);
    }
}

int SystemUIWillResizeEventArgs__get_AnimationCurve(SystemUIWillResizeEventArgs* __this)
{
    return __this->_AnimationCurve;
}

double SystemUIWillResizeEventArgs__get_AnimationDuration(SystemUIWillResizeEventArgs* __this)
{
    return __this->_AnimationDuration;
}

::app::Uno::Rect SystemUIWillResizeEventArgs__get_EndFrame(SystemUIWillResizeEventArgs* __this)
{
    return __this->_EndFrame;
}

int SystemUIWillResizeEventArgs__get_ID(SystemUIWillResizeEventArgs* __this)
{
    return __this->_ID;
}

bool SystemUIWillResizeEventArgs__get_IsAnimated(SystemUIWillResizeEventArgs* __this)
{
    return __this->_IsAnimated;
}

int SystemUIWillResizeEventArgs__get_ResizeReason(SystemUIWillResizeEventArgs* __this)
{
    return __this->_ResizeReason;
}

::app::Uno::Rect SystemUIWillResizeEventArgs__get_StartFrame(SystemUIWillResizeEventArgs* __this)
{
    return __this->_StartFrame;
}

SystemUIWillResizeEventArgs* SystemUIWillResizeEventArgs__New_2(::uStatic* __this, int id, int resizeReason, ::app::Uno::Rect endFrame, ::app::Uno::Rect startFrame, double animationDuration, int animationCurve)
{
    SystemUIWillResizeEventArgs* inst = (SystemUIWillResizeEventArgs*)::uAllocObject(sizeof(SystemUIWillResizeEventArgs), SystemUIWillResizeEventArgs__typeof());
    inst->_ObjInit_1(id, resizeReason, endFrame, startFrame, animationDuration, animationCurve);
    return inst;
}

void SystemUIWillResizeEventArgs__set_AnimationCurve(SystemUIWillResizeEventArgs* __this, int value)
{
    __this->_AnimationCurve = value;
}

void SystemUIWillResizeEventArgs__set_AnimationDuration(SystemUIWillResizeEventArgs* __this, double value)
{
    __this->_AnimationDuration = value;
}

void SystemUIWillResizeEventArgs__set_EndFrame(SystemUIWillResizeEventArgs* __this, ::app::Uno::Rect value)
{
    __this->_EndFrame = value;
}

void SystemUIWillResizeEventArgs__set_ID(SystemUIWillResizeEventArgs* __this, int value)
{
    __this->_ID = value;
}

void SystemUIWillResizeEventArgs__set_IsAnimated(SystemUIWillResizeEventArgs* __this, bool value)
{
    __this->_IsAnimated = value;
}

void SystemUIWillResizeEventArgs__set_ResizeReason(SystemUIWillResizeEventArgs* __this, int value)
{
    __this->_ResizeReason = value;
}

void SystemUIWillResizeEventArgs__set_StartFrame(SystemUIWillResizeEventArgs* __this, ::app::Uno::Rect value)
{
    __this->_StartFrame = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextInputEventArgs__uType* TextInputEventArgs__typeof()
{
    static ::uStaticStrong<TextInputEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (TextInputEventArgs__uType*)::uAllocClassType(sizeof(TextInputEventArgs__uType), "Uno.Platform.TextInputEventArgs", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Text", offsetof(TextInputEventArgs, _Text));

    return type;
}

void TextInputEventArgs___ObjInit_1(TextInputEventArgs* __this, ::uString* text, int modifiers)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Text(text);
    __this->Modifiers(modifiers);
}

bool TextInputEventArgs__get_Handled(TextInputEventArgs* __this)
{
    return __this->_Handled;
}

int TextInputEventArgs__get_Modifiers(TextInputEventArgs* __this)
{
    return __this->_Modifiers;
}

::uString* TextInputEventArgs__get_Text(TextInputEventArgs* __this)
{
    return __this->_Text;
}

TextInputEventArgs* TextInputEventArgs__New_2(::uStatic* __this, ::uString* text, int modifiers)
{
    TextInputEventArgs* inst = (TextInputEventArgs*)::uAllocObject(sizeof(TextInputEventArgs), TextInputEventArgs__typeof());
    inst->_ObjInit_1(text, modifiers);
    return inst;
}

void TextInputEventArgs__set_Handled(TextInputEventArgs* __this, bool value)
{
    __this->_Handled = value;
}

void TextInputEventArgs__set_Modifiers(TextInputEventArgs* __this, int value)
{
    __this->_Modifiers = value;
}

void TextInputEventArgs__set_Text(TextInputEventArgs* __this, ::uString* value)
{
    __this->_Text = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* TextInputHint__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Platform.TextInputHint", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "Default", 0LL,
        "Email", 1LL,
        "URL", 2LL,
        "Phone", 3LL,
        "Number", 4LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TimerEventArgs__uType* TimerEventArgs__typeof()
{
    static ::uStaticStrong<TimerEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (TimerEventArgs__uType*)::uAllocClassType(sizeof(TimerEventArgs__uType), "Uno.Platform.TimerEventArgs", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    return type;
}

void TimerEventArgs___ObjInit_1(TimerEventArgs* __this, double lastTickTimestamp, double tickDuration)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->LastTickTimestamp(lastTickTimestamp);
    __this->TickDuration(tickDuration);
}

double TimerEventArgs__get_LastTickTimestamp(TimerEventArgs* __this)
{
    return __this->_LastTickTimestamp;
}

double TimerEventArgs__get_TickDuration(TimerEventArgs* __this)
{
    return __this->_TickDuration;
}

TimerEventArgs* TimerEventArgs__New_2(::uStatic* __this, double lastTickTimestamp, double tickDuration)
{
    TimerEventArgs* inst = (TimerEventArgs*)::uAllocObject(sizeof(TimerEventArgs), TimerEventArgs__typeof());
    inst->_ObjInit_1(lastTickTimestamp, tickDuration);
    return inst;
}

void TimerEventArgs__set_LastTickTimestamp(TimerEventArgs* __this, double value)
{
    __this->_LastTickTimestamp = value;
}

void TimerEventArgs__set_TickDuration(TimerEventArgs* __this, double value)
{
    __this->_TickDuration = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ViewNativeHandle__uType* ViewNativeHandle__typeof()
{
    static ::uStaticStrong<ViewNativeHandle__uType*> type;
    if (type != NULL) return type;

    type = (ViewNativeHandle__uType*)::uAllocStructType(sizeof(ViewNativeHandle__uType), "Uno.Platform.ViewNativeHandle", sizeof(uPlatform2::ViewNativeHandle), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))ViewNativeHandle__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))ViewNativeHandle__GetHashCode;

    return type;
}

bool ViewNativeHandle__Equals(uPlatform2::ViewNativeHandle* __this, ::uObject* obj)
{
    return ::uIs(obj, ViewNativeHandle__typeof()) && ViewNativeHandle__op_Equality(NULL, ::uUnbox< uPlatform2::ViewNativeHandle>(ViewNativeHandle__typeof(), obj), *__this);
}

int ViewNativeHandle__GetHashCode(uPlatform2::ViewNativeHandle* __this)
{
    return ::Xli::DefaultTraits::Hash(__this);
}

bool ViewNativeHandle__IsSameView(::uStatic* __this, uPlatform2::ViewNativeHandle handle1, uPlatform2::ViewNativeHandle handle2)
{
    return ::app::Android::Base::JNI__IsSameObject(NULL, handle1, handle2);
}

bool ViewNativeHandle__op_Equality(::uStatic* __this, uPlatform2::ViewNativeHandle lhs, uPlatform2::ViewNativeHandle rhs)
{
    return ViewNativeHandle__IsSameView(NULL, lhs, rhs);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* WheelDeltaMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Platform.WheelDeltaMode", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "DeltaPixel", 0LL,
        "DeltaLine", 1LL,
        "DeltaPage", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Window__uType* Window__typeof()
{
    static ::uStaticStrong<Window__uType*> type;
    if (type != NULL) return type;

    type = (Window__uType*)::uAllocClassType(sizeof(Window__uType), "Uno.Platform.Window", false, 0, 15, 0);

    type->SetStrongRefs(
        "Closed", offsetof(Window, Closed),
        "Closing", offsetof(Window, Closing),
        "GotFocus", offsetof(Window, GotFocus),
        "KeyboardResized", offsetof(Window, KeyboardResized),
        "KeyPressed", offsetof(Window, KeyPressed),
        "KeyReleased", offsetof(Window, KeyReleased),
        "LostFocus", offsetof(Window, LostFocus),
        "PointerEntered", offsetof(Window, PointerEntered),
        "PointerMoved", offsetof(Window, PointerMoved),
        "PointerPressed", offsetof(Window, PointerPressed),
        "PointerReleased", offsetof(Window, PointerReleased),
        "PointerWheelChanged", offsetof(Window, PointerWheelChanged),
        "Resized", offsetof(Window, Resized),
        "TextInput", offsetof(Window, TextInput),
        "Updating", offsetof(Window, Updating));

    return type;
}

void Window___ObjInit(Window* __this)
{
    __this->_handle = ::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetInstance(NULL);
}

void Window__add_Closed(Window* __this, ::uDelegate* value)
{
    __this->Closed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Closed, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Window__add_Closing(Window* __this, ::uDelegate* value)
{
    __this->Closing = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Closing, (::uDelegate*)value), ::app::Uno::EventHandler__Uno_Platform_ClosingEventArgs__typeof());
}

void Window__add_GotFocus(Window* __this, ::uDelegate* value)
{
    __this->GotFocus = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->GotFocus, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Window__add_LostFocus(Window* __this, ::uDelegate* value)
{
    __this->LostFocus = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->LostFocus, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Window__add_Resized(Window* __this, ::uDelegate* value)
{
    __this->Resized = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Resized, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

::app::Uno::Int2 Window__get_ClientSize(Window* __this)
{
    return ::app::Uno::Runtime::Implementation::PlatformWindowImpl__GetClientSize(NULL, __this->_handle);
}

bool Window__get_IsTextInputActive(Window* __this)
{
    return ::app::Uno::Runtime::Implementation::PlatformWindowImpl__IsTextInputActive(NULL, __this->_handle);
}

Window* Window__New_1(::uStatic* __this)
{
    Window* inst = (Window*)::uAllocObject(sizeof(Window), Window__typeof());
    inst->_ObjInit();
    return inst;
}

void Window__OnClosed(Window* __this, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Closed, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Closed)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnGotFocus(Window* __this, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->GotFocus, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->GotFocus)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnKeyboardResized(Window* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->KeyboardResized, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->KeyboardResized)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

void Window__OnKeyPressed(Window* __this, ::app::Uno::Platform::KeyEventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->KeyPressed, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->KeyPressed)->InvokeVoid< ::uObject*, ::app::Uno::Platform::KeyEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnKeyReleased(Window* __this, ::app::Uno::Platform::KeyEventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->KeyReleased, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->KeyReleased)->InvokeVoid< ::uObject*, ::app::Uno::Platform::KeyEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnLostFocus(Window* __this, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->LostFocus, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->LostFocus)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnPointerEntered(Window* __this, ::app::Uno::Platform::PointerEventArgs* args)
{
    __this->_hasPointerEntered = true;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PointerEntered, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PointerEntered)->InvokeVoid< ::uObject*, ::app::Uno::Platform::PointerEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnPointerMoved(Window* __this, ::app::Uno::Platform::PointerEventArgs* args)
{
    if (!__this->_hasPointerEntered)
    {
        __this->OnPointerEntered(args);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PointerMoved, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PointerMoved)->InvokeVoid< ::uObject*, ::app::Uno::Platform::PointerEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnPointerPressed(Window* __this, ::app::Uno::Platform::PointerEventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PointerPressed, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PointerPressed)->InvokeVoid< ::uObject*, ::app::Uno::Platform::PointerEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnPointerReleased(Window* __this, ::app::Uno::Platform::PointerEventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PointerReleased, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PointerReleased)->InvokeVoid< ::uObject*, ::app::Uno::Platform::PointerEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnPointerWheelChanged(Window* __this, ::app::Uno::Platform::PointerEventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PointerWheelChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PointerWheelChanged)->InvokeVoid< ::uObject*, ::app::Uno::Platform::PointerEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnResized(Window* __this, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Resized, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Resized)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnTextInput(Window* __this, ::app::Uno::Platform::TextInputEventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TextInput, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->TextInput)->InvokeVoid< ::uObject*, ::app::Uno::Platform::TextInputEventArgs*>((::uObject*)__this, args);
    }
}

void Window__OnUpdating(Window* __this, ::app::Uno::EventArgs* args)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Updating, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Updating)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, args);
    }
}

void Window__remove_Closed(Window* __this, ::uDelegate* value)
{
    __this->Closed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Closed, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Window__set_ClientSize(Window* __this, ::app::Uno::Int2 value)
{
    ::app::Uno::Runtime::Implementation::PlatformWindowImpl__SetClientSize(NULL, __this->_handle, value);
}

}}}
