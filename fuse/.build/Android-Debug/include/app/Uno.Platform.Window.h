// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM_WINDOW_H__
#define __APP_UNO_PLATFORM_WINDOW_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Platform { struct KeyEventArgs; } } }
namespace app { namespace Uno { namespace Platform { struct PointerEventArgs; } } }
namespace app { namespace Uno { namespace Platform { struct TextInputEventArgs; } } }
namespace app { namespace Uno { struct EventArgs; } }
namespace app { namespace Uno { struct Int2; } }
namespace Xli { class Window; }

namespace app {
namespace Uno {
namespace Platform {

struct Window;

struct Window__uType : ::uClassType
{
};

Window__uType* Window__typeof();

void Window___ObjInit(Window* __this);
void Window__add_Closed(Window* __this, ::uDelegate* value);
void Window__add_Closing(Window* __this, ::uDelegate* value);
void Window__add_GotFocus(Window* __this, ::uDelegate* value);
void Window__add_LostFocus(Window* __this, ::uDelegate* value);
void Window__add_Resized(Window* __this, ::uDelegate* value);
::app::Uno::Int2 Window__get_ClientSize(Window* __this);
bool Window__get_IsTextInputActive(Window* __this);
Window* Window__New_1(::uStatic* __this);
void Window__OnClosed(Window* __this, ::app::Uno::EventArgs* args);
void Window__OnGotFocus(Window* __this, ::app::Uno::EventArgs* args);
void Window__OnKeyboardResized(Window* __this);
void Window__OnKeyPressed(Window* __this, ::app::Uno::Platform::KeyEventArgs* args);
void Window__OnKeyReleased(Window* __this, ::app::Uno::Platform::KeyEventArgs* args);
void Window__OnLostFocus(Window* __this, ::app::Uno::EventArgs* args);
void Window__OnPointerEntered(Window* __this, ::app::Uno::Platform::PointerEventArgs* args);
void Window__OnPointerMoved(Window* __this, ::app::Uno::Platform::PointerEventArgs* args);
void Window__OnPointerPressed(Window* __this, ::app::Uno::Platform::PointerEventArgs* args);
void Window__OnPointerReleased(Window* __this, ::app::Uno::Platform::PointerEventArgs* args);
void Window__OnPointerWheelChanged(Window* __this, ::app::Uno::Platform::PointerEventArgs* args);
void Window__OnResized(Window* __this, ::app::Uno::EventArgs* args);
void Window__OnTextInput(Window* __this, ::app::Uno::Platform::TextInputEventArgs* args);
void Window__OnUpdating(Window* __this, ::app::Uno::EventArgs* args);
void Window__remove_Closed(Window* __this, ::uDelegate* value);
void Window__set_ClientSize(Window* __this, ::app::Uno::Int2 value);

struct Window : ::uObject
{
    ::Xli::Window* _handle;
    bool _hasPointerEntered;
    ::uStrong< ::uDelegate*> Closed;
    ::uStrong< ::uDelegate*> PointerPressed;
    ::uStrong< ::uDelegate*> PointerReleased;
    ::uStrong< ::uDelegate*> PointerMoved;
    ::uStrong< ::uDelegate*> PointerWheelChanged;
    ::uStrong< ::uDelegate*> PointerEntered;
    ::uStrong< ::uDelegate*> KeyPressed;
    ::uStrong< ::uDelegate*> KeyReleased;
    ::uStrong< ::uDelegate*> TextInput;
    ::uStrong< ::uDelegate*> KeyboardResized;
    ::uStrong< ::uDelegate*> Resized;
    ::uStrong< ::uDelegate*> Closing;
    ::uStrong< ::uDelegate*> Updating;
    ::uStrong< ::uDelegate*> GotFocus;
    ::uStrong< ::uDelegate*> LostFocus;

    void _ObjInit() { Window___ObjInit(this); }
    void add_Closed(::uDelegate* value) { Window__add_Closed(this, value); }
    void add_Closing(::uDelegate* value) { Window__add_Closing(this, value); }
    void add_GotFocus(::uDelegate* value) { Window__add_GotFocus(this, value); }
    void add_LostFocus(::uDelegate* value) { Window__add_LostFocus(this, value); }
    void add_Resized(::uDelegate* value) { Window__add_Resized(this, value); }
    ::app::Uno::Int2 ClientSize();
    bool IsTextInputActive() { return Window__get_IsTextInputActive(this); }
    void OnClosed(::app::Uno::EventArgs* args) { Window__OnClosed(this, args); }
    void OnGotFocus(::app::Uno::EventArgs* args) { Window__OnGotFocus(this, args); }
    void OnKeyboardResized() { Window__OnKeyboardResized(this); }
    void OnKeyPressed(::app::Uno::Platform::KeyEventArgs* args) { Window__OnKeyPressed(this, args); }
    void OnKeyReleased(::app::Uno::Platform::KeyEventArgs* args) { Window__OnKeyReleased(this, args); }
    void OnLostFocus(::app::Uno::EventArgs* args) { Window__OnLostFocus(this, args); }
    void OnPointerEntered(::app::Uno::Platform::PointerEventArgs* args) { Window__OnPointerEntered(this, args); }
    void OnPointerMoved(::app::Uno::Platform::PointerEventArgs* args) { Window__OnPointerMoved(this, args); }
    void OnPointerPressed(::app::Uno::Platform::PointerEventArgs* args) { Window__OnPointerPressed(this, args); }
    void OnPointerReleased(::app::Uno::Platform::PointerEventArgs* args) { Window__OnPointerReleased(this, args); }
    void OnPointerWheelChanged(::app::Uno::Platform::PointerEventArgs* args) { Window__OnPointerWheelChanged(this, args); }
    void OnResized(::app::Uno::EventArgs* args) { Window__OnResized(this, args); }
    void OnTextInput(::app::Uno::Platform::TextInputEventArgs* args) { Window__OnTextInput(this, args); }
    void OnUpdating(::app::Uno::EventArgs* args) { Window__OnUpdating(this, args); }
    void remove_Closed(::uDelegate* value) { Window__remove_Closed(this, value); }
    void ClientSize(::app::Uno::Int2 value);
};

}}}

#include <app/Uno.Int2.h>

namespace app {
namespace Uno {
namespace Platform {

inline ::app::Uno::Int2 Window::ClientSize() { return Window__get_ClientSize(this); }
inline void Window::ClientSize(::app::Uno::Int2 value) { Window__set_ClientSize(this, value); }

}}}


#endif
