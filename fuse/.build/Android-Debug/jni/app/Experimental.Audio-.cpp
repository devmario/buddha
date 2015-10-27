#include <app/Experimental.Audio.Channel.h>
#include <app/Experimental.Audio.ChannelHandle.h>
#include <app/Experimental.Audio.ChannelImpl.h>
#include <app/Experimental.Audio.Player.h>
#include <app/Experimental.Audio.PlayerHandle.h>
#include <app/Experimental.Audio.PlayerImpl.h>
#include <app/Experimental.Audio.Sound.h>
#include <app/Experimental.Audio.SoundHandle.h>
#include <app/Experimental.Audio.SoundImpl.h>
#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Collections.List__Experimental_Audio_Channel.h>
#include <app/Uno.Collections.List1_Enumerator__Experimental_Audio_Channel.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__Uno_Platform_ClosingEventArgs.h>
#include <app/Uno.Float.h>
#include <app/Uno.IO.Stream.h>
#include <app/Uno.Platform.ClosingEventArgs.h>
#include <app/Uno.Platform.Window.h>
#include <app/Uno.String.h>
#include <Uno/XliInterop.h>
#include <XliSoundPlayer.h>

namespace app {
namespace Experimental {
namespace Audio {

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Audio/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Channel__uType* Channel__typeof()
{
    static ::uStaticStrong<Channel__uType*> type;
    if (type != NULL) return type;

    type = (Channel__uType*)::uAllocClassType(sizeof(Channel__uType), "Experimental.Audio.Channel", false, 1, 1, 0);

    type->__fp_Finalize = (void(*)(::uObject*))Channel__Finalize;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Channel__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Channel__uType, __interface_0));

    type->SetStrongRefs(
        "_player", offsetof(Channel, _player));

