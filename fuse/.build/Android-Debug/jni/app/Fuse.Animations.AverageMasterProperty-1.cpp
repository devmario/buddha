#include <app/Fuse.Animations.AverageMasterProperty__bool.h>
#include <app/Fuse.Animations.AverageMasterProperty__float.h>
#include <app/Fuse.Animations.AverageMasterProperty__float4.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MasterBase__bool.h>
#include <app/Fuse.Animations.MasterBase__float.h>
#include <app/Fuse.Animations.MasterBase__float4.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MasterBase1_GFWResult__bool.h>
#include <app/Fuse.Animations.MasterBase1_GFWResult__float.h>
#include <app/Fuse.Animations.MasterBase1_GFWResult__float4.h>
#include <app/Fuse.Animations.MasterBase1_GFWResult__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MixerBase.h>
#include <app/Fuse.Animations.MixerHandle__bool.h>
#include <app/Fuse.Animations.MixerHandle__float.h>
#include <app/Fuse.Animations.MixerHandle__float4.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MixOp.h>
#include <app/Fuse.Elements.Visibility.h>
#include <app/Fuse.Internal.Blender__bool.h>
#include <app/Fuse.Internal.Blender__float.h>
#include <app/Fuse.Internal.Blender__float4.h>
#include <app/Fuse.Internal.Blender__Fuse_Elements_Visibility.h>
#include <app/Fuse.Internal.BlenderMap.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_bool_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_float_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_float4_.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Elements-6d92b8d4.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
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

