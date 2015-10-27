#include <app/Fuse.Animations.AnimationVariant.h>
#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.IResizeMode.h>
#include <app/Fuse.Animations.Nothing.h>
#include <app/Fuse.Animations.TrackAnimator.h>
#include <app/Fuse.Animations.TriggerAnimation.h>
#include <app/Fuse.Animations.TriggerAnimationState.h>
#include <app/Fuse.Animations.TriggerAnimationState_SeekFlags.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Control.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.LayoutArgs.h>
#include <app/Fuse.Elements.LayoutHandler.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.FocusGainedHandler.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Fuse.ITranslationMode.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_Focus-5b05867c.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.Translation.h>
#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <app/Fuse.Triggers.Actions.TriggerDirection.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <app/Fuse.Triggers.IPlayback.h>
#include <app/Fuse.Triggers.IProgress.h>
#include <app/Fuse.Triggers.IValue__bool.h>
#include <app/Fuse.Triggers.LayoutAnimation.h>
#include <app/Fuse.Triggers.LayoutAnimation_PositionChangeMode.h>
#include <app/Fuse.Triggers.LayoutAnimation_ResizeChangeMode.h>
#include <app/Fuse.Triggers.ProgressAnimation.h>
#include <app/Fuse.Triggers.State.h>
#include <app/Fuse.Triggers.StateGroup.h>
#include <app/Fuse.Triggers.StateTransition.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Fuse.Triggers.TriggerBypassMode.h>
#include <app/Fuse.Triggers.WhileBool.h>
#include <app/Fuse.Triggers.WhileDisabled.h>
#include <app/Fuse.Triggers.WhileEnabled.h>
#include <app/Fuse.Triggers.WhileEnabledDisabledTrigger.h>
#include <app/Fuse.Triggers.WhileFailed.h>
#include <app/Fuse.Triggers.WhileFalse.h>
#include <app/Fuse.Triggers.WhileFocused.h>
#include <app/Fuse.Triggers.WhileFocusWithin.h>
#include <app/Fuse.Triggers.WhileInteracting.h>
#include <app/Fuse.Triggers.WhileKeyboardVisible.h>
#include <app/Fuse.Triggers.WhileKeyboardVisible_RelativeToKeyboardMode.h>
#include <app/Fuse.Triggers.WhileLoading.h>
#include <app/Fuse.Triggers.WhileTrigger.h>
#include <app/Fuse.Triggers.WhileTrue.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Fuse_Behavior.h>
#include <app/Uno.Action__Fuse_Triggers_Trigger.h>
#include <app/Uno.Action__object.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.ICollection__Fuse_Triggers_State.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Triggers_State.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Triggers_State.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.IList__Fuse_Triggers_State.h>
#include <app/Uno.Collections.List__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.ObservableList__Fuse_Behavior.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__Uno_Platform_SystemUIWillResizeEventArgs.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.SystemUI.h>
#include <app/Uno.Platform.SystemUIWillResizeEventArgs.h>
#include <app/Uno.Predicate__object.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.ValueChangedHandler__bool.h>

namespace app {
namespace Fuse {
namespace Triggers {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IAddRemove__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Triggers.IAddRemove<Fuse.Node>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IPlayback__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Triggers.IPlayback");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IProgress__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Triggers.IProgress");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IValue__bool__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Triggers.IValue<bool>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> LayoutAnimation___positionChange;
::uStaticStrong< ::app::Fuse::PropertyHandle*> LayoutAnimation___sizeChange;
::uStaticStrong< ::uObject*> LayoutAnimation__PositionChange;
::uStaticStrong< ::uObject*> LayoutAnimation__SizeChange;

LayoutAnimation__uType* LayoutAnimation__typeof()
{
    static ::uStaticStrong<LayoutAnimation__uType*> type;
    if (type != NULL) return type;

    type = (LayoutAnimation__uType*)::uAllocClassType(sizeof(LayoutAnimation__uType), "Fuse.Triggers.LayoutAnimation", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))LayoutAnimation__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))LayoutAnimation__OnUnrooted;

    return type;
}

void LayoutAnimation___TypeInit(::uStatic* __this)
{
    LayoutAnimation__PositionChange = (::uObject*)::app::Fuse::Triggers::LayoutAnimation_PositionChangeMode__New_1(NULL);
    LayoutAnimation___positionChange = ::app::Fuse::PropertyHandle__New_1(NULL);
    LayoutAnimation__SizeChange = (::uObject*)::app::Fuse::Triggers::LayoutAnimation_ResizeChangeMode__New_1(NULL);
    LayoutAnimation___sizeChange = ::app::Fuse::Properties__CreateHandle(NULL);
}

::app::Uno::Float3 LayoutAnimation__GetPositionChange(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uObject* v = ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Get(LayoutAnimation___positionChange);

    if (v != NULL)
    {
        return ::uUnbox< ::app::Uno::Float3>(::app::Uno::Float3__typeof(), v);
    }
    else
    {
        return ::app::Uno::Float3__New_1(NULL, 0.0f);
    }
}

bool LayoutAnimation__GetSizeChange(::uStatic* __this, ::app::Fuse::Node* n, ::app::Uno::Float2* oldSize, ::app::Uno::Float2* newSize)
{
    ::uObject* res;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(LayoutAnimation___sizeChange, &res))
    {
        ::app::Uno::Float4 f = ::uUnbox< ::app::Uno::Float4>(::app::Uno::Float4__typeof(), res);
        *oldSize = ::app::Uno::Float2__New_2(NULL, f.X, f.Y);
        *newSize = ::app::Uno::Float2__New_2(NULL, f.Z, f.W);
        return true;
    }
    else
    {
        *oldSize = ::app::Uno::Float2__New_1(NULL, 0.0f);
        *newSize = ::app::Uno::Float2__New_1(NULL, 0.0f);
        return false;
    }
}

void LayoutAnimation__OnLayoutChange(LayoutAnimation* __this, ::uObject* sender, ::app::Fuse::Elements::LayoutArgs* args)
{
    if (!::uPtr< ::app::Fuse::Elements::LayoutArgs*>(args)->HasOld())
    {
        return;
    }

    ::app::Fuse::Elements::Element* elm = ::uAs< ::app::Fuse::Elements::Element*>(sender, ::app::Fuse::Elements::Element__typeof());
    LayoutAnimation__SetPositionChange(NULL, (::app::Fuse::Node*)elm, ::uPtr< ::app::Fuse::Elements::LayoutArgs*>(args)->PositionChange());
    LayoutAnimation__SetSizeChange(NULL, (::app::Fuse::Node*)elm, args->OldSize(), args->NewSize());
    __this->BypassActivate();
    __this->Deactivate();
}

void LayoutAnimation__OnRooted(LayoutAnimation* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    ::app::Fuse::Elements::Element* e = ::uAs< ::app::Fuse::Elements::Element*>(elm, ::app::Fuse::Elements::Element__typeof());

    if (e != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(e)->add_LayoutChanged(::uNewDelegateNonVirt(::app::Fuse::Elements::LayoutHandler__typeof(), (const void*)LayoutAnimation__OnLayoutChange, __this));
    }
}

