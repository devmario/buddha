// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_POINTER_WHEEL_MOVED_HANDLER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_POINTER_WHEEL_MOVED_HANDLER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Input_PointerWheelMovedHandler;

struct List__Fuse_Input_PointerWheelMovedHandler__uType : ::uClassType
{
};

List__Fuse_Input_PointerWheelMovedHandler__uType* List__Fuse_Input_PointerWheelMovedHandler__typeof();

void List__Fuse_Input_PointerWheelMovedHandler___ObjInit(List__Fuse_Input_PointerWheelMovedHandler* __this);
List__Fuse_Input_PointerWheelMovedHandler* List__Fuse_Input_PointerWheelMovedHandler__New_1(::uStatic* __this);

struct List__Fuse_Input_PointerWheelMovedHandler : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;

    void _ObjInit() { List__Fuse_Input_PointerWheelMovedHandler___ObjInit(this); }
};

}}}


#endif
