// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_POINTER_MOVED_H__
#define __APP_FUSE_INPUT_POINTER_MOVED_H__

#include <app/Fuse.NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_Poin-b0dbd2da.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerMovedArgs; } } }

namespace app {
namespace Fuse {
namespace Input {

struct PointerMoved;

struct PointerMoved__uType : ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs__uType
{
};

PointerMoved__uType* PointerMoved__typeof();

void PointerMoved___ObjInit_1(PointerMoved* __this);
void PointerMoved__Invoke(PointerMoved* __this, ::uDelegate* handler, ::uObject* sender, ::app::Fuse::Input::PointerMovedArgs* args);
PointerMoved* PointerMoved__New_1(::uStatic* __this);

struct PointerMoved : ::app::Fuse::NodeEvent__Fuse_Input_PointerMovedHandler__Fuse_Input_PointerMovedArgs
{
    void _ObjInit_1() { PointerMoved___ObjInit_1(this); }
};

}}}


#endif
