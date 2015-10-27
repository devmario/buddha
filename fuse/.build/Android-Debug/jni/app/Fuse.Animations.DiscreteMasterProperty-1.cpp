#include <app/Fuse.Animations.DiscreteMasterProperty__bool.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__float.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__float4.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MasterBase__bool.h>
#include <app/Fuse.Animations.MasterBase__float.h>
#include <app/Fuse.Animations.MasterBase__float4.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MixerBase.h>
#include <app/Fuse.Animations.MixerHandle__bool.h>
#include <app/Fuse.Animations.MixerHandle__float.h>
#include <app/Fuse.Animations.MixerHandle__float4.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_Visibility.h>
#include <app/Fuse.Elements.Visibility.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_bool_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_float_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_float4_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Elements-6d92b8d4.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_bool_.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-de9d0662.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_float_.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_float4_.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
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

DiscreteMasterProperty__bool__uType* DiscreteMasterProperty__bool__typeof()
{
    static ::uStaticStrong<DiscreteMasterProperty__bool__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteMasterProperty__bool__uType*)::uAllocClassType(sizeof(DiscreteMasterProperty__bool__uType), "Fuse.Animations.DiscreteMasterProperty<bool>", false, 2, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterProperty__bool__typeof());
    type->__fp_OnComplete = (void(*)(::app::Fuse::Animations::MasterBase__bool*))DiscreteMasterProperty__bool__OnComplete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(DiscreteMasterProperty__bool__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(DiscreteMasterProperty__bool__uType, __interface_1));

    return type;
}

void DiscreteMasterProperty__bool___ObjInit_2(DiscreteMasterProperty__bool* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterProperty__bool___ObjInit_1(__this, property, mixerBase);
}

DiscreteMasterProperty__bool* DiscreteMasterProperty__bool__New_1(::uStatic* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    DiscreteMasterProperty__bool* inst = (DiscreteMasterProperty__bool*)::uAllocObject(sizeof(DiscreteMasterProperty__bool), DiscreteMasterProperty__bool__typeof());
    inst->_ObjInit_2(property, mixerBase);
    return inst;
}

void DiscreteMasterProperty__bool__OnComplete(DiscreteMasterProperty__bool* __this)
{
    bool nv = __this->RestValue();
    float str = 0.5f;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_bool_ enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->Handles)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Animations::MixerHandle__bool* v = enum_123.Current();

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(v)->HasValue() && (::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(v)->Strength > str))
        {
            nv = ::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(v)->Value;
            str = v->Strength;
        }
    }

    ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Property)->Set(nv, (::uObject*)__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteMasterProperty__float__uType* DiscreteMasterProperty__float__typeof()
{
    static ::uStaticStrong<DiscreteMasterProperty__float__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteMasterProperty__float__uType*)::uAllocClassType(sizeof(DiscreteMasterProperty__float__uType), "Fuse.Animations.DiscreteMasterProperty<float>", false, 2, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterProperty__float__typeof());
    type->__fp_OnComplete = (void(*)(::app::Fuse::Animations::MasterBase__float*))DiscreteMasterProperty__float__OnComplete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(DiscreteMasterProperty__float__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(DiscreteMasterProperty__float__uType, __interface_1));

    return type;
}

void DiscreteMasterProperty__float___ObjInit_2(DiscreteMasterProperty__float* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterProperty__float___ObjInit_1(__this, property, mixerBase);
}

DiscreteMasterProperty__float* DiscreteMasterProperty__float__New_1(::uStatic* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    DiscreteMasterProperty__float* inst = (DiscreteMasterProperty__float*)::uAllocObject(sizeof(DiscreteMasterProperty__float), DiscreteMasterProperty__float__typeof());
    inst->_ObjInit_2(property, mixerBase);
    return inst;
}