void LayoutAnimation__OnUnrooted(LayoutAnimation* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Elements::Element* e = ::uAs< ::app::Fuse::Elements::Element*>(elm, ::app::Fuse::Elements::Element__typeof());

    if (e != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(e)->remove_LayoutChanged(::uNewDelegateNonVirt(::app::Fuse::Elements::LayoutHandler__typeof(), (const void*)LayoutAnimation__OnLayoutChange, __this));
    }

    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

void LayoutAnimation__SetPositionChange(::uStatic* __this, ::app::Fuse::Node* n, ::app::Uno::Float3 delta)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(LayoutAnimation___positionChange, ::uBox(::app::Uno::Float3__typeof(), delta));
}

void LayoutAnimation__SetSizeChange(::uStatic* __this, ::app::Fuse::Node* n, ::app::Uno::Float2 oldSize, ::app::Uno::Float2 newSize)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(LayoutAnimation___sizeChange, ::uBox(::app::Uno::Float4__typeof(), ::app::Uno::Float4__New_6(NULL, oldSize, newSize)));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LayoutAnimation_PositionChangeMode__uType* LayoutAnimation_PositionChangeMode__typeof()
{
    static ::uStaticStrong<LayoutAnimation_PositionChangeMode__uType*> type;
    if (type != NULL) return type;

    type = (LayoutAnimation_PositionChangeMode__uType*)::uAllocClassType(sizeof(LayoutAnimation_PositionChangeMode__uType), "Fuse.Triggers.LayoutAnimation.PositionChangeMode", false, 1, 0, 0);

    type->__interface_0.__fp_GetAbsVector = (::app::Uno::Float3(*)(void*, ::app::Fuse::Translation*))LayoutAnimation_PositionChangeMode__GetAbsVector;

    type->SetInterfaces(
        ::app::Fuse::ITranslationMode__typeof(), offsetof(LayoutAnimation_PositionChangeMode__uType, __interface_0));

    return type;
}

void LayoutAnimation_PositionChangeMode___ObjInit(LayoutAnimation_PositionChangeMode* __this)
{
}

::app::Uno::Float3 LayoutAnimation_PositionChangeMode__GetAbsVector(LayoutAnimation_PositionChangeMode* __this, ::app::Fuse::Translation* t)
{
    return ::app::Fuse::Triggers::LayoutAnimation__GetPositionChange(NULL, ::uPtr< ::app::Fuse::Translation*>(t)->RelativeNode());
}

LayoutAnimation_PositionChangeMode* LayoutAnimation_PositionChangeMode__New_1(::uStatic* __this)
{
    LayoutAnimation_PositionChangeMode* inst = (LayoutAnimation_PositionChangeMode*)::uAllocObject(sizeof(LayoutAnimation_PositionChangeMode), LayoutAnimation_PositionChangeMode__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LayoutAnimation_ResizeChangeMode__uType* LayoutAnimation_ResizeChangeMode__typeof()
{
    static ::uStaticStrong<LayoutAnimation_ResizeChangeMode__uType*> type;
    if (type != NULL) return type;

    type = (LayoutAnimation_ResizeChangeMode__uType*)::uAllocClassType(sizeof(LayoutAnimation_ResizeChangeMode__uType), "Fuse.Triggers.LayoutAnimation.ResizeChangeMode", false, 1, 0, 0);

    type->__interface_0.__fp_GetSizeChange = (bool(*)(void*, ::app::Fuse::Node*, ::app::Uno::Float2*, ::app::Uno::Float2*))LayoutAnimation_ResizeChangeMode__GetSizeChange;

    type->SetInterfaces(
        ::app::Fuse::Animations::IResizeMode__typeof(), offsetof(LayoutAnimation_ResizeChangeMode__uType, __interface_0));

    return type;
}

void LayoutAnimation_ResizeChangeMode___ObjInit(LayoutAnimation_ResizeChangeMode* __this)
{
}

bool LayoutAnimation_ResizeChangeMode__GetSizeChange(LayoutAnimation_ResizeChangeMode* __this, ::app::Fuse::Node* n, ::app::Uno::Float2* oldSize, ::app::Uno::Float2* newSize)
{
    return ::app::Fuse::Triggers::LayoutAnimation__GetSizeChange(NULL, n, oldSize, newSize);
}

LayoutAnimation_ResizeChangeMode* LayoutAnimation_ResizeChangeMode__New_1(::uStatic* __this)
{
    LayoutAnimation_ResizeChangeMode* inst = (LayoutAnimation_ResizeChangeMode*)::uAllocObject(sizeof(LayoutAnimation_ResizeChangeMode), LayoutAnimation_ResizeChangeMode__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ProgressAnimation__uType* ProgressAnimation__typeof()
{
    static ::uStaticStrong<ProgressAnimation__uType*> type;
    if (type != NULL) return type;

    type = (ProgressAnimation__uType*)::uAllocClassType(sizeof(ProgressAnimation__uType), "Fuse.Triggers.ProgressAnimation", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ProgressAnimation__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ProgressAnimation__OnUnrooted;

    type->SetStrongRefs(
        "_progress", offsetof(ProgressAnimation, _progress));

    return type;
}

void ProgressAnimation___ObjInit_2(ProgressAnimation* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

ProgressAnimation* ProgressAnimation__New_1(::uStatic* __this)
{
    ProgressAnimation* inst = (ProgressAnimation*)::uAllocObject(sizeof(ProgressAnimation), ProgressAnimation__typeof());
    inst->_ObjInit_2();
    return inst;
}

void ProgressAnimation__OnChanged(ProgressAnimation* __this, ::uObject* s, ::uObject* a)
{
    double p = ::app::Fuse::Triggers::IProgress::Progress(::uPtr< ::uObject*>(__this->_progress));
    double diff = p - __this->_prevValue;
    __this->_prevValue = p;
    __this->Seek(p, (diff >= 0.0) ? 0 : 1);
}

void ProgressAnimation__OnRooted(ProgressAnimation* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    __this->_progress = ::uAs< ::uObject*>(elm, ::app::Fuse::Triggers::IProgress__typeof());

    if (__this->_progress != NULL)
    {
        ::app::Fuse::Triggers::IProgress::add_ProgressChanged(::uPtr< ::uObject*>(__this->_progress), ::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ProgressAnimation__OnChanged, __this));
        __this->_prevValue = ::app::Fuse::Triggers::IProgress::Progress(::uPtr< ::uObject*>(__this->_progress));
        __this->BypassSeek(__this->_prevValue, 0);
    }
}

void ProgressAnimation__OnUnrooted(ProgressAnimation* __this, ::app::Fuse::Node* elm)
{
    if (__this->_progress != NULL)
    {
        ::app::Fuse::Triggers::IProgress::remove_ProgressChanged(::uPtr< ::uObject*>(__this->_progress), ::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ProgressAnimation__OnChanged, __this));
        __this->_progress = NULL;
    }

    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

State__uType* State__typeof()
{
    static ::uStaticStrong<State__uType*> type;
    if (type != NULL) return type;

    type = (State__uType*)::uAllocClassType(sizeof(State__uType), "Fuse.Triggers.State", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))State__OnRooted;

    type->SetStrongRefs(
        "_Name", offsetof(State, _Name));

    return type;
}

::uString* State__get_Name(State* __this)
{
    return __this->_Name;
}

bool State__get_On(State* __this)
{
    return __this->_on;
}

double State__get_Progress_1(State* __this)
{
    return ::app::Fuse::Triggers::Trigger__get_Progress(__this);
}

void State__OnRooted(State* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);

    if (__this->_on)
    {
        __this->BypassActivate();
    }
}

void State__set_Name(State* __this, ::uString* value)
{
    __this->_Name = value;
}

void State__set_On(State* __this, bool value)
{
    if (__this->_on == value)
    {
        return;
    }

    __this->_on = value;

    if (__this->Node() != NULL)
    {
        if (__this->_on)
        {
            __this->Activate(NULL);
        }
        else
        {
            __this->Deactivate();
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StateGroup__uType* StateGroup__typeof()
{
    static ::uStaticStrong<StateGroup__uType*> type;
    if (type != NULL) return type;

    type = (StateGroup__uType*)::uAllocClassType(sizeof(StateGroup__uType), "Fuse.Triggers.StateGroup", false, 1, 2, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))StateGroup__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))StateGroup__OnUnrooted;
    type->__interface_0.__fp_FindObjectByName = (::uObject*(*)(void*, ::uString*, ::uDelegate*))StateGroup__FindObjectByName;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(StateGroup__uType, __interface_0));

    type->SetStrongRefs(
        "_active", offsetof(StateGroup, _active),
        "_states", offsetof(StateGroup, _states));

    return type;
}

void StateGroup__CheckAllDone(StateGroup* __this)
{
    bool all = true;

    for (::uObject* enum_128 = ::app::Uno::Collections::IEnumerable__Fuse_Triggers_State::GetEnumerator(::uPtr< ::uObject*>(__this->_states)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_128)); )
    {
        ::app::Fuse::Triggers::State* state = ::app::Uno::Collections::IEnumerator__Fuse_Triggers_State::Current(::uPtr< ::uObject*>(enum_128));

        if (::uPtr< ::app::Fuse::Triggers::State*>(state)->Progress_1() > 0.0)
        {
            all = false;
        }
    }

    if (all && (__this->_active != NULL))
    {
        ::uPtr< ::app::Fuse::Triggers::State*>(__this->_active)->On(true);
    }
}

::uObject* StateGroup__FindObjectByName(StateGroup* __this, ::uString* name, ::uDelegate* acceptor)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Triggers_State::GetEnumerator(::uPtr< ::uObject*>(__this->States())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Triggers::State* s = ::app::Uno::Collections::IEnumerator__Fuse_Triggers_State::Current(::uPtr< ::uObject*>(enum_123));

        if (::app::Uno::String__op_Equality(NULL, ::uPtr< ::app::Fuse::Triggers::State*>(s)->Name(), name) && ::uPtr< ::uDelegate*>(acceptor)->Invoke< bool, ::uObject*>((::uObject*)s))
        {
            return (::uObject*)s;
        }
    }

    return NULL;
}

