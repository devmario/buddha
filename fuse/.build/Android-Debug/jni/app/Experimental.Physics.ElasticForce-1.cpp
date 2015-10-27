#include <app/Experimental.Physics.ElasticForce__float2.h>
#include <app/Fuse.Internal.Blender__float2.h>
#include <app/Fuse.Internal.BlenderMap.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Math.h>

namespace app {
namespace Experimental {
namespace Physics {

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Physics/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ElasticForce__float2__uType* ElasticForce__float2__typeof()
{
    static ::uStaticStrong<ElasticForce__float2__uType*> type;
    if (type != NULL) return type;

    type = (ElasticForce__float2__uType*)::uAllocClassType(sizeof(ElasticForce__float2__uType), "Experimental.Physics.ElasticForce<float2>", false, 3, 1, 0);

    type->__interface_0.__fp_get_Destination = (::app::Uno::Float2(*)(void*))ElasticForce__float2__get_Destination;
    type->__interface_0.__fp_set_Destination = (void(*)(void*, ::app::Uno::Float2))ElasticForce__float2__set_Destination;
    type->__interface_1.__fp_get_Position = (::app::Uno::Float2(*)(void*))ElasticForce__float2__get_Position;
    type->__interface_1.__fp_set_Position = (void(*)(void*, ::app::Uno::Float2))ElasticForce__float2__set_Position;
    type->__interface_1.__fp_get_Velocity = (::app::Uno::Float2(*)(void*))ElasticForce__float2__get_Velocity;
    type->__interface_1.__fp_set_Velocity = (void(*)(void*, ::app::Uno::Float2))ElasticForce__float2__set_Velocity;
    type->__interface_2.__fp_Update = (void(*)(void*, double))ElasticForce__float2__Update;
    type->__interface_2.__fp_get_IsStatic = (bool(*)(void*))ElasticForce__float2__get_IsStatic;

    type->SetInterfaces(
        ::app::Experimental::Physics::DestinationSimulation__float2__typeof(), offsetof(ElasticForce__float2__uType, __interface_0),
        ::app::Experimental::Physics::MotionSimulation__float2__typeof(), offsetof(ElasticForce__float2__uType, __interface_1),
        ::app::Experimental::Physics::Simulation__typeof(), offsetof(ElasticForce__float2__uType, __interface_2));

    type->SetStrongRefs(
        "_blender", offsetof(ElasticForce__float2, _blender));

    return type;
}

void ElasticForce__float2___ObjInit(ElasticForce__float2* __this, float scale)
{
    __this->_blender = ::app::Fuse::Internal::BlenderMap__Get__float2(NULL);
    __this->_attractionForce = 500.0f;
    __this->_attractionCurve = 0.65f;
    __this->_damping = 10.0f;
    __this->_energyEps = 0.01f;
    __this->timeStep = 0.001;
    __this->_remainTime = 0.0;
    __this->_scale = scale;
}

ElasticForce__float2* ElasticForce__float2__CreatePoints(::uStatic* __this)
{
    ElasticForce__float2* a = ElasticForce__float2__New_1(NULL, 0.01f);
    ::uPtr< ElasticForce__float2*>(a)->AttractionForce(200.0f);
    a->AttractionCurve(0.65f);
    a->Damping(10.0f);
    return a;
}

::app::Uno::Float2 ElasticForce__float2__get_Attraction(ElasticForce__float2* __this)
{
    ::app::Uno::Float2 v = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Sub(__this->Destination(), __this->Position());
    double dlength = double();
    ::app::Uno::Float2 unit = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->ToUnit(v, &dlength);
    float length = (float)dlength;

    if (length < __this->_scale)
    {
        return ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Zero();
    }

    float p = ::app::Uno::Math__Pow_1(NULL, length, __this->AttractionCurve());
    return ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(unit, (double)p);
}

float ElasticForce__float2__get_AttractionCurve(ElasticForce__float2* __this)
{
    return __this->_attractionCurve;
}

float ElasticForce__float2__get_AttractionForce(ElasticForce__float2* __this)
{
    return __this->_attractionForce;
}

float ElasticForce__float2__get_Damping(ElasticForce__float2* __this)
{
    return __this->_damping;
}

::app::Uno::Float2 ElasticForce__float2__get_Destination(ElasticForce__float2* __this)
{
    return __this->_attractionDestination;
}

float ElasticForce__float2__get_Energy(ElasticForce__float2* __this)
{
    return (float)(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Length(__this->Attraction()) + ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Length(__this->Velocity()));
}

float ElasticForce__float2__get_EnergyEps(ElasticForce__float2* __this)
{
    return __this->_energyEps;
}

bool ElasticForce__float2__get_IsLocked(ElasticForce__float2* __this)
{
    return __this->_IsLocked;
}

bool ElasticForce__float2__get_IsStatic(ElasticForce__float2* __this)
{
    return __this->_isStatic;
}

::app::Uno::Float2 ElasticForce__float2__get_Position(ElasticForce__float2* __this)
{
    return __this->_Position;
}

::app::Uno::Float2 ElasticForce__float2__get_Velocity(ElasticForce__float2* __this)
{
    return __this->_velocity;
}

void ElasticForce__float2__Iterate(ElasticForce__float2* __this)
{
    ::app::Uno::Float2 acc = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(__this->Attraction(), (double)(float)((double)__this->AttractionForce() * __this->timeStep));
    __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Add(__this->Velocity(), acc));

