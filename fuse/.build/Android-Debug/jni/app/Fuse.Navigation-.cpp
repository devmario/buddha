#include <app/Fuse.Animations.AnimationVariant.h>
#include <app/Fuse.Animations.Easing.h>
#include <app/Fuse.Animations.EasingFunction.h>
#include <app/Fuse.Animations.EasingFunctions.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Gestures.Edge.h>
#include <app/Fuse.Gestures.Internal.EdgeSwiper.h>
#include <app/Fuse.Gestures.SwipeGestureHelper.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Fuse.Input.PointerMovedArgs.h>
#include <app/Fuse.Input.PointerMovedHandler.h>
#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Input.PointerPressedHandler.h>
#include <app/Fuse.Input.PointerReleasedArgs.h>
#include <app/Fuse.Input.PointerReleasedHandler.h>
#include <app/Fuse.Navigation.ActivatingAnimation.h>
#include <app/Fuse.Navigation.BackForwardNavigationTrigger.h>
#include <app/Fuse.Navigation.DeactivatingAnimation.h>
#include <app/Fuse.Navigation.DefaultNavigationAnimator.h>
#include <app/Fuse.Navigation.DefaultNavigationAnimatorPlayer.h>
#include <app/Fuse.Navigation.DirectNavigation.h>
#include <app/Fuse.Navigation.EdgeNavigation.h>
#include <app/Fuse.Navigation.EndSeekArgs.h>
#include <app/Fuse.Navigation.EnterExitAnimation.h>
#include <app/Fuse.Navigation.EnteringAnimation.h>
#include <app/Fuse.Navigation.ExitingAnimation.h>
#include <app/Fuse.Navigation.GoBack.h>
#include <app/Fuse.Navigation.GoForward.h>
#include <app/Fuse.Navigation.HistoryChangedHandler.h>
#include <app/Fuse.Navigation.INavigation.h>
#include <app/Fuse.Navigation.INavigationAnimator.h>
#include <app/Fuse.Navigation.INavigationAnimatorPlayer.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Navigation.IPageResourceBinding.h>
#include <app/Fuse.Navigation.IWebViewNavgation.h>
#include <app/Fuse.Navigation.LoadUrl.h>
#include <app/Fuse.Navigation.NavigatedArgs.h>
#include <app/Fuse.Navigation.NavigatedHandler.h>
#include <app/Fuse.Navigation.NavigateTo.h>
#include <app/Fuse.Navigation.NavigateToggle.h>
#include <app/Fuse.Navigation.Navigation.h>
#include <app/Fuse.Navigation.NavigationAnimation.h>
#include <app/Fuse.Navigation.NavigationArgs.h>
#include <app/Fuse.Navigation.NavigationEdge.h>
#include <app/Fuse.Navigation.NavigationGotoMode.h>
#include <app/Fuse.Navigation.NavigationHandler.h>
#include <app/Fuse.Navigation.NavigationMode.h>
#include <app/Fuse.Navigation.NavigationPageCountHandler.h>
#include <app/Fuse.Navigation.NavigationPageProgressHandler.h>
#include <app/Fuse.Navigation.NavigationPageProperty.h>
#include <app/Fuse.Navigation.NavigationState.h>
#include <app/Fuse.Navigation.NavigationStateArgs.h>
#include <app/Fuse.Navigation.NavigationStateHandler.h>
#include <app/Fuse.Navigation.NavigationTriggerAction.h>
#include <app/Fuse.Navigation.NavigationTween.h>
#include <app/Fuse.Navigation.NavTriggerUtil.h>
#include <app/Fuse.Navigation.PlayerFactory.h>
#include <app/Fuse.Navigation.ProgressSpan.h>
#include <app/Fuse.Navigation.ProgressTimer.h>
#include <app/Fuse.Navigation.Reload.h>
#include <app/Fuse.Navigation.SeekNavigationAnimatorPlayer.h>
#include <app/Fuse.Navigation.SnapTo.h>
#include <app/Fuse.Navigation.StopLoading.h>
#include <app/Fuse.Navigation.StructuredNavigation.h>
#include <app/Fuse.Navigation.StructuredNavigation_NavigationStructure.h>
#include <app/Fuse.Navigation.SwipeDirection.h>
#include <app/Fuse.Navigation.SwipeEnds.h>
#include <app/Fuse.Navigation.SwipeNavigate.h>
#include <app/Fuse.Navigation.UpdateSeekArgs.h>
#include <app/Fuse.Navigation.WebViewNavigationExtensions.h>
#include <app/Fuse.Navigation.WebViewNavigationTrigger.h>
#include <app/Fuse.Navigation.WhileActive.h>
#include <app/Fuse.Navigation.WhileInactive.h>
#include <app/Fuse.Navigation.WhileInEnterState.h>
#include <app/Fuse.Navigation.WhileInExitState.h>
#include <app/Fuse.Navigation.WhileNavigationTrigger.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_Poin-b0dbd2da.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_Po-bf1c51b8.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_P-40044f7c.h>
#include <app/Fuse.PlacedHandler.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.Scripting.IEventSerializer.h>
#include <app/Fuse.Time.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__double.h>
#include <app/Uno.Action__object__double.h>
#include <app/Uno.Action__object__object__.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__Fuse_Navigation_NavigationEdge__Fus-e569bafb.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__Fuse_Navigation_Navigat-7ac99ca.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.ICollection__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Navigation_NavigationEdge__F-2f5b6bc5.h>
#include <app/Uno.Collections.List__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Collections.List__Fuse_Navigation_IPageResourceBinding.h>
#include <app/Uno.Collections.List__Fuse_Node.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Navigation_IPageResourceBinding.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Node.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.EventHandler__Fuse_Node.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Func__double.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.NotImplementedException.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {
namespace Navigation {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ActivatingAnimation__uType* ActivatingAnimation__typeof()
{
    static ::uStaticStrong<ActivatingAnimation__uType*> type;
    if (type != NULL) return type;

    type = (ActivatingAnimation__uType*)::uAllocClassType(sizeof(ActivatingAnimation__uType), "Fuse.Navigation.ActivatingAnimation", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Navigation::NavigationAnimation__typeof());
    type->__fp_ForceUpdate = (void(*)(::app::Fuse::Navigation::NavigationAnimation*))ActivatingAnimation__ForceUpdate;
    type->__fp_OnNavigationStateChanged = (void(*)(::app::Fuse::Navigation::NavigationAnimation*, ::uObject*, ::app::Fuse::Navigation::NavigationArgs*))ActivatingAnimation__OnNavigationStateChanged;

    return type;
}

void ActivatingAnimation__ForceUpdate(ActivatingAnimation* __this)
{
    __this->BypassSeek(__this->InvertProgress(::app::Fuse::Navigation::Navigation__GetProgress(NULL, __this->PageContext())), 0);
}

double ActivatingAnimation__InvertProgress(ActivatingAnimation* __this, double p)
{
    return 1.0 - ::app::Uno::Math__Min_10(NULL, 1.0, ::app::Uno::Math__Abs_7(NULL, (double)__this->Scale() * p));
}

void ActivatingAnimation__OnNavigationStateChanged(ActivatingAnimation* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state)
{
    int d = (::app::Uno::Math__Abs_7(NULL, ::uPtr< ::app::Fuse::Navigation::NavigationArgs*>(state)->Progress()) < ::app::Uno::Math__Abs_7(NULL, ::uPtr< ::app::Fuse::Navigation::NavigationArgs*>(state)->PreviousProgress())) ? 0 : 1;

    if ((state->Mode() != 1) && ::app::Fuse::Navigation::NavTriggerUtil__CrossesZero(NULL, state->Progress(), state->PreviousProgress()))
    {
        __this->Seek(1.0, ::app::Fuse::Navigation::NavTriggerUtil__Opposite(NULL, d));
    }

    __this->GoProgress(__this->InvertProgress(state->Progress()), d, state);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BackForwardNavigationTrigger__uType* BackForwardNavigationTrigger__typeof()
{
    static ::uStaticStrong<BackForwardNavigationTrigger__uType*> type;
    if (type != NULL) return type;

    type = (BackForwardNavigationTrigger__uType*)::uAllocClassType(sizeof(BackForwardNavigationTrigger__uType), "Fuse.Navigation.BackForwardNavigationTrigger", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))BackForwardNavigationTrigger__Perform;

    type->SetStrongRefs(
        "_context", offsetof(BackForwardNavigationTrigger, _context),
        "_webView", offsetof(BackForwardNavigationTrigger, _webView));

    return type;
}

::uObject* BackForwardNavigationTrigger__get_Context(BackForwardNavigationTrigger* __this)
{
    return __this->_context;
}

::uObject* BackForwardNavigationTrigger__get_WebView(BackForwardNavigationTrigger* __this)
{
    return __this->_webView;
}

void BackForwardNavigationTrigger__Perform(BackForwardNavigationTrigger* __this, ::app::Fuse::Node* n)
{
    ::uObject* ind_123 = __this->Context();
    ::uObject* ctx = (ind_123 != NULL) ? ind_123 : ::app::Fuse::Navigation::Navigation__TryFind(NULL, n);

    if (ctx != NULL)
    {
        __this->Perform_1(ctx, n);
    }

    ::uObject* ind_124 = __this->WebView();
    ::uObject* webView = (ind_124 != NULL) ? ind_124 : ::app::Fuse::Navigation::WebViewNavigationExtensions__TryFind(NULL, n);

    if (webView != NULL)
    {
        __this->Perform_2(webView, n);
    }
}

void BackForwardNavigationTrigger__set_Context(BackForwardNavigationTrigger* __this, ::uObject* value)
{
    __this->_context = value;
}

void BackForwardNavigationTrigger__set_WebView(BackForwardNavigationTrigger* __this, ::uObject* value)
{
    __this->_webView = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DeactivatingAnimation__uType* DeactivatingAnimation__typeof()
{
    static ::uStaticStrong<DeactivatingAnimation__uType*> type;
    if (type != NULL) return type;

    type = (DeactivatingAnimation__uType*)::uAllocClassType(sizeof(DeactivatingAnimation__uType), "Fuse.Navigation.DeactivatingAnimation", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Navigation::NavigationAnimation__typeof());
    type->__fp_ForceUpdate = (void(*)(::app::Fuse::Navigation::NavigationAnimation*))DeactivatingAnimation__ForceUpdate;
    type->__fp_OnNavigationStateChanged = (void(*)(::app::Fuse::Navigation::NavigationAnimation*, ::uObject*, ::app::Fuse::Navigation::NavigationArgs*))DeactivatingAnimation__OnNavigationStateChanged;

    return type;
}

void DeactivatingAnimation__ForceUpdate(DeactivatingAnimation* __this)
{
    __this->BypassSeek(::app::Uno::Math__Abs_7(NULL, ::app::Fuse::Navigation::Navigation__GetProgress(NULL, __this->PageContext())), 0);
}

void DeactivatingAnimation__OnNavigationStateChanged(DeactivatingAnimation* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state)
{
    int d = (::app::Uno::Math__Abs_7(NULL, ::uPtr< ::app::Fuse::Navigation::NavigationArgs*>(state)->Progress()) > ::app::Uno::Math__Abs_7(NULL, ::uPtr< ::app::Fuse::Navigation::NavigationArgs*>(state)->PreviousProgress())) ? 0 : 1;

    if ((state->Mode() != 1) && ::app::Fuse::Navigation::NavTriggerUtil__CrossesZero(NULL, state->Progress(), state->PreviousProgress()))
    {
        __this->Seek(0.0, ::app::Fuse::Navigation::NavTriggerUtil__Opposite(NULL, d));
    }

    __this->GoProgress(::app::Uno::Math__Abs_7(NULL, state->Progress()), d, state);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DefaultNavigationAnimator__uType* DefaultNavigationAnimator__typeof()
{
    static ::uStaticStrong<DefaultNavigationAnimator__uType*> type;
    if (type != NULL) return type;

    type = (DefaultNavigationAnimator__uType*)::uAllocClassType(sizeof(DefaultNavigationAnimator__uType), "Fuse.Navigation.DefaultNavigationAnimator", false, 1, 1, 0);

    type->__interface_0.__fp_Update = (void(*)(void*, double, double))DefaultNavigationAnimator__Update;

    type->SetInterfaces(
        ::app::Fuse::Navigation::INavigationAnimator__typeof(), offsetof(DefaultNavigationAnimator__uType, __interface_0));

    type->SetStrongRefs(
        "_node", offsetof(DefaultNavigationAnimator, _node));

    return type;
}

void DefaultNavigationAnimator___ObjInit(DefaultNavigationAnimator* __this, int index, ::app::Fuse::Node* node)
{
    __this->_index = index;
    __this->_node = node;
}

::app::Fuse::Node* DefaultNavigationAnimator__get_Node(DefaultNavigationAnimator* __this)
{
    return __this->_node;
}

DefaultNavigationAnimator* DefaultNavigationAnimator__New_1(::uStatic* __this, int index, ::app::Fuse::Node* node)
{
    DefaultNavigationAnimator* inst = (DefaultNavigationAnimator*)::uAllocObject(sizeof(DefaultNavigationAnimator), DefaultNavigationAnimator__typeof());
    inst->_ObjInit(index, node);
    return inst;
}

void DefaultNavigationAnimator__Update(DefaultNavigationAnimator* __this, double progress, double prevProgress)
{
    ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, __this->Node(), ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, progress - (double)__this->_index, prevProgress - (double)__this->_index, 2));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DefaultNavigationAnimatorPlayer__uType* DefaultNavigationAnimatorPlayer__typeof()
{
    static ::uStaticStrong<DefaultNavigationAnimatorPlayer__uType*> type;
    if (type != NULL) return type;

    type = (DefaultNavigationAnimatorPlayer__uType*)::uAllocClassType(sizeof(DefaultNavigationAnimatorPlayer__uType), "Fuse.Navigation.DefaultNavigationAnimatorPlayer", false, 1, 4, 0);

    type->__interface_0.__fp_Update = (void(*)(void*))DefaultNavigationAnimatorPlayer__Update;
    type->__interface_0.__fp_EnsureAtEnd = (void(*)(void*))DefaultNavigationAnimatorPlayer__EnsureAtEnd;

    type->SetInterfaces(
        ::app::Fuse::Navigation::INavigationAnimatorPlayer__typeof(), offsetof(DefaultNavigationAnimatorPlayer__uType, __interface_0));

    type->SetStrongRefs(
        "_animators", offsetof(DefaultNavigationAnimatorPlayer, _animators),
        "_doneCallback", offsetof(DefaultNavigationAnimatorPlayer, _doneCallback),
        "_progressSetCallback", offsetof(DefaultNavigationAnimatorPlayer, _progressSetCallback),
        "_progressTimer", offsetof(DefaultNavigationAnimatorPlayer, _progressTimer));

    return type;
}

void DefaultNavigationAnimatorPlayer___ObjInit(DefaultNavigationAnimatorPlayer* __this, ::app::Fuse::Navigation::ProgressTimer* progressTimer, ::uObject* animators, ::uDelegate* progressSetCallback, ::uDelegate* doneCallback)
{
    __this->_progressTimer = progressTimer;
    __this->_animators = animators;
    __this->_progressSetCallback = progressSetCallback;
    __this->_doneCallback = doneCallback;
}

void DefaultNavigationAnimatorPlayer__EnsureAtEnd(DefaultNavigationAnimatorPlayer* __this)
{
    double endProgress = (::uPtr< ::app::Fuse::Navigation::ProgressTimer*>(__this->_progressTimer)->Variant() == 0) ? ::uPtr< ::app::Fuse::Navigation::ProgressSpan*>(::uPtr< ::app::Fuse::Navigation::ProgressTimer*>(__this->_progressTimer)->ProgressSpan())->To() : ::uPtr< ::app::Fuse::Navigation::ProgressSpan*>(::uPtr< ::app::Fuse::Navigation::ProgressTimer*>(__this->_progressTimer)->ProgressSpan())->From();

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Navigation_INavigationAnimator::Count(::uPtr< ::uObject*>(__this->_animators)); i++)
    {
        ::app::Fuse::Navigation::INavigationAnimator::Update(::uPtr< ::uObject*>(::app::Uno::Collections::IList__Fuse_Navigation_INavigationAnimator::Item(::uPtr< ::uObject*>(__this->_animators), i)), endProgress, endProgress);
    }
}

DefaultNavigationAnimatorPlayer* DefaultNavigationAnimatorPlayer__New_1(::uStatic* __this, ::app::Fuse::Navigation::ProgressTimer* progressTimer, ::uObject* animators, ::uDelegate* progressSetCallback, ::uDelegate* doneCallback)
{
    DefaultNavigationAnimatorPlayer* inst = (DefaultNavigationAnimatorPlayer*)::uAllocObject(sizeof(DefaultNavigationAnimatorPlayer), DefaultNavigationAnimatorPlayer__typeof());
    inst->_ObjInit(progressTimer, animators, progressSetCallback, doneCallback);
    return inst;
}

void DefaultNavigationAnimatorPlayer__Update(DefaultNavigationAnimatorPlayer* __this)
{
    double prevProgress = ::uPtr< ::app::Fuse::Navigation::ProgressTimer*>(__this->_progressTimer)->EasedProgress();
    ::uPtr< ::app::Fuse::Navigation::ProgressTimer*>(__this->_progressTimer)->Update();
    double curProgress = ::uPtr< ::app::Fuse::Navigation::ProgressTimer*>(__this->_progressTimer)->EasedProgress();
    ::uPtr< ::uDelegate*>(__this->_progressSetCallback)->InvokeVoid< double>(curProgress);

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Navigation_INavigationAnimator::Count(::uPtr< ::uObject*>(__this->_animators)); i++)
    {
        ::app::Fuse::Navigation::INavigationAnimator::Update(::uPtr< ::uObject*>(::app::Uno::Collections::IList__Fuse_Navigation_INavigationAnimator::Item(::uPtr< ::uObject*>(__this->_animators), i)), curProgress, prevProgress);
    }

