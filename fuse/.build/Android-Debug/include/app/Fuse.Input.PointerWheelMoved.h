// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_POINTER_WHEEL_MOVED_H__
#define __APP_FUSE_INPUT_POINTER_WHEEL_MOVED_H__

#include <app/Fuse.NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input-3fc2451c.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Input {

struct PointerWheelMoved;

struct PointerWheelMoved__uType : ::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs__uType
{
};

PointerWheelMoved__uType* PointerWheelMoved__typeof();

void PointerWheelMoved___ObjInit_1(PointerWheelMoved* __this);
PointerWheelMoved* PointerWheelMoved__New_1(::uStatic* __this);

struct PointerWheelMoved : ::app::Fuse::NodeEvent__Fuse_Input_PointerWheelMovedHandler__Fuse_Input_PointerWheelMovedArgs
{
    void _ObjInit_1() { PointerWheelMoved___ObjInit_1(this); }
};

}}}


#endif
