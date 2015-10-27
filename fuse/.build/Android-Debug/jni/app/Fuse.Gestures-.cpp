#include <app/Experimental.Physics.BasicBoundedRegion2D.h>
#include <app/Experimental.Physics.BoundedRegion2D.h>
#include <app/Experimental.Physics.DestinationSimulation__float4.h>
#include <app/Experimental.Physics.MotionSimulation__float.h>
#include <app/Experimental.Physics.MotionSimulation__float2.h>
#include <app/Experimental.Physics.MotionSimulation__float4.h>
#include <app/Experimental.Physics.PointerVelocity__float.h>
#include <app/Experimental.Physics.PointerVelocity__float2.h>
#include <app/Experimental.Physics.Simulation.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Entities.Transform3D.h>
#include <app/Fuse.Gestures.Clicked.h>
#include <app/Fuse.Gestures.ClickedArgs.h>
#include <app/Fuse.Gestures.ClickedHandler.h>
#include <app/Fuse.Gestures.Clicker.h>
#include <app/Fuse.Gestures.ClickerEventHandler.h>
#include <app/Fuse.Gestures.ClickerTrigger.h>
#include <app/Fuse.Gestures.DegreeSpan.h>
#include <app/Fuse.Gestures.Edge.h>
#include <app/Fuse.Gestures.KeepFocusInView.h>
#include <app/Fuse.Gestures.KeepInViewCommon.h>
#include <app/Fuse.Gestures.ScrollableGoto.h>
#include <app/Fuse.Gestures.ScrollDirections.h>
#include <app/Fuse.Gestures.Scroller.h>
#include <app/Fuse.Gestures.Scroller_MoveUserFlags.h>
#include <app/Fuse.Gestures.SwipeGestureHelper.h>
#include <app/Fuse.Gestures.Trackball.h>
#include <app/Fuse.Gestures.Trackball_MoveMode.h>
#include <app/Fuse.Gestures.WhileClickerTrigger.h>
#include <app/Fuse.Gestures.WhilePressed.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.FocusGainedArgs.h>
#include <app/Fuse.Input.FocusGainedHandler.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Fuse.Input.PointerMovedArgs.h>
#include <app/Fuse.Input.PointerMovedHandler.h>
#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Input.PointerPressedHandler.h>
#include <app/Fuse.Input.PointerReleasedArgs.h>
#include <app/Fuse.Input.PointerReleasedHandler.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_Focus-5b05867c.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_Poin-b0dbd2da.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_Po-bf1c51b8.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_P-40044f7c.h>
#include <app/Fuse.PlacedHandler.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.RequestBringIntoViewArgs.h>
#include <app/Fuse.RequestBringIntoViewHandler.h>
#include <app/Fuse.Time.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Fuse.Triggers.WhileTrigger.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Fuse.UpdateStage.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Clock.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.PointerType.h>
#include <app/Uno.Quaternion.h>
#include <app/Uno.String.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Gestures {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Clicked__uType* Clicked__typeof()
{
    static ::uStaticStrong<Clicked__uType*> type;
    if (type != NULL) return type;

    type = (Clicked__uType*)::uAllocClassType(sizeof(Clicked__uType), "Fuse.Gestures.Clicked", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Gestures::ClickerTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Clicked__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Clicked__OnUnrooted;

    type->SetStrongRefs(
        "Handler", offsetof(Clicked, Handler));

    return type;
}

void Clicked___ObjInit_3(Clicked* __this)
{
    ::app::Fuse::Gestures::ClickerTrigger___ObjInit_2(__this);
}

Clicked* Clicked__New_1(::uStatic* __this)
{
    Clicked* inst = (Clicked*)::uAllocObject(sizeof(Clicked), Clicked__typeof());
    inst->_ObjInit_3();
    return inst;
}

void Clicked__OnClicked(Clicked* __this, ::app::Fuse::Input::PointerEventArgs* args, int clickCount)
{
    __this->Pulse();

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Handler, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Handler)->InvokeVoid< ::uObject*, ::app::Fuse::Gestures::ClickedArgs*>((::uObject*)__this, ::app::Fuse::Gestures::ClickedArgs__New_3(NULL, args, __this->Node()));
    }
}

void Clicked__OnRooted(Clicked* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Gestures::ClickerTrigger__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->add_ClickedEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)Clicked__OnClicked, __this));
}

void Clicked__OnUnrooted(Clicked* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->remove_ClickedEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)Clicked__OnClicked, __this));
    ::app::Fuse::Gestures::ClickerTrigger__OnUnrooted(__this, elm);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ClickedArgs__uType* ClickedArgs__typeof()
{
    static ::uStaticStrong<ClickedArgs__uType*> type;
    if (type != NULL) return type;

    type = (ClickedArgs__uType*)::uAllocClassType(sizeof(ClickedArgs__uType), "Fuse.Gestures.ClickedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::CustomPointerEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(ClickedArgs__uType, __interface_0));

    return type;
}

void ClickedArgs___ObjInit_4(ClickedArgs* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::CustomPointerEventArgs___ObjInit_3(__this, args, node);
}

ClickedArgs* ClickedArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node)
{
    ClickedArgs* inst = (ClickedArgs*)::uAllocObject(sizeof(ClickedArgs), ClickedArgs__typeof());
    inst->_ObjInit_4(args, node);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ClickedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Gestures.ClickedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Gestures::ClickedArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> Clicker___clickerProperty;

Clicker__uType* Clicker__typeof()
{
    static ::uStaticStrong<Clicker__uType*> type;
    if (type != NULL) return type;

    type = (Clicker__uType*)::uAllocClassType(sizeof(Clicker__uType), "Fuse.Gestures.Clicker", false, 0, 6, 0);

    type->SetStrongRefs(
        "_lastArgs", offsetof(Clicker, _lastArgs),
        "_node", offsetof(Clicker, _node),
        "ClickedEvent", offsetof(Clicker, ClickedEvent),
        "LongPressedEvent", offsetof(Clicker, LongPressedEvent),
        "PressingEvent", offsetof(Clicker, PressingEvent),
        "TappedEvent", offsetof(Clicker, TappedEvent));

    return type;
}

void Clicker___ObjInit(Clicker* __this, ::app::Fuse::Node* node)
{
    __this->_maxTapDistanceMoved = 25.0f;
    __this->_maxTapTimeHeld = 0.3f;
    __this->_maxDoubleInterval = 0.3f;
    __this->_longPressTimeout = 0.5f;
    __this->_attachCount = 1;
    __this->_down = -1;
    __this->_node = node;
}

void Clicker___TypeInit(::uStatic* __this)
{
    Clicker___clickerProperty = ::app::Fuse::Properties__CreateHandle(NULL);
}

void Clicker__add_ClickedEvent(Clicker* __this, ::uDelegate* value)
{
    __this->ClickedEvent = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ClickedEvent, (::uDelegate*)value), ::app::Fuse::Gestures::ClickerEventHandler__typeof());
}