AverageMasterProperty__bool__uType* AverageMasterProperty__bool__typeof()
{
    static ::uStaticStrong<AverageMasterProperty__bool__uType*> type;
    if (type != NULL) return type;

    type = (AverageMasterProperty__bool__uType*)::uAllocClassType(sizeof(AverageMasterProperty__bool__uType), "Fuse.Animations.AverageMasterProperty<bool>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterProperty__bool__typeof());
    type->__fp_OnActive = (void(*)(::app::Fuse::Animations::MasterBase__bool*))AverageMasterProperty__bool__OnActive;
    type->__fp_OnComplete = (void(*)(::app::Fuse::Animations::MasterBase__bool*))AverageMasterProperty__bool__OnComplete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(AverageMasterProperty__bool__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(AverageMasterProperty__bool__uType, __interface_1));

    type->SetStrongRefs(
        "blender", offsetof(AverageMasterProperty__bool, blender));

    return type;
}

void AverageMasterProperty__bool___ObjInit_2(AverageMasterProperty__bool* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterProperty__bool___ObjInit_1(__this, property, mixerBase);
}

AverageMasterProperty__bool* AverageMasterProperty__bool__New_1(::uStatic* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterProperty__bool* inst = (AverageMasterProperty__bool*)::uAllocObject(sizeof(AverageMasterProperty__bool), AverageMasterProperty__bool__typeof());
    inst->_ObjInit_2(property, mixerBase);
    return inst;
}

void AverageMasterProperty__bool__OnActive(AverageMasterProperty__bool* __this)
{
    if (__this->blender == NULL)
    {
        __this->blender = ::app::Fuse::Internal::BlenderMap__Get__bool(NULL);
    }
}

void AverageMasterProperty__bool__OnComplete(AverageMasterProperty__bool* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__bool weight = __this->GetFullWeight();
    bool nv = ::uPtr< ::app::Fuse::Internal::Blender__bool*>(__this->blender)->Weight(__this->RestValue(), (double)(weight.Rest / weight.Full));
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__bool* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_bool_*>(__this->Handles)->Item(i);

        if (!::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(v)->HasValue())
        {
            continue;
        }

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(v)->MixOp() == 1)
        {
            nv = ::uPtr< ::app::Fuse::Internal::Blender__bool*>(__this->blender)->Add(nv, ::uPtr< ::app::Fuse::Internal::Blender__bool*>(__this->blender)->Weight(::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(v)->Value, (double)(::uPtr< ::app::Fuse::Animations::MixerHandle__bool*>(v)->Strength / weight.Full)));
        }
        else
        {
            nv = ::uPtr< ::app::Fuse::Internal::Blender__bool*>(__this->blender)->Add(nv, ::uPtr< ::app::Fuse::Internal::Blender__bool*>(__this->blender)->Weight(v->Value, (double)v->Strength));
        }
    }

    ::uPtr< ::app::Uno::UX::Property__bool*>(__this->Property)->Set(nv, (::uObject*)__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AverageMasterProperty__float__uType* AverageMasterProperty__float__typeof()
{
    static ::uStaticStrong<AverageMasterProperty__float__uType*> type;
    if (type != NULL) return type;

    type = (AverageMasterProperty__float__uType*)::uAllocClassType(sizeof(AverageMasterProperty__float__uType), "Fuse.Animations.AverageMasterProperty<float>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterProperty__float__typeof());
    type->__fp_OnActive = (void(*)(::app::Fuse::Animations::MasterBase__float*))AverageMasterProperty__float__OnActive;
    type->__fp_OnComplete = (void(*)(::app::Fuse::Animations::MasterBase__float*))AverageMasterProperty__float__OnComplete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(AverageMasterProperty__float__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(AverageMasterProperty__float__uType, __interface_1));

    type->SetStrongRefs(
        "blender", offsetof(AverageMasterProperty__float, blender));

    return type;
}

void AverageMasterProperty__float___ObjInit_2(AverageMasterProperty__float* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterProperty__float___ObjInit_1(__this, property, mixerBase);
}

AverageMasterProperty__float* AverageMasterProperty__float__New_1(::uStatic* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterProperty__float* inst = (AverageMasterProperty__float*)::uAllocObject(sizeof(AverageMasterProperty__float), AverageMasterProperty__float__typeof());
    inst->_ObjInit_2(property, mixerBase);
    return inst;
}

void AverageMasterProperty__float__OnActive(AverageMasterProperty__float* __this)
{
    if (__this->blender == NULL)
    {
        __this->blender = ::app::Fuse::Internal::BlenderMap__Get__float(NULL);
    }
}

void AverageMasterProperty__float__OnComplete(AverageMasterProperty__float* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__float weight = __this->GetFullWeight();
    float nv = ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->blender)->Weight(__this->RestValue(), (double)(weight.Rest / weight.Full));
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__float* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float_*>(__this->Handles)->Item(i);

        if (!::uPtr< ::app::Fuse::Animations::MixerHandle__float*>(v)->HasValue())
        {
            continue;
        }

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__float*>(v)->MixOp() == 1)
        {
            nv = ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->blender)->Add(nv, ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->blender)->Weight(::uPtr< ::app::Fuse::Animations::MixerHandle__float*>(v)->Value, (double)(::uPtr< ::app::Fuse::Animations::MixerHandle__float*>(v)->Strength / weight.Full)));
        }
        else
        {
            nv = ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->blender)->Add(nv, ::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->blender)->Weight(v->Value, (double)v->Strength));
        }
    }

    ::uPtr< ::app::Uno::UX::Property__float*>(__this->Property)->Set(nv, (::uObject*)__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AverageMasterProperty__float4__uType* AverageMasterProperty__float4__typeof()
{
    static ::uStaticStrong<AverageMasterProperty__float4__uType*> type;
    if (type != NULL) return type;

    type = (AverageMasterProperty__float4__uType*)::uAllocClassType(sizeof(AverageMasterProperty__float4__uType), "Fuse.Animations.AverageMasterProperty<float4>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterProperty__float4__typeof());
    type->__fp_OnActive = (void(*)(::app::Fuse::Animations::MasterBase__float4*))AverageMasterProperty__float4__OnActive;
    type->__fp_OnComplete = (void(*)(::app::Fuse::Animations::MasterBase__float4*))AverageMasterProperty__float4__OnComplete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(AverageMasterProperty__float4__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(AverageMasterProperty__float4__uType, __interface_1));

    type->SetStrongRefs(
        "blender", offsetof(AverageMasterProperty__float4, blender));

    return type;
}

void AverageMasterProperty__float4___ObjInit_2(AverageMasterProperty__float4* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterProperty__float4___ObjInit_1(__this, property, mixerBase);
}

AverageMasterProperty__float4* AverageMasterProperty__float4__New_1(::uStatic* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterProperty__float4* inst = (AverageMasterProperty__float4*)::uAllocObject(sizeof(AverageMasterProperty__float4), AverageMasterProperty__float4__typeof());
    inst->_ObjInit_2(property, mixerBase);
    return inst;
}

void AverageMasterProperty__float4__OnActive(AverageMasterProperty__float4* __this)
{
    if (__this->blender == NULL)
    {
        __this->blender = ::app::Fuse::Internal::BlenderMap__Get__float4(NULL);
    }
}

void AverageMasterProperty__float4__OnComplete(AverageMasterProperty__float4* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__float4 weight = __this->GetFullWeight();
    ::app::Uno::Float4 nv = ::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->blender)->Weight(__this->RestValue(), (double)(weight.Rest / weight.Full));
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__float4* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_float4_*>(__this->Handles)->Item(i);

        if (!::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(v)->HasValue())
        {
            continue;
        }

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(v)->MixOp() == 1)
        {
            nv = ::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->blender)->Add(nv, ::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->blender)->Weight(::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(v)->Value, (double)(::uPtr< ::app::Fuse::Animations::MixerHandle__float4*>(v)->Strength / weight.Full)));
        }
        else
        {
            nv = ::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->blender)->Add(nv, ::uPtr< ::app::Fuse::Internal::Blender__float4*>(__this->blender)->Weight(v->Value, (double)v->Strength));
        }
    }

    ::uPtr< ::app::Uno::UX::Property__float4*>(__this->Property)->Set(nv, (::uObject*)__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AverageMasterProperty__Fuse_Elements_Visibility__uType* AverageMasterProperty__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<AverageMasterProperty__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (AverageMasterProperty__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(AverageMasterProperty__Fuse_Elements_Visibility__uType), "Fuse.Animations.AverageMasterProperty<Fuse.Elements.Visibility>", false, 2, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility__typeof());
    type->__fp_OnActive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility*))AverageMasterProperty__Fuse_Elements_Visibility__OnActive;
    type->__fp_OnComplete = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility*))AverageMasterProperty__Fuse_Elements_Visibility__OnComplete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(AverageMasterProperty__Fuse_Elements_Visibility__uType, __interface_0),
        ::app::Fuse::Animations::MasterPropertyGet__typeof(), offsetof(AverageMasterProperty__Fuse_Elements_Visibility__uType, __interface_1));

    type->SetStrongRefs(
        "blender", offsetof(AverageMasterProperty__Fuse_Elements_Visibility, blender));

    return type;
}

