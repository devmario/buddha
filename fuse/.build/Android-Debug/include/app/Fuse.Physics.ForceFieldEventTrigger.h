// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PHYSICS_FORCE_FIELD_EVENT_TRIGGER_H__
#define __APP_FUSE_PHYSICS_FORCE_FIELD_EVENT_TRIGGER_H__

#include <app/Fuse.Physics.ForceFieldTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Physics { struct Body; } } }

namespace app {
namespace Fuse {
namespace Physics {

struct ForceFieldEventTrigger;

struct ForceFieldEventTrigger__uType : ::app::Fuse::Physics::ForceFieldTrigger__uType
{
};

ForceFieldEventTrigger__uType* ForceFieldEventTrigger__typeof();

void ForceFieldEventTrigger__OnTriggered(ForceFieldEventTrigger* __this, ::app::Fuse::Physics::Body* body);

struct ForceFieldEventTrigger : ::app::Fuse::Physics::ForceFieldTrigger
{
    ::uStrong< ::uDelegate*> Handler;

    void OnTriggered(::app::Fuse::Physics::Body* body) { ForceFieldEventTrigger__OnTriggered(this, body); }
};

}}}


#endif
