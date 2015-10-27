// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_PLATFORM_KEY_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_PLATFORM_KEY_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Platform_Key;

struct List__Uno_Platform_Key__uType : ::uClassType
{
};

List__Uno_Platform_Key__uType* List__Uno_Platform_Key__typeof();

void List__Uno_Platform_Key___ObjInit(List__Uno_Platform_Key* __this);
void List__Uno_Platform_Key__Add(List__Uno_Platform_Key* __this, int item);
void List__Uno_Platform_Key__BoundsCheck(List__Uno_Platform_Key* __this, int index);
void List__Uno_Platform_Key__EnsureCapacity(List__Uno_Platform_Key* __this);
int List__Uno_Platform_Key__get_Count(List__Uno_Platform_Key* __this);
int List__Uno_Platform_Key__get_Item(List__Uno_Platform_Key* __this, int index);
List__Uno_Platform_Key* List__Uno_Platform_Key__New_1(::uStatic* __this);
void List__Uno_Platform_Key__RemoveAt(List__Uno_Platform_Key* __this, int index);
void List__Uno_Platform_Key__set_Item(List__Uno_Platform_Key* __this, int index, int value);

struct List__Uno_Platform_Key : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Uno_Platform_Key___ObjInit(this); }
    void Add(int item) { List__Uno_Platform_Key__Add(this, item); }
    void BoundsCheck(int index) { List__Uno_Platform_Key__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Uno_Platform_Key__EnsureCapacity(this); }
    int Count() { return List__Uno_Platform_Key__get_Count(this); }
    int Item(int index) { return List__Uno_Platform_Key__get_Item(this, index); }
    void RemoveAt(int index) { List__Uno_Platform_Key__RemoveAt(this, index); }
    void Item(int index, int value) { List__Uno_Platform_Key__set_Item(this, index, value); }
};

}}}


#endif
