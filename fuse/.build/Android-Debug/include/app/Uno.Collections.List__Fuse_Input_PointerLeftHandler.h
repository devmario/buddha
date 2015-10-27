// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_POINTER_LEFT_HANDLER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_POINTER_LEFT_HANDLER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Input_PointerLeftHandler;

struct List__Fuse_Input_PointerLeftHandler__uType : ::uClassType
{
};

List__Fuse_Input_PointerLeftHandler__uType* List__Fuse_Input_PointerLeftHandler__typeof();

void List__Fuse_Input_PointerLeftHandler___ObjInit(List__Fuse_Input_PointerLeftHandler* __this);
void List__Fuse_Input_PointerLeftHandler__BoundsCheck(List__Fuse_Input_PointerLeftHandler* __this, int index);
int List__Fuse_Input_PointerLeftHandler__get_Count(List__Fuse_Input_PointerLeftHandler* __this);
::uDelegate* List__Fuse_Input_PointerLeftHandler__get_Item(List__Fuse_Input_PointerLeftHandler* __this, int index);
List__Fuse_Input_PointerLeftHandler* List__Fuse_Input_PointerLeftHandler__New_1(::uStatic* __this);
void List__Fuse_Input_PointerLeftHandler__set_Item(List__Fuse_Input_PointerLeftHandler* __this, int index, ::uDelegate* value);

struct List__Fuse_Input_PointerLeftHandler : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Input_PointerLeftHandler___ObjInit(this); }
    void BoundsCheck(int index) { List__Fuse_Input_PointerLeftHandler__BoundsCheck(this, index); }
    int Count() { return List__Fuse_Input_PointerLeftHandler__get_Count(this); }
    ::uDelegate* Item(int index) { return List__Fuse_Input_PointerLeftHandler__get_Item(this, index); }
    void Item(int index, ::uDelegate* value) { List__Fuse_Input_PointerLeftHandler__set_Item(this, index, value); }
};

}}}


#endif
