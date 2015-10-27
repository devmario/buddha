// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_STATE_GROUP_H__
#define __APP_FUSE_TRIGGERS_STATE_GROUP_H__

#include <app/Fuse.Behavior.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Triggers { struct State; } } }
namespace app { namespace Fuse { namespace Triggers { struct Trigger; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct StateGroup;

struct StateGroup__uType : ::app::Fuse::Behavior__uType
{
    ::app::Fuse::Scripting::INameScope __interface_0;
};

StateGroup__uType* StateGroup__typeof();

void StateGroup__CheckAllDone(StateGroup* __this);
::uObject* StateGroup__FindObjectByName(StateGroup* __this, ::uString* name, ::uDelegate* acceptor);
::uObject* StateGroup__get_States(StateGroup* __this);
int StateGroup__get_Transition(StateGroup* __this);
void StateGroup__OnPlaybackDone(StateGroup* __this, ::app::Fuse::Triggers::Trigger* which);
void StateGroup__OnRooted(StateGroup* __this, ::app::Fuse::Node* elm);
void StateGroup__OnUnrooted(StateGroup* __this, ::app::Fuse::Node* elm);
void StateGroup__set_Transition(StateGroup* __this, int value);

struct StateGroup : ::app::Fuse::Behavior
{
    ::uStrong< ::uObject*> _states;
    ::uStrong< ::app::Fuse::Triggers::State*> _active;
    int _transition;

    void CheckAllDone() { StateGroup__CheckAllDone(this); }
    ::uObject* FindObjectByName(::uString* name, ::uDelegate* acceptor) { return StateGroup__FindObjectByName(this, name, acceptor); }
    ::uObject* States() { return StateGroup__get_States(this); }
    int Transition() { return StateGroup__get_Transition(this); }
    void OnPlaybackDone(::app::Fuse::Triggers::Trigger* which) { StateGroup__OnPlaybackDone(this, which); }
    void Transition(int value) { StateGroup__set_Transition(this, value); }
};

}}}


#endif