    if (::uPtr< ::app::Fuse::Navigation::ProgressTimer*>(__this->_progressTimer)->TimeLeft() == 0.0)
    {
        ::uPtr< ::uDelegate*>(__this->_doneCallback)->InvokeVoid();
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> DirectNavigation___indexProperty;

DirectNavigation__uType* DirectNavigation__typeof()
{
    static ::uStaticStrong<DirectNavigation__uType*> type;
    if (type != NULL) return type;

    type = (DirectNavigation__uType*)::uAllocClassType(sizeof(DirectNavigation__uType), "Fuse.Navigation.DirectNavigation", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Navigation::Navigation__typeof());
    type->__fp_get_PageProgress = (double(*)(::app::Fuse::Navigation::Navigation*))DirectNavigation__get_PageProgress;
    type->__fp_Goto = (void(*)(::app::Fuse::Navigation::Navigation*, ::app::Fuse::Node*, int))DirectNavigation__Goto;
    type->__fp_OnChildAdded = (void(*)(::app::Fuse::Navigation::Navigation*, ::uObject*, ::app::Fuse::Node*))DirectNavigation__OnChildAdded;
    type->__fp_OnChildRemoved = (void(*)(::app::Fuse::Navigation::Navigation*, ::uObject*, ::app::Fuse::Node*))DirectNavigation__OnChildRemoved;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))DirectNavigation__OnRooted;
    type->__interface_0.__fp_Goto = (void(*)(void*, ::app::Fuse::Node*, int))DirectNavigation__Goto;
    type->__interface_0.__fp_get_PageProgress = (double(*)(void*))DirectNavigation__get_PageProgress;

    type->SetInterfaces(
        ::app::Fuse::Navigation::INavigation__typeof(), offsetof(DirectNavigation__uType, __interface_0));

    type->SetStrongRefs(
        "_active", offsetof(DirectNavigation, _active));

    return type;
}

void DirectNavigation___ObjInit_2(DirectNavigation* __this)
{
    ::app::Fuse::Navigation::Navigation___ObjInit_1(__this);
}

void DirectNavigation___TypeInit_1(::uStatic* __this)
{
    DirectNavigation___indexProperty = ::app::Fuse::Properties__CreateHandle(NULL);
}

::app::Fuse::Node* DirectNavigation__get_Active(DirectNavigation* __this)
{
    return __this->_active;
}

double DirectNavigation__get_PageProgress(DirectNavigation* __this)
{
    return (double)DirectNavigation__GetPageIndex_1(NULL, __this->_active);
}

int DirectNavigation__GetPageIndex_1(::uStatic* __this, ::app::Fuse::Node* elm)
{
    ::uObject* val;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->TryGet(DirectNavigation___indexProperty, &val))
    {
        return ::uUnbox< int>(::app::Uno::Int__typeof(), val);
    }

    return 0;
}

void DirectNavigation__Goto(DirectNavigation* __this, ::app::Fuse::Node* node, int mode)
{
    __this->TransitionTo(node, mode == 2);
}

DirectNavigation* DirectNavigation__New_1(::uStatic* __this)
{
    DirectNavigation* inst = (DirectNavigation*)::uAllocObject(sizeof(DirectNavigation), DirectNavigation__typeof());
    inst->_ObjInit_2();
    return inst;
}

void DirectNavigation__OnChildAdded(DirectNavigation* __this, ::uObject* s, ::app::Fuse::Node* child)
{
    ::app::Fuse::Navigation::NavigationArgs* state = ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, -1.0, -1.0, 1);
    ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, child, state);
    DirectNavigation__SetIndex(NULL, child, -1);
    ::app::Fuse::Navigation::Navigation__OnChildAdded(__this, s, child);
}

void DirectNavigation__OnChildRemoved(DirectNavigation* __this, ::uObject* s, ::app::Fuse::Node* child)
{
    DirectNavigation__ResetIndex(NULL, child);
    ::app::Fuse::Navigation::NavigationArgs* state = ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, 0.0, 0.0, 1);
    ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, child, state);

    if (__this->_active == child)
    {
        __this->Goto(NULL, 0);
    }

    ::app::Fuse::Navigation::Navigation__OnChildRemoved(__this, s, child);
}

void DirectNavigation__OnRooted(DirectNavigation* __this, ::app::Fuse::Node* node)
{
    ::app::Fuse::Navigation::Navigation__OnRooted(__this, node);

    if (__this->Owner() != NULL)
    {
        __this->UpdateState(true);
    }
}

void DirectNavigation__ResetIndex(::uStatic* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->Clear(DirectNavigation___indexProperty);
}

void DirectNavigation__set_Active(DirectNavigation* __this, ::app::Fuse::Node* value)
{
    __this->TransitionTo(value, false);
}

void DirectNavigation__SetIndex(::uStatic* __this, ::app::Fuse::Node* elm, int index)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->Set(DirectNavigation___indexProperty, ::uBox< int>(::app::Uno::Int__typeof(), index));
}

void DirectNavigation__TransitionTo(DirectNavigation* __this, ::app::Fuse::Node* node, bool bypass)
{
    __this->_active = node;

    if (__this->Owner() == NULL)
    {
        return;
    }

    __this->UpdateState(bypass);
}

void DirectNavigation__UpdateState(DirectNavigation* __this, bool bypass)
{
    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Count(); i++)
    {
        ::app::Fuse::Node* c = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Item(i);
        int oldIndex = DirectNavigation__GetPageIndex_1(NULL, c);
        bool active = __this->_active == c;
        int newIndex = active ? 0 : -1;

        if (bypass)
        {
            ::app::Fuse::Navigation::NavigationArgs* jump = ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, (double)newIndex, (double)newIndex, 1);
            ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, c, jump);
            DirectNavigation__SetIndex(NULL, c, newIndex);
            continue;
        }

        if (oldIndex == newIndex)
        {
            continue;
        }

        ::app::Fuse::Navigation::NavigationArgs* state = ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, (double)newIndex, (double)oldIndex, 0);
        ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, c, state);
        DirectNavigation__SetIndex(NULL, c, newIndex);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> EdgeNavigation___edgeHandle;

EdgeNavigation__uType* EdgeNavigation__typeof()
{
    static ::uStaticStrong<EdgeNavigation__uType*> type;
    if (type != NULL) return type;

    type = (EdgeNavigation__uType*)::uAllocClassType(sizeof(EdgeNavigation__uType), "Fuse.Navigation.EdgeNavigation", false, 1, 4, 0);

    type->SetBaseType(::app::Fuse::Navigation::Navigation__typeof());
    type->__fp_get_CanGoBack = (bool(*)(::app::Fuse::Navigation::Navigation*))EdgeNavigation__get_CanGoBack;
    type->__fp_get_PageProgress = (double(*)(::app::Fuse::Navigation::Navigation*))EdgeNavigation__get_PageProgress;
    type->__fp_GoBack = (void(*)(::app::Fuse::Navigation::Navigation*))EdgeNavigation__GoBack;
    type->__fp_Goto = (void(*)(::app::Fuse::Navigation::Navigation*, ::app::Fuse::Node*, int))EdgeNavigation__Goto;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))EdgeNavigation__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))EdgeNavigation__OnUnrooted;
    type->__fp_Toggle = (void(*)(::app::Fuse::Navigation::Navigation*, ::app::Fuse::Node*))EdgeNavigation__Toggle;
    type->__interface_0.__fp_GoBack = (void(*)(void*))EdgeNavigation__GoBack;
    type->__interface_0.__fp_Goto = (void(*)(void*, ::app::Fuse::Node*, int))EdgeNavigation__Goto;
    type->__interface_0.__fp_Toggle = (void(*)(void*, ::app::Fuse::Node*))EdgeNavigation__Toggle;
    type->__interface_0.__fp_get_CanGoBack = (bool(*)(void*))EdgeNavigation__get_CanGoBack;
    type->__interface_0.__fp_get_PageProgress = (double(*)(void*))EdgeNavigation__get_PageProgress;

    type->SetInterfaces(
        ::app::Fuse::Navigation::INavigation__typeof(), offsetof(EdgeNavigation__uType, __interface_0));

    type->SetStrongRefs(
        "_active", offsetof(EdgeNavigation, _active),
        "_element", offsetof(EdgeNavigation, _element),
        "_mains", offsetof(EdgeNavigation, _mains),
        "_swipers", offsetof(EdgeNavigation, _swipers));

    return type;
}

void EdgeNavigation___TypeInit_1(::uStatic* __this)
{
    EdgeNavigation___edgeHandle = ::app::Fuse::Properties__CreateHandle(NULL);
}

void EdgeNavigation__CheckChildren(EdgeNavigation* __this)
{
    __this->ClearChildren();
    ::app::Fuse::Navigation::NavigationArgs* panelArgs = ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, 1.0, 1.0, 1);
    ::app::Fuse::Navigation::NavigationArgs* mainArgs = ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, 0.0, 0.0, 1);

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Count(); i++)
    {
        ::app::Fuse::Node* nodeChild = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Item(i);
        ::app::Fuse::Elements::Element* element = ::uAs< ::app::Fuse::Elements::Element*>(nodeChild, ::app::Fuse::Elements::Element__typeof());
        int edge = (element == NULL) ? 4 : EdgeNavigation__GetEdge(NULL, element);

        if (edge == 4)
        {
            ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_mains)->Add(nodeChild);
            ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, nodeChild, mainArgs);
        }
        else
        {
            ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, (::app::Fuse::Node*)element, panelArgs);
            ::app::Fuse::Gestures::Internal::EdgeSwiper* s = ::app::Fuse::Gestures::Internal::EdgeSwiper__New_1(NULL);
            ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(s)->Edge(edge);
            s->Target(element);
            s->add_ProgressChanged(::uNewDelegateNonVirt(::app::Uno::Action__object__double__typeof(), (const void*)EdgeNavigation__OnProgressChanged, __this));
            s->Rooted(__this->_element);
            ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_swipers)->Item(edge, s);
        }
    }
}

void EdgeNavigation__ClearChildren(EdgeNavigation* __this)
{
    for (::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper enum_124 = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_swipers)->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper s = enum_124.Current();
        ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(s.Value())->remove_ProgressChanged(::uNewDelegateNonVirt(::app::Uno::Action__object__double__typeof(), (const void*)EdgeNavigation__OnProgressChanged, __this));
        ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(s.Value())->Unrooted();
    }

    ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_swipers)->Clear();
    ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_mains)->Clear();
}

::app::Fuse::Node* EdgeNavigation__get_Active(EdgeNavigation* __this)
{
    return __this->_active;
}

bool EdgeNavigation__get_CanGoBack(EdgeNavigation* __this)
{
    return __this->IsAnyPanelActive();
}

double EdgeNavigation__get_PageProgress(EdgeNavigation* __this)
{
    return (double)__this->GetPageIndex(__this->_active);
}

int EdgeNavigation__GetEdge(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    ::uObject* res;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->TryGet(EdgeNavigation___edgeHandle, &res))
    {
        return ::uUnbox< int>(::app::Fuse::Navigation::NavigationEdge__typeof(), res);
    }

    return 4;
}

void EdgeNavigation__GoBack(EdgeNavigation* __this)
{
    for (::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper enum_129 = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_swipers)->GetEnumerator(); enum_129.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper sw = enum_129.Current();
        ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(sw.Value())->Disable();
    }
}

void EdgeNavigation__Goto(EdgeNavigation* __this, ::app::Fuse::Node* element, int mode)
{
    for (::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper enum_123 = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_swipers)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper sw = enum_123.Current();

        if (::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(sw.Value())->Target() == element)
        {
            ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(sw.Value())->Enable();
        }
        else
        {
            ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(sw.Value())->Disable();
        }
    }

    __this->_active = element;
}

bool EdgeNavigation__IsAnyPanelActive(EdgeNavigation* __this)
{
    for (::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper enum_128 = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_swipers)->GetEnumerator(); enum_128.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper sw = enum_128.Current();

        if (::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(sw.Value())->Progress() > 0.0)
        {
            return true;
        }
    }

    return false;
}

