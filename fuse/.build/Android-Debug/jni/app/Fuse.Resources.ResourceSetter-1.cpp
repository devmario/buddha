#include <app/Fuse.Node.h>
#include <app/Fuse.Resources.ResourceSetter__bool.h>
#include <app/Fuse.Resources.ResourceSetter__float.h>
#include <app/Fuse.Resources.ResourceSetter__float2.h>
#include <app/Fuse.Resources.ResourceSetter__float3.h>
#include <app/Fuse.Resources.ResourceSetter__float4.h>
#include <app/Fuse.Resources.ResourceSetter__object.h>
#include <app/Fuse.Resources.ResourceSetter__string.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Resources {

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceSetter__bool__uType* ResourceSetter__bool__typeof()
{
    static ::uStaticStrong<ResourceSetter__bool__uType*> type;
    if (type != NULL) return type;

    type = (ResourceSetter__bool__uType*)::uAllocClassType(sizeof(ResourceSetter__bool__uType), "Fuse.Resources.ResourceSetter<bool>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__bool__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__bool__OnUnrooted;

    type->SetStrongRefs(
        "_key", offsetof(ResourceSetter__bool, _key),
        "_node", offsetof(ResourceSetter__bool, _node));

    return type;
}

void ResourceSetter__bool__OnChanged(ResourceSetter__bool* __this)
{
    if ((__this->_node != NULL) && ::app::Uno::String__op_Inequality(NULL, __this->_key, NULL))
    {
        ::uPtr< ::app::Fuse::Node*>(__this->_node)->SetResource(__this->_key, ::uBox(::app::Uno::Bool__typeof(), __this->_value));
    }
}

void ResourceSetter__bool__OnRooted(ResourceSetter__bool* __this, ::app::Fuse::Node* n)
{
    __this->_node = n;
    __this->OnChanged();
}

void ResourceSetter__bool__OnUnrooted(ResourceSetter__bool* __this, ::app::Fuse::Node* n)
{
    __this->_node = NULL;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceSetter__float__uType* ResourceSetter__float__typeof()
{
    static ::uStaticStrong<ResourceSetter__float__uType*> type;
    if (type != NULL) return type;

    type = (ResourceSetter__float__uType*)::uAllocClassType(sizeof(ResourceSetter__float__uType), "Fuse.Resources.ResourceSetter<float>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__float__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__float__OnUnrooted;

    type->SetStrongRefs(
        "_key", offsetof(ResourceSetter__float, _key),
        "_node", offsetof(ResourceSetter__float, _node));

    return type;
}

void ResourceSetter__float__OnChanged(ResourceSetter__float* __this)
{
    if ((__this->_node != NULL) && ::app::Uno::String__op_Inequality(NULL, __this->_key, NULL))
    {
        ::uPtr< ::app::Fuse::Node*>(__this->_node)->SetResource(__this->_key, ::uBox(::app::Uno::Float__typeof(), __this->_value));
    }
}

void ResourceSetter__float__OnRooted(ResourceSetter__float* __this, ::app::Fuse::Node* n)
{
    __this->_node = n;
    __this->OnChanged();
}

void ResourceSetter__float__OnUnrooted(ResourceSetter__float* __this, ::app::Fuse::Node* n)
{
    __this->_node = NULL;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceSetter__float2__uType* ResourceSetter__float2__typeof()
{
    static ::uStaticStrong<ResourceSetter__float2__uType*> type;
    if (type != NULL) return type;

    type = (ResourceSetter__float2__uType*)::uAllocClassType(sizeof(ResourceSetter__float2__uType), "Fuse.Resources.ResourceSetter<float2>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__float2__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__float2__OnUnrooted;

    type->SetStrongRefs(
        "_key", offsetof(ResourceSetter__float2, _key),
        "_node", offsetof(ResourceSetter__float2, _node));

    return type;
}

void ResourceSetter__float2__OnChanged(ResourceSetter__float2* __this)
{
    if ((__this->_node != NULL) && ::app::Uno::String__op_Inequality(NULL, __this->_key, NULL))
    {
        ::uPtr< ::app::Fuse::Node*>(__this->_node)->SetResource(__this->_key, ::uBox(::app::Uno::Float2__typeof(), __this->_value));
    }
}

void ResourceSetter__float2__OnRooted(ResourceSetter__float2* __this, ::app::Fuse::Node* n)
{
    __this->_node = n;
    __this->OnChanged();
}

void ResourceSetter__float2__OnUnrooted(ResourceSetter__float2* __this, ::app::Fuse::Node* n)
{
    __this->_node = NULL;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceSetter__float3__uType* ResourceSetter__float3__typeof()
{
    static ::uStaticStrong<ResourceSetter__float3__uType*> type;
    if (type != NULL) return type;

    type = (ResourceSetter__float3__uType*)::uAllocClassType(sizeof(ResourceSetter__float3__uType), "Fuse.Resources.ResourceSetter<float3>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__float3__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__float3__OnUnrooted;

    type->SetStrongRefs(
        "_key", offsetof(ResourceSetter__float3, _key),
        "_node", offsetof(ResourceSetter__float3, _node));

    return type;
}

void ResourceSetter__float3__OnChanged(ResourceSetter__float3* __this)
{
    if ((__this->_node != NULL) && ::app::Uno::String__op_Inequality(NULL, __this->_key, NULL))
    {
        ::uPtr< ::app::Fuse::Node*>(__this->_node)->SetResource(__this->_key, ::uBox(::app::Uno::Float3__typeof(), __this->_value));
    }
}

void ResourceSetter__float3__OnRooted(ResourceSetter__float3* __this, ::app::Fuse::Node* n)
{
    __this->_node = n;
    __this->OnChanged();
}

void ResourceSetter__float3__OnUnrooted(ResourceSetter__float3* __this, ::app::Fuse::Node* n)
{
    __this->_node = NULL;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceSetter__float4__uType* ResourceSetter__float4__typeof()
{
    static ::uStaticStrong<ResourceSetter__float4__uType*> type;
    if (type != NULL) return type;

    type = (ResourceSetter__float4__uType*)::uAllocClassType(sizeof(ResourceSetter__float4__uType), "Fuse.Resources.ResourceSetter<float4>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__float4__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__float4__OnUnrooted;

    type->SetStrongRefs(
        "_key", offsetof(ResourceSetter__float4, _key),
        "_node", offsetof(ResourceSetter__float4, _node));

    return type;
}

void ResourceSetter__float4__OnChanged(ResourceSetter__float4* __this)
{
    if ((__this->_node != NULL) && ::app::Uno::String__op_Inequality(NULL, __this->_key, NULL))
    {
        ::uPtr< ::app::Fuse::Node*>(__this->_node)->SetResource(__this->_key, ::uBox(::app::Uno::Float4__typeof(), __this->_value));
    }
}

void ResourceSetter__float4__OnRooted(ResourceSetter__float4* __this, ::app::Fuse::Node* n)
{
    __this->_node = n;
    __this->OnChanged();
}

void ResourceSetter__float4__OnUnrooted(ResourceSetter__float4* __this, ::app::Fuse::Node* n)
{
    __this->_node = NULL;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceSetter__object__uType* ResourceSetter__object__typeof()
{
    static ::uStaticStrong<ResourceSetter__object__uType*> type;
    if (type != NULL) return type;

    type = (ResourceSetter__object__uType*)::uAllocClassType(sizeof(ResourceSetter__object__uType), "Fuse.Resources.ResourceSetter<object>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__object__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__object__OnUnrooted;

    type->SetStrongRefs(
        "_key", offsetof(ResourceSetter__object, _key),
        "_node", offsetof(ResourceSetter__object, _node),
        "_value", offsetof(ResourceSetter__object, _value));

    return type;
}

void ResourceSetter__object__OnChanged(ResourceSetter__object* __this)
{
    if ((__this->_node != NULL) && ::app::Uno::String__op_Inequality(NULL, __this->_key, NULL))
    {
        ::uPtr< ::app::Fuse::Node*>(__this->_node)->SetResource(__this->_key, __this->_value);
    }
}

void ResourceSetter__object__OnRooted(ResourceSetter__object* __this, ::app::Fuse::Node* n)
{
    __this->_node = n;
    __this->OnChanged();
}

void ResourceSetter__object__OnUnrooted(ResourceSetter__object* __this, ::app::Fuse::Node* n)
{
    __this->_node = NULL;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResourceSetter__string__uType* ResourceSetter__string__typeof()
{
    static ::uStaticStrong<ResourceSetter__string__uType*> type;
    if (type != NULL) return type;

    type = (ResourceSetter__string__uType*)::uAllocClassType(sizeof(ResourceSetter__string__uType), "Fuse.Resources.ResourceSetter<string>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__string__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ResourceSetter__string__OnUnrooted;

    type->SetStrongRefs(
        "_key", offsetof(ResourceSetter__string, _key),
        "_node", offsetof(ResourceSetter__string, _node),
        "_value", offsetof(ResourceSetter__string, _value));

    return type;
}

void ResourceSetter__string__OnChanged(ResourceSetter__string* __this)
{
    if ((__this->_node != NULL) && ::app::Uno::String__op_Inequality(NULL, __this->_key, NULL))
    {
        ::uPtr< ::app::Fuse::Node*>(__this->_node)->SetResource(__this->_key, (::uObject*)__this->_value);
    }
}

void ResourceSetter__string__OnRooted(ResourceSetter__string* __this, ::app::Fuse::Node* n)
{
    __this->_node = n;
    __this->OnChanged();
}

void ResourceSetter__string__OnUnrooted(ResourceSetter__string* __this, ::app::Fuse::Node* n)
{
    __this->_node = NULL;
}

}}}
