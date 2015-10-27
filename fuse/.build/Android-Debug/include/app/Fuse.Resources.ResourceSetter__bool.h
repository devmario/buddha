// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_RESOURCE_SETTER__BOOL_H__
#define __APP_FUSE_RESOURCES_RESOURCE_SETTER__BOOL_H__

#include <app/Fuse.Behavior.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Resources {

struct ResourceSetter__bool;

struct ResourceSetter__bool__uType : ::app::Fuse::Behavior__uType
{
};

ResourceSetter__bool__uType* ResourceSetter__bool__typeof();

void ResourceSetter__bool__OnChanged(ResourceSetter__bool* __this);
void ResourceSetter__bool__OnRooted(ResourceSetter__bool* __this, ::app::Fuse::Node* n);
void ResourceSetter__bool__OnUnrooted(ResourceSetter__bool* __this, ::app::Fuse::Node* n);

struct ResourceSetter__bool : ::app::Fuse::Behavior
{
    ::uStrong< ::uString*> _key;
    bool _value;
    ::uStrong< ::app::Fuse::Node*> _node;

    void OnChanged() { ResourceSetter__bool__OnChanged(this); }
};

}}}


#endif
