// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Audio/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_AUDIO_SOUND_H__
#define __APP_EXPERIMENTAL_AUDIO_SOUND_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Platform { struct ClosingEventArgs; } } }

namespace app {
namespace Experimental {
namespace Audio {

struct Sound;

struct Sound__uType : ::uClassType
{
};

Sound__uType* Sound__typeof();

void Sound___ObjInit(Sound* __this, void* handle);
void Sound__ClosingEvent(Sound* __this, ::uObject* sender, ::app::Uno::Platform::ClosingEventArgs* args);
void* Sound__get_Handle(Sound* __this);
Sound* Sound__New_1(::uStatic* __this, void* handle);
void Sound__Reset(Sound* __this);
void Sound__set_Handle(Sound* __this, void* value);

struct Sound : ::uObject
{
    void* _handle;

    void _ObjInit(void* handle) { Sound___ObjInit(this, handle); }
    void ClosingEvent(::uObject* sender, ::app::Uno::Platform::ClosingEventArgs* args) { Sound__ClosingEvent(this, sender, args); }
    void* Handle() { return Sound__get_Handle(this); }
    void Reset() { Sound__Reset(this); }
    void Handle(void* value) { Sound__set_Handle(this, value); }
};

}}}


#endif
