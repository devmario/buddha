// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Entities/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ENTITIES_ENTITY_H__
#define __APP_FUSE_ENTITIES_ENTITY_H__

#include <app/Fuse.Node.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Fuse { struct NodeBounds; } }
namespace app { namespace Uno { namespace Collections { struct ObservableList__Fuse_Entities_Entity; } } }
namespace app { namespace Uno { namespace Geometry { struct Box; } } }

namespace app {
namespace Fuse {
namespace Entities {

struct Entity;

struct Entity__uType : ::app::Fuse::Node__uType
{
};

Entity__uType* Entity__typeof();

void Entity__Draw(Entity* __this, ::app::Fuse::DrawContext* dc);
::uObject* Entity__get_Children(Entity* __this);
bool Entity__get_HasChildren(Entity* __this);
::app::Fuse::NodeBounds* Entity__get_HitTestBounds(Entity* __this);
::app::Uno::Geometry::Box Entity__get_LocalBounds(Entity* __this);
int Entity__get_SubNodeCount(Entity* __this);
::app::Fuse::Node* Entity__GetSubNode(Entity* __this, int index);
void Entity__OnChildAdded(Entity* __this, Entity* c);
void Entity__OnChildRemoved(Entity* __this, Entity* c);
void Entity__OnHitTest(Entity* __this, ::app::Fuse::HitTestContext* htc);

struct Entity : ::app::Fuse::Node
{
    ::uStrong< ::app::Uno::Collections::ObservableList__Fuse_Entities_Entity*> _children;
    ::uStrong< ::uObject*> _frustumComponent;
    ::uStrong< ::uDelegate*> ComponentDraw;
    ::uStrong< ::uDelegate*> ComponentHitTest;

    ::uObject* Children() { return Entity__get_Children(this); }
    bool HasChildren() { return Entity__get_HasChildren(this); }
    void OnChildAdded(Entity* c) { Entity__OnChildAdded(this, c); }
    void OnChildRemoved(Entity* c) { Entity__OnChildRemoved(this, c); }
};

}}}


#endif