    if (__this->_hasMaxSpeed)
    {
        double length = double();
        ::app::Uno::Float2 unit = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->ToUnit(__this->Velocity(), &length);

        if (length > (double)__this->_maxSpeed)
        {
            __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(unit, (double)__this->_maxSpeed));
        }
    }

    if (!__this->IsLocked())
    {
        ::app::Uno::Float2 step = ::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(__this->Velocity(), (double)(float)__this->timeStep);
        __this->Position(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Add(__this->Position(), step));

        if (__this->Energy() < __this->EnergyEps())
        {
            __this->Position(__this->Destination());
            __this->IsStatic(true);
        }
    }
}

ElasticForce__float2* ElasticForce__float2__New_1(::uStatic* __this, float scale)
{
    ElasticForce__float2* inst = (ElasticForce__float2*)::uAllocObject(sizeof(ElasticForce__float2), ElasticForce__float2__typeof());
    inst->_ObjInit(scale);
    return inst;
}

void ElasticForce__float2__set_AttractionCurve(ElasticForce__float2* __this, float value)
{
    __this->_attractionCurve = value;
}

void ElasticForce__float2__set_AttractionForce(ElasticForce__float2* __this, float value)
{
    __this->_attractionForce = value;
}

void ElasticForce__float2__set_Damping(ElasticForce__float2* __this, float value)
{
    __this->_damping = value;
}

void ElasticForce__float2__set_Destination(ElasticForce__float2* __this, ::app::Uno::Float2 value)
{
    __this->_attractionDestination = value;
    __this->_isStatic = false;
}

void ElasticForce__float2__set_EnergyEps(ElasticForce__float2* __this, float value)
{
    __this->_energyEps = value;
}

void ElasticForce__float2__set_IsLocked(ElasticForce__float2* __this, bool value)
{
    __this->_IsLocked = value;
}

void ElasticForce__float2__set_IsStatic(ElasticForce__float2* __this, bool value)
{
    if (__this->_isStatic != value)
    {
        __this->_isStatic = value;
    }
}

void ElasticForce__float2__set_Position(ElasticForce__float2* __this, ::app::Uno::Float2 value)
{
    __this->_Position = value;
}

void ElasticForce__float2__set_Velocity(ElasticForce__float2* __this, ::app::Uno::Float2 value)
{
    __this->_velocity = value;
    __this->_isStatic = false;
}

void ElasticForce__float2__Update(ElasticForce__float2* __this, double elapsed)
{
    __this->_remainTime = __this->_remainTime + elapsed;

    while (__this->_remainTime > 0.0)
    {
        __this->Iterate();
        __this->_remainTime = __this->_remainTime - __this->timeStep;
    }

    __this->Velocity(::uPtr< ::app::Fuse::Internal::Blender__float2*>(__this->_blender)->Weight(__this->Velocity(), (double)(float)(1.0 - ::app::Uno::Math__Min_10(NULL, 1.0, (double)__this->Damping() * elapsed))));
}

}}}