::uObject* StateGroup__get_States(StateGroup* __this)
{
    return __this->_states;
}

int StateGroup__get_Transition(StateGroup* __this)
{
    return __this->_transition;
}

void StateGroup__OnPlaybackDone(StateGroup* __this, ::app::Fuse::Triggers::Trigger* which)
{
    if (__this->Transition() == 1)
    {
        __this->CheckAllDone();
    }
}

void StateGroup__OnRooted(StateGroup* __this, ::app::Fuse::Node* elm)
{
    if ((__this->_active == NULL) && (::app::Uno::Collections::ICollection__Fuse_Triggers_State::Count(::uPtr< ::uObject*>(__this->_states)) > 0))
    {
        __this->_active = ::app::Uno::Collections::IList__Fuse_Triggers_State::Item(::uPtr< ::uObject*>(__this->_states), 0);
    }

    for (::uObject* enum_125 = ::app::Uno::Collections::IEnumerable__Fuse_Triggers_State::GetEnumerator(::uPtr< ::uObject*>(__this->_states)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
    {
        ::app::Fuse::Triggers::State* state = ::app::Uno::Collections::IEnumerator__Fuse_Triggers_State::Current(::uPtr< ::uObject*>(enum_125));
        ::uPtr< ::app::Fuse::Triggers::State*>(state)->On(state == __this->_active);
        state->add_PlaybackDone(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Triggers_Trigger__typeof(), (const void*)StateGroup__OnPlaybackDone, __this));
        state->Rooted(elm);
    }
}

void StateGroup__OnUnrooted(StateGroup* __this, ::app::Fuse::Node* elm)
{
    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Triggers_State::GetEnumerator(::uPtr< ::uObject*>(__this->_states)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Fuse::Triggers::State* state = ::app::Uno::Collections::IEnumerator__Fuse_Triggers_State::Current(::uPtr< ::uObject*>(enum_124));
        ::uPtr< ::app::Fuse::Triggers::State*>(state)->remove_PlaybackDone(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Triggers_Trigger__typeof(), (const void*)StateGroup__OnPlaybackDone, __this));
        state->Unrooted(elm);
    }
}

void StateGroup__set_Transition(StateGroup* __this, int value)
{
    __this->_transition = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* StateTransition__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Triggers.StateTransition", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Parallel", 0LL,
        "Exclusive", 1LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Trigger__uType* Trigger__typeof()
{
    static ::uStaticStrong<Trigger__uType*> type;
    if (type != NULL) return type;

    type = (Trigger__uType*)::uAllocClassType(sizeof(Trigger__uType), "Fuse.Triggers.Trigger", false, 0, 8, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Trigger__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Trigger__OnUnrooted;

    type->SetStrongRefs(
        "_actions", offsetof(Trigger, _actions),
        "_animation", offsetof(Trigger, _animation),
        "_animState", offsetof(Trigger, _animState),
        "_behaviors", offsetof(Trigger, _behaviors),
        "_doneAction", offsetof(Trigger, _doneAction),
        "_node", offsetof(Trigger, _node),
        "_nodes", offsetof(Trigger, _nodes),
        "PlaybackDone", offsetof(Trigger, PlaybackDone));

    return type;
}

void Trigger___ObjInit_1(Trigger* __this)
{
    ::app::Fuse::Behavior___ObjInit(__this);
}

void Trigger__Activate(Trigger* __this, ::uDelegate* done)
{
    __this->Start();
    __this->SetDone(done, true);
    __this->EnsureState(1.0);

    if (__this->_animState != NULL)
    {
        ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->PlayOn();
    }
}

void Trigger__add_PlaybackDone(Trigger* __this, ::uDelegate* value)
{
    __this->PlaybackDone = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PlaybackDone, (::uDelegate*)value), ::app::Uno::Action__Fuse_Triggers_Trigger__typeof());
}

