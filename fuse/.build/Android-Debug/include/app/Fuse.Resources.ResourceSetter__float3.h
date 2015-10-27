// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_RESOURCE_SETTER__FLOAT3_H__
#define __APP_FUSE_RESOURCES_RESOURCE_SETTER__FLOAT3_H__

#include <app/Fuse.Behavior.h>
#include <app/Uno.Float3.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Resources {

struct ResourceSetter__float3;

struct ResourceSetter__float3__uType : ::app::Fuse::Behavior__uType
{
};

ResourceSetter__float3__uType* ResourceSetter__float3__typeof();

void ResourceSetter__float3__OnChanged(ResourceSetter__float3* __this);
void ResourceSetter__float3__OnRooted(ResourceSetter__float3* __this, ::app::Fuse::Node* n);
void ResourceSetter__float3__OnUnrooted(ResourceSetter__float3* __this, ::app::Fuse::Node* n);

struct ResourceSetter__float3 : ::app::Fuse::Behavior
{
    ::uStrong< ::uString*> _key;
    ::app::Uno::Float3 _value;
    ::uStrong< ::app::Fuse::Node*> _node;

    void OnChanged() { ResourceSetter__float3__OnChanged(this); }
};

}}}


#endif
