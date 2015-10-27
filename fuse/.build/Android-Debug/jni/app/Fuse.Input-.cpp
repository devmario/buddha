#include <app/Fuse.AppBase.h>
#include <app/Fuse.HitTestCallback.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.HitTestResult.h>
#include <app/Fuse.Input.Capturer.h>
#include <app/Fuse.Input.CustomPointerEventArgs.h>
#include <app/Fuse.Input.Focus.h>
#include <app/Fuse.Input.FocusDelegator.h>
#include <app/Fuse.Input.FocusGained.h>
#include <app/Fuse.Input.FocusGainedArgs.h>
#include <app/Fuse.Input.FocusGainedHandler.h>
#include <app/Fuse.Input.FocusLost.h>
#include <app/Fuse.Input.FocusLostArgs.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Fuse.Input.FocusNavigationDirection.h>
#include <app/Fuse.Input.FocusPredictStrategy.h>
#include <app/Fuse.Input.HitTestHelpers.h>
#include <app/Fuse.Input.IsFocusableChangedArgs.h>
#include <app/Fuse.Input.IsFocusableChangedEvent.h>
#include <app/Fuse.Input.IsFocusableChangedHandler.h>
#include <app/Fuse.Input.Keyboard.h>
#include <app/Fuse.Input.KeyEventArgs.h>
#include <app/Fuse.Input.KeyPressed.h>
#include <app/Fuse.Input.KeyPressedArgs.h>
#include <app/Fuse.Input.KeyPressedHandler.h>
#include <app/Fuse.Input.KeyReleased.h>
#include <app/Fuse.Input.KeyReleasedArgs.h>
#include <app/Fuse.Input.KeyReleasedHandler.h>
#include <app/Fuse.Input.Pointer.h>
#include <app/Fuse.Input.Pointer_PELHolder.h>
#include <app/Fuse.Input.Pointer_PELStatus.h>
#include <app/Fuse.Input.Pointer_PointerRecord.h>
#include <app/Fuse.Input.PointerEntered.h>
#include <app/Fuse.Input.PointerEnteredArgs.h>
#include <app/Fuse.Input.PointerEnteredHandler.h>
#include <app/Fuse.Input.PointerEventArgs.h>
#include <app/Fuse.Input.PointerEventData.h>
#include <app/Fuse.Input.PointerLeft.h>
#include <app/Fuse.Input.PointerLeftArgs.h>
#include <app/Fuse.Input.PointerLeftHandler.h>
#include <app/Fuse.Input.PointerMoved.h>
#include <app/Fuse.Input.PointerMovedArgs.h>
#include <app/Fuse.Input.PointerMovedHandler.h>
#include <app/Fuse.Input.PointerPressed.h>
#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Input.PointerPressedHandler.h>
#include <app/Fuse.Input.PointerReleased.h>
#include <app/Fuse.Input.PointerReleasedArgs.h>
#include <app/Fuse.Input.PointerReleasedHandler.h>
#include <app/Fuse.Input.PointerWheelMoved.h>
#include <app/Fuse.Input.PointerWheelMovedArgs.h>
#include <app/Fuse.Input.PointerWheelMovedHandler.h>
#include <app/Fuse.Input.SelectionQuery.h>
#include <app/Fuse.Input.TextEntered.h>
#include <app/Fuse.Input.TextEnteredArgs.h>
#include <app/Fuse.Input.TextEnteredHandler.h>
#include <app/Fuse.Input.TextService.h>
#include <app/Fuse.Input.TraverseNodeExtensions.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_Focus-5b05867c.h>
#include <app/Fuse.NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs.h>
#include <app/Fuse.NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Inpu-18824b06.h>
#include <app/Fuse.NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs.h>
#include <app/Fuse.NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyRe-e45839bc.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_Po-1f011a22.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_Point-ac00d4bc.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_Poin-b0dbd2da.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_Po-bf1c51b8.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_P-40044f7c.h>
#include <app/Fuse.NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input-3fc2451c.h>
#include <app/Fuse.NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextE-c9c5bffc.h>
#include <app/Fuse.NodeEventArgs.h>
#include <app/Fuse.NodeEventMode.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.Scripting.IEventSerializer.h>
#include <app/Fuse.StyleProperty__Fuse_Node__bool.h>
#include <app/Fuse.StyleProperty__Fuse_Node__Fuse_Node.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Fuse_Node.h>
#include <app/Uno.Application.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.Dictionary__int__Fuse_Input_Pointer_PointerRecord.h>
#include <app/Uno.Collections.Dictionary__int__Uno_Collections_IList_Fuse_Inp-f7378373.h>
#include <app/Uno.Collections.Dictionary__int__Uno_Collections_List_Fuse_Inpu-25f6ef8b.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__int__Fuse_Input_Pointer-8e8b3a50.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__int__Uno_Collections_IL-8f16c802.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.ICollection__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IList__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.KeyValuePair__int__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.KeyValuePair__int__Fuse_Input_Pointer_PointerRecord.h>
#include <app/Uno.Collections.KeyValuePair__int__Uno_Collections_IList_Fuse_I-7b6b2bd.h>
#include <app/Uno.Collections.List__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.List__Fuse_Input_Pointer_PELHolder.h>
#include <app/Uno.Collections.List__int.h>
#include <app/Uno.Collections.List__Uno_Platform_Key.h>
#include <app/Uno.Collections.List1_Enumerator__int.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Clock.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform.Key.h>
#include <app/Uno.Platform.PointerType.h>
#include <app/Uno.Predicate__Fuse_Node.h>
#include <app/Uno.String.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Input {

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Capturer__uType* Capturer__typeof()
{
    static ::uStaticStrong<Capturer__uType*> type;
    if (type != NULL) return type;

    type = (Capturer__uType*)::uAllocClassType(sizeof(Capturer__uType), "Fuse.Input.Capturer", false, 0, 3, 0);

    type->SetStrongRefs(
        "_Identity", offsetof(Capturer, _Identity),
        "_LostCallback", offsetof(Capturer, _LostCallback),
        "_Node", offsetof(Capturer, _Node));

    return type;
}

void Capturer___ObjInit(Capturer* __this, ::app::Fuse::Node* n, ::uObject* identity, ::uDelegate* lostCallback)
{
    if (((n == NULL) || (identity == NULL)) || ::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)lostCallback, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Invalid Capturer parameters")));
    }

    __this->Node(n);
    __this->Identity(identity);
    __this->LostCallback(lostCallback);
}

::uObject* Capturer__get_Identity(Capturer* __this)
{
    return __this->_Identity;
}

bool Capturer__get_IsSuitable(Capturer* __this)
{
    return ::uPtr< ::app::Fuse::Node*>(__this->Node())->IsEnabled() && ::uPtr< ::app::Fuse::Node*>(__this->Node())->IsRooted();
}

::uDelegate* Capturer__get_LostCallback(Capturer* __this)
{
    return __this->_LostCallback;
}

::app::Fuse::Node* Capturer__get_Node(Capturer* __this)
{
    return __this->_Node;
}

Capturer* Capturer__New_1(::uStatic* __this, ::app::Fuse::Node* n, ::uObject* identity, ::uDelegate* lostCallback)
{
    Capturer* inst = (Capturer*)::uAllocObject(sizeof(Capturer), Capturer__typeof());
    inst->_ObjInit(n, identity, lostCallback);
    return inst;
}

void Capturer__set_Identity(Capturer* __this, ::uObject* value)
{
    __this->_Identity = value;
}

void Capturer__set_LostCallback(Capturer* __this, ::uDelegate* value)
{
    __this->_LostCallback = value;
}

void Capturer__set_Node(Capturer* __this, ::app::Fuse::Node* value)
{
    __this->_Node = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CustomPointerEventArgs__uType* CustomPointerEventArgs__typeof()
{
    static ::uStaticStrong<CustomPointerEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (CustomPointerEventArgs__uType*)::uAllocClassType(sizeof(CustomPointerEventArgs__uType), "Fuse.Input.CustomPointerEventArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::PointerEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(CustomPointerEventArgs__uType, __interface_0));

    return type;
}

void CustomPointerEventArgs___ObjInit_3(CustomPointerEventArgs* __this, ::app::Fuse::Input::PointerEventArgs* args, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::PointerEventArgs___ObjInit_2(__this, ::uPtr< ::app::Fuse::Input::PointerEventArgs*>(args)->Data(), node);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> Focus___focusDelegatorHandle;
::uStaticStrong< ::app::Fuse::Node*> Focus___focusedObject;
::uStaticStrong< ::app::Fuse::Input::FocusGained*> Focus___gained;
::uStaticStrong< ::app::Fuse::Input::IsFocusableChangedEvent*> Focus___isFoucsableChanged;
::uStaticStrong< ::app::Fuse::Node*> Focus___lastFocusedNode;
::uStaticStrong< ::app::Fuse::Input::FocusLost*> Focus___lost;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Node__Fuse_Node*> Focus__FocusDelegateProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Node__bool*> Focus__IsFocusableProperty;

Focus__uType* Focus__typeof()
{
    static ::uStaticStrong<Focus__uType*> type;
    if (type != NULL) return type;

    type = (Focus__uType*)::uAllocClassType(sizeof(Focus__uType), "Fuse.Input.Focus");

    return type;
}

void Focus___TypeInit(::uStatic* __this)
{
    Focus___gained = ::app::Fuse::Input::FocusGained__New_1(NULL);
    Focus___lost = ::app::Fuse::Input::FocusLost__New_1(NULL);
    Focus___isFoucsableChanged = ::app::Fuse::Input::IsFocusableChangedEvent__New_1(NULL);
    Focus___focusDelegatorHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    Focus__IsFocusableProperty = ::app::Fuse::StyleProperty__Fuse_Node__bool__New_1(NULL, false, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)Focus__OnIsFocusableChanged));
    Focus__FocusDelegateProperty = ::app::Fuse::StyleProperty__Fuse_Node__Fuse_Node__New_1(NULL, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Node__typeof(), (const void*)Focus__OnFocusDelegateChanged));
}

bool Focus__CanSetFocus(::uStatic* __this, ::app::Fuse::Node* node)
{
    return (node == NULL) || ((::uPtr< ::app::Fuse::Node*>(node)->IsRooted() && ::uPtr< ::app::Fuse::Node*>(node)->IsEnabled()) && Focus__IsFocusable(NULL, node));
}

