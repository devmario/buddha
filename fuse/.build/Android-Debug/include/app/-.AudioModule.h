// This file was generated based on '/Users/jangwonhee/Documents/Buddha_2/fuse/MainView.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___AUDIO_MODULE_H__
#define __APP___AUDIO_MODULE_H__

#include <app/Fuse.Scripting.IModule.h>
#include <app/Fuse.Scripting.NativeModule.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }

namespace app {

struct AudioModule;

struct AudioModule__uType : ::app::Fuse::Scripting::NativeModule__uType
{
};

AudioModule__uType* AudioModule__typeof();

void AudioModule___ObjInit_1(AudioModule* __this);
::uObject* AudioModule__changeVolumne(::uStatic* __this, ::app::Fuse::Scripting::Context* c, ::uArray* args);
::uObject* AudioModule__disposePlayer(::uStatic* __this, ::app::Fuse::Scripting::Context* c, ::uArray* args);
AudioModule* AudioModule__New_2(::uStatic* __this);
::uObject* AudioModule__play(::uStatic* __this, ::app::Fuse::Scripting::Context* c, ::uArray* args);

struct AudioModule : ::app::Fuse::Scripting::NativeModule
{
    void _ObjInit_1() { AudioModule___ObjInit_1(this); }
};

}


#endif
