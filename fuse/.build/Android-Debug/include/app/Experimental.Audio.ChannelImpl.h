// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Audio/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_AUDIO_CHANNEL_IMPL_H__
#define __APP_EXPERIMENTAL_AUDIO_CHANNEL_IMPL_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Experimental {
namespace Audio {

struct ChannelImpl;

struct ChannelImpl__uType : ::uClassType
{
};

ChannelImpl__uType* ChannelImpl__typeof();

float ChannelImpl__GetVolume(::uStatic* __this, void* handle_);
bool ChannelImpl__IsFinished(::uStatic* __this, void* handle_);
bool ChannelImpl__IsPlaying(::uStatic* __this, void* handle_);
void ChannelImpl__Pause(::uStatic* __this, void* handle_);
void ChannelImpl__PlayFromStart(::uStatic* __this, void* handle_);
void ChannelImpl__ReleaseChannel(::uStatic* __this, void* handle_);
void ChannelImpl__ResetChannel(::uStatic* __this, void* handle);
void ChannelImpl__SetVolume(::uStatic* __this, void* handle_, float volume_);
void ChannelImpl__UnPause(::uStatic* __this, void* handle_);

struct ChannelImpl : ::uObject
{
};

}}}


#endif
