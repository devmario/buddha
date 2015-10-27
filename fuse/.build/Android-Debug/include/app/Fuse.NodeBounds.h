// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NODE_BOUNDS_H__
#define __APP_FUSE_NODE_BOUNDS_H__

#include <app/Uno.Geometry.Box.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct FastMatrix; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Geometry { struct Ray; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }

namespace app {
namespace Fuse {

struct NodeBounds;

extern ::uStaticStrong< NodeBounds*> NodeBounds___empty;
extern ::uStaticStrong< NodeBounds*> NodeBounds___infinite;

struct NodeBounds__uType : ::uClassType
{
};

NodeBounds__uType* NodeBounds__typeof();

void NodeBounds___ObjInit(NodeBounds* __this);
void NodeBounds___TypeInit(::uStatic* __this);
NodeBounds* NodeBounds__AddRect(NodeBounds* __this, ::app::Uno::Float2 mn, ::app::Uno::Float2 mx);
NodeBounds* NodeBounds__Box(::uStatic* __this, ::app::Uno::Geometry::Box a);
bool NodeBounds__ContainsPoint(NodeBounds* __this, ::app::Uno::Float2 pt);
NodeBounds* NodeBounds__get_Empty(::uStatic* __this);
NodeBounds* NodeBounds__get_Infinite(::uStatic* __this);
bool NodeBounds__get_IsEmpty(NodeBounds* __this);
bool NodeBounds__get_IsInfinite(NodeBounds* __this);
bool NodeBounds__IntersectsRay(NodeBounds* __this, ::app::Uno::Geometry::Ray ray);
NodeBounds* NodeBounds__Merge(NodeBounds* __this, NodeBounds* nb, ::app::Fuse::FastMatrix* trans);
NodeBounds* NodeBounds__MergeChild(NodeBounds* __this, ::app::Fuse::Node* child, NodeBounds* nb);
NodeBounds* NodeBounds__New_1(::uStatic* __this);
NodeBounds* NodeBounds__Rect(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b);
NodeBounds* NodeBounds__Rect_1(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b);

struct NodeBounds : ::uObject
{
    bool _isEmpty;
    ::app::Uno::Geometry::Box _box;
    bool _isInfinite;

    void _ObjInit() { NodeBounds___ObjInit(this); }
    NodeBounds* AddRect(::app::Uno::Float2 mn, ::app::Uno::Float2 mx);
    bool ContainsPoint(::app::Uno::Float2 pt);
    bool IsEmpty() { return NodeBounds__get_IsEmpty(this); }
    bool IsInfinite() { return NodeBounds__get_IsInfinite(this); }
    bool IntersectsRay(::app::Uno::Geometry::Ray ray);
    NodeBounds* Merge(NodeBounds* nb, ::app::Fuse::FastMatrix* trans) { return NodeBounds__Merge(this, nb, trans); }
    NodeBounds* MergeChild(::app::Fuse::Node* child, NodeBounds* nb) { return NodeBounds__MergeChild(this, child, nb); }
};

}}

#include <app/Uno.Float2.h>
#include <app/Uno.Geometry.Ray.h>

namespace app {
namespace Fuse {

inline NodeBounds* NodeBounds::AddRect(::app::Uno::Float2 mn, ::app::Uno::Float2 mx) { return NodeBounds__AddRect(this, mn, mx); }
inline bool NodeBounds::ContainsPoint(::app::Uno::Float2 pt) { return NodeBounds__ContainsPoint(this, pt); }
inline bool NodeBounds::IntersectsRay(::app::Uno::Geometry::Ray ray) { return NodeBounds__IntersectsRay(this, ray); }

}}


#endif
