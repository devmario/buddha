// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_POINTER_P_E_L_HOLDER_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_INPUT_POINTER_P_E_L_HOLDER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct Pointer_PELHolder; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Input_Pointer_PELHolder;

struct List__Fuse_Input_Pointer_PELHolder__uType : ::uClassType
{
};

List__Fuse_Input_Pointer_PELHolder__uType* List__Fuse_Input_Pointer_PELHolder__typeof();

void List__Fuse_Input_Pointer_PELHolder___ObjInit(List__Fuse_Input_Pointer_PELHolder* __this);
void List__Fuse_Input_Pointer_PELHolder__Add(List__Fuse_Input_Pointer_PELHolder* __this, ::app::Fuse::Input::Pointer_PELHolder* item);
void List__Fuse_Input_Pointer_PELHolder__BoundsCheck(List__Fuse_Input_Pointer_PELHolder* __this, int index);
void List__Fuse_Input_Pointer_PELHolder__EnsureCapacity(List__Fuse_Input_Pointer_PELHolder* __this);
int List__Fuse_Input_Pointer_PELHolder__get_Count(List__Fuse_Input_Pointer_PELHolder* __this);
::app::Fuse::Input::Pointer_PELHolder* List__Fuse_Input_Pointer_PELHolder__get_Item(List__Fuse_Input_Pointer_PELHolder* __this, int index);
List__Fuse_Input_Pointer_PELHolder* List__Fuse_Input_Pointer_PELHolder__New_1(::uStatic* __this);
void List__Fuse_Input_Pointer_PELHolder__RemoveAt(List__Fuse_Input_Pointer_PELHolder* __this, int index);
void List__Fuse_Input_Pointer_PELHolder__set_Item(List__Fuse_Input_Pointer_PELHolder* __this, int index, ::app::Fuse::Input::Pointer_PELHolder* value);

struct List__Fuse_Input_Pointer_PELHolder : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Input_Pointer_PELHolder___ObjInit(this); }
    void Add(::app::Fuse::Input::Pointer_PELHolder* item) { List__Fuse_Input_Pointer_PELHolder__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Input_Pointer_PELHolder__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Input_Pointer_PELHolder__EnsureCapacity(this); }
    int Count() { return List__Fuse_Input_Pointer_PELHolder__get_Count(this); }
    ::app::Fuse::Input::Pointer_PELHolder* Item(int index) { return List__Fuse_Input_Pointer_PELHolder__get_Item(this, index); }
    void RemoveAt(int index) { List__Fuse_Input_Pointer_PELHolder__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Input::Pointer_PELHolder* value) { List__Fuse_Input_Pointer_PELHolder__set_Item(this, index, value); }
};

}}}


#endif