void Clicker__add_PressingEvent(Clicker* __this, ::uDelegate* value)
{
    __this->PressingEvent = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PressingEvent, (::uDelegate*)value), ::app::Fuse::Gestures::ClickerEventHandler__typeof());
}

void Clicker__add_TappedEvent(Clicker* __this, ::uDelegate* value)
{
    __this->TappedEvent = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->TappedEvent, (::uDelegate*)value), ::app::Fuse::Gestures::ClickerEventHandler__typeof());
}

Clicker* Clicker__AttachClicker(::uStatic* __this, ::app::Fuse::Node* elm)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->TryGet(Clicker___clickerProperty, &v))
    {
        Clicker* c = ::uAs< Clicker*>(v, Clicker__typeof());
        ::uPtr< Clicker*>(c)->_attachCount++;
        return c;
    }

    Clicker* nc = Clicker__New_1(NULL, elm);
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(elm)->Properties())->Set(Clicker___clickerProperty, (::uObject*)nc);
    ::uPtr< Clicker*>(nc)->OnRooted();
    return nc;
}

void Clicker__Detach(Clicker* __this)
{
    __this->_attachCount--;

    if (__this->_attachCount == 0)
    {
        __this->OnUnrooted();
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(__this->_node)->Properties())->Clear(Clicker___clickerProperty);
    }
}

void Clicker__DoneCapture(Clicker* __this)
{
    __this->_down = -1;
    __this->ReleaseUpdate();

    if (__this->_hovering && ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PressingEvent, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PressingEvent)->InvokeVoid< ::app::Fuse::Input::PointerEventArgs*, int>(__this->_lastArgs, 0);
    }

    __this->_hovering = false;
}

bool Clicker__NeedCapture(Clicker* __this)
{
    return (((__this->_maybeTap && ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TappedEvent, NULL)) || ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ClickedEvent, NULL)) || ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->LongPressedEvent, NULL)) || ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PressingEvent, NULL);
}

Clicker* Clicker__New_1(::uStatic* __this, ::app::Fuse::Node* node)
{
    Clicker* inst = (Clicker*)::uAllocObject(sizeof(Clicker), Clicker__typeof());
    inst->_ObjInit(node);
    return inst;
}

void Clicker__OnLostCapture(Clicker* __this)
{
    __this->DoneCapture();
    __this->_tapCount = 0;
    __this->_clickCount = 0;
}

void Clicker__OnPointerMoved(Clicker* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args)
{
    if (__this->_down != ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->PointIndex())
    {
        return;
    }

    float distance = ::app::Uno::Vector__Length_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint(), __this->_startCoord));
    double deltaTime = ::app::Fuse::Time__get_FrameTime(NULL) - __this->_startTime;

    if ((distance > __this->_maxTapDistanceMoved) || (deltaTime > (double)__this->_maxTapTimeHeld))
    {
        __this->_maybeTap = false;
    }

    if (!__this->NeedCapture())
    {
        ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->ReleaseSoftCapture((::uObject*)__this);
        __this->DoneCapture();
    }

    bool hoverNow = ::uPtr< ::app::Fuse::Node*>(__this->_node)->GetHitWindowPoint(args->WindowPoint()) != NULL;

    if (hoverNow != __this->_hovering)
    {
        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PressingEvent, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->PressingEvent)->InvokeVoid< ::app::Fuse::Input::PointerEventArgs*, int>((::app::Fuse::Input::PointerEventArgs*)args, hoverNow ? 1 : 0);
        }

        __this->_hovering = hoverNow;
    }

    __this->_lastArgs = (::app::Fuse::Input::PointerEventArgs*)args;
}

void Clicker__OnPointerPressed(Clicker* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args)
{
    if ((__this->_down != -1) || !::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->TrySoftCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Clicker__OnLostCapture, __this), NULL))
    {
        return;
    }

    double delta = ::app::Fuse::Time__get_FrameTime(NULL) - __this->_lastUpTime;

    if (delta > (double)__this->_maxDoubleInterval)
    {
        __this->_tapCount = 0;
        __this->_clickCount = 0;
    }

    __this->_down = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->PointIndex();
    __this->_startCoord = args->WindowPoint();
    __this->_startTime = ::app::Fuse::Time__get_FrameTime(NULL);
    __this->_maybeTap = true;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->LongPressedEvent, NULL))
    {
        __this->_hasUpdate = true;
        ::uPtr< ::app::Fuse::Node*>(__this->_node)->add_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Clicker__OnUpdate, __this));
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PressingEvent, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PressingEvent)->InvokeVoid< ::app::Fuse::Input::PointerEventArgs*, int>((::app::Fuse::Input::PointerEventArgs*)args, 1);
    }

    __this->_lastArgs = (::app::Fuse::Input::PointerEventArgs*)args;
    __this->_hovering = true;
}

void Clicker__OnPointerReleased(Clicker* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    if (__this->_down != ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->PointIndex())
    {
        return;
    }

    ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->ReleaseSoftCapture((::uObject*)__this);
    double deltaTime = ::app::Fuse::Time__get_FrameTime(NULL) - __this->_startTime;

    if (__this->_maybeTap && (deltaTime <= (double)__this->_maxTapTimeHeld))
    {
        __this->_tapCount++;

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->TappedEvent, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->TappedEvent)->InvokeVoid< ::app::Fuse::Input::PointerEventArgs*, int>((::app::Fuse::Input::PointerEventArgs*)args, __this->_tapCount);
        }
    }
    else
    {
        __this->_tapCount = 0;
    }

    if (::uPtr< ::app::Fuse::Node*>(__this->_node)->GetHitWindowPoint(args->WindowPoint()) != NULL)
    {
        __this->_clickCount++;

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ClickedEvent, NULL))
        {
            ::uPtr< ::uDelegate*>(__this->ClickedEvent)->InvokeVoid< ::app::Fuse::Input::PointerEventArgs*, int>((::app::Fuse::Input::PointerEventArgs*)args, __this->_clickCount);
        }
    }
    else
    {
        __this->_clickCount = 0;
    }

    if (__this->_hovering && ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PressingEvent, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PressingEvent)->InvokeVoid< ::app::Fuse::Input::PointerEventArgs*, int>((::app::Fuse::Input::PointerEventArgs*)args, 0);
    }

    __this->_hovering = false;
    __this->DoneCapture();
    __this->_lastUpTime = ::app::Fuse::Time__get_FrameTime(NULL);
    __this->_lastArgs = (::app::Fuse::Input::PointerEventArgs*)args;
}

void Clicker__OnRooted(Clicker* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->AddHandler(__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)Clicker__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->AddHandler(__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)Clicker__OnPointerReleased, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->AddHandler(__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)Clicker__OnPointerMoved, __this));
}

