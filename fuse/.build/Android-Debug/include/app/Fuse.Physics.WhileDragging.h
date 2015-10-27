// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Physics/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_PHYSICS_WHILE_DRAGGING_H__
#define __APP_FUSE_PHYSICS_WHILE_DRAGGING_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Physics {

struct WhileDragging;

struct WhileDragging__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

WhileDragging__uType* WhileDragging__typeof();

void WhileDragging__Begin(::uStatic* __this, ::app::Fuse::Node* n);
void WhileDragging__End(::uStatic* __this, ::app::Fuse::Node* n);

struct WhileDragging : ::app::Fuse::Triggers::Trigger
{
};

}}}


#endif
