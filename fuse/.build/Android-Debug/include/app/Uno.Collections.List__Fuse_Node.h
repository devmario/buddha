// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_NODE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_NODE_H__

#include <app/Uno.Collections.ICollection__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Node.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Node; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Node;

struct List__Fuse_Node__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Node __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Node __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Node __interface_2;
};

List__Fuse_Node__uType* List__Fuse_Node__typeof();

::uObject* List__Fuse_Node__GetEnumerator_boxed(List__Fuse_Node* __this);
void List__Fuse_Node___ObjInit(List__Fuse_Node* __this);
void List__Fuse_Node__Add(List__Fuse_Node* __this, ::app::Fuse::Node* item);
void List__Fuse_Node__BoundsCheck(List__Fuse_Node* __this, int index);
void List__Fuse_Node__Clear(List__Fuse_Node* __this);
bool List__Fuse_Node__Contains(List__Fuse_Node* __this, ::app::Fuse::Node* item);
void List__Fuse_Node__EnsureCapacity(List__Fuse_Node* __this);
int List__Fuse_Node__get_Count(List__Fuse_Node* __this);
::app::Fuse::Node* List__Fuse_Node__get_Item(List__Fuse_Node* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Node List__Fuse_Node__GetEnumerator(List__Fuse_Node* __this);
void List__Fuse_Node__Insert(List__Fuse_Node* __this, int index, ::app::Fuse::Node* item);
List__Fuse_Node* List__Fuse_Node__New_1(::uStatic* __this);
bool List__Fuse_Node__Remove(List__Fuse_Node* __this, ::app::Fuse::Node* item);
void List__Fuse_Node__RemoveAt(List__Fuse_Node* __this, int index);
void List__Fuse_Node__set_Item(List__Fuse_Node* __this, int index, ::app::Fuse::Node* value);
void List__Fuse_Node__Sort(List__Fuse_Node* __this, ::uDelegate* comparer);

struct List__Fuse_Node : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Node__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Node___ObjInit(this); }
    void Add(::app::Fuse::Node* item) { List__Fuse_Node__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Node__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Node__Clear(this); }
    bool Contains(::app::Fuse::Node* item) { return List__Fuse_Node__Contains(this, item); }
    void EnsureCapacity() { List__Fuse_Node__EnsureCapacity(this); }
    int Count() { return List__Fuse_Node__get_Count(this); }
    ::app::Fuse::Node* Item(int index) { return List__Fuse_Node__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Node GetEnumerator();
    void Insert(int index, ::app::Fuse::Node* item) { List__Fuse_Node__Insert(this, index, item); }
    bool Remove(::app::Fuse::Node* item) { return List__Fuse_Node__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Node__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Node* value) { List__Fuse_Node__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Fuse_Node__Sort(this, comparer); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Node.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Node List__Fuse_Node::GetEnumerator() { return List__Fuse_Node__GetEnumerator(this); }

}}}


#endif