void Trigger__AddContent(Trigger* __this, ::app::Fuse::Node* target)
{
    ::uObject* iarn = ::uAs< ::uObject*>(target, ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof());

    if ((__this->_nodes != NULL) && (iarn != NULL))
    {
        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Node::GetEnumerator(::uPtr< ::uObject*>(__this->_nodes)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Fuse::Node* c = ::app::Uno::Collections::IEnumerator__Fuse_Node::Current(::uPtr< ::uObject*>(enum_123));
            ::app::Fuse::Triggers::IAddRemove__Fuse_Node::Add(::uPtr< ::uObject*>(iarn), c);
        }
    }

    if ((__this->_behaviors != NULL) && (__this->_node != NULL))
    {
        for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Behavior::GetEnumerator(::uPtr< ::uObject*>(__this->_behaviors)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
        {
            ::app::Fuse::Behavior* b = ::app::Uno::Collections::IEnumerator__Fuse_Behavior::Current(::uPtr< ::uObject*>(enum_124));
            ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->_node)->Behaviors()), b);
        }
    }
}

void Trigger__BypassActivate(Trigger* __this)
{
    if (__this->Bypass() == 1)
    {
        __this->Activate(NULL);
    }
    else
    {
        __this->BypassSeek(1.0, 0);
        __this->PlayOn();
    }
}

void Trigger__BypassDeactivate(Trigger* __this)
{
    if (__this->Bypass() == 1)
    {
        __this->Deactivate();
    }
    else
    {
        __this->BypassSeek(0.0, 0);
        __this->Deactivate();
    }
}

void Trigger__BypassSeek(Trigger* __this, double progress, int direction)
{
    if (__this->Bypass() == 1)
    {
        __this->Seek(progress, direction);
        return;
    }

    if (progress > 0.0)
    {
        __this->Start();
    }
    else
    {
        __this->Stop();
    }

    if (__this->EnsureState(progress))
    {
        ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->SeekProgress(progress, direction, 3);
    }
}

void Trigger__CleanupState(Trigger* __this)
{
    if (__this->_animState != NULL)
    {
        ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->Dispose();
        __this->_animState = NULL;
    }
}

void Trigger__CreateState(Trigger* __this)
{
    __this->CleanupState();
    __this->EnsureAnimationLength();
    __this->_animState = ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->CreateState(__this->_node);
    ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->add_PlaybackDone(::uNewDelegateNonVirt(::app::Uno::Action__object__typeof(), (const void*)Trigger__OnPlaybackDone, __this));

    if (__this->HasActions())
    {
        ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->add_ProgressUpdated(::uNewDelegateNonVirt(::app::Uno::Action__object__typeof(), (const void*)Trigger__OnProgressUpdated, __this));
    }
}

void Trigger__Deactivate(Trigger* __this)
{
    if (__this->Progress() <= 0.0)
    {
        __this->Stop();
        return;
    }

    __this->PlayEnd(false, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Trigger__Stop, __this));
}

void Trigger__EnsureAnimationLength(Trigger* __this)
{
    if (!__this->HasActions())
    {
        return;
    }

    double animFore = ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->GetTotalDuration(0);
    double animBack = ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->GetTotalDuration(1);
    double actFore = 0.0;
    double actBack = 0.0;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_Actions_TriggerAction enum_128 = ::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*>(__this->_actions)->GetEnumerator(); enum_128.MoveNext(); )
    {
        ::app::Fuse::Triggers::Actions::TriggerAction* action = enum_128.Current();
        float when = ::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(action)->Delay();

        if ((action->Direction() == 0) || (action->Direction() == 2))
        {
            actFore = ::app::Uno::Math__Max_7(NULL, (double)when, actFore);
        }

        if ((action->Direction() == 1) || (action->Direction() == 2))
        {
            actBack = ::app::Uno::Math__Max_7(NULL, (double)when, actBack);
        }
    }

    if ((actFore <= animFore) && (actBack <= animBack))
    {
        return;
    }

    ::app::Fuse::Animations::Nothing* n = ::app::Fuse::Animations::Nothing__New_1(NULL);
    ::uPtr< ::app::Fuse::Animations::Nothing*>(n)->Delay_1(actFore);
    n->DelayBack(actBack);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(__this->Animators()), (::app::Fuse::Animations::Animator*)n);

    if (__this->BackwardAnimation() != NULL)
    {
        n = ::app::Fuse::Animations::Nothing__New_1(NULL);
        ::uPtr< ::app::Fuse::Animations::Nothing*>(n)->Delay_1(actBack);
        ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->BackwardAnimation())->Animators()), (::app::Fuse::Animations::Animator*)n);
    }
}

bool Trigger__EnsureState(Trigger* __this, double progress)
{
    if (progress > 0.0)
    {
        if ((__this->_animState == NULL) && (__this->HasAnimators() || __this->HasActions()))
        {
            __this->CreateState();
        }
    }

    return __this->_animState != NULL;
}

::uObject* Trigger__get_Actions(Trigger* __this)
{
    if (__this->_actions == NULL)
    {
        __this->_actions = ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction__New_1(NULL);
    }

    return (::uObject*)__this->_actions;
}

::app::Fuse::Animations::TriggerAnimation* Trigger__get_Animation(Trigger* __this)
{
    if (__this->_animation == NULL)
    {
        __this->_animation = ::app::Fuse::Animations::TriggerAnimation__New_1(NULL);
    }

    return __this->_animation;
}

::uObject* Trigger__get_Animators(Trigger* __this)
{
    return ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->Animators();
}

::app::Fuse::Animations::TriggerAnimation* Trigger__get_BackwardAnimation(Trigger* __this)
{
    return ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->Backward();
}

::uObject* Trigger__get_Behaviors(Trigger* __this)
{
    if (__this->_behaviors == NULL)
    {
        __this->_behaviors = (::uObject*)::app::Uno::Collections::ObservableList__Fuse_Behavior__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Behavior__typeof(), (const void*)Trigger__OnBehaviorAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Behavior__typeof(), (const void*)Trigger__OnBehaviorRemoved, __this));
    }

    return __this->_behaviors;
}

int Trigger__get_Bypass(Trigger* __this)
{
    return __this->_Bypass;
}

bool Trigger__get_HasActions(Trigger* __this)
{
    return (__this->_actions != NULL) && (::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*>(__this->_actions)->Count() > 0);
}

bool Trigger__get_HasAnimators(Trigger* __this)
{
    return (__this->_animation != NULL) && ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->_animation)->HasAnimators();
}

bool Trigger__get_IsRooted_1(Trigger* __this)
{
    return __this->_node != NULL;
}

::app::Fuse::Node* Trigger__get_Node(Trigger* __this)
{
    return __this->_node;
}

double Trigger__get_Progress(Trigger* __this)
{
    if (__this->_animState != NULL)
    {
        return ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->Progress();
    }

    return 0.0;
}

void Trigger__InversePulse(Trigger* __this)
{
    __this->PlayEnd(false, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Trigger__PlayOn, __this));
}

