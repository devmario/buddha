// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_PLATFORM_WINDOW_IMPL_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_PLATFORM_WINDOW_IMPL_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Platform { struct SystemUIWillResizeEventArgs; } } }
namespace app { namespace Uno { struct Int2; } }
namespace app { namespace Uno { struct Rect; } }
namespace Xli { class Window; }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

extern ::app::Uno::Rect PlatformWindowImpl__keyboardFrame;
extern bool PlatformWindowImpl__keyboardVisible;

struct PlatformWindowImpl__uType : ::uClassType
{
};

PlatformWindowImpl__uType* PlatformWindowImpl__typeof();

void PlatformWindowImpl___TypeInit(::uStatic* __this);
::app::Uno::Int2 PlatformWindowImpl__GetClientSize(::uStatic* __this, ::Xli::Window* handle);
float PlatformWindowImpl__GetDensity(::uStatic* __this, ::Xli::Window* handle);
::Xli::Window* PlatformWindowImpl__GetInstance(::uStatic* __this);
bool PlatformWindowImpl__GetKeyState(::uStatic* __this, ::Xli::Window* handle_, int key_);
bool PlatformWindowImpl__GetMouseButtonState(::uStatic* __this, ::Xli::Window* handle_, int button_);
bool PlatformWindowImpl__IsTextInputActive(::uStatic* __this, ::Xli::Window* handle);
void PlatformWindowImpl__OnSoftKeyboardWillResize(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform::SystemUIWillResizeEventArgs* args);
void PlatformWindowImpl__SetClientSize(::uStatic* __this, ::Xli::Window* handle_, ::app::Uno::Int2 clientSize_);

}}}}


#endif
