#include <app/Fuse.Animations.AnimationVariant.h>
#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.AnimatorState.h>
#include <app/Fuse.Animations.AnimatorVariant.h>
#include <app/Fuse.Animations.AverageMasterProperty__bool.h>
#include <app/Fuse.Animations.AverageMasterProperty__float.h>
#include <app/Fuse.Animations.AverageMasterProperty__float4.h>
#include <app/Fuse.Animations.AverageMasterProperty__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.AverageMasterTransform.h>
#include <app/Fuse.Animations.AverageMixer.h>
#include <app/Fuse.Animations.ContinuousTrackProvider.h>
#include <app/Fuse.Animations.ConverterDouble.h>
#include <app/Fuse.Animations.ConverterFloat.h>
#include <app/Fuse.Animations.ConverterFloat2.h>
#include <app/Fuse.Animations.ConverterFloat3.h>
#include <app/Fuse.Animations.ConverterFloat4.h>
#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__bool.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__float.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__float4.h>
#include <app/Fuse.Animations.DiscreteMasterProperty__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.DiscreteMasterTransform.h>
#include <app/Fuse.Animations.DiscreteMixer.h>
#include <app/Fuse.Animations.DiscreteSingleTrack.h>
#include <app/Fuse.Animations.DiscreteTrackProvider.h>
#include <app/Fuse.Animations.Easing.h>
#include <app/Fuse.Animations.EasingFunction.h>
#include <app/Fuse.Animations.EasingFunctions.h>
#include <app/Fuse.Animations.EasingTrack.h>
#include <app/Fuse.Animations.FastMatrixTransform.h>
#include <app/Fuse.Animations.IMixer.h>
#include <app/Fuse.Animations.IMixerHandle__bool.h>
#include <app/Fuse.Animations.IMixerHandle__float.h>
#include <app/Fuse.Animations.IMixerHandle__float4.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Transform.h>
#include <app/Fuse.Animations.IMixerMaster.h>
#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Animations.IResizeMode.h>
#include <app/Fuse.Animations.MasterBase__bool.h>
#include <app/Fuse.Animations.MasterBase__float.h>
#include <app/Fuse.Animations.MasterBase__float4.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MasterBase__Fuse_Transform.h>
#include <app/Fuse.Animations.MasterBase1_GFWResult__Fuse_Transform.h>
#include <app/Fuse.Animations.MasterProperty__bool.h>
#include <app/Fuse.Animations.MasterProperty__float.h>
#include <app/Fuse.Animations.MasterProperty__float4.h>
#include <app/Fuse.Animations.MasterProperty__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MasterPropertyGet.h>
#include <app/Fuse.Animations.MasterTransform.h>
#include <app/Fuse.Animations.Mixer.h>
#include <app/Fuse.Animations.MixerBase.h>
#include <app/Fuse.Animations.MixerHandle__bool.h>
#include <app/Fuse.Animations.MixerHandle__float.h>
#include <app/Fuse.Animations.MixerHandle__float4.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MixerHandle__Fuse_Transform.h>
#include <app/Fuse.Animations.MixOp.h>
#include <app/Fuse.Animations.Move.h>
#include <app/Fuse.Animations.Nothing.h>
#include <app/Fuse.Animations.NothingAnimatorState.h>
#include <app/Fuse.Animations.OpenAnimator.h>
#include <app/Fuse.Animations.OpenAnimatorState.h>
#include <app/Fuse.Animations.Player.h>
#include <app/Fuse.Animations.PlayerPart.h>
#include <app/Fuse.Animations.Resize.h>
#include <app/Fuse.Animations.ResizeAnimatorState.h>
#include <app/Fuse.Animations.Rotate.h>
#include <app/Fuse.Animations.Scale.h>
#include <app/Fuse.Animations.SeekDirection.h>
#include <app/Fuse.Animations.Skew.h>
#include <app/Fuse.Animations.Spin.h>
#include <app/Fuse.Animations.SpinState.h>
#include <app/Fuse.Animations.TrackAnimator.h>
#include <app/Fuse.Animations.TrackAnimatorState.h>
#include <app/Fuse.Animations.TrackProvider.h>
#include <app/Fuse.Animations.TriggerAnimation.h>
#include <app/Fuse.Animations.TriggerAnimationState.h>
#include <app/Fuse.Animations.TriggerAnimationState_SeekFlags.h>
#include <app/Fuse.Elements.Visibility.h>
#include <app/Fuse.FastMatrix.h>
#include <app/Fuse.ITranslationMode.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.Rotation.h>
#include <app/Fuse.Scaling.h>
#include <app/Fuse.Shear.h>
#include <app/Fuse.Time.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.Translation.h>
#include <app/Fuse.TranslationModes.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Fuse.UpdateStage.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__object.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ConcurrentCollection__Fuse_Animations_IMixerMaster.h>
#include <app/Uno.Collections.Dictionary__object__object.h>
#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Collections.List__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.List__Fuse_Animations_MixerHandle_Fuse_Transform_.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Animations_MixerHandle_F-b6df34f0.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Property__bool.h>
#include <app/Uno.UX.Property__float.h>
#include <app/Uno.UX.Property__float4.h>
#include <app/Uno.UX.Property__Fuse_Elements_Visibility.h>

namespace app {
namespace Fuse {
namespace Animations {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* AnimationVariant__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Animations.AnimationVariant", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Animator__uType* Animator__typeof()
{
    static ::uStaticStrong<Animator__uType*> type;
    if (type != NULL) return type;

    type = (Animator__uType*)::uAllocClassType(sizeof(Animator__uType), "Fuse.Animations.Animator", false, 0, 1, 0);

    type->__fp_get_AnimatorVariant = Animator__get_AnimatorVariant;
    type->__fp_GetDurationWithDelay = Animator__GetDurationWithDelay;

    type->SetStrongRefs(
        "Mixer", offsetof(Animator, Mixer));

    return type;
}

void Animator___ObjInit(Animator* __this)
{
    __this->Mixer = ::app::Fuse::Animations::Mixer__get_Default(NULL);
    __this->_mixOp = 1;
}

int Animator__get_AnimatorVariant(Animator* __this)
{
    return 0;
}

double Animator__get_Delay(Animator* __this)
{
    return __this->_Delay;
}

int Animator__get_MixOp(Animator* __this)
{
    return __this->_mixOp;
}

double Animator__GetDurationWithDelay(Animator* __this, int dir)
{
    return __this->Delay();
}

void Animator__set_Delay(Animator* __this, double value)
{
    __this->_Delay = value;
}

void Animator__set_MixOp(Animator* __this, int value)
{
    __this->_mixOp = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AnimatorState__uType* AnimatorState__typeof()
{
    static ::uStaticStrong<AnimatorState__uType*> type;
    if (type != NULL) return type;

    type = (AnimatorState__uType*)::uAllocClassType(sizeof(AnimatorState__uType), "Fuse.Animations.AnimatorState", false, 0, 1, 0);

    type->__fp_Disable = AnimatorState__Disable;

    type->SetStrongRefs(
        "Node", offsetof(AnimatorState, Node));

    return type;
}

void AnimatorState___ObjInit(AnimatorState* __this, ::app::Fuse::Animations::CreateStateParams* p, ::app::Fuse::Node* useNode)
{
    __this->Variant = ::uPtr< ::app::Fuse::Animations::CreateStateParams*>(p)->Variant;
    __this->Node = (useNode != NULL) ? useNode : p->Attached;
    __this->TotalDuration = p->TotalDuration;
}

void AnimatorState__Disable(AnimatorState* __this)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* AnimatorVariant__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Animations.AnimatorVariant", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Allow", 0LL,
        "Disallow", 1LL,
        "HasBackward", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AverageMasterTransform__uType* AverageMasterTransform__typeof()
{
    static ::uStaticStrong<AverageMasterTransform__uType*> type;
    if (type != NULL) return type;

    type = (AverageMasterTransform__uType*)::uAllocClassType(sizeof(AverageMasterTransform__uType), "Fuse.Animations.AverageMasterTransform", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterTransform__typeof());
    type->__fp_OnComplete = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Transform*))AverageMasterTransform__OnComplete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(AverageMasterTransform__uType, __interface_0));

