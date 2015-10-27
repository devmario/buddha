// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NODE_EVENT__FUSE_INPUT_POINTER_LEFT_HANDLER__FUSE_INPUT_POINT_AC00D4BC_H__
#define __APP_FUSE_NODE_EVENT__FUSE_INPUT_POINTER_LEFT_HANDLER__FUSE_INPUT_POINT_AC00D4BC_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerLeftArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_PointerLeftHandler; } } }

namespace app {
namespace Fuse {

struct NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs;

struct NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::PointerLeftArgs*);
};

NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__uType* NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__typeof();

void NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs___ObjInit(NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this);
void NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__AddHandler(NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::PointerLeftArgs* args);
void NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__OnRaise(NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__Raise(NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this, ::app::Fuse::Input::PointerLeftArgs* args, int type, bool bubble);
void NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__RaiseWithoutBubble(NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this, ::app::Fuse::Input::PointerLeftArgs* args, int type);
void NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__RemoveHandler(NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);

struct NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_PointerLeftHandler*> _globalHandlers;

    void _ObjInit() { NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs___ObjInit(this); }
    void AddHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__AddHandler(this, node, handler); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerLeftArgs* args) { (((NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::PointerLeftArgs* args) { NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__InvokeGlobalHandlers(this, node, args); }
    void OnRaise(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__OnRaiseEnabled(this, target, args); }
    void Raise(::app::Fuse::Input::PointerLeftArgs* args, int type, bool bubble) { NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__Raise(this, args, type, bubble); }
    void RaiseWithoutBubble(::app::Fuse::Input::PointerLeftArgs* args, int type) { NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__RaiseWithoutBubble(this, args, type); }
    void RemoveHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_PointerLeftHandler__Fuse_Input_PointerLeftArgs__RemoveHandler(this, node, handler); }
};

}}


#endif