void Focus__ChangeFocusedNode(::uStatic* __this, ::app::Fuse::Node* node, ::uString* memberName)
{
    while (node != NULL)
    {
        ::uDelegate* delegator = Focus__GetDelegator(NULL, node);

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)delegator, NULL))
        {
            node = ::uPtr< ::uDelegate*>(delegator)->Invoke< ::app::Fuse::Node*>();
            continue;
        }

        ::app::Fuse::Node* focusDelegate = Focus__GetFocusDelegate(NULL, node);

        if (focusDelegate != NULL)
        {
            node = focusDelegate;
            continue;
        }

        break;
    }

    if (!Focus__CanSetFocus(NULL, node))
    {
        node = Focus__FindRoot(NULL);
    }

    if (node == Focus___focusedObject)
    {
        return;
    }

    Focus___lastFocusedNode = Focus___focusedObject;
    Focus___focusedObject = node;

    if (Focus___lastFocusedNode != NULL)
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*>(Focus__get_Lost(NULL))->RaiseWithBubble(::app::Fuse::Input::FocusLostArgs__New_3(NULL, Focus___lastFocusedNode), 0);
    }

    if (Focus___focusedObject != NULL)
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*>(Focus__get_Gained(NULL))->RaiseWithBubble(::app::Fuse::Input::FocusGainedArgs__New_3(NULL, Focus___focusedObject), 0);
    }
}

::app::Fuse::Node* Focus__FindRoot(::uStatic* __this)
{
    ::app::Fuse::AppBase* app = ::uAs< ::app::Fuse::AppBase*>(::app::Uno::Application__get_Current(NULL), ::app::Fuse::AppBase__typeof());

    if (app != NULL)
    {
        return ::uPtr< ::app::Fuse::AppBase*>(app)->RootNode();
    }

    return NULL;
}

::app::Fuse::Node* Focus__get_FocusedNode(::uStatic* __this)
{
    return Focus___focusedObject;
}

::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* Focus__get_Gained(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*)Focus___gained;
}

::app::Fuse::NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs* Focus__get_IsFocusableChanged(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs*)Focus___isFoucsableChanged;
}

::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* Focus__get_Lost(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*)Focus___lost;
}

::uDelegate* Focus__GetDelegator(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::uObject* res;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(Focus___focusDelegatorHandle, &res))
    {
        return ::uCast< ::uDelegate*>(res, ::app::Fuse::Input::FocusDelegator__typeof());
    }

    return NULL;
}

::app::Fuse::Node* Focus__GetFocusDelegate(::uStatic* __this, ::app::Fuse::Node* n)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Node__Fuse_Node*>(Focus__FocusDelegateProperty)->Get(n);
}

void Focus__GiveTo(::uStatic* __this, ::app::Fuse::Node* n)
{
    Focus__ChangeFocusedNode(NULL, n, ::uGetConstString("GiveTo"));
}

bool Focus__IsFocusable(::uStatic* __this, ::app::Fuse::Node* n)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Node__bool*>(Focus__IsFocusableProperty)->Get(n);
}

bool Focus__IsWithin(::uStatic* __this, ::app::Fuse::Node* n)
{
    ::app::Fuse::Node* k = Focus__get_FocusedNode(NULL);

    while (k != NULL)
    {
        if (k == n)
        {
            return true;
        }

        k = ::uPtr< ::app::Fuse::Node*>(k)->Parent();
    }

    return false;
}

void Focus__Move(::uStatic* __this, int direction)
{
    ::app::Fuse::Node* predictedFocus = Focus__Predict(NULL, direction);

    if (predictedFocus == NULL)
    {
        return;
    }

    Focus__ChangeFocusedNode(NULL, predictedFocus, ::uGetConstString("Move"));
}

void Focus__Obtained(::uStatic* __this, ::app::Fuse::Node* n)
{
    Focus__ChangeFocusedNode(NULL, n, ::uGetConstString("Obtained"));
}

void Focus__OnFocusDelegateChanged(::uStatic* __this, ::app::Fuse::Node* n)
{
}

void Focus__OnIsFocusableChanged(::uStatic* __this, ::app::Fuse::Node* n)
{
    if (Focus__IsFocusable(NULL, n))
    {
        ::uPtr< ::app::Fuse::Node*>(n)->add_Unrooted(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Focus__OnNodeUnrooted));
    }
    else
    {
        ::uPtr< ::app::Fuse::Node*>(n)->remove_Unrooted(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)Focus__OnNodeUnrooted));
    }

    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs*>(Focus__get_IsFocusableChanged(NULL))->RaiseWithoutBubble(::app::Fuse::Input::IsFocusableChangedArgs__New_3(NULL, n), 0);
}

void Focus__OnNodeUnrooted(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    if ((Focus___focusedObject != NULL) && !::uPtr< ::app::Fuse::Node*>(Focus___focusedObject)->IsRooted())
    {
        Focus__ChangeFocusedNode(NULL, NULL, ::uGetConstString("OnNodeUnrooted"));
    }
}

void Focus__OnWindowGotFocus(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ::app::Fuse::Node* ind_123;
    Focus__ChangeFocusedNode(NULL, (ind_123 = Focus___focusedObject, (ind_123 != NULL) ? ind_123 : Focus___lastFocusedNode), ::uGetConstString("OnWindowGotFocus"));
}

void Focus__OnWindowLostFocus(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    Focus__ChangeFocusedNode(NULL, NULL, ::uGetConstString("OnWindowLostFocus"));
}

::app::Fuse::Node* Focus__Predict(::uStatic* __this, int direction)
{
    ::app::Fuse::Node* node = ::app::Fuse::Input::FocusPredictStrategy__Predict(NULL, Focus___focusedObject, direction);

    if (node == NULL)
    {
        ::app::Fuse::Node* root = Focus__FindRoot(NULL);

        if (root != NULL)
        {
            node = ::app::Fuse::Input::FocusPredictStrategy__Predict(NULL, root, direction);

            if ((node == NULL) && Focus__CanSetFocus(NULL, root))
            {
                node = root;
            }
        }
    }

    return node;
}

void Focus__Release(::uStatic* __this)
{
    Focus__ChangeFocusedNode(NULL, NULL, ::uGetConstString("Release"));
}

void Focus__ReleaseFrom(::uStatic* __this, ::app::Fuse::Node* n)
{
    if (Focus__get_FocusedNode(NULL) == n)
    {
        Focus__Release(NULL);
    }
}

void Focus__SetDelegator(::uStatic* __this, ::app::Fuse::Node* n, ::uDelegate* delegator)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(Focus___focusDelegatorHandle, (::uObject*)delegator);
}

void Focus__SetIsFocusable(::uStatic* __this, ::app::Fuse::Node* n, bool focusable)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Node__bool*>(Focus__IsFocusableProperty)->Set(n, focusable);
}

void Focus__SetStyleFocusDelegate(::uStatic* __this, ::app::Fuse::Node* n, ::app::Fuse::Node* d)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Node__Fuse_Node*>(Focus__FocusDelegateProperty)->SetStyle(n, d);
}

void Focus__SetStyleIsFocusable(::uStatic* __this, ::app::Fuse::Node* n, bool focusable)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Node__bool*>(Focus__IsFocusableProperty)->SetStyle(n, focusable);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* FocusDelegator__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.FocusDelegator", 0);

    type->SetSignature(::app::Fuse::Node__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FocusGained__uType* FocusGained__typeof()
{
    static ::uStaticStrong<FocusGained__uType*> type;
    if (type != NULL) return type;

    type = (FocusGained__uType*)::uAllocClassType(sizeof(FocusGained__uType), "Fuse.Input.FocusGained", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::FocusGainedArgs*))FocusGained__Invoke;

    return type;
}

void FocusGained___ObjInit_1(FocusGained* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs___ObjInit(__this);
}

void FocusGained__Invoke(FocusGained* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::FocusGainedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::FocusGainedArgs*>(sender, args);
}