void Clicker__OnUnrooted(Clicker* __this)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->RemoveHandler(__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)Clicker__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->RemoveHandler(__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)Clicker__OnPointerReleased, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->AddHandler(__this->_node, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)Clicker__OnPointerMoved, __this));
}

void Clicker__OnUpdate(Clicker* __this, ::uObject* s, ::uObject* a)
{
    double elapsed = ::app::Fuse::Time__get_FrameTime(NULL) - __this->_startTime;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->LongPressedEvent, NULL) && (elapsed > (double)__this->_longPressTimeout))
    {
        ::uPtr< ::uDelegate*>(__this->LongPressedEvent)->InvokeVoid< ::app::Fuse::Input::PointerEventArgs*, int>(__this->_lastArgs, 0);
        ::app::Fuse::Input::Pointer__ReleaseSoftCapture(NULL, __this->_down, (::uObject*)__this);
        __this->DoneCapture();
    }
}

void Clicker__ReleaseUpdate(Clicker* __this)
{
    if (__this->_hasUpdate)
    {
        ::uPtr< ::app::Fuse::Node*>(__this->_node)->remove_Update(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Clicker__OnUpdate, __this));
        __this->_hasUpdate = false;
    }
}

void Clicker__remove_ClickedEvent(Clicker* __this, ::uDelegate* value)
{
    __this->ClickedEvent = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ClickedEvent, (::uDelegate*)value), ::app::Fuse::Gestures::ClickerEventHandler__typeof());
}

void Clicker__remove_PressingEvent(Clicker* __this, ::uDelegate* value)
{
    __this->PressingEvent = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->PressingEvent, (::uDelegate*)value), ::app::Fuse::Gestures::ClickerEventHandler__typeof());
}

void Clicker__remove_TappedEvent(Clicker* __this, ::uDelegate* value)
{
    __this->TappedEvent = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->TappedEvent, (::uDelegate*)value), ::app::Fuse::Gestures::ClickerEventHandler__typeof());
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* ClickerEventHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Gestures.ClickerEventHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::app::Fuse::Input::PointerEventArgs__typeof(),
        ::app::Uno::Int__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ClickerTrigger__uType* ClickerTrigger__typeof()
{
    static ::uStaticStrong<ClickerTrigger__uType*> type;
    if (type != NULL) return type;

    type = (ClickerTrigger__uType*)::uAllocClassType(sizeof(ClickerTrigger__uType), "Fuse.Gestures.ClickerTrigger", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Trigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ClickerTrigger__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))ClickerTrigger__OnUnrooted;

    type->SetStrongRefs(
        "Clicker", offsetof(ClickerTrigger, Clicker));

    return type;
}

void ClickerTrigger___ObjInit_2(ClickerTrigger* __this)
{
    ::app::Fuse::Triggers::Trigger___ObjInit_1(__this);
}

void ClickerTrigger__OnRooted(ClickerTrigger* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    __this->Clicker = ::app::Fuse::Gestures::Clicker__AttachClicker(NULL, elm);
}

void ClickerTrigger__OnUnrooted(ClickerTrigger* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->Detach();
    __this->Clicker = NULL;
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DegreeSpan__uType* DegreeSpan__typeof()
{
    static ::uStaticStrong<DegreeSpan__uType*> type;
    if (type != NULL) return type;

    type = (DegreeSpan__uType*)::uAllocClassType(sizeof(DegreeSpan__uType), "Fuse.Gestures.DegreeSpan", false, 0, 0, 0);

    return type;
}

void DegreeSpan___ObjInit(DegreeSpan* __this, float a, float b)
{
    __this->_a = a;
    __this->_b = b;
}

bool DegreeSpan__IsWithinBounds(DegreeSpan* __this, float x)
{
    float angle1 = __this->_a;
    float angle2 = __this->_b;
    float rAngle = ::app::Uno::Math__Mod_4(NULL, ::app::Uno::Math__Mod_4(NULL, angle2 - angle1, 360.0f) + 360.0f, 360.0f);

    if (rAngle >= 180.0f)
    {
        float a = angle1;
        angle1 = angle2;
        angle2 = a;
    }

    if (angle1 <= angle2)
    {
        return (x >= angle1) && (x <= angle2);
    }
    else
    {
        return (x >= angle2) || (x <= angle2);
    }
}

DegreeSpan* DegreeSpan__New_1(::uStatic* __this, float a, float b)
{
    DegreeSpan* inst = (DegreeSpan*)::uAllocObject(sizeof(DegreeSpan), DegreeSpan__typeof());
    inst->_ObjInit(a, b);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Edge__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Gestures.Edge", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeepFocusInView__uType* KeepFocusInView__typeof()
{
    static ::uStaticStrong<KeepFocusInView__uType*> type;
    if (type != NULL) return type;

    type = (KeepFocusInView__uType*)::uAllocClassType(sizeof(KeepFocusInView__uType), "Fuse.Gestures.KeepFocusInView", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Gestures::KeepInViewCommon__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))KeepFocusInView__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))KeepFocusInView__OnUnrooted;

    return type;
}

void KeepFocusInView___ObjInit_2(KeepFocusInView* __this)
{
    ::app::Fuse::Gestures::KeepInViewCommon___ObjInit_1(__this);
}

KeepFocusInView* KeepFocusInView__New_2(::uStatic* __this)
{
    KeepFocusInView* inst = (KeepFocusInView*)::uAllocObject(sizeof(KeepFocusInView), KeepFocusInView__typeof());
    inst->_ObjInit_2();
    return inst;
}

void KeepFocusInView__OnGotFocus(KeepFocusInView* __this, ::uObject* s, ::app::Fuse::Input::FocusGainedArgs* fga)
{
    __this->Target(::app::Fuse::Input::Focus__get_FocusedNode(NULL));
}

void KeepFocusInView__OnLostFocus(KeepFocusInView* __this, ::uObject* s, ::uObject* a)
{
    __this->Target(NULL);
}

void KeepFocusInView__OnRooted(KeepFocusInView* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Gestures::KeepInViewCommon__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)KeepFocusInView__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->AddHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)KeepFocusInView__OnLostFocus, __this));
}

void KeepFocusInView__OnUnrooted(KeepFocusInView* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(::app::Fuse::Input::Focus__get_Gained(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusGainedHandler__typeof(), (const void*)KeepFocusInView__OnGotFocus, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(::app::Fuse::Input::Focus__get_Lost(NULL))->RemoveHandler(elm, ::uNewDelegateNonVirt(::app::Fuse::Input::FocusLostHandler__typeof(), (const void*)KeepFocusInView__OnLostFocus, __this));
    ::app::Fuse::Gestures::KeepInViewCommon__OnUnrooted(__this, elm);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeepInViewCommon__uType* KeepInViewCommon__typeof()
{
    static ::uStaticStrong<KeepInViewCommon__uType*> type;
    if (type != NULL) return type;

    type = (KeepInViewCommon__uType*)::uAllocClassType(sizeof(KeepInViewCommon__uType), "Fuse.Gestures.KeepInViewCommon", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))KeepInViewCommon__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))KeepInViewCommon__OnUnrooted;

    type->SetStrongRefs(
        "_rootElement", offsetof(KeepInViewCommon, _rootElement),
        "_target", offsetof(KeepInViewCommon, _target));

    return type;
}

