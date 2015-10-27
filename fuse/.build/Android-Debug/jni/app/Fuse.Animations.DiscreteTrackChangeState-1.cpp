#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Change__bool.h>
#include <app/Fuse.Animations.Change__float.h>
#include <app/Fuse.Animations.Change__float4.h>
#include <app/Fuse.Animations.Change__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.CreateStateParams.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__bool.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__float.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__float4.h>
#include <app/Fuse.Animations.DiscreteTrackChangeState__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.IMixer.h>
#include <app/Fuse.Animations.IMixerHandle__bool.h>
#include <app/Fuse.Animations.IMixerHandle__float.h>
#include <app/Fuse.Animations.IMixerHandle__float4.h>
#include <app/Fuse.Animations.IMixerHandle__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.MixOp.h>
#include <app/Fuse.Animations.TrackAnimator.h>
#include <app/Fuse.Elements.Visibility.h>
#include <app/Fuse.Node.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
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

DiscreteTrackChangeState__bool__uType* DiscreteTrackChangeState__bool__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__bool__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__bool__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__bool__uType), "Fuse.Animations.DiscreteTrackChangeState<bool>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__bool__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__bool__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__bool, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__bool, mixHandle));

    return type;
}

void DiscreteTrackChangeState__bool___ObjInit_2(DiscreteTrackChangeState__bool* __this, ::app::Fuse::Animations::Change__bool* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__bool(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__bool*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__bool*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__bool*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__bool__Disable(DiscreteTrackChangeState__bool* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__bool::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__bool* DiscreteTrackChangeState__bool__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__bool* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__bool* inst = (DiscreteTrackChangeState__bool*)::uAllocObject(sizeof(DiscreteTrackChangeState__bool), DiscreteTrackChangeState__bool__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__bool__SeekObjectValue(DiscreteTrackChangeState__bool* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Uno::Bool__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__bool::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< bool>(::app::Uno::Bool__typeof(), value), strength);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__float__uType* DiscreteTrackChangeState__float__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__float__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__float__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__float__uType), "Fuse.Animations.DiscreteTrackChangeState<float>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__float__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__float__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__float, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__float, mixHandle));

    return type;
}

void DiscreteTrackChangeState__float___ObjInit_2(DiscreteTrackChangeState__float* __this, ::app::Fuse::Animations::Change__float* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__float(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__float*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__float*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__float*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__float__Disable(DiscreteTrackChangeState__float* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__float::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__float* DiscreteTrackChangeState__float__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__float* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__float* inst = (DiscreteTrackChangeState__float*)::uAllocObject(sizeof(DiscreteTrackChangeState__float), DiscreteTrackChangeState__float__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__float__SeekObjectValue(DiscreteTrackChangeState__float* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Uno::Float__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__float::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< float>(::app::Uno::Float__typeof(), value), strength);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__float4__uType* DiscreteTrackChangeState__float4__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__float4__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__float4__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__float4__uType), "Fuse.Animations.DiscreteTrackChangeState<float4>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__float4__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__float4__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__float4, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__float4, mixHandle));

    return type;
}

void DiscreteTrackChangeState__float4___ObjInit_2(DiscreteTrackChangeState__float4* __this, ::app::Fuse::Animations::Change__float4* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__float4(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__float4*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__float4*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__float4*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__float4__Disable(DiscreteTrackChangeState__float4* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__float4::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__float4* DiscreteTrackChangeState__float4__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__float4* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__float4* inst = (DiscreteTrackChangeState__float4*)::uAllocObject(sizeof(DiscreteTrackChangeState__float4), DiscreteTrackChangeState__float4__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__float4__SeekObjectValue(DiscreteTrackChangeState__float4* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Uno::Float4__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__float4::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), value), strength);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DiscreteTrackChangeState__Fuse_Elements_Visibility__uType* DiscreteTrackChangeState__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<DiscreteTrackChangeState__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (DiscreteTrackChangeState__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(DiscreteTrackChangeState__Fuse_Elements_Visibility__uType), "Fuse.Animations.DiscreteTrackChangeState<Fuse.Elements.Visibility>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Fuse_Elements_Visibility__Disable;
    type->__fp_SeekObjectValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::uObject*, float))DiscreteTrackChangeState__Fuse_Elements_Visibility__SeekObjectValue;

    type->SetStrongRefs(
        "Animator", offsetof(DiscreteTrackChangeState__Fuse_Elements_Visibility, Animator_1),
        "mixHandle", offsetof(DiscreteTrackChangeState__Fuse_Elements_Visibility, mixHandle));

    return type;
}

void DiscreteTrackChangeState__Fuse_Elements_Visibility___ObjInit_2(DiscreteTrackChangeState__Fuse_Elements_Visibility* __this, ::app::Fuse::Animations::Change__Fuse_Elements_Visibility* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_Visibility(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(__this->Animator_1)->MixOp());
}

void DiscreteTrackChangeState__Fuse_Elements_Visibility__Disable(DiscreteTrackChangeState__Fuse_Elements_Visibility* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Visibility::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

DiscreteTrackChangeState__Fuse_Elements_Visibility* DiscreteTrackChangeState__Fuse_Elements_Visibility__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_Visibility* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState__Fuse_Elements_Visibility* inst = (DiscreteTrackChangeState__Fuse_Elements_Visibility*)::uAllocObject(sizeof(DiscreteTrackChangeState__Fuse_Elements_Visibility), DiscreteTrackChangeState__Fuse_Elements_Visibility__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void DiscreteTrackChangeState__Fuse_Elements_Visibility__SeekObjectValue(DiscreteTrackChangeState__Fuse_Elements_Visibility* __this, ::uObject* value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno"), 420);
        return;
    }

    if ((value != NULL) && ::uIs(value, ::app::Fuse::Elements::Visibility__typeof()))
    {
        ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Visibility::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uUnbox< int>(::app::Fuse::Elements::Visibility__typeof(), value), strength);
    }
}

}}}
