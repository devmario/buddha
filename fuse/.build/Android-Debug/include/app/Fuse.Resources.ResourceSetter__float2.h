// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_RESOURCE_SETTER__FLOAT2_H__
#define __APP_FUSE_RESOURCES_RESOURCE_SETTER__FLOAT2_H__

#include <app/Fuse.Behavior.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Resources {

struct ResourceSetter__float2;

struct ResourceSetter__float2__uType : ::app::Fuse::Behavior__uType
{
};

ResourceSetter__float2__uType* ResourceSetter__float2__typeof();

void ResourceSetter__float2__OnChanged(ResourceSetter__float2* __this);
void ResourceSetter__float2__OnRooted(ResourceSetter__float2* __this, ::app::Fuse::Node* n);
void ResourceSetter__float2__OnUnrooted(ResourceSetter__float2* __this, ::app::Fuse::Node* n);

struct ResourceSetter__float2 : ::app::Fuse::Behavior
{
    ::uStrong< ::uString*> _key;
    ::app::Uno::Float2 _value;
    ::uStrong< ::app::Fuse::Node*> _node;

    void OnChanged() { ResourceSetter__float2__OnChanged(this); }
};

}}}


#endif