void KeepInViewCommon___ObjInit_1(KeepInViewCommon* __this)
{
    ::app::Fuse::Behavior___ObjInit(__this);
}

void KeepInViewCommon__AttachElement(KeepInViewCommon* __this)
{
    if (__this->_target == NULL)
    {
        return;
    }

    ::uPtr< ::app::Fuse::Elements::Element*>(__this->_target)->add_Placed(::uNewDelegateNonVirt(::app::Fuse::PlacedHandler__typeof(), (const void*)KeepInViewCommon__Update, __this));
    __this->_attached = true;
    __this->Update(NULL, NULL);
}

::app::Fuse::Node* KeepInViewCommon__get_Target(KeepInViewCommon* __this)
{
    return (::app::Fuse::Node*)__this->_target;
}

void KeepInViewCommon__OnRooted(KeepInViewCommon* __this, ::app::Fuse::Node* elm)
{
    __this->_rootElement = ::uAs< ::app::Fuse::Elements::Element*>(elm, ::app::Fuse::Elements::Element__typeof());

    if (__this->_rootElement != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_rootElement)->add_Placed(::uNewDelegateNonVirt(::app::Fuse::PlacedHandler__typeof(), (const void*)KeepInViewCommon__Update, __this));
        __this->AttachElement();
    }
}

void KeepInViewCommon__OnUnrooted(KeepInViewCommon* __this, ::app::Fuse::Node* elm)
{
    if (__this->_rootElement != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_rootElement)->remove_Placed(::uNewDelegateNonVirt(::app::Fuse::PlacedHandler__typeof(), (const void*)KeepInViewCommon__Update, __this));
        __this->ReleaseElement();
    }
}

void KeepInViewCommon__ReleaseElement(KeepInViewCommon* __this)
{
    if (!__this->_attached)
    {
        return;
    }

    ::uPtr< ::app::Fuse::Elements::Element*>(__this->_target)->remove_Placed(::uNewDelegateNonVirt(::app::Fuse::PlacedHandler__typeof(), (const void*)KeepInViewCommon__Update, __this));
    __this->_attached = false;
}

void KeepInViewCommon__set_Target(KeepInViewCommon* __this, ::app::Fuse::Node* value)
{
    __this->ReleaseElement();
    ::app::Fuse::Node* v = value;

    while (v != NULL)
    {
        __this->_target = ::uAs< ::app::Fuse::Elements::Element*>(v, ::app::Fuse::Elements::Element__typeof());

        if (__this->_target != NULL)
        {
            break;
        }

        v = ::uPtr< ::app::Fuse::Node*>(v)->Parent();
    }

    __this->AttachElement();
}

void KeepInViewCommon__Update(KeepInViewCommon* __this, ::uObject* s, ::uObject* a)
{
    if (__this->_target != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_target)->BringIntoView();
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/Gestures/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ScrollableGoto__uType* ScrollableGoto__typeof()
{
    static ::uStaticStrong<ScrollableGoto__uType*> type;
    if (type != NULL) return type;

    type = (ScrollableGoto__uType*)::uAllocClassType(sizeof(ScrollableGoto__uType), "Fuse.Gestures.ScrollableGoto", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))ScrollableGoto__Perform;

    type->SetStrongRefs(
        "_Target", offsetof(ScrollableGoto, _Target));

    return type;
}

::app::Fuse::Controls::ScrollView* ScrollableGoto__get_Target(ScrollableGoto* __this)
{
    return __this->_Target;
}

void ScrollableGoto__Perform(ScrollableGoto* __this, ::app::Fuse::Node* target)
{
    if (__this->Target() == NULL)
    {
        return;
    }

    if (__this->_hasRelativePosition)
    {
        ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Target())->Goto(::app::Uno::Float2__op_Addition_2(NULL, ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Target())->MinScroll(), ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Target())->MaxScroll(), ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Target())->MinScroll()), __this->_relativePosition)));
    }
    else if (__this->_hasPosition)
    {
        ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->Target())->Goto(__this->_position);
    }
}

void ScrollableGoto__set_Target(ScrollableGoto* __this, ::app::Fuse::Controls::ScrollView* value)
{
    __this->_Target = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/Gestures/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* ScrollDirections__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Gestures.ScrollDirections", ::app::Uno::Int__typeof(), 8);

    type->SetLiterals(
        "Left", 1LL,
        "Right", 2LL,
        "Up", 4LL,
        "Down", 8LL,
        "Horizontal", 3LL,
        "Vertical", 12LL,
        "Both", 15LL,
        "All", 15LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/Gestures/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> Scroller___horizontalGesture;
::uStaticStrong< ::app::Fuse::Gestures::SwipeGestureHelper*> Scroller___verticalGesture;

Scroller__uType* Scroller__typeof()
{
    static ::uStaticStrong<Scroller__uType*> type;
    if (type != NULL) return type;

    type = (Scroller__uType*)::uAllocClassType(sizeof(Scroller__uType), "Fuse.Gestures.Scroller", false, 0, 4, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Scroller__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Scroller__OnUnrooted;

    type->SetStrongRefs(
        "_pendingBringIntoView", offsetof(Scroller, _pendingBringIntoView),
        "_region", offsetof(Scroller, _region),
        "_scrollable", offsetof(Scroller, _scrollable),
        "_velocity", offsetof(Scroller, _velocity));

    return type;
}

void Scroller___ObjInit_1(Scroller* __this)
{
    __this->_region = (::uObject*)::app::Experimental::Physics::BasicBoundedRegion2D__CreatePoints(NULL);
    __this->_velocity = ::app::Experimental::Physics::PointerVelocity__float2__New_1(NULL);
    __this->_delayStart = true;
    __this->_userScroll = true;
    __this->_down = -1;
    ::app::Fuse::Behavior___ObjInit(__this);
}

void Scroller___TypeInit(::uStatic* __this)
{
    ::uArray* array_123;
    ::uArray* array_124;
    Scroller___horizontalGesture = ::app::Fuse::Gestures::SwipeGestureHelper__New_1(NULL, 10.0f, (array_123 = ::uNewArray(::app::Fuse::Gestures::DegreeSpan__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(0) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, 45.0f, 135.0f), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(1) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, -45.0f, -135.0f), array_123));
    Scroller___verticalGesture = ::app::Fuse::Gestures::SwipeGestureHelper__New_1(NULL, 10.0f, (array_124 = ::uNewArray(::app::Fuse::Gestures::DegreeSpan__typeof(), 3), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(0) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, -45.0f, 45.0f), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(1) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, -135.0f, -180.0f), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::app::Fuse::Gestures::DegreeSpan*>(2) = ::app::Fuse::Gestures::DegreeSpan__New_1(NULL, 135.0f, 180.0f), array_124));
}

