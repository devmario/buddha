// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__INT_H__
#define __APP_UNO_COLLECTIONS_LIST__INT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__int; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__int;

struct List__int__uType : ::uClassType
{
};

List__int__uType* List__int__typeof();

void List__int___ObjInit(List__int* __this);
void List__int___ObjInit_1(List__int* __this, int capacity);
void List__int__Add(List__int* __this, int item);
void List__int__BoundsCheck(List__int* __this, int index);
void List__int__Clear(List__int* __this);
void List__int__EnsureCapacity(List__int* __this);
int List__int__get_Count(List__int* __this);
int List__int__get_Item(List__int* __this, int index);
::app::Uno::Collections::List1_Enumerator__int List__int__GetEnumerator(List__int* __this);
List__int* List__int__New_1(::uStatic* __this);
List__int* List__int__New_2(::uStatic* __this, int capacity);
void List__int__set_Item(List__int* __this, int index, int value);

struct List__int : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__int___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__int___ObjInit_1(this, capacity); }
    void Add(int item) { List__int__Add(this, item); }
    void BoundsCheck(int index) { List__int__BoundsCheck(this, index); }
    void Clear() { List__int__Clear(this); }
    void EnsureCapacity() { List__int__EnsureCapacity(this); }
    int Count() { return List__int__get_Count(this); }
    int Item(int index) { return List__int__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__int GetEnumerator();
    void Item(int index, int value) { List__int__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__int.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__int List__int::GetEnumerator() { return List__int__GetEnumerator(this); }

}}}


#endif