    return type;
}

void Channel__Finalize(Channel* __this)
{
    __this->Dispose_1(true);
}

void Channel___ObjInit(Channel* __this, void* handle, ::app::Experimental::Audio::Player* player)
{
    __this->Handle(handle);
    __this->_player = player;
    __this->_isDisposed = false;
}

void Channel__Dispose(Channel* __this)
{
    __this->Dispose_1(true);
}

void Channel__Dispose_1(Channel* __this, bool safeToFreeManaged)
{
    if (!__this->_isDisposed)
    {
        __this->_isDisposed = true;
        __this->Reset();

        if (safeToFreeManaged)
        {
            if (__this->_player != NULL)
            {
                ::uPtr< ::app::Experimental::Audio::Player*>(__this->_player)->ReleaseChannel(__this);
            }

            __this->_player = NULL;
            ::app::Experimental::Audio::ChannelImpl__ReleaseChannel(NULL, __this->_handle);
        }
    }
}

void* Channel__get_Handle(Channel* __this)
{
    return __this->_handle;
}

bool Channel__get_IsFinished(Channel* __this)
{
    return ::app::Experimental::Audio::ChannelImpl__IsFinished(NULL, __this->Handle());
}

bool Channel__get_IsPlaying(Channel* __this)
{
    return ::app::Experimental::Audio::ChannelImpl__IsPlaying(NULL, __this->Handle());
}

float Channel__get_Volume(Channel* __this)
{
    return ::app::Experimental::Audio::ChannelImpl__GetVolume(NULL, __this->Handle());
}

Channel* Channel__New_1(::uStatic* __this, void* handle, ::app::Experimental::Audio::Player* player)
{
    Channel* inst = (Channel*)::uAllocObject(sizeof(Channel), Channel__typeof());
    inst->_ObjInit(handle, player);
    return inst;
}

void Channel__Pause(Channel* __this)
{
    ::app::Experimental::Audio::ChannelImpl__Pause(NULL, __this->Handle());
}

void Channel__Play(Channel* __this)
{
    if (!__this->IsPlaying())
    {
        if (__this->IsFinished())
        {
            ::app::Experimental::Audio::ChannelImpl__PlayFromStart(NULL, __this->Handle());
        }
        else
        {
            ::app::Experimental::Audio::ChannelImpl__UnPause(NULL, __this->Handle());
        }
    }
}

void Channel__Reset(Channel* __this)
{
    ::app::Experimental::Audio::ChannelImpl__ResetChannel(NULL, __this->Handle());
}

void Channel__set_Handle(Channel* __this, void* value)
{
    __this->_handle = value;
}

void Channel__set_Volume(Channel* __this, float value)
{
    ::app::Experimental::Audio::ChannelImpl__SetVolume(NULL, __this->Handle(), value);
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Audio/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ChannelHandle__uType* ChannelHandle__typeof()
{
    static ::uStaticStrong<ChannelHandle__uType*> type;
    if (type != NULL) return type;

    type = (ChannelHandle__uType*)::uAllocClassType(sizeof(ChannelHandle__uType), "Experimental.Audio.ChannelHandle", false, 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Audio/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ChannelImpl__uType* ChannelImpl__typeof()
{
    static ::uStaticStrong<ChannelImpl__uType*> type;
    if (type != NULL) return type;

    type = (ChannelImpl__uType*)::uAllocClassType(sizeof(ChannelImpl__uType), "Experimental.Audio.ChannelImpl", false, 0, 0, 0);

    return type;
}

float ChannelImpl__GetVolume(::uStatic* __this, void* handle_)
{
    return ((Xli::SoundChannel*)handle_)->GetVolume();
}

bool ChannelImpl__IsFinished(::uStatic* __this, void* handle_)
{
    return ((Xli::SoundChannel*)handle_)->IsFinished();
}

bool ChannelImpl__IsPlaying(::uStatic* __this, void* handle_)
{
    return ((Xli::SoundChannel*)handle_)->IsPlaying();
}

void ChannelImpl__Pause(::uStatic* __this, void* handle_)
{
    ((Xli::SoundChannel*)handle_)->Pause();
}

void ChannelImpl__PlayFromStart(::uStatic* __this, void* handle_)
{
    Xli::SoundChannel* channel = ((Xli::SoundChannel*)handle_);
    channel->Stop();
    channel->Play();
    channel->SetPosition(0);
}

void ChannelImpl__ReleaseChannel(::uStatic* __this, void* handle_)
{
    ((Xli::SoundChannel*)handle_)->Release();
}

void ChannelImpl__ResetChannel(::uStatic* __this, void* handle)
{
}

void ChannelImpl__SetVolume(::uStatic* __this, void* handle_, float volume_)
{
    ((Xli::SoundChannel*)handle_)->SetVolume(volume_);
}

void ChannelImpl__UnPause(::uStatic* __this, void* handle_)
{
    ((Xli::SoundChannel*)handle_)->UnPause();
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Audio/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

bool Player__firstPlayer;

Player__uType* Player__typeof()
{
    static ::uStaticStrong<Player__uType*> type;
    if (type != NULL) return type;

    type = (Player__uType*)::uAllocClassType(sizeof(Player__uType), "Experimental.Audio.Player", false, 1, 1, 0);

    type->__fp_Finalize = (void(*)(::uObject*))Player__Finalize;
    type->__interface_0.__fp_Dispose = (void(*)(void*))Player__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Player__uType, __interface_0));

    type->SetStrongRefs(
        "_channels", offsetof(Player, _channels));

    return type;
}

void Player__Finalize(Player* __this)
{
}

void Player___ObjInit(Player* __this)
{
    if (Player__firstPlayer)
    {
        Player__AudioSystemStartup(NULL);
    }

    __this->_handle = ::app::Experimental::Audio::PlayerImpl__Create(NULL);
    __this->_channels = ::app::Uno::Collections::List__Experimental_Audio_Channel__New_1(NULL);
    __this->_canRelease = true;
}

void Player___TypeInit(::uStatic* __this)
{
    Player__firstPlayer = true;
}

void Player__AudioSystemShutdown(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::app::Experimental::Audio::PlayerImpl__Shutdown(NULL);
}

void Player__AudioSystemStartup(::uStatic* __this)
{
    Player__firstPlayer = false;
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Window())->add_Closed(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Player__AudioSystemShutdown));
    ::app::Experimental::Audio::PlayerImpl__Startup(NULL);
}

::app::Experimental::Audio::Sound* Player__CreateSound(Player* __this, ::app::Uno::BundleFile* file)
{
    return ::app::Experimental::Audio::Sound__New_1(NULL, ::app::Experimental::Audio::PlayerImpl__CreateSoundFromBundle(NULL, __this->_handle, ::uPtr< ::app::Uno::BundleFile*>(file)->Name(), ::uPtr< ::app::Uno::BundleFile*>(file)->OpenRead()));
}

void Player__Dispose(Player* __this)
{
    ::app::Uno::Collections::List__Experimental_Audio_Channel* channels = __this->_channels;
    __this->_channels = NULL;

    for (::app::Uno::Collections::List1_Enumerator__Experimental_Audio_Channel enum_123 = ::uPtr< ::app::Uno::Collections::List__Experimental_Audio_Channel*>(channels)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Experimental::Audio::Channel* c = enum_123.Current();
        ::uPtr< ::app::Experimental::Audio::Channel*>(c)->Dispose();
    }
}

Player* Player__New_1(::uStatic* __this)
{
    Player* inst = (Player*)::uAllocObject(sizeof(Player), Player__typeof());
    inst->_ObjInit();
    return inst;
}

::app::Experimental::Audio::Channel* Player__PlaySound(Player* __this, ::app::Experimental::Audio::Sound* sound, bool loop)
{
    ::app::Experimental::Audio::Channel* c = ::app::Experimental::Audio::Channel__New_1(NULL, ::app::Experimental::Audio::PlayerImpl__PlaySound(NULL, __this->_handle, ::uPtr< ::app::Experimental::Audio::Sound*>(sound)->Handle(), loop), __this);
    ::uPtr< ::app::Uno::Collections::List__Experimental_Audio_Channel*>(__this->_channels)->Add(c);
    return c;
}

void Player__ReleaseChannel(Player* __this, ::app::Experimental::Audio::Channel* channel)
{
    if (__this->_channels != NULL)
    {
        ::uPtr< ::app::Uno::Collections::List__Experimental_Audio_Channel*>(__this->_channels)->Remove(channel);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Audio/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PlayerHandle__uType* PlayerHandle__typeof()
{
    static ::uStaticStrong<PlayerHandle__uType*> type;
    if (type != NULL) return type;

    type = (PlayerHandle__uType*)::uAllocClassType(sizeof(PlayerHandle__uType), "Experimental.Audio.PlayerHandle", false, 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Audio/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PlayerImpl__uType* PlayerImpl__typeof()
{
    static ::uStaticStrong<PlayerImpl__uType*> type;
    if (type != NULL) return type;

    type = (PlayerImpl__uType*)::uAllocClassType(sizeof(PlayerImpl__uType), "Experimental.Audio.PlayerImpl", false, 0, 0, 0);

    return type;
}

void* PlayerImpl__Create(::uStatic* __this)
{
    return ::Xli::SoundPlayer::Create();
}

void* PlayerImpl__CreateSoundFromBundle(::uStatic* __this, void* handle_, ::uString* path_, ::app::Uno::IO::Stream* stream_)
{
    return (((Xli::SoundPlayer*)handle_)->CreateSoundFromAsset(::uStringToXliString( (path_) )));
}

void* PlayerImpl__PlaySound(::uStatic* __this, void* handle_, void* sound_, bool loop_)
{
    return ((Xli::SoundPlayer*)handle_)->PlaySound((Xli::Sound*)sound_,loop_);
}

void PlayerImpl__Shutdown(::uStatic* __this)
{
}

void PlayerImpl__Startup(::uStatic* __this)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Audio/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Sound__uType* Sound__typeof()
{
    static ::uStaticStrong<Sound__uType*> type;
    if (type != NULL) return type;

    type = (Sound__uType*)::uAllocClassType(sizeof(Sound__uType), "Experimental.Audio.Sound", false, 0, 0, 0);

    return type;
}

void Sound___ObjInit(Sound* __this, void* handle)
{
    __this->Handle(handle);
    ::uPtr< ::app::Uno::Platform::Window*>(::uPtr< ::app::Uno::Application*>(::app::Uno::Application__get_Current(NULL))->Window())->add_Closing(::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_ClosingEventArgs__typeof(), (const void*)Sound__ClosingEvent, __this));
}

void Sound__ClosingEvent(Sound* __this, ::uObject* sender, ::app::Uno::Platform::ClosingEventArgs* args)
{
    __this->Reset();
}

void* Sound__get_Handle(Sound* __this)
{
    return __this->_handle;
}

Sound* Sound__New_1(::uStatic* __this, void* handle)
{
    Sound* inst = (Sound*)::uAllocObject(sizeof(Sound), Sound__typeof());
    inst->_ObjInit(handle);
    return inst;
}

void Sound__Reset(Sound* __this)
{
    ::app::Experimental::Audio::SoundImpl__Reset(NULL, __this->_handle);
}

void Sound__set_Handle(Sound* __this, void* value)
{
    __this->_handle = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Audio/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SoundHandle__uType* SoundHandle__typeof()
{
    static ::uStaticStrong<SoundHandle__uType*> type;
    if (type != NULL) return type;

    type = (SoundHandle__uType*)::uAllocClassType(sizeof(SoundHandle__uType), "Experimental.Audio.SoundHandle", false, 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Audio/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SoundImpl__uType* SoundImpl__typeof()
{
    static ::uStaticStrong<SoundImpl__uType*> type;
    if (type != NULL) return type;

    type = (SoundImpl__uType*)::uAllocClassType(sizeof(SoundImpl__uType), "Experimental.Audio.SoundImpl", false, 0, 0, 0);

    return type;
}

void SoundImpl__Reset(::uStatic* __this, void* handle)
{
}

}}}
