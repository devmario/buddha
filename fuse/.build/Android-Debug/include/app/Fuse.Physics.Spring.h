// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PHYSICS_SPRING_H__
#define __APP_FUSE_PHYSICS_SPRING_H__

#include <app/Fuse.Behavior.h>
#include <app/Fuse.Physics.IRule.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Physics { struct Body; } } }
namespace app { namespace Fuse { namespace Physics { struct World; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Physics {

struct Spring;

struct Spring__uType : ::app::Fuse::Behavior__uType
{
    ::app::Fuse::Physics::IRule __interface_0;
};

Spring__uType* Spring__typeof();

void Spring__Fuse_Physics_IRule_Update(Spring* __this, double deltaTime, ::app::Fuse::Physics::World* world);
float Spring__get_Length(Spring* __this);
void Spring__OnRooted(Spring* __this, ::app::Fuse::Node* node);
void Spring__OnUnrooted(Spring* __this, ::app::Fuse::Node* node);
void Spring__set_Length(Spring* __this, float value);

struct Spring : ::app::Fuse::Behavior
{
    ::uStrong< ::app::Fuse::Node*> _target;
    ::uStrong< ::app::Fuse::Physics::Body*> _targetBody;
    float _length;
    float _stiffness;
    ::uStrong< ::app::Fuse::Physics::Body*> _body;

    float Length() { return Spring__get_Length(this); }
    void Length(float value) { Spring__set_Length(this, value); }
};

}}}


#endif