    return type;
}

void AverageMasterTransform___ObjInit_2(AverageMasterTransform* __this, ::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterTransform___ObjInit_1(__this, node, mixerBase);
}

AverageMasterTransform* AverageMasterTransform__New_1(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterTransform* inst = (AverageMasterTransform*)::uAllocObject(sizeof(AverageMasterTransform), AverageMasterTransform__typeof());
    inst->_ObjInit_2(node, mixerBase);
    return inst;
}

void AverageMasterTransform__OnComplete(AverageMasterTransform* __this)
{
    ::app::Fuse::Animations::MasterBase1_GFWResult__Fuse_Transform weight = __this->GetFullWeight();
    ::app::Fuse::FastMatrix* nv = ::app::Fuse::FastMatrix__Identity(NULL);
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Transform* v = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->Item(i);

        if (!::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->HasValue())
        {
            continue;
        }

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->MixOp() == 1)
        {
            ::uPtr< ::app::Fuse::Transform*>(::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->Value)->AppendTo(nv, ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->Strength / weight.Full);
        }
        else
        {
            ::uPtr< ::app::Fuse::Transform*>(v->Value)->AppendTo(nv, v->Strength);
        }
    }

    if (!::uPtr< ::app::Fuse::FastMatrix*>(nv)->Matrix().Equals(::uBox(::app::Uno::Float4x4__typeof(), ::uPtr< ::app::Fuse::FastMatrix*>(::uPtr< ::app::Fuse::Animations::FastMatrixTransform*>(__this->FMT)->Matrix)->Matrix())))
    {
        ::uPtr< ::app::Fuse::Animations::FastMatrixTransform*>(__this->FMT)->Matrix = nv;
        ::uPtr< ::app::Fuse::Animations::FastMatrixTransform*>(__this->FMT)->Changed();
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AverageMixer__uType* AverageMixer__typeof()
{
    static ::uStaticStrong<AverageMixer__uType*> type;
    if (type != NULL) return type;

    type = (AverageMixer__uType*)::uAllocClassType(sizeof(AverageMixer__uType), "Fuse.Animations.AverageMixer", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::MixerBase__typeof());
    type->__fp_CreateMaster__bool = (::app::Fuse::Animations::MasterProperty__bool*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__bool*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__bool;
    type->__fp_CreateMaster__float = (::app::Fuse::Animations::MasterProperty__float*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__float*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__float;
    type->__fp_CreateMaster__float4 = (::app::Fuse::Animations::MasterProperty__float4*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__float4*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__float4;
    type->__fp_CreateMaster__Fuse_Elements_Visibility = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_Visibility*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMaster__Fuse_Elements_Visibility;
    type->__fp_CreateMasterTransform = (::app::Fuse::Animations::MasterBase__Fuse_Transform*(*)(::app::Fuse::Animations::MixerBase*, ::app::Fuse::Node*, ::app::Fuse::Animations::MixerBase*))AverageMixer__CreateMasterTransform;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixer__typeof(), offsetof(AverageMixer__uType, __interface_0));

    return type;
}

void AverageMixer___ObjInit_1(AverageMixer* __this)
{
    ::app::Fuse::Animations::MixerBase___ObjInit(__this);
}

::app::Fuse::Animations::MasterProperty__bool* AverageMixer__CreateMaster__bool(AverageMixer* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__bool*)::app::Fuse::Animations::AverageMasterProperty__bool__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__float* AverageMixer__CreateMaster__float(AverageMixer* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__float*)::app::Fuse::Animations::AverageMasterProperty__float__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__float4* AverageMixer__CreateMaster__float4(AverageMixer* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__float4*)::app::Fuse::Animations::AverageMasterProperty__float4__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility* AverageMixer__CreateMaster__Fuse_Elements_Visibility(AverageMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility*)::app::Fuse::Animations::AverageMasterProperty__Fuse_Elements_Visibility__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterBase__Fuse_Transform* AverageMixer__CreateMasterTransform(AverageMixer* __this, ::app::Fuse::Node* element, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterBase__Fuse_Transform*)::app::Fuse::Animations::AverageMasterTransform__New_1(NULL, element, mixerBase);
}

AverageMixer* AverageMixer__New_1(::uStatic* __this)
{
    AverageMixer* inst = (AverageMixer*)::uAllocObject(sizeof(AverageMixer), AverageMixer__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ContinuousTrackProvider__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.ContinuousTrackProvider");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ConverterDouble*> ConverterDouble__Singleton;

ConverterDouble__uType* ConverterDouble__typeof()
{
    static ::uStaticStrong<ConverterDouble__uType*> type;
    if (type != NULL) return type;

    type = (ConverterDouble__uType*)::uAllocClassType(sizeof(ConverterDouble__uType), "Fuse.Animations.ConverterDouble", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::Converter__double__typeof());

    return type;
}

void ConverterDouble___ObjInit_1(ConverterDouble* __this)
{
    ::app::Fuse::Animations::Converter__double___ObjInit(__this);
}

void ConverterDouble___TypeInit(::uStatic* __this)
{
    ConverterDouble__Singleton = ConverterDouble__New_1(NULL);
}

ConverterDouble* ConverterDouble__New_1(::uStatic* __this)
{
    ConverterDouble* inst = (ConverterDouble*)::uAllocObject(sizeof(ConverterDouble), ConverterDouble__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ConverterFloat*> ConverterFloat__Singleton;

ConverterFloat__uType* ConverterFloat__typeof()
{
    static ::uStaticStrong<ConverterFloat__uType*> type;
    if (type != NULL) return type;

    type = (ConverterFloat__uType*)::uAllocClassType(sizeof(ConverterFloat__uType), "Fuse.Animations.ConverterFloat", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::Converter__float__typeof());
    type->__fp_In = (::app::Uno::Float4(*)(::app::Fuse::Animations::Converter__float*, float))ConverterFloat__In;
    type->__fp_Out = (float(*)(::app::Fuse::Animations::Converter__float*, ::app::Uno::Float4))ConverterFloat__Out;

    return type;
}

void ConverterFloat___ObjInit_1(ConverterFloat* __this)
{
    ::app::Fuse::Animations::Converter__float___ObjInit(__this);
}

void ConverterFloat___TypeInit(::uStatic* __this)
{
    ConverterFloat__Singleton = ConverterFloat__New_1(NULL);
}

::app::Uno::Float4 ConverterFloat__In(ConverterFloat* __this, float value)
{
    return ::app::Uno::Float4__New_2(NULL, value, 0.0f, 0.0f, 0.0f);
}

ConverterFloat* ConverterFloat__New_1(::uStatic* __this)
{
    ConverterFloat* inst = (ConverterFloat*)::uAllocObject(sizeof(ConverterFloat), ConverterFloat__typeof());
    inst->_ObjInit_1();
    return inst;
}

float ConverterFloat__Out(ConverterFloat* __this, ::app::Uno::Float4 value)
{
    return value.X;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ConverterFloat2*> ConverterFloat2__Singleton;

ConverterFloat2__uType* ConverterFloat2__typeof()
{
    static ::uStaticStrong<ConverterFloat2__uType*> type;
    if (type != NULL) return type;

    type = (ConverterFloat2__uType*)::uAllocClassType(sizeof(ConverterFloat2__uType), "Fuse.Animations.ConverterFloat2", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::Converter__float2__typeof());

    return type;
}

void ConverterFloat2___ObjInit_1(ConverterFloat2* __this)
{
    ::app::Fuse::Animations::Converter__float2___ObjInit(__this);
}

void ConverterFloat2___TypeInit(::uStatic* __this)
{
    ConverterFloat2__Singleton = ConverterFloat2__New_1(NULL);
}

ConverterFloat2* ConverterFloat2__New_1(::uStatic* __this)
{
    ConverterFloat2* inst = (ConverterFloat2*)::uAllocObject(sizeof(ConverterFloat2), ConverterFloat2__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ConverterFloat3*> ConverterFloat3__Singleton;

ConverterFloat3__uType* ConverterFloat3__typeof()
{
    static ::uStaticStrong<ConverterFloat3__uType*> type;
    if (type != NULL) return type;

    type = (ConverterFloat3__uType*)::uAllocClassType(sizeof(ConverterFloat3__uType), "Fuse.Animations.ConverterFloat3", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::Converter__float3__typeof());

    return type;
}

void ConverterFloat3___ObjInit_1(ConverterFloat3* __this)
{
    ::app::Fuse::Animations::Converter__float3___ObjInit(__this);
}

void ConverterFloat3___TypeInit(::uStatic* __this)
{
    ConverterFloat3__Singleton = ConverterFloat3__New_1(NULL);
}

ConverterFloat3* ConverterFloat3__New_1(::uStatic* __this)
{
    ConverterFloat3* inst = (ConverterFloat3*)::uAllocObject(sizeof(ConverterFloat3), ConverterFloat3__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ConverterFloat4*> ConverterFloat4__Singleton;

ConverterFloat4__uType* ConverterFloat4__typeof()
{
    static ::uStaticStrong<ConverterFloat4__uType*> type;
    if (type != NULL) return type;

    type = (ConverterFloat4__uType*)::uAllocClassType(sizeof(ConverterFloat4__uType), "Fuse.Animations.ConverterFloat4", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::Converter__float4__typeof());
    type->__fp_In = (::app::Uno::Float4(*)(::app::Fuse::Animations::Converter__float4*, ::app::Uno::Float4))ConverterFloat4__In;
    type->__fp_Out = (::app::Uno::Float4(*)(::app::Fuse::Animations::Converter__float4*, ::app::Uno::Float4))ConverterFloat4__Out;

    return type;
}

void ConverterFloat4___ObjInit_1(ConverterFloat4* __this)
{
    ::app::Fuse::Animations::Converter__float4___ObjInit(__this);
}

void ConverterFloat4___TypeInit(::uStatic* __this)
{
    ConverterFloat4__Singleton = ConverterFloat4__New_1(NULL);
}

::app::Uno::Float4 ConverterFloat4__In(ConverterFloat4* __this, ::app::Uno::Float4 value)
{
    return value;
}

ConverterFloat4* ConverterFloat4__New_1(::uStatic* __this)
{
    ConverterFloat4* inst = (ConverterFloat4*)::uAllocObject(sizeof(ConverterFloat4), ConverterFloat4__typeof());
    inst->_ObjInit_1();
    return inst;
}

::app::Uno::Float4 ConverterFloat4__Out(ConverterFloat4* __this, ::app::Uno::Float4 value)
{
    return value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CreateStateParams__uType* CreateStateParams__typeof()
{
    static ::uStaticStrong<CreateStateParams__uType*> type;
    if (type != NULL) return type;

    type = (CreateStateParams__uType*)::uAllocClassType(sizeof(CreateStateParams__uType), "Fuse.Animations.CreateStateParams", false, 0, 1, 0);

    type->SetStrongRefs(
        "Attached", offsetof(CreateStateParams, Attached));

    return type;
}

void CreateStateParams___ObjInit(CreateStateParams* __this)
{
}

CreateStateParams* CreateStateParams__New_1(::uStatic* __this)
{
    CreateStateParams* inst = (CreateStateParams*)::uAllocObject(sizeof(CreateStateParams), CreateStateParams__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteMasterTransform__uType* DiscreteMasterTransform__typeof()
{
    static ::uStaticStrong<DiscreteMasterTransform__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteMasterTransform__uType*)::uAllocClassType(sizeof(DiscreteMasterTransform__uType), "Fuse.Animations.DiscreteMasterTransform", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterTransform__typeof());
    type->__fp_OnComplete = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Transform*))DiscreteMasterTransform__OnComplete;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(DiscreteMasterTransform__uType, __interface_0));

    return type;
}

void DiscreteMasterTransform___ObjInit_2(DiscreteMasterTransform* __this, ::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterTransform___ObjInit_1(__this, node, mixerBase);
}

DiscreteMasterTransform* DiscreteMasterTransform__New_1(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    DiscreteMasterTransform* inst = (DiscreteMasterTransform*)::uAllocObject(sizeof(DiscreteMasterTransform), DiscreteMasterTransform__typeof());
    inst->_ObjInit_2(node, mixerBase);
    return inst;
}

void DiscreteMasterTransform__OnComplete(DiscreteMasterTransform* __this)
{
    ::uPtr< ::app::Fuse::FastMatrix*>(::uPtr< ::app::Fuse::Animations::FastMatrixTransform*>(__this->FMT)->Matrix)->ResetIdentity();
    float str = 0.5f;
    ::app::Fuse::Transform* value = NULL;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Animations_MixerHandle_Fuse_Transform_ enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_MixerHandle_Fuse_Transform_*>(__this->Handles)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Animations::MixerHandle__Fuse_Transform* v = enum_123.Current();

        if (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->HasValue() && (::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->Strength > str))
        {
            value = ::uPtr< ::app::Fuse::Animations::MixerHandle__Fuse_Transform*>(v)->Value;
            str = v->Strength;
        }
    }

    if (value != NULL)
    {
        ::uPtr< ::app::Fuse::Transform*>(value)->AppendTo(::uPtr< ::app::Fuse::Animations::FastMatrixTransform*>(__this->FMT)->Matrix, 1.0f);
    }

    ::uPtr< ::app::Fuse::Animations::FastMatrixTransform*>(__this->FMT)->Changed();
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteMixer__uType* DiscreteMixer__typeof()
{
    static ::uStaticStrong<DiscreteMixer__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteMixer__uType*)::uAllocClassType(sizeof(DiscreteMixer__uType), "Fuse.Animations.DiscreteMixer", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::MixerBase__typeof());
    type->__fp_CreateMaster__bool = (::app::Fuse::Animations::MasterProperty__bool*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__bool*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__bool;
    type->__fp_CreateMaster__float = (::app::Fuse::Animations::MasterProperty__float*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__float*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__float;
    type->__fp_CreateMaster__float4 = (::app::Fuse::Animations::MasterProperty__float4*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__float4*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__float4;
    type->__fp_CreateMaster__Fuse_Elements_Visibility = (::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility*(*)(::app::Fuse::Animations::MixerBase*, ::app::Uno::UX::Property__Fuse_Elements_Visibility*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMaster__Fuse_Elements_Visibility;
    type->__fp_CreateMasterTransform = (::app::Fuse::Animations::MasterBase__Fuse_Transform*(*)(::app::Fuse::Animations::MixerBase*, ::app::Fuse::Node*, ::app::Fuse::Animations::MixerBase*))DiscreteMixer__CreateMasterTransform;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixer__typeof(), offsetof(DiscreteMixer__uType, __interface_0));

    return type;
}

void DiscreteMixer___ObjInit_1(DiscreteMixer* __this)
{
    ::app::Fuse::Animations::MixerBase___ObjInit(__this);
}

::app::Fuse::Animations::MasterProperty__bool* DiscreteMixer__CreateMaster__bool(DiscreteMixer* __this, ::app::Uno::UX::Property__bool* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__bool*)::app::Fuse::Animations::DiscreteMasterProperty__bool__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__float* DiscreteMixer__CreateMaster__float(DiscreteMixer* __this, ::app::Uno::UX::Property__float* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__float*)::app::Fuse::Animations::DiscreteMasterProperty__float__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__float4* DiscreteMixer__CreateMaster__float4(DiscreteMixer* __this, ::app::Uno::UX::Property__float4* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__float4*)::app::Fuse::Animations::DiscreteMasterProperty__float4__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility* DiscreteMixer__CreateMaster__Fuse_Elements_Visibility(DiscreteMixer* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* property, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterProperty__Fuse_Elements_Visibility*)::app::Fuse::Animations::DiscreteMasterProperty__Fuse_Elements_Visibility__New_1(NULL, property, mixerBase);
}

::app::Fuse::Animations::MasterBase__Fuse_Transform* DiscreteMixer__CreateMasterTransform(DiscreteMixer* __this, ::app::Fuse::Node* element, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    return (::app::Fuse::Animations::MasterBase__Fuse_Transform*)::app::Fuse::Animations::DiscreteMasterTransform__New_1(NULL, element, mixerBase);
}

DiscreteMixer* DiscreteMixer__New_1(::uStatic* __this)
{
    DiscreteMixer* inst = (DiscreteMixer*)::uAllocObject(sizeof(DiscreteMixer), DiscreteMixer__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< DiscreteSingleTrack*> DiscreteSingleTrack__Singleton;

DiscreteSingleTrack__uType* DiscreteSingleTrack__typeof()
{
    static ::uStaticStrong<DiscreteSingleTrack__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteSingleTrack__uType*)::uAllocClassType(sizeof(DiscreteSingleTrack__uType), "Fuse.Animations.DiscreteSingleTrack", false, 2, 0, 0);

    type->__interface_1.__fp_GetDuration = (double(*)(void*, ::app::Fuse::Animations::TrackAnimator*, int))DiscreteSingleTrack__Fuse_Animations_TrackProvider_GetDuration;
    type->__interface_1.__fp_GetAnimatorVariant = (int(*)(void*, ::app::Fuse::Animations::TrackAnimator*))DiscreteSingleTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant;
    type->__interface_0.__fp_GetSeekProgress = (bool(*)(void*, ::app::Fuse::Animations::TrackAnimatorState*, double, double, int, ::uObject**, double*))DiscreteSingleTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekProgress;
    type->__interface_0.__fp_GetSeekTime = (bool(*)(void*, ::app::Fuse::Animations::TrackAnimatorState*, double, double, int, ::uObject**, double*))DiscreteSingleTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekTime;

    type->SetInterfaces(
        ::app::Fuse::Animations::DiscreteTrackProvider__typeof(), offsetof(DiscreteSingleTrack__uType, __interface_0),
        ::app::Fuse::Animations::TrackProvider__typeof(), offsetof(DiscreteSingleTrack__uType, __interface_1));

    return type;
}

void DiscreteSingleTrack___ObjInit(DiscreteSingleTrack* __this)
{
}

void DiscreteSingleTrack___TypeInit(::uStatic* __this)
{
    DiscreteSingleTrack__Singleton = DiscreteSingleTrack__New_1(NULL);
}

bool DiscreteSingleTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekProgress(DiscreteSingleTrack* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double progress, double interval, int dir, ::uObject** value, double* strength)
{
    *strength = progress;
    *value = ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(::uPtr< ::app::Fuse::Animations::TrackAnimatorState*>(tas)->Animator)->_objectValue;
    return (dir == 0) ? (progress >= 1.0) : (progress <= 0.0);
}

bool DiscreteSingleTrack__Fuse_Animations_DiscreteTrackProvider_GetSeekTime(DiscreteSingleTrack* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double elapsed, double interval, int dir, ::uObject** value, double* strength)
{
    double duration = ::uPtr< ::app::Fuse::Animations::TrackAnimatorState*>(tas)->Duration();
    float progress = float();

    if (duration < 9.9999997473787516e-06)
    {
        progress = (float)(((dir == 0) ? (elapsed >= -9.9999997473787516e-06) : (elapsed > 9.9999997473787516e-06)) ? 1 : 0);
    }
    else
    {
        progress = (float)(elapsed / duration);
    }

    *strength = (double)::app::Uno::Math__Clamp_8(NULL, progress, 0.0f, 1.0f);
    *value = ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(tas->Animator)->_objectValue;
    return (dir == 0) ? (elapsed >= 0.0) : (elapsed <= 0.0);
}

int DiscreteSingleTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant(DiscreteSingleTrack* __this, ::app::Fuse::Animations::TrackAnimator* ta)
{
    return ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(ta)->HasBack() ? 2 : 0;
}

double DiscreteSingleTrack__Fuse_Animations_TrackProvider_GetDuration(DiscreteSingleTrack* __this, ::app::Fuse::Animations::TrackAnimator* ta, int variant)
{
    return (variant == 1) ? ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(ta)->DurationBack() : ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(ta)->Duration();
}

DiscreteSingleTrack* DiscreteSingleTrack__New_1(::uStatic* __this)
{
    DiscreteSingleTrack* inst = (DiscreteSingleTrack*)::uAllocObject(sizeof(DiscreteSingleTrack), DiscreteSingleTrack__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* DiscreteTrackProvider__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.DiscreteTrackProvider");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Easing__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Animations.Easing", ::app::Uno::Int__typeof(), 31);

    type->SetLiterals(
        "Linear", 0LL,
        "QuadraticIn", 1LL,
        "QuadraticOut", 2LL,
        "QuadraticInOut", 3LL,
        "CubicIn", 4LL,
        "CubicOut", 5LL,
        "CubicInOut", 6LL,
        "QuarticIn", 7LL,
        "QuarticOut", 8LL,
        "QuarticInOut", 9LL,
        "QuinticIn", 10LL,
        "QuinticOut", 11LL,
        "QuinticInOut", 12LL,
        "SinusoidalIn", 13LL,
        "SinusoidalOut", 14LL,
        "SinusoidalInOut", 15LL,
        "ExponentialIn", 16LL,
        "ExponentialOut", 17LL,
        "ExponentialInOut", 18LL,
        "CircularIn", 19LL,
        "CircularOut", 20LL,
        "CircularInOut", 21LL,
        "ElasticIn", 22LL,
        "ElasticOut", 23LL,
        "ElasticInOut", 24LL,
        "BackIn", 25LL,
        "BackOut", 26LL,
        "BackInOut", 27LL,
        "BounceIn", 28LL,
        "BounceOut", 29LL,
        "BounceInOut", 30LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* EasingFunction__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Animations.EasingFunction", 1);

    type->SetSignature(::app::Uno::Float__typeof(),
        ::app::Uno::Float__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EasingFunctions__uType* EasingFunctions__typeof()
{
    static ::uStaticStrong<EasingFunctions__uType*> type;
    if (type != NULL) return type;

    type = (EasingFunctions__uType*)::uAllocClassType(sizeof(EasingFunctions__uType), "Fuse.Animations.EasingFunctions");

    return type;
}

float EasingFunctions__BackIn(::uStatic* __this, float k)
{
    float s = 1.70158f;
    return (k * k) * (((s + 1.0f) * k) - s);
}

float EasingFunctions__BackInOut(::uStatic* __this, float k)
{
    float s = 2.59490943f;
    k = k * 2.0f;

    if (k < 1.0f)
    {
        return 0.5f * ((k * k) * (((s + 1.0f) * k) - s));
    }

    k = k - 2.0f;
    return 0.5f * (((k * k) * (((s + 1.0f) * k) + s)) + 2.0f);
}

float EasingFunctions__BackOut(::uStatic* __this, float k)
{
    float s = 1.70158f;
    k = k - 1.0f;
    return ((k * k) * (((s + 1.0f) * k) + s)) + 1.0f;
}

float EasingFunctions__BounceIn(::uStatic* __this, float k)
{
    return 1.0f - EasingFunctions__BounceOut(NULL, 1.0f - k);
}

float EasingFunctions__BounceInOut(::uStatic* __this, float k)
{
    if (k < 0.5f)
    {
        return EasingFunctions__BounceIn(NULL, k * 2.0f) * 0.5f;
    }

    return (EasingFunctions__BounceOut(NULL, (k * 2.0f) - 1.0f) * 0.5f) + 0.5f;
}

float EasingFunctions__BounceOut(::uStatic* __this, float k)
{
    if (k < 0.363636374f)
    {
        return (7.5625f * k) * k;
    }
    else if (k < 0.727272749f)
    {
        k = k - 0.545454562f;
        return ((7.5625f * k) * k) + 0.75f;
    }
    else if (k < 0.909090936f)
    {
        k = k - 0.8181818f;
        return ((7.562f * k) * k) + 0.9375f;
    }
    else
    {
        k = k - 0.954545438f;
        return ((7.5625f * k) * k) + 0.984375f;
    }
}

float EasingFunctions__CircularIn(::uStatic* __this, float k)
{
    return 1.0f - ::app::Uno::Math__Sqrt_1(NULL, 1.0f - (k * k));
}

float EasingFunctions__CircularInOut(::uStatic* __this, float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
    {
        return -0.5f * (::app::Uno::Math__Sqrt_1(NULL, 1.0f - (k * k)) - 1.0f);
    }

    k = k - 2.0f;
    return 0.5f * (::app::Uno::Math__Sqrt_1(NULL, 1.0f - (k * k)) + 1.0f);
}

float EasingFunctions__CircularOut(::uStatic* __this, float k)
{
    k = k - 1.0f;
    return ::app::Uno::Math__Sqrt_1(NULL, 1.0f - (k * k));
}

float EasingFunctions__CubicIn(::uStatic* __this, float k)
{
    return (k * k) * k;
}

float EasingFunctions__CubicInOut(::uStatic* __this, float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
    {
        return ((0.5f * k) * k) * k;
    }

    k = k - 2.0f;
    return 0.5f * (((k * k) * k) + 2.0f);
}

float EasingFunctions__CubicOut(::uStatic* __this, float k)
{
    k = k - 1.0f;
    return ((k * k) * k) + 1.0f;
}

float EasingFunctions__ElasticIn(::uStatic* __this, float k)
{
    if (k == 0.0f)
    {
        return 0.0f;
    }

    if (k == 1.0f)
    {
        return 1.0f;
    }

    k = k - 1.0f;
    return -::app::Uno::Math__Pow_1(NULL, 2.0f, 10.0f * k) * ::app::Uno::Math__Sin_1(NULL, ((k - 0.1f) * 6.28318548f) * 2.5f);
}

float EasingFunctions__ElasticInOut(::uStatic* __this, float k)
{
    if (k == 0.0f)
    {
        return 0.0f;
    }

    if (k == 1.0f)
    {
        return 1.0f;
    }

    k = (k * 2.0f) - 1.0f;

    if (k < 0.0f)
    {
        return (-0.5f * ::app::Uno::Math__Pow_1(NULL, 2.0f, 10.0f * k)) * ::app::Uno::Math__Sin_1(NULL, ((k - 0.1f) * 6.28318548f) * 2.5f);
    }

    return ((::app::Uno::Math__Pow_1(NULL, 2.0f, -10.0f * k) * ::app::Uno::Math__Sin_1(NULL, ((k - 0.1f) * 6.28318548f) * 2.5f)) * 0.5f) + 1.0f;
}

float EasingFunctions__ElasticOut(::uStatic* __this, float k)
{
    if (k == 0.0f)
    {
        return 0.0f;
    }

    if (k == 1.0f)
    {
        return 1.0f;
    }

    return (::app::Uno::Math__Pow_1(NULL, 2.0f, -10.0f * k) * ::app::Uno::Math__Sin_1(NULL, ((k - 0.1f) * 6.28318548f) * 2.5f)) + 1.0f;
}

float EasingFunctions__ExponentialIn(::uStatic* __this, float k)
{
    return (k == 0.0f) ? 0.0f : ::app::Uno::Math__Pow_1(NULL, 1024.0f, k - 1.0f);
}

float EasingFunctions__ExponentialInOut(::uStatic* __this, float k)
{
    if (k == 0.0f)
    {
        return 0.0f;
    }

    if (k == 1.0f)
    {
        return 1.0f;
    }

    k = k * 2.0f;

    if (k < 1.0f)
    {
        return 0.5f * ::app::Uno::Math__Pow_1(NULL, 1024.0f, k - 1.0f);
    }

    return 0.5f * (-::app::Uno::Math__Pow_1(NULL, 2.0f, -10.0f * (k - 1.0f)) + 2.0f);
}

float EasingFunctions__ExponentialOut(::uStatic* __this, float k)
{
    return (k == 1.0f) ? 1.0f : (1.0f - ::app::Uno::Math__Pow_1(NULL, 2.0f, -10.0f * k));
}

::uDelegate* EasingFunctions__FromEasing(::uStatic* __this, int e)
{
    switch (e)
    {
        case 0:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__Linear);
        }
        case 1:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__QuadraticIn);
        }
        case 2:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__QuadraticOut);
        }
        case 3:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__QuadraticInOut);
        }
        case 4:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__CubicIn);
        }
        case 5:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__CubicOut);
        }
        case 6:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__CubicInOut);
        }
        case 7:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__QuarticIn);
        }
        case 8:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__QuarticOut);
        }
        case 9:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__QuarticInOut);
        }
        case 10:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__QuinticIn);
        }
        case 11:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__QuinticOut);
        }
        case 12:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__QuinticInOut);
        }
        case 13:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__SinusoidalIn);
        }
        case 14:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__SinusoidalOut);
        }
        case 15:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__SinusoidalInOut);
        }
        case 16:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__ExponentialIn);
        }
        case 17:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__ExponentialOut);
        }
        case 18:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__ExponentialInOut);
        }
        case 19:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__CircularIn);
        }
        case 20:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__CircularOut);
        }
        case 21:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__CircularInOut);
        }
        case 22:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__ElasticIn);
        }
        case 23:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__ElasticOut);
        }
        case 24:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__ElasticInOut);
        }
        case 25:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__BackIn);
        }
        case 26:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__BackOut);
        }
        case 27:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__BackInOut);
        }
        case 28:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__BounceIn);
        }
        case 29:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__BounceOut);
        }
        case 30:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__BounceInOut);
        }
        default:
        {
            return ::uNewDelegateNonVirt(::app::Fuse::Animations::EasingFunction__typeof(), (const void*)EasingFunctions__Linear);
        }
    }
}

