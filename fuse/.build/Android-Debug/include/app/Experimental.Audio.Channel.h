// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Audio/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_AUDIO_CHANNEL_H__
#define __APP_EXPERIMENTAL_AUDIO_CHANNEL_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Experimental { namespace Audio { struct Player; } } }

namespace app {
namespace Experimental {
namespace Audio {

struct Channel;

struct Channel__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

Channel__uType* Channel__typeof();

void Channel__Finalize(Channel* __this);
void Channel___ObjInit(Channel* __this, void* handle, ::app::Experimental::Audio::Player* player);
void Channel__Dispose(Channel* __this);
void Channel__Dispose_1(Channel* __this, bool safeToFreeManaged);
void* Channel__get_Handle(Channel* __this);
bool Channel__get_IsFinished(Channel* __this);
bool Channel__get_IsPlaying(Channel* __this);
float Channel__get_Volume(Channel* __this);
Channel* Channel__New_1(::uStatic* __this, void* handle, ::app::Experimental::Audio::Player* player);
void Channel__Pause(Channel* __this);
void Channel__Play(Channel* __this);
void Channel__Reset(Channel* __this);
void Channel__set_Handle(Channel* __this, void* value);
void Channel__set_Volume(Channel* __this, float value);

struct Channel : ::uObject
{
    bool _isDisposed;
    ::uStrong< ::app::Experimental::Audio::Player*> _player;
    void* _handle;

    void _ObjInit(void* handle, ::app::Experimental::Audio::Player* player) { Channel___ObjInit(this, handle, player); }
    void Dispose() { Channel__Dispose(this); }
    void Dispose_1(bool safeToFreeManaged) { Channel__Dispose_1(this, safeToFreeManaged); }
    void* Handle() { return Channel__get_Handle(this); }
    bool IsFinished() { return Channel__get_IsFinished(this); }
    bool IsPlaying() { return Channel__get_IsPlaying(this); }
    float Volume() { return Channel__get_Volume(this); }
    void Pause() { Channel__Pause(this); }
    void Play() { Channel__Play(this); }
    void Reset() { Channel__Reset(this); }
    void Handle(void* value) { Channel__set_Handle(this, value); }
    void Volume(float value) { Channel__set_Volume(this, value); }
};

}}}


#endif
