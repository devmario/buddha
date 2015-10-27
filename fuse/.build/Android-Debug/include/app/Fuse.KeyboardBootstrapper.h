// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_KEYBOARD_BOOTSTRAPPER_H__
#define __APP_FUSE_KEYBOARD_BOOTSTRAPPER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Platform { struct KeyEventArgs; } } }

namespace app {
namespace Fuse {

struct KeyboardBootstrapper;

struct KeyboardBootstrapper__uType : ::uClassType
{
};

KeyboardBootstrapper__uType* KeyboardBootstrapper__typeof();

void KeyboardBootstrapper__OnKeyPressed(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform::KeyEventArgs* args);
void KeyboardBootstrapper__OnKeyReleased(::uStatic* __this, ::uObject* sender, ::app::Uno::Platform::KeyEventArgs* args);

struct KeyboardBootstrapper : ::uObject
{
};

}}


#endif
