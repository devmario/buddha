// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_PULSE_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_PULSE_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Triggers { struct WhileBool; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Pulse;

struct Pulse__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Pulse__uType* Pulse__typeof();

::app::Fuse::Triggers::WhileBool* Pulse__get_Target(Pulse* __this);
void Pulse__Perform(Pulse* __this, ::app::Fuse::Node* target);
void Pulse__set_Target(Pulse* __this, ::app::Fuse::Triggers::WhileBool* value);

struct Pulse : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::app::Fuse::Triggers::WhileBool*> _Target;

    ::app::Fuse::Triggers::WhileBool* Target() { return Pulse__get_Target(this); }
    void Target(::app::Fuse::Triggers::WhileBool* value) { Pulse__set_Target(this, value); }
};

}}}}


#endif
