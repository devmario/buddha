// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NODE_EVENT__FUSE_INPUT_TEXT_ENTERED_HANDLER__FUSE_INPUT_TEXT_E_C9C5BFFC_H__
#define __APP_FUSE_NODE_EVENT__FUSE_INPUT_TEXT_ENTERED_HANDLER__FUSE_INPUT_TEXT_E_C9C5BFFC_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Input_TextEnteredHandler; } } }

namespace app {
namespace Fuse {

struct NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs;

struct NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__uType : ::uClassType
{
};

NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__uType* NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__typeof();

void NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs___ObjInit(NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this);
void NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__AddHandler(NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);
void NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__RemoveHandler(NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs* __this, ::app::Fuse::Node* node, ::uDelegate* handler);

struct NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs : ::uObject
{
    ::uStrong< ::app::Fuse::PropertyHandle*> _handle;
    ::uStrong< ::app::Uno::Collections::List__Fuse_Input_TextEnteredHandler*> _globalHandlers;

    void _ObjInit() { NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs___ObjInit(this); }
    void AddHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__AddHandler(this, node, handler); }
    void RemoveHandler(::app::Fuse::Node* node, ::uDelegate* handler) { NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__RemoveHandler(this, node, handler); }
};

}}


#endif