void Scroller__CheckLimits(Scroller* __this)
{
    __this->UpdateScrollMax();

    if (::app::Experimental::Physics::Simulation::IsStatic(::uPtr< ::uObject*>(__this->_region)))
    {
        ::app::Experimental::Physics::BoundedRegion2D::EndUser(::uPtr< ::uObject*>(__this->_region), ::app::Uno::Float2__New_1(NULL, 0.0f));
    }

    __this->CheckNeedUpdated(false);
}

void Scroller__CheckNeedUpdated(Scroller* __this, bool off)
{
    bool needUpdated = !::app::Experimental::Physics::Simulation::IsStatic(::uPtr< ::uObject*>(__this->_region));

    if (needUpdated == __this->_hasUpdated)
    {
        return;
    }

    if (needUpdated)
    {
        ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Scroller__OnUpdated, __this), 0);
        __this->_hasUpdated = true;
    }
    else if (off)
    {
        ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Scroller__OnUpdated, __this), 0);
        __this->_hasUpdated = false;
    }
}

::app::Uno::Float2 Scroller__FromWindow(Scroller* __this, ::app::Uno::Float2 p)
{
    return ::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->Parent())->WindowToLocal(p);
}

bool Scroller__get_UserScroll(Scroller* __this)
{
    return __this->_userScroll;
}

void Scroller__Goto(Scroller* __this, ::app::Uno::Float2 position)
{
    if (__this->_scrollable == NULL)
    {
        return;
    }

    __this->UpdateScrollMax();
    ::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_region), ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->ScrollPosition());
    ::app::Experimental::Physics::BoundedRegion2D::MoveTo(::uPtr< ::uObject*>(__this->_region), position);
    __this->CheckNeedUpdated(false);
}

bool Scroller__HardCapture(Scroller* __this, ::app::Fuse::Input::PointerEventArgs* args)
{
    __this->_isHardCapture = ::uPtr< ::app::Fuse::Input::PointerEventArgs*>(args)->TryHardCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Scroller__OnLostCapture, __this), NULL);

    if (!__this->_isHardCapture)
    {
        __this->OnLostCapture();
    }

    return __this->_isHardCapture;
}

void Scroller__MoveUser(Scroller* __this, int flags)
{
    ::app::Uno::Float2 diff = ::app::Uno::Float2__op_Subtraction_2(NULL, __this->FromWindow(__this->_prevPos), __this->FromWindow(__this->_pointerPos));

    if ((flags & 2) == 2)
    {
        diff = ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    __this->_prevPos = __this->_pointerPos;
    double t = ::app::Uno::Diagnostics::Clock__GetSeconds(NULL);
    double elapsed = t - __this->_prevTime;
    __this->_prevTime = t;

    if ((flags & 1) == 1)
    {
        ::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_region), ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->ScrollPosition());
        ::app::Experimental::Physics::BoundedRegion2D::StepUser(::uPtr< ::uObject*>(__this->_region), diff);
    }

    ::uPtr< ::app::Experimental::Physics::PointerVelocity__float2*>(__this->_velocity)->AddSample(__this->FromWindow(__this->_pointerPos), (float)elapsed, !__this->_isHardCapture);
}

Scroller* Scroller__New_1(::uStatic* __this)
{
    Scroller* inst = (Scroller*)::uAllocObject(sizeof(Scroller), Scroller__typeof());
    inst->_ObjInit_1();
    return inst;
}

void Scroller__OnLostCapture(Scroller* __this)
{
    __this->_down = -1;
    ::app::Experimental::Physics::BoundedRegion2D::EndUser(::uPtr< ::uObject*>(__this->_region), ::app::Uno::Float2__New_1(NULL, 0.0f));
    ::app::Fuse::Input::Pointer__ReleaseAllCaptures(NULL, (::uObject*)__this);
    __this->CheckNeedUpdated(false);
}

void Scroller__OnPointerMoved(Scroller* __this, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args)
{
    if (__this->_down != ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->PointIndex())
    {
        return;
    }

    if (!::app::Fuse::Input::Pointer__IsPressed(NULL, __this->_down))
    {
        __this->OnLostCapture();
    }

    if (!__this->_isHardCapture)
    {
        __this->_softCaptureCurrent = ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint();
        ::app::Uno::Float2 diff = ::app::Uno::Float2__op_Subtraction_2(NULL, __this->_softCaptureCurrent, __this->_softCaptureStart);

        if (::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->AllowedScrollDirections() == 15)
        {
            if (::app::Uno::Vector__Length_2(NULL, diff) > 10.0f)
            {
                __this->HardCapture((::app::Fuse::Input::PointerEventArgs*)args);
            }
        }

        if (::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->AllowedScrollDirections() == 3)
        {
            if (::uPtr< ::app::Fuse::Gestures::SwipeGestureHelper*>(Scroller___horizontalGesture)->IsWithinBounds(diff))
            {
                __this->HardCapture((::app::Fuse::Input::PointerEventArgs*)args);
            }
        }

        if (::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->AllowedScrollDirections() == 12)
        {
            if (::uPtr< ::app::Fuse::Gestures::SwipeGestureHelper*>(Scroller___verticalGesture)->IsWithinBounds(diff))
            {
                __this->HardCapture((::app::Fuse::Input::PointerEventArgs*)args);
            }
        }
    }

    __this->_pointerPos = ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint();
    __this->MoveUser((!__this->_delayStart || __this->_isHardCapture) ? 1 : 0);
}

void Scroller__OnPointerPressed(Scroller* __this, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args)
{
    if (__this->_down == -1)
    {
        bool captured = false;
        __this->_isHardCapture = false;

        if (::app::Uno::Vector__Length_2(NULL, ::app::Experimental::Physics::MotionSimulation__float2::Velocity(::uPtr< ::uObject*>(__this->_region))) > 100.0f)
        {
            captured = __this->HardCapture((::app::Fuse::Input::PointerEventArgs*)args);
        }
        else
        {
            captured = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->TrySoftCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Scroller__OnLostCapture, __this), NULL);
        }

        if (captured)
        {
            __this->_softCaptureStart = __this->_softCaptureCurrent = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->WindowPoint();
            __this->_down = args->PointIndex();
            __this->_pointerPos = args->WindowPoint();
            __this->_prevPos = __this->_startPos = __this->_pointerPos;
            __this->_prevTime = ::app::Uno::Diagnostics::Clock__GetSeconds(NULL);
            ::uPtr< ::app::Experimental::Physics::PointerVelocity__float2*>(__this->_velocity)->Reset_1(__this->FromWindow(__this->_pointerPos), ::app::Uno::Float2__New_1(NULL, 0.0f));
            ::app::Experimental::Physics::BoundedRegion2D::StartUser(::uPtr< ::uObject*>(__this->_region));
            ::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_region), ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->ScrollPosition());
            __this->CheckNeedUpdated(false);
        }
    }
}