float EasingFunctions__Linear(::uStatic* __this, float k)
{
    return k;
}

float EasingFunctions__QuadraticIn(::uStatic* __this, float k)
{
    return k * k;
}

float EasingFunctions__QuadraticInOut(::uStatic* __this, float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
    {
        return (0.5f * k) * k;
    }

    k = k - 1.0f;
    return -0.5f * ((k * (k - 2.0f)) - 1.0f);
}

float EasingFunctions__QuadraticOut(::uStatic* __this, float k)
{
    return k * (2.0f - k);
}

float EasingFunctions__QuarticIn(::uStatic* __this, float k)
{
    return ((k * k) * k) * k;
}

float EasingFunctions__QuarticInOut(::uStatic* __this, float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
    {
        return (((0.5f * k) * k) * k) * k;
    }

    k = k - 2.0f;
    return -0.5f * ((((k * k) * k) * k) - 2.0f);
}

float EasingFunctions__QuarticOut(::uStatic* __this, float k)
{
    k = k - 1.0f;
    return 1.0f - (((k * k) * k) * k);
}

float EasingFunctions__QuinticIn(::uStatic* __this, float k)
{
    return (((k * k) * k) * k) * k;
}

float EasingFunctions__QuinticInOut(::uStatic* __this, float k)
{
    k = k * 2.0f;

    if (k < 1.0f)
    {
        return ((((0.5f * k) * k) * k) * k) * k;
    }

    k = k - 2.0f;
    return 0.5f * (((((k * k) * k) * k) * k) + 2.0f);
}

float EasingFunctions__QuinticOut(::uStatic* __this, float k)
{
    k = k - 1.0f;
    return ((((k * k) * k) * k) * k) + 1.0f;
}

float EasingFunctions__SinusoidalIn(::uStatic* __this, float k)
{
    return 1.0f - ::app::Uno::Math__Cos_1(NULL, (k * 3.14159274f) / 2.0f);
}

float EasingFunctions__SinusoidalInOut(::uStatic* __this, float k)
{
    return 0.5f * (1.0f - ::app::Uno::Math__Cos_1(NULL, 3.14159274f * k));
}

