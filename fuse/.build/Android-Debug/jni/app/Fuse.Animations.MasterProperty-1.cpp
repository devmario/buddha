#include <app/Fuse.Animations.MasterProperty__bool.h>
#include <app/Fuse.Animations.MasterProperty__float.h>
#include <app/Fuse.Animations.MasterProperty__float4.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MixerBase.h>
#include <app/Fuse.Elements.Visibility.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Object.h>
#include <app/Uno.UX.Property__bool.h>
#include <app/Uno.UX.Property__float.h>
#include <app/Uno.UX.Property__float4.h>
#include <app/Uno.UX.Property__Fuse_Elements_Visibility.h>

namespace app {
namespace Fuse {
namespace Animations {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__bool__uType* MasterProperty__bool__typeof()
{
    static ::uStaticStrong<MasterProperty__bool__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__bool__uType*)::uAllocClassType(sizeof(MasterProperty__bool__uType), "Fuse.Animations.MasterProperty<bool>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__bool__typeof());
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__bool*))MasterProperty__bool__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__bool__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__bool__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__bool__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__bool, Property));

    return type;
}

void MasterProperty__bool___ObjInit_1(MasterProperty__bool* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__bool___ObjInit(__this, mixerBase);
    __this->Property = property;
}

bool MasterProperty__bool__get_RestValue(MasterProperty__bool* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__bool__GetPropertyObject(MasterProperty__bool* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__bool__OnInactive(MasterProperty__bool* __this)
{
    ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__float__uType* MasterProperty__float__typeof()
{
    static ::uStaticStrong<MasterProperty__float__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__float__uType*)::uAllocClassType(sizeof(MasterProperty__float__uType), "Fuse.Animations.MasterProperty<float>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__float__typeof());
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__float*))MasterProperty__float__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__float__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__float__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__float__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__float, Property));

    return type;
}

void MasterProperty__float___ObjInit_1(MasterProperty__float* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__float___ObjInit(__this, mixerBase);
    __this->Property = property;
}

float MasterProperty__float__get_RestValue(MasterProperty__float* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__float*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__float__GetPropertyObject(MasterProperty__float* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__float__OnInactive(MasterProperty__float* __this)
{
    ::uPtr< ::app::Uno::UX::Property__float*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__float4__uType* MasterProperty__float4__typeof()
{
    static ::uStaticStrong<MasterProperty__float4__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__float4__uType*)::uAllocClassType(sizeof(MasterProperty__float4__uType), "Fuse.Animations.MasterProperty<float4>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__float4__typeof());
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__float4*))MasterProperty__float4__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__float4__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__float4__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__float4__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__float4, Property));

    return type;
}

void MasterProperty__float4___ObjInit_1(MasterProperty__float4* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__float4___ObjInit(__this, mixerBase);
    __this->Property = property;
}

::app::Uno::Float4 MasterProperty__float4__get_RestValue(MasterProperty__float4* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__float4*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__float4__GetPropertyObject(MasterProperty__float4* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__float4__OnInactive(MasterProperty__float4* __this)
{
    ::uPtr< ::app::Uno::UX::Property__float4*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MasterProperty__Fuse_Elements_Visibility__uType* MasterProperty__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<MasterProperty__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (MasterProperty__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(MasterProperty__Fuse_Elements_Visibility__uType), "Fuse.Animations.MasterProperty<Fuse.Elements.Visibility>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility__typeof());
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility*))MasterProperty__Fuse_Elements_Visibility__OnInactive;
    type->__interface_1.__fp_GetPropertyObject = (::uObject*(*)(void*))MasterProperty__Fuse_Elements_Visibility__GetPropertyObject;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterProperty__Fuse_Elements_Visibility__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(MasterProperty__Fuse_Elements_Visibility__uType, __interface_1));

    type->SetStrongRefs(
        "Property", offsetof(MasterProperty__Fuse_Elements_Visibility, Property));

    return type;
}

void MasterProperty__Fuse_Elements_Visibility___ObjInit_1(MasterProperty__Fuse_Elements_Visibility* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility___ObjInit(__this, mixerBase);
    __this->Property = property;
}

int MasterProperty__Fuse_Elements_Visibility__get_RestValue(MasterProperty__Fuse_Elements_Visibility* __this)
{
    return ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Visibility*>(__this->Property)->GetRestState();
}

::uObject* MasterProperty__Fuse_Elements_Visibility__GetPropertyObject(MasterProperty__Fuse_Elements_Visibility* __this)
{
    return (::uObject*)__this->Property;
}

void MasterProperty__Fuse_Elements_Visibility__OnInactive(MasterProperty__Fuse_Elements_Visibility* __this)
{
    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Visibility*>(__this->Property)->Set(__this->RestValue(), (::uObject*)__this);
}

}}}