void Scroller__OnPointerReleased(Scroller* __this, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    if (__this->_down == ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->PointIndex())
    {
        if (__this->_delayStart && !__this->_isHardCapture)
        {
            __this->OnLostCapture();
            return;
        }

        __this->_down = -1;
        ::app::Fuse::Input::Pointer__ReleaseAllCaptures(NULL, (::uObject*)__this);

        if (::app::Experimental::Physics::BoundedRegion2D::IsUser(::uPtr< ::uObject*>(__this->_region)))
        {
            __this->_pointerPos = ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->WindowPoint();
            __this->MoveUser(3);
            ::app::Experimental::Physics::BoundedRegion2D::EndUser(::uPtr< ::uObject*>(__this->_region), ::app::Uno::Float2__op_UnaryNegation(NULL, ::uPtr< ::app::Experimental::Physics::PointerVelocity__float2*>(__this->_velocity)->CurrentVelocity()));
            __this->CheckNeedUpdated(false);
        }
    }
}

void Scroller__OnRequestBringIntoView(Scroller* __this, ::uObject* sender, ::app::Fuse::RequestBringIntoViewArgs* args)
{
    __this->_pendingBringIntoView = ::uPtr< ::app::Fuse::RequestBringIntoViewArgs*>(args)->Node();
    ::app::Fuse::UpdateManager__PerformNextFrame(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Scroller__PerformBringIntoView, __this), 0);
}

void Scroller__OnRooted(Scroller* __this, ::app::Fuse::Node* elm)
{
    __this->_scrollable = ::uAs< ::app::Fuse::Controls::ScrollView*>(elm, ::app::Fuse::Controls::ScrollView__typeof());

    if (__this->_scrollable == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Scroller can only be used in a ScrollView")));
    }

    ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->add_RequestBringIntoView(::uNewDelegateNonVirt(::app::Fuse::RequestBringIntoViewHandler__typeof(), (const void*)Scroller__OnRequestBringIntoView, __this));
    __this->UpdatePointerEvents(false);
}

void Scroller__OnUnrooted(Scroller* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->remove_RequestBringIntoView(::uNewDelegateNonVirt(::app::Fuse::RequestBringIntoViewHandler__typeof(), (const void*)Scroller__OnRequestBringIntoView, __this));

    if (__this->_hasUpdated)
    {
        __this->_hasUpdated = false;
        ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Scroller__OnUpdated, __this), 0);
    }

    __this->UpdatePointerEvents(true);
    __this->_scrollable = NULL;
}

void Scroller__OnUpdated(Scroller* __this)
{
    __this->UpdateScrollMax();
    ::app::Experimental::Physics::Simulation::Update(::uPtr< ::uObject*>(__this->_region), ::app::Fuse::Time__get_FrameInterval(NULL));
    __this->SetScrollPosition(::app::Experimental::Physics::MotionSimulation__float2::Position(::uPtr< ::uObject*>(__this->_region)));
    __this->CheckNeedUpdated(true);
}

void Scroller__PerformBringIntoView(Scroller* __this)
{
    if (__this->_pendingBringIntoView == NULL)
    {
        return;
    }

    __this->Goto(::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->GetNodeScrollPosition(__this->_pendingBringIntoView));
    __this->_pendingBringIntoView = NULL;
}

void Scroller__set_UserScroll(Scroller* __this, bool value)
{
    if (__this->_userScroll != value)
    {
        __this->_userScroll = value;
        __this->UpdatePointerEvents(false);
        __this->OnLostCapture();
    }
}

void Scroller__SetScrollPosition(Scroller* __this, ::app::Uno::Float2 position)
{
    if (__this->_scrollable == NULL)
    {
        return;
    }

    if (!((::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->AllowedScrollDirections() & 3) == 3))
    {
        position.X = 0.0f;
    }

    if (!((::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->AllowedScrollDirections() & 12) == 12))
    {
        position.Y = 0.0f;
    }

    if (::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->SnapToPixels())
    {
        position = ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->InternSnap(position);
    }

    if (::app::Uno::Vector__LengthSquared(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, position, ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->ScrollPosition())) > 1e-05f)
    {
        if (!::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->SnapMinTransform())
        {
            position = ::app::Uno::Math__Max_10(NULL, ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->MinScroll(), position);
        }

        if (!::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->SnapMaxTransform())
        {
            position = ::app::Uno::Math__Min_13(NULL, ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->MaxScroll(), position);
        }

        ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->SetScrollPosition(position, (::uObject*)__this);
    }
}

void Scroller__UpdatePointerEvents(Scroller* __this, bool forceOff)
{
    bool shouldListen = (!forceOff && (__this->_scrollable != NULL)) && __this->_userScroll;

    if (shouldListen == __this->_pointerListening)
    {
        return;
    }

    if (shouldListen)
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->AddHandler((::app::Fuse::Node*)__this->_scrollable, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)Scroller__OnPointerPressed, __this));
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->AddHandler((::app::Fuse::Node*)__this->_scrollable, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)Scroller__OnPointerMoved, __this));
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->AddHandler((::app::Fuse::Node*)__this->_scrollable, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)Scroller__OnPointerReleased, __this));
    }
    else if (__this->_scrollable != NULL)
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->RemoveHandler((::app::Fuse::Node*)__this->_scrollable, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)Scroller__OnPointerPressed, __this));
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->RemoveHandler((::app::Fuse::Node*)__this->_scrollable, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)Scroller__OnPointerMoved, __this));
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->RemoveHandler((::app::Fuse::Node*)__this->_scrollable, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)Scroller__OnPointerReleased, __this));
    }
    else
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid tear-down of pointer events")));
    }

    __this->_pointerListening = shouldListen;
}

void Scroller__UpdateScrollMax(Scroller* __this)
{
    if (__this->_scrollable == NULL)
    {
        return;
    }

    ::app::Experimental::Physics::BoundedRegion2D::MaxPosition(::uPtr< ::uObject*>(__this->_region), ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->MaxScroll());
    ::app::Experimental::Physics::BoundedRegion2D::MinPosition(::uPtr< ::uObject*>(__this->_region), ::uPtr< ::app::Fuse::Controls::ScrollView*>(__this->_scrollable)->MinScroll());
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/Gestures/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Scroller_MoveUserFlags__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Gestures.Scroller.MoveUserFlags", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "None", 0LL,
        "Started", 1LL,
        "Release", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SwipeGestureHelper__uType* SwipeGestureHelper__typeof()
{
    static ::uStaticStrong<SwipeGestureHelper__uType*> type;
    if (type != NULL) return type;

    type = (SwipeGestureHelper__uType*)::uAllocClassType(sizeof(SwipeGestureHelper__uType), "Fuse.Gestures.SwipeGestureHelper", false, 0, 1, 0);

    type->SetStrongRefs(
        "_spans", offsetof(SwipeGestureHelper, _spans));

    return type;
}

void SwipeGestureHelper___ObjInit(SwipeGestureHelper* __this, float lengthThreshold, ::uArray* spans)
{
    __this->_spans = spans;
    __this->_lengthThreshold = lengthThreshold;
}

bool SwipeGestureHelper__IsWithinBounds(SwipeGestureHelper* __this, ::app::Uno::Float2 vector)
{
    float length = ::app::Uno::Vector__Length_2(NULL, vector);

    if (length < __this->_lengthThreshold)
    {
        return false;
    }

    float angle = ::app::Uno::Math__RadiansToDegrees_3(NULL, ::app::Uno::Math__Atan2_1(NULL, vector.X, vector.Y));

    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_spans)->Length(); i++)
    {
        if (::uPtr< ::app::Fuse::Gestures::DegreeSpan*>(::uPtr< ::uArray*>(__this->_spans)->Item< ::app::Fuse::Gestures::DegreeSpan*>(i))->IsWithinBounds(angle))
        {
            return true;
        }
    }

    return false;
}