float EasingFunctions__SinusoidalOut(::uStatic* __this, float k)
{
    return ::app::Uno::Math__Sin_1(NULL, (k * 3.14159274f) / 2.0f);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< EasingTrack*> EasingTrack__Singleton;

EasingTrack__uType* EasingTrack__typeof()
{
    static ::uStaticStrong<EasingTrack__uType*> type;
    if (type != NULL) return type;

    type = (EasingTrack__uType*)::uAllocClassType(sizeof(EasingTrack__uType), "Fuse.Animations.EasingTrack", false, 2, 0, 0);

    type->__interface_1.__fp_GetDuration = (double(*)(void*, ::app::Fuse::Animations::TrackAnimator*, int))EasingTrack__Fuse_Animations_TrackProvider_GetDuration;
    type->__interface_1.__fp_GetAnimatorVariant = (int(*)(void*, ::app::Fuse::Animations::TrackAnimator*))EasingTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant;
    type->__interface_0.__fp_GetSeekProgress = (bool(*)(void*, ::app::Fuse::Animations::TrackAnimatorState*, double, double, int, ::app::Uno::Float4*, double*))EasingTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekProgress;
    type->__interface_0.__fp_GetSeekTime = (bool(*)(void*, ::app::Fuse::Animations::TrackAnimatorState*, double, double, int, ::app::Uno::Float4*, double*))EasingTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekTime;

    type->SetInterfaces(
        ::app::Fuse::Animations::ContinuousTrackProvider__typeof(), offsetof(EasingTrack__uType, __interface_0),
        ::app::Fuse::Animations::TrackProvider__typeof(), offsetof(EasingTrack__uType, __interface_1));

    return type;
}

void EasingTrack___ObjInit(EasingTrack* __this)
{
}

void EasingTrack___TypeInit(::uStatic* __this)
{
    EasingTrack__Singleton = EasingTrack__New_1(NULL);
}

bool EasingTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekProgress(EasingTrack* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double progress, double interval, int dir, ::app::Uno::Float4* value, double* strength)
{
    progress = ::app::Uno::Math__Clamp_7(NULL, progress, 0.0, 1.0);
    float ease = ::uPtr< ::uDelegate*>(::app::Fuse::Animations::EasingFunctions__FromEasing(NULL, ::uPtr< ::app::Fuse::Animations::TrackAnimatorState*>(tas)->Easing()))->Invoke< float, float>((float)progress);
    *strength = (double)ease;
    *value = ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(tas->Animator)->_vectorValue;
    return (dir == 0) ? (progress >= 1.0) : (progress <= 0.0);
}

bool EasingTrack__Fuse_Animations_ContinuousTrackProvider_GetSeekTime(EasingTrack* __this, ::app::Fuse::Animations::TrackAnimatorState* tas, double elapsed, double interval, int dir, ::app::Uno::Float4* value, double* strength)
{
    double duration = ::uPtr< ::app::Fuse::Animations::TrackAnimatorState*>(tas)->Duration();
    float progress = float();

    if (duration < 9.9999997473787516e-06)
    {
        progress = (float)(((dir == 0) ? (elapsed >= -9.9999997473787516e-06) : (elapsed > 9.9999997473787516e-06)) ? 1 : 0);
    }
    else
    {
        progress = (float)(elapsed / duration);
    }

    return ::app::Fuse::Animations::ContinuousTrackProvider::GetSeekProgress(::uPtr< ::uObject*>(::uAs< ::uObject*>(__this, ::app::Fuse::Animations::ContinuousTrackProvider__typeof())), tas, (double)progress, interval, dir, value, strength);
}

int EasingTrack__Fuse_Animations_TrackProvider_GetAnimatorVariant(EasingTrack* __this, ::app::Fuse::Animations::TrackAnimator* ta)
{
    return ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(ta)->HasBack() ? 2 : 0;
}

double EasingTrack__Fuse_Animations_TrackProvider_GetDuration(EasingTrack* __this, ::app::Fuse::Animations::TrackAnimator* ta, int variant)
{
    return ((variant == 1) && ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(ta)->HasBack()) ? ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(ta)->DurationBack() : ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(ta)->Duration();
}

EasingTrack* EasingTrack__New_1(::uStatic* __this)
{
    EasingTrack* inst = (EasingTrack*)::uAllocObject(sizeof(EasingTrack), EasingTrack__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FastMatrixTransform__uType* FastMatrixTransform__typeof()
{
    static ::uStaticStrong<FastMatrixTransform__uType*> type;
    if (type != NULL) return type;

    type = (FastMatrixTransform__uType*)::uAllocClassType(sizeof(FastMatrixTransform__uType), "Fuse.Animations.FastMatrixTransform", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Transform__typeof());
    type->__fp_AppendTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*, float))FastMatrixTransform__AppendTo;
    type->__fp_get_IsFlat = (bool(*)(::app::Fuse::Transform*))FastMatrixTransform__get_IsFlat;
    type->__fp_PrependTo = (void(*)(::app::Fuse::Transform*, ::app::Fuse::FastMatrix*))FastMatrixTransform__PrependTo;

    type->SetStrongRefs(
        "Matrix", offsetof(FastMatrixTransform, Matrix));

    return type;
}

void FastMatrixTransform___ObjInit_1(FastMatrixTransform* __this)
{
    __this->Matrix = ::app::Fuse::FastMatrix__Identity(NULL);
    ::app::Fuse::Transform___ObjInit(__this);
}

void FastMatrixTransform__AppendTo(FastMatrixTransform* __this, ::app::Fuse::FastMatrix* m, float weight)
{
    ::uPtr< ::app::Fuse::FastMatrix*>(m)->AppendFastMatrix(__this->Matrix);
}

void FastMatrixTransform__Changed(FastMatrixTransform* __this)
{
    __this->OnMatrixChanged();
}

bool FastMatrixTransform__get_IsFlat(FastMatrixTransform* __this)
{
    ::app::Uno::Float4x4 m = ::uPtr< ::app::Fuse::FastMatrix*>(__this->Matrix)->Matrix();
    bool q = (((((::app::Uno::Math__Abs_8(NULL, m.M13) < 1e-05f) && (::app::Uno::Math__Abs_8(NULL, m.M23) < 1e-05f)) && (::app::Uno::Math__Abs_8(NULL, m.M43) < 1e-05f)) && (::app::Uno::Math__Abs_8(NULL, m.M14) < 1e-05f)) && (::app::Uno::Math__Abs_8(NULL, m.M24) < 1e-05f)) && (::app::Uno::Math__Abs_8(NULL, m.M34) < 1e-05f);
    return q;
}

FastMatrixTransform* FastMatrixTransform__New_1(::uStatic* __this)
{
    FastMatrixTransform* inst = (FastMatrixTransform*)::uAllocObject(sizeof(FastMatrixTransform), FastMatrixTransform__typeof());
    inst->_ObjInit_1();
    return inst;
}

void FastMatrixTransform__PrependTo(FastMatrixTransform* __this, ::app::Fuse::FastMatrix* m)
{
    ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependFastMatrix(__this->Matrix);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixer__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixer");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__bool__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<bool>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__float__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<float>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__float4__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<float4>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Elements.Visibility>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerHandle__Fuse_Transform__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerHandle<Fuse.Transform>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IMixerMaster__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IMixerMaster");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IResize__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IResize");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IResizeMode__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.IResizeMode");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* MasterPropertyGet__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.MasterPropertyGet");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Transform*> MasterTransform__identity;

MasterTransform__uType* MasterTransform__typeof()
{
    static ::uStaticStrong<MasterTransform__uType*> type;
    if (type != NULL) return type;

    type = (MasterTransform__uType*)::uAllocClassType(sizeof(MasterTransform__uType), "Fuse.Animations.MasterTransform", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::MasterBase__Fuse_Transform__typeof());
    type->__fp_get_PostLayout = (bool(*)(::app::Fuse::Animations::MasterBase__Fuse_Transform*))MasterTransform__get_PostLayout;
    type->__fp_OnActive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Transform*))MasterTransform__OnActive;
    type->__fp_OnInactive = (void(*)(::app::Fuse::Animations::MasterBase__Fuse_Transform*))MasterTransform__OnInactive;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixerMaster__typeof(), offsetof(MasterTransform__uType, __interface_0));

    type->SetStrongRefs(
        "FMT", offsetof(MasterTransform, FMT),
        "Node", offsetof(MasterTransform, Node));

    return type;
}

void MasterTransform___ObjInit_1(MasterTransform* __this, ::app::Fuse::Node* node, ::app::Fuse::Animations::MixerBase* mixerBase)
{
    ::app::Fuse::Animations::MasterBase__Fuse_Transform___ObjInit(__this, mixerBase);
    __this->Node = node;
}

void MasterTransform___TypeInit(::uStatic* __this)
{
    MasterTransform__identity = (::app::Fuse::Transform*)::app::Fuse::Translation__New_1(NULL);
}

bool MasterTransform__get_PostLayout(MasterTransform* __this)
{
    return true;
}

void MasterTransform__OnActive(MasterTransform* __this)
{
    __this->FMT = ::app::Fuse::Animations::FastMatrixTransform__New_1(NULL);
    ::app::Uno::Collections::ICollection__Fuse_Transform::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->Node)->Transforms()), (::app::Fuse::Transform*)__this->FMT);
}

void MasterTransform__OnInactive(MasterTransform* __this)
{
    ::app::Uno::Collections::ICollection__Fuse_Transform::Remove(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->Node)->Transforms()), (::app::Fuse::Transform*)__this->FMT);
    __this->FMT = NULL;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uObject*> Mixer___default;
::uStaticStrong< ::uObject*> Mixer___defaultDiscrete;
::uStaticStrong< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*> Mixer__PostMasters;
::uStaticStrong< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*> Mixer__PreMasters;

Mixer__uType* Mixer__typeof()
{
    static ::uStaticStrong<Mixer__uType*> type;
    if (type != NULL) return type;

    type = (Mixer__uType*)::uAllocClassType(sizeof(Mixer__uType), "Fuse.Animations.Mixer", false, 0, 0, 0);

    return type;
}

void Mixer___TypeInit(::uStatic* __this)
{
    Mixer___default = (::uObject*)::app::Fuse::Animations::AverageMixer__New_1(NULL);
    Mixer___defaultDiscrete = (::uObject*)::app::Fuse::Animations::DiscreteMixer__New_1(NULL);
    Mixer__PreMasters = ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster__New_1(NULL);
    Mixer__PostMasters = ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster__New_1(NULL);
}

void Mixer__AddMaster(::uStatic* __this, ::uObject* master, bool postLayout)
{
    ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster* list = postLayout ? Mixer__PostMasters : Mixer__PreMasters;
    int stage = postLayout ? 3 : 1;
    ::uDelegate* act = postLayout ? ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Mixer__CompletePost) : ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Mixer__CompletePre);

    if (::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(list)->Count() == 0)
    {
        ::app::Fuse::UpdateManager__AddAction(NULL, act, stage);
    }

    ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(list)->Add(master);
}

void Mixer__CompletePost(::uStatic* __this)
{
    {
        ::uObject* l = ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(Mixer__PostMasters)->DeferLock();

        try
        {
            {
                int c = ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(Mixer__PostMasters)->Count();

                for (int i = 0; i < c; ++i)
                {
                    ::app::Fuse::Animations::IMixerMaster::Complete(::uPtr< ::uObject*>(::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(Mixer__PostMasters)->Item(i)));
                }
            }
        }
        catch (const ::uThrowable& __t)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(l));
            throw __t;
        }
        // finally
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(l));
        }
    }
}

void Mixer__CompletePre(::uStatic* __this)
{
    {
        ::uObject* l = ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(Mixer__PreMasters)->DeferLock();

        try
        {
            {
                int c = ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(Mixer__PreMasters)->Count();

                for (int i = 0; i < c; ++i)
                {
                    ::app::Fuse::Animations::IMixerMaster::Complete(::uPtr< ::uObject*>(::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(Mixer__PreMasters)->Item(i)));
                }
            }
        }
        catch (const ::uThrowable& __t)
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(l));
            throw __t;
        }
        // finally
        {
            ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(l));
        }
    }
}

::uObject* Mixer__get_Default(::uStatic* __this)
{
    return Mixer___default;
}

::uObject* Mixer__get_DefaultDiscrete(::uStatic* __this)
{
    return Mixer___defaultDiscrete;
}

