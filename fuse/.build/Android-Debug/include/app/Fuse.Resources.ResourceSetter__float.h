// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_RESOURCE_SETTER__FLOAT_H__
#define __APP_FUSE_RESOURCES_RESOURCE_SETTER__FLOAT_H__

#include <app/Fuse.Behavior.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Resources {

struct ResourceSetter__float;

struct ResourceSetter__float__uType : ::app::Fuse::Behavior__uType
{
};

ResourceSetter__float__uType* ResourceSetter__float__typeof();

void ResourceSetter__float__OnChanged(ResourceSetter__float* __this);
void ResourceSetter__float__OnRooted(ResourceSetter__float* __this, ::app::Fuse::Node* n);
void ResourceSetter__float__OnUnrooted(ResourceSetter__float* __this, ::app::Fuse::Node* n);

struct ResourceSetter__float : ::app::Fuse::Behavior
{
    ::uStrong< ::uString*> _key;
    float _value;
    ::uStrong< ::app::Fuse::Node*> _node;

    void OnChanged() { ResourceSetter__float__OnChanged(this); }
};

}}}


#endif
