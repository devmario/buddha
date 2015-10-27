// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Entities/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_TRANSFORM3_D_H__
#define __APP_FUSE_ENTITIES_TRANSFORM3_D_H__

#include <app/Fuse.Transform.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }
namespace app { namespace Fuse { struct FastMatrix; } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Entities {

struct Transform3D;

struct Transform3D__uType : ::app::Fuse::Transform__uType
{
};

Transform3D__uType* Transform3D__typeof();

void Transform3D__AppendTo(Transform3D* __this, ::app::Fuse::FastMatrix* m, float weight);
::app::Fuse::Entities::Entity* Transform3D__get_Entity(Transform3D* __this);
bool Transform3D__get_IsFlat(Transform3D* __this);
::app::Uno::Float3 Transform3D__get_Position(Transform3D* __this);
::app::Uno::Float3 Transform3D__get_RotationDegrees(Transform3D* __this);
::app::Uno::Float4 Transform3D__get_RotationQuaternion(Transform3D* __this);
::app::Uno::Float3 Transform3D__get_Scaling(Transform3D* __this);
void Transform3D__InvalidateLocal(Transform3D* __this);
void Transform3D__OnAdded(Transform3D* __this, ::app::Fuse::Node* n);
void Transform3D__OnRemoved(Transform3D* __this, ::app::Fuse::Node* n);
void Transform3D__PrependTo(Transform3D* __this, ::app::Fuse::FastMatrix* m);
void Transform3D__set_Entity(Transform3D* __this, ::app::Fuse::Entities::Entity* value);
void Transform3D__set_Position(Transform3D* __this, ::app::Uno::Float3 value);
void Transform3D__set_RotationDegrees(Transform3D* __this, ::app::Uno::Float3 value);
void Transform3D__set_RotationQuaternion(Transform3D* __this, ::app::Uno::Float4 value);
void Transform3D__set_Scaling(Transform3D* __this, ::app::Uno::Float3 value);

struct Transform3D : ::app::Fuse::Transform
{
    ::app::Uno::Float3 position;
    ::app::Uno::Float4 rotationQuaternion;
    ::app::Uno::Float3 rotationDegrees;
    ::app::Uno::Float3 scale;
    ::uStrong< ::app::Fuse::Entities::Entity*> _Entity;

    ::app::Fuse::Entities::Entity* Entity() { return Transform3D__get_Entity(this); }
    ::app::Uno::Float3 Position() { return Transform3D__get_Position(this); }
    ::app::Uno::Float3 RotationDegrees() { return Transform3D__get_RotationDegrees(this); }
    ::app::Uno::Float4 RotationQuaternion() { return Transform3D__get_RotationQuaternion(this); }
    ::app::Uno::Float3 Scaling() { return Transform3D__get_Scaling(this); }
    void InvalidateLocal() { Transform3D__InvalidateLocal(this); }
    void Entity(::app::Fuse::Entities::Entity* value) { Transform3D__set_Entity(this, value); }
    void Position(::app::Uno::Float3 value) { Transform3D__set_Position(this, value); }
    void RotationDegrees(::app::Uno::Float3 value) { Transform3D__set_RotationDegrees(this, value); }
    void RotationQuaternion(::app::Uno::Float4 value) { Transform3D__set_RotationQuaternion(this, value); }
    void Scaling(::app::Uno::Float3 value) { Transform3D__set_Scaling(this, value); }
};

}}}


#endif