void EdgeNavigation__OnProgressChanged(EdgeNavigation* __this, ::uObject* s, double progress)
{
    ::app::Fuse::Gestures::Internal::EdgeSwiper* swiper = ::uAs< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(s, ::app::Fuse::Gestures::Internal::EdgeSwiper__typeof());
    ::app::Fuse::Elements::Element* panel = ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(swiper)->Target();

    if ((panel == NULL) || (swiper == NULL))
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Unexpected message"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno"), 285);
        return;
    }

    ::app::Fuse::Navigation::NavigationArgs* a = ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, 1.0 - progress, 1.0 - progress, 2);
    ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, (::app::Fuse::Node*)panel, a);
    ::app::Fuse::Node* maxPage = NULL;
    double maxProgress = 0.0;

    for (::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper enum_125 = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper*>(__this->_swipers)->GetEnumerator(); enum_125.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__Fuse_Navigation_NavigationEdge__Fuse_Gestures_Internal_EdgeSwiper sw = enum_125.Current();

        if (::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(sw.Value())->Progress() > maxProgress)
        {
            maxPage = (::app::Fuse::Node*)::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(sw.Value())->Target();
            maxProgress = ::uPtr< ::app::Fuse::Gestures::Internal::EdgeSwiper*>(sw.Value())->Progress();
        }
    }

    __this->_active = maxPage;
    ::app::Fuse::Navigation::NavigationArgs* b = ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, -maxProgress, -maxProgress, 2);

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Node enum_126 = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_mains)->GetEnumerator(); enum_126.MoveNext(); )
    {
        ::app::Fuse::Node* m = enum_126.Current();
        ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, m, b);
    }
}

void EdgeNavigation__OnRooted(EdgeNavigation* __this, ::app::Fuse::Node* node)
{
    ::app::Fuse::Navigation::Navigation__OnRooted(__this, node);
    __this->_element = ::uAs< ::app::Fuse::Elements::Element*>(node, ::app::Fuse::Elements::Element__typeof());

    if ((__this->_element == NULL) || (__this->Owner() == NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("EdgeNavigation must be rooted in an Element")));
    }

    __this->CheckChildren();
}

void EdgeNavigation__OnUnrooted(EdgeNavigation* __this, ::app::Fuse::Node* node)
{
    if (__this->Owner() != NULL)
    {
        __this->ClearChildren();
    }

    __this->_element = NULL;
    ::app::Fuse::Navigation::Navigation__OnUnrooted(__this, node);
}

void EdgeNavigation__set_Active(EdgeNavigation* __this, ::app::Fuse::Node* value)
{
    __this->Goto(value, 0);
}

void EdgeNavigation__Toggle(EdgeNavigation* __this, ::app::Fuse::Node* page)
{
    if (__this->Active() == page)
    {
        __this->Active(NULL);
    }
    else
    {
        __this->Active(page);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EndSeekArgs__uType* EndSeekArgs__typeof()
{
    static ::uStaticStrong<EndSeekArgs__uType*> type;
    if (type != NULL) return type;

    type = (EndSeekArgs__uType*)::uAllocClassType(sizeof(EndSeekArgs__uType), "Fuse.Navigation.EndSeekArgs", false, 0, 0, 0);

    return type;
}

void EndSeekArgs___ObjInit(EndSeekArgs* __this, int snapTo)
{
    __this->SnapTo(snapTo);
}

int EndSeekArgs__get_SnapTo(EndSeekArgs* __this)
{
    return __this->_SnapTo;
}

EndSeekArgs* EndSeekArgs__New_1(::uStatic* __this, int snapTo)
{
    EndSeekArgs* inst = (EndSeekArgs*)::uAllocObject(sizeof(EndSeekArgs), EndSeekArgs__typeof());
    inst->_ObjInit(snapTo);
    return inst;
}

void EndSeekArgs__set_SnapTo(EndSeekArgs* __this, int value)
{
    __this->_SnapTo = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnterExitAnimation__uType* EnterExitAnimation__typeof()
{
    static ::uStaticStrong<EnterExitAnimation__uType*> type;
    if (type != NULL) return type;

    type = (EnterExitAnimation__uType*)::uAllocClassType(sizeof(EnterExitAnimation__uType), "Fuse.Navigation.EnterExitAnimation", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Navigation::NavigationAnimation__typeof());
    type->__fp_ForceUpdate = (void(*)(::app::Fuse::Navigation::NavigationAnimation*))EnterExitAnimation__ForceUpdate;
    type->__fp_OnNavigationStateChanged = (void(*)(::app::Fuse::Navigation::NavigationAnimation*, ::uObject*, ::app::Fuse::Navigation::NavigationArgs*))EnterExitAnimation__OnNavigationStateChanged;

    return type;
}

void EnterExitAnimation___ObjInit_3(EnterExitAnimation* __this)
{
    ::app::Fuse::Navigation::NavigationAnimation___ObjInit_2(__this);
}

void EnterExitAnimation__ForceUpdate(EnterExitAnimation* __this)
{
    double p = ::app::Fuse::Navigation::Navigation__GetProgress(NULL, __this->PageContext());

    if (__this->IsMatch(p))
    {
        __this->BypassSeek(::app::Uno::Math__Abs_7(NULL, p), 0);
    }
}

bool EnterExitAnimation__IsMatch(EnterExitAnimation* __this, double progress)
{
    return (__this->PositiveProgress && (progress >= 0.0)) || (__this->NegativeProgress && (progress <= 0.0));
}

void EnterExitAnimation__OnNavigationStateChanged(EnterExitAnimation* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state)
{
    int d = (::app::Uno::Math__Abs_7(NULL, ::uPtr< ::app::Fuse::Navigation::NavigationArgs*>(state)->PreviousProgress()) < ::app::Uno::Math__Abs_7(NULL, ::uPtr< ::app::Fuse::Navigation::NavigationArgs*>(state)->Progress())) ? 0 : 1;

    if (!__this->IsMatch(state->Progress()))
    {
        __this->Seek(0.0, d);
        return;
    }

    __this->GoProgress((double)__this->Scale() * ::app::Uno::Math__Abs_7(NULL, state->Progress()), d, state);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnteringAnimation__uType* EnteringAnimation__typeof()
{
    static ::uStaticStrong<EnteringAnimation__uType*> type;
    if (type != NULL) return type;

    type = (EnteringAnimation__uType*)::uAllocClassType(sizeof(EnteringAnimation__uType), "Fuse.Navigation.EnteringAnimation", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Navigation::EnterExitAnimation__typeof());

    return type;
}

void EnteringAnimation___ObjInit_4(EnteringAnimation* __this)
{
    ::app::Fuse::Navigation::EnterExitAnimation___ObjInit_3(__this);
    __this->PositiveProgress = true;
}

EnteringAnimation* EnteringAnimation__New_1(::uStatic* __this)
{
    EnteringAnimation* inst = (EnteringAnimation*)::uAllocObject(sizeof(EnteringAnimation), EnteringAnimation__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ExitingAnimation__uType* ExitingAnimation__typeof()
{
    static ::uStaticStrong<ExitingAnimation__uType*> type;
    if (type != NULL) return type;

    type = (ExitingAnimation__uType*)::uAllocClassType(sizeof(ExitingAnimation__uType), "Fuse.Navigation.ExitingAnimation", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Navigation::EnterExitAnimation__typeof());

    return type;
}

void ExitingAnimation___ObjInit_4(ExitingAnimation* __this)
{
    ::app::Fuse::Navigation::EnterExitAnimation___ObjInit_3(__this);
    __this->NegativeProgress = true;
}

ExitingAnimation* ExitingAnimation__New_1(::uStatic* __this)
{
    ExitingAnimation* inst = (ExitingAnimation*)::uAllocObject(sizeof(ExitingAnimation), ExitingAnimation__typeof());
    inst->_ObjInit_4();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GoBack__uType* GoBack__typeof()
{
    static ::uStaticStrong<GoBack__uType*> type;
    if (type != NULL) return type;

    type = (GoBack__uType*)::uAllocClassType(sizeof(GoBack__uType), "Fuse.Navigation.GoBack", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Navigation::BackForwardNavigationTrigger__typeof());
    type->__fp_Perform_1 = (void(*)(::app::Fuse::Navigation::BackForwardNavigationTrigger*, ::uObject*, ::app::Fuse::Node*))GoBack__Perform_1;
    type->__fp_Perform_2 = (void(*)(::app::Fuse::Navigation::BackForwardNavigationTrigger*, ::uObject*, ::app::Fuse::Node*))GoBack__Perform_2;

    return type;
}

void GoBack__Perform_1(GoBack* __this, ::uObject* ctx, ::app::Fuse::Node* node)
{
    if (::app::Fuse::Navigation::INavigation::CanGoBack(::uPtr< ::uObject*>(ctx)))
    {
        ::app::Fuse::Navigation::INavigation::GoBack(::uPtr< ::uObject*>(ctx));
    }
}

void GoBack__Perform_2(GoBack* __this, ::uObject* webView, ::app::Fuse::Node* node)
{
    if (::app::Fuse::Navigation::IWebViewNavgation::CanGoBack(::uPtr< ::uObject*>(webView)))
    {
        ::app::Fuse::Navigation::IWebViewNavgation::GoBack(::uPtr< ::uObject*>(webView));
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GoForward__uType* GoForward__typeof()
{
    static ::uStaticStrong<GoForward__uType*> type;
    if (type != NULL) return type;

    type = (GoForward__uType*)::uAllocClassType(sizeof(GoForward__uType), "Fuse.Navigation.GoForward", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Navigation::BackForwardNavigationTrigger__typeof());
    type->__fp_Perform_1 = (void(*)(::app::Fuse::Navigation::BackForwardNavigationTrigger*, ::uObject*, ::app::Fuse::Node*))GoForward__Perform_1;
    type->__fp_Perform_2 = (void(*)(::app::Fuse::Navigation::BackForwardNavigationTrigger*, ::uObject*, ::app::Fuse::Node*))GoForward__Perform_2;

    return type;
}

void GoForward__Perform_1(GoForward* __this, ::uObject* ctx, ::app::Fuse::Node* node)
{
    if (::app::Fuse::Navigation::INavigation::CanGoForward(::uPtr< ::uObject*>(ctx)))
    {
        ::app::Fuse::Navigation::INavigation::GoForward(::uPtr< ::uObject*>(ctx));
    }
}

void GoForward__Perform_2(GoForward* __this, ::uObject* webView, ::app::Fuse::Node* node)
{
    if (::app::Fuse::Navigation::IWebViewNavgation::CanGoForward(::uPtr< ::uObject*>(webView)))
    {
        ::app::Fuse::Navigation::IWebViewNavgation::GoForward(::uPtr< ::uObject*>(webView));
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* HistoryChangedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Navigation.HistoryChangedHandler", 1);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* INavigation__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Navigation.INavigation");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* INavigationAnimator__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Navigation.INavigationAnimator");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* INavigationAnimatorPlayer__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Navigation.INavigationAnimatorPlayer");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* INavigationPanel__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Navigation.INavigationPanel");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IPageResourceBinding__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Navigation.IPageResourceBinding");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IWebViewNavgation__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Navigation.IWebViewNavgation");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LoadUrl__uType* LoadUrl__typeof()
{
    static ::uStaticStrong<LoadUrl__uType*> type;
    if (type != NULL) return type;

    type = (LoadUrl__uType*)::uAllocClassType(sizeof(LoadUrl__uType), "Fuse.Navigation.LoadUrl", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Navigation::WebViewNavigationTrigger__typeof());
    type->__fp_Perform_1 = (void(*)(::app::Fuse::Navigation::WebViewNavigationTrigger*, ::uObject*, ::app::Fuse::Node*))LoadUrl__Perform_1;

    type->SetStrongRefs(
        "_Url", offsetof(LoadUrl, _Url));

    return type;
}

::uString* LoadUrl__get_Url(LoadUrl* __this)
{
    return __this->_Url;
}

void LoadUrl__Perform_1(LoadUrl* __this, ::uObject* webView, ::app::Fuse::Node* n)
{
    ::app::Fuse::Navigation::IWebViewNavgation::LoadUrl(::uPtr< ::uObject*>(webView), __this->Url());
}

void LoadUrl__set_Url(LoadUrl* __this, ::uString* value)
{
    __this->_Url = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NavigatedArgs__uType* NavigatedArgs__typeof()
{
    static ::uStaticStrong<NavigatedArgs__uType*> type;
    if (type != NULL) return type;

    type = (NavigatedArgs__uType*)::uAllocClassType(sizeof(NavigatedArgs__uType), "Fuse.Navigation.NavigatedArgs", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());
    type->__interface_0.__fp_Serialize = (void(*)(void*, ::uObject*))NavigatedArgs__Fuse_Scripting_IScriptEvent_Serialize;

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(NavigatedArgs__uType, __interface_0));

    type->SetStrongRefs(
        "_NewNode", offsetof(NavigatedArgs, _NewNode));

    return type;
}

void NavigatedArgs___ObjInit_1(NavigatedArgs* __this, ::app::Fuse::Node* newNode)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->NewNode(newNode);
}

void NavigatedArgs__Fuse_Scripting_IScriptEvent_Serialize(NavigatedArgs* __this, ::uObject* s)
{
    if (::app::Uno::String__op_Inequality(NULL, ::uPtr< ::app::Fuse::Node*>(__this->NewNode())->Name(), NULL))
    {
        ::app::Fuse::Scripting::IEventSerializer::AddString(::uPtr< ::uObject*>(s), ::uGetConstString("name"), ::uPtr< ::app::Fuse::Node*>(__this->NewNode())->Name());
    }
    else
    {
        ::app::Fuse::Scripting::IEventSerializer::AddString(s, ::uGetConstString("name"), ::uGetConstString(""));
    }
}

::app::Fuse::Node* NavigatedArgs__get_NewNode(NavigatedArgs* __this)
{
    return __this->_NewNode;
}

NavigatedArgs* NavigatedArgs__New_2(::uStatic* __this, ::app::Fuse::Node* newNode)
{
    NavigatedArgs* inst = (NavigatedArgs*)::uAllocObject(sizeof(NavigatedArgs), NavigatedArgs__typeof());
    inst->_ObjInit_1(newNode);
    return inst;
}

void NavigatedArgs__set_NewNode(NavigatedArgs* __this, ::app::Fuse::Node* value)
{
    __this->_NewNode = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* NavigatedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Navigation.NavigatedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Navigation::NavigatedArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NavigateTo__uType* NavigateTo__typeof()
{
    static ::uStaticStrong<NavigateTo__uType*> type;
    if (type != NULL) return type;

    type = (NavigateTo__uType*)::uAllocClassType(sizeof(NavigateTo__uType), "Fuse.Navigation.NavigateTo", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Navigation::NavigationTriggerAction__typeof());
    type->__fp_Perform_1 = (void(*)(::app::Fuse::Navigation::NavigationTriggerAction*, ::uObject*, ::app::Fuse::Node*))NavigateTo__Perform_1;

    type->SetStrongRefs(
        "_Target", offsetof(NavigateTo, _Target));

    return type;
}

void NavigateTo___ObjInit_2(NavigateTo* __this)
{
    ::app::Fuse::Navigation::NavigationTriggerAction___ObjInit_1(__this);
}

bool NavigateTo__get_Bypass(NavigateTo* __this)
{
    return __this->_Bypass;
}

bool NavigateTo__get_ClearForwardHistory(NavigateTo* __this)
{
    return __this->_ClearForwardHistory;
}

::app::Fuse::Node* NavigateTo__get_Target(NavigateTo* __this)
{
    return __this->_Target;
}

NavigateTo* NavigateTo__New_1(::uStatic* __this)
{
    NavigateTo* inst = (NavigateTo*)::uAllocObject(sizeof(NavigateTo), NavigateTo__typeof());
    inst->_ObjInit_2();
    return inst;
}

void NavigateTo__Perform_1(NavigateTo* __this, ::uObject* ctx, ::app::Fuse::Node* n)
{
    int mode = __this->Bypass() ? 2 : 0;

    if (__this->ClearForwardHistory())
    {
        mode = mode | 4;
    }

    if (__this->Target() != NULL)
    {
        ::app::Fuse::Navigation::INavigation::Goto(::uPtr< ::uObject*>(ctx), __this->Target(), mode);
    }
}

void NavigateTo__set_Bypass(NavigateTo* __this, bool value)
{
    __this->_Bypass = value;
}

void NavigateTo__set_ClearForwardHistory(NavigateTo* __this, bool value)
{
    __this->_ClearForwardHistory = value;
}

void NavigateTo__set_Target(NavigateTo* __this, ::app::Fuse::Node* value)
{
    __this->_Target = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NavigateToggle__uType* NavigateToggle__typeof()
{
    static ::uStaticStrong<NavigateToggle__uType*> type;
    if (type != NULL) return type;

    type = (NavigateToggle__uType*)::uAllocClassType(sizeof(NavigateToggle__uType), "Fuse.Navigation.NavigateToggle", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Navigation::NavigationTriggerAction__typeof());
    type->__fp_Perform_1 = (void(*)(::app::Fuse::Navigation::NavigationTriggerAction*, ::uObject*, ::app::Fuse::Node*))NavigateToggle__Perform_1;

    type->SetStrongRefs(
        "_Target", offsetof(NavigateToggle, _Target));

    return type;
}

::app::Fuse::Node* NavigateToggle__get_Target(NavigateToggle* __this)
{
    return __this->_Target;
}

void NavigateToggle__Perform_1(NavigateToggle* __this, ::uObject* ctx, ::app::Fuse::Node* n)
{
    ::app::Fuse::Node* ind_123;
    ::app::Fuse::Node* page = ::app::Fuse::Navigation::Navigation__TryFindPage(NULL, (ind_123 = __this->Target(), (ind_123 != NULL) ? ind_123 : n));

    if (page != NULL)
    {
        ::app::Fuse::Navigation::INavigation::Toggle(::uPtr< ::uObject*>(ctx), page);
    }
}

void NavigateToggle__set_Target(NavigateToggle* __this, ::app::Fuse::Node* value)
{
    __this->_Target = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> Navigation___contextHandle;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Navigation___navigationHandler;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Navigation___navigationProgress;
::uStaticStrong< ::app::Fuse::PropertyHandle*> Navigation___navigationStateHandler;

Navigation__uType* Navigation__typeof()
{
    static ::uStaticStrong<Navigation__uType*> type;
    if (type != NULL) return type;

    type = (Navigation__uType*)::uAllocClassType(sizeof(Navigation__uType), "Fuse.Navigation.Navigation", false, 1, 6, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_get_CanGoBack = Navigation__get_CanGoBack;
    type->__fp_get_CanGoForward = Navigation__get_CanGoForward;
    type->__fp_GoBack = Navigation__GoBack;
    type->__fp_GoForward = Navigation__GoForward;
    type->__fp_OnChildAdded = Navigation__OnChildAdded;
    type->__fp_OnChildRemoved = Navigation__OnChildRemoved;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Navigation__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Navigation__OnUnrooted;
    type->__fp_Toggle = Navigation__Toggle;
    type->__interface_0.__fp_GetPage = (::app::Fuse::Node*(*)(void*, int))Navigation__GetPage;
    type->__interface_0.__fp_GoForward = (void(*)(void*))Navigation__GoForward;
    type->__interface_0.__fp_GoBack = (void(*)(void*))Navigation__GoBack;
    type->__interface_0.__fp_Toggle = (void(*)(void*, ::app::Fuse::Node*))Navigation__Toggle;
    type->__interface_0.__fp_get_PageCount = (int(*)(void*))Navigation__get_PageCount;
    type->__interface_0.__fp_get_CanGoBack = (bool(*)(void*))Navigation__get_CanGoBack;
    type->__interface_0.__fp_get_CanGoForward = (bool(*)(void*))Navigation__get_CanGoForward;
    type->__interface_0.__fp_add_PageCountChanged = (void(*)(void*, ::uDelegate*))Navigation__add_PageCountChanged;
    type->__interface_0.__fp_remove_PageCountChanged = (void(*)(void*, ::uDelegate*))Navigation__remove_PageCountChanged;
    type->__interface_0.__fp_add_PageProgressChanged = (void(*)(void*, ::uDelegate*))Navigation__add_PageProgressChanged;
    type->__interface_0.__fp_remove_PageProgressChanged = (void(*)(void*, ::uDelegate*))Navigation__remove_PageProgressChanged;

    type->SetInterfaces(
        ::app::Fuse::Navigation::INavigation__typeof(), offsetof(Navigation__uType, __interface_0));

    type->SetStrongRefs(
        "_panel", offsetof(Navigation, _panel),
        "HistoryChanged", offsetof(Navigation, HistoryChanged),
        "Navigated", offsetof(Navigation, Navigated),
        "PageCountChanged", offsetof(Navigation, PageCountChanged),
        "PageProgressChanged", offsetof(Navigation, PageProgressChanged),
        "Pages", offsetof(Navigation, Pages));

    return type;
}

void Navigation___ObjInit_1(Navigation* __this)
{
    __this->Pages = ::app::Uno::Collections::List__Fuse_Node__New_1(NULL);
    ::app::Fuse::Behavior___ObjInit(__this);
}

void Navigation___TypeInit(::uStatic* __this)
{
    Navigation___navigationHandler = ::app::Fuse::Properties__CreateHandle(NULL);
    Navigation___navigationStateHandler = ::app::Fuse::Properties__CreateHandle(NULL);
    Navigation___navigationProgress = ::app::Fuse::Properties__CreateHandle(NULL);
    Navigation___contextHandle = ::app::Fuse::Properties__CreateHandle(NULL);
}

void Navigation__add_PageCountChanged(Navigation* __this, ::uDelegate* value)
{
    __this->PageCountChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PageCountChanged, (::uDelegate*)value), ::app::Fuse::Navigation::NavigationPageCountHandler__typeof());
}

void Navigation__add_PageProgressChanged(Navigation* __this, ::uDelegate* value)
{
    __this->PageProgressChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PageProgressChanged, (::uDelegate*)value), ::app::Fuse::Navigation::NavigationPageProgressHandler__typeof());
}

void Navigation__AddHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->AddToList(Navigation___navigationHandler, (::uObject*)handler);
}

bool Navigation__get_CanGoBack(Navigation* __this)
{
    return false;
}

bool Navigation__get_CanGoForward(Navigation* __this)
{
    return false;
}

bool Navigation__get_HasPages(Navigation* __this)
{
    return ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Count() > 0;
}

::uObject* Navigation__get_Owner(Navigation* __this)
{
    return __this->_panel;
}

int Navigation__get_PageCount(Navigation* __this)
{
    return ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Count();
}

::uObject* Navigation__GetLocalNavigation(::uStatic* __this, ::app::Fuse::Node* node)
{
    ::uObject* n = Navigation__GetNavigationNavigation(NULL, node);

    if (n != NULL)
    {
        return n;
    }

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Behavior::Count(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(node)->Behaviors())); i++)
    {
        if (::uIs(::app::Uno::Collections::IList__Fuse_Behavior::Item(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(node)->Behaviors()), i), ::app::Fuse::Navigation::INavigation__typeof()))
        {
            return (::uObject*)::app::Uno::Collections::IList__Fuse_Behavior::Item(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(node)->Behaviors()), i);
        }
    }

    return NULL;
}

::uObject* Navigation__GetNavigationNavigation(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(Navigation___contextHandle, &v))
    {
        return (::uObject*)v;
    }

    return NULL;
}

::app::Fuse::Node* Navigation__GetPage(Navigation* __this, int index)
{
    if ((index < 0) || (index >= ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Count()))
    {
        return NULL;
    }

    return ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Item(index);
}

int Navigation__GetPageIndex(Navigation* __this, ::app::Fuse::Node* child)
{
    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Count(); ++i)
    {
        if (::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Item(i) == child)
        {
            return i;
        }
    }

    return -1;
}

