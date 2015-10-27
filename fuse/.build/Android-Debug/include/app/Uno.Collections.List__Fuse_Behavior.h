// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_BEHAVIOR_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_BEHAVIOR_H__

#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Behavior; } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Behavior; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Behavior;

struct List__Fuse_Behavior__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Behavior __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Behavior __interface_1;
    ::app::Uno::Collections::IEnumerable__Fuse_Behavior __interface_2;
};

List__Fuse_Behavior__uType* List__Fuse_Behavior__typeof();

::uObject* List__Fuse_Behavior__GetEnumerator_boxed(List__Fuse_Behavior* __this);
void List__Fuse_Behavior___ObjInit(List__Fuse_Behavior* __this);
void List__Fuse_Behavior__Add(List__Fuse_Behavior* __this, ::app::Fuse::Behavior* item);
void List__Fuse_Behavior__BoundsCheck(List__Fuse_Behavior* __this, int index);
void List__Fuse_Behavior__EnsureCapacity(List__Fuse_Behavior* __this);
int List__Fuse_Behavior__get_Count(List__Fuse_Behavior* __this);
::app::Fuse::Behavior* List__Fuse_Behavior__get_Item(List__Fuse_Behavior* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Behavior List__Fuse_Behavior__GetEnumerator(List__Fuse_Behavior* __this);
List__Fuse_Behavior* List__Fuse_Behavior__New_1(::uStatic* __this);
bool List__Fuse_Behavior__Remove(List__Fuse_Behavior* __this, ::app::Fuse::Behavior* item);
void List__Fuse_Behavior__RemoveAt(List__Fuse_Behavior* __this, int index);
void List__Fuse_Behavior__set_Item(List__Fuse_Behavior* __this, int index, ::app::Fuse::Behavior* value);

struct List__Fuse_Behavior : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Behavior__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Behavior___ObjInit(this); }
    void Add(::app::Fuse::Behavior* item) { List__Fuse_Behavior__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Behavior__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Behavior__EnsureCapacity(this); }
    int Count() { return List__Fuse_Behavior__get_Count(this); }
    ::app::Fuse::Behavior* Item(int index) { return List__Fuse_Behavior__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Behavior GetEnumerator();
    bool Remove(::app::Fuse::Behavior* item) { return List__Fuse_Behavior__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Behavior__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Behavior* value) { List__Fuse_Behavior__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Behavior.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Behavior List__Fuse_Behavior::GetEnumerator() { return List__Fuse_Behavior__GetEnumerator(this); }

}}}


#endif