void Mixer__RemoveMaster(::uStatic* __this, ::uObject* master, bool postLayout)
{
    ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster* list = postLayout ? Mixer__PostMasters : Mixer__PreMasters;
    int stage = postLayout ? 3 : 1;
    ::uDelegate* act = postLayout ? ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Mixer__CompletePost) : ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Mixer__CompletePre);
    ::uPtr< ::app::Uno::Collections::ConcurrentCollection__Fuse_Animations_IMixerMaster*>(list)->Remove(master);

    if (list->Count() == 0)
    {
        ::app::Fuse::UpdateManager__RemoveAction(NULL, act, stage);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MixerBase__uType* MixerBase__typeof()
{
    static ::uStaticStrong<MixerBase__uType*> type;
    if (type != NULL) return type;

    type = (MixerBase__uType*)::uAllocClassType(sizeof(MixerBase__uType), "Fuse.Animations.MixerBase", false, 1, 2, 0);

    type->__interface_0.__fp_RegisterTransform = (::uObject*(*)(void*, ::app::Fuse::Node*, int, int))MixerBase__RegisterTransform;
    type->__interface_0.__fp_Register__float4 = (::uObject*(*)(void*, ::app::Uno::UX::Property__float4*, int))MixerBase__Register__float4;
    type->__interface_0.__fp_Register__float = (::uObject*(*)(void*, ::app::Uno::UX::Property__float*, int))MixerBase__Register__float;
    type->__interface_0.__fp_Register__Fuse_Elements_Visibility = (::uObject*(*)(void*, ::app::Uno::UX::Property__Fuse_Elements_Visibility*, int))MixerBase__Register__Fuse_Elements_Visibility;
    type->__interface_0.__fp_Register__bool = (::uObject*(*)(void*, ::app::Uno::UX::Property__bool*, int))MixerBase__Register__bool;

    type->SetInterfaces(
        ::app::Fuse::Animations::IMixer__typeof(), offsetof(MixerBase__uType, __interface_0));

    type->SetStrongRefs(
        "_propHandle", offsetof(MixerBase, _propHandle),
        "Masters", offsetof(MixerBase, Masters));

    return type;
}

void MixerBase___ObjInit(MixerBase* __this)
{
    __this->Masters = ::app::Uno::Collections::Dictionary__object__object__New_1(NULL);
    __this->_propHandle = ::app::Fuse::Properties__CreateHandle(NULL);
}

::uObject* MixerBase__Register__bool(MixerBase* __this, ::app::Uno::UX::Property__bool* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__bool(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__bool* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__bool*>(master, ::app::Fuse::Animations::MasterBase__bool__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__bool__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__float(MixerBase* __this, ::app::Uno::UX::Property__float* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__float(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__float* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__float*>(master, ::app::Fuse::Animations::MasterBase__float__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__float__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__float4(MixerBase* __this, ::app::Uno::UX::Property__float4* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__float4(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__float4* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__float4*>(master, ::app::Fuse::Animations::MasterBase__float4__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__float4__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__Register__Fuse_Elements_Visibility(MixerBase* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* property, int mode)
{
    ::uObject* master;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->TryGetValue((::uObject*)property, &master))
    {
        master = ::uCast< ::uObject*>((::uObject*)__this->CreateMaster__Fuse_Elements_Visibility(property, __this), ::uObject__typeof());
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Add((::uObject*)property, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Elements_Visibility__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Elements_Visibility__New_1(NULL, masterT, mode, 0);
}

::uObject* MixerBase__RegisterTransform(MixerBase* __this, ::app::Fuse::Node* element, int mode, int priority)
{
    ::uObject* master;

    if (!::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(element)->Properties())->TryGet(__this->_propHandle, &master))
    {
        master = (::uObject*)__this->CreateMasterTransform(element, __this);
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(element)->Properties())->Set(__this->_propHandle, master);
    }

    ::app::Fuse::Animations::MasterBase__Fuse_Transform* masterT = ::uCast< ::app::Fuse::Animations::MasterBase__Fuse_Transform*>(master, ::app::Fuse::Animations::MasterBase__Fuse_Transform__typeof());
    return (::uObject*)::app::Fuse::Animations::MixerHandle__Fuse_Transform__New_1(NULL, masterT, mode, priority);
}

void MixerBase__Unused(MixerBase* __this, ::uObject* mb)
{
    ::uObject* prop = ::uAs< ::uObject*>(mb, ::app::Fuse::Animations::MasterPropertyGet__typeof());

    if (prop != NULL)
    {
        ::uPtr< ::app::Uno::Collections::Dictionary__object__object*>(__this->Masters)->Remove(::app::Fuse::Animations::MasterPropertyGet::GetPropertyObject(::uPtr< ::uObject*>(prop)));
    }

    ::app::Fuse::Animations::MasterTransform* trans = ::uAs< ::app::Fuse::Animations::MasterTransform*>(mb, ::app::Fuse::Animations::MasterTransform__typeof());

    if (trans != NULL)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::Animations::MasterTransform*>(trans)->Node)->Properties())->Clear(__this->_propHandle);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* MixOp__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Animations.MixOp", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Add", 0LL,
        "Weight", 1LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Move__uType* Move__typeof()
{
    static ::uStaticStrong<Move__uType*> type;
    if (type != NULL) return type;

    type = (Move__uType*)::uAllocClassType(sizeof(Move__uType), "Fuse.Animations.Move", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TransformAnimator__Fuse_Translation__typeof());
    type->__fp_Update = (void(*)(::app::Fuse::Animations::TransformAnimator__Fuse_Translation*, ::app::Fuse::Node*, ::app::Fuse::Translation*, ::app::Uno::Float4))Move__Update;

    type->SetStrongRefs(
        "_RelativeNode", offsetof(Move, _RelativeNode),
        "_relativeTo", offsetof(Move, _relativeTo));

    return type;
}

void Move___ObjInit_3(Move* __this)
{
    __this->_relativeTo = ::app::Fuse::TranslationModes__Local;
    ::app::Fuse::Animations::TransformAnimator__Fuse_Translation___ObjInit_2(__this);
    __this->Priority(1000);
}

::app::Fuse::Node* Move__get_RelativeNode(Move* __this)
{
    return __this->_RelativeNode;
}

::uObject* Move__get_RelativeTo(Move* __this)
{
    return __this->_relativeTo;
}

Move* Move__New_1(::uStatic* __this)
{
    Move* inst = (Move*)::uAllocObject(sizeof(Move), Move__typeof());
    inst->_ObjInit_3();
    return inst;
}

void Move__set_RelativeNode(Move* __this, ::app::Fuse::Node* value)
{
    __this->_RelativeNode = value;
}

void Move__set_RelativeTo(Move* __this, ::uObject* value)
{
    __this->_relativeTo = value;
}

void Move__Update(Move* __this, ::app::Fuse::Node* elm, ::app::Fuse::Translation* t, ::app::Uno::Float4 value)
{
    ::app::Fuse::Node* ind_123;
    ::uPtr< ::app::Fuse::Translation*>(t)->RelativeNode((ind_123 = __this->RelativeNode(), (ind_123 != NULL) ? ind_123 : elm));
    t->RelativeTo(__this->RelativeTo());
    t->Vector(::app::Uno::Float3__New_2(NULL, value.X, value.Y, value.Z));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Nothing__uType* Nothing__typeof()
{
    static ::uStaticStrong<Nothing__uType*> type;
    if (type != NULL) return type;

    type = (Nothing__uType*)::uAllocClassType(sizeof(Nothing__uType), "Fuse.Animations.Nothing", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Nothing__CreateState;

    return type;
}

void Nothing___ObjInit_2(Nothing* __this)
{
    ::app::Fuse::Animations::TrackAnimator___ObjInit_1(__this);
}

::app::Fuse::Animations::AnimatorState* Nothing__CreateState(Nothing* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::NothingAnimatorState__New_1(NULL, __this, p);
}

Nothing* Nothing__New_1(::uStatic* __this)
{
    Nothing* inst = (Nothing*)::uAllocObject(sizeof(Nothing), Nothing__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NothingAnimatorState__uType* NothingAnimatorState__typeof()
{
    static ::uStaticStrong<NothingAnimatorState__uType*> type;
    if (type != NULL) return type;

    type = (NothingAnimatorState__uType*)::uAllocClassType(sizeof(NothingAnimatorState__uType), "Fuse.Animations.NothingAnimatorState", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());

    return type;
}

void NothingAnimatorState___ObjInit_2(NothingAnimatorState* __this, ::app::Fuse::Animations::Nothing* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
}

NothingAnimatorState* NothingAnimatorState__New_1(::uStatic* __this, ::app::Fuse::Animations::Nothing* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    NothingAnimatorState* inst = (NothingAnimatorState*)::uAllocObject(sizeof(NothingAnimatorState), NothingAnimatorState__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

OpenAnimator__uType* OpenAnimator__typeof()
{
    static ::uStaticStrong<OpenAnimator__uType*> type;
    if (type != NULL) return type;

    type = (OpenAnimator__uType*)::uAllocClassType(sizeof(OpenAnimator__uType), "Fuse.Animations.OpenAnimator", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::Animator__typeof());
    type->__fp_get_AnimatorVariant = (int(*)(::app::Fuse::Animations::Animator*))OpenAnimator__get_AnimatorVariant;
    type->__fp_GetDurationWithDelay = (double(*)(::app::Fuse::Animations::Animator*, int))OpenAnimator__GetDurationWithDelay;

    return type;
}

int OpenAnimator__get_AnimatorVariant(OpenAnimator* __this)
{
    return 1;
}

double OpenAnimator__get_Duration(OpenAnimator* __this)
{
    return __this->_duration;
}

bool OpenAnimator__get_HasDuration(OpenAnimator* __this)
{
    return __this->_hasDuration;
}

double OpenAnimator__GetDelay(OpenAnimator* __this, int dir, double totalDuration)
{
    return __this->Delay();
}

double OpenAnimator__GetDurationWithDelay(OpenAnimator* __this, int dir)
{
    return __this->Delay() + __this->Duration();
}

void OpenAnimator__set_Duration(OpenAnimator* __this, double value)
{
    __this->_duration = value;
    __this->_hasDuration = true;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

OpenAnimatorState__uType* OpenAnimatorState__typeof()
{
    static ::uStaticStrong<OpenAnimatorState__uType*> type;
    if (type != NULL) return type;

    type = (OpenAnimatorState__uType*)::uAllocClassType(sizeof(OpenAnimatorState__uType), "Fuse.Animations.OpenAnimatorState", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::AnimatorState__typeof());
    type->__fp_SeekProgress = (bool(*)(::app::Fuse::Animations::AnimatorState*, double, double, int, double))OpenAnimatorState__SeekProgress;
    type->__fp_SeekTime = (bool(*)(::app::Fuse::Animations::AnimatorState*, double, double, int, double))OpenAnimatorState__SeekTime;

    type->SetStrongRefs(
        "Animator", offsetof(OpenAnimatorState, Animator));

    return type;
}

void OpenAnimatorState___ObjInit_1(OpenAnimatorState* __this, ::app::Fuse::Animations::OpenAnimator* animator, ::app::Fuse::Animations::CreateStateParams* p, ::app::Fuse::Node* useNode)
{
    __this->_seekDone = true;
    ::app::Fuse::Animations::AnimatorState___ObjInit(__this, p, useNode);
    __this->Animator = animator;
}

bool OpenAnimatorState__SeekProgress(OpenAnimatorState* __this, double progress, double interval, int dir, double strength)
{
    return __this->SeekTime(progress * __this->TotalDuration, interval, dir, strength);
}

bool OpenAnimatorState__SeekTime(OpenAnimatorState* __this, double nominal, double interval, int dir, double strength)
{
    double delay = ::uPtr< ::app::Fuse::Animations::OpenAnimator*>(__this->Animator)->GetDelay(__this->Variant, __this->TotalDuration);
    bool on = (dir == 0) ? (nominal > (delay - 9.9999997473787516e-06)) : (nominal > (delay + 9.9999997473787516e-06));

    if (::uPtr< ::app::Fuse::Animations::OpenAnimator*>(__this->Animator)->HasDuration() && (nominal > ((delay + ::uPtr< ::app::Fuse::Animations::OpenAnimator*>(__this->Animator)->Duration()) - 9.9999997473787516e-06)))
    {
        on = false;
    }

    bool mayEnd = (dir == 0) ? (nominal >= (::uPtr< ::app::Fuse::Animations::OpenAnimator*>(__this->Animator)->GetDurationWithDelay(__this->Variant) - 9.9999997473787516e-06)) : (nominal <= (delay + 9.9999997473787516e-06));

    if (on || !__this->_seekDone)
    {
        __this->_seekDone = __this->Seek(on, (float)interval, (float)strength, dir);
    }

    return __this->_seekDone && mayEnd;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Player__uType* Player__typeof()
{
    static ::uStaticStrong<Player__uType*> type;
    if (type != NULL) return type;

    type = (Player__uType*)::uAllocClassType(sizeof(Player__uType), "Fuse.Animations.Player", false, 0, 8, 0);

    type->SetStrongRefs(
        "_Animation", offsetof(Player, _Animation),
        "_DoneCallback", offsetof(Player, _DoneCallback),
        "_Node", offsetof(Player, _Node),
        "_progress", offsetof(Player, _progress),
        "_states", offsetof(Player, _states),
        "_strength", offsetof(Player, _strength),
        "ProgressUpdated", offsetof(Player, ProgressUpdated),
        "StrengthUpdated", offsetof(Player, StrengthUpdated));

    return type;
}

void Player___ObjInit(Player* __this, ::app::Fuse::Node* elm, ::app::Fuse::Animations::TriggerAnimation* animation, int variant)
{
    __this->_progress = ::app::Fuse::Animations::PlayerPart__New_1(NULL, 0.0);
    __this->_seekDirection = 1;
    __this->_strength = ::app::Fuse::Animations::PlayerPart__New_1(NULL, 1.0);
    __this->Animation(animation);
    __this->Node(elm);
    __this->Variant(variant);
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->AlterDuration(::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->GetTotalDuration(__this->Variant()));
}

void Player__CheckUpdate(Player* __this, bool interval)
{
    bool running = false;

    if (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Animate)
    {
        running = true;
        ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Step();

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ProgressUpdated, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->ProgressUpdated)->InvokeVoid< ::uObject*>((::uObject*)__this);
        }
    }

    if (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Animate)
    {
        running = true;
        ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Step();

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->StrengthUpdated, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->StrengthUpdated)->InvokeVoid< ::uObject*>((::uObject*)__this);
        }
    }

    bool stable = __this->UpdateStates(interval);

    if (stable && !running)
    {
        __this->Stop();
    }
    else
    {
        __this->Start();
    }

    if (!running)
    {
        __this->Done();
    }
}

void Player__CheckUpdateAction(Player* __this)
{
    __this->CheckUpdate(true);
}

void Player__Disable(Player* __this)
{
    __this->Stop();

    if (__this->_states != NULL)
    {
        for (int i = 0; i < ::uPtr< ::uArray*>(__this->_states)->Length(); i++)
        {
            ::uPtr< ::app::Fuse::Animations::AnimatorState*>(::uPtr< ::uArray*>(__this->_states)->Item< ::app::Fuse::Animations::AnimatorState*>(i))->Disable();
        }

        __this->_states = NULL;
    }
}

void Player__Done(Player* __this)
{
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Animate = false;
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Animate = false;

    if (!__this->_isDone)
    {
        __this->_isDone = true;

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->DoneCallback(), NULL))
        {
            ::uPtr< ::uDelegate*>(__this->DoneCallback())->InvokeVoid< ::uObject*>((::uObject*)__this);
        }
    }
}

void Player__FadeIn(Player* __this, double time)
{
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->AlterDuration(time);
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->PlayToEnd();
    __this->CheckUpdate(false);
}

void Player__FadeOut(Player* __this, double time)
{
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->AlterDuration(time);
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->PlayToStart();
    __this->CheckUpdate(false);
}

::app::Fuse::Animations::TriggerAnimation* Player__get_Animation(Player* __this)
{
    return __this->_Animation;
}

bool Player__get_AnyEffect(Player* __this)
{
    return (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Current > 0.0) && (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Current > 0.0);
}

::uDelegate* Player__get_DoneCallback(Player* __this)
{
    return __this->_DoneCallback;
}

bool Player__get_IsSyncState(Player* __this)
{
    return (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Current == 0.0) || (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Progress() == 1.0);
}

::app::Fuse::Node* Player__get_Node(Player* __this)
{
    return __this->_Node;
}

double Player__get_Progress(Player* __this)
{
    return ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Progress();
}

double Player__get_RemainTime(Player* __this)
{
    if (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->IsProgress || (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Duration < 9.9999997473787516e-06))
    {
        return 0.0;
    }

    return (__this->Variant() == 0) ? (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Duration - ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Current) : ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Current;
}

::uArray* Player__get_States(Player* __this)
{
    if (__this->_states == NULL)
    {
        __this->_states = ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->CreateAnimatorsState(__this->Variant(), __this->Node());
    }

    return __this->_states;
}

double Player__get_Strength(Player* __this)
{
    return ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Progress();
}

double Player__get_TotalDuration(Player* __this)
{
    return ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Duration;
}

int Player__get_Variant(Player* __this)
{
    return __this->_Variant;
}

Player* Player__New_1(::uStatic* __this, ::app::Fuse::Node* elm, ::app::Fuse::Animations::TriggerAnimation* animation, int variant)
{
    Player* inst = (Player*)::uAllocObject(sizeof(Player), Player__typeof());
    inst->_ObjInit(elm, animation, variant);
    return inst;
}

void Player__PlayToEnd(Player* __this)
{
    __this->_seekDirection = 0;
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->PlayToEnd();
    __this->_isDone = false;
    __this->CheckUpdate(false);
}

void Player__PlayToProgress(Player* __this, double progress)
{
    if (progress != ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Progress())
    {
        __this->_seekDirection = (progress > ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Progress()) ? 0 : 1;
    }

    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->PlayToProgress(progress);
    __this->_isDone = false;
    __this->CheckUpdate(false);
}

void Player__PlayToStart(Player* __this)
{
    __this->_seekDirection = 1;
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->PlayToStart();
    __this->_isDone = false;
    __this->CheckUpdate(false);
}

void Player__SeekProgress(Player* __this, double progress, bool triggerUpdate)
{
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->SeekProgress(progress);
    __this->_isDone = true;
    __this->CheckUpdate(false);

    if (triggerUpdate && ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ProgressUpdated, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ProgressUpdated)->InvokeVoid< ::uObject*>((::uObject*)__this);
    }
}

void Player__set_Animation(Player* __this, ::app::Fuse::Animations::TriggerAnimation* value)
{
    __this->_Animation = value;
}

void Player__set_DoneCallback(Player* __this, ::uDelegate* value)
{
    __this->_DoneCallback = value;
}

void Player__set_Node(Player* __this, ::app::Fuse::Node* value)
{
    __this->_Node = value;
}

void Player__set_Strength(Player* __this, double value)
{
    ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->SeekProgress(value);
    __this->CheckUpdate(false);
}

void Player__set_Variant(Player* __this, int value)
{
    __this->_Variant = value;
}

void Player__Start(Player* __this)
{
    if (!__this->_isStarted)
    {
        __this->_isStarted = true;

        if (__this->Node() != NULL)
        {
            ::uPtr< ::app::Fuse::Node*>(__this->Node())->add_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Player__Update, __this));
        }
        else
        {
            ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Player__CheckUpdateAction, __this), 0);
        }
    }
}

void Player__Stop(Player* __this)
{
    if (__this->_isStarted)
    {
        __this->_isStarted = false;

        if (__this->Node() != NULL)
        {
            ::uPtr< ::app::Fuse::Node*>(__this->Node())->remove_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Player__Update, __this));
        }
        else
        {
            ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Player__CheckUpdateAction, __this), 0);
        }

        if (!__this->AnyEffect())
        {
            __this->Disable();
        }
    }
}

void Player__Update(Player* __this, ::uObject* s, ::uObject* a)
{
    __this->CheckUpdate(true);
}

bool Player__UpdateStates(Player* __this, bool isInterval)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    bool allStable = true;
    double interval = isInterval ? ::app::Fuse::Time__get_FrameInterval(NULL) : 0.0;

    if (__this->_seekDirection == 1)
    {
        interval = -interval;
    }

    for (array_123 = __this->States(), index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Fuse::Animations::AnimatorState* s = ::uPtr< ::uArray*>(array_123)->Item< ::app::Fuse::Animations::AnimatorState*>(index_124);
        bool stable = bool();

        if (::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->IsProgress)
        {
            stable = ::uPtr< ::app::Fuse::Animations::AnimatorState*>(s)->SeekProgress(::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Current, interval, __this->_seekDirection, ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Progress());
        }
        else
        {
            stable = s->SeekTime(::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_progress)->Current, interval, __this->_seekDirection, ::uPtr< ::app::Fuse::Animations::PlayerPart*>(__this->_strength)->Progress());
        }

        allStable = allStable && stable;
    }

    return allStable;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PlayerPart__uType* PlayerPart__typeof()
{
    static ::uStaticStrong<PlayerPart__uType*> type;
    if (type != NULL) return type;

    type = (PlayerPart__uType*)::uAllocClassType(sizeof(PlayerPart__uType), "Fuse.Animations.PlayerPart", false, 0, 0, 0);

    return type;
}