FocusGained* FocusGained__New_1(::uStatic* __this)
{
    FocusGained* inst = (FocusGained*)::uAllocObject(sizeof(FocusGained), FocusGained__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FocusGainedArgs__uType* FocusGainedArgs__typeof()
{
    static ::uStaticStrong<FocusGainedArgs__uType*> type;
    if (type != NULL) return type;

    type = (FocusGainedArgs__uType*)::uAllocClassType(sizeof(FocusGainedArgs__uType), "Fuse.Input.FocusGainedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(FocusGainedArgs__uType, __interface_0));

    return type;
}

void FocusGainedArgs___ObjInit_2(FocusGainedArgs* __this, ::app::Fuse::Node* node)
{
    ::app::Fuse::NodeEventArgs___ObjInit_1(__this, node);
}

FocusGainedArgs* FocusGainedArgs__New_3(::uStatic* __this, ::app::Fuse::Node* node)
{
    FocusGainedArgs* inst = (FocusGainedArgs*)::uAllocObject(sizeof(FocusGainedArgs), FocusGainedArgs__typeof());
    inst->_ObjInit_2(node);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* FocusGainedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.FocusGainedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::FocusGainedArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FocusLost__uType* FocusLost__typeof()
{
    static ::uStaticStrong<FocusLost__uType*> type;
    if (type != NULL) return type;

    type = (FocusLost__uType*)::uAllocClassType(sizeof(FocusLost__uType), "Fuse.Input.FocusLost", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::FocusLostArgs*))FocusLost__Invoke;

    return type;
}

void FocusLost___ObjInit_1(FocusLost* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs___ObjInit(__this);
}

void FocusLost__Invoke(FocusLost* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::FocusLostArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::FocusLostArgs*>(sender, args);
}

FocusLost* FocusLost__New_1(::uStatic* __this)
{
    FocusLost* inst = (FocusLost*)::uAllocObject(sizeof(FocusLost), FocusLost__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FocusLostArgs__uType* FocusLostArgs__typeof()
{
    static ::uStaticStrong<FocusLostArgs__uType*> type;
    if (type != NULL) return type;

    type = (FocusLostArgs__uType*)::uAllocClassType(sizeof(FocusLostArgs__uType), "Fuse.Input.FocusLostArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(FocusLostArgs__uType, __interface_0));

    return type;
}

void FocusLostArgs___ObjInit_2(FocusLostArgs* __this, ::app::Fuse::Node* node)
{
    ::app::Fuse::NodeEventArgs___ObjInit_1(__this, node);
}

FocusLostArgs* FocusLostArgs__New_3(::uStatic* __this, ::app::Fuse::Node* node)
{
    FocusLostArgs* inst = (FocusLostArgs*)::uAllocObject(sizeof(FocusLostArgs), FocusLostArgs__typeof());
    inst->_ObjInit_2(node);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* FocusLostHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.FocusLostHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::FocusLostArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* FocusNavigationDirection__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Input.FocusNavigationDirection", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "Up", 0LL,
        "Down", 1LL,
        "Left", 2LL,
        "Right", 3LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FocusPredictStrategy__uType* FocusPredictStrategy__typeof()
{
    static ::uStaticStrong<FocusPredictStrategy__uType*> type;
    if (type != NULL) return type;

    type = (FocusPredictStrategy__uType*)::uAllocClassType(sizeof(FocusPredictStrategy__uType), "Fuse.Input.FocusPredictStrategy");

    return type;
}

::app::Fuse::Node* FocusPredictStrategy__Predict(::uStatic* __this, ::app::Fuse::Node* n, int direction)
{
    if (n != NULL)
    {
        if (direction == 1)
        {
            return ::app::Fuse::Input::TraverseNodeExtensions__FindNextChild(NULL, n, ::uNewDelegateNonVirt(::app::Uno::Predicate__Fuse_Node__typeof(), (const void*)::app::Fuse::Input::Focus__CanSetFocus));
        }
        else if (direction == 0)
        {
            return ::app::Fuse::Input::TraverseNodeExtensions__FindPreviousChild_1(NULL, n, ::uNewDelegateNonVirt(::app::Uno::Predicate__Fuse_Node__typeof(), (const void*)::app::Fuse::Input::Focus__CanSetFocus));
        }
    }

    return NULL;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HitTestHelpers__uType* HitTestHelpers__typeof()
{
    static ::uStaticStrong<HitTestHelpers__uType*> type;
    if (type != NULL) return type;

    type = (HitTestHelpers__uType*)::uAllocClassType(sizeof(HitTestHelpers__uType), "Fuse.Input.HitTestHelpers");

    return type;
}

::app::Fuse::HitTestResult* HitTestHelpers__HitTestNearest(::uStatic* __this, ::app::Fuse::Node* root, ::app::Uno::Float2 point)
{
    ::app::Fuse::Input::SelectionQuery* sq = ::app::Fuse::Input::SelectionQuery__New_1(NULL);
    return ::uPtr< ::app::Fuse::Input::SelectionQuery*>(sq)->Select(root, point);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IsFocusableChangedArgs__uType* IsFocusableChangedArgs__typeof()
{
    static ::uStaticStrong<IsFocusableChangedArgs__uType*> type;
    if (type != NULL) return type;

    type = (IsFocusableChangedArgs__uType*)::uAllocClassType(sizeof(IsFocusableChangedArgs__uType), "Fuse.Input.IsFocusableChangedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(IsFocusableChangedArgs__uType, __interface_0));

    return type;
}

void IsFocusableChangedArgs___ObjInit_2(IsFocusableChangedArgs* __this, ::app::Fuse::Node* node)
{
    ::app::Fuse::NodeEventArgs___ObjInit_1(__this, node);
}

IsFocusableChangedArgs* IsFocusableChangedArgs__New_3(::uStatic* __this, ::app::Fuse::Node* node)
{
    IsFocusableChangedArgs* inst = (IsFocusableChangedArgs*)::uAllocObject(sizeof(IsFocusableChangedArgs), IsFocusableChangedArgs__typeof());
    inst->_ObjInit_2(node);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IsFocusableChangedEvent__uType* IsFocusableChangedEvent__typeof()
{
    static ::uStaticStrong<IsFocusableChangedEvent__uType*> type;
    if (type != NULL) return type;

    type = (IsFocusableChangedEvent__uType*)::uAllocClassType(sizeof(IsFocusableChangedEvent__uType), "Fuse.Input.IsFocusableChangedEvent", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::IsFocusableChangedArgs*))IsFocusableChangedEvent__Invoke;

    return type;
}

void IsFocusableChangedEvent___ObjInit_1(IsFocusableChangedEvent* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs___ObjInit(__this);
}

void IsFocusableChangedEvent__Invoke(IsFocusableChangedEvent* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::IsFocusableChangedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::IsFocusableChangedArgs*>(sender, args);
}

IsFocusableChangedEvent* IsFocusableChangedEvent__New_1(::uStatic* __this)
{
    IsFocusableChangedEvent* inst = (IsFocusableChangedEvent*)::uAllocObject(sizeof(IsFocusableChangedEvent), IsFocusableChangedEvent__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* IsFocusableChangedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.IsFocusableChangedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::IsFocusableChangedArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> Keyboard___keyboardHandle;
::uStaticStrong< ::app::Fuse::Input::KeyPressed*> Keyboard___keyPressed;
::uStaticStrong< ::app::Fuse::Input::KeyReleased*> Keyboard___keyReleased;
::uStaticStrong< ::app::Uno::Collections::List__Uno_Platform_Key*> Keyboard___keysDown;

Keyboard__uType* Keyboard__typeof()
{
    static ::uStaticStrong<Keyboard__uType*> type;
    if (type != NULL) return type;

    type = (Keyboard__uType*)::uAllocClassType(sizeof(Keyboard__uType), "Fuse.Input.Keyboard");

    return type;
}

void Keyboard___TypeInit(::uStatic* __this)
{
    Keyboard___keyPressed = ::app::Fuse::Input::KeyPressed__New_1(NULL);
    Keyboard___keyReleased = ::app::Fuse::Input::KeyReleased__New_1(NULL);
    Keyboard___keysDown = ::app::Uno::Collections::List__Uno_Platform_Key__New_1(NULL);
    Keyboard___keyboardHandle = ::app::Fuse::Properties__CreateHandle(NULL);
}

::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* Keyboard__get_KeyPressed(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs*)Keyboard___keyPressed;
}

::app::Fuse::NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* Keyboard__get_KeyReleased(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs*)Keyboard___keyReleased;
}

bool Keyboard__RaiseKeyPressed(::uStatic* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Platform_Key*>(Keyboard___keysDown)->Add(key);
    ::app::Fuse::Input::KeyPressedArgs* args = ::app::Fuse::Input::KeyPressedArgs__New_3(NULL, key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, ::app::Fuse::Input::Focus__get_FocusedNode(NULL));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs*>(Keyboard__get_KeyPressed(NULL))->RaiseWithBubble(args, 0);
    return ::uPtr< ::app::Fuse::Input::KeyPressedArgs*>(args)->IsHandled();
}

bool Keyboard__RaiseKeyReleased(::uStatic* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed)
{
    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Uno_Platform_Key*>(Keyboard___keysDown)->Count(); i++)
    {
        if (::uPtr< ::app::Uno::Collections::List__Uno_Platform_Key*>(Keyboard___keysDown)->Item(i) == key)
        {
            ::uPtr< ::app::Uno::Collections::List__Uno_Platform_Key*>(Keyboard___keysDown)->RemoveAt(i--);
        }
    }

    ::app::Fuse::Input::KeyReleasedArgs* args = ::app::Fuse::Input::KeyReleasedArgs__New_3(NULL, key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, ::app::Fuse::Input::Focus__get_FocusedNode(NULL));
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs*>(Keyboard__get_KeyReleased(NULL))->RaiseWithBubble(args, 0);
    return ::uPtr< ::app::Fuse::Input::KeyReleasedArgs*>(args)->IsHandled();
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyEventArgs__uType* KeyEventArgs__typeof()
{
    static ::uStaticStrong<KeyEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (KeyEventArgs__uType*)::uAllocClassType(sizeof(KeyEventArgs__uType), "Fuse.Input.KeyEventArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(KeyEventArgs__uType, __interface_0));

    return type;
}

void KeyEventArgs___ObjInit_2(KeyEventArgs* __this, int key, ::app::Fuse::Node* node)
{
    ::app::Fuse::NodeEventArgs___ObjInit_1(__this, node);
    __this->Key(key);
}

bool KeyEventArgs__get_IsAltKeyPressed(KeyEventArgs* __this)
{
    return __this->_IsAltKeyPressed;
}

bool KeyEventArgs__get_IsControlKeyPressed(KeyEventArgs* __this)
{
    return __this->_IsControlKeyPressed;
}

bool KeyEventArgs__get_IsMetaKeyPressed(KeyEventArgs* __this)
{
    return __this->_IsMetaKeyPressed;
}

bool KeyEventArgs__get_IsShiftKeyPressed(KeyEventArgs* __this)
{
    return __this->_IsShiftKeyPressed;
}

int KeyEventArgs__get_Key(KeyEventArgs* __this)
{
    return __this->_Key;
}

void KeyEventArgs__set_IsAltKeyPressed(KeyEventArgs* __this, bool value)
{
    __this->_IsAltKeyPressed = value;
}

void KeyEventArgs__set_IsControlKeyPressed(KeyEventArgs* __this, bool value)
{
    __this->_IsControlKeyPressed = value;
}

void KeyEventArgs__set_IsMetaKeyPressed(KeyEventArgs* __this, bool value)
{
    __this->_IsMetaKeyPressed = value;
}

void KeyEventArgs__set_IsShiftKeyPressed(KeyEventArgs* __this, bool value)
{
    __this->_IsShiftKeyPressed = value;
}

void KeyEventArgs__set_Key(KeyEventArgs* __this, int value)
{
    __this->_Key = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyPressed__uType* KeyPressed__typeof()
{
    static ::uStaticStrong<KeyPressed__uType*> type;
    if (type != NULL) return type;

    type = (KeyPressed__uType*)::uAllocClassType(sizeof(KeyPressed__uType), "Fuse.Input.KeyPressed", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::KeyPressedArgs*))KeyPressed__Invoke;

    return type;
}

void KeyPressed___ObjInit_1(KeyPressed* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs___ObjInit(__this);
}

void KeyPressed__Invoke(KeyPressed* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::KeyPressedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::KeyPressedArgs*>(sender, args);
}

KeyPressed* KeyPressed__New_1(::uStatic* __this)
{
    KeyPressed* inst = (KeyPressed*)::uAllocObject(sizeof(KeyPressed), KeyPressed__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyPressedArgs__uType* KeyPressedArgs__typeof()
{
    static ::uStaticStrong<KeyPressedArgs__uType*> type;
    if (type != NULL) return type;

    type = (KeyPressedArgs__uType*)::uAllocClassType(sizeof(KeyPressedArgs__uType), "Fuse.Input.KeyPressedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::KeyEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(KeyPressedArgs__uType, __interface_0));

    return type;
}

void KeyPressedArgs___ObjInit_3(KeyPressedArgs* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::KeyEventArgs___ObjInit_2(__this, key, node);
    __this->IsMetaKeyPressed(isMetaKeyPressed);
    __this->IsControlKeyPressed(isControlKeyPressed);
    __this->IsShiftKeyPressed(isShiftKeyPressed);
    __this->IsAltKeyPressed(isAltKeyPressed);
}

KeyPressedArgs* KeyPressedArgs__New_3(::uStatic* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::app::Fuse::Node* node)
{
    KeyPressedArgs* inst = (KeyPressedArgs*)::uAllocObject(sizeof(KeyPressedArgs), KeyPressedArgs__typeof());
    inst->_ObjInit_3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, node);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* KeyPressedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.KeyPressedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::KeyPressedArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyReleased__uType* KeyReleased__typeof()
{
    static ::uStaticStrong<KeyReleased__uType*> type;
    if (type != NULL) return type;

    type = (KeyReleased__uType*)::uAllocClassType(sizeof(KeyReleased__uType), "Fuse.Input.KeyReleased", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::KeyReleasedArgs*))KeyReleased__Invoke;

    return type;
}

void KeyReleased___ObjInit_1(KeyReleased* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs___ObjInit(__this);
}

void KeyReleased__Invoke(KeyReleased* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::KeyReleasedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::KeyReleasedArgs*>(sender, args);
}

KeyReleased* KeyReleased__New_1(::uStatic* __this)
{
    KeyReleased* inst = (KeyReleased*)::uAllocObject(sizeof(KeyReleased), KeyReleased__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

KeyReleasedArgs__uType* KeyReleasedArgs__typeof()
{
    static ::uStaticStrong<KeyReleasedArgs__uType*> type;
    if (type != NULL) return type;

    type = (KeyReleasedArgs__uType*)::uAllocClassType(sizeof(KeyReleasedArgs__uType), "Fuse.Input.KeyReleasedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::KeyEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(KeyReleasedArgs__uType, __interface_0));

    return type;
}

void KeyReleasedArgs___ObjInit_3(KeyReleasedArgs* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::KeyEventArgs___ObjInit_2(__this, key, node);
    __this->IsMetaKeyPressed(isMetaKeyPressed);
    __this->IsControlKeyPressed(isControlKeyPressed);
    __this->IsShiftKeyPressed(isShiftKeyPressed);
    __this->IsAltKeyPressed(isAltKeyPressed);
}

KeyReleasedArgs* KeyReleasedArgs__New_3(::uStatic* __this, int key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::app::Fuse::Node* node)
{
    KeyReleasedArgs* inst = (KeyReleasedArgs*)::uAllocObject(sizeof(KeyReleasedArgs), KeyReleasedArgs__typeof());
    inst->_ObjInit_3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, node);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* KeyReleasedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.KeyReleasedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::KeyReleasedArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::app::Uno::Float2 Pointer___Coord;
::uStaticStrong< ::app::Fuse::Input::PointerEntered*> Pointer___entered;
::uStaticStrong< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*> Pointer___hardCapturers;
::uStaticStrong< ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_*> Pointer___lastHitNodes;
::uStaticStrong< ::app::Fuse::Input::PointerLeft*> Pointer___left;
::uStaticStrong< ::app::Fuse::Input::PointerMoved*> Pointer___moved;
::uStaticStrong< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*> Pointer___pointersDown;
::uStaticStrong< ::app::Fuse::Input::PointerPressed*> Pointer___pressed;
::uStaticStrong< ::app::Fuse::Input::PointerReleased*> Pointer___released;
::uStaticStrong< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*> Pointer___softCapturers;
::uStaticStrong< ::app::Fuse::Input::PointerWheelMoved*> Pointer___wheelMoved;

Pointer__uType* Pointer__typeof()
{
    static ::uStaticStrong<Pointer__uType*> type;
    if (type != NULL) return type;

    type = (Pointer__uType*)::uAllocClassType(sizeof(Pointer__uType), "Fuse.Input.Pointer");

    return type;
}

void Pointer___TypeInit(::uStatic* __this)
{
    Pointer___pressed = ::app::Fuse::Input::PointerPressed__New_1(NULL);
    Pointer___moved = ::app::Fuse::Input::PointerMoved__New_1(NULL);
    Pointer___released = ::app::Fuse::Input::PointerReleased__New_1(NULL);
    Pointer___entered = ::app::Fuse::Input::PointerEntered__New_1(NULL);
    Pointer___left = ::app::Fuse::Input::PointerLeft__New_1(NULL);
    Pointer___wheelMoved = ::app::Fuse::Input::PointerWheelMoved__New_1(NULL);
    Pointer___pointersDown = ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord__New_1(NULL);
    Pointer___softCapturers = ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer___New_1(NULL);
    Pointer___hardCapturers = ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer__New_1(NULL);
    Pointer___lastHitNodes = ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder___New_1(NULL);
}

void Pointer__AddHandlers(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* pressed, ::uDelegate* moved, ::uDelegate* released, ::uDelegate* entered, ::uDelegate* left, ::uDelegate* wheelMoved)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)pressed, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(Pointer__get_Pressed(NULL))->AddHandler(node, pressed);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)moved, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(Pointer__get_Moved(NULL))->AddHandler(node, moved);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)released, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(Pointer__get_Released(NULL))->AddHandler(node, released);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)entered, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs*>(Pointer__get_Entered(NULL))->AddHandler(node, entered);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)left, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs*>(Pointer__get_Left(NULL))->AddHandler(node, left);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)wheelMoved, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs*>(Pointer__get_WheelMoved(NULL))->AddHandler(node, wheelMoved);
    }
}

::app::Uno::Float2 Pointer__get_Coord(::uStatic* __this)
{
    return Pointer___Coord;
}

::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* Pointer__get_Entered(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs*)Pointer___entered;
}

::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* Pointer__get_Left(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs*)Pointer___left;
}

::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* Pointer__get_Moved(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*)Pointer___moved;
}

::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* Pointer__get_Pressed(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*)Pointer___pressed;
}

::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* Pointer__get_Released(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*)Pointer___released;
}

::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* Pointer__get_WheelMoved(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs*)Pointer___wheelMoved;
}

::app::Fuse::Input::Capturer* Pointer__GetHardCapturer(::uStatic* __this, int pointIndex)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->ContainsKey(pointIndex))
    {
        ::app::Fuse::Input::Capturer* hc = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->Item(pointIndex);

        if (::uPtr< ::app::Fuse::Input::Capturer*>(hc)->IsSuitable())
        {
            return hc;
        }

        ::uPtr< ::uDelegate*>(::uPtr< ::app::Fuse::Input::Capturer*>(hc)->LostCallback())->InvokeVoid();
        ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->Remove(pointIndex);
    }

    return NULL;
}

