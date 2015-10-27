// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PHYSICS_EXITED_FORCE_FIELD_H__
#define __APP_FUSE_PHYSICS_EXITED_FORCE_FIELD_H__

#include <app/Fuse.Physics.ForceFieldEventTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Physics { struct Body; } } }

namespace app {
namespace Fuse {
namespace Physics {

struct ExitedForceField;

struct ExitedForceField__uType : ::app::Fuse::Physics::ForceFieldEventTrigger__uType
{
};

ExitedForceField__uType* ExitedForceField__typeof();

float ExitedForceField__get_Threshold(ExitedForceField* __this);
void ExitedForceField__set_Threshold(ExitedForceField* __this, float value);
void ExitedForceField__SetForce_1(ExitedForceField* __this, ::app::Fuse::Physics::Body* body, float force);

struct ExitedForceField : ::app::Fuse::Physics::ForceFieldEventTrigger
{
    float _oldForce;
    float _Threshold;

    float Threshold() { return ExitedForceField__get_Threshold(this); }
    void Threshold(float value) { ExitedForceField__set_Threshold(this, value); }
};

}}}


#endif