SwipeGestureHelper* SwipeGestureHelper__New_1(::uStatic* __this, float lengthThreshold, ::uArray* spans)
{
    SwipeGestureHelper* inst = (SwipeGestureHelper*)::uAllocObject(sizeof(SwipeGestureHelper), SwipeGestureHelper__typeof());
    inst->_ObjInit(lengthThreshold, spans);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Trackball__uType* Trackball__typeof()
{
    static ::uStaticStrong<Trackball__uType*> type;
    if (type != NULL) return type;

    type = (Trackball__uType*)::uAllocClassType(sizeof(Trackball__uType), "Fuse.Gestures.Trackball", false, 0, 6, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Trackball__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))Trackball__OnUnrooted;

    type->SetStrongRefs(
        "_angularVelocity", offsetof(Trackball, _angularVelocity),
        "_attractor", offsetof(Trackball, _attractor),
        "_friction", offsetof(Trackball, _friction),
        "_node", offsetof(Trackball, _node),
        "_transform", offsetof(Trackball, _transform),
        "_viewport", offsetof(Trackball, _viewport));

    return type;
}

void Trackball__CheckNeedUpdate(Trackball* __this)
{
    if (__this->_moveMode == 0)
    {
        if (__this->_haveUpdate)
        {
            ::app::Fuse::UpdateManager__RemoveAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Trackball__OnUpdate, __this), 0);
            __this->_haveUpdate = false;
        }
    }
    else if (!__this->_haveUpdate)
    {
        ::app::Fuse::UpdateManager__AddAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Trackball__OnUpdate, __this), 0);
        __this->_haveUpdate = true;
    }
}

::app::Uno::Float4x4 Trackball__get_InverseViewProjection(Trackball* __this)
{
    ::app::Uno::Float4x4 at = ::uPtr< ::app::Fuse::Node*>(__this->_node)->WorldTransform();
    ::app::Uno::Float4x4 vp = ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(__this->Viewport()));
    return ::app::Uno::Matrix__Invert_2(NULL, ::app::Uno::Matrix__Mul_10(NULL, at, vp));
}

::uObject* Trackball__get_Viewport(Trackball* __this)
{
    return __this->_viewport;
}

void Trackball__OnLostCapture(Trackball* __this)
{
    __this->_captured = false;
    ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion(__this->_pressQ);
}

void Trackball__OnPointerMoved(Trackball* __this, ::uObject* s, ::app::Fuse::Input::PointerMovedArgs* args)
{
    if (!__this->_captured || (::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->PointIndex() != __this->_pressIndex))
    {
        return;
    }

    ::app::Uno::Float2 dir0 = ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint(), __this->_pressLoc);
    ::app::Uno::Float2 dir = ::app::Uno::Float2__New_2(NULL, dir0.X, -dir0.Y);
    ::app::Uno::Float3 norm = ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Float3__New_2(NULL, -dir.Y, dir.X, 0.0f));
    float length = ::app::Uno::Vector__Length_2(NULL, dir);
    float angular = length / (2.0f * __this->_radius);
    ::uPtr< ::app::Experimental::Physics::PointerVelocity__float*>(__this->_angularVelocity)->AddSample(angular, ::app::Fuse::Time__get_FrameIntervalFloat(NULL), false);
    __this->_prevAngular = angular;
    ::app::Uno::Float3 ind_123 = ::app::Uno::Vector__Normalize_1(NULL, ::app::Uno::Vector__TransformNormal(NULL, norm, __this->_pressInvView));
    ::app::Uno::Float3 localNorm = ::app::Uno::Float3__New_2(NULL, ind_123.X, ind_123.Y, ind_123.Z);
    __this->_frictionVector = localNorm;
    ::app::Uno::Float4 q = ::app::Uno::Quaternion__RotationAxis(NULL, localNorm, angular);
    ::app::Uno::Float4 cq = ::app::Uno::Quaternion__Mul(NULL, __this->_pressQ, q);
    ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion(cq);

    if (__this->_soft && (length > 10.0f))
    {
        if (!::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->TryHardCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Trackball__OnLostCapture, __this), NULL))
        {
            __this->OnLostCapture();
        }

        __this->_soft = false;
    }
}

void Trackball__OnPointerPressed(Trackball* __this, ::uObject* s, ::app::Fuse::Input::PointerPressedArgs* args)
{
    if (__this->_captured || !::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->IsPrimary())
    {
        return;
    }

    if (::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->TrySoftCapture((::uObject*)__this, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Trackball__OnLostCapture, __this), NULL))
    {
        __this->_moveMode = 0;
        __this->_captured = true;
        __this->_soft = true;
        __this->_pressLoc = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->WindowPoint();
        __this->_pressIndex = args->PointIndex();
        __this->_pressQ = ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion();
        ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 1.0f));
        ::uPtr< ::app::Experimental::Physics::PointerVelocity__float*>(__this->_angularVelocity)->Reset(0.0f);
        __this->_prevAngular = 0.0f;
        __this->_pressInvView = __this->InverseViewProjection();
        ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion(__this->_pressQ);
    }
}

void Trackball__OnPointerReleased(Trackball* __this, ::uObject* s, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    if (!__this->_captured || (::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->PointIndex() != __this->_pressIndex))
    {
        return;
    }

    if (__this->_soft)
    {
        ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->ReleaseSoftCapture((::uObject*)__this);
    }
    else
    {
        args->ReleaseHardCapture((::uObject*)__this);
    }

    __this->_captured = false;
    __this->_moveMode = 2;
    ::app::Experimental::Physics::MotionSimulation__float::Position(::uPtr< ::uObject*>(__this->_friction), 0.0f);
    ::app::Experimental::Physics::MotionSimulation__float::Velocity(::uPtr< ::uObject*>(__this->_friction), ::uPtr< ::app::Experimental::Physics::PointerVelocity__float*>(__this->_angularVelocity)->CurrentVelocity());
    __this->_frictionQ = ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion();
    __this->CheckNeedUpdate();
}