::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* Pointer__GetLastHitList(::uStatic* __this, int pointIndex)
{
    ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* lastHitList = NULL;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_*>(Pointer___lastHitNodes)->TryGetValue(pointIndex, &lastHitList))
    {
        lastHitList = ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder__New_1(NULL);
        ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_List_Fuse_Input_Pointer_PELHolder_*>(Pointer___lastHitNodes)->Add(pointIndex, lastHitList);
    }

    return lastHitList;
}

::app::Fuse::Input::Capturer* Pointer__GetSoftCapturer(::uStatic* __this, int pointIndex)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->ContainsKey(pointIndex))
    {
        ::uObject* list = ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->Item(pointIndex);

        while (::app::Uno::Collections::ICollection__Fuse_Input_Capturer::Count(::uPtr< ::uObject*>(list)) > 0)
        {
            ::app::Fuse::Input::Capturer* n = ::app::Uno::Collections::EnumerableExtensions__First__Fuse_Input_Capturer(NULL, (::uObject*)list);

            if (::uPtr< ::app::Fuse::Input::Capturer*>(n)->IsSuitable())
            {
                return n;
            }

            ::app::Uno::Collections::IList__Fuse_Input_Capturer::RemoveAt(::uPtr< ::uObject*>(list), 0);
            ::uPtr< ::uDelegate*>(::uPtr< ::app::Fuse::Input::Capturer*>(n)->LostCallback())->InvokeVoid();
        }
    }

    return NULL;
}

bool Pointer__HardCapture(::uStatic* __this, int pointIndex, ::app::Fuse::Node* node, ::uObject* identity, ::uDelegate* lostCallback)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)lostCallback, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("HardCapture requires lostCallback Action")));
    }

    if (identity == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("HardCapture requires identity object")));
    }

    if (node == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("HardCapture requires Node")));
    }

    if (!::uPtr< ::app::Fuse::Node*>(node)->IsEnabled() || !::uPtr< ::app::Fuse::Node*>(node)->IsRooted())
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("HardCapture can only be done on rooted enabled node"), 1, ::uGetConstString("/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno"), 1126);
        return false;
    }

    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->ContainsKey(pointIndex))
    {
        ::uObject* sc = ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->Item(pointIndex);

        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Input_Capturer::Count(::uPtr< ::uObject*>(sc)); i++)
        {
            if (::uPtr< ::app::Fuse::Input::Capturer*>(::app::Uno::Collections::IList__Fuse_Input_Capturer::Item(::uPtr< ::uObject*>(sc), i))->Identity() == identity)
            {
                continue;
            }

            if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)::uPtr< ::app::Fuse::Input::Capturer*>(::app::Uno::Collections::IList__Fuse_Input_Capturer::Item(::uPtr< ::uObject*>(sc), i))->LostCallback(), NULL))
            {
                ::uPtr< ::uDelegate*>(::uPtr< ::app::Fuse::Input::Capturer*>(::app::Uno::Collections::IList__Fuse_Input_Capturer::Item(::uPtr< ::uObject*>(sc), i))->LostCallback())->InvokeVoid();
            }
        }

        ::app::Uno::Collections::ICollection__Fuse_Input_Capturer::Clear(::uPtr< ::uObject*>(sc));
    }

    ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->Item(pointIndex, ::app::Fuse::Input::Capturer__New_1(NULL, node, identity, lostCallback));
    return true;
}

bool Pointer__IsHardCaptured(::uStatic* __this, int pointIndex, ::uObject* behavior)
{
    ::app::Fuse::Input::Capturer* hc = Pointer__GetHardCapturer(NULL, pointIndex);
    return (hc != NULL) && (::uPtr< ::app::Fuse::Input::Capturer*>(hc)->Identity() == behavior);
}

bool Pointer__IsHardCaptured_1(::uStatic* __this, int pointIndex)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->ContainsKey(pointIndex);
}

bool Pointer__IsOnFocusablePath(::uStatic* __this, ::app::Fuse::Node* n)
{
    while (n != NULL)
    {
        if (::app::Fuse::Input::Focus__IsFocusable(NULL, n))
        {
            return true;
        }

        n = ::uPtr< ::app::Fuse::Node*>(n)->Parent();
    }

    return false;
}

