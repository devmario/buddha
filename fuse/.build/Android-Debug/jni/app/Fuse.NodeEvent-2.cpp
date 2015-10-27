#include <app/Fuse.Input.FocusGainedArgs.h>
#include <app/Fuse.Input.FocusGainedHandler.h>
#include <app/Fuse.Input.FocusLostArgs.h>
#include <app/Fuse.Input.FocusLostHandler.h>
#include <app/Fuse.Input.IsFocusableChangedArgs.h>
#include <app/Fuse.Input.IsFocusableChangedHandler.h>
#include <app/Fuse.Input.KeyPressedArgs.h>
#include <app/Fuse.Input.KeyPressedHandler.h>
#include <app/Fuse.Input.KeyReleasedArgs.h>
#include <app/Fuse.Input.KeyReleasedHandler.h>
#include <app/Fuse.Input.PointerEnteredArgs.h>
#include <app/Fuse.Input.PointerEnteredHandler.h>
#include <app/Fuse.Input.PointerLeftArgs.h>
#include <app/Fuse.Input.PointerLeftHandler.h>
#include <app/Fuse.Input.PointerMovedArgs.h>
#include <app/Fuse.Input.PointerMovedHandler.h>
#include <app/Fuse.Input.PointerPressedArgs.h>
#include <app/Fuse.Input.PointerPressedHandler.h>
#include <app/Fuse.Input.PointerReleasedArgs.h>
#include <app/Fuse.Input.PointerReleasedHandler.h>
#include <app/Fuse.Input.PointerWheelMovedHandler.h>
#include <app/Fuse.Input.TextEnteredHandler.h>
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
#include <app/Uno.Action__object__object__.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.List__Fuse_Input_FocusGainedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_FocusLostHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_IsFocusableChangedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_KeyPressedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_KeyReleasedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_PointerEnteredHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_PointerLeftHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_PointerMovedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_PointerPressedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_PointerReleasedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_PointerWheelMovedHandler.h>
#include <app/Uno.Collections.List__Fuse_Input_TextEnteredHandler.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>

namespace app {
namespace Fuse {

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__uType* NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__typeof()
{
    static ::uStaticStrong<NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__uType*> type;
    if (type != NULL) return type;

    type = (NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__uType*)::uAllocClassType(sizeof(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__uType), "Fuse.NodeEvent<Fuse.Input.FocusGainedHandler,Fuse.Input.FocusGainedArgs>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_globalHandlers", offsetof(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs, _globalHandlers),
        "_handle", offsetof(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs, _handle));

    return type;
}

void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs___ObjInit(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_globalHandlers = ::app::Uno::Collections::List__Fuse_Input_FocusGainedHandler__New_1(NULL);
}

void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__AddHandler(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->AddToList(__this->_handle, (::uObject*)handler);
}

void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::FocusGainedArgs* args)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_FocusGainedHandler*>(__this->_globalHandlers)->Count() > 0)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_FocusGainedHandler*>(__this->_globalHandlers)->Count(); i++)
        {
            __this->Invoke(::uPtr< ::app::Uno::Collections::List__Fuse_Input_FocusGainedHandler*>(__this->_globalHandlers)->Item(i), (::uObject*)node, args);
        }
    }
}

void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__OnRaise(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::FocusGainedHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::FocusGainedArgs* eventArgs = ::uCast< ::app::Fuse::Input::FocusGainedArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::FocusGainedArgs__typeof());
    __this->Invoke(handler, (::uObject*)node, eventArgs);
}

void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::FocusGainedHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::FocusGainedArgs* eventArgs = ::uCast< ::app::Fuse::Input::FocusGainedArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::FocusGainedArgs__typeof());

    if (::uPtr< ::app::Fuse::Node*>(node)->IsEnabled())
    {
        __this->Invoke(handler, (::uObject*)node, eventArgs);
    }
}

void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__Raise(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::app::Fuse::Input::FocusGainedArgs* args, int type, bool bubble)
{
    ::uArray* array_123;
    ::app::Fuse::Node* node = ::uPtr< ::app::Fuse::NodeEventArgs*>((::app::Fuse::NodeEventArgs*)args)->Node();
    __this->InvokeGlobalHandlers(node, args);
    ::uDelegate* handler = NULL;

    switch (type)
    {
        case 0:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__OnRaise, __this);
            break;
        }
        case 2:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__OnRaise, __this);
            break;
        }
        case 1:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__OnRaiseEnabled, __this);
            break;
        }
        default:
        {
            ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Invalid RaiseType for event"), 1, ::uGetConstString("/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno"), 705);
            return;
        }
    }

    while (node != NULL)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->ForeachInList_1(__this->_handle, handler, (array_123 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)node, ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(1) = (::uObject*)args, array_123));

        if (!bubble)
        {
            break;
        }

        node = ::uPtr< ::app::Fuse::Node*>(node)->Parent();
    }
}