void Navigation__GetPagesFromOwner(Navigation* __this)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Clear();

    for (int i = 0; i < ::app::Fuse::Navigation::INavigationPanel::ChildCount(::uPtr< ::uObject*>(__this->Owner())); i++)
    {
        ::app::Fuse::Node* n = ::app::Fuse::Navigation::INavigationPanel::GetChild(::uPtr< ::uObject*>(__this->Owner()), i);

        if (::app::Fuse::Navigation::INavigationPanel::IsPage(::uPtr< ::uObject*>(__this->Owner()), n))
        {
            ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Add(n);
        }
    }
}

double Navigation__GetProgress(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uObject* res;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(Navigation___navigationProgress, &res))
    {
        return ::uUnbox< double>(::app::Uno::Double__typeof(), res);
    }
    else
    {
        return 0.0;
    }
}

void Navigation__GoBack(Navigation* __this)
{
}

void Navigation__GoForward(Navigation* __this)
{
}

void Navigation__Invoke(::uStatic* __this, ::uObject* handler, ::uArray* state)
{
    ::uDelegate* h = ::uCast< ::uDelegate*>(handler, ::app::Fuse::Navigation::NavigationHandler__typeof());
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(state)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Navigation::NavigationArgs* s = ::uCast< ::app::Fuse::Navigation::NavigationArgs*>(state->Item< ::uObject*>(1), ::app::Fuse::Navigation::NavigationArgs__typeof());
    ::uPtr< ::uDelegate*>(h)->InvokeVoid< ::uObject*, ::app::Fuse::Navigation::NavigationArgs*>((::uObject*)n, s);
}

void Navigation__InvokeState(::uStatic* __this, ::uObject* handler, ::uArray* state)
{
    ::uDelegate* h = ::uCast< ::uDelegate*>(handler, ::app::Fuse::Navigation::NavigationStateHandler__typeof());
    ::app::Fuse::Node* n = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(state)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Navigation::NavigationStateArgs* s = ::uCast< ::app::Fuse::Navigation::NavigationStateArgs*>(state->Item< ::uObject*>(1), ::app::Fuse::Navigation::NavigationStateArgs__typeof());
    ::uPtr< ::uDelegate*>(h)->InvokeVoid< ::uObject*, ::app::Fuse::Navigation::NavigationStateArgs*>((::uObject*)n, s);
}

void Navigation__NotifyNavigation(::uStatic* __this, ::app::Fuse::Node* n, ::app::Fuse::Navigation::NavigationArgs* state)
{
    ::uArray* array_123;

    if (n == NULL)
    {
        return;
    }

    Navigation__SetProgress(NULL, n, ::uPtr< ::app::Fuse::Navigation::NavigationArgs*>(state)->Progress());
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->ForeachInList_1(Navigation___navigationHandler, ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)Navigation__Invoke), (array_123 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)n, ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(1) = (::uObject*)state, array_123));
}

void Navigation__NotifyNavigationState(::uStatic* __this, ::app::Fuse::Node* n, ::app::Fuse::Navigation::NavigationStateArgs* state)
{
    ::uArray* array_124;
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->ForeachInList_1(Navigation___navigationStateHandler, ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)Navigation__InvokeState), (array_124 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(0) = (::uObject*)n, ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(1) = (::uObject*)state, array_124));
}

void Navigation__OnChildAdded(Navigation* __this, ::uObject* s, ::app::Fuse::Node* child)
{
}

void Navigation__OnChildRemoved(Navigation* __this, ::uObject* s, ::app::Fuse::Node* child)
{
}

void Navigation__OnHistoryChanged(Navigation* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->HistoryChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->HistoryChanged)->InvokeVoid< ::uObject*>((::uObject*)__this);
    }
}

void Navigation__OnNavChildAdded(Navigation* __this, ::uObject* s, ::app::Fuse::Node* child)
{
    if (::app::Fuse::Navigation::INavigationPanel::IsPage(::uPtr< ::uObject*>(__this->Owner()), child))
    {
        __this->GetPagesFromOwner();
        __this->OnPageCountChanged();
        __this->OnChildAdded(s, child);
    }
}

void Navigation__OnNavChildRemoved(Navigation* __this, ::uObject* s, ::app::Fuse::Node* child)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Contains(child))
    {
        ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Remove(child);
        __this->OnPageCountChanged();
        __this->OnChildRemoved(s, child);
    }
}

void Navigation__OnNavigated(Navigation* __this, ::app::Fuse::Node* newElement)
{
    ::uDelegate* handler = __this->Navigated;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Navigation::NavigatedArgs*>((::uObject*)__this, ::app::Fuse::Navigation::NavigatedArgs__New_2(NULL, newElement));
    }
}

void Navigation__OnPageCountChanged(Navigation* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PageCountChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PageCountChanged)->InvokeVoid< ::uObject*>((::uObject*)__this);
    }
}

void Navigation__OnPageProgressChanged(Navigation* __this, double current, double prev)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PageProgressChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PageProgressChanged)->InvokeVoid< ::uObject*, double, double>((::uObject*)__this, current, prev);
    }
}

void Navigation__OnRooted(Navigation* __this, ::app::Fuse::Node* node)
{
    __this->_panel = ::uAs< ::uObject*>(node, ::app::Fuse::Navigation::INavigationPanel__typeof());

    if (__this->_panel != NULL)
    {
        ::app::Fuse::Navigation::INavigationPanel::add_ChildAdded(::uPtr< ::uObject*>(__this->_panel), ::uNewDelegateNonVirt(::app::Uno::EventHandler__Fuse_Node__typeof(), (const void*)Navigation__OnNavChildAdded, __this));
        ::app::Fuse::Navigation::INavigationPanel::add_ChildRemoved(::uPtr< ::uObject*>(__this->_panel), ::uNewDelegateNonVirt(::app::Uno::EventHandler__Fuse_Node__typeof(), (const void*)Navigation__OnNavChildRemoved, __this));
        __this->GetPagesFromOwner();
    }

    __this->OnPageCountChanged();
}

void Navigation__OnUnrooted(Navigation* __this, ::app::Fuse::Node* node)
{
    if (__this->_panel != NULL)
    {
        ::app::Fuse::Navigation::INavigationPanel::remove_ChildAdded(::uPtr< ::uObject*>(__this->_panel), ::uNewDelegateNonVirt(::app::Uno::EventHandler__Fuse_Node__typeof(), (const void*)Navigation__OnNavChildAdded, __this));
        ::app::Fuse::Navigation::INavigationPanel::remove_ChildRemoved(::uPtr< ::uObject*>(__this->_panel), ::uNewDelegateNonVirt(::app::Uno::EventHandler__Fuse_Node__typeof(), (const void*)Navigation__OnNavChildRemoved, __this));
        __this->_panel = NULL;
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Clear();
}

void Navigation__remove_PageCountChanged(Navigation* __this, ::uDelegate* value)
{
    __this->PageCountChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->PageCountChanged, (::uDelegate*)value), ::app::Fuse::Navigation::NavigationPageCountHandler__typeof());
}

void Navigation__remove_PageProgressChanged(Navigation* __this, ::uDelegate* value)
{
    __this->PageProgressChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->PageProgressChanged, (::uDelegate*)value), ::app::Fuse::Navigation::NavigationPageProgressHandler__typeof());
}

void Navigation__RemoveHandler(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->RemoveFromList(Navigation___navigationHandler, (::uObject*)handler);
}

void Navigation__SetProgress(::uStatic* __this, ::app::Fuse::Node* n, double progress)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(Navigation___navigationProgress, ::uBox(::app::Uno::Double__typeof(), progress));
}

