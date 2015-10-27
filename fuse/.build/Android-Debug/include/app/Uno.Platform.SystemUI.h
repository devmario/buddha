// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM_SYSTEM_U_I_H__
#define __APP_UNO_PLATFORM_SYSTEM_U_I_H__

#include <Uno.h>
#include <Uno/Platform2.h>
namespace app { namespace Uno { namespace Platform { struct SystemUIWillResizeEventArgs; } } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Uno {
namespace Platform {

extern ::app::Uno::Rect SystemUI___cachedBottomFrame;
extern ::uStaticStrong< ::uDelegate*> SystemUI__BottomFrameWillResize;
extern ::uStaticStrong< ::uDelegate*> SystemUI__TopFrameWillResize;

struct SystemUI__uType : ::uClassType
{
};

SystemUI__uType* SystemUI__typeof();

void SystemUI__add_BottomFrameWillResize(::uStatic* __this, ::uDelegate* value);
void SystemUI__EnterFullscreen(::uStatic* __this);
::app::Uno::Rect SystemUI__get_BottomFrame(::uStatic* __this);
void SystemUI__OnWillResize(::uStatic* __this, ::app::Uno::Platform::SystemUIWillResizeEventArgs* args);
void SystemUI__remove_BottomFrameWillResize(::uStatic* __this, ::uDelegate* value);

}}}


#endif