void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__RaiseWithBubble(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::app::Fuse::Input::FocusGainedArgs* args, int type)
{
    __this->Raise(args, type, true);
}

void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__RemoveHandler(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->RemoveFromList(__this->_handle, (::uObject*)handler);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__uType* NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__typeof()
{
    static ::uStaticStrong<NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__uType*> type;
    if (type != NULL) return type;

    type = (NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__uType*)::uAllocClassType(sizeof(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__uType), "Fuse.NodeEvent<Fuse.Input.FocusLostHandler,Fuse.Input.FocusLostArgs>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_globalHandlers", offsetof(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs, _globalHandlers),
        "_handle", offsetof(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs, _handle));

    return type;
}

void NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs___ObjInit(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_globalHandlers = ::app::Uno::Collections::List__Fuse_Input_FocusLostHandler__New_1(NULL);
}

void NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__AddHandler(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->AddToList(__this->_handle, (::uObject*)handler);
}

void NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::FocusLostArgs* args)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_FocusLostHandler*>(__this->_globalHandlers)->Count() > 0)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_FocusLostHandler*>(__this->_globalHandlers)->Count(); i++)
        {
            __this->Invoke(::uPtr< ::app::Uno::Collections::List__Fuse_Input_FocusLostHandler*>(__this->_globalHandlers)->Item(i), (::uObject*)node, args);
        }
    }
}

void NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__OnRaise(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::FocusLostHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::FocusLostArgs* eventArgs = ::uCast< ::app::Fuse::Input::FocusLostArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::FocusLostArgs__typeof());
    __this->Invoke(handler, (::uObject*)node, eventArgs);
}

void NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::FocusLostHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::FocusLostArgs* eventArgs = ::uCast< ::app::Fuse::Input::FocusLostArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::FocusLostArgs__typeof());

    if (::uPtr< ::app::Fuse::Node*>(node)->IsEnabled())
    {
        __this->Invoke(handler, (::uObject*)node, eventArgs);
    }
}

void NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__Raise(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::app::Fuse::Input::FocusLostArgs* args, int type, bool bubble)
{
    ::uArray* array_123;
    ::app::Fuse::Node* node = ::uPtr< ::app::Fuse::NodeEventArgs*>((::app::Fuse::NodeEventArgs*)args)->Node();
    __this->InvokeGlobalHandlers(node, args);
    ::uDelegate* handler = NULL;

    switch (type)
    {
        case 0:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__OnRaise, __this);
            break;
        }
        case 2:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__OnRaise, __this);
            break;
        }
        case 1:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__OnRaiseEnabled, __this);
            break;
        }
        default:
        {
            ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Invalid RaiseType for event"), 1, ::uGetConstString("/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno"), 705);
            return;
        }
    }

    while (node != NULL)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->ForeachInList_1(__this->_handle, handler, (array_123 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)node, ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(1) = (::uObject*)args, array_123));

        if (!bubble)
        {
            break;
        }

        node = ::uPtr< ::app::Fuse::Node*>(node)->Parent();
    }
}

void NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__RaiseWithBubble(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::app::Fuse::Input::FocusLostArgs* args, int type)
{
    __this->Raise(args, type, true);
}

void NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs__RemoveHandler(NodeEvent__Fuse_Input_FocusLostHandler__Fuse_Input_FocusLostArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->RemoveFromList(__this->_handle, (::uObject*)handler);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__uType* NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__typeof()
{
    static ::uStaticStrong<NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__uType*> type;
    if (type != NULL) return type;

    type = (NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__uType*)::uAllocClassType(sizeof(NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__uType), "Fuse.NodeEvent<Fuse.Input.IsFocusableChangedHandler,Fuse.Input.IsFocusableChangedArgs>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_globalHandlers", offsetof(NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs, _globalHandlers),
        "_handle", offsetof(NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs, _handle));

    return type;
}

void NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs___ObjInit(NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs* __this)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_globalHandlers = ::app::Uno::Collections::List__Fuse_Input_IsFocusableChangedHandler__New_1(NULL);
}

void NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::IsFocusableChangedArgs* args)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_IsFocusableChangedHandler*>(__this->_globalHandlers)->Count() > 0)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_IsFocusableChangedHandler*>(__this->_globalHandlers)->Count(); i++)
        {
            __this->Invoke(::uPtr< ::app::Uno::Collections::List__Fuse_Input_IsFocusableChangedHandler*>(__this->_globalHandlers)->Item(i), (::uObject*)node, args);
        }
    }
}

void NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__OnRaise(NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::IsFocusableChangedHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::IsFocusableChangedArgs* eventArgs = ::uCast< ::app::Fuse::Input::IsFocusableChangedArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::IsFocusableChangedArgs__typeof());
    __this->Invoke(handler, (::uObject*)node, eventArgs);
}

void NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::IsFocusableChangedHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::IsFocusableChangedArgs* eventArgs = ::uCast< ::app::Fuse::Input::IsFocusableChangedArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::IsFocusableChangedArgs__typeof());

    if (::uPtr< ::app::Fuse::Node*>(node)->IsEnabled())
    {
        __this->Invoke(handler, (::uObject*)node, eventArgs);
    }
}

void NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__Raise(NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs* __this, ::app::Fuse::Input::IsFocusableChangedArgs* args, int type, bool bubble)
{
    ::uArray* array_123;
    ::app::Fuse::Node* node = ::uPtr< ::app::Fuse::NodeEventArgs*>((::app::Fuse::NodeEventArgs*)args)->Node();
    __this->InvokeGlobalHandlers(node, args);
    ::uDelegate* handler = NULL;

    switch (type)
    {
        case 0:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__OnRaise, __this);
            break;
        }
        case 2:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__OnRaise, __this);
            break;
        }
        case 1:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__OnRaiseEnabled, __this);
            break;
        }
        default:
        {
            ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Invalid RaiseType for event"), 1, ::uGetConstString("/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno"), 705);
            return;
        }
    }

    while (node != NULL)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->ForeachInList_1(__this->_handle, handler, (array_123 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)node, ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(1) = (::uObject*)args, array_123));

        if (!bubble)
        {
            break;
        }

        node = ::uPtr< ::app::Fuse::Node*>(node)->Parent();
    }
}

void NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs__RaiseWithoutBubble(NodeEvent__Fuse_Input_IsFocusableChangedHandler__Fuse_Input_IsFocusableChangedArgs* __this, ::app::Fuse::Input::IsFocusableChangedArgs* args, int type)
{
    __this->Raise(args, type, false);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__uType* NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__typeof()
{
    static ::uStaticStrong<NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__uType*> type;
    if (type != NULL) return type;

    type = (NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__uType*)::uAllocClassType(sizeof(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__uType), "Fuse.NodeEvent<Fuse.Input.KeyPressedHandler,Fuse.Input.KeyPressedArgs>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_globalHandlers", offsetof(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs, _globalHandlers),
        "_handle", offsetof(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs, _handle));

    return type;
}

void NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs___ObjInit(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_globalHandlers = ::app::Uno::Collections::List__Fuse_Input_KeyPressedHandler__New_1(NULL);
}

void NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__AddHandler(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->AddToList(__this->_handle, (::uObject*)handler);
}

void NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::KeyPressedArgs* args)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_KeyPressedHandler*>(__this->_globalHandlers)->Count() > 0)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_KeyPressedHandler*>(__this->_globalHandlers)->Count(); i++)
        {
            __this->Invoke(::uPtr< ::app::Uno::Collections::List__Fuse_Input_KeyPressedHandler*>(__this->_globalHandlers)->Item(i), (::uObject*)node, args);
        }
    }
}

void NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__OnRaise(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::KeyPressedHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::KeyPressedArgs* eventArgs = ::uCast< ::app::Fuse::Input::KeyPressedArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::KeyPressedArgs__typeof());
    __this->Invoke(handler, (::uObject*)node, eventArgs);
}

void NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::KeyPressedHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::KeyPressedArgs* eventArgs = ::uCast< ::app::Fuse::Input::KeyPressedArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::KeyPressedArgs__typeof());

    if (::uPtr< ::app::Fuse::Node*>(node)->IsEnabled())
    {
        __this->Invoke(handler, (::uObject*)node, eventArgs);
    }
}

void NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__Raise(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this, ::app::Fuse::Input::KeyPressedArgs* args, int type, bool bubble)
{
    ::uArray* array_123;
    ::app::Fuse::Node* node = ::uPtr< ::app::Fuse::NodeEventArgs*>((::app::Fuse::NodeEventArgs*)args)->Node();
    __this->InvokeGlobalHandlers(node, args);
    ::uDelegate* handler = NULL;

    switch (type)
    {
        case 0:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__OnRaise, __this);
            break;
        }
        case 2:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__OnRaise, __this);
            break;
        }
        case 1:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__OnRaiseEnabled, __this);
            break;
        }
        default:
        {
            ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Invalid RaiseType for event"), 1, ::uGetConstString("/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno"), 705);
            return;
        }
    }

    while (node != NULL)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->ForeachInList_1(__this->_handle, handler, (array_123 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)node, ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(1) = (::uObject*)args, array_123));

        if (!bubble)
        {
            break;
        }

        node = ::uPtr< ::app::Fuse::Node*>(node)->Parent();
    }
}

void NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs__RaiseWithBubble(NodeEvent__Fuse_Input_KeyPressedHandler__Fuse_Input_KeyPressedArgs* __this, ::app::Fuse::Input::KeyPressedArgs* args, int type)
{
    __this->Raise(args, type, true);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__uType* NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__typeof()
{
    static ::uStaticStrong<NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__uType*> type;
    if (type != NULL) return type;

    type = (NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__uType*)::uAllocClassType(sizeof(NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__uType), "Fuse.NodeEvent<Fuse.Input.KeyReleasedHandler,Fuse.Input.KeyReleasedArgs>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_globalHandlers", offsetof(NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs, _globalHandlers),
        "_handle", offsetof(NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs, _handle));

    return type;
}

void NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs___ObjInit(NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* __this)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_globalHandlers = ::app::Uno::Collections::List__Fuse_Input_KeyReleasedHandler__New_1(NULL);
}

void NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::KeyReleasedArgs* args)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_KeyReleasedHandler*>(__this->_globalHandlers)->Count() > 0)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_KeyReleasedHandler*>(__this->_globalHandlers)->Count(); i++)
        {
            __this->Invoke(::uPtr< ::app::Uno::Collections::List__Fuse_Input_KeyReleasedHandler*>(__this->_globalHandlers)->Item(i), (::uObject*)node, args);
        }
    }
}

void NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__OnRaise(NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::KeyReleasedHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::KeyReleasedArgs* eventArgs = ::uCast< ::app::Fuse::Input::KeyReleasedArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::KeyReleasedArgs__typeof());
    __this->Invoke(handler, (::uObject*)node, eventArgs);
}

void NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::KeyReleasedHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::KeyReleasedArgs* eventArgs = ::uCast< ::app::Fuse::Input::KeyReleasedArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::KeyReleasedArgs__typeof());

    if (::uPtr< ::app::Fuse::Node*>(node)->IsEnabled())
    {
        __this->Invoke(handler, (::uObject*)node, eventArgs);
    }
}

void NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__Raise(NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* __this, ::app::Fuse::Input::KeyReleasedArgs* args, int type, bool bubble)
{
    ::uArray* array_123;
    ::app::Fuse::Node* node = ::uPtr< ::app::Fuse::NodeEventArgs*>((::app::Fuse::NodeEventArgs*)args)->Node();
    __this->InvokeGlobalHandlers(node, args);
    ::uDelegate* handler = NULL;

    switch (type)
    {
        case 0:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__OnRaise, __this);
            break;
        }
        case 2:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__OnRaise, __this);
            break;
        }
        case 1:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__OnRaiseEnabled, __this);
            break;
        }
        default:
        {
            ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Invalid RaiseType for event"), 1, ::uGetConstString("/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno"), 705);
            return;
        }
    }

    while (node != NULL)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->ForeachInList_1(__this->_handle, handler, (array_123 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)node, ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(1) = (::uObject*)args, array_123));

        if (!bubble)
        {
            break;
        }

        node = ::uPtr< ::app::Fuse::Node*>(node)->Parent();
    }
}

void NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__RaiseWithBubble(NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* __this, ::app::Fuse::Input::KeyReleasedArgs* args, int type)
{
    __this->Raise(args, type, true);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__uType* NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__typeof()
{
    static ::uStaticStrong<NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__uType*> type;
    if (type != NULL) return type;

    type = (NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__uType*)::uAllocClassType(sizeof(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__uType), "Fuse.NodeEvent<Fuse.Input.PointerEnteredHandler,Fuse.Input.PointerEnteredArgs>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_globalHandlers", offsetof(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs, _globalHandlers),
        "_handle", offsetof(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs, _handle));

    return type;
}

void NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs___ObjInit(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_globalHandlers = ::app::Uno::Collections::List__Fuse_Input_PointerEnteredHandler__New_1(NULL);
}

void NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__AddHandler(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->AddToList(__this->_handle, (::uObject*)handler);
}

void NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerEnteredArgs* args)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerEnteredHandler*>(__this->_globalHandlers)->Count() > 0)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerEnteredHandler*>(__this->_globalHandlers)->Count(); i++)
        {
            __this->Invoke(::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerEnteredHandler*>(__this->_globalHandlers)->Item(i), (::uObject*)node, args);
        }
    }
}

void NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__OnRaise(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::PointerEnteredHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::PointerEnteredArgs* eventArgs = ::uCast< ::app::Fuse::Input::PointerEnteredArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::PointerEnteredArgs__typeof());
    __this->Invoke(handler, (::uObject*)node, eventArgs);
}

void NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::PointerEnteredHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::PointerEnteredArgs* eventArgs = ::uCast< ::app::Fuse::Input::PointerEnteredArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::PointerEnteredArgs__typeof());

    if (::uPtr< ::app::Fuse::Node*>(node)->IsEnabled())
    {
        __this->Invoke(handler, (::uObject*)node, eventArgs);
    }
}

void NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__Raise(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::app::Fuse::Input::PointerEnteredArgs* args, int type, bool bubble)
{
    ::uArray* array_123;
    ::app::Fuse::Node* node = ::uPtr< ::app::Fuse::NodeEventArgs*>((::app::Fuse::NodeEventArgs*)args)->Node();
    __this->InvokeGlobalHandlers(node, args);
    ::uDelegate* handler = NULL;

    switch (type)
    {
        case 0:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__OnRaise, __this);
            break;
        }
        case 2:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__OnRaise, __this);
            break;
        }
        case 1:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__OnRaiseEnabled, __this);
            break;
        }
        default:
        {
            ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Invalid RaiseType for event"), 1, ::uGetConstString("/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno"), 705);
            return;
        }
    }

    while (node != NULL)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->ForeachInList_1(__this->_handle, handler, (array_123 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)node, ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(1) = (::uObject*)args, array_123));

        if (!bubble)
        {
            break;
        }

        node = ::uPtr< ::app::Fuse::Node*>(node)->Parent();
    }
}

void NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__RaiseWithoutBubble(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::app::Fuse::Input::PointerEnteredArgs* args, int type)
{
    __this->Raise(args, type, false);
}

void NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs__RemoveHandler(NodeEvent__Fuse_Input_PointerEnteredHandler__Fuse_Input_PointerEnteredArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->RemoveFromList(__this->_handle, (::uObject*)handler);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__uType* NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__typeof()
{
    static ::uStaticStrong<NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__uType*> type;
    if (type != NULL) return type;

    type = (NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__uType*)::uAllocClassType(sizeof(NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__uType), "Fuse.NodeEvent<Fuse.Input.PointerLeftHandler,Fuse.Input.PointerLeftArgs>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_globalHandlers", offsetof(NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs, _globalHandlers),
        "_handle", offsetof(NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs, _handle));

    return type;
}

void NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs___ObjInit(NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_globalHandlers = ::app::Uno::Collections::List__Fuse_Input_PointerLeftHandler__New_1(NULL);
}

void NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__AddHandler(NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->AddToList(__this->_handle, (::uObject*)handler);
}

void NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerLeftArgs* args)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerLeftHandler*>(__this->_globalHandlers)->Count() > 0)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerLeftHandler*>(__this->_globalHandlers)->Count(); i++)
        {
            __this->Invoke(::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerLeftHandler*>(__this->_globalHandlers)->Item(i), (::uObject*)node, args);
        }
    }
}

void NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__OnRaise(NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::PointerLeftHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::PointerLeftArgs* eventArgs = ::uCast< ::app::Fuse::Input::PointerLeftArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::PointerLeftArgs__typeof());
    __this->Invoke(handler, (::uObject*)node, eventArgs);
}

void NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::PointerLeftHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::PointerLeftArgs* eventArgs = ::uCast< ::app::Fuse::Input::PointerLeftArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::PointerLeftArgs__typeof());

    if (::uPtr< ::app::Fuse::Node*>(node)->IsEnabled())
    {
        __this->Invoke(handler, (::uObject*)node, eventArgs);
    }
}

void NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__Raise(NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this, ::app::Fuse::Input::PointerLeftArgs* args, int type, bool bubble)
{
    ::uArray* array_123;
    ::app::Fuse::Node* node = ::uPtr< ::app::Fuse::NodeEventArgs*>((::app::Fuse::NodeEventArgs*)args)->Node();
    __this->InvokeGlobalHandlers(node, args);
    ::uDelegate* handler = NULL;

    switch (type)
    {
        case 0:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__OnRaise, __this);
            break;
        }
        case 2:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__OnRaise, __this);
            break;
        }
        case 1:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__OnRaiseEnabled, __this);
            break;
        }
        default:
        {
            ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Invalid RaiseType for event"), 1, ::uGetConstString("/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno"), 705);
            return;
        }
    }

    while (node != NULL)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->ForeachInList_1(__this->_handle, handler, (array_123 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)node, ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(1) = (::uObject*)args, array_123));

        if (!bubble)
        {
            break;
        }

        node = ::uPtr< ::app::Fuse::Node*>(node)->Parent();
    }
}

void NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__RaiseWithoutBubble(NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this, ::app::Fuse::Input::PointerLeftArgs* args, int type)
{
    __this->Raise(args, type, false);
}

void NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__RemoveHandler(NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->RemoveFromList(__this->_handle, (::uObject*)handler);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__uType* NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__typeof()
{
    static ::uStaticStrong<NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__uType*> type;
    if (type != NULL) return type;

    type = (NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__uType*)::uAllocClassType(sizeof(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__uType), "Fuse.NodeEvent<Fuse.Input.PointerMovedHandler,Fuse.Input.PointerMovedArgs>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_globalHandlers", offsetof(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs, _globalHandlers),
        "_handle", offsetof(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs, _handle));

    return type;
}

void NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs___ObjInit(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_globalHandlers = ::app::Uno::Collections::List__Fuse_Input_PointerMovedHandler__New_1(NULL);
}

void NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__AddHandler(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->AddToList(__this->_handle, (::uObject*)handler);
}

void NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerMovedArgs* args)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerMovedHandler*>(__this->_globalHandlers)->Count() > 0)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerMovedHandler*>(__this->_globalHandlers)->Count(); i++)
        {
            __this->Invoke(::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerMovedHandler*>(__this->_globalHandlers)->Item(i), (::uObject*)node, args);
        }
    }
}

void NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__OnRaise(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::PointerMovedHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::PointerMovedArgs* eventArgs = ::uCast< ::app::Fuse::Input::PointerMovedArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::PointerMovedArgs__typeof());
    __this->Invoke(handler, (::uObject*)node, eventArgs);
}

void NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::PointerMovedHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::PointerMovedArgs* eventArgs = ::uCast< ::app::Fuse::Input::PointerMovedArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::PointerMovedArgs__typeof());

    if (::uPtr< ::app::Fuse::Node*>(node)->IsEnabled())
    {
        __this->Invoke(handler, (::uObject*)node, eventArgs);
    }
}

void NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__Raise(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::app::Fuse::Input::PointerMovedArgs* args, int type, bool bubble)
{
    ::uArray* array_123;
    ::app::Fuse::Node* node = ::uPtr< ::app::Fuse::NodeEventArgs*>((::app::Fuse::NodeEventArgs*)args)->Node();
    __this->InvokeGlobalHandlers(node, args);
    ::uDelegate* handler = NULL;

    switch (type)
    {
        case 0:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__OnRaise, __this);
            break;
        }
        case 2:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__OnRaise, __this);
            break;
        }
        case 1:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__OnRaiseEnabled, __this);
            break;
        }
        default:
        {
            ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Invalid RaiseType for event"), 1, ::uGetConstString("/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno"), 705);
            return;
        }
    }

    while (node != NULL)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->ForeachInList_1(__this->_handle, handler, (array_123 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)node, ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(1) = (::uObject*)args, array_123));

        if (!bubble)
        {
            break;
        }

        node = ::uPtr< ::app::Fuse::Node*>(node)->Parent();
    }
}

void NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__RaiseWithBubble(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::app::Fuse::Input::PointerMovedArgs* args, int type)
{
    __this->Raise(args, type, true);
}

void NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__RemoveHandler(NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->RemoveFromList(__this->_handle, (::uObject*)handler);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__uType* NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__typeof()
{
    static ::uStaticStrong<NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__uType*> type;
    if (type != NULL) return type;

    type = (NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__uType*)::uAllocClassType(sizeof(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__uType), "Fuse.NodeEvent<Fuse.Input.PointerPressedHandler,Fuse.Input.PointerPressedArgs>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_globalHandlers", offsetof(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs, _globalHandlers),
        "_handle", offsetof(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs, _handle));

    return type;
}

void NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs___ObjInit(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_globalHandlers = ::app::Uno::Collections::List__Fuse_Input_PointerPressedHandler__New_1(NULL);
}

void NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__AddHandler(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->AddToList(__this->_handle, (::uObject*)handler);
}

void NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerPressedArgs* args)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerPressedHandler*>(__this->_globalHandlers)->Count() > 0)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerPressedHandler*>(__this->_globalHandlers)->Count(); i++)
        {
            __this->Invoke(::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerPressedHandler*>(__this->_globalHandlers)->Item(i), (::uObject*)node, args);
        }
    }
}

void NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__OnRaise(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::PointerPressedHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::PointerPressedArgs* eventArgs = ::uCast< ::app::Fuse::Input::PointerPressedArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::PointerPressedArgs__typeof());
    __this->Invoke(handler, (::uObject*)node, eventArgs);
}

void NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::PointerPressedHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::PointerPressedArgs* eventArgs = ::uCast< ::app::Fuse::Input::PointerPressedArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::PointerPressedArgs__typeof());

    if (::uPtr< ::app::Fuse::Node*>(node)->IsEnabled())
    {
        __this->Invoke(handler, (::uObject*)node, eventArgs);
    }
}

void NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__Raise(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::app::Fuse::Input::PointerPressedArgs* args, int type, bool bubble)
{
    ::uArray* array_123;
    ::app::Fuse::Node* node = ::uPtr< ::app::Fuse::NodeEventArgs*>((::app::Fuse::NodeEventArgs*)args)->Node();
    __this->InvokeGlobalHandlers(node, args);
    ::uDelegate* handler = NULL;

    switch (type)
    {
        case 0:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__OnRaise, __this);
            break;
        }
        case 2:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__OnRaise, __this);
            break;
        }
        case 1:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__OnRaiseEnabled, __this);
            break;
        }
        default:
        {
            ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Invalid RaiseType for event"), 1, ::uGetConstString("/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno"), 705);
            return;
        }
    }

    while (node != NULL)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->ForeachInList_1(__this->_handle, handler, (array_123 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)node, ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(1) = (::uObject*)args, array_123));

        if (!bubble)
        {
            break;
        }

        node = ::uPtr< ::app::Fuse::Node*>(node)->Parent();
    }
}

void NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__RaiseWithBubble(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::app::Fuse::Input::PointerPressedArgs* args, int type)
{
    __this->Raise(args, type, true);
}

void NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs__RemoveHandler(NodeEvent__Fuse_Input_PointerPressedHandler__Fuse_Input_PointerPressedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->RemoveFromList(__this->_handle, (::uObject*)handler);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__uType* NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__typeof()
{
    static ::uStaticStrong<NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__uType*> type;
    if (type != NULL) return type;

    type = (NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__uType*)::uAllocClassType(sizeof(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__uType), "Fuse.NodeEvent<Fuse.Input.PointerReleasedHandler,Fuse.Input.PointerReleasedArgs>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_globalHandlers", offsetof(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs, _globalHandlers),
        "_handle", offsetof(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs, _handle));

    return type;
}

void NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs___ObjInit(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_globalHandlers = ::app::Uno::Collections::List__Fuse_Input_PointerReleasedHandler__New_1(NULL);
}

void NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__AddHandler(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->AddToList(__this->_handle, (::uObject*)handler);
}

void NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerReleasedArgs* args)
{
    if (::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerReleasedHandler*>(__this->_globalHandlers)->Count() > 0)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerReleasedHandler*>(__this->_globalHandlers)->Count(); i++)
        {
            __this->Invoke(::uPtr< ::app::Uno::Collections::List__Fuse_Input_PointerReleasedHandler*>(__this->_globalHandlers)->Item(i), (::uObject*)node, args);
        }
    }
}

void NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__OnRaise(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::PointerReleasedHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::PointerReleasedArgs* eventArgs = ::uCast< ::app::Fuse::Input::PointerReleasedArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::PointerReleasedArgs__typeof());
    __this->Invoke(handler, (::uObject*)node, eventArgs);
}

void NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::uObject* target, ::uArray* args)
{
    ::uDelegate* handler = ::uCast< ::uDelegate*>(target, ::app::Fuse::Input::PointerReleasedHandler__typeof());
    ::app::Fuse::Node* node = ::uCast< ::app::Fuse::Node*>(::uPtr< ::uArray*>(args)->Item< ::uObject*>(0), ::app::Fuse::Node__typeof());
    ::app::Fuse::Input::PointerReleasedArgs* eventArgs = ::uCast< ::app::Fuse::Input::PointerReleasedArgs*>(args->Item< ::uObject*>(1), ::app::Fuse::Input::PointerReleasedArgs__typeof());

    if (::uPtr< ::app::Fuse::Node*>(node)->IsEnabled())
    {
        __this->Invoke(handler, (::uObject*)node, eventArgs);
    }
}

void NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__Raise(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::app::Fuse::Input::PointerReleasedArgs* args, int type, bool bubble)
{
    ::uArray* array_123;
    ::app::Fuse::Node* node = ::uPtr< ::app::Fuse::NodeEventArgs*>((::app::Fuse::NodeEventArgs*)args)->Node();
    __this->InvokeGlobalHandlers(node, args);
    ::uDelegate* handler = NULL;

    switch (type)
    {
        case 0:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__OnRaise, __this);
            break;
        }
        case 2:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__OnRaise, __this);
            break;
        }
        case 1:
        {
            handler = ::uNewDelegateNonVirt(::app::Uno::Action__object__object____typeof(), (const void*)NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__OnRaiseEnabled, __this);
            break;
        }
        default:
        {
            ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Invalid RaiseType for event"), 1, ::uGetConstString("/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno"), 705);
            return;
        }
    }

    while (node != NULL)
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->ForeachInList_1(__this->_handle, handler, (array_123 = ::uNewArray(::uObject__typeof(), 2), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)node, ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(1) = (::uObject*)args, array_123));

        if (!bubble)
        {
            break;
        }

        node = ::uPtr< ::app::Fuse::Node*>(node)->Parent();
    }
}

void NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__RaiseWithBubble(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::app::Fuse::Input::PointerReleasedArgs* args, int type)
{
    __this->Raise(args, type, true);
}

void NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs__RemoveHandler(NodeEvent__Fuse_Input_PointerReleasedHandler__Fuse_Input_PointerReleasedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->RemoveFromList(__this->_handle, (::uObject*)handler);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__uType* NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__typeof()
{
    static ::uStaticStrong<NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__uType*> type;
    if (type != NULL) return type;

    type = (NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__uType*)::uAllocClassType(sizeof(NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__uType), "Fuse.NodeEvent<Fuse.Input.PointerWheelMovedHandler,Fuse.Input.PointerWheelMovedArgs>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_globalHandlers", offsetof(NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs, _globalHandlers),
        "_handle", offsetof(NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs, _handle));

    return type;
}

void NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs___ObjInit(NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* __this)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_globalHandlers = ::app::Uno::Collections::List__Fuse_Input_PointerWheelMovedHandler__New_1(NULL);
}

void NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__AddHandler(NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->AddToList(__this->_handle, (::uObject*)handler);
}

void NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__RemoveHandler(NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->RemoveFromList(__this->_handle, (::uObject*)handler);
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__uType* NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__typeof()
{
    static ::uStaticStrong<NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__uType*> type;
    if (type != NULL) return type;

    type = (NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__uType*)::uAllocClassType(sizeof(NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__uType), "Fuse.NodeEvent<Fuse.Input.TextEnteredHandler,Fuse.Input.TextEnteredArgs>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_globalHandlers", offsetof(NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs, _globalHandlers),
        "_handle", offsetof(NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs, _handle));

    return type;
}

void NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs___ObjInit(NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this)
{
    __this->_handle = ::app::Fuse::Properties__CreateHandle(NULL);
    __this->_globalHandlers = ::app::Uno::Collections::List__Fuse_Input_TextEnteredHandler__New_1(NULL);
}

void NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__AddHandler(NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->AddToList(__this->_handle, (::uObject*)handler);
}

void NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__RemoveHandler(NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(node)->Properties())->RemoveFromList(__this->_handle, (::uObject*)handler);
}

}}