void Navigation__Toggle(Navigation* __this, ::app::Fuse::Node* page)
{
}

::uObject* Navigation__TryFind(::uStatic* __this, ::app::Fuse::Node* node)
{
    while (node != NULL)
    {
        ::uObject* n = Navigation__GetLocalNavigation(NULL, node);

        if (n != NULL)
        {
            return n;
        }

        node = ::uPtr< ::app::Fuse::Node*>(node)->Parent();
    }

    return NULL;
}

::app::Fuse::Node* Navigation__TryFindPage(::uStatic* __this, ::app::Fuse::Node* node)
{
    ::app::Fuse::Node* prev = node;

    while (node != NULL)
    {
        ::uObject* n = Navigation__GetLocalNavigation(NULL, node);

        if (n != NULL)
        {
            return prev;
        }

        prev = node;
        node = ::uPtr< ::app::Fuse::Node*>(node)->Parent();
    }

    return NULL;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NavigationAnimation__uType* NavigationAnimation__typeof()
{
    static ::uStaticStrong<NavigationAnimation__uType*> type;
    if (type != NULL) return type;

    type = (NavigationAnimation__uType*)::uAllocClassType(sizeof(NavigationAnimation__uType), "Fuse.Navigation.NavigationAnimation", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))NavigationAnimation__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))NavigationAnimation__OnUnrooted;

    return type;
}