void AverageMasterProperty__Fuse_Elements_Visibility___ObjInit_2(AverageMasterProperty__Fuse_Elements_Visibility* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility___ObjInit_1(__this, property, mixerBase);
}

AverageMasterProperty__Fuse_Elements_Visibility* AverageMasterProperty__Fuse_Elements_Visibility__New_1(::uStatic* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterProperty__Fuse_Elements_Visibility* inst = (AverageMasterProperty__Fuse_Elements_Visibility*)::uAllocObject(sizeof(AverageMasterProperty__Fuse_Elements_Visibility), AverageMasterProperty__Fuse_Elements_Visibility__typeof());
    inst->_ObjInit_2(property, mixerBase);
    return inst;
}

void AverageMasterProperty__Fuse_Elements_Visibility__OnActive(AverageMasterProperty__Fuse_Elements_Visibility* __this)
{
    if (__this->blender == NULL)
    {
        __this->blender = ::app::Fuse::Internal::BlenderMap__Get__Fuse_Elements_Visibility(NULL);
    }
}

void AverageMasterProperty__Fuse_Elements_Visibility__OnComplete(AverageMasterProperty__Fuse_Elements_Visibility* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Elements_Visibility weight = __this->GetFullWeight();
    int nv = ::uPtr< ::app::Fuse::Internal::Blender__Fuse_Elements_Visibility*>(__this->blender)->Weight(__this->RestValue(), (double)(weight.Rest / weight.Full));
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Elements_Visibility_*>(__this->Handles)->Item(i);

        if (!::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(v)->HasValue())
        {
            continue;
        }

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(v)->MixOp() == 1)
        {
            nv = ::uPtr< ::app::Fuse::Internal::Blender__Fuse_Elements_Visibility*>(__this->blender)->Add(nv, ::uPtr< ::app::Fuse::Internal::Blender__Fuse_Elements_Visibility*>(__this->blender)->Weight(::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(v)->Value, (double)(::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility*>(v)->Strength / weight.Full)));
        }
        else
        {
            nv = ::uPtr< ::app::Fuse::Internal::Blender__Fuse_Elements_Visibility*>(__this->blender)->Add(nv, ::uPtr< ::app::Fuse::Internal::Blender__Fuse_Elements_Visibility*>(__this->blender)->Weight(v->Value, (double)v->Strength));
        }
    }

    ::uPtr< ::app::Uno::UX::Property__Fuse_Elements_Visibility*>(__this->Property)->Set(nv, (::uObject*)__this);
}

}}}
