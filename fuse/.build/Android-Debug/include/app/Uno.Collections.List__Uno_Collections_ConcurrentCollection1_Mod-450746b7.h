// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_COLLECTIONS_CONCURRENT_COLLECTION1_MOD_450746B7_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_COLLECTIONS_CONCURRENT_COLLECTION1_MOD_450746B7_H__

#include <app/Uno.Collections.ConcurrentCollection1_ModItem__Uno_EventHandler.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_;

struct List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___uType : ::uClassType
{
};

List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___uType* List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___typeof();

void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler____ObjInit(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___Add(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler item);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___BoundsCheck(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, int index);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___Clear(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___EnsureCapacity(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this);
int List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___get_Count(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this);
::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___get_Item(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, int index);
List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___New_1(::uStatic* __this);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___RemoveAt(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, int index);
void List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___set_Item(List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_* __this, int index, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler value);

struct List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler_ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler____ObjInit(this); }
    void Add(::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler item) { List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___Add(this, item); }
    void BoundsCheck(int index) { List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___BoundsCheck(this, index); }
    void Clear() { List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___Clear(this); }
    void EnsureCapacity() { List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___EnsureCapacity(this); }
    int Count() { return List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___get_Count(this); }
    ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler Item(int index) { return List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___get_Item(this, index); }
    void RemoveAt(int index) { List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Collections::ConcurrentCollection1_ModItem__Uno_EventHandler value) { List__Uno_Collections_ConcurrentCollection1_ModItem_Uno_EventHandler___set_Item(this, index, value); }
};

}}}


#endif