void NavigationAnimation___ObjInit_2(NavigationAnimation* __this)
{
    __this->_scale = 1.0f;
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

::app::Fuse::Node* NavigationAnimation__get_PageContext(NavigationAnimation* __this)
{
    ::app::Fuse::Node* n = ::app::Fuse::Navigation::Navigation__TryFindPage(NULL, __this->Node());

    if (n == NULL)
    {
        return __this->Node();
    }

    return n;
}

float NavigationAnimation__get_Scale(NavigationAnimation* __this)
{
    return __this->_scale;
}

void NavigationAnimation__GoProgress(NavigationAnimation* __this, double p, int variant, ::app::Fuse::Navigation::NavigationArgs* state)
{
    if (p == __this->Progress())
    {
        return;
    }

    if (::uPtr< ::app::Fuse::Navigation::NavigationArgs*>(state)->Mode() == 0)
    {
        __this->PlayTo(p, variant);
    }
    else if (::uPtr< ::app::Fuse::Navigation::NavigationArgs*>(state)->Mode() == 2)
    {
        __this->Seek(p, variant);
    }
    else
    {
        __this->BypassSeek(p, variant);
    }
}

void NavigationAnimation__OnRooted(NavigationAnimation* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    ::app::Fuse::Navigation::Navigation__AddHandler(NULL, __this->PageContext(), ::uNewDelegateVirt(::app::Fuse::Navigation::NavigationHandler__typeof(), __this, offsetof(NavigationAnimation__uType, __fp_OnNavigationStateChanged)));
    __this->ForceUpdate();
}

void NavigationAnimation__OnUnrooted(NavigationAnimation* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Navigation::Navigation__RemoveHandler(NULL, __this->PageContext(), ::uNewDelegateVirt(::app::Fuse::Navigation::NavigationHandler__typeof(), __this, offsetof(NavigationAnimation__uType, __fp_OnNavigationStateChanged)));
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

void NavigationAnimation__set_Scale(NavigationAnimation* __this, float value)
{
    __this->_scale = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NavigationArgs__uType* NavigationArgs__typeof()
{
    static ::uStaticStrong<NavigationArgs__uType*> type;
    if (type != NULL) return type;

    type = (NavigationArgs__uType*)::uAllocClassType(sizeof(NavigationArgs__uType), "Fuse.Navigation.NavigationArgs", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    return type;
}

void NavigationArgs___ObjInit_1(NavigationArgs* __this, double progress, double prevProgress, int mode)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Progress(progress);
    __this->PreviousProgress(prevProgress);
    __this->Mode(mode);
}

int NavigationArgs__get_Mode(NavigationArgs* __this)
{
    return __this->_Mode;
}

double NavigationArgs__get_PreviousProgress(NavigationArgs* __this)
{
    return __this->_PreviousProgress;
}

double NavigationArgs__get_Progress(NavigationArgs* __this)
{
    return __this->_Progress;
}

NavigationArgs* NavigationArgs__New_2(::uStatic* __this, double progress, double prevProgress, int mode)
{
    NavigationArgs* inst = (NavigationArgs*)::uAllocObject(sizeof(NavigationArgs), NavigationArgs__typeof());
    inst->_ObjInit_1(progress, prevProgress, mode);
    return inst;
}

void NavigationArgs__set_Mode(NavigationArgs* __this, int value)
{
    __this->_Mode = value;
}

void NavigationArgs__set_PreviousProgress(NavigationArgs* __this, double value)
{
    __this->_PreviousProgress = value;
}

void NavigationArgs__set_Progress(NavigationArgs* __this, double value)
{
    __this->_Progress = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* NavigationEdge__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Navigation.NavigationEdge", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL,
        "None", 4LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* NavigationGotoMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Navigation.NavigationGotoMode", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Transition", 0LL,
        "Bypass", 2LL,
        "ClearForwardHistory", 4LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* NavigationHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Navigation.NavigationHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Navigation::NavigationArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* NavigationMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Navigation.NavigationMode", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Switch", 0LL,
        "Bypass", 1LL,
        "Seek", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* NavigationPageCountHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Navigation.NavigationPageCountHandler", 1);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* NavigationPageProgressHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Navigation.NavigationPageProgressHandler", 3);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Uno::Double__typeof(),
        ::app::Uno::Double__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> NavigationPageProperty___pageProperty;
::uStaticStrong< ::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding*> NavigationPageProperty__RootedBindings;

NavigationPageProperty__uType* NavigationPageProperty__typeof()
{
    static ::uStaticStrong<NavigationPageProperty__uType*> type;
    if (type != NULL) return type;

    type = (NavigationPageProperty__uType*)::uAllocClassType(sizeof(NavigationPageProperty__uType), "Fuse.Navigation.NavigationPageProperty");

    return type;
}

void NavigationPageProperty___TypeInit(::uStatic* __this)
{
    NavigationPageProperty___pageProperty = ::app::Fuse::Properties__CreateHandle(NULL);
    NavigationPageProperty__RootedBindings = ::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding__New_1(NULL);
}

void NavigationPageProperty__SetNavigationPage(::uStatic* __this, ::app::Fuse::Node* n, ::app::Fuse::Node* page)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(NavigationPageProperty___pageProperty, (::uObject*)page);

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Navigation_IPageResourceBinding enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Navigation_IPageResourceBinding*>(NavigationPageProperty__RootedBindings)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::uObject* binding = enum_123.Current();
        ::app::Fuse::Navigation::IPageResourceBinding::UpdateSource(::uPtr< ::uObject*>(binding));
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* NavigationState__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Navigation.NavigationState", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "None", 0LL,
        "Seek", 1LL,
        "Transition", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NavigationStateArgs__uType* NavigationStateArgs__typeof()
{
    static ::uStaticStrong<NavigationStateArgs__uType*> type;
    if (type != NULL) return type;

    type = (NavigationStateArgs__uType*)::uAllocClassType(sizeof(NavigationStateArgs__uType), "Fuse.Navigation.NavigationStateArgs", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    return type;
}

void NavigationStateArgs___ObjInit_1(NavigationStateArgs* __this)
{
    ::app::Uno::EventArgs___ObjInit(__this);
}

int NavigationStateArgs__get_State(NavigationStateArgs* __this)
{
    return __this->_State;
}

NavigationStateArgs* NavigationStateArgs__New_2(::uStatic* __this)
{
    NavigationStateArgs* inst = (NavigationStateArgs*)::uAllocObject(sizeof(NavigationStateArgs), NavigationStateArgs__typeof());
    inst->_ObjInit_1();
    return inst;
}

void NavigationStateArgs__set_State(NavigationStateArgs* __this, int value)
{
    __this->_State = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* NavigationStateHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Navigation.NavigationStateHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Navigation::NavigationStateArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NavigationTriggerAction__uType* NavigationTriggerAction__typeof()
{
    static ::uStaticStrong<NavigationTriggerAction__uType*> type;
    if (type != NULL) return type;

    type = (NavigationTriggerAction__uType*)::uAllocClassType(sizeof(NavigationTriggerAction__uType), "Fuse.Navigation.NavigationTriggerAction", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))NavigationTriggerAction__Perform;

    type->SetStrongRefs(
        "_context", offsetof(NavigationTriggerAction, _context));

    return type;
}

void NavigationTriggerAction___ObjInit_1(NavigationTriggerAction* __this)
{
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);
}

::uObject* NavigationTriggerAction__get_Context(NavigationTriggerAction* __this)
{
    return __this->_context;
}

void NavigationTriggerAction__Perform(NavigationTriggerAction* __this, ::app::Fuse::Node* n)
{
    ::uObject* ind_123 = __this->Context();
    ::uObject* ctx = (ind_123 != NULL) ? ind_123 : ::app::Fuse::Navigation::Navigation__TryFind(NULL, n);

    if (ctx == NULL)
    {
        return;
    }

    __this->Perform_1(ctx, n);
}

void NavigationTriggerAction__set_Context(NavigationTriggerAction* __this, ::uObject* value)
{
    __this->_context = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NavigationTween__uType* NavigationTween__typeof()
{
    static ::uStaticStrong<NavigationTween__uType*> type;
    if (type != NULL) return type;

    type = (NavigationTween__uType*)::uAllocClassType(sizeof(NavigationTween__uType), "Fuse.Navigation.NavigationTween", false, 0, 0, 0);

    return type;
}

double NavigationTween__get_Duration(NavigationTween* __this)
{
    return __this->_duration;
}

double NavigationTween__get_DurationBack(NavigationTween* __this)
{
    if (__this->_hasDurationBack)
    {
        return __this->_durationBack;
    }

    return __this->Duration();
}

int NavigationTween__get_Easing(NavigationTween* __this)
{
    return __this->_easing;
}

int NavigationTween__get_EasingBack(NavigationTween* __this)
{
    if (__this->_hasEasingBack)
    {
        return __this->_easingBack;
    }

    return __this->Easing();
}

void NavigationTween__set_Duration(NavigationTween* __this, double value)
{
    __this->_duration = value;
}

void NavigationTween__set_DurationBack(NavigationTween* __this, double value)
{
    __this->_durationBack = value;
    __this->_hasDurationBack = true;
}

void NavigationTween__set_Easing(NavigationTween* __this, int value)
{
    __this->_easing = value;
}

void NavigationTween__set_EasingBack(NavigationTween* __this, int value)
{
    __this->_easingBack = value;
    __this->_hasEasingBack = true;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NavTriggerUtil__uType* NavTriggerUtil__typeof()
{
    static ::uStaticStrong<NavTriggerUtil__uType*> type;
    if (type != NULL) return type;

    type = (NavTriggerUtil__uType*)::uAllocClassType(sizeof(NavTriggerUtil__uType), "Fuse.Navigation.NavTriggerUtil");

    return type;
}

bool NavTriggerUtil__CrossesZero(::uStatic* __this, double a, double b)
{
    return ((a < 0.0) && (b > 0.0)) || ((a > 0.0) && (b < 0.0));
}

int NavTriggerUtil__Opposite(::uStatic* __this, int v)
{
    return (v == 0) ? 1 : 0;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PlayerFactory__uType* PlayerFactory__typeof()
{
    static ::uStaticStrong<PlayerFactory__uType*> type;
    if (type != NULL) return type;

    type = (PlayerFactory__uType*)::uAllocClassType(sizeof(PlayerFactory__uType), "Fuse.Navigation.PlayerFactory");

    return type;
}

::uObject* PlayerFactory__Start(::uStatic* __this, double targetProgress, double startProgress, ::uObject* animators, ::uDelegate* doneCallback, ::uDelegate* progressSetterCallback, ::app::Fuse::Navigation::NavigationTween* navigationTween)
{
    double duration = (targetProgress > startProgress) ? ::uPtr< ::app::Fuse::Navigation::NavigationTween*>(navigationTween)->Duration() : ::uPtr< ::app::Fuse::Navigation::NavigationTween*>(navigationTween)->DurationBack();
    int easing = (targetProgress > startProgress) ? navigationTween->Easing() : navigationTween->EasingBack();
    int playDirection = (targetProgress > startProgress) ? 0 : 1;
    double actualStartProgress = (playDirection == 0) ? startProgress : targetProgress;
    double actualTargetProgress = (playDirection == 0) ? targetProgress : startProgress;
    ::app::Fuse::Navigation::ProgressSpan* progressSpan = ::app::Fuse::Navigation::ProgressSpan__New_1(NULL, actualStartProgress, actualTargetProgress);
    ::app::Fuse::Navigation::ProgressTimer* progressTimer = ::app::Fuse::Navigation::ProgressTimer__Start(NULL, duration, progressSpan, easing, playDirection);
    return (::uObject*)::app::Fuse::Navigation::DefaultNavigationAnimatorPlayer__New_1(NULL, progressTimer, animators, progressSetterCallback, doneCallback);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ProgressSpan__uType* ProgressSpan__typeof()
{
    static ::uStaticStrong<ProgressSpan__uType*> type;
    if (type != NULL) return type;

    type = (ProgressSpan__uType*)::uAllocClassType(sizeof(ProgressSpan__uType), "Fuse.Navigation.ProgressSpan", false, 0, 0, 0);

    return type;
}

void ProgressSpan___ObjInit(ProgressSpan* __this, double from, double to)
{
    __this->From(from);
    __this->To(to);
}

double ProgressSpan__get_From(ProgressSpan* __this)
{
    return __this->_From;
}

double ProgressSpan__get_To(ProgressSpan* __this)
{
    return __this->_To;
}

ProgressSpan* ProgressSpan__New_1(::uStatic* __this, double from, double to)
{
    ProgressSpan* inst = (ProgressSpan*)::uAllocObject(sizeof(ProgressSpan), ProgressSpan__typeof());
    inst->_ObjInit(from, to);
    return inst;
}

void ProgressSpan__set_From(ProgressSpan* __this, double value)
{
    __this->_From = value;
}

void ProgressSpan__set_To(ProgressSpan* __this, double value)
{
    __this->_To = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ProgressTimer__uType* ProgressTimer__typeof()
{
    static ::uStaticStrong<ProgressTimer__uType*> type;
    if (type != NULL) return type;

    type = (ProgressTimer__uType*)::uAllocClassType(sizeof(ProgressTimer__uType), "Fuse.Navigation.ProgressTimer", false, 0, 1, 0);

    type->SetStrongRefs(
        "_progressSpan", offsetof(ProgressTimer, _progressSpan));

    return type;
}

void ProgressTimer___ObjInit(ProgressTimer* __this, double duration, ::app::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant)
{
    __this->_duration = duration;
    __this->_easing = easing;
    __this->_variant = variant;
    __this->_progressSpan = progressSpan;
}

double ProgressTimer__Ease(ProgressTimer* __this, double progress)
{
    return (double)::uPtr< ::uDelegate*>(::app::Fuse::Animations::EasingFunctions__FromEasing(NULL, __this->_easing))->Invoke< float, float>((float)progress);
}

double ProgressTimer__get_EasedNormalizedProgress(ProgressTimer* __this)
{
    double progress = __this->Ease(__this->_elapsedTime / __this->_duration);

    if (__this->_variant == 1)
    {
        progress = 1.0 - progress;
    }

    return progress;
}

double ProgressTimer__get_EasedProgress(ProgressTimer* __this)
{
    return (__this->EasedNormalizedProgress() * (::uPtr< ::app::Fuse::Navigation::ProgressSpan*>(__this->_progressSpan)->To() - ::uPtr< ::app::Fuse::Navigation::ProgressSpan*>(__this->_progressSpan)->From())) + ::uPtr< ::app::Fuse::Navigation::ProgressSpan*>(__this->_progressSpan)->From();
}

::app::Fuse::Navigation::ProgressSpan* ProgressTimer__get_ProgressSpan(ProgressTimer* __this)
{
    return __this->_progressSpan;
}

double ProgressTimer__get_TimeLeft(ProgressTimer* __this)
{
    return ::app::Uno::Math__Clamp_7(NULL, __this->_duration - __this->_elapsedTime, 0.0, __this->_duration);
}

int ProgressTimer__get_Variant(ProgressTimer* __this)
{
    return __this->_variant;
}

ProgressTimer* ProgressTimer__New_1(::uStatic* __this, double duration, ::app::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant)
{
    ProgressTimer* inst = (ProgressTimer*)::uAllocObject(sizeof(ProgressTimer), ProgressTimer__typeof());
    inst->_ObjInit(duration, progressSpan, easing, variant);
    return inst;
}

ProgressTimer* ProgressTimer__Start(::uStatic* __this, double duration, ::app::Fuse::Navigation::ProgressSpan* progressSpan, int easing, int variant)
{
    return ProgressTimer__New_1(NULL, duration, progressSpan, easing, variant);
}

void ProgressTimer__Update(ProgressTimer* __this)
{
    __this->_elapsedTime = ::app::Uno::Math__Min_10(NULL, __this->_elapsedTime + ::app::Fuse::Time__get_FrameInterval(NULL), __this->_duration);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Reload__uType* Reload__typeof()
{
    static ::uStaticStrong<Reload__uType*> type;
    if (type != NULL) return type;

    type = (Reload__uType*)::uAllocClassType(sizeof(Reload__uType), "Fuse.Navigation.Reload", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Navigation::WebViewNavigationTrigger__typeof());
    type->__fp_Perform_1 = (void(*)(::app::Fuse::Navigation::WebViewNavigationTrigger*, ::uObject*, ::app::Fuse::Node*))Reload__Perform_1;

    return type;
}

void Reload__Perform_1(Reload* __this, ::uObject* webView, ::app::Fuse::Node* n)
{
    ::app::Fuse::Navigation::IWebViewNavgation::Reload(::uPtr< ::uObject*>(webView));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SeekNavigationAnimatorPlayer__uType* SeekNavigationAnimatorPlayer__typeof()
{
    static ::uStaticStrong<SeekNavigationAnimatorPlayer__uType*> type;
    if (type != NULL) return type;

    type = (SeekNavigationAnimatorPlayer__uType*)::uAllocClassType(sizeof(SeekNavigationAnimatorPlayer__uType), "Fuse.Navigation.SeekNavigationAnimatorPlayer", false, 1, 2, 0);

    type->__interface_0.__fp_Update = (void(*)(void*))SeekNavigationAnimatorPlayer__Update;
    type->__interface_0.__fp_EnsureAtEnd = (void(*)(void*))SeekNavigationAnimatorPlayer__EnsureAtEnd;

    type->SetInterfaces(
        ::app::Fuse::Navigation::INavigationAnimatorPlayer__typeof(), offsetof(SeekNavigationAnimatorPlayer__uType, __interface_0));

    type->SetStrongRefs(
        "_animators", offsetof(SeekNavigationAnimatorPlayer, _animators),
        "_getProgress", offsetof(SeekNavigationAnimatorPlayer, _getProgress));

    return type;
}

void SeekNavigationAnimatorPlayer___ObjInit(SeekNavigationAnimatorPlayer* __this, ::uObject* animators, ::uDelegate* getProgress)
{
    __this->_animators = animators;
    __this->_getProgress = getProgress;
    __this->_prevProgress = ::uPtr< ::uDelegate*>(__this->_getProgress)->Invoke< double>();
}

void SeekNavigationAnimatorPlayer__EnsureAtEnd(SeekNavigationAnimatorPlayer* __this)
{
    U_THROW(::app::Uno::NotImplementedException__New_3(NULL));
}

SeekNavigationAnimatorPlayer* SeekNavigationAnimatorPlayer__New_1(::uStatic* __this, ::uObject* animators, ::uDelegate* getProgress)
{
    SeekNavigationAnimatorPlayer* inst = (SeekNavigationAnimatorPlayer*)::uAllocObject(sizeof(SeekNavigationAnimatorPlayer), SeekNavigationAnimatorPlayer__typeof());
    inst->_ObjInit(animators, getProgress);
    return inst;
}

void SeekNavigationAnimatorPlayer__Update(SeekNavigationAnimatorPlayer* __this)
{
    double progress = ::uPtr< ::uDelegate*>(__this->_getProgress)->Invoke< double>();

    for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Navigation_INavigationAnimator::Count(::uPtr< ::uObject*>(__this->_animators)); ++i)
    {
        ::app::Fuse::Navigation::INavigationAnimator::Update(::uPtr< ::uObject*>(::app::Uno::Collections::IList__Fuse_Navigation_INavigationAnimator::Item(::uPtr< ::uObject*>(__this->_animators), i)), progress, __this->_prevProgress);
    }

    __this->_prevProgress = progress;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* SnapTo__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Navigation.SnapTo", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Previous", 0LL,
        "Current", 1LL,
        "Next", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StopLoading__uType* StopLoading__typeof()
{
    static ::uStaticStrong<StopLoading__uType*> type;
    if (type != NULL) return type;

    type = (StopLoading__uType*)::uAllocClassType(sizeof(StopLoading__uType), "Fuse.Navigation.StopLoading", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Navigation::WebViewNavigationTrigger__typeof());
    type->__fp_Perform_1 = (void(*)(::app::Fuse::Navigation::WebViewNavigationTrigger*, ::uObject*, ::app::Fuse::Node*))StopLoading__Perform_1;

    return type;
}

void StopLoading__Perform_1(StopLoading* __this, ::uObject* webView, ::app::Fuse::Node* n)
{
    ::app::Fuse::Navigation::IWebViewNavgation::Stop(::uPtr< ::uObject*>(webView));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StructuredNavigation__uType* StructuredNavigation__typeof()
{
    static ::uStaticStrong<StructuredNavigation__uType*> type;
    if (type != NULL) return type;

    type = (StructuredNavigation__uType*)::uAllocClassType(sizeof(StructuredNavigation__uType), "Fuse.Navigation.StructuredNavigation", false, 1, 4, 0);

    type->SetBaseType(::app::Fuse::Navigation::Navigation__typeof());
    type->__fp_get_CanGoBack = (bool(*)(::app::Fuse::Navigation::Navigation*))StructuredNavigation__get_CanGoBack;
    type->__fp_get_CanGoForward = (bool(*)(::app::Fuse::Navigation::Navigation*))StructuredNavigation__get_CanGoForward;
    type->__fp_get_PageProgress = (double(*)(::app::Fuse::Navigation::Navigation*))StructuredNavigation__get_PageProgress;
    type->__fp_GoBack = (void(*)(::app::Fuse::Navigation::Navigation*))StructuredNavigation__GoBack;
    type->__fp_GoForward = (void(*)(::app::Fuse::Navigation::Navigation*))StructuredNavigation__GoForward;
    type->__fp_Goto = (void(*)(::app::Fuse::Navigation::Navigation*, ::app::Fuse::Node*, int))StructuredNavigation__Goto;
    type->__fp_OnChildAdded = (void(*)(::app::Fuse::Navigation::Navigation*, ::uObject*, ::app::Fuse::Node*))StructuredNavigation__OnChildAdded;
    type->__fp_OnChildRemoved = (void(*)(::app::Fuse::Navigation::Navigation*, ::uObject*, ::app::Fuse::Node*))StructuredNavigation__OnChildRemoved;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))StructuredNavigation__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))StructuredNavigation__OnUnrooted;
    type->__interface_0.__fp_Goto = (void(*)(void*, ::app::Fuse::Node*, int))StructuredNavigation__Goto;
    type->__interface_0.__fp_GoForward = (void(*)(void*))StructuredNavigation__GoForward;
    type->__interface_0.__fp_GoBack = (void(*)(void*))StructuredNavigation__GoBack;
    type->__interface_0.__fp_get_PageProgress = (double(*)(void*))StructuredNavigation__get_PageProgress;
    type->__interface_0.__fp_get_CanGoForward = (bool(*)(void*))StructuredNavigation__get_CanGoForward;
    type->__interface_0.__fp_get_CanGoBack = (bool(*)(void*))StructuredNavigation__get_CanGoBack;

    type->SetInterfaces(
        ::app::Fuse::Navigation::INavigation__typeof(), offsetof(StructuredNavigation__uType, __interface_0));

    type->SetStrongRefs(
        "_active", offsetof(StructuredNavigation, _active),
        "_currentAnimatorPlayer", offsetof(StructuredNavigation, _currentAnimatorPlayer),
        "_navigationTween", offsetof(StructuredNavigation, _navigationTween),
        "_node", offsetof(StructuredNavigation, _node));

    return type;
}

void StructuredNavigation__AnimatorDoneCallback(StructuredNavigation* __this)
{
    ::app::Fuse::Navigation::NavigationStateArgs* collection_125;
    ::app::Fuse::Navigation::INavigationAnimatorPlayer::EnsureAtEnd(::uPtr< ::uObject*>(__this->_currentAnimatorPlayer));
    __this->Progress((double)__this->GetPageIndex(__this->_active));
    __this->_currentAnimatorPlayer = NULL;

    if (__this->_queueClearForwardHistory)
    {
        __this->ClearForwardHistory();
        __this->_queueClearForwardHistory = false;
    }

    __this->OnNavigated(__this->_active);
    __this->OnHistoryChanged();
    ::app::Fuse::Navigation::Navigation__NotifyNavigationState(NULL, __this->_node, (collection_125 = ::app::Fuse::Navigation::NavigationStateArgs__New_2(NULL), ::uPtr< ::app::Fuse::Navigation::NavigationStateArgs*>(collection_125)->State(0), 0, collection_125));
}

void StructuredNavigation__BeginSeek(StructuredNavigation* __this)
{
    ::app::Fuse::Navigation::NavigationStateArgs* collection_126;
    __this->_progressBase = __this->Progress();
    ::app::Fuse::Navigation::Navigation__NotifyNavigationState(NULL, __this->_node, (collection_126 = ::app::Fuse::Navigation::NavigationStateArgs__New_2(NULL), ::uPtr< ::app::Fuse::Navigation::NavigationStateArgs*>(collection_126)->State(1), 1, collection_126));
    __this->_currentAnimatorPlayer = (::uObject*)::app::Fuse::Navigation::SeekNavigationAnimatorPlayer__New_1(NULL, __this->GetAnimators(), ::uNewDelegateNonVirt(::app::Uno::Func__double__typeof(), (const void*)StructuredNavigation__ProgressGetterCallback, __this));
}

void StructuredNavigation__ClearForwardHistory(StructuredNavigation* __this)
{
    if (__this->HasPages() && (__this->_active != __this->Front()))
    {
        int target = __this->GetPageIndex(__this->_active);

        for (int i = target - 1; i >= 0; i--)
        {
            ::app::Fuse::Navigation::INavigationPanel::RemoveChild(::uPtr< ::uObject*>(__this->Owner()), ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Item(i));
        }
    }

    __this->OnHistoryChanged();
}

void StructuredNavigation__EndSeek(StructuredNavigation* __this, ::app::Fuse::Navigation::EndSeekArgs* args)
{
    __this->_currentAnimatorPlayer = NULL;
    int targetIndex = 0;

    switch (::uPtr< ::app::Fuse::Navigation::EndSeekArgs*>(args)->SnapTo())
    {
        case 0:
        {
            targetIndex = ::app::Uno::Math__Clamp_3(NULL, (int)::app::Uno::Math__Floor(NULL, __this->Progress()), 0, ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Count() - 1);
            break;
        }
        case 2:
        {
            targetIndex = ::app::Uno::Math__Clamp_3(NULL, (int)::app::Uno::Math__Ceil(NULL, __this->Progress()), 0, ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Count() - 1);
            break;
        }
        case 1:
        {
            double diff = __this->Progress() - ::app::Uno::Math__Floor(NULL, __this->Progress());
            targetIndex = ::app::Uno::Math__Clamp_3(NULL, (diff > 0.5) ? (int)::app::Uno::Math__Ceil(NULL, __this->Progress()) : (int)::app::Uno::Math__Floor(NULL, __this->Progress()), 0, ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Count() - 1);
            break;
        }
    }

    if (__this->_active != __this->GetPage(targetIndex))
    {
        __this->_active = __this->GetPage(targetIndex);
    }

    __this->TransitionToChild(__this->GetPage(targetIndex), false);
}

void StructuredNavigation__EnsureChildAnimationState(StructuredNavigation* __this)
{
    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Count(); ++i)
    {
        ::app::Fuse::Node* c = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Item(i);
        double p = __this->Progress() - (double)i;
        ::app::Fuse::Navigation::Navigation__NotifyNavigation(NULL, c, ::app::Fuse::Navigation::NavigationArgs__New_2(NULL, p, p, 1));
    }
}

::app::Fuse::Node* StructuredNavigation__get_Back(StructuredNavigation* __this)
{
    return (::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Count() > 0) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Item(::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Count() - 1) : NULL;
}

bool StructuredNavigation__get_CanGoBack(StructuredNavigation* __this)
{
    return __this->HasPages() && (__this->_active != __this->Back());
}

bool StructuredNavigation__get_CanGoForward(StructuredNavigation* __this)
{
    return __this->HasPages() && (__this->_active != __this->Front());
}

::app::Fuse::Node* StructuredNavigation__get_Front(StructuredNavigation* __this)
{
    return (::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Count() > 0) ? ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Item(0) : NULL;
}

int StructuredNavigation__get_Mode(StructuredNavigation* __this)
{
    return __this->_Mode;
}

::app::Fuse::Node* StructuredNavigation__get_Next(StructuredNavigation* __this)
{
    return __this->GetPage(__this->GetPageIndex(__this->_active) - 1);
}

double StructuredNavigation__get_PageProgress(StructuredNavigation* __this)
{
    return __this->Progress();
}

::app::Fuse::Node* StructuredNavigation__get_Previous(StructuredNavigation* __this)
{
    return __this->GetPage(__this->GetPageIndex(__this->_active) + 1);
}

double StructuredNavigation__get_Progress(StructuredNavigation* __this)
{
    return __this->_progress;
}

::app::Uno::Float2 StructuredNavigation__get_SeekRange(StructuredNavigation* __this)
{
    return ::app::Uno::Float2__New_2(NULL, (float)-__this->_progressBase, (float)((double)(::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Count() - 1) - __this->_progressBase));
}

::uObject* StructuredNavigation__GetAnimators(StructuredNavigation* __this)
{
    ::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator* animators = ::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator__New_2(NULL, ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Count());

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Count(); i++)
    {
        ::uPtr< ::app::Uno::Collections::List__Fuse_Navigation_INavigationAnimator*>(animators)->Add((::uObject*)::app::Fuse::Navigation::DefaultNavigationAnimator__New_1(NULL, i, ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Item(i)));
    }

    return (::uObject*)animators;
}

void StructuredNavigation__GoBack(StructuredNavigation* __this)
{
    if (__this->CanGoBack())
    {
        __this->TransitionToChild(__this->Previous(), false);
    }
}

void StructuredNavigation__GoForward(StructuredNavigation* __this)
{
    if (__this->CanGoForward())
    {
        __this->TransitionToChild(__this->Next(), false);
    }
}

void StructuredNavigation__Goto(StructuredNavigation* __this, ::app::Fuse::Node* element, int mode)
{
    if (__this->Owner() == NULL)
    {
        __this->_active = element;
        return;
    }

    if (element == __this->_active)
    {
        return;
    }

    __this->GotoImpl(element, mode);
}

void StructuredNavigation__GotoImpl(StructuredNavigation* __this, ::app::Fuse::Node* element, int mode)
{
    if (!::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Contains(element))
    {
        if (__this->Mode() == 1)
        {
            __this->ClearForwardHistory();
        }

        ::app::Fuse::Navigation::INavigationPanel::AddChildAt(::uPtr< ::uObject*>(__this->Owner()), 0, element);
    }
    else if (!__this->_reuseExistingNode)
    {
        if (__this->Mode() == 1)
        {
            double diff = __this->Progress() - (double)__this->GetPageIndex(__this->_active);
            ::app::Fuse::Navigation::INavigationPanel::RemoveChild(::uPtr< ::uObject*>(__this->Owner()), element);
            __this->Progress((double)__this->GetPageIndex(__this->_active) + diff);
            __this->ClearForwardHistory();
            ::app::Fuse::Navigation::INavigationPanel::AddChildAt(::uPtr< ::uObject*>(__this->Owner()), 0, element);
        }
    }

    __this->TransitionToChild(element, (mode & 2) == 2);

    if ((mode & 4) == 4)
    {
        __this->_queueClearForwardHistory = true;
    }

    __this->OnHistoryChanged();
}

void StructuredNavigation__OnChildAdded(StructuredNavigation* __this, ::uObject* s, ::app::Fuse::Node* child)
{
    if (__this->_active != NULL)
    {
        __this->Progress((double)__this->GetPageIndex(__this->_active));
    }

    if (__this->_active == NULL)
    {
        __this->_active = child;
    }

    __this->OnHistoryChanged();
    __this->EnsureChildAnimationState();
    ::app::Fuse::Navigation::Navigation__OnChildAdded(__this, s, child);
}

void StructuredNavigation__OnChildRemoved(StructuredNavigation* __this, ::uObject* s, ::app::Fuse::Node* child)
{
    if (__this->_active == child)
    {
        __this->_active = NULL;
    }

    __this->OnHistoryChanged();
    ::app::Fuse::Navigation::DefaultNavigationAnimator* animator = ::app::Fuse::Navigation::DefaultNavigationAnimator__New_1(NULL, 0, child);
    ::uPtr< ::app::Fuse::Navigation::DefaultNavigationAnimator*>(animator)->Update(0.0, 0.0);
    ::app::Fuse::Navigation::Navigation__OnChildRemoved(__this, s, child);
}

void StructuredNavigation__OnPlaced(StructuredNavigation* __this, ::uObject* s, ::uObject* a)
{
    __this->EnsureChildAnimationState();
}

void StructuredNavigation__OnRooted(StructuredNavigation* __this, ::app::Fuse::Node* node)
{
    ::app::Fuse::Navigation::Navigation__OnRooted(__this, node);
    __this->_node = node;

    if (__this->Owner() != NULL)
    {
        ::app::Fuse::Navigation::INavigationPanel::add_Update(::uPtr< ::uObject*>(__this->Owner()), ::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)StructuredNavigation__OnUpdate, __this));
        ::app::Fuse::Navigation::INavigationPanel::add_Placed(::uPtr< ::uObject*>(__this->Owner()), ::uNewDelegateNonVirt(::app::Fuse::PlacedHandler__typeof(), (const void*)StructuredNavigation__OnPlaced, __this));

        if ((::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Count() > 0) && (__this->_active == NULL))
        {
            __this->_active = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->Pages)->Item(0);
        }

        if (__this->_active != NULL)
        {
            __this->GotoImpl(__this->_active, 2);
        }

        __this->EnsureChildAnimationState();
    }
}

void StructuredNavigation__OnUnrooted(StructuredNavigation* __this, ::app::Fuse::Node* node)
{
    if (__this->Owner() != NULL)
    {
        ::app::Fuse::Navigation::INavigationPanel::remove_Update(::uPtr< ::uObject*>(__this->Owner()), ::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)StructuredNavigation__OnUpdate, __this));
        ::app::Fuse::Navigation::INavigationPanel::remove_Placed(::uPtr< ::uObject*>(__this->Owner()), ::uNewDelegateNonVirt(::app::Fuse::PlacedHandler__typeof(), (const void*)StructuredNavigation__OnPlaced, __this));
    }

    __this->_node = NULL;
    ::app::Fuse::Navigation::Navigation__OnUnrooted(__this, node);
}

