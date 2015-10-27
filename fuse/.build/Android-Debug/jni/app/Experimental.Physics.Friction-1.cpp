#include <app/Experimental.Physics.Friction__float2.h>
#include <app/Fuse.Internal.Blender__float2.h>
#include <app/Fuse.Internal.BlenderMap.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>

namespace app {
namespace Experimental {
namespace Physics {

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Physics/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Friction__float2__uType* Friction__float2__typeof()
{
    static ::uStaticStrong<Friction__float2__uType*> type;
    if (type != NULL) return type;

    type = (Friction__float2__uType*)::uAllocClassType(sizeof(Friction__float2__uType), "Experimental.Physics.Friction<float2>", false, 2, 1, 0);

    type->__interface_0.__fp_get_Position = (::app::Uno::Float2(*)(void*))Friction__float2__get_Position;
    type->__interface_0.__fp_set_Position = (void(*)(void*, ::app::Uno::Float2))Friction__float2__set_Position;
    type->__interface_0.__fp_get_Velocity = (::app::Uno::Float2(*)(void*))Friction__float2__get_Velocity;
    type->__interface_0.__fp_set_Velocity = (void(*)(void*, ::app::Uno::Float2))Friction__float2__set_Velocity;
    type->__interface_1.__fp_Update = (void(*)(void*, double))Friction__float2__Update;
    type->__interface_1.__fp_get_IsStatic = (bool(*)(void*))Friction__float2__get_IsStatic;

    type->SetInterfaces(
        ::app::Experimental::Physics::MotionSimulation__float2__typeof(), offsetof(Friction__float2__uType, __interface_0),
        ::app::Experimental::Physics::Simulation__typeof(), offsetof(Friction__float2__uType, __interface_1));

    type->SetStrongRefs(
        "_blender", offsetof(Friction__float2, _blender));

    return type;
}

void Friction__float2___ObjInit(Friction__float2* __this)
{
    __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__float2(NULL);
    __this->_speedDropout = 25.0f;
    __this->_kineticDeceleration = 60.0f;
    __this->_lowFluidDeceleration = 1.5f;
}

Friction__float2* Friction__float2__CreatePoints(::uStatic* __this)
{
    Friction__float2* n = Friction__float2__New_1(NULL);
    ::uPtr< Friction__float2*>(n)->SpeedDropout(25.0f);
    n->KineticDeceleration(60.0f);
    n->LowFluidDeceleration(1.5f);
    n->HighFluidDeceleration(0.0f);
    return n;
}

float Friction__float2__get_HighFluidDeceleration(Friction__float2* __this)
{
    return __this->_highFluidDeceleration;
}

bool Friction__float2__get_IsStatic(Friction__float2* __this)
{
    return __this->_isStatic;
}

float Friction__float2__get_KineticDeceleration(Friction__float2* __this)
{
    return __this->_kineticDeceleration;
}

float Friction__float2__get_LowFluidDeceleration(Friction__float2* __this)
{
    return __this->_lowFluidDeceleration;
}

::app::Uno::Float2 Friction__float2__get_Position(Friction__float2* __this)
{
    return __this->_position;
}

float Friction__float2__get_SpeedDropout(Friction__float2* __this)
{
    return __this->_speedDropout;
}

::app::Uno::Float2 Friction__float2__get_Velocity(Friction__float2* __this)
{
    return __this->_velocity;
}

Friction__float2* Friction__float2__New_1(::uStatic* __this)
{
    Friction__float2* inst = (Friction__float2*)::uAllocObject(sizeof(Friction__float2), Friction__float2__typeof());
    inst->_ObjInit();
    return inst;
}

void Friction__float2__set_HighFluidDeceleration(Friction__float2* __this, float value)
{
    __this->_highFluidDeceleration = value;
}

void Friction__float2__set_KineticDeceleration(Friction__float2* __this, float value)
{
    __this->_kineticDeceleration = value;
}

void Friction__float2__set_LowFluidDeceleration(Friction__float2* __this, float value)
{
    __this->_lowFluidDeceleration = value;
}

void Friction__float2__set_Position(Friction__float2* __this, ::app::Uno::Float2 value)
{
    __this->_position = value;
}

void Friction__float2__set_SpeedDropout(Friction__float2* __this, float value)
{
    __this->_speedDropout = value;
}

void Friction__float2__set_Velocity(Friction__float2* __this, ::app::Uno::Float2 value)
{
    __this->_velocity = value;
    __this->_isStatic = false;
}

void Friction__float2__Update(Friction__float2* __this, double elapsed)
{
    ::app::Uno::Float2 step = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(__this->_velocity, (double)(float)elapsed);
    __this->_position = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Add(__this->_position, step);
    double linear = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Length(__this->_velocity);

    if (linear < (double)__this->_speedDropout)
    {
        __this->_velocity = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Zero();
        __this->_isStatic = true;
        return;
    }

    double fluid = (double)__this->_kineticDeceleration + (linear * (double)__this->_lowFluidDeceleration);
    linear = linear + (-fluid * (double)(float)elapsed);

    if (linear < (double)__this->_speedDropout)
    {
        __this->_velocity = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Zero();
        __this->_isStatic = true;
        return;
    }

    __this->_velocity = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->UnitWeight(__this->_velocity, linear);
}

}}}
