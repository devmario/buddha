// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ELEMENTS_ELEMENT_BATCH_ENTRY_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ELEMENTS_ELEMENT_BATCH_ENTRY_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct ElementBatchEntry; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Elements_ElementBatchEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Elements_ElementBatchEntry;

struct List__Fuse_Elements_ElementBatchEntry__uType : ::uClassType
{
};

List__Fuse_Elements_ElementBatchEntry__uType* List__Fuse_Elements_ElementBatchEntry__typeof();

void List__Fuse_Elements_ElementBatchEntry___ObjInit(List__Fuse_Elements_ElementBatchEntry* __this);
void List__Fuse_Elements_ElementBatchEntry__Add(List__Fuse_Elements_ElementBatchEntry* __this, ::app::Fuse::Elements::ElementBatchEntry* item);
void List__Fuse_Elements_ElementBatchEntry__BoundsCheck(List__Fuse_Elements_ElementBatchEntry* __this, int index);
void List__Fuse_Elements_ElementBatchEntry__EnsureCapacity(List__Fuse_Elements_ElementBatchEntry* __this);
int List__Fuse_Elements_ElementBatchEntry__get_Count(List__Fuse_Elements_ElementBatchEntry* __this);
::app::Fuse::Elements::ElementBatchEntry* List__Fuse_Elements_ElementBatchEntry__get_Item(List__Fuse_Elements_ElementBatchEntry* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementBatchEntry List__Fuse_Elements_ElementBatchEntry__GetEnumerator(List__Fuse_Elements_ElementBatchEntry* __this);
List__Fuse_Elements_ElementBatchEntry* List__Fuse_Elements_ElementBatchEntry__New_1(::uStatic* __this);
void List__Fuse_Elements_ElementBatchEntry__set_Item(List__Fuse_Elements_ElementBatchEntry* __this, int index, ::app::Fuse::Elements::ElementBatchEntry* value);

struct List__Fuse_Elements_ElementBatchEntry : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Elements_ElementBatchEntry___ObjInit(this); }
    void Add(::app::Fuse::Elements::ElementBatchEntry* item) { List__Fuse_Elements_ElementBatchEntry__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Elements_ElementBatchEntry__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Fuse_Elements_ElementBatchEntry__EnsureCapacity(this); }
    int Count() { return List__Fuse_Elements_ElementBatchEntry__get_Count(this); }
    ::app::Fuse::Elements::ElementBatchEntry* Item(int index) { return List__Fuse_Elements_ElementBatchEntry__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementBatchEntry GetEnumerator();
    void Item(int index, ::app::Fuse::Elements::ElementBatchEntry* value) { List__Fuse_Elements_ElementBatchEntry__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_ElementBatchEntry.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementBatchEntry List__Fuse_Elements_ElementBatchEntry::GetEnumerator() { return List__Fuse_Elements_ElementBatchEntry__GetEnumerator(this); }

}}}


#endif