void StructuredNavigation__OnUpdate(StructuredNavigation* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    if (__this->_currentAnimatorPlayer != NULL)
    {
        ::app::Fuse::Navigation::INavigationAnimatorPlayer::Update(::uPtr< ::uObject*>(__this->_currentAnimatorPlayer));
    }
}

double StructuredNavigation__ProgressGetterCallback(StructuredNavigation* __this)
{
    return __this->Progress();
}

void StructuredNavigation__ProgressSetterCallback(StructuredNavigation* __this, double newProgress)
{
    __this->Progress(newProgress);
}

void StructuredNavigation__Seek(StructuredNavigation* __this, ::app::Fuse::Navigation::UpdateSeekArgs* args)
{
    __this->Progress((double)::uPtr< ::app::Fuse::Navigation::UpdateSeekArgs*>(args)->RelativeDistance() + __this->_progressBase);
}

void StructuredNavigation__set_Mode(StructuredNavigation* __this, int value)
{
    __this->_Mode = value;
}

void StructuredNavigation__set_Progress(StructuredNavigation* __this, double value)
{
    double prev = __this->_progress;
    __this->_progress = value;
    __this->OnPageProgressChanged(__this->_progress, prev);
}

void StructuredNavigation__TransitionToChild(StructuredNavigation* __this, ::app::Fuse::Node* element, bool bypass)
{
    ::app::Fuse::Navigation::NavigationStateArgs* collection_123;
    ::app::Fuse::Navigation::NavigationStateArgs* collection_124;
    double targetProgress = (double)__this->GetPageIndex(element);
    __this->_active = element;

    if (bypass)
    {
        __this->Progress(targetProgress);
        __this->EnsureChildAnimationState();
        return;
    }

    if ((__this->Progress() == targetProgress) && (__this->_currentAnimatorPlayer == NULL))
    {
        ::app::Fuse::Navigation::Navigation__NotifyNavigationState(NULL, __this->_node, (collection_123 = ::app::Fuse::Navigation::NavigationStateArgs__New_2(NULL), ::uPtr< ::app::Fuse::Navigation::NavigationStateArgs*>(collection_123)->State(0), 0, collection_123));
        return;
    }

    ::app::Fuse::Navigation::Navigation__NotifyNavigationState(NULL, __this->_node, (collection_124 = ::app::Fuse::Navigation::NavigationStateArgs__New_2(NULL), ::uPtr< ::app::Fuse::Navigation::NavigationStateArgs*>(collection_124)->State(2), 2, collection_124));
    __this->_currentAnimatorPlayer = ::app::Fuse::Navigation::PlayerFactory__Start(NULL, targetProgress, __this->Progress(), __this->GetAnimators(), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)StructuredNavigation__AnimatorDoneCallback, __this), ::uNewDelegateNonVirt(::app::Uno::Action__double__typeof(), (const void*)StructuredNavigation__ProgressSetterCallback, __this), __this->_navigationTween);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* StructuredNavigation_NavigationStructure__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Navigation.StructuredNavigation.NavigationStructure", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Linear", 0LL,
        "Hierarchical", 1LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* SwipeDirection__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Navigation.SwipeDirection", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "Right", 0LL,
        "Left", 1LL,
        "Down", 2LL,
        "Up", 3LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* SwipeEnds__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Navigation.SwipeEnds", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Closed", 0LL,
        "Open", 1LL,
        "Short", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

float SwipeNavigate__elasticDecay;
float SwipeNavigate__elasticScale;

SwipeNavigate__uType* SwipeNavigate__typeof()
{
    static ::uStaticStrong<SwipeNavigate__uType*> type;
    if (type != NULL) return type;

    type = (SwipeNavigate__uType*)::uAllocClassType(sizeof(SwipeNavigate__uType), "Fuse.Navigation.SwipeNavigate", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))SwipeNavigate__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))SwipeNavigate__OnUnrooted;

    type->SetStrongRefs(
        "_currentNavigation", offsetof(SwipeNavigate, _currentNavigation),
        "_element", offsetof(SwipeNavigate, _element),
        "_horizontalGesture", offsetof(SwipeNavigate, _horizontalGesture),
        "_verticalGesture", offsetof(SwipeNavigate, _verticalGesture));

    return type;
}

void SwipeNavigate___TypeInit(::uStatic* __this)
{
    SwipeNavigate__elasticDecay = 0.015f;
    SwipeNavigate__elasticScale = 0.4f;
}

int SwipeNavigate__DetermineSnap(SwipeNavigate* __this)
{
    float diff = __this->IsHorizontal() ? __this->Velocity().X : __this->Velocity().Y;

    if ((__this->SwipeDirection() == 1) || (__this->SwipeDirection() == 3))
    {
        diff = -diff;
    }

    if (diff < -__this->VelocityThreshold())
    {
        return 0;
    }

    if (diff > __this->VelocityThreshold())
    {
        return 2;
    }

    return 1;
}

float SwipeNavigate__ElasticDistance(SwipeNavigate* __this, float v)
{
    bool neg = false;

    if (v < 0.0f)
    {
        v = -v;
        neg = true;
    }

    v = (::app::Uno::Math__Pow_1(NULL, SwipeNavigate__elasticDecay, v * SwipeNavigate__elasticScale) - 1.0f) / ::app::Uno::Math__Log_1(NULL, SwipeNavigate__elasticDecay);

    if (neg)
    {
        v = -v;
    }

    return v;
}

::app::Uno::Float2 SwipeNavigate__get_Delta(SwipeNavigate* __this)
{
    return ::app::Uno::Float2__op_Subtraction_2(NULL, __this->_currentCoord, __this->_previousCoord);
}

::app::Uno::Float2 SwipeNavigate__get_Distance(SwipeNavigate* __this)
{
    return ::app::Uno::Float2__op_Subtraction_2(NULL, __this->_currentCoord, __this->_startCoord);
}

double SwipeNavigate__get_ElapsedTime(SwipeNavigate* __this)
{
    return ::app::Fuse::Time__get_FrameTime(NULL) - __this->_startTime;
}

bool SwipeNavigate__get_IsHorizontal(SwipeNavigate* __this)
{
    return (__this->SwipeDirection() == 1) || (__this->SwipeDirection() == 0);
}

::app::Fuse::Navigation::StructuredNavigation* SwipeNavigate__get_Navigation(SwipeNavigate* __this)
{
    ::app::Fuse::Node* elm = __this->_element;

    if (elm != NULL)
    {
        ::app::Fuse::Navigation::StructuredNavigation* navigation = ::uAs< ::app::Fuse::Navigation::StructuredNavigation*>(::app::Fuse::Navigation::Navigation__TryFind(NULL, elm), ::app::Fuse::Navigation::StructuredNavigation__typeof());

        if (navigation != NULL)
        {
            return navigation;
        }
    }

    return NULL;
}

::app::Uno::Float2 SwipeNavigate__get_Scale(SwipeNavigate* __this)
{
    return ::app::Fuse::Navigation::INavigationPanel::ActualSize(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->_currentNavigation)->Owner()));
}

int SwipeNavigate__get_SwipeDirection(SwipeNavigate* __this)
{
    return __this->_SwipeDirection;
}

int SwipeNavigate__get_SwipeEnds(SwipeNavigate* __this)
{
    return __this->_SwipeEnds;
}

::app::Uno::Float2 SwipeNavigate__get_Velocity(SwipeNavigate* __this)
{
    return ::app::Uno::Float2__op_Division_1(NULL, __this->Distance(), (float)__this->ElapsedTime());
}

float SwipeNavigate__get_VelocityThreshold(SwipeNavigate* __this)
{
    return __this->_VelocityThreshold;
}

::app::Fuse::Navigation::UpdateSeekArgs* SwipeNavigate__GetNavigationArgs(SwipeNavigate* __this)
{
    float delta = float();
    float distance = float();
    float scale = float();

    if (__this->IsHorizontal())
    {
        delta = __this->Delta().X;
        distance = __this->Distance().X;
        scale = __this->Scale().X;
    }
    else
    {
        delta = __this->Delta().Y;
        distance = __this->Distance().Y;
        scale = __this->Scale().Y;
    }

    if ((__this->SwipeDirection() == 1) || (__this->SwipeDirection() == 3))
    {
        delta = -delta;
        distance = -distance;
    }

    ::app::Uno::Float2 limits = ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->_currentNavigation)->SeekRange();
    float relDistance = distance / scale;

    switch (__this->SwipeEnds())
    {
        case 0:
        {
            {
                float limitDistance = ::app::Uno::Math__Clamp_8(NULL, relDistance, limits.Item(0), limits.Item(1));
                distance = limitDistance * scale;
                break;
            }
        }
        case 1:
        {
            break;
        }
        case 2:
        {
            {
                float limit = relDistance;

                if (relDistance < limits.Item(0))
                {
                    limit = __this->ElasticDistance(relDistance - limits.Item(0)) + limits.Item(0);
                }
                else if (relDistance > limits.Item(1))
                {
                    limit = __this->ElasticDistance(relDistance - limits.Item(1)) + limits.Item(1);
                }

                distance = limit * scale;
                break;
            }
        }
    }

    return ::app::Fuse::Navigation::UpdateSeekArgs__New_1(NULL, delta, distance, scale, __this->ElapsedTime());
}

void SwipeNavigate__OnLostCapture(SwipeNavigate* __this)
{
    __this->_down = -1;

    if (__this->_currentNavigation != NULL)
    {
        ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->_currentNavigation)->EndSeek(::app::Fuse::Navigation::EndSeekArgs__New_1(NULL, 1));
        __this->_currentNavigation = NULL;
    }
}

