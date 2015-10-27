// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NODE_EVENT__FUSE_INPUT_KEY_RELEASED_HANDLER__FUSE_INPUT_KEY_RE_E45839BC_H__
#define __APP_FUSE_NODE_EVENT__FUSE_INPUT_KEY_RELEASED_HANDLER__FUSE_INPUT_KEY_RE_E45839BC_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct KeyReleasedArgs; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_KeyReleasedHandler; } } }

namespace app {
namespace Fuse {

struct NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs;

struct NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__uType : ::uClassType
{
    void(*__fp_Invoke)(NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs*, ::uDelegate*, ::uObject*, ::app::Fuse::Input::KeyReleasedArgs*);
};

NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__uType* NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__typeof();

void NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs___ObjInit(NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* __this);
void NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__InvokeGlobalHandlers(NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* __this, ::app::Fuse::Node* node, ::app::Fuse::Input::KeyReleasedArgs* args);
void NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__OnRaise(NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__OnRaiseEnabled(NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* __this, ::uObject* target, ::uArray* args);
void NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__Raise(NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* __this, ::app::Fuse::Input::KeyReleasedArgs* args, int type, bool bubble);
void NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__RaiseWithBubble(NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs* __this, ::app::Fuse::Input::KeyReleasedArgs* args, int type);

struct NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_KeyReleasedHandler*> _globalHandlers;

    void _ObjInit() { NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs___ObjInit(this); }
    void Invoke(::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::KeyReleasedArgs* args) { (((NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__uType*)this->__obj_type)->__fp_Invoke)(this, handler, sender, args); }
    void InvokeGlobalHandlers(::app::Fuse::Node* node, ::app::Fuse::Input::KeyReleasedArgs* args) { NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__InvokeGlobalHandlers(this, node, args); }
    void OnRaise(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__OnRaise(this, target, args); }
    void OnRaiseEnabled(::uObject* target, ::uArray* args) { NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__OnRaiseEnabled(this, target, args); }
    void Raise(::app::Fuse::Input::KeyReleasedArgs* args, int type, bool bubble) { NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__Raise(this, args, type, bubble); }
    void RaiseWithBubble(::app::Fuse::Input::KeyReleasedArgs* args, int type) { NodeEvent__Fuse_Input_KeyReleasedHandler__Fuse_Input_KeyReleasedArgs__RaiseWithBubble(this, args, type); }
};

}}


#endif
