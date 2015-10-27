// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/Triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_BRING_TO_FRONT_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_BRING_TO_FRONT_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct BringToFront;

struct BringToFront__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

BringToFront__uType* BringToFront__typeof();

::app::Fuse::Node* BringToFront__get_Target(BringToFront* __this);
void BringToFront__Perform(BringToFront* __this, ::app::Fuse::Node* target);
void BringToFront__set_Target(BringToFront* __this, ::app::Fuse::Node* value);

struct BringToFront : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::app::Fuse::Node*> _Target;

    ::app::Fuse::Node* Target() { return BringToFront__get_Target(this); }
    void Target(::app::Fuse::Node* value) { BringToFront__set_Target(this, value); }
};

}}}}


#endif