bool Pointer__IsPressed(::uStatic* __this, int pointIndex)
{
    for (::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Pointer_PointerRecord enum_124 = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Pointer_PointerRecord p = enum_124.Current();

        if (p.Key() == pointIndex)
        {
            return true;
        }
    }

    return false;
}

bool Pointer__IsSoftCaptured(::uStatic* __this, int pointIndex, ::uObject* capturerIdentity)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->ContainsKey(pointIndex))
    {
        ::uObject* sc = ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->Item(pointIndex);

        for (::uObject* enum_125 = ::app::Uno::Collections::IEnumerable__Fuse_Input_Capturer::GetEnumerator(::uPtr< ::uObject*>(sc)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
        {
            ::app::Fuse::Input::Capturer* s = ::app::Uno::Collections::IEnumerator__Fuse_Input_Capturer::Current(::uPtr< ::uObject*>(enum_125));

            if (::uPtr< ::app::Fuse::Input::Capturer*>(s)->Identity() == capturerIdentity)
            {
                return true;
            }
        }
    }

    return false;
}

void Pointer__MarkAncestorHits(::uStatic* __this, ::app::Fuse::Node* hitObject, ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* list)
{
    ::app::Fuse::Input::Pointer_PELHolder* collection_129;

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(list)->Count(); ++i)
    {
        ::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(list)->Item(i))->Status = 1;
    }

    while (hitObject != NULL)
    {
        bool found = false;

        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(list)->Count(); ++i)
        {
            if (::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(list)->Item(i))->Node == hitObject)
            {
                ::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(list)->Item(i))->Status = 2;
                found = true;
                break;
            }
        }

        if (!found)
        {
            ::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(list)->Add((collection_129 = ::app::Fuse::Input::Pointer_PELHolder__New_1(NULL), ::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(collection_129)->Node = hitObject, ::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(collection_129)->Status = 0, collection_129));
        }

        hitObject = ::uPtr< ::app::Fuse::Node*>(hitObject)->Parent();
    }
}

void Pointer__ProcessPointerEnterLeave(::uStatic* __this, ::app::Fuse::HitTestResult* result, ::app::Fuse::Input::PointerEventData* args)
{
    ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder* lastHitList = Pointer__GetLastHitList(NULL, ::uPtr< ::app::Fuse::Input::PointerEventData*>(args)->PointIndex);
    Pointer__MarkAncestorHits(NULL, (result == NULL) ? (::app::Fuse::Node*)NULL : ::uPtr< ::app::Fuse::HitTestResult*>(result)->HitObject(), lastHitList);

    for (int j = ::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(lastHitList)->Count() - 1; j >= 0; j--)
    {
        if (::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(lastHitList)->Item(j))->Status != 1)
        {
            continue;
        }

        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs*>(Pointer__get_Left(NULL))->RaiseWithoutBubble(::app::Fuse::Input::PointerLeftArgs__New_3(NULL, args, ::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(lastHitList)->Item(j))->Node), 2);
        lastHitList->RemoveAt(j);
    }

    for (int j = 0; j < lastHitList->Count(); ++j)
    {
        if (::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(lastHitList)->Item(j))->Status != 0)
        {
            continue;
        }

        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs*>(Pointer__get_Entered(NULL))->RaiseWithoutBubble(::app::Fuse::Input::PointerEnteredArgs__New_3(NULL, args, ::uPtr< ::app::Fuse::Input::Pointer_PELHolder*>(::uPtr< ::app::Uno::Collections::List__Fuse_Input_Pointer_PELHolder*>(lastHitList)->Item(j))->Node), 1);
    }
}

::app::Fuse::Input::PointerMovedArgs* Pointer__RaiseMoved(::uStatic* __this, ::app::Fuse::Node* root, ::app::Fuse::Input::PointerEventData* data)
{
    ::app::Fuse::Node* target = Pointer__RoutePointerEvent(NULL, data, root);
    ::app::Fuse::Input::PointerMovedArgs* e = ::app::Fuse::Input::PointerMovedArgs__New_3(NULL, data, target);

    if (target != NULL)
    {
        Pointer__RaisePointerMovedInternal(NULL, e);
    }

    return e;
}

void Pointer__RaisePointerMovedInternal(::uStatic* __this, ::app::Fuse::Input::PointerMovedArgs* args)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->ContainsKey(::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->PointIndex()))
    {
        ::app::Fuse::Input::Pointer_PointerRecord* p = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->Item(::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->PointIndex());
        ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(p)->DistanceMoved = ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(p)->DistanceMoved + ::app::Uno::Vector__Length_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, args->WindowPoint(), ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(p)->WindowPoint));
        p->WindowPoint = args->WindowPoint();
    }

    Pointer__set_Coord(NULL, ::uPtr< ::app::Fuse::Input::PointerMovedArgs*>(args)->WindowPoint());
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(Pointer__get_Moved(NULL))->RaiseWithBubble(args, 1);
}

void Pointer__RaisePointerPressedInternal(::uStatic* __this, ::app::Fuse::Input::PointerPressedArgs* args)
{
    ::app::Fuse::Input::Pointer_PointerRecord* collection_130;
    collection_130 = ::app::Fuse::Input::Pointer_PointerRecord__New_1(NULL);
    ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(collection_130)->WindowPoint = ::uPtr< ::app::Fuse::Input::PointerPressedArgs*>(args)->WindowPoint();
    collection_130->DistanceMoved = 0.0f;
    ::app::Fuse::Input::Pointer_PointerRecord* p = collection_130;
    ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->Item(args->PointIndex(), p);
    Pointer__set_Coord(NULL, args->WindowPoint());
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(Pointer__get_Pressed(NULL))->RaiseWithBubble(args, 1);

    if (!args->IsHandled() && !Pointer__IsOnFocusablePath(NULL, args->Node()))
    {
        ::app::Fuse::Input::Focus__Release(NULL);
    }

    p->WasHandled = args->IsHandled();
}

void Pointer__RaisePointerReleasedInternal(::uStatic* __this, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->ContainsKey(::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->PointIndex()))
    {
        ::app::Fuse::Input::Pointer_PointerRecord* p = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->Item(::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->PointIndex());
        ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(p)->DistanceMoved = ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(p)->DistanceMoved + ::app::Uno::Vector__Length_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, args->WindowPoint(), ::uPtr< ::app::Fuse::Input::Pointer_PointerRecord*>(p)->WindowPoint));
        ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Pointer_PointerRecord*>(Pointer___pointersDown)->Remove(args->PointIndex());
    }

    Pointer__set_Coord(NULL, ::uPtr< ::app::Fuse::Input::PointerReleasedArgs*>(args)->WindowPoint());
    ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(Pointer__get_Released(NULL))->RaiseWithBubble(args, 1);
}

::app::Fuse::Input::PointerPressedArgs* Pointer__RaisePressed(::uStatic* __this, ::app::Fuse::Node* root, ::app::Fuse::Input::PointerEventData* data)
{
    ::app::Fuse::Node* target = Pointer__RoutePointerEvent(NULL, data, root);
    ::app::Fuse::Input::PointerPressedArgs* e = ::app::Fuse::Input::PointerPressedArgs__New_3(NULL, data, target);

    if (target == NULL)
    {
        ::app::Fuse::Input::Focus__Release(NULL);
        return e;
    }

    Pointer__RaisePointerPressedInternal(NULL, e);
    return e;
}

::app::Fuse::Input::PointerReleasedArgs* Pointer__RaiseReleased(::uStatic* __this, ::app::Fuse::Node* root, ::app::Fuse::Input::PointerEventData* data)
{
    ::app::Fuse::Node* target = Pointer__RoutePointerEvent(NULL, data, root);
    ::app::Fuse::Input::PointerReleasedArgs* e = ::app::Fuse::Input::PointerReleasedArgs__New_3(NULL, data, target);

    if (target != NULL)
    {
        Pointer__RaisePointerReleasedInternal(NULL, e);
    }

    if (::uPtr< ::app::Fuse::Input::PointerEventData*>(data)->PointerType == 2)
    {
        Pointer__ProcessPointerEnterLeave(NULL, NULL, data);
    }

    return e;
}

void Pointer__ReleaseAllCaptures(::uStatic* __this, ::uObject* identity)
{
    for (::app::Uno::Collections::Dictionary2_Enumerator__int__Uno_Collections_IList_Fuse_Input_Capturer_ enum_126 = ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->GetEnumerator(); enum_126.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__int__Uno_Collections_IList_Fuse_Input_Capturer_ sc = enum_126.Current();

        for (int i = ::app::Uno::Collections::ICollection__Fuse_Input_Capturer::Count(::uPtr< ::uObject*>(sc.Value())) - 1; i >= 0; --i)
        {
            if (::uPtr< ::app::Fuse::Input::Capturer*>(::app::Uno::Collections::IList__Fuse_Input_Capturer::Item(::uPtr< ::uObject*>(sc.Value()), i))->Identity() == identity)
            {
                ::app::Uno::Collections::IList__Fuse_Input_Capturer::RemoveAt(::uPtr< ::uObject*>(sc.Value()), i);
            }
        }
    }

    ::app::Uno::Collections::List__int* remove = ::app::Uno::Collections::List__int__New_1(NULL);

    for (::app::Uno::Collections::Dictionary2_Enumerator__int__Fuse_Input_Capturer enum_127 = ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->GetEnumerator(); enum_127.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__int__Fuse_Input_Capturer hc = enum_127.Current();

        if (::uPtr< ::app::Fuse::Input::Capturer*>(hc.Value())->Identity() == identity)
        {
            ::uPtr< ::app::Uno::Collections::List__int*>(remove)->Add(hc.Key());
        }
    }

    for (::app::Uno::Collections::List1_Enumerator__int enum_128 = ::uPtr< ::app::Uno::Collections::List__int*>(remove)->GetEnumerator(); enum_128.MoveNext(); )
    {
        int r = enum_128.Current();
        ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->Remove(r);
    }
}

void Pointer__ReleaseHardCapture(::uStatic* __this, int pointIndex)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->ContainsKey(pointIndex))
    {
        ::uPtr< ::app::Uno::Collections::Dictionary__int__Fuse_Input_Capturer*>(Pointer___hardCapturers)->Remove(pointIndex);
    }
}