void PlayerPart___ObjInit(PlayerPart* __this, double currentProgress)
{
    __this->IsProgress = true;
    __this->Current = currentProgress;
}

void PlayerPart__AlterDuration(PlayerPart* __this, double t)
{
    double p = __this->Progress();
    __this->Duration = t;
    __this->SeekProgress(p);
}

double PlayerPart__get_Progress(PlayerPart* __this)
{
    if (__this->IsProgress)
    {
        return __this->Current;
    }
    else
    {
        return ::app::Uno::Math__Clamp_7(NULL, __this->Current / __this->Duration, 0.0, 1.0);
    }
}

void PlayerPart__MarkSource(PlayerPart* __this)
{
    __this->Source = __this->Current;
    __this->SourceTime = ::app::Fuse::Time__get_FrameTime(NULL);
}

PlayerPart* PlayerPart__New_1(::uStatic* __this, double currentProgress)
{
    PlayerPart* inst = (PlayerPart*)::uAllocObject(sizeof(PlayerPart), PlayerPart__typeof());
    inst->_ObjInit(currentProgress);
    return inst;
}

void PlayerPart__PlayToEnd(PlayerPart* __this)
{
    __this->PlayToProgress(1.0);
}

void PlayerPart__PlayToProgress(PlayerPart* __this, double progress)
{
    __this->Animate = true;
    __this->MarkSource();

    if (__this->Duration < 9.9999997473787516e-06)
    {
        __this->IsProgress = true;
        __this->Target = progress;
    }
    else
    {
        __this->IsProgress = false;
        __this->Target = progress * __this->Duration;
    }
}

void PlayerPart__PlayToStart(PlayerPart* __this)
{
    __this->PlayToProgress(0.0);
}

void PlayerPart__SeekProgress(PlayerPart* __this, double p)
{
    p = ::app::Uno::Math__Clamp_7(NULL, p, 0.0, 1.0);
    __this->Animate = false;

    if (__this->Duration < 9.9999997473787516e-06)
    {
        __this->IsProgress = true;
        __this->Current = p;
    }
    else
    {
        __this->IsProgress = false;
        __this->Current = p * __this->Duration;
    }
}