void Trigger__OnBehaviorAdded(Trigger* __this, ::app::Fuse::Behavior* b)
{
    if (__this->_node != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Behavior::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->_node)->Behaviors()), b);
    }
}

void Trigger__OnBehaviorRemoved(Trigger* __this, ::app::Fuse::Behavior* b)
{
    if (__this->_node != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Behavior::Remove(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->_node)->Behaviors()), b);
    }
}

void Trigger__OnPlaybackDone(Trigger* __this, ::uObject* s)
{
    __this->SetPlayDirection(0);

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PlaybackDone, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PlaybackDone)->InvokeVoid< Trigger*>(__this);
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)__this->_doneAction, NULL))
    {
        return;
    }

    ::uDelegate* da = __this->_doneAction;
    __this->_doneAction = NULL;

    if ((__this->_doneOn && ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->ProgressFullOn()) || (!__this->_doneOn && ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->ProgressFullOff()))
    {
        ::uPtr< ::uDelegate*>(da)->InvokeVoid();
    }
}

void Trigger__OnProgressChanged(Trigger* __this)
{
}

void Trigger__OnProgressUpdated(Trigger* __this, ::uObject* s)
{
    double prev = ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->PreviousProgress();
    double cur = ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->Progress();
    double diff = cur - prev;

    if (diff == 0.0)
    {
        return;
    }

    __this->OnProgressChanged();
    __this->SetPlayDirection((diff > 0.0) ? 1 : ((diff < 0.0) ? -1 : 0));
    int dir = (diff > 0.0) ? 0 : 1;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_Actions_TriggerAction enum_129 = ::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*>(__this->_actions)->GetEnumerator(); enum_129.MoveNext(); )
    {
        ::app::Fuse::Triggers::Actions::TriggerAction* action = enum_129.Current();

        if (!::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(action)->IsProgressTriggered())
        {
            continue;
        }

        float tp = ::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(action)->ProgressWhen((float)::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->CurrentTotalDuration());
        bool call = (dir == 0) ? ((((double)tp >= prev) && ((double)tp < cur)) || ((tp == 1.0f) && (cur == 1.0))) : ((((double)tp <= prev) && ((double)tp > cur)) || ((tp == 0.0f) && (cur == 0.0)));

        if (call && ((action->Direction() == 2) || (action->Direction() == dir)))
        {
            action->PerformFromNode(__this->_node);
        }
    }
}

void Trigger__OnRooted(Trigger* __this, ::app::Fuse::Node* elm)
{
    __this->_node = elm;
}

void Trigger__OnUnrooted(Trigger* __this, ::app::Fuse::Node* elm)
{
    __this->Stop();
    __this->CleanupState();
    __this->_node = NULL;
}

void Trigger__PlayEnd(Trigger* __this, bool on, ::uDelegate* done)
{
    if (on)
    {
        __this->Start();
    }

    __this->SetDone(done, on);

    if (__this->EnsureState((double)(on ? 1 : 0)))
    {
        ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->PlayEnd(on);
    }
}

void Trigger__PlayOn(Trigger* __this)
{
    __this->PlayEnd(true, NULL);
}

void Trigger__PlayTo(Trigger* __this, double progress, int variant)
{
    if (__this->EnsureState(progress))
    {
        ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->PlayToProgress(progress, variant);
    }
}

void Trigger__Pulse(Trigger* __this)
{
    __this->SetPlayDirection(0);
    __this->Activate(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Trigger__Deactivate, __this));
}

void Trigger__remove_PlaybackDone(Trigger* __this, ::uDelegate* value)
{
    __this->PlaybackDone = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->PlaybackDone, (::uDelegate*)value), ::app::Uno::Action__Fuse_Triggers_Trigger__typeof());
}

void Trigger__RemoveContent(Trigger* __this, ::app::Fuse::Node* target)
{
    ::uObject* iarn = ::uAs< ::uObject*>(target, ::app::Fuse::Triggers::IAddRemove__Fuse_Node__typeof());

    if ((__this->_nodes != NULL) && (iarn != NULL))
    {
        for (::uObject* enum_125 = ::app::Uno::Collections::IEnumerable__Fuse_Node::GetEnumerator(::uPtr< ::uObject*>(__this->_nodes)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
        {
            ::app::Fuse::Node* c = ::app::Uno::Collections::IEnumerator__Fuse_Node::Current(::uPtr< ::uObject*>(enum_125));
            ::app::Fuse::Triggers::IAddRemove__Fuse_Node::Remove(::uPtr< ::uObject*>(iarn), c);
        }
    }

    if ((__this->_behaviors != NULL) && (__this->_node != NULL))
    {
        for (::uObject* enum_126 = ::app::Uno::Collections::IEnumerable__Fuse_Behavior::GetEnumerator(::uPtr< ::uObject*>(__this->_behaviors)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_126)); )
        {
            ::app::Fuse::Behavior* b = ::app::Uno::Collections::IEnumerator__Fuse_Behavior::Current(::uPtr< ::uObject*>(enum_126));
            ::app::Uno::Collections::ICollection__Fuse_Behavior::Remove(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->_node)->Behaviors()), b);
        }
    }
}

void Trigger__Seek(Trigger* __this, double progress, int direction)
{
    if (progress > 0.0)
    {
        __this->Start();
    }
    else
    {
        __this->Stop();
    }

    if (__this->EnsureState(progress))
    {
        ::uPtr< ::app::Fuse::Animations::TriggerAnimationState*>(__this->_animState)->SeekProgress(progress, direction, 1);
    }
}

void Trigger__set_Animation(Trigger* __this, ::app::Fuse::Animations::TriggerAnimation* value)
{
    __this->_animation = value;
}

void Trigger__set_BackwardAnimation(Trigger* __this, ::app::Fuse::Animations::TriggerAnimation* value)
{
    ::uPtr< ::app::Fuse::Animations::TriggerAnimation*>(__this->Animation())->Backward(value);
}

void Trigger__set_Bypass(Trigger* __this, int value)
{
    __this->_Bypass = value;
}

void Trigger__SetDone(Trigger* __this, ::uDelegate* done, bool on)
{
    __this->_doneOn = on;
    __this->_doneAction = done;
}

void Trigger__SetPlayDirection(Trigger* __this, int next)
{
    if (next == __this->_lastPlayDirection)
    {
        return;
    }

    __this->_lastPlayDirection = next;

    if (next == 0)
    {
        return;
    }

    int dir = (next > 0) ? 0 : 1;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Triggers_Actions_TriggerAction enum_127 = ::uPtr< ::app::Uno::Collections::List__Fuse_Triggers_Actions_TriggerAction*>(__this->_actions)->GetEnumerator(); enum_127.MoveNext(); )
    {
        ::app::Fuse::Triggers::Actions::TriggerAction* action = enum_127.Current();

        if (::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(action)->IsProgressTriggered())
        {
            continue;
        }

        if ((::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(action)->Direction() == dir) || (::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(action)->Direction() == 2))
        {
            ::uPtr< ::app::Fuse::Triggers::Actions::TriggerAction*>(action)->PerformFromNode(__this->_node);
        }
    }
}

