// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_RESOURCE_SETTER__OBJECT_H__
#define __APP_FUSE_RESOURCES_RESOURCE_SETTER__OBJECT_H__

#include <app/Fuse.Behavior.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Resources {

struct ResourceSetter__object;

struct ResourceSetter__object__uType : ::app::Fuse::Behavior__uType
{
};

ResourceSetter__object__uType* ResourceSetter__object__typeof();

void ResourceSetter__object__OnChanged(ResourceSetter__object* __this);
void ResourceSetter__object__OnRooted(ResourceSetter__object* __this, ::app::Fuse::Node* n);
void ResourceSetter__object__OnUnrooted(ResourceSetter__object* __this, ::app::Fuse::Node* n);

struct ResourceSetter__object : ::app::Fuse::Behavior
{
    ::uStrong< ::uString*> _key;
    ::uStrong< ::uObject*> _value;
    ::uStrong< ::app::Fuse::Node*> _node;

    void OnChanged() { ResourceSetter__object__OnChanged(this); }
};

}}}


#endif