void Trackball__OnRooted(Trackball* __this, ::app::Fuse::Node* e)
{
    __this->_node = e;
    ::app::Uno::Collections::ICollection__Fuse_Transform::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->_node)->Transforms()), (::app::Fuse::Transform*)__this->_transform);
    __this->_moveMode = 0;
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->AddHandler(e, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)Trackball__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->AddHandler(e, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)Trackball__OnPointerReleased, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->AddHandler(e, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)Trackball__OnPointerMoved, __this));

    if (!__this->_hasViewport)
    {
        __this->_viewport = ::uPtr< ::app::Fuse::Node*>(e)->Viewport();
    }
}

void Trackball__OnUnrooted(Trackball* __this, ::app::Fuse::Node* e)
{
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(::app::Fuse::Input::Pointer__get_Pressed(NULL))->RemoveHandler(e, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerPressedHandler__typeof(), (const void*)Trackball__OnPointerPressed, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(::app::Fuse::Input::Pointer__get_Released(NULL))->RemoveHandler(e, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerReleasedHandler__typeof(), (const void*)Trackball__OnPointerReleased, __this));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(::app::Fuse::Input::Pointer__get_Moved(NULL))->RemoveHandler(e, ::uNewDelegateNonVirt(::app::Fuse::Input::PointerMovedHandler__typeof(), (const void*)Trackball__OnPointerMoved, __this));
    ::app::Uno::Collections::ICollection__Fuse_Transform::Remove(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->_node)->Transforms()), (::app::Fuse::Transform*)__this->_transform);
    __this->_node = NULL;
    __this->_moveMode = 0;
    __this->CheckNeedUpdate();
}

void Trackball__OnUpdate(Trackball* __this)
{
    if (__this->_moveMode == 1)
    {
        ::app::Experimental::Physics::Simulation::Update(::uPtr< ::uObject*>(__this->_attractor), ::app::Fuse::Time__get_FrameInterval(NULL));

        if (::app::Experimental::Physics::Simulation::IsStatic(::uPtr< ::uObject*>(__this->_attractor)))
        {
            __this->_moveMode = 0;
        }

        ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion(::app::Uno::Vector__Normalize_2(NULL, ::app::Experimental::Physics::MotionSimulation__float4::Position(::uPtr< ::uObject*>(__this->_attractor))));
    }
    else if (__this->_moveMode == 2)
    {
        ::app::Experimental::Physics::Simulation::Update(::uPtr< ::uObject*>(__this->_friction), ::app::Fuse::Time__get_FrameInterval(NULL));

        if (::app::Experimental::Physics::Simulation::IsStatic(::uPtr< ::uObject*>(__this->_friction)))
        {
            __this->_moveMode = 0;
        }

        ::app::Uno::Float4 q = ::app::Uno::Quaternion__RotationAxis(NULL, __this->_frictionVector, ::app::Experimental::Physics::MotionSimulation__float::Position(::uPtr< ::uObject*>(__this->_friction)));
        ::app::Uno::Float4 cq = ::app::Uno::Quaternion__Mul(NULL, __this->_frictionQ, q);
        ::uPtr< ::app::Fuse::Entities::Transform3D*>(__this->_transform)->RotationQuaternion(cq);
    }

    __this->CheckNeedUpdate();
}

void Trackball__set_Viewport(Trackball* __this, ::uObject* value)
{
    __this->_viewport = value;
    __this->_hasViewport = true;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Trackball_MoveMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Gestures.Trackball.MoveMode", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Stop", 0LL,
        "Attraction", 1LL,
        "Friction", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileClickerTrigger__uType* WhileClickerTrigger__typeof()
{
    static ::uStaticStrong<WhileClickerTrigger__uType*> type;
    if (type != NULL) return type;

    type = (WhileClickerTrigger__uType*)::uAllocClassType(sizeof(WhileClickerTrigger__uType), "Fuse.Gestures.WhileClickerTrigger", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileClickerTrigger__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileClickerTrigger__OnUnrooted;

    type->SetStrongRefs(
        "Clicker", offsetof(WhileClickerTrigger, Clicker));

    return type;
}

void WhileClickerTrigger___ObjInit_3(WhileClickerTrigger* __this)
{
    ::app::Fuse::Triggers::WhileTrigger___ObjInit_2(__this);
}

void WhileClickerTrigger__OnRooted(WhileClickerTrigger* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    __this->Clicker = ::app::Fuse::Gestures::Clicker__AttachClicker(NULL, elm);
}

void WhileClickerTrigger__OnUnrooted(WhileClickerTrigger* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->Detach();
    __this->Clicker = NULL;
    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhilePressed__uType* WhilePressed__typeof()
{
    static ::uStaticStrong<WhilePressed__uType*> type;
    if (type != NULL) return type;

    type = (WhilePressed__uType*)::uAllocClassType(sizeof(WhilePressed__uType), "Fuse.Gestures.WhilePressed", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Gestures::WhileClickerTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhilePressed__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhilePressed__OnUnrooted;

    return type;
}

void WhilePressed___ObjInit_4(WhilePressed* __this)
{
    ::app::Fuse::Gestures::WhileClickerTrigger___ObjInit_3(__this);
}

int WhilePressed__get_PointerType(WhilePressed* __this)
{
    return __this->_pointerType;
}

WhilePressed* WhilePressed__New_1(::uStatic* __this)
{
    WhilePressed* inst = (WhilePressed*)::uAllocObject(sizeof(WhilePressed), WhilePressed__typeof());
    inst->_ObjInit_4();
    return inst;
}

void WhilePressed__OnPointerPressing(WhilePressed* __this, ::app::Fuse::Input::PointerEventArgs* args, int count)
{
    if ((__this->PointerType() == 0) || (__this->PointerType() == ::uPtr< ::app::Fuse::Input::PointerEventArgs*>(args)->PointerType()))
    {
        __this->SetActive(count > 0);
    }
}

void WhilePressed__OnRooted(WhilePressed* __this, ::app::Fuse::Node* elm)
{
    ::app::Fuse::Gestures::WhileClickerTrigger__OnRooted(__this, elm);
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->add_PressingEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)WhilePressed__OnPointerPressing, __this));
    __this->BypassSetActive(false);
}

void WhilePressed__OnUnrooted(WhilePressed* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Fuse::Gestures::Clicker*>(__this->Clicker)->remove_PressingEvent(::uNewDelegateNonVirt(::app::Fuse::Gestures::ClickerEventHandler__typeof(), (const void*)WhilePressed__OnPointerPressing, __this));
    ::app::Fuse::Gestures::WhileClickerTrigger__OnUnrooted(__this, elm);
}

void WhilePressed__set_PointerType(WhilePressed* __this, int value)
{
    __this->_pointerType = value;
}

}}}
