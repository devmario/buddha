#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Change__bool.h>
#include <app/Fuse.Animations.Change__float.h>
#include <app/Fuse.Animations.Change__float4.h>
#include <app/Fuse.Animations.Change__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__bool.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__float.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__float4.h>
#include <app/Fuse.Animations.ContinuousTrackChangeState__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.Converter__bool.h>
#include <app/Fuse.Animations.Converter__float.h>
#include <app/Fuse.Animations.Converter__float4.h>
#include <app/Fuse.Animations.Converter__Fuse_Elements_Visibility.h>
#include <app/Fuse.Animations.CreateStateParams.h>
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

ContinuousTrackChangeState__bool__uType* ContinuousTrackChangeState__bool__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__bool__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__bool__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__bool__uType), "Fuse.Animations.ContinuousTrackChangeState<bool>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__bool__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__bool__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__bool, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__bool, mixHandle));

    return type;
}

void ContinuousTrackChangeState__bool___ObjInit_2(ContinuousTrackChangeState__bool* __this, ::app::Fuse::Animations::Change__bool* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__bool(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__bool*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__bool*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__bool*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__bool__Disable(ContinuousTrackChangeState__bool* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__bool::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__bool* ContinuousTrackChangeState__bool__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__bool* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__bool* inst = (ContinuousTrackChangeState__bool*)::uAllocObject(sizeof(ContinuousTrackChangeState__bool), ContinuousTrackChangeState__bool__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__bool__SeekValue(ContinuousTrackChangeState__bool* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__bool::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__bool*>(::uPtr< ::app::Fuse::Animations::Change__bool*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__float__uType* ContinuousTrackChangeState__float__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__float__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__float__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__float__uType), "Fuse.Animations.ContinuousTrackChangeState<float>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__float__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__float__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__float, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__float, mixHandle));

    return type;
}

void ContinuousTrackChangeState__float___ObjInit_2(ContinuousTrackChangeState__float* __this, ::app::Fuse::Animations::Change__float* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__float(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__float*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__float*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__float*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__float__Disable(ContinuousTrackChangeState__float* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__float::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__float* ContinuousTrackChangeState__float__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__float* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__float* inst = (ContinuousTrackChangeState__float*)::uAllocObject(sizeof(ContinuousTrackChangeState__float), ContinuousTrackChangeState__float__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__float__SeekValue(ContinuousTrackChangeState__float* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__float::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__float*>(::uPtr< ::app::Fuse::Animations::Change__float*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__float4__uType* ContinuousTrackChangeState__float4__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__float4__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__float4__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__float4__uType), "Fuse.Animations.ContinuousTrackChangeState<float4>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__float4__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__float4__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__float4, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__float4, mixHandle));

    return type;
}

void ContinuousTrackChangeState__float4___ObjInit_2(ContinuousTrackChangeState__float4* __this, ::app::Fuse::Animations::Change__float4* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__float4(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__float4*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__float4*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__float4*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__float4__Disable(ContinuousTrackChangeState__float4* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__float4::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__float4* ContinuousTrackChangeState__float4__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__float4* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__float4* inst = (ContinuousTrackChangeState__float4*)::uAllocObject(sizeof(ContinuousTrackChangeState__float4), ContinuousTrackChangeState__float4__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__float4__SeekValue(ContinuousTrackChangeState__float4* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__float4::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__float4*>(::uPtr< ::app::Fuse::Animations::Change__float4*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContinuousTrackChangeState__Fuse_Elements_Visibility__uType* ContinuousTrackChangeState__Fuse_Elements_Visibility__typeof()
{
    static ::uStaticStrong<ContinuousTrackChangeState__Fuse_Elements_Visibility__uType*> type;
    if (type != NULL) return type;

    type = (ContinuousTrackChangeState__Fuse_Elements_Visibility__uType*)::uAllocClassType(sizeof(ContinuousTrackChangeState__Fuse_Elements_Visibility__uType), "Fuse.Animations.ContinuousTrackChangeState<Fuse.Elements.Visibility>", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Animations::TrackAnimatorState__typeof());
    type->__fp_Disable = (void(*)(::app::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Fuse_Elements_Visibility__Disable;
    type->__fp_SeekValue = (void(*)(::app::Fuse::Animations::TrackAnimatorState*, ::app::Uno::Float4, float))ContinuousTrackChangeState__Fuse_Elements_Visibility__SeekValue;

    type->SetStrongRefs(
        "Animator", offsetof(ContinuousTrackChangeState__Fuse_Elements_Visibility, Animator_1),
        "mixHandle", offsetof(ContinuousTrackChangeState__Fuse_Elements_Visibility, mixHandle));

    return type;
}

void ContinuousTrackChangeState__Fuse_Elements_Visibility___ObjInit_2(ContinuousTrackChangeState__Fuse_Elements_Visibility* __this, ::app::Fuse::Animations::Change__Fuse_Elements_Visibility* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ::app::Fuse::Animations::TrackAnimatorState___ObjInit_1(__this, (::app::Fuse::Animations::TrackAnimator*)animator, p, NULL);
    __this->Animator_1 = animator;
    __this->mixHandle = ::app::Fuse::Animations::IMixer::Register__Fuse_Elements_Visibility(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(__this->Animator_1)->Mixer), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(__this->Animator_1)->Target(), ::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(__this->Animator_1)->MixOp());
}

void ContinuousTrackChangeState__Fuse_Elements_Visibility__Disable(ContinuousTrackChangeState__Fuse_Elements_Visibility* __this)
{
    if (__this->mixHandle == NULL)
    {
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Visibility::Unregister(::uPtr< ::uObject*>(__this->mixHandle));
    __this->mixHandle = NULL;
}

ContinuousTrackChangeState__Fuse_Elements_Visibility* ContinuousTrackChangeState__Fuse_Elements_Visibility__New_1(::uStatic* __this, ::app::Fuse::Animations::Change__Fuse_Elements_Visibility* animator, ::app::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState__Fuse_Elements_Visibility* inst = (ContinuousTrackChangeState__Fuse_Elements_Visibility*)::uAllocObject(sizeof(ContinuousTrackChangeState__Fuse_Elements_Visibility), ContinuousTrackChangeState__Fuse_Elements_Visibility__typeof());
    inst->_ObjInit_2(animator, p);
    return inst;
}

void ContinuousTrackChangeState__Fuse_Elements_Visibility__SeekValue(ContinuousTrackChangeState__Fuse_Elements_Visibility* __this, ::app::Uno::Float4 value, float strength)
{
    if (__this->mixHandle == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Invalid Seek"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno"), 454);
        return;
    }

    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_Visibility::Set(::uPtr< ::uObject*>(__this->mixHandle), ::uPtr< ::app::Fuse::Animations::Converter__Fuse_Elements_Visibility*>(::uPtr< ::app::Fuse::Animations::Change__Fuse_Elements_Visibility*>(__this->Animator_1)->ContinuousConverter)->Out(value), strength);
}

}}}
