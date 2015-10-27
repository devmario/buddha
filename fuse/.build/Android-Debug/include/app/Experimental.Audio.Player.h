// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Audio/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_AUDIO_PLAYER_H__
#define __APP_EXPERIMENTAL_AUDIO_PLAYER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Audio { struct Channel; } } }
namespace app { namespace Experimental { namespace Audio { struct Sound; } } }
namespace app { namespace Uno { namespace Collections { struct List__Experimental_Audio_Channel; } } }
namespace app { namespace Uno { struct BundleFile; } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Experimental {
namespace Audio {

struct Player;

extern bool Player__firstPlayer;

struct Player__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

Player__uType* Player__typeof();

void Player__Finalize(Player* __this);
void Player___ObjInit(Player* __this);
void Player___TypeInit(::uStatic* __this);
void Player__AudioSystemShutdown(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void Player__AudioSystemStartup(::uStatic* __this);
::app::Experimental::Audio::Sound* Player__CreateSound(Player* __this, ::app::Uno::BundleFile* file);
void Player__Dispose(Player* __this);
Player* Player__New_1(::uStatic* __this);
::app::Experimental::Audio::Channel* Player__PlaySound(Player* __this, ::app::Experimental::Audio::Sound* sound, bool loop);
void Player__ReleaseChannel(Player* __this, ::app::Experimental::Audio::Channel* channel);

struct Player : ::uObject
{
    void* _handle;
    ::uStrong< ::app::Uno::Collections::List__Experimental_Audio_Channel*> _channels;
    bool _canRelease;

    void _ObjInit() { Player___ObjInit(this); }
    ::app::Experimental::Audio::Sound* CreateSound(::app::Uno::BundleFile* file) { return Player__CreateSound(this, file); }
    void Dispose() { Player__Dispose(this); }
    ::app::Experimental::Audio::Channel* PlaySound(::app::Experimental::Audio::Sound* sound, bool loop) { return Player__PlaySound(this, sound, loop); }
    void ReleaseChannel(::app::Experimental::Audio::Channel* channel) { Player__ReleaseChannel(this, channel); }
};

}}}


#endif
