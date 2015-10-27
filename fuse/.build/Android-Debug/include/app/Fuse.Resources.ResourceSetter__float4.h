// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_RESOURCE_SETTER__FLOAT4_H__
#define __APP_FUSE_RESOURCES_RESOURCE_SETTER__FLOAT4_H__

#include <app/Fuse.Behavior.h>
#include <app/Uno.Float4.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Resources {

struct ResourceSetter__float4;

struct ResourceSetter__float4__uType : ::app::Fuse::Behavior__uType
{
};

ResourceSetter__float4__uType* ResourceSetter__float4__typeof();

void ResourceSetter__float4__OnChanged(ResourceSetter__float4* __this);
void ResourceSetter__float4__OnRooted(ResourceSetter__float4* __this, ::app::Fuse::Node* n);
void ResourceSetter__float4__OnUnrooted(ResourceSetter__float4* __this, ::app::Fuse::Node* n);

struct ResourceSetter__float4 : ::app::Fuse::Behavior
{
    ::uStrong< ::uString*> _key;
    ::app::Uno::Float4 _value;
    ::uStrong< ::app::Fuse::Node*> _node;

    void OnChanged() { ResourceSetter__float4__OnChanged(this); }
};

}}}


#endif
