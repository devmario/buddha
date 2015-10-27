// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_PLAYBACK_ACTION_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_PLAYBACK_ACTION_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct PlaybackAction;

struct PlaybackAction__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

PlaybackAction__uType* PlaybackAction__typeof();

::uObject* PlaybackAction__get_Target(PlaybackAction* __this);
void PlaybackAction__set_Target(PlaybackAction* __this, ::uObject* value);

struct PlaybackAction : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::uObject*> _Target;

    ::uObject* Target() { return PlaybackAction__get_Target(this); }
    void Target(::uObject* value) { PlaybackAction__set_Target(this, value); }
};

}}}}


#endif