void Trigger__Start(Trigger* __this)
{
    if (!__this->_isStarted)
    {
        if (!__this->IsRooted_1())
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Trigger started prior to being rooted: "), (::uObject*)__this)));
        }

        __this->AddContent(__this->_node);
        __this->_isStarted = true;
    }
}

void Trigger__Stop(Trigger* __this)
{
    if (__this->_isStarted)
    {
        __this->RemoveContent(__this->_node);
        __this->_isStarted = false;
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* TriggerBypassMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Triggers.TriggerBypassMode", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Standard", 0LL,
        "Never", 1LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileBool__uType* WhileBool__typeof()
{
    static ::uStaticStrong<WhileBool__uType*> type;
    if (type != NULL) return type;

    type = (WhileBool__uType*)::uAllocClassType(sizeof(WhileBool__uType), "Fuse.Triggers.WhileBool", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileValue__bool__typeof());

    type->SetInterfaces(
        ::app::Fuse::Triggers::IValue__bool__typeof(), offsetof(WhileBool__uType, __interface_0));

    return type;
}

void WhileBool___ObjInit_4(WhileBool* __this)
{
    ::app::Fuse::Triggers::WhileValue__bool___ObjInit_3(__this);
}

bool WhileBool__get_Value_1(WhileBool* __this)
{
    return ::app::Fuse::Triggers::WhileValue__bool__get_Value(__this);
}

void WhileBool__set_Value_1(WhileBool* __this, bool value)
{
    ::app::Fuse::Triggers::WhileValue__bool__set_Value(__this, value);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileDisabled__uType* WhileDisabled__typeof()
{
    static ::uStaticStrong<WhileDisabled__uType*> type;
    if (type != NULL) return type;

    type = (WhileDisabled__uType*)::uAllocClassType(sizeof(WhileDisabled__uType), "Fuse.Triggers.WhileDisabled", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileEnabledDisabledTrigger__typeof());
    type->__fp_get_IsActive = (bool(*)(::app::Fuse::Triggers::WhileEnabledDisabledTrigger*))WhileDisabled__get_IsActive;

    return type;
}

void WhileDisabled___ObjInit_4(WhileDisabled* __this)
{
    ::app::Fuse::Triggers::WhileEnabledDisabledTrigger___ObjInit_3(__this);
}

bool WhileDisabled__get_IsActive(WhileDisabled* __this)
{
    return (__this->Node() != NULL) ? !::uPtr< ::app::Fuse::Node*>(__this->Node())->IsEnabled() : false;
}

WhileDisabled* WhileDisabled__New_1(::uStatic* __this)
{
    WhileDisabled* inst = (WhileDisabled*)::uAllocObject(sizeof(WhileDisabled), WhileDisabled__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileEnabled__uType* WhileEnabled__typeof()
{
    static ::uStaticStrong<WhileEnabled__uType*> type;
    if (type != NULL) return type;

    type = (WhileEnabled__uType*)::uAllocClassType(sizeof(WhileEnabled__uType), "Fuse.Triggers.WhileEnabled", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileEnabledDisabledTrigger__typeof());
    type->__fp_get_IsActive = (bool(*)(::app::Fuse::Triggers::WhileEnabledDisabledTrigger*))WhileEnabled__get_IsActive;

    return type;
}

bool WhileEnabled__get_IsActive(WhileEnabled* __this)
{
    return (__this->Node() != NULL) ? ::uPtr< ::app::Fuse::Node*>(__this->Node())->IsEnabled() : true;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileEnabledDisabledTrigger__uType* WhileEnabledDisabledTrigger__typeof()
{
    static ::uStaticStrong<WhileEnabledDisabledTrigger__uType*> type;
    if (type != NULL) return type;

    type = (WhileEnabledDisabledTrigger__uType*)::uAllocClassType(sizeof(WhileEnabledDisabledTrigger__uType), "Fuse.Triggers.WhileEnabledDisabledTrigger", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileEnabledDisabledTrigger__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileEnabledDisabledTrigger__OnUnrooted;

    return type;
}

void WhileEnabledDisabledTrigger___ObjInit_3(WhileEnabledDisabledTrigger* __this)
{
    ::app::Fuse::Triggers::WhileTrigger___ObjInit_2(__this);
}

void WhileEnabledDisabledTrigger__OnIsEnabledChanged(WhileEnabledDisabledTrigger* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->SetActive(__this->IsActive());
}

void WhileEnabledDisabledTrigger__OnRooted(WhileEnabledDisabledTrigger* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::Node*>(elm)->add_IsEnabledChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WhileEnabledDisabledTrigger__OnIsEnabledChanged, __this));
    __this->BypassSetActive(__this->IsActive());
}

void WhileEnabledDisabledTrigger__OnUnrooted(WhileEnabledDisabledTrigger* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Node*>(elm)->remove_IsEnabledChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WhileEnabledDisabledTrigger__OnIsEnabledChanged, __this));
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> WhileFailed___whileFailedProp;

WhileFailed__uType* WhileFailed__typeof()
{
    static ::uStaticStrong<WhileFailed__uType*> type;
    if (type != NULL) return type;

    type = (WhileFailed__uType*)::uAllocClassType(sizeof(WhileFailed__uType), "Fuse.Triggers.WhileFailed", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileFailed__OnRooted;

    return type;
}

void WhileFailed___TypeInit(::uStatic* __this)
{
    WhileFailed___whileFailedProp = ::app::Fuse::Properties__CreateHandle(NULL);
}

bool WhileFailed__IsFailed(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uObject* v = ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Get(WhileFailed___whileFailedProp);

    if (!::uIs(v, ::app::Uno::Bool__typeof()))
    {
        return false;
    }

    return ::uUnbox< bool>(::app::Uno::Bool__typeof(), v);
}

void WhileFailed__OnRooted(WhileFailed* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, n);
    __this->BypassSetActive(WhileFailed__IsFailed(NULL, n));
}

void WhileFailed__SetState(::uStatic* __this, ::app::Fuse::Node* n, bool failed, ::uString* message)
{
    bool v = WhileFailed__IsFailed(NULL, n);

    if (v != failed)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(WhileFailed___whileFailedProp, ::uBox(::app::Uno::Bool__typeof(), failed));
        n->SetResource(::uGetConstString("WhileFailed.Message"), (::uObject*)message);

        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Behavior::GetEnumerator(::uPtr< ::uObject*>(n->Behaviors())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Fuse::Behavior* b = ::app::Uno::Collections::IEnumerator__Fuse_Behavior::Current(::uPtr< ::uObject*>(enum_123));
            WhileFailed* wl = ::uAs< WhileFailed*>(b, WhileFailed__typeof());

            if (wl != NULL)
            {
                ::uPtr< WhileFailed*>(wl)->SetActive(failed);
            }
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileFalse__uType* WhileFalse__typeof()
{
    static ::uStaticStrong<WhileFalse__uType*> type;
    if (type != NULL) return type;

    type = (WhileFalse__uType*)::uAllocClassType(sizeof(WhileFalse__uType), "Fuse.Triggers.WhileFalse", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileBool__typeof());
    type->__fp_get_IsOn = (bool(*)(::app::Fuse::Triggers::WhileValue__bool*))WhileFalse__get_IsOn;

    type->SetInterfaces(
        ::app::Fuse::Triggers::IValue__bool__typeof(), offsetof(WhileFalse__uType, __interface_0));

    return type;
}

bool WhileFalse__get_IsOn(WhileFalse* __this)
{
    return !__this->Value_1();
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileFocused__uType* WhileFocused__typeof()
{
    static ::uStaticStrong<WhileFocused__uType*> type;
    if (type != NULL) return type;

    type = (WhileFocused__uType*)::uAllocClassType(sizeof(WhileFocused__uType), "Fuse.Triggers.WhileFocused", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileFocused__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileFocused__OnUnrooted;

    return type;
}

void WhileFocused___ObjInit_2(WhileFocused* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

WhileFocused* WhileFocused__New_1(::uStatic* __this)
{
    WhileFocused* inst = (WhileFocused*)::uAllocObject(sizeof(WhileFocused), WhileFocused__typeof());
    inst->_ObjInit_2();
    return inst;
}

void WhileFocused__OnGotFocus(WhileFocused* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->Activate(NULL);
}

void WhileFocused__OnLostFocus(WhileFocused* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->Deactivate();
}

void WhileFocused__OnRooted(WhileFocused* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)WhileFocused__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)WhileFocused__OnLostFocus, __this));

    if (::app::Fuse::Input::Focus__get_FocusedNode(NULL) == elm)
    {
        __this->Activate(NULL);
    }
}

void WhileFocused__OnUnrooted(WhileFocused* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)WhileFocused__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)WhileFocused__OnLostFocus, __this));
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileFocusWithin__uType* WhileFocusWithin__typeof()
{
    static ::uStaticStrong<WhileFocusWithin__uType*> type;
    if (type != NULL) return type;

    type = (WhileFocusWithin__uType*)::uAllocClassType(sizeof(WhileFocusWithin__uType), "Fuse.Triggers.WhileFocusWithin", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileFocusWithin__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileFocusWithin__OnUnrooted;

    return type;
}

void WhileFocusWithin___ObjInit_3(WhileFocusWithin* __this)
{
    ::app::Fuse::Triggers::WhileTrigger___ObjInit_2(__this);
}

bool WhileFocusWithin__get_IsOn(WhileFocusWithin* __this)
{
    return ::app::Fuse::Input::Focus__IsWithin(NULL, __this->Node());
}

WhileFocusWithin* WhileFocusWithin__New_1(::uStatic* __this)
{
    WhileFocusWithin* inst = (WhileFocusWithin*)::uAllocObject(sizeof(WhileFocusWithin), WhileFocusWithin__typeof());
    inst->_ObjInit_3();
    return inst;
}

void WhileFocusWithin__OnFocusChange(WhileFocusWithin* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->SetActive(__this->IsOn());
}

void WhileFocusWithin__OnRooted(WhileFocusWithin* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)WhileFocusWithin__OnFocusChange, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)WhileFocusWithin__OnFocusChange, __this));
    __this->BypassSetActive(__this->IsOn());
}

