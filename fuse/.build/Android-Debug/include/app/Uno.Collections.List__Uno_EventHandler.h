// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_EVENT_HANDLER_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_EVENT_HANDLER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_EventHandler;

struct List__Uno_EventHandler__uType : ::uClassType
{
};

List__Uno_EventHandler__uType* List__Uno_EventHandler__typeof();

void List__Uno_EventHandler___ObjInit(List__Uno_EventHandler* __this);
void List__Uno_EventHandler__Add(List__Uno_EventHandler* __this, ::uDelegate* item);
void List__Uno_EventHandler__BoundsCheck(List__Uno_EventHandler* __this, int index);
bool List__Uno_EventHandler__Contains(List__Uno_EventHandler* __this, ::uDelegate* item);
void List__Uno_EventHandler__EnsureCapacity(List__Uno_EventHandler* __this);
int List__Uno_EventHandler__get_Count(List__Uno_EventHandler* __this);
::uDelegate* List__Uno_EventHandler__get_Item(List__Uno_EventHandler* __this, int index);
List__Uno_EventHandler* List__Uno_EventHandler__New_1(::uStatic* __this);
bool List__Uno_EventHandler__Remove(List__Uno_EventHandler* __this, ::uDelegate* item);
void List__Uno_EventHandler__RemoveAt(List__Uno_EventHandler* __this, int index);
void List__Uno_EventHandler__set_Item(List__Uno_EventHandler* __this, int index, ::uDelegate* value);

struct List__Uno_EventHandler : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Uno_EventHandler___ObjInit(this); }
    void Add(::uDelegate* item) { List__Uno_EventHandler__Add(this, item); }
    void BoundsCheck(int index) { List__Uno_EventHandler__BoundsCheck(this, index); }
    bool Contains(::uDelegate* item) { return List__Uno_EventHandler__Contains(this, item); }
    void EnsureCapacity() { List__Uno_EventHandler__EnsureCapacity(this); }
    int Count() { return List__Uno_EventHandler__get_Count(this); }
    ::uDelegate* Item(int index) { return List__Uno_EventHandler__get_Item(this, index); }
    bool Remove(::uDelegate* item) { return List__Uno_EventHandler__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_EventHandler__RemoveAt(this, index); }
    void Item(int index, ::uDelegate* value) { List__Uno_EventHandler__set_Item(this, index, value); }
};

}}}


#endif
