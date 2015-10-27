#include <app/Fuse.DrawArgs.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.DrawHandler.h>
#include <app/Fuse.Entities.Entity.h>
#include <app/Fuse.Entities.Transform3D.h>
#include <app/Fuse.FastMatrix.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.HitTestHandler.h>
#include <app/Fuse.IFrustum.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeBounds.h>
#include <app/Uno.Action__Fuse_Entities_Entity.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.IList__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.ObservableList__Fuse_Entities_Entity.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Geometry.Box.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.Quaternion.h>

namespace app {
namespace Fuse {
namespace Entities {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Entities/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Entity__uType* Entity__typeof()
{
    static ::uStaticStrong<Entity__uType*> type;
    if (type != NULL) return type;

    type = (Entity__uType*)::uAllocClassType(sizeof(Entity__uType), "Fuse.Entities.Entity", false, 1, 4, 0);

    type->SetBaseType(::app::Fuse::Node__typeof());
    type->__fp_Draw = (void(*)(::app::Fuse::Node*, ::app::Fuse::DrawContext*))Entity__Draw;
    type->__fp_get_HitTestBounds = (::app::Fuse::NodeBounds*(*)(::app::Fuse::Node*))Entity__get_HitTestBounds;
    type->__fp_get_LocalBounds = (::app::Uno::Geometry::Box(*)(::app::Fuse::Node*))Entity__get_LocalBounds;
    type->__fp_get_SubNodeCount = (int(*)(::app::Fuse::Node*))Entity__get_SubNodeCount;
    type->__fp_GetSubNode = (::app::Fuse::Node*(*)(::app::Fuse::Node*, int))Entity__GetSubNode;
    type->__fp_OnHitTest = (void(*)(::app::Fuse::Node*, ::app::Fuse::HitTestContext*))Entity__OnHitTest;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Entity__uType, __interface_0));

    type->SetStrongRefs(
        "_children", offsetof(Entity, _children),
        "_frustumComponent", offsetof(Entity, _frustumComponent),
        "ComponentDraw", offsetof(Entity, ComponentDraw),
        "ComponentHitTest", offsetof(Entity, ComponentHitTest));

    return type;
}

void Entity__Draw(Entity* __this, ::app::Fuse::DrawContext* dc)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ComponentDraw, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ComponentDraw)->InvokeVoid< ::uObject*, ::app::Fuse::DrawArgs*>((::uObject*)__this, ::app::Fuse::DrawArgs__New_2(NULL, dc));
    }

    if (__this->HasChildren())
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity*>(__this->_children)->Count(); i++)
        {
            ::uPtr< Entity*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity*>(__this->_children)->Item(i))->Draw(dc);
        }
    }
}

::uObject* Entity__get_Children(Entity* __this)
{
    if (__this->_children == NULL)
    {
        __this->_children = ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Entities_Entity__typeof(), (const void*)Entity__OnChildAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Entities_Entity__typeof(), (const void*)Entity__OnChildRemoved, __this));
    }

    return (::uObject*)__this->_children;
}

bool Entity__get_HasChildren(Entity* __this)
{
    return (__this->_children != NULL) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity*>(__this->_children)->Count() > 0);
}

::app::Fuse::NodeBounds* Entity__get_HitTestBounds(Entity* __this)
{
    return ::app::Fuse::NodeBounds__get_Infinite(NULL);
}

::app::Uno::Geometry::Box Entity__get_LocalBounds(Entity* __this)
{
    return ::app::Uno::Geometry::Box__New_1(NULL, ::app::Uno::Float3__New_1(NULL, 0.0f), ::app::Uno::Float3__New_1(NULL, 0.0f));
}

int Entity__get_SubNodeCount(Entity* __this)
{
    return ::app::Uno::Collections::ICollection__Fuse_Entities_Entity::Count(::uPtr< ::uObject*>(__this->Children()));
}

::app::Fuse::Node* Entity__GetSubNode(Entity* __this, int index)
{
    return (::app::Fuse::Node*)::app::Uno::Collections::IList__Fuse_Entities_Entity::Item(::uPtr< ::uObject*>(__this->Children()), index);
}

void Entity__OnChildAdded(Entity* __this, Entity* c)
{
    ::uPtr< Entity*>(c)->OnAdded((::app::Fuse::Node*)__this);
    __this->_frustumComponent = NULL;
}

void Entity__OnChildRemoved(Entity* __this, Entity* c)
{
    ::uPtr< Entity*>(c)->OnRemoved((::app::Fuse::Node*)__this);
    __this->_frustumComponent = NULL;
}

