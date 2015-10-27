// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Audio/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_AUDIO_PLAYER_IMPL_H__
#define __APP_EXPERIMENTAL_AUDIO_PLAYER_IMPL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct Stream; } } }

namespace app {
namespace Experimental {
namespace Audio {

struct PlayerImpl;

struct PlayerImpl__uType : ::uClassType
{
};

PlayerImpl__uType* PlayerImpl__typeof();

void* PlayerImpl__Create(::uStatic* __this);
void* PlayerImpl__CreateSoundFromBundle(::uStatic* __this, void* handle_, ::uString* path_, ::app::Uno::IO::Stream* stream_);
void* PlayerImpl__PlaySound(::uStatic* __this, void* handle_, void* sound_, bool loop_);
void PlayerImpl__Shutdown(::uStatic* __this);
void PlayerImpl__Startup(::uStatic* __this);

struct PlayerImpl : ::uObject
{
};

}}}


#endif