void Pointer__ReleaseSoftCapture(::uStatic* __this, int pointIndex, ::uObject* identity)
{
    if (::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->ContainsKey(pointIndex))
    {
        ::uObject* sc = ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->Item(pointIndex);

        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Input_Capturer::Count(::uPtr< ::uObject*>(sc)); i++)
        {
            if (::uPtr< ::app::Fuse::Input::Capturer*>(::app::Uno::Collections::IList__Fuse_Input_Capturer::Item(::uPtr< ::uObject*>(sc), i))->Identity() == identity)
            {
                ::app::Uno::Collections::IList__Fuse_Input_Capturer::RemoveAt(::uPtr< ::uObject*>(sc), i--);
            }
        }
    }
}

void Pointer__RemoveHandlers(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* pressed, ::uDelegate* moved, ::uDelegate* released, ::uDelegate* entered, ::uDelegate* left, ::uDelegate* wheelMoved)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)pressed, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*>(Pointer__get_Pressed(NULL))->RemoveHandler(node, pressed);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)moved, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*>(Pointer__get_Moved(NULL))->RemoveHandler(node, moved);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)released, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*>(Pointer__get_Released(NULL))->RemoveHandler(node, released);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)entered, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs*>(Pointer__get_Entered(NULL))->RemoveHandler(node, entered);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)left, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs*>(Pointer__get_Left(NULL))->RemoveHandler(node, left);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)wheelMoved, NULL))
    {
        ::uPtr< ::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs*>(Pointer__get_WheelMoved(NULL))->RemoveHandler(node, wheelMoved);
    }
}

::app::Fuse::Node* Pointer__RoutePointerEvent(::uStatic* __this, ::app::Fuse::Input::PointerEventData* plainEvent, ::app::Fuse::Node* root)
{
    ::app::Fuse::Node* n = Pointer__RouteToSoftCapturer(NULL, plainEvent);

    if (n != NULL)
    {
        return n;
    }

    n = Pointer__RouteToCapturer(NULL, plainEvent);

    if (n != NULL)
    {
        return n;
    }

    n = Pointer__RouteToHit(NULL, plainEvent, root);

    if (n != NULL)
    {
        return n;
    }

    return NULL;
}

::app::Fuse::Node* Pointer__RouteToCapturer(::uStatic* __this, ::app::Fuse::Input::PointerEventData* args)
{
    ::app::Fuse::Input::Capturer* capturer = Pointer__GetHardCapturer(NULL, ::uPtr< ::app::Fuse::Input::PointerEventData*>(args)->PointIndex);

    if (capturer == NULL)
    {
        return NULL;
    }

    return ::uPtr< ::app::Fuse::Input::Capturer*>(capturer)->Node();
}

::app::Fuse::Node* Pointer__RouteToHit(::uStatic* __this, ::app::Fuse::Input::PointerEventData* args, ::app::Fuse::Node* root)
{
    ::app::Fuse::HitTestResult* result = ::app::Fuse::Input::HitTestHelpers__HitTestNearest(NULL, root, ::uPtr< ::app::Fuse::Input::PointerEventData*>(args)->WindowPoint);

    while ((result != NULL) && !::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::HitTestResult*>(result)->HitObject())->IsEnabled())
    {
        ::uPtr< ::app::Fuse::HitTestResult*>(result)->HitObject(::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::HitTestResult*>(result)->HitObject())->Parent());
    }

    Pointer__ProcessPointerEnterLeave(NULL, result, args);

    if (result == NULL)
    {
        return NULL;
    }

    return result->HitObject();
}

::app::Fuse::Node* Pointer__RouteToSoftCapturer(::uStatic* __this, ::app::Fuse::Input::PointerEventData* args)
{
    ::app::Fuse::Input::Capturer* sc = Pointer__GetSoftCapturer(NULL, ::uPtr< ::app::Fuse::Input::PointerEventData*>(args)->PointIndex);

    if (sc == NULL)
    {
        return NULL;
    }

    return ::uPtr< ::app::Fuse::Input::Capturer*>(sc)->Node();
}

void Pointer__set_Coord(::uStatic* __this, ::app::Uno::Float2 value)
{
    Pointer___Coord = value;
}

bool Pointer__SoftCapture(::uStatic* __this, int pointIndex, ::app::Fuse::Node* softCapturer, ::uObject* identity, ::uDelegate* lostCallback)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)lostCallback, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("SoftCapture requires lostCallback Action")));
    }

    if (identity == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("SoftCapture requires identity object")));
    }

    if (softCapturer == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("SoftCapture requires softCapturer Node")));
    }

    if (!::uPtr< ::app::Fuse::Node*>(softCapturer)->IsEnabled() || !::uPtr< ::app::Fuse::Node*>(softCapturer)->IsRooted())
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("SoftCapture can only be done on rooted enabled node"), 1, ::uGetConstString("/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno"), 1035);
        return false;
    }

    if (Pointer__GetHardCapturer(NULL, pointIndex) != NULL)
    {
        return false;
    }

    if (!::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->ContainsKey(pointIndex))
    {
        ::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->Add(pointIndex, (::uObject*)::app::Uno::Collections::List__Fuse_Input_Capturer__New_1(NULL));
    }

    ::app::Uno::Collections::ICollection__Fuse_Input_Capturer::Add(::uPtr< ::uObject*>(::uPtr< ::app::Uno::Collections::Dictionary__int__Uno_Collections_IList_Fuse_Input_Capturer_*>(Pointer___softCapturers)->Item(pointIndex)), ::app::Fuse::Input::Capturer__New_1(NULL, softCapturer, identity, lostCallback));
    return true;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Pointer_PELHolder__uType* Pointer_PELHolder__typeof()
{
    static ::uStaticStrong<Pointer_PELHolder__uType*> type;
    if (type != NULL) return type;

    type = (Pointer_PELHolder__uType*)::uAllocClassType(sizeof(Pointer_PELHolder__uType), "Fuse.Input.Pointer.PELHolder", false, 0, 1, 0);

    type->SetStrongRefs(
        "Node", offsetof(Pointer_PELHolder, Node));

    return type;
}

void Pointer_PELHolder___ObjInit(Pointer_PELHolder* __this)
{
}