void WhileFocusWithin__OnUnrooted(WhileFocusWithin* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)WhileFocusWithin__OnFocusChange, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)WhileFocusWithin__OnFocusChange, __this));
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/Triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileInteracting__uType* WhileInteracting__typeof()
{
    static ::uStaticStrong<WhileInteracting__uType*> type;
    if (type != NULL) return type;

    type = (WhileInteracting__uType*)::uAllocClassType(sizeof(WhileInteracting__uType), "Fuse.Triggers.WhileInteracting", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileInteracting__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileInteracting__OnUnrooted;

    type->SetStrongRefs(
        "_control", offsetof(WhileInteracting, _control));

    return type;
}

void WhileInteracting___ObjInit_3(WhileInteracting* __this)
{
    ::app::Fuse::Triggers::WhileTrigger___ObjInit_2(__this);
}

WhileInteracting* WhileInteracting__New_1(::uStatic* __this)
{
    WhileInteracting* inst = (WhileInteracting*)::uAllocObject(sizeof(WhileInteracting), WhileInteracting__typeof());
    inst->_ObjInit_3();
    return inst;
}

void WhileInteracting__OnInteractingChanged(WhileInteracting* __this, ::uObject* s, ::uObject* a)
{
    __this->SetActive(::uPtr< ::app::Fuse::Controls::Control*>(__this->_control)->IsInteracting());
}

void WhileInteracting__OnRooted(WhileInteracting* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, n);
    __this->_control = ::uAs< ::app::Fuse::Controls::Control*>(n, ::app::Fuse::Controls::Control__typeof());

    if (__this->_control == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("WhileInteracting must be rooted in a Control")));
    }

    ::uPtr< ::app::Fuse::Controls::Control*>(__this->_control)->add_IsInteractingChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WhileInteracting__OnInteractingChanged, __this));
    __this->BypassSetActive(::uPtr< ::app::Fuse::Controls::Control*>(__this->_control)->IsInteracting());
}

void WhileInteracting__OnUnrooted(WhileInteracting* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Controls::Control*>(__this->_control)->remove_IsInteractingChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)WhileInteracting__OnInteractingChanged, __this));
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

float WhileKeyboardVisible___deltaY;
::uStaticStrong< ::uObject*> WhileKeyboardVisible__Keyboard;

WhileKeyboardVisible__uType* WhileKeyboardVisible__typeof()
{
    static ::uStaticStrong<WhileKeyboardVisible__uType*> type;
    if (type != NULL) return type;

    type = (WhileKeyboardVisible__uType*)::uAllocClassType(sizeof(WhileKeyboardVisible__uType), "Fuse.Triggers.WhileKeyboardVisible", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileKeyboardVisible__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileKeyboardVisible__OnUnrooted;

    type->SetStrongRefs(
        "_node", offsetof(WhileKeyboardVisible, _node_1));

    return type;
}

void WhileKeyboardVisible___TypeInit(::uStatic* __this)
{
    WhileKeyboardVisible__Keyboard = (::uObject*)::app::Fuse::Triggers::WhileKeyboardVisible_RelativeToKeyboardMode__New_1(NULL);
}

float WhileKeyboardVisible__get_Threshold(WhileKeyboardVisible* __this)
{
    return __this->_threshold;
}

float WhileKeyboardVisible__GetHeight(WhileKeyboardVisible* __this, ::app::Uno::Rect r)
{
    return r.Bottom - r.Top;
}

void WhileKeyboardVisible__OnBottomBarResize(WhileKeyboardVisible* __this, ::uObject* sender, ::app::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    float newHeight = __this->GetHeight(::uPtr< ::app::Uno::Platform::SystemUIWillResizeEventArgs*>(args)->EndFrame());
    float density = 1.0f;
    ::uObject* vp = ::uPtr< ::app::Fuse::Node*>(__this->_node_1)->Viewport();

    if (vp != NULL)
    {
        density = ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(vp));
    }

    float newDeltaY = (newHeight - __this->_baseHeight) / density;

    if (newDeltaY > __this->Threshold())
    {
        WhileKeyboardVisible___deltaY = newDeltaY;
        __this->Activate(NULL);
    }
    else
    {
        __this->_baseHeight = __this->GetHeight(::uPtr< ::app::Uno::Platform::SystemUIWillResizeEventArgs*>(args)->EndFrame());
        __this->Deactivate();
    }
}

