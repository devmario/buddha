// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_STOP_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_STOP_H__

#include <app/Fuse.Triggers.Actions.PlaybackAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Stop;

struct Stop__uType : ::app::Fuse::Triggers::Actions::PlaybackAction__uType
{
};

Stop__uType* Stop__typeof();

void Stop__Perform(Stop* __this, ::app::Fuse::Node* target);

struct Stop : ::app::Fuse::Triggers::Actions::PlaybackAction
{
};

}}}}


#endif
