// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_PLAY_TO_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_PLAY_TO_H__

#include <app/Fuse.Triggers.Actions.PlaybackAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct PlayTo;

struct PlayTo__uType : ::app::Fuse::Triggers::Actions::PlaybackAction__uType
{
};

PlayTo__uType* PlayTo__typeof();

double PlayTo__get_Progress(PlayTo* __this);
void PlayTo__Perform(PlayTo* __this, ::app::Fuse::Node* target);
void PlayTo__set_Progress(PlayTo* __this, double value);

struct PlayTo : ::app::Fuse::Triggers::Actions::PlaybackAction
{
    double _Progress;

    double Progress() { return PlayTo__get_Progress(this); }
    void Progress(double value) { PlayTo__set_Progress(this, value); }
};

}}}}


#endif