void WhileKeyboardVisible__OnRooted(WhileKeyboardVisible* __this, ::app::Fuse::Node* n)
{
    __this->_node_1 = n;
    {
        ::app::Uno::Platform::SystemUI__add_BottomFrameWillResize(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_SystemUIWillResizeEventArgs__typeof(), (const void*)WhileKeyboardVisible__OnBottomBarResize, __this));
        {
            __this->_baseHeight = __this->GetHeight(::app::Uno::Platform::SystemUI__get_BottomFrame(NULL));
        }
    }

    ::app::Fuse::Triggers::Trigger__OnRooted(__this, n);
}

void WhileKeyboardVisible__OnUnrooted(WhileKeyboardVisible* __this, ::app::Fuse::Node* n)
{
    __this->_node_1 = n;
    {
        ::app::Uno::Platform::SystemUI__remove_BottomFrameWillResize(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__Uno_Platform_SystemUIWillResizeEventArgs__typeof(), (const void*)WhileKeyboardVisible__OnBottomBarResize, __this));
    }

    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, n);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileKeyboardVisible_RelativeToKeyboardMode__uType* WhileKeyboardVisible_RelativeToKeyboardMode__typeof()
{
    static ::uStaticStrong<WhileKeyboardVisible_RelativeToKeyboardMode__uType*> type;
    if (type != NULL) return type;

    type = (WhileKeyboardVisible_RelativeToKeyboardMode__uType*)::uAllocClassType(sizeof(WhileKeyboardVisible_RelativeToKeyboardMode__uType), "Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode", false, 1, 0, 0);

    type->__interface_0.__fp_GetAbsVector = (::app::Uno::Float3(*)(void*, ::app::Fuse::Translation*))WhileKeyboardVisible_RelativeToKeyboardMode__GetAbsVector;

    type->SetInterfaces(
        ::app::Fuse::ITranslationMode__typeof(), offsetof(WhileKeyboardVisible_RelativeToKeyboardMode__uType, __interface_0));

    return type;
}

void WhileKeyboardVisible_RelativeToKeyboardMode___ObjInit(WhileKeyboardVisible_RelativeToKeyboardMode* __this)
{
}

::app::Uno::Float3 WhileKeyboardVisible_RelativeToKeyboardMode__GetAbsVector(WhileKeyboardVisible_RelativeToKeyboardMode* __this, ::app::Fuse::Translation* t)
{
    return ::app::Uno::Float3__New_2(NULL, 0.0f, ::uPtr< ::app::Fuse::Translation*>(t)->Vector().Y * ::app::Fuse::Triggers::WhileKeyboardVisible___deltaY, 0.0f);
}

WhileKeyboardVisible_RelativeToKeyboardMode* WhileKeyboardVisible_RelativeToKeyboardMode__New_1(::uStatic* __this)
{
    WhileKeyboardVisible_RelativeToKeyboardMode* inst = (WhileKeyboardVisible_RelativeToKeyboardMode*)::uAllocObject(sizeof(WhileKeyboardVisible_RelativeToKeyboardMode), WhileKeyboardVisible_RelativeToKeyboardMode__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> WhileLoading___whileLoadingProp;

WhileLoading__uType* WhileLoading__typeof()
{
    static ::uStaticStrong<WhileLoading__uType*> type;
    if (type != NULL) return type;

    type = (WhileLoading__uType*)::uAllocClassType(sizeof(WhileLoading__uType), "Fuse.Triggers.WhileLoading", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileLoading__OnRooted;

    return type;
}

void WhileLoading___TypeInit(::uStatic* __this)
{
    WhileLoading___whileLoadingProp = ::app::Fuse::Properties__CreateHandle(NULL);
}

bool WhileLoading__IsLoading(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uObject* v = ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Get(WhileLoading___whileLoadingProp);

    if (!::uIs(v, ::app::Uno::Bool__typeof()))
    {
        return false;
    }

    return ::uUnbox< bool>(::app::Uno::Bool__typeof(), v);
}

void WhileLoading__OnRooted(WhileLoading* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, n);
    __this->BypassSetActive(WhileLoading__IsLoading(NULL, n));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileTrigger__uType* WhileTrigger__typeof()
{
    static ::uStaticStrong<WhileTrigger__uType*> type;
    if (type != NULL) return type;

    type = (WhileTrigger__uType*)::uAllocClassType(sizeof(WhileTrigger__uType), "Fuse.Triggers.WhileTrigger", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());

    return type;
}

void WhileTrigger___ObjInit_2(WhileTrigger* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

void WhileTrigger__BypassSetActive(WhileTrigger* __this, bool on)
{
    if (on != __this->Invert())
    {
        __this->BypassActivate();
    }
    else
    {
        __this->BypassDeactivate();
    }
}

bool WhileTrigger__get_Invert(WhileTrigger* __this)
{
    return __this->_Invert;
}

void WhileTrigger__set_Invert(WhileTrigger* __this, bool value)
{
    __this->_Invert = value;
}

void WhileTrigger__SetActive(WhileTrigger* __this, bool on)
{
    if (on != __this->Invert())
    {
        __this->Activate(NULL);
    }
    else
    {
        __this->Deactivate();
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileTrue__uType* WhileTrue__typeof()
{
    static ::uStaticStrong<WhileTrue__uType*> type;
    if (type != NULL) return type;

    type = (WhileTrue__uType*)::uAllocClassType(sizeof(WhileTrue__uType), "Fuse.Triggers.WhileTrue", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileBool__typeof());
    type->__fp_get_IsOn = (bool(*)(::app::Fuse::Triggers::WhileValue__bool*))WhileTrue__get_IsOn;

    type->SetInterfaces(
        ::app::Fuse::Triggers::IValue__bool__typeof(), offsetof(WhileTrue__uType, __interface_0));

    return type;
}

void WhileTrue___ObjInit_5(WhileTrue* __this)
{
    ::app::Fuse::Triggers::WhileBool___ObjInit_4(__this);
}

bool WhileTrue__get_IsOn(WhileTrue* __this)
{
    return __this->Value_1();
}

WhileTrue* WhileTrue__New_1(::uStatic* __this)
{
    WhileTrue* inst = (WhileTrue*)::uAllocObject(sizeof(WhileTrue), WhileTrue__typeof());
    inst->_ObjInit_5();
    return inst;
}

}}}
