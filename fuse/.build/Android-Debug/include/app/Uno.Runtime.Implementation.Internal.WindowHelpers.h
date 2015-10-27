// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_WINDOW_HELPERS_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_WINDOW_HELPERS_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Platform { struct Window; } } }
namespace Xli { class Window; }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct WindowHelpers__uType : ::uClassType
{
};

WindowHelpers__uType* WindowHelpers__typeof();

::Xli::Window* WindowHelpers__GetPlatformWindowHandle(::uStatic* __this, ::app::Uno::Platform::Window* wnd);

}}}}}


#endif
