// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_RESOURCE_SETTER__STRING_H__
#define __APP_FUSE_RESOURCES_RESOURCE_SETTER__STRING_H__

#include <app/Fuse.Behavior.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Resources {

struct ResourceSetter__string;

struct ResourceSetter__string__uType : ::app::Fuse::Behavior__uType
{
};

ResourceSetter__string__uType* ResourceSetter__string__typeof();

void ResourceSetter__string__OnChanged(ResourceSetter__string* __this);
void ResourceSetter__string__OnRooted(ResourceSetter__string* __this, ::app::Fuse::Node* n);
void ResourceSetter__string__OnUnrooted(ResourceSetter__string* __this, ::app::Fuse::Node* n);

struct ResourceSetter__string : ::app::Fuse::Behavior
{
    ::uStrong< ::uString*> _key;
    ::uStrong< ::uString*> _value;
    ::uStrong< ::app::Fuse::Node*> _node;

    void OnChanged() { ResourceSetter__string__OnChanged(this); }
};

}}}


#endif
