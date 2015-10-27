// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NODE_EVENT__FUSE_INPUT_FOCUS_GAINED_HANDLER__FUSE_INPUT_FOCUS_5B05867C_H__
#define __APP_FUSE_NODE_EVENT__FUSE_INPUT_FOCUS_GAINED_HANDLER__FUSE_INPUT_FOCUS_5B05867C_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct FocusGainedArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_FocusGainedHandler; } } }

namespace app {
namespace Fuse {

struct NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs;

struct NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::FocusGainedArgs*);
};

NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__uType* NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__typeof();

void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs___ObjInit(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this);
void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__AddHandler(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::FocusGainedArgs* args);
void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__OnRaise(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__Raise(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::app::Fuse::Input::FocusGainedArgs* args, int type, bool bubble);
void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__RaiseWithBubble(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::app::Fuse::Input::FocusGainedArgs* args, int type);
void NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__RemoveHandler(NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);

struct NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_FocusGainedHandler*> _globalHandlers;

    void _ObjInit() { NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs___ObjInit(this); }
    void AddHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__AddHandler(this, node, handler); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::FocusGainedArgs* args) { (((NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::FocusGainedArgs* args) { NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__InvokeGlobalHandlers(this, node, args); }
    void OnRaise(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__OnRaiseEnabled(this, target, args); }
    void Raise(::app::Fuse::Input::FocusGainedArgs* args, int type, bool bubble) { NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__Raise(this, args, type, bubble); }
    void RaiseWithBubble(::app::Fuse::Input::FocusGainedArgs* args, int type) { NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__RaiseWithBubble(this, args, type); }
    void RemoveHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_FocusGainedHandler__Fuse_Input_FocusGainedArgs__RemoveHandler(this, node, handler); }
};

}}


#endif