bool PlayerPart__Step(PlayerPart* __this)
{
    double elapsed = ::app::Fuse::Time__get_FrameTime(NULL) - __this->SourceTime;

    if (__this->Target > __this->Source)
    {
        __this->Current = __this->IsProgress ? 1.0 : ::app::Uno::Math__Min_10(NULL, elapsed + __this->Source, __this->Duration);
    }
    else
    {
        __this->Current = __this->IsProgress ? 0.0 : ::app::Uno::Math__Max_7(NULL, __this->Source - elapsed, 0.0);
    }

    if (((__this->Target >= __this->Source) && (__this->Current >= __this->Target)) || ((__this->Target <= __this->Source) && (__this->Current <= __this->Target)))
    {
        __this->Current = __this->Target;
        __this->Animate = false;
        return true;
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Resize__uType* Resize__typeof()
{
    static ::uStaticStrong<Resize__uType*> type;
    if (type != NULL) return type;

    type = (Resize__uType*)::uAllocClassType(sizeof(Resize__uType), "Fuse.Animations.Resize", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Resize__CreateState;

    type->SetStrongRefs(
        "_resizeMode", offsetof(Resize, _resizeMode),
        "_Target", offsetof(Resize, _Target));

    return type;
}

::app::Fuse::Animations::AnimatorState* Resize__CreateState(Resize* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::ResizeAnimatorState__New_1(NULL, __this, p);
}

::uObject* Resize__get_RelativeTo(Resize* __this)
{
    return __this->_resizeMode;
}

::app::Fuse::Node* Resize__get_Target(Resize* __this)
{
    return __this->_Target;
}

void Resize__set_RelativeTo(Resize* __this, ::uObject* value)
{
    __this->_resizeMode = value;
}

void Resize__set_Target(Resize* __this, ::app::Fuse::Node* value)
{
    __this->_Target = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ResizeAnimatorState__uType* ResizeAnimatorState__typeof()
{
    static ::uStaticStrong<ResizeAnimatorState__uType*> type;
    if (type != NULL) return type;

    type = (ResizeAnimatorState__uType*)::uAllocClassType(sizeof(ResizeAnimatorState__uType), "Fuse.Animations.ResizeAnimatorState", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ResizeAnimatorState__SeekValue;

    type->SetStrongRefs(
        "_resize", offsetof(ResizeAnimatorState, _resize));

    return type;
}

void ResizeAnimatorState___ObjInit_2(ResizeAnimatorState* __this, ::app::Fuse::Animations::Resize* r, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)r, p, ::uPtr< ::app::Fuse::Animations::Resize*>(r)->Target());
    __this->_resize = r;
}

ResizeAnimatorState* ResizeAnimatorState__New_1(::uStatic* __this, ::app::Fuse::Animations::Resize* r, ::app::Fuse::Animations::CreateStateParams* p)
{
    ResizeAnimatorState* inst = (ResizeAnimatorState*)::uAllocObject(sizeof(ResizeAnimatorState), ResizeAnimatorState__typeof());
    inst->_ObjInit_2(r, p);
    return inst;
}

void ResizeAnimatorState__SeekValue(ResizeAnimatorState* __this, ::app::Uno::Float4 value, float strength)
{
    ::uObject* ir = ::uAs< ::uObject*>(__this->Node, ::app::Fuse::Animations::IResize__typeof());

    if (ir == NULL)
    {
        return;
    }

    if (::uPtr< ::app::Fuse::Animations::Resize*>(__this->_resize)->RelativeTo() == NULL)
    {
        return;
    }

    ::app::Uno::Float2 oldSize = ::app::Uno::Float2();
    ::app::Uno::Float2 newSize = ::app::Uno::Float2();

    if (::app::Fuse::Animations::IResizeMode::GetSizeChange(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Resize*>(__this->_resize)->RelativeTo()), __this->Node, &oldSize, &newSize))
    {
        ::app::Uno::Float2 sz = ::app::Uno::Math__Lerp_6(NULL, newSize, oldSize, strength);
        ::app::Fuse::Animations::IResize::SetSize(::uPtr< ::uObject*>(ir), sz);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Rotate__uType* Rotate__typeof()
{
    static ::uStaticStrong<Rotate__uType*> type;
    if (type != NULL) return type;

    type = (Rotate__uType*)::uAllocClassType(sizeof(Rotate__uType), "Fuse.Animations.Rotate", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::TransformAnimator__Fuse_Rotation__typeof());
    type->__fp_Update = (void(*)(::app::Fuse::Animations::TransformAnimator__Fuse_Rotation*, ::app::Fuse::Node*, ::app::Fuse::Rotation*, ::app::Uno::Float4))Rotate__Update;

    return type;
}

void Rotate__Update(Rotate* __this, ::app::Fuse::Node* elm, ::app::Fuse::Rotation* t, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::Rotation*>(t)->EulerAngle(::app::Uno::Float3__New_2(NULL, value.X, value.Y, value.Z));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Scale__uType* Scale__typeof()
{
    static ::uStaticStrong<Scale__uType*> type;
    if (type != NULL) return type;

    type = (Scale__uType*)::uAllocClassType(sizeof(Scale__uType), "Fuse.Animations.Scale", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::TransformAnimator__Fuse_Scaling__typeof());
    type->__fp_Update = (void(*)(::app::Fuse::Animations::TransformAnimator__Fuse_Scaling*, ::app::Fuse::Node*, ::app::Fuse::Scaling*, ::app::Uno::Float4))Scale__Update;

    return type;
}

void Scale___ObjInit_3(Scale* __this)
{
    ::app::Fuse::Animations::TransformAnimator__Fuse_Scaling___ObjInit_2(__this);
    __this->Priority(2000);
    __this->_vectorValue = ::app::Uno::Float4__New_3(NULL, 1.0f);
}

float Scale__get_Factor(Scale* __this)
{
    return __this->X();
}

Scale* Scale__New_1(::uStatic* __this)
{
    Scale* inst = (Scale*)::uAllocObject(sizeof(Scale), Scale__typeof());
    inst->_ObjInit_3();
    return inst;
}

void Scale__set_Factor(Scale* __this, float value)
{
    __this->_vectorValue = ::app::Uno::Float4__New_3(NULL, value);
}

void Scale__Update(Scale* __this, ::app::Fuse::Node* elm, ::app::Fuse::Scaling* t, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::Scaling*>(t)->Vector(::app::Uno::Float3__New_2(NULL, value.X, value.Y, value.Z));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* SeekDirection__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Animations.SeekDirection", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Skew__uType* Skew__typeof()
{
    static ::uStaticStrong<Skew__uType*> type;
    if (type != NULL) return type;

    type = (Skew__uType*)::uAllocClassType(sizeof(Skew__uType), "Fuse.Animations.Skew", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Animations::TransformAnimator__Fuse_Shear__typeof());
    type->__fp_Update = (void(*)(::app::Fuse::Animations::TransformAnimator__Fuse_Shear*, ::app::Fuse::Node*, ::app::Fuse::Shear*, ::app::Uno::Float4))Skew__Update;

    return type;
}

void Skew__Update(Skew* __this, ::app::Fuse::Node* elm, ::app::Fuse::Shear* t, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::Shear*>(t)->Vector(::app::Uno::Float2__New_2(NULL, value.X, value.Y));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Spin__uType* Spin__typeof()
{
    static ::uStaticStrong<Spin__uType*> type;
    if (type != NULL) return type;

    type = (Spin__uType*)::uAllocClassType(sizeof(Spin__uType), "Fuse.Animations.Spin", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Animations::OpenAnimator__typeof());
    type->__fp_CreateState = (::app::Fuse::Animations::AnimatorState*(*)(::app::Fuse::Animations::Animator*, ::app::Fuse::Animations::CreateStateParams*))Spin__CreateState;

    type->SetStrongRefs(
        "_Target", offsetof(Spin, _Target));

    return type;
}

::app::Fuse::Animations::AnimatorState* Spin__CreateState(Spin* __this, ::app::Fuse::Animations::CreateStateParams* p)
{
    return (::app::Fuse::Animations::AnimatorState*)::app::Fuse::Animations::SpinState__New_1(NULL, __this, p);
}

double Spin__get_Frequency(Spin* __this)
{
    return __this->_hertz;
}

::app::Fuse::Node* Spin__get_Target(Spin* __this)
{
    return __this->_Target;
}

void Spin__set_Frequency(Spin* __this, double value)
{
    __this->_hertz = value;
}

void Spin__set_Target(Spin* __this, ::app::Fuse::Node* value)
{
    __this->_Target = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SpinState__uType* SpinState__typeof()
{
    static ::uStaticStrong<SpinState__uType*> type;
    if (type != NULL) return type;

    type = (SpinState__uType*)::uAllocClassType(sizeof(SpinState__uType), "Fuse.Animations.SpinState", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Animations::OpenAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))SpinState__Disable;
    type->__fp_Seek = (bool(*)(::app::Fuse::Animations::OpenAnimatorState*, bool, float, float, int))SpinState__Seek;

    type->SetStrongRefs(
        "Animator", offsetof(SpinState, Animator_1),
        "mixHandle", offsetof(SpinState, mixHandle),
        "transform", offsetof(SpinState, transform));

    return type;
}

void SpinState___ObjInit_2(SpinState* __this, ::app::Fuse::Animations::Spin* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    __this->transform = ::app::Fuse::Rotation__New_1(NULL);
    ::app::Fuse::Animations::OpenAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::OpenAnimator*)animator, p, ::uPtr< ::app::Fuse::Animations::Spin*>(animator)->Target());
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::RegisterTransform(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Spin*>(__this->Animator_1)->Mixer), __this->Node, ::uPtr< ::app::Fuse::Animations::Spin*>(__this->Animator_1)->MixOp(), 3000);
}

void SpinState__Disable(SpinState* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    __this->degrees = 0.0;
    ::app::Fuse::Animations::IMixerHandle__Fuse_Transform::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

SpinState* SpinState__New_1(::uStatic* __this, ::app::Fuse::Animations::Spin* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    SpinState* inst = (SpinState*)::uAllocObject(sizeof(SpinState), SpinState__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

bool SpinState__Seek(SpinState* __this, bool on, float interval, float strength, int dir)
{
    if ((__this->mixHandle == NULL) || (__this->transform == NULL))
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Invalid seek"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno"), 2432);
        return true;
    }

    bool done = false;
    double oldDegrees = __this->degrees;
    __this->degrees = __this->degrees + ((double)(interval * 360.0f) * ::uPtr< ::app::Fuse::Animations::Spin*>(__this->Animator_1)->Frequency());

    if (on)
    {
        __this->degrees = ::app::Uno::Math__Mod_3(NULL, __this->degrees, 360.0);
    }
    else if ((((oldDegrees <= 9.9999997473787516e-06) || (__this->degrees <= 9.9999997473787516e-06)) || (oldDegrees >= 360.0)) || (__this->degrees >= 360.0))
    {
        __this->degrees = 0.0;
        done = true;
    }

    ::uPtr< ::app::Fuse::Rotation*>(__this->transform)->Degrees((float)__this->degrees);
    ::app::Fuse::Animations::IMixerHandle__Fuse_Transform::Set(::uPtr< ::uObject*>(__this->mixHandle), (::app::Fuse::Transform*)__this->transform, strength);
    return done;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TrackAnimator__uType* TrackAnimator__typeof()
{
    static ::uStaticStrong<TrackAnimator__uType*> type;
    if (type != NULL) return type;

    type = (TrackAnimator__uType*)::uAllocClassType(sizeof(TrackAnimator__uType), "Fuse.Animations.TrackAnimator", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Animations::Animator__typeof());
    type->__fp_get_AnimatorVariant = (int(*)(::app::Fuse::Animations::Animator*))TrackAnimator__get_AnimatorVariant;
    type->__fp_GetDurationWithDelay = (double(*)(::app::Fuse::Animations::Animator*, int))TrackAnimator__GetDurationWithDelay;

    type->SetStrongRefs(
        "_continuousProvider", offsetof(TrackAnimator, _continuousProvider),
        "_discreteProvider", offsetof(TrackAnimator, _discreteProvider),
        "_objectValue", offsetof(TrackAnimator, _objectValue));

    return type;
}

void TrackAnimator___ObjInit_1(TrackAnimator* __this)
{
    __this->_continuousProvider = (::uObject*)::app::Fuse::Animations::EasingTrack__Singleton;
    ::app::Fuse::Animations::Animator___ObjInit(__this);
}

int TrackAnimator__get_AnimatorVariant(TrackAnimator* __this)
{
    if (__this->_discreteProvider != NULL)
    {
        return ::app::Fuse::Animations::TrackProvider::GetAnimatorVariant(::uPtr< ::uObject*>(__this->_discreteProvider), __this);
    }
    else if (__this->_continuousProvider != NULL)
    {
        return ::app::Fuse::Animations::TrackProvider::GetAnimatorVariant(::uPtr< ::uObject*>(__this->_continuousProvider), __this);
    }

    return 0;
}

double TrackAnimator__get_Delay_1(TrackAnimator* __this)
{
    return __this->_Delay_1;
}

double TrackAnimator__get_DelayBack(TrackAnimator* __this)
{
    return __this->_hasDelayBack ? __this->_delayBack : 0.0;
}

double TrackAnimator__get_Duration(TrackAnimator* __this)
{
    return __this->_Duration;
}

double TrackAnimator__get_DurationBack(TrackAnimator* __this)
{
    return __this->_hasDurationBack ? __this->_durationBack : __this->Duration();
}

int TrackAnimator__get_Easing(TrackAnimator* __this)
{
    return __this->_easing;
}

int TrackAnimator__get_EasingBack(TrackAnimator* __this)
{
    return __this->_hasEasingBack ? __this->_easingBack : __this->_easing;
}

bool TrackAnimator__get_HasBack(TrackAnimator* __this)
{
    return (__this->_hasDelayBack || __this->_hasDurationBack) || __this->_hasEasingBack;
}

double TrackAnimator__GetDurationWithDelay(TrackAnimator* __this, int dir)
{
    double duration = 0.0;

    if (__this->_discreteProvider != NULL)
    {
        duration = ::app::Fuse::Animations::TrackProvider::GetDuration(::uPtr< ::uObject*>(__this->_discreteProvider), __this, dir);
    }
    else if (__this->_continuousProvider != NULL)
    {
        duration = ::app::Fuse::Animations::TrackProvider::GetDuration(::uPtr< ::uObject*>(__this->_continuousProvider), __this, dir);
    }

    return (((dir == 1) && __this->HasBack()) ? __this->DelayBack() : __this->Delay_1()) + duration;
}

::uObject* TrackAnimator__GetProvider(TrackAnimator* __this, int variant)
{
    ::uObject* ind_123 = __this->_discreteProvider;
    return (ind_123 != NULL) ? ind_123 : __this->_continuousProvider;
}

void TrackAnimator__MarkDiscrete(TrackAnimator* __this)
{
    __this->_discreteProvider = (::uObject*)::app::Fuse::Animations::DiscreteSingleTrack__Singleton;
    __this->_continuousProvider = NULL;
    __this->_isDiscrete = true;
}

void TrackAnimator__set_Delay_1(TrackAnimator* __this, double value)
{
    __this->_Delay_1 = value;
}

void TrackAnimator__set_DelayBack(TrackAnimator* __this, double value)
{
    __this->_delayBack = value;
    __this->_hasDelayBack = true;
}

void TrackAnimator__set_Duration(TrackAnimator* __this, double value)
{
    __this->_Duration = value;
}

void TrackAnimator__set_DurationBack(TrackAnimator* __this, double value)
{
    __this->_durationBack = value;
    __this->_hasDurationBack = true;
}

void TrackAnimator__set_Easing(TrackAnimator* __this, int value)
{
    __this->_easing = value;
}

void TrackAnimator__set_EasingBack(TrackAnimator* __this, int value)
{
    __this->_easingBack = value;
    __this->_hasEasingBack = true;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TrackAnimatorState__uType* TrackAnimatorState__typeof()
{
    static ::uStaticStrong<TrackAnimatorState__uType*> type;
    if (type != NULL) return type;

    type = (TrackAnimatorState__uType*)::uAllocClassType(sizeof(TrackAnimatorState__uType), "Fuse.Animations.TrackAnimatorState", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Animations::AnimatorState__typeof());
    type->__fp_SeekObjectValue = TrackAnimatorState__SeekObjectValue;
    type->__fp_SeekProgress = (bool(*)(::app::Fuse::Animations::AnimatorState*, double, double, int, double))TrackAnimatorState__SeekProgress;
    type->__fp_SeekTime = (bool(*)(::app::Fuse::Animations::AnimatorState*, double, double, int, double))TrackAnimatorState__SeekTime;
    type->__fp_SeekValue = TrackAnimatorState__SeekValue;

    type->SetStrongRefs(
        "_continuousProvider", offsetof(TrackAnimatorState, _continuousProvider),
        "_discreteProvider", offsetof(TrackAnimatorState, _discreteProvider),
        "Animator", offsetof(TrackAnimatorState, Animator));

    return type;
}

void TrackAnimatorState___ObjInit_1(TrackAnimatorState* __this, ::app::Fuse::Animations::TrackAnimator* animator, ::app::Fuse::Animations::CreateStateParams* p, ::app::Fuse::Node* useNode)
{
    ::app::Fuse::Animations::AnimatorState___ObjInit(__this, p, useNode);
    __this->Animator = animator;
    ::uObject* pr = ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(animator)->GetProvider(__this->Variant);
    __this->_continuousProvider = ::uAs< ::uObject*>(pr, ::app::Fuse::Animations::ContinuousTrackProvider__typeof());
    __this->_discreteProvider = ::uAs< ::uObject*>(pr, ::app::Fuse::Animations::DiscreteTrackProvider__typeof());
}

double TrackAnimatorState__get_Duration(TrackAnimatorState* __this)
{
    return __this->IsBackward() ? ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(__this->Animator)->DurationBack() : ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(__this->Animator)->Duration();
}

int TrackAnimatorState__get_Easing(TrackAnimatorState* __this)
{
    return __this->IsBackward() ? ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(__this->Animator)->EasingBack() : ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(__this->Animator)->Easing();
}

bool TrackAnimatorState__get_IsBackward(TrackAnimatorState* __this)
{
    return __this->Variant == 1;
}

void TrackAnimatorState__SeekObjectValue(TrackAnimatorState* __this, ::uObject* value, float strength)
{
}

bool TrackAnimatorState__SeekProgress(TrackAnimatorState* __this, double progress, double interval, int dir, double strength)
{
    if (__this->_continuousProvider != NULL)
    {
        double oStrength = double();
        ::app::Uno::Float4 oValue = ::app::Uno::Float4();
        bool r = ::app::Fuse::Animations::ContinuousTrackProvider::GetSeekProgress(::uPtr< ::uObject*>(__this->_continuousProvider), __this, progress, interval, dir, &oValue, &oStrength);
        __this->SeekValue(oValue, (float)(oStrength * strength));
        return r;
    }

    if (__this->_discreteProvider != NULL)
    {
        double oStrength = double();
        ::uObject* oValue;
        bool r = ::app::Fuse::Animations::DiscreteTrackProvider::GetSeekProgress(::uPtr< ::uObject*>(__this->_discreteProvider), __this, progress, interval, dir, &oValue, &oStrength);
        __this->SeekObjectValue(oValue, (float)(oStrength * strength));
        return r;
    }

    return true;
}

bool TrackAnimatorState__SeekTime(TrackAnimatorState* __this, double elapsed, double interval, int dir, double strength)
{
    double relTime = double();

    if (__this->IsBackward() && ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(__this->Animator)->HasBack())
    {
        relTime = elapsed - ((__this->TotalDuration - ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(__this->Animator)->DelayBack()) - ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(__this->Animator)->DurationBack());
    }
    else
    {
        relTime = elapsed - ::uPtr< ::app::Fuse::Animations::TrackAnimator*>(__this->Animator)->Delay_1();
    }

    if (__this->_continuousProvider != NULL)
    {
        double oStrength = double();
        ::app::Uno::Float4 oValue = ::app::Uno::Float4();
        bool r = ::app::Fuse::Animations::ContinuousTrackProvider::GetSeekTime(::uPtr< ::uObject*>(__this->_continuousProvider), __this, relTime, interval, dir, &oValue, &oStrength);
        __this->SeekValue(oValue, (float)(oStrength * strength));
        return r;
    }

    if (__this->_discreteProvider != NULL)
    {
        double oStrength = double();
        ::uObject* oValue;
        bool r = ::app::Fuse::Animations::DiscreteTrackProvider::GetSeekTime(::uPtr< ::uObject*>(__this->_discreteProvider), __this, relTime, interval, dir, &oValue, &oStrength);
        __this->SeekObjectValue(oValue, (float)(oStrength * strength));
        return r;
    }

    return true;
}

void TrackAnimatorState__SeekValue(TrackAnimatorState* __this, ::app::Uno::Float4 value, float strength)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* TrackProvider__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Animations.TrackProvider");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TriggerAnimation__uType* TriggerAnimation__typeof()
{
    static ::uStaticStrong<TriggerAnimation__uType*> type;
    if (type != NULL) return type;

    type = (TriggerAnimation__uType*)::uAllocClassType(sizeof(TriggerAnimation__uType), "Fuse.Animations.TriggerAnimation", false, 0, 2, 0);

    type->SetStrongRefs(
        "_animators", offsetof(TriggerAnimation, _animators),
        "_backward", offsetof(TriggerAnimation, _backward));

    return type;
}

void TriggerAnimation___ObjInit(TriggerAnimation* __this)
{
}

::uArray* TriggerAnimation__CreateAnimatorsState(TriggerAnimation* __this, int variant, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Animations::CreateStateParams* collection_123;
    collection_123 = ::app::Fuse::Animations::CreateStateParams__New_1(NULL);
    ::uPtr< ::app::Fuse::Animations::CreateStateParams*>(collection_123)->Variant = variant;
    collection_123->TotalDuration = __this->GetTotalDuration(variant);
    collection_123->Attached = elm;
    ::app::Fuse::Animations::CreateStateParams* csp = collection_123;

    if (__this->_animators == NULL)
    {
        return ::uNewArray(::app::Fuse::Animations::AnimatorState__typeof(), 0);
    }

    ::uArray* state = ::uNewArray(::app::Fuse::Animations::AnimatorState__typeof(), ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->Count());

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->Count(); ++i)
    {
        state->ItemStrong< ::app::Fuse::Animations::AnimatorState*>(i) = ::uPtr< ::app::Fuse::Animations::Animator*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->Item(i))->CreateState(csp);
    }

    return state;
}

::app::Fuse::Animations::Player* TriggerAnimation__CreatePlayer(TriggerAnimation* __this, ::app::Fuse::Node* node, int variant)
{
    variant = __this->RestrictVariant(variant);

    if (variant == 0)
    {
        return ::app::Fuse::Animations::Player__New_1(NULL, node, __this, 0);
    }

    if (__this->_backward != NULL)
    {
        return ::app::Fuse::Animations::Player__New_1(NULL, node, __this->_backward, 0);
    }

    return ::app::Fuse::Animations::Player__New_1(NULL, node, __this, 1);
}

::app::Fuse::Animations::TriggerAnimationState* TriggerAnimation__CreateState(TriggerAnimation* __this, ::app::Fuse::Node* elm)
{
    return ::app::Fuse::Animations::TriggerAnimationState__New_1(NULL, __this, elm);
}

::uObject* TriggerAnimation__get_Animators(TriggerAnimation* __this)
{
    if (__this->_animators == NULL)
    {
        __this->_animators = ::app::Uno::Collections::List__Fuse_Animations_Animator__New_1(NULL);
    }

    return (::uObject*)__this->_animators;
}

TriggerAnimation* TriggerAnimation__get_Backward(TriggerAnimation* __this)
{
    if (__this->_backward == NULL)
    {
        __this->_backward = TriggerAnimation__New_1(NULL);
    }

    return __this->_backward;
}

bool TriggerAnimation__get_HasAnimators(TriggerAnimation* __this)
{
    return (__this->_animators != NULL) && (::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->Count() > 0);
}

bool TriggerAnimation__get_HasDirectionVariant(TriggerAnimation* __this)
{
    if (__this->_animators == NULL)
    {
        return false;
    }

    bool has = false;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->Count();

    for (int i = 0; i < c; ++i)
    {
        int v = ::uPtr< ::app::Fuse::Animations::Animator*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->Item(i))->AnimatorVariant();

        if (v == 2)
        {
            has = true;
        }

        if (v == 1)
        {
            return false;
        }
    }

    return has;
}

double TriggerAnimation__GetTotalDuration(TriggerAnimation* __this, int variant)
{
    if (__this->_animators == NULL)
    {
        return 0.0;
    }

    double max = 0.0;
    int c = ::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->Count();

    for (int i = 0; i < c; ++i)
    {
        max = ::app::Uno::Math__Max_7(NULL, max, ::uPtr< ::app::Fuse::Animations::Animator*>(::uPtr< ::app::Uno::Collections::List__Fuse_Animations_Animator*>(__this->_animators)->Item(i))->GetDurationWithDelay(variant));
    }

    return max;
}

TriggerAnimation* TriggerAnimation__New_1(::uStatic* __this)
{
    TriggerAnimation* inst = (TriggerAnimation*)::uAllocObject(sizeof(TriggerAnimation), TriggerAnimation__typeof());
    inst->_ObjInit();
    return inst;
}

int TriggerAnimation__RestrictVariant(TriggerAnimation* __this, int variant)
{
    if (!__this->HasDirectionVariant() && (__this->_backward == NULL))
    {
        return 0;
    }

    return variant;
}

void TriggerAnimation__set_Backward(TriggerAnimation* __this, TriggerAnimation* value)
{
    __this->_backward = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TriggerAnimationState__uType* TriggerAnimationState__typeof()
{
    static ::uStaticStrong<TriggerAnimationState__uType*> type;
    if (type != NULL) return type;

    type = (TriggerAnimationState__uType*)::uAllocClassType(sizeof(TriggerAnimationState__uType), "Fuse.Animations.TriggerAnimationState", false, 0, 7, 0);

    type->SetStrongRefs(
        "_Animation", offsetof(TriggerAnimationState, _Animation),
        "_backPlayer", offsetof(TriggerAnimationState, _backPlayer),
        "_curPlayer", offsetof(TriggerAnimationState, _curPlayer),
        "_forePlayer", offsetof(TriggerAnimationState, _forePlayer),
        "_node", offsetof(TriggerAnimationState, _node),
        "PlaybackDone", offsetof(TriggerAnimationState, PlaybackDone),
        "ProgressUpdated", offsetof(TriggerAnimationState, ProgressUpdated));

    return type;
}

void TriggerAnimationState___ObjInit(TriggerAnimationState* __this, ::app::Fuse::Animations::TriggerAnimation* animation, ::app::Fuse::Node* node)
{
    __this->Animation(animation);
    __this->_node = node;
}

void TriggerAnimationState__add_PlaybackDone(TriggerAnimationState* __this, ::uDelegate* value)
{
    __this->PlaybackDone = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PlaybackDone, (::uDelegate*)value), ::app::Uno::Action__object__typeof());
}

void TriggerAnimationState__add_ProgressUpdated(TriggerAnimationState* __this, ::uDelegate* value)
{
    __this->ProgressUpdated = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ProgressUpdated, (::uDelegate*)value), ::app::Uno::Action__object__typeof());
}