void Entity__OnHitTest(Entity* __this, ::app::Fuse::HitTestContext* htc)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ComponentHitTest, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ComponentHitTest)->InvokeVoid< ::uObject*, ::app::Fuse::HitTestContext*>((::uObject*)__this, htc);
    }

    if (__this->HasChildren())
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity*>(__this->_children)->Count(); i++)
        {
            ::uPtr< Entity*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity*>(__this->_children)->Item(i))->HitTest(htc);
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Entities/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Transform3D__uType* Transform3D__typeof()
{
    static ::uStaticStrong<Transform3D__uType*> type;
    if (type != NULL) return type;

    type = (Transform3D__uType*)::uAllocClassType(sizeof(Transform3D__uType), "Fuse.Entities.Transform3D", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Transform__typeof());
    type->__fp_AppendTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*, float))Transform3D__AppendTo;
    type->__fp_get_IsFlat = (bool(*)(::app::Fuse::Transform*))Transform3D__get_IsFlat;
    type->__fp_OnAdded = (void(*)(::app::Fuse::Transform*, ::app::Fuse::Node*))Transform3D__OnAdded;
    type->__fp_OnRemoved = (void(*)(::app::Fuse::Transform*, ::app::Fuse::Node*))Transform3D__OnRemoved;
    type->__fp_PrependTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*))Transform3D__PrependTo;

    type->SetStrongRefs(
        "_Entity", offsetof(Transform3D, _Entity));

    return type;
}

void Transform3D__AppendTo(Transform3D* __this, ::app::Fuse::FastMatrix* m, float weight)
{
    if (::app::Uno::Float3__op_Inequality(NULL, __this->Scaling(), ::app::Uno::Float3__New_1(NULL, 1.0f)))
    {
        ::uPtr< ::app::Fuse::FastMatrix*>(m)->AppendScale(::app::Uno::Math__Lerp_3(NULL, ::app::Uno::Float3__New_1(NULL, 1.0f), __this->Scaling(), weight));
    }

    if (::app::Uno::Float4__op_Inequality(NULL, __this->RotationQuaternion(), ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f)))
    {
        m->AppendRotationQuaternion(::app::Uno::Float4__op_Multiply_2(NULL, __this->RotationQuaternion(), weight));
    }

    if (::app::Uno::Float3__op_Inequality(NULL, __this->Position(), ::app::Uno::Float3__New_1(NULL, 0.0f)))
    {
        m->AppendTranslation(::app::Uno::Float3__op_Multiply_2(NULL, __this->Position(), weight));
    }
}

::app::Fuse::Entities::Entity* Transform3D__get_Entity(Transform3D* __this)
{
    return __this->_Entity;
}

bool Transform3D__get_IsFlat(Transform3D* __this)
{
    return ((::app::Uno::Math__Abs_8(NULL, __this->RotationDegrees().X) < 1e-05f) && (::app::Uno::Math__Abs_8(NULL, __this->RotationDegrees().Y) < 1e-05f)) && (::app::Uno::Math__Abs_8(NULL, __this->Position().Z) < 1e-05f);
}

::app::Uno::Float3 Transform3D__get_Position(Transform3D* __this)
{
    return __this->position;
}

::app::Uno::Float3 Transform3D__get_RotationDegrees(Transform3D* __this)
{
    return __this->rotationDegrees;
}

::app::Uno::Float4 Transform3D__get_RotationQuaternion(Transform3D* __this)
{
    return __this->rotationQuaternion;
}

::app::Uno::Float3 Transform3D__get_Scaling(Transform3D* __this)
{
    return __this->scale;
}

void Transform3D__InvalidateLocal(Transform3D* __this)
{
    __this->OnMatrixChanged();
}

void Transform3D__OnAdded(Transform3D* __this, ::app::Fuse::Node* n)
{
    __this->Entity(::uAs< ::app::Fuse::Entities::Entity*>(n, ::app::Fuse::Entities::Entity__typeof()));
}

void Transform3D__OnRemoved(Transform3D* __this, ::app::Fuse::Node* n)
{
    __this->Entity(NULL);
}

void Transform3D__PrependTo(Transform3D* __this, ::app::Fuse::FastMatrix* m)
{
    if (::app::Uno::Float3__op_Inequality(NULL, __this->Position(), ::app::Uno::Float3__New_1(NULL, 0.0f)))
    {
        ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependTranslation(__this->Position());
    }

    if (::app::Uno::Float4__op_Inequality(NULL, __this->RotationQuaternion(), ::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f)))
    {
        m->PrependRotationQuaternion(__this->RotationQuaternion());
    }

    if (::app::Uno::Float3__op_Inequality(NULL, __this->Scaling(), ::app::Uno::Float3__New_1(NULL, 1.0f)))
    {
        m->PrependScale(__this->Scaling());
    }
}

void Transform3D__set_Entity(Transform3D* __this, ::app::Fuse::Entities::Entity* value)
{
    __this->_Entity = value;
}

void Transform3D__set_Position(Transform3D* __this, ::app::Uno::Float3 value)
{
    if (::app::Uno::Float3__op_Inequality(NULL, __this->position, value))
    {
        __this->position = value;
        __this->InvalidateLocal();
    }
}

void Transform3D__set_RotationDegrees(Transform3D* __this, ::app::Uno::Float3 value)
{
    __this->rotationDegrees = value;
    __this->rotationQuaternion = ::app::Uno::Quaternion__FromEulerAngleDegrees(NULL, value);
    __this->InvalidateLocal();
}

void Transform3D__set_RotationQuaternion(Transform3D* __this, ::app::Uno::Float4 value)
{
    __this->rotationQuaternion = value;
    __this->rotationDegrees = ::app::Uno::Quaternion__ToEulerAngleDegrees(NULL, value);
    __this->InvalidateLocal();
}

void Transform3D__set_Scaling(Transform3D* __this, ::app::Uno::Float3 value)
{
    __this->scale = value;
    __this->InvalidateLocal();
}

}}}