void SwipeNavigate__OnPointerMoved(SwipeNavigate* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args)
{
    if (__this->_down != ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->PointIndex())
    {
        return;
    }

    if (__this->_currentNavigation == NULL)
    {
        return;
    }

    __this->_previousCoord = __this->_currentCoord;
    __this->_currentCoord = ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint();

    if (args->IsHardCapturedTo((::uObject*)__this))
    {
        ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->_currentNavigation)->Seek(__this->GetNavigationArgs());
    }
    else
    {
        ::app::Uno::Float2 diff = ::app::Uno::Float2__op_Subtraction_2(NULL, __this->_currentCoord, __this->_startCoord);
        bool withinBounds = __this->IsHorizontal() ? ::uPtr< ::app::Fuse::Gestures::SwipeGestureHelper*>(__this->_horizontalGesture)->IsWithinBounds(diff) : ::uPtr< ::app::Fuse::Gestures::SwipeGestureHelper*>(__this->_verticalGesture)->IsWithinBounds(diff);

        if (withinBounds)
        {
            if (::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->TryHardCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)SwipeNavigate__OnLostCapture, __this), NULL))
            {
                ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->_currentNavigation)->BeginSeek();
            }
            else
            {
                __this->OnLostCapture();
            }
        }
    }
}

void SwipeNavigate__OnPointerPressed(SwipeNavigate* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args)
{
    __this->_currentNavigation = __this->Navigation();

    if (__this->_currentNavigation == NULL)
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("SwipeNavigate: failed to find suitable Navigation object"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno"), 1770);
        return;
    }

    if (::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->TrySoftCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)SwipeNavigate__OnLostCapture, __this), NULL))
    {
        __this->_down = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->PointIndex();
        __this->_startCoord = __this->_currentCoord = __this->_previousCoord = args->WindowPoint();
        __this->_startTime = ::app::Fuse::Time__get_FrameTime(NULL);
    }
}

void SwipeNavigate__OnPointerReleased(SwipeNavigate* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    __this->_previousCoord = __this->_currentCoord;
    __this->_currentCoord = ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->WindowPoint();
    __this->_down = -1;

    if (__this->_currentNavigation == NULL)
    {
        return;
    }

    if (args->IsHardCapturedTo((::uObject*)__this))
    {
        ::uPtr< ::app::Fuse::Navigation::StructuredNavigation*>(__this->_currentNavigation)->EndSeek(::app::Fuse::Navigation::EndSeekArgs__New_1(NULL, __this->DetermineSnap()));
        ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->ReleaseHardCapture((::uObject*)__this);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->IsSoftCapturedTo((::uObject*)__this))
        {
            ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->ReleaseSoftCapture((::uObject*)__this);
        }
    }

    __this->_currentNavigation = NULL;
}

void SwipeNavigate__OnRooted(SwipeNavigate* __this, ::app::Fuse::Node* elm)
{
    __this->_element = elm;
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)SwipeNavigate__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)SwipeNavigate__OnPointerMoved, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)SwipeNavigate__OnPointerReleased, __this));
}

void SwipeNavigate__OnUnrooted(SwipeNavigate* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)SwipeNavigate__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)SwipeNavigate__OnPointerMoved, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)SwipeNavigate__OnPointerReleased, __this));
    __this->_element = NULL;
}

void SwipeNavigate__set_SwipeDirection(SwipeNavigate* __this, int value)
{
    __this->_SwipeDirection = value;
}

void SwipeNavigate__set_SwipeEnds(SwipeNavigate* __this, int value)
{
    __this->_SwipeEnds = value;
}

void SwipeNavigate__set_VelocityThreshold(SwipeNavigate* __this, float value)
{
    __this->_VelocityThreshold = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UpdateSeekArgs__uType* UpdateSeekArgs__typeof()
{
    static ::uStaticStrong<UpdateSeekArgs__uType*> type;
    if (type != NULL) return type;

    type = (UpdateSeekArgs__uType*)::uAllocClassType(sizeof(UpdateSeekArgs__uType), "Fuse.Navigation.UpdateSeekArgs", false, 0, 0, 0);

    return type;
}

void UpdateSeekArgs___ObjInit(UpdateSeekArgs* __this, float delta, float distance, float scale, double time)
{
    __this->Delta(delta);
    __this->Distance(distance);
    __this->_scale = scale;
    __this->_time = time;
}

float UpdateSeekArgs__get_Delta(UpdateSeekArgs* __this)
{
    return __this->_Delta;
}

float UpdateSeekArgs__get_Distance(UpdateSeekArgs* __this)
{
    return __this->_Distance;
}

float UpdateSeekArgs__get_RelativeDistance(UpdateSeekArgs* __this)
{
    return __this->Distance() / __this->_scale;
}

UpdateSeekArgs* UpdateSeekArgs__New_1(::uStatic* __this, float delta, float distance, float scale, double time)
{
    UpdateSeekArgs* inst = (UpdateSeekArgs*)::uAllocObject(sizeof(UpdateSeekArgs), UpdateSeekArgs__typeof());
    inst->_ObjInit(delta, distance, scale, time);
    return inst;
}

void UpdateSeekArgs__set_Delta(UpdateSeekArgs* __this, float value)
{
    __this->_Delta = value;
}

void UpdateSeekArgs__set_Distance(UpdateSeekArgs* __this, float value)
{
    __this->_Distance = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WebViewNavigationExtensions__uType* WebViewNavigationExtensions__typeof()
{
    static ::uStaticStrong<WebViewNavigationExtensions__uType*> type;
    if (type != NULL) return type;

    type = (WebViewNavigationExtensions__uType*)::uAllocClassType(sizeof(WebViewNavigationExtensions__uType), "Fuse.Navigation.WebViewNavigationExtensions");

    return type;
}

::uObject* WebViewNavigationExtensions__TryFind(::uStatic* __this, ::app::Fuse::Node* node)
{
    ::uObject* ind_123;
    return (node != NULL) ? (ind_123 = ::uAs< ::uObject*>(node, ::app::Fuse::Navigation::IWebViewNavgation__typeof()), ((ind_123 != NULL) ? ind_123 : WebViewNavigationExtensions__TryFind(NULL, ::uPtr< ::app::Fuse::Node*>(node)->Parent()))) : NULL;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WebViewNavigationTrigger__uType* WebViewNavigationTrigger__typeof()
{
    static ::uStaticStrong<WebViewNavigationTrigger__uType*> type;
    if (type != NULL) return type;

    type = (WebViewNavigationTrigger__uType*)::uAllocClassType(sizeof(WebViewNavigationTrigger__uType), "Fuse.Navigation.WebViewNavigationTrigger", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))WebViewNavigationTrigger__Perform;

    type->SetStrongRefs(
        "_webView", offsetof(WebViewNavigationTrigger, _webView));

    return type;
}

::uObject* WebViewNavigationTrigger__get_WebView(WebViewNavigationTrigger* __this)
{
    return __this->_webView;
}

void WebViewNavigationTrigger__Perform(WebViewNavigationTrigger* __this, ::app::Fuse::Node* target)
{
    ::uObject* ind_123 = __this->WebView();
    ::uObject* webView = (ind_123 != NULL) ? ind_123 : ::app::Fuse::Navigation::WebViewNavigationExtensions__TryFind(NULL, target);

    if (webView != NULL)
    {
        __this->Perform_1(webView, target);
    }
}

void WebViewNavigationTrigger__set_WebView(WebViewNavigationTrigger* __this, ::uObject* value)
{
    __this->_webView = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileActive__uType* WhileActive__typeof()
{
    static ::uStaticStrong<WhileActive__uType*> type;
    if (type != NULL) return type;

    type = (WhileActive__uType*)::uAllocClassType(sizeof(WhileActive__uType), "Fuse.Navigation.WhileActive", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Navigation::WhileNavigationTrigger__typeof());
    type->__fp_ForceUpdate = (void(*)(::app::Fuse::Navigation::WhileNavigationTrigger*))WhileActive__ForceUpdate;
    type->__fp_OnNavigationStateChanged = (void(*)(::app::Fuse::Navigation::WhileNavigationTrigger*, ::uObject*, ::app::Fuse::Navigation::NavigationArgs*))WhileActive__OnNavigationStateChanged;

    return type;
}

void WhileActive___ObjInit_4(WhileActive* __this)
{
    ::app::Fuse::Navigation::WhileNavigationTrigger___ObjInit_3(__this);
}

void WhileActive__ForceUpdate(WhileActive* __this)
{
    __this->GoProgress(__this->InvertProgress(::app::Fuse::Navigation::Navigation__GetProgress(NULL, __this->PageContext())));
}

double WhileActive__InvertProgress(WhileActive* __this, double p)
{
    return 1.0 - ::app::Uno::Math__Min_10(NULL, 1.0, ::app::Uno::Math__Abs_7(NULL, p));
}

WhileActive* WhileActive__New_1(::uStatic* __this)
{
    WhileActive* inst = (WhileActive*)::uAllocObject(sizeof(WhileActive), WhileActive__typeof());
    inst->_ObjInit_4();
    return inst;
}

void WhileActive__OnNavigationStateChanged(WhileActive* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state)
{
    __this->GoProgress(__this->InvertProgress(::uPtr< ::app::Fuse::Navigation::NavigationArgs*>(state)->Progress()));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileInactive__uType* WhileInactive__typeof()
{
    static ::uStaticStrong<WhileInactive__uType*> type;
    if (type != NULL) return type;

    type = (WhileInactive__uType*)::uAllocClassType(sizeof(WhileInactive__uType), "Fuse.Navigation.WhileInactive", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Navigation::WhileNavigationTrigger__typeof());
    type->__fp_ForceUpdate = (void(*)(::app::Fuse::Navigation::WhileNavigationTrigger*))WhileInactive__ForceUpdate;
    type->__fp_OnNavigationStateChanged = (void(*)(::app::Fuse::Navigation::WhileNavigationTrigger*, ::uObject*, ::app::Fuse::Navigation::NavigationArgs*))WhileInactive__OnNavigationStateChanged;

    return type;
}

void WhileInactive___ObjInit_4(WhileInactive* __this)
{
    ::app::Fuse::Navigation::WhileNavigationTrigger___ObjInit_3(__this);
}

void WhileInactive__ForceUpdate(WhileInactive* __this)
{
    __this->GoProgress(::app::Uno::Math__Abs_7(NULL, ::app::Fuse::Navigation::Navigation__GetProgress(NULL, __this->PageContext())));
}

WhileInactive* WhileInactive__New_1(::uStatic* __this)
{
    WhileInactive* inst = (WhileInactive*)::uAllocObject(sizeof(WhileInactive), WhileInactive__typeof());
    inst->_ObjInit_4();
    return inst;
}

void WhileInactive__OnNavigationStateChanged(WhileInactive* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state)
{
    __this->GoProgress(::app::Uno::Math__Abs_7(NULL, ::uPtr< ::app::Fuse::Navigation::NavigationArgs*>(state)->Progress()));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileInEnterState__uType* WhileInEnterState__typeof()
{
    static ::uStaticStrong<WhileInEnterState__uType*> type;
    if (type != NULL) return type;

    type = (WhileInEnterState__uType*)::uAllocClassType(sizeof(WhileInEnterState__uType), "Fuse.Navigation.WhileInEnterState", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Navigation::WhileNavigationTrigger__typeof());
    type->__fp_ForceUpdate = (void(*)(::app::Fuse::Navigation::WhileNavigationTrigger*))WhileInEnterState__ForceUpdate;
    type->__fp_OnNavigationStateChanged = (void(*)(::app::Fuse::Navigation::WhileNavigationTrigger*, ::uObject*, ::app::Fuse::Navigation::NavigationArgs*))WhileInEnterState__OnNavigationStateChanged;

    return type;
}

void WhileInEnterState__ForceUpdate(WhileInEnterState* __this)
{
    __this->GoProgress(::app::Fuse::Navigation::Navigation__GetProgress(NULL, __this->PageContext()));
}

void WhileInEnterState__OnNavigationStateChanged(WhileInEnterState* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state)
{
    __this->GoProgress(::uPtr< ::app::Fuse::Navigation::NavigationArgs*>(state)->Progress());
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileInExitState__uType* WhileInExitState__typeof()
{
    static ::uStaticStrong<WhileInExitState__uType*> type;
    if (type != NULL) return type;

    type = (WhileInExitState__uType*)::uAllocClassType(sizeof(WhileInExitState__uType), "Fuse.Navigation.WhileInExitState", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Navigation::WhileNavigationTrigger__typeof());
    type->__fp_ForceUpdate = (void(*)(::app::Fuse::Navigation::WhileNavigationTrigger*))WhileInExitState__ForceUpdate;
    type->__fp_OnNavigationStateChanged = (void(*)(::app::Fuse::Navigation::WhileNavigationTrigger*, ::uObject*, ::app::Fuse::Navigation::NavigationArgs*))WhileInExitState__OnNavigationStateChanged;

    return type;
}

void WhileInExitState__ForceUpdate(WhileInExitState* __this)
{
    __this->GoProgress(-::app::Fuse::Navigation::Navigation__GetProgress(NULL, __this->PageContext()));
}

void WhileInExitState__OnNavigationStateChanged(WhileInExitState* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state)
{
    __this->GoProgress(-::uPtr< ::app::Fuse::Navigation::NavigationArgs*>(state)->Progress());
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileNavigationTrigger__uType* WhileNavigationTrigger__typeof()
{
    static ::uStaticStrong<WhileNavigationTrigger__uType*> type;
    if (type != NULL) return type;

    type = (WhileNavigationTrigger__uType*)::uAllocClassType(sizeof(WhileNavigationTrigger__uType), "Fuse.Navigation.WhileNavigationTrigger", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileNavigationTrigger__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileNavigationTrigger__OnUnrooted;

    return type;
}

void WhileNavigationTrigger___ObjInit_3(WhileNavigationTrigger* __this)
{
    __this->_threshold = 1.0f;
    ::app::Fuse::Triggers::WhileTrigger___ObjInit_2(__this);
}

float WhileNavigationTrigger__get_Limit(WhileNavigationTrigger* __this)
{
    return __this->_limit;
}

::app::Fuse::Node* WhileNavigationTrigger__get_PageContext(WhileNavigationTrigger* __this)
{
    ::app::Fuse::Node* n = ::app::Fuse::Navigation::Navigation__TryFindPage(NULL, __this->Node());

    if (n == NULL)
    {
        return __this->Node();
    }

    return n;
}

float WhileNavigationTrigger__get_Threshold(WhileNavigationTrigger* __this)
{
    return __this->_threshold;
}

void WhileNavigationTrigger__GoProgress(WhileNavigationTrigger* __this, double progress)
{
    bool set = progress >= (double)__this->Threshold();

    if (__this->_hasLimit)
    {
        set = set && (progress <= (double)__this->Limit());
    }

    __this->SetActive(set);
}

void WhileNavigationTrigger__OnRooted(WhileNavigationTrigger* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    ::app::Fuse::Navigation::Navigation__AddHandler(NULL, __this->PageContext(), ::uNewDelegateVirt(::app::Fuse::Navigation::NavigationHandler__typeof(), __this, offsetof(WhileNavigationTrigger__uType, __fp_OnNavigationStateChanged)));
    __this->ForceUpdate();
}

void WhileNavigationTrigger__OnUnrooted(WhileNavigationTrigger* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Navigation::Navigation__RemoveHandler(NULL, __this->PageContext(), ::uNewDelegateVirt(::app::Fuse::Navigation::NavigationHandler__typeof(), __this, offsetof(WhileNavigationTrigger__uType, __fp_OnNavigationStateChanged)));
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

void WhileNavigationTrigger__set_Limit(WhileNavigationTrigger* __this, float value)
{
    __this->_limit = value;
    __this->_hasLimit = true;
}

void WhileNavigationTrigger__set_Threshold(WhileNavigationTrigger* __this, float value)
{
    __this->_threshold = value;
}

}}}