void TriggerAnimationState__Dispose(TriggerAnimationState* __this)
{
    if (__this->_forePlayer != NULL)
    {
        ::uPtr< ::app::Fuse::Animations::Player*>(__this->_forePlayer)->Disable();
        __this->_forePlayer = NULL;
    }

    if (__this->_backPlayer != NULL)
    {
        ::uPtr< ::app::Fuse::Animations::Player*>(__this->_backPlayer)->Disable();
        __this->_backPlayer = NULL;
    }

    __this->_curPlayer = NULL;
    __this->_node = NULL;
}

::app::Fuse::Animations::TriggerAnimation* TriggerAnimationState__get_Animation(TriggerAnimationState* __this)
{
    return __this->_Animation;
}

double TriggerAnimationState__get_CurrentTotalDuration(TriggerAnimationState* __this)
{
    if (__this->_curPlayer == NULL)
    {
        return ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->GetTotalDuration(0);
    }

    return ::uPtr< ::app::Fuse::Animations::Player*>(__this->_curPlayer)->TotalDuration();
}

double TriggerAnimationState__get_PreviousProgress(TriggerAnimationState* __this)
{
    return __this->_prevProgress;
}

double TriggerAnimationState__get_Progress(TriggerAnimationState* __this)
{
    if (__this->_curPlayer != NULL)
    {
        return ::uPtr< ::app::Fuse::Animations::Player*>(__this->_curPlayer)->Progress();
    }

    return 0.0;
}

bool TriggerAnimationState__get_ProgressFullOff(TriggerAnimationState* __this)
{
    return __this->Progress() <= 0.0;
}

bool TriggerAnimationState__get_ProgressFullOn(TriggerAnimationState* __this)
{
    return __this->Progress() >= 1.0;
}

::app::Fuse::Animations::Player* TriggerAnimationState__GetCurrentPlayer(TriggerAnimationState* __this, int tendTo)
{
    if (((__this->_curPlayer != NULL) && (::uPtr< ::app::Fuse::Animations::Player*>(__this->_curPlayer)->Progress() < 1.0)) && (::uPtr< ::app::Fuse::Animations::Player*>(__this->_curPlayer)->Progress() > 0.0))
    {
        return __this->_curPlayer;
    }

    return ::uAs< ::app::Fuse::Animations::Player*>(__this->GetPlayer(tendTo, false), ::app::Fuse::Animations::Player__typeof());
}

::app::Fuse::Animations::Player* TriggerAnimationState__GetPlayer(TriggerAnimationState* __this, int variant, bool noFade)
{
    ::app::Fuse::Animations::Player* cur;
    ::app::Fuse::Animations::Player* prev;
    variant = ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->RestrictVariant(variant);

    if ((__this->_curPlayer != NULL) && (__this->_curPlayerVariant == variant))
    {
        return __this->_curPlayer;
    }

    bool isNew = false;

    if (variant == 0)
    {
        if (__this->_forePlayer == NULL)
        {
            __this->_forePlayer = ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->CreatePlayer(__this->_node, variant);
            isNew = true;
        }

        cur = __this->_forePlayer;
        prev = __this->_backPlayer;
    }
    else
    {
        if (__this->_backPlayer == NULL)
        {
            __this->_backPlayer = ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->CreatePlayer(__this->_node, variant);
            ::uPtr< ::app::Fuse::Animations::Player*>(__this->_backPlayer)->SeekProgress(1.0, false);
            isNew = true;
        }

        cur = __this->_backPlayer;
        prev = __this->_forePlayer;
    }

    if (isNew)
    {
        __this->TrackProgress(cur);
    }

    __this->_curPlayer = cur;
    __this->_curPlayerVariant = variant;

    if (prev != NULL)
    {
        double prevProgress = ::uPtr< ::app::Fuse::Animations::Player*>(prev)->Progress();
        prev->SeekProgress(prevProgress, false);
        ::uPtr< ::app::Fuse::Animations::Player*>(cur)->SeekProgress(prevProgress, false);

        if (isNew)
        {
            cur->Strength(0.0);
        }

        double remainTime = prev->RemainTime();

        if ((prev->IsSyncState() || (remainTime < 9.9999997473787516e-06)) || noFade)
        {
            ::uPtr< ::app::Fuse::Animations::Player*>(prev)->Strength(0.0);
            ::uPtr< ::app::Fuse::Animations::Player*>(cur)->Strength(1.0);
        }
        else
        {
            double fadeTime = ::app::Uno::Math__Min_10(NULL, remainTime, 0.5);
            ::uPtr< ::app::Fuse::Animations::Player*>(cur)->FadeIn(fadeTime);
            ::uPtr< ::app::Fuse::Animations::Player*>(prev)->FadeOut(fadeTime);
        }
    }

    return cur;
}

TriggerAnimationState* TriggerAnimationState__New_1(::uStatic* __this, ::app::Fuse::Animations::TriggerAnimation* animation, ::app::Fuse::Node* node)
{
    TriggerAnimationState* inst = (TriggerAnimationState*)::uAllocObject(sizeof(TriggerAnimationState), TriggerAnimationState__typeof());
    inst->_ObjInit(animation, node);
    return inst;
}

void TriggerAnimationState__OnPlaybackDone(TriggerAnimationState* __this, ::uObject* s)
{
    if (s != __this->_curPlayer)
    {
        return;
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PlaybackDone, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PlaybackDone)->InvokeVoid< ::uObject*>((::uObject*)__this);
    }
}

void TriggerAnimationState__OnProgressUpdated(TriggerAnimationState* __this, ::uObject* s)
{
    if (s != __this->_curPlayer)
    {
        return;
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ProgressUpdated, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ProgressUpdated)->InvokeVoid< ::uObject*>((::uObject*)__this);
    }

    __this->_prevProgress = __this->Progress();
}

void TriggerAnimationState__PlayEnd(TriggerAnimationState* __this, bool on)
{
    if (on)
    {
        __this->PlayOn();
    }
    else
    {
        __this->PlayOff();
    }
}

void TriggerAnimationState__PlayOff(TriggerAnimationState* __this)
{
    ::app::Fuse::Animations::Player* p = __this->GetPlayer(1, false);
    ::uPtr< ::app::Fuse::Animations::Player*>(p)->PlayToStart();
}

void TriggerAnimationState__PlayOn(TriggerAnimationState* __this)
{
    ::app::Fuse::Animations::Player* p = __this->GetPlayer(0, false);
    ::uPtr< ::app::Fuse::Animations::Player*>(p)->PlayToEnd();
}

void TriggerAnimationState__PlayToProgress(TriggerAnimationState* __this, double progress, int tendTo)
{
    ::app::Fuse::Animations::Player* player = __this->GetCurrentPlayer(tendTo);
    ::uPtr< ::app::Fuse::Animations::Player*>(player)->PlayToProgress(progress);
}

void TriggerAnimationState__SeekProgress(TriggerAnimationState* __this, double newProgress, int tendTo, int flags)
{
    bool bypassUpdate = (flags & 2) == 2;
    ::app::Fuse::Animations::Player* player = ((flags & 1) == 1) ? __this->GetPlayer(tendTo, true) : __this->GetCurrentPlayer(tendTo);

    if (bypassUpdate)
    {
        __this->_prevProgress = newProgress;
    }

    ::uPtr< ::app::Fuse::Animations::Player*>(player)->SeekProgress(newProgress, !bypassUpdate);
}

void TriggerAnimationState__set_Animation(TriggerAnimationState* __this, ::app::Fuse::Animations::TriggerAnimation* value)
{
    __this->_Animation = value;
}

void TriggerAnimationState__TrackProgress(TriggerAnimationState* __this, ::app::Fuse::Animations::Player* player)
{
    ::uPtr< ::app::Fuse::Animations::Player*>(player)->ProgressUpdated = ::uNewDelegateNonVirt(::app::Uno::Action__object__typeof(), (const void*)TriggerAnimationState__OnProgressUpdated, __this);
    player->DoneCallback(::uNewDelegateNonVirt(::app::Uno::Action__object__typeof(), (const void*)TriggerAnimationState__OnPlaybackDone, __this));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* TriggerAnimationState_SeekFlags__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Animations.TriggerAnimationState.SeekFlags", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "ForcePlayer", 1LL,
        "BypassUpdate", 2LL);

    return type;
}

}}}
