// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_DEBUG_ACTION_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_DEBUG_ACTION_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct DebugAction;

struct DebugAction__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

DebugAction__uType* DebugAction__typeof();

::uString* DebugAction__get_Message(DebugAction* __this);
void DebugAction__Perform(DebugAction* __this, ::app::Fuse::Node* target);
void DebugAction__set_Message(DebugAction* __this, ::uString* value);

struct DebugAction : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::uString*> _Message;

    ::uString* Message() { return DebugAction__get_Message(this); }
    void Message(::uString* value) { DebugAction__set_Message(this, value); }
};

}}}}


#endif