Pointer_PELHolder* Pointer_PELHolder__New_1(::uStatic* __this)
{
    Pointer_PELHolder* inst = (Pointer_PELHolder*)::uAllocObject(sizeof(Pointer_PELHolder), Pointer_PELHolder__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Pointer_PELStatus__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Input.Pointer.PELStatus", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Added", 0LL,
        "Removed", 1LL,
        "Remain", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Pointer_PointerRecord__uType* Pointer_PointerRecord__typeof()
{
    static ::uStaticStrong<Pointer_PointerRecord__uType*> type;
    if (type != NULL) return type;

    type = (Pointer_PointerRecord__uType*)::uAllocClassType(sizeof(Pointer_PointerRecord__uType), "Fuse.Input.Pointer.PointerRecord", false, 0, 0, 0);

    return type;
}

void Pointer_PointerRecord___ObjInit(Pointer_PointerRecord* __this)
{
    __this->TimeAppeared = ::app::Uno::Diagnostics::Clock__GetSeconds(NULL);
}

Pointer_PointerRecord* Pointer_PointerRecord__New_1(::uStatic* __this)
{
    Pointer_PointerRecord* inst = (Pointer_PointerRecord*)::uAllocObject(sizeof(Pointer_PointerRecord), Pointer_PointerRecord__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerEntered__uType* PointerEntered__typeof()
{
    static ::uStaticStrong<PointerEntered__uType*> type;
    if (type != NULL) return type;

    type = (PointerEntered__uType*)::uAllocClassType(sizeof(PointerEntered__uType), "Fuse.Input.PointerEntered", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerEnteredArgs*))PointerEntered__Invoke;

    return type;
}

void PointerEntered___ObjInit_1(PointerEntered* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs___ObjInit(__this);
}

void PointerEntered__Invoke(PointerEntered* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerEnteredArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::PointerEnteredArgs*>(sender, args);
}

PointerEntered* PointerEntered__New_1(::uStatic* __this)
{
    PointerEntered* inst = (PointerEntered*)::uAllocObject(sizeof(PointerEntered), PointerEntered__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerEnteredArgs__uType* PointerEnteredArgs__typeof()
{
    static ::uStaticStrong<PointerEnteredArgs__uType*> type;
    if (type != NULL) return type;

    type = (PointerEnteredArgs__uType*)::uAllocClassType(sizeof(PointerEnteredArgs__uType), "Fuse.Input.PointerEnteredArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::PointerEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(PointerEnteredArgs__uType, __interface_0));

    return type;
}

void PointerEnteredArgs___ObjInit_3(PointerEnteredArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::PointerEventArgs___ObjInit_2(__this, data, node);
}

PointerEnteredArgs* PointerEnteredArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    PointerEnteredArgs* inst = (PointerEnteredArgs*)::uAllocObject(sizeof(PointerEnteredArgs), PointerEnteredArgs__typeof());
    inst->_ObjInit_3(data, node);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* PointerEnteredHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.PointerEnteredHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::PointerEnteredArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerEventArgs__uType* PointerEventArgs__typeof()
{
    static ::uStaticStrong<PointerEventArgs__uType*> type;
    if (type != NULL) return type;

    type = (PointerEventArgs__uType*)::uAllocClassType(sizeof(PointerEventArgs__uType), "Fuse.Input.PointerEventArgs", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::NodeEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(PointerEventArgs__uType, __interface_0));

    type->SetStrongRefs(
        "_data", offsetof(PointerEventArgs, _data));

    return type;
}

void PointerEventArgs___ObjInit_2(PointerEventArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    ::app::Fuse::NodeEventArgs___ObjInit_1(__this, node);
    __this->_data = data;
}

::app::Fuse::Input::PointerEventData* PointerEventArgs__get_Data(PointerEventArgs* __this)
{
    return __this->_data;
}

bool PointerEventArgs__get_IsHardCaptured(PointerEventArgs* __this)
{
    return ::app::Fuse::Input::Pointer__IsHardCaptured_1(NULL, __this->PointIndex());
}

bool PointerEventArgs__get_IsPrimary(PointerEventArgs* __this)
{
    return ::uPtr< ::app::Fuse::Input::PointerEventData*>(__this->_data)->IsPrimary;
}

int PointerEventArgs__get_PointerType(PointerEventArgs* __this)
{
    return ::uPtr< ::app::Fuse::Input::PointerEventData*>(__this->_data)->PointerType;
}

int PointerEventArgs__get_PointIndex(PointerEventArgs* __this)
{
    return ::uPtr< ::app::Fuse::Input::PointerEventData*>(__this->_data)->PointIndex;
}

::app::Uno::Float2 PointerEventArgs__get_WindowPoint(PointerEventArgs* __this)
{
    return ::uPtr< ::app::Fuse::Input::PointerEventData*>(__this->_data)->WindowPoint;
}

bool PointerEventArgs__IsHardCapturedTo(PointerEventArgs* __this, ::uObject* behavior)
{
    return ::app::Fuse::Input::Pointer__IsHardCaptured(NULL, __this->PointIndex(), behavior);
}

bool PointerEventArgs__IsSoftCapturedTo(PointerEventArgs* __this, ::uObject* behavior)
{
    return ::app::Fuse::Input::Pointer__IsSoftCaptured(NULL, __this->PointIndex(), behavior);
}

void PointerEventArgs__ReleaseHardCapture(PointerEventArgs* __this, ::uObject* behavior)
{
    if (__this->IsHardCapturedTo(behavior))
    {
        ::app::Fuse::Input::Pointer__ReleaseHardCapture(NULL, __this->PointIndex());
    }
}

void PointerEventArgs__ReleaseSoftCapture(PointerEventArgs* __this, ::uObject* behavior)
{
    ::app::Fuse::Input::Pointer__ReleaseSoftCapture(NULL, __this->PointIndex(), behavior);
}

bool PointerEventArgs__TryHardCapture(PointerEventArgs* __this, ::uObject* identity, ::uDelegate* lostCallback, ::app::Fuse::Node* captureNode)
{
    if (!__this->IsHardCaptured())
    {
        return ::app::Fuse::Input::Pointer__HardCapture(NULL, __this->PointIndex(), (captureNode != NULL) ? captureNode : __this->Node(), identity, lostCallback);
    }

    return false;
}

bool PointerEventArgs__TrySoftCapture(PointerEventArgs* __this, ::uObject* identity, ::uDelegate* lostCallback, ::app::Fuse::Node* captureNode)
{
    return ::app::Fuse::Input::Pointer__SoftCapture(NULL, __this->PointIndex(), (captureNode != NULL) ? captureNode : __this->Node(), identity, lostCallback);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerEventData__uType* PointerEventData__typeof()
{
    static ::uStaticStrong<PointerEventData__uType*> type;
    if (type != NULL) return type;

    type = (PointerEventData__uType*)::uAllocClassType(sizeof(PointerEventData__uType), "Fuse.Input.PointerEventData", false, 0, 0, 0);

    return type;
}

void PointerEventData___ObjInit(PointerEventData* __this)
{
}

PointerEventData* PointerEventData__New_1(::uStatic* __this)
{
    PointerEventData* inst = (PointerEventData*)::uAllocObject(sizeof(PointerEventData), PointerEventData__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerLeft__uType* PointerLeft__typeof()
{
    static ::uStaticStrong<PointerLeft__uType*> type;
    if (type != NULL) return type;

    type = (PointerLeft__uType*)::uAllocClassType(sizeof(PointerLeft__uType), "Fuse.Input.PointerLeft", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerLeftArgs*))PointerLeft__Invoke;

    return type;
}

void PointerLeft___ObjInit_1(PointerLeft* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs___ObjInit(__this);
}

void PointerLeft__Invoke(PointerLeft* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerLeftArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::PointerLeftArgs*>(sender, args);
}

PointerLeft* PointerLeft__New_1(::uStatic* __this)
{
    PointerLeft* inst = (PointerLeft*)::uAllocObject(sizeof(PointerLeft), PointerLeft__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerLeftArgs__uType* PointerLeftArgs__typeof()
{
    static ::uStaticStrong<PointerLeftArgs__uType*> type;
    if (type != NULL) return type;

    type = (PointerLeftArgs__uType*)::uAllocClassType(sizeof(PointerLeftArgs__uType), "Fuse.Input.PointerLeftArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::PointerEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(PointerLeftArgs__uType, __interface_0));

    return type;
}

void PointerLeftArgs___ObjInit_3(PointerLeftArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::PointerEventArgs___ObjInit_2(__this, data, node);
}

PointerLeftArgs* PointerLeftArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    PointerLeftArgs* inst = (PointerLeftArgs*)::uAllocObject(sizeof(PointerLeftArgs), PointerLeftArgs__typeof());
    inst->_ObjInit_3(data, node);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* PointerLeftHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.PointerLeftHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::PointerLeftArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerMoved__uType* PointerMoved__typeof()
{
    static ::uStaticStrong<PointerMoved__uType*> type;
    if (type != NULL) return type;

    type = (PointerMoved__uType*)::uAllocClassType(sizeof(PointerMoved__uType), "Fuse.Input.PointerMoved", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerMovedArgs*))PointerMoved__Invoke;

    return type;
}

void PointerMoved___ObjInit_1(PointerMoved* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs___ObjInit(__this);
}

void PointerMoved__Invoke(PointerMoved* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::PointerMovedArgs*>(sender, args);
}

PointerMoved* PointerMoved__New_1(::uStatic* __this)
{
    PointerMoved* inst = (PointerMoved*)::uAllocObject(sizeof(PointerMoved), PointerMoved__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerMovedArgs__uType* PointerMovedArgs__typeof()
{
    static ::uStaticStrong<PointerMovedArgs__uType*> type;
    if (type != NULL) return type;

    type = (PointerMovedArgs__uType*)::uAllocClassType(sizeof(PointerMovedArgs__uType), "Fuse.Input.PointerMovedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::PointerEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(PointerMovedArgs__uType, __interface_0));

    return type;
}

void PointerMovedArgs___ObjInit_3(PointerMovedArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::PointerEventArgs___ObjInit_2(__this, data, node);
}

PointerMovedArgs* PointerMovedArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    PointerMovedArgs* inst = (PointerMovedArgs*)::uAllocObject(sizeof(PointerMovedArgs), PointerMovedArgs__typeof());
    inst->_ObjInit_3(data, node);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* PointerMovedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.PointerMovedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::PointerMovedArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerPressed__uType* PointerPressed__typeof()
{
    static ::uStaticStrong<PointerPressed__uType*> type;
    if (type != NULL) return type;

    type = (PointerPressed__uType*)::uAllocClassType(sizeof(PointerPressed__uType), "Fuse.Input.PointerPressed", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerPressedArgs*))PointerPressed__Invoke;

    return type;
}

void PointerPressed___ObjInit_1(PointerPressed* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs___ObjInit(__this);
}

void PointerPressed__Invoke(PointerPressed* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerPressedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::PointerPressedArgs*>(sender, args);
}

PointerPressed* PointerPressed__New_1(::uStatic* __this)
{
    PointerPressed* inst = (PointerPressed*)::uAllocObject(sizeof(PointerPressed), PointerPressed__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerPressedArgs__uType* PointerPressedArgs__typeof()
{
    static ::uStaticStrong<PointerPressedArgs__uType*> type;
    if (type != NULL) return type;

    type = (PointerPressedArgs__uType*)::uAllocClassType(sizeof(PointerPressedArgs__uType), "Fuse.Input.PointerPressedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::PointerEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(PointerPressedArgs__uType, __interface_0));

    return type;
}

void PointerPressedArgs___ObjInit_3(PointerPressedArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::PointerEventArgs___ObjInit_2(__this, data, node);
}

PointerPressedArgs* PointerPressedArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    PointerPressedArgs* inst = (PointerPressedArgs*)::uAllocObject(sizeof(PointerPressedArgs), PointerPressedArgs__typeof());
    inst->_ObjInit_3(data, node);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* PointerPressedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.PointerPressedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::PointerPressedArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerReleased__uType* PointerReleased__typeof()
{
    static ::uStaticStrong<PointerReleased__uType*> type;
    if (type != NULL) return type;

    type = (PointerReleased__uType*)::uAllocClassType(sizeof(PointerReleased__uType), "Fuse.Input.PointerReleased", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__typeof());
    type->__fp_Invoke = (void(*)(::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerReleasedArgs*))PointerReleased__Invoke;

    return type;
}

void PointerReleased___ObjInit_1(PointerReleased* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs___ObjInit(__this);
}

void PointerReleased__Invoke(PointerReleased* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    ::uPtr< ::uDelegate*>(handler)->InvokeVoid< ::uObject*, ::app::Fuse::Input::PointerReleasedArgs*>(sender, args);
}

PointerReleased* PointerReleased__New_1(::uStatic* __this)
{
    PointerReleased* inst = (PointerReleased*)::uAllocObject(sizeof(PointerReleased), PointerReleased__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerReleasedArgs__uType* PointerReleasedArgs__typeof()
{
    static ::uStaticStrong<PointerReleasedArgs__uType*> type;
    if (type != NULL) return type;

    type = (PointerReleasedArgs__uType*)::uAllocClassType(sizeof(PointerReleasedArgs__uType), "Fuse.Input.PointerReleasedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::PointerEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(PointerReleasedArgs__uType, __interface_0));

    return type;
}

void PointerReleasedArgs___ObjInit_3(PointerReleasedArgs* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    ::app::Fuse::Input::PointerEventArgs___ObjInit_2(__this, data, node);
}

PointerReleasedArgs* PointerReleasedArgs__New_3(::uStatic* __this, ::app::Fuse::Input::PointerEventData* data, ::app::Fuse::Node* node)
{
    PointerReleasedArgs* inst = (PointerReleasedArgs*)::uAllocObject(sizeof(PointerReleasedArgs), PointerReleasedArgs__typeof());
    inst->_ObjInit_3(data, node);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* PointerReleasedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.PointerReleasedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::PointerReleasedArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerWheelMoved__uType* PointerWheelMoved__typeof()
{
    static ::uStaticStrong<PointerWheelMoved__uType*> type;
    if (type != NULL) return type;

    type = (PointerWheelMoved__uType*)::uAllocClassType(sizeof(PointerWheelMoved__uType), "Fuse.Input.PointerWheelMoved", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__typeof());

    return type;
}

void PointerWheelMoved___ObjInit_1(PointerWheelMoved* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs___ObjInit(__this);
}

PointerWheelMoved* PointerWheelMoved__New_1(::uStatic* __this)
{
    PointerWheelMoved* inst = (PointerWheelMoved*)::uAllocObject(sizeof(PointerWheelMoved), PointerWheelMoved__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PointerWheelMovedArgs__uType* PointerWheelMovedArgs__typeof()
{
    static ::uStaticStrong<PointerWheelMovedArgs__uType*> type;
    if (type != NULL) return type;

    type = (PointerWheelMovedArgs__uType*)::uAllocClassType(sizeof(PointerWheelMovedArgs__uType), "Fuse.Input.PointerWheelMovedArgs", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::Input::PointerEventArgs__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(PointerWheelMovedArgs__uType, __interface_0));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* PointerWheelMovedHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.PointerWheelMovedHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::PointerWheelMovedArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectionQuery__uType* SelectionQuery__typeof()
{
    static ::uStaticStrong<SelectionQuery__uType*> type;
    if (type != NULL) return type;

    type = (SelectionQuery__uType*)::uAllocClassType(sizeof(SelectionQuery__uType), "Fuse.Input.SelectionQuery", false, 0, 1, 0);

    type->SetStrongRefs(
        "_result", offsetof(SelectionQuery, _result));

    return type;
}

void SelectionQuery___ObjInit(SelectionQuery* __this)
{
}

SelectionQuery* SelectionQuery__New_1(::uStatic* __this)
{
    SelectionQuery* inst = (SelectionQuery*)::uAllocObject(sizeof(SelectionQuery), SelectionQuery__typeof());
    inst->_ObjInit();
    return inst;
}

::app::Fuse::HitTestResult* SelectionQuery__Select(SelectionQuery* __this, ::app::Fuse::Node* root, ::app::Uno::Float2 point)
{
    ::app::Fuse::HitTestContext* args = ::app::Fuse::HitTestContext__New_1(NULL, point, ::uNewDelegateNonVirt(::app::Fuse::HitTestCallback__typeof(), (const void*)SelectionQuery__Select_1, __this));
    ::uPtr< ::app::Fuse::Node*>(root)->HitTest(args);
    ::uPtr< ::app::Fuse::HitTestContext*>(args)->Dispose();
    return __this->_result;
}

void SelectionQuery__Select_1(SelectionQuery* __this, ::app::Fuse::HitTestResult* result)
{
    __this->count++;

    if ((__this->_result == NULL) || ((::uPtr< ::app::Fuse::HitTestResult*>(__this->_result)->HasHitDistance() && ::uPtr< ::app::Fuse::HitTestResult*>(result)->HasHitDistance()) && (::uPtr< ::app::Fuse::HitTestResult*>(result)->HitDistance() < ::uPtr< ::app::Fuse::HitTestResult*>(__this->_result)->HitDistance())))
    {
        __this->_result = result;
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextEntered__uType* TextEntered__typeof()
{
    static ::uStaticStrong<TextEntered__uType*> type;
    if (type != NULL) return type;

    type = (TextEntered__uType*)::uAllocClassType(sizeof(TextEntered__uType), "Fuse.Input.TextEntered", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__typeof());

    return type;
}

void TextEntered___ObjInit_1(TextEntered* __this)
{
    ::app::Fuse::NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs___ObjInit(__this);
}

TextEntered* TextEntered__New_1(::uStatic* __this)
{
    TextEntered* inst = (TextEntered*)::uAllocObject(sizeof(TextEntered), TextEntered__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextEnteredArgs__uType* TextEnteredArgs__typeof()
{
    static ::uStaticStrong<TextEnteredArgs__uType*> type;
    if (type != NULL) return type;

    type = (TextEnteredArgs__uType*)::uAllocClassType(sizeof(TextEnteredArgs__uType), "Fuse.Input.TextEnteredArgs", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::NodeEventArgs__typeof());
    type->__interface_0.__fp_Serialize = (void(*)(void*, ::uObject*))TextEnteredArgs__Fuse_Scripting_IScriptEvent_Serialize_1;

    type->SetInterfaces(
        ::app::Fuse::Scripting::IScriptEvent__typeof(), offsetof(TextEnteredArgs__uType, __interface_0));

    type->SetStrongRefs(
        "_Text", offsetof(TextEnteredArgs, _Text));

    return type;
}

void TextEnteredArgs__Fuse_Scripting_IScriptEvent_Serialize_1(TextEnteredArgs* __this, ::uObject* s)
{
    ::app::Fuse::Scripting::IEventSerializer::AddString(::uPtr< ::uObject*>(s), ::uGetConstString("text"), __this->Text());
}

::uString* TextEnteredArgs__get_Text(TextEnteredArgs* __this)
{
    return __this->_Text;
}

void TextEnteredArgs__set_Text(TextEnteredArgs* __this, ::uString* value)
{
    __this->_Text = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* TextEnteredHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Input.TextEnteredHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Input::TextEnteredArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Input::TextEntered*> TextService___textEntered;

TextService__uType* TextService__typeof()
{
    static ::uStaticStrong<TextService__uType*> type;
    if (type != NULL) return type;

    type = (TextService__uType*)::uAllocClassType(sizeof(TextService__uType), "Fuse.Input.TextService");

    return type;
}

void TextService___TypeInit(::uStatic* __this)
{
    TextService___textEntered = ::app::Fuse::Input::TextEntered__New_1(NULL);
}

::app::Fuse::NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* TextService__get_TextEntered(::uStatic* __this)
{
    return (::app::Fuse::NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs*)TextService___textEntered;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TraverseNodeExtensions__uType* TraverseNodeExtensions__typeof()
{
    static ::uStaticStrong<TraverseNodeExtensions__uType*> type;
    if (type != NULL) return type;

    type = (TraverseNodeExtensions__uType*)::uAllocClassType(sizeof(TraverseNodeExtensions__uType), "Fuse.Input.TraverseNodeExtensions");

    return type;
}

::app::Fuse::Node* TraverseNodeExtensions__FindNextChild(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* filter)
{
    ::app::Fuse::Node* someNode = ::uAs< ::app::Fuse::Node*>(node, ::app::Fuse::Node__typeof());

    if ((someNode != NULL) && (::uPtr< ::app::Fuse::Node*>(someNode)->SubNodeCount() > 0))
    {
        ::app::Fuse::Node* child = ::uPtr< ::app::Fuse::Node*>(someNode)->GetSubNode(0);

        if (::uPtr< ::uDelegate*>(filter)->Invoke< bool, ::app::Fuse::Node*>(child))
        {
            return child;
        }

        return TraverseNodeExtensions__FindNextChild(NULL, child, filter);
    }

    ::app::Fuse::Node* sibling = TraverseNodeExtensions__FindNextSibling(NULL, node);

    if (sibling != NULL)
    {
        if (::uPtr< ::uDelegate*>(filter)->Invoke< bool, ::app::Fuse::Node*>(sibling))
        {
            return sibling;
        }

        return TraverseNodeExtensions__FindNextChild(NULL, sibling, filter);
    }

    return NULL;
}

::app::Fuse::Node* TraverseNodeExtensions__FindNextChild_1(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Node* currentChild)
{
    if (((node != NULL) && (currentChild != NULL)) && (::uPtr< ::app::Fuse::Node*>(node)->SubNodeCount() > 0))
    {
        for (int i = 0; i < ::uPtr< ::app::Fuse::Node*>(node)->SubNodeCount(); i++)
        {
            if (::uPtr< ::app::Fuse::Node*>(node)->GetSubNode(i) == currentChild)
            {
                if ((i + 1) < ::uPtr< ::app::Fuse::Node*>(node)->SubNodeCount())
                {
                    return ::uPtr< ::app::Fuse::Node*>(node)->GetSubNode(i + 1);
                }
            }
        }
    }

    return NULL;
}

::app::Fuse::Node* TraverseNodeExtensions__FindNextSibling(::uStatic* __this, ::app::Fuse::Node* node)
{
    if (node == NULL)
    {
        return NULL;
    }

    ::app::Fuse::Node* parent = ::uPtr< ::app::Fuse::Node*>(node)->Parent();

    if (parent == NULL)
    {
        return NULL;
    }

    ::app::Fuse::Node* child = TraverseNodeExtensions__FindNextChild_1(NULL, parent, node);

    if (child != NULL)
    {
        return child;
    }

    return TraverseNodeExtensions__FindNextSibling(NULL, parent);
}

::app::Fuse::Node* TraverseNodeExtensions__FindPreviousChild(::uStatic* __this, ::app::Fuse::Node* node, ::app::Fuse::Node* currentChild)
{
    if (((node != NULL) && (currentChild != NULL)) && (::uPtr< ::app::Fuse::Node*>(node)->SubNodeCount() > 0))
    {
        for (int i = 0; i < ::uPtr< ::app::Fuse::Node*>(node)->SubNodeCount(); i++)
        {
            if (::uPtr< ::app::Fuse::Node*>(node)->GetSubNode(i) == currentChild)
            {
                if ((i - 1) >= 0)
                {
                    return ::uPtr< ::app::Fuse::Node*>(node)->GetSubNode(i - 1);
                }
            }
        }
    }

    return NULL;
}

::app::Fuse::Node* TraverseNodeExtensions__FindPreviousChild_1(::uStatic* __this, ::app::Fuse::Node* node, ::uDelegate* filter)
{
    ::app::Fuse::Node* someNode = ::uAs< ::app::Fuse::Node*>(node, ::app::Fuse::Node__typeof());

    if ((someNode != NULL) && (::uPtr< ::app::Fuse::Node*>(someNode)->SubNodeCount() > 0))
    {
        ::app::Fuse::Node* child = ::uPtr< ::app::Fuse::Node*>(someNode)->GetSubNode(::uPtr< ::app::Fuse::Node*>(someNode)->SubNodeCount() - 1);

        if (::uPtr< ::uDelegate*>(filter)->Invoke< bool, ::app::Fuse::Node*>(child))
        {
            return child;
        }

        return TraverseNodeExtensions__FindPreviousChild_1(NULL, child, filter);
    }

    ::app::Fuse::Node* sibling = TraverseNodeExtensions__FindPreviousSibling(NULL, node);

    if (sibling != NULL)
    {
        if (::uPtr< ::uDelegate*>(filter)->Invoke< bool, ::app::Fuse::Node*>(sibling))
        {
            return sibling;
        }

        return TraverseNodeExtensions__FindPreviousChild_1(NULL, sibling, filter);
    }

    return NULL;
}

::app::Fuse::Node* TraverseNodeExtensions__FindPreviousSibling(::uStatic* __this, ::app::Fuse::Node* node)
{
    if (node == NULL)
    {
        return NULL;
    }

    ::app::Fuse::Node* parent = ::uPtr< ::app::Fuse::Node*>(node)->Parent();

    if (parent == NULL)
    {
        return NULL;
    }

    ::app::Fuse::Node* child = TraverseNodeExtensions__FindPreviousChild(NULL, ::uAs< ::app::Fuse::Node*>(parent, ::app::Fuse::Node__typeof()), node);

    if (child != NULL)
    {
        return child;
    }

    return TraverseNodeExtensions__FindPreviousSibling(NULL, parent);
}

}}}
