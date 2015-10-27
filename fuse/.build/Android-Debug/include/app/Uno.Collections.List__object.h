// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__OBJECT_H__
#define __APP_UNO_COLLECTIONS_LIST__OBJECT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__object;

struct List__object__uType : ::uClassType
{
};

List__object__uType* List__object__typeof();

void List__object___ObjInit(List__object* __this);
void List__object__Add(List__object* __this, ::uObject* item);
void List__object__BoundsCheck(List__object* __this, int index);
bool List__object__Contains(List__object* __this, ::uObject* item);
void List__object__EnsureCapacity(List__object* __this);
int List__object__get_Count(List__object* __this);
::uObject* List__object__get_Item(List__object* __this, int index);
List__object* List__object__New_1(::uStatic* __this);
bool List__object__Remove(List__object* __this, ::uObject* item);
void List__object__RemoveAt(List__object* __this, int index);
void List__object__set_Item(List__object* __this, int index, ::uObject* value);

struct List__object : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__object___ObjInit(this); }
    void Add(::uObject* item) { List__object__Add(this, item); }
    void BoundsCheck(int index) { List__object__BoundsCheck(this, index); }
    bool Contains(::uObject* item) { return List__object__Contains(this, item); }
    void EnsureCapacity() { List__object__EnsureCapacity(this); }
    int Count() { return List__object__get_Count(this); }
    ::uObject* Item(int index) { return List__object__get_Item(this, index); }
    bool Remove(::uObject* item) { return List__object__Remove(this, item); }
    void RemoveAt(int index) { List__object__RemoveAt(this, index); }
    void Item(int index, ::uObject* value) { List__object__set_Item(this, index, value); }
};

}}}


#endif
