// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ELEMENTS_ELEMENT_BATCH_ENTRY_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__FUSE_ELEMENTS_ELEMENT_BATCH_ENTRY_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct ElementBatchEntry; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Elements_ElementBatchEntry; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Fuse_Elements_ElementBatchEntry;

struct List1_Enumerator__Fuse_Elements_ElementBatchEntry__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

List1_Enumerator__Fuse_Elements_ElementBatchEntry__uType* List1_Enumerator__Fuse_Elements_ElementBatchEntry__typeof();

void List1_Enumerator__Fuse_Elements_ElementBatchEntry___ObjInit(List1_Enumerator__Fuse_Elements_ElementBatchEntry* __this, ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry* source);
void List1_Enumerator__Fuse_Elements_ElementBatchEntry__Dispose(List1_Enumerator__Fuse_Elements_ElementBatchEntry* __this);
::app::Fuse::Elements::ElementBatchEntry* List1_Enumerator__Fuse_Elements_ElementBatchEntry__get_Current(List1_Enumerator__Fuse_Elements_ElementBatchEntry* __this);
bool List1_Enumerator__Fuse_Elements_ElementBatchEntry__MoveNext(List1_Enumerator__Fuse_Elements_ElementBatchEntry* __this);
List1_Enumerator__Fuse_Elements_ElementBatchEntry List1_Enumerator__Fuse_Elements_ElementBatchEntry__New_1(::uStatic* __this, ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry* source);

struct List1_Enumerator__Fuse_Elements_ElementBatchEntry
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Fuse::Elements::ElementBatchEntry*> _current;

    void _ObjInit(::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry* source) { List1_Enumerator__Fuse_Elements_ElementBatchEntry___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Fuse_Elements_ElementBatchEntry__Dispose(this); }
    ::app::Fuse::Elements::ElementBatchEntry* Current() { return List1_Enumerator__Fuse_Elements_ElementBatchEntry__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Fuse_Elements_ElementBatchEntry__MoveNext(this); }
};

}}}


#endif