void DiscreteMasterProperty__float__OnComplete(DiscreteMasterProperty__float* __this)
{
    float nv = __this->RestValue();
    float str = 0.5f;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_float_ enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(__this->Handles)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Animations::MixerHandle__float* v = enum_123.Current();

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__float*>(v)->HasValue() && (::uPtr< ::app::Fuse::Animations::MixerHandle__float*>(v)->Strength > str))
        {
            nv = ::uPtr< ::app::Fuse::Animations::MixerHandle__float*>(v)->Value;
            str = v->Strength;
        }
    }

    ::uPtr< ::app::Uno::UX::Property__float*>(__this->Property)->Set(nv, (::uObject*)__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteMasterProperty__float4__uType* DiscreteMasterProperty__float4__typeof()
{
    static ::uStaticStrong<DiscreteMasterProperty__float4__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteMasterProperty__float4__uType*)::uAllocClassType(sizeof(DiscreteMasterProperty__float4__uType), "Fuse.Animations.DiscreteMasterProperty<float4>", false, 2, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterProperty__float4__typeof());
    type->__fp_OnComplete = (void(*)(::app::Fuse::Animations::MasterBase__float4*))DiscreteMasterProperty__float4__OnComplete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(DiscreteMasterProperty__float4__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(DiscreteMasterProperty__float4__uType, __interface_1));

    return type;
}

void DiscreteMasterProperty__float4___ObjInit_2(DiscreteMasterProperty__float4* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterProperty__float4___ObjInit_1(__this, property, mixerBase);
}

DiscreteMasterProperty__float4* DiscreteMasterProperty__float4__New_1(::uStatic* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    DiscreteMasterProperty__float4* inst = (DiscreteMasterProperty__float4*)::uAllocObject(sizeof(DiscreteMasterProperty__float4), DiscreteMasterProperty__float4__typeof());
    inst->_ObjInit_2(property, mixerBase);
    return inst;
}

void DiscreteMasterProperty__float4__OnComplete(DiscreteMasterProperty__float4* __this)
{
    ::app::Uno::Float4 nv = __this->RestValue();
    float str = 0.5f;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_float4_ enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->Handles)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Animations::MixerHandle__float4* v = enum_123.Current();

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(v)->HasValue() && (::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(v)->Strength > str))
        {
            nv = ::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(v)->Value;
            str = v->Strength;
        }
    }

    ::uPtr< ::app::Uno::UX::Property__float4*>(__this->Property)->Set(nv, (::uObject*)__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteMasterProperty__Fuse_Elements_Visibility__uType* DiscreteMasterProperty__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<DiscreteMasterProperty__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteMasterProperty__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(DiscreteMasterProperty__Fuse_Elements_Visibility__uType), "Fuse.Animations.DiscreteMasterProperty<Fuse.Elements.Visibility>", false, 2, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility__typeof());
    type->__fp_OnComplete = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility*))DiscreteMasterProperty__Fuse_Elements_Visibility__OnComplete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(DiscreteMasterProperty__Fuse_Elements_Visibility__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(DiscreteMasterProperty__Fuse_Elements_Visibility__uType, __interface_1));

    return type;
}

void DiscreteMasterProperty__Fuse_Elements_Visibility___ObjInit_2(DiscreteMasterProperty__Fuse_Elements_Visibility* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility___ObjInit_1(__this, property, mixerBase);
}

DiscreteMasterProperty__Fuse_Elements_Visibility* DiscreteMasterProperty__Fuse_Elements_Visibility__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    DiscreteMasterProperty__Fuse_Elements_Visibility* inst = (DiscreteMasterProperty__Fuse_Elements_Visibility*)::uAllocObject(sizeof(DiscreteMasterProperty__Fuse_Elements_Visibility), DiscreteMasterProperty__Fuse_Elements_Visibility__typeof());
    inst->_ObjInit_2(property, mixerBase);
    return inst;
}

void DiscreteMasterProperty__Fuse_Elements_Visibility__OnComplete(DiscreteMasterProperty__Fuse_Elements_Visibility* __this)
{
    int nv = __this->RestValue();
    float str = 0.5f;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_ enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*>(__this->Handles)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* v = enum_123.Current();

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(v)->HasValue() && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(v)->Strength > str))
        {
            nv = ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(v)->Value;
            str = v->Strength;
        }
    }

    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Visibility*>(__this->Property)->Set(nv, (::uObject*)__this);
}

}}}
