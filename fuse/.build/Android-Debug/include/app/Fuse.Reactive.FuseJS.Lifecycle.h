// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.10.5/FuseJS/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_FUSE_J_S_LIFECYCLE_H__
#define __APP_FUSE_REACTIVE_FUSE_J_S_LIFECYCLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct NativeEvent; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Reactive {
namespace FuseJS {

struct Lifecycle;

extern ::uStaticStrong< ::app::Fuse::Scripting::NativeEvent*> Lifecycle___enteringBackground;
extern ::uStaticStrong< ::app::Fuse::Scripting::NativeEvent*> Lifecycle___enteringForeground;
extern ::uStaticStrong< ::app::Fuse::Scripting::NativeEvent*> Lifecycle___enteringInteractive;
extern ::uStaticStrong< ::app::Fuse::Scripting::NativeEvent*> Lifecycle___exitedInteractive;
extern ::uStaticStrong< ::app::Fuse::Scripting::NativeEvent*> Lifecycle___terminating;

struct Lifecycle__uType : ::uClassType
{
};

Lifecycle__uType* Lifecycle__typeof();

::uObject* Lifecycle__CreateModule(::uStatic* __this);
void Lifecycle__OnEnteringBackground(::uStatic* __this, int newState);
void Lifecycle__OnEnteringForeground(::uStatic* __this, int newState);
void Lifecycle__OnEnteringInteractive(::uStatic* __this, int newState);
void Lifecycle__OnExitedInteractive(::uStatic* __this, int newState);
void Lifecycle__OnJsInitialized(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void Lifecycle__OnTerminating(::uStatic* __this, int newState);

struct Lifecycle : ::uObject
{
};

}}}}


#endif
