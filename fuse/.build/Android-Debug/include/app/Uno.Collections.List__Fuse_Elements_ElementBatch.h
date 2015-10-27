// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ELEMENTS_ELEMENT_BATCH_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ELEMENTS_ELEMENT_BATCH_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct ElementBatch; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Elements_ElementBatch; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Elements_ElementBatch;

struct List__Fuse_Elements_ElementBatch__uType : ::uClassType
{
};

List__Fuse_Elements_ElementBatch__uType* List__Fuse_Elements_ElementBatch__typeof();

void List__Fuse_Elements_ElementBatch___ObjInit(List__Fuse_Elements_ElementBatch* __this);
void List__Fuse_Elements_ElementBatch__Add(List__Fuse_Elements_ElementBatch* __this, ::app::Fuse::Elements::ElementBatch* item);
void List__Fuse_Elements_ElementBatch__Clear(List__Fuse_Elements_ElementBatch* __this);
void List__Fuse_Elements_ElementBatch__EnsureCapacity(List__Fuse_Elements_ElementBatch* __this);
::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementBatch List__Fuse_Elements_ElementBatch__GetEnumerator(List__Fuse_Elements_ElementBatch* __this);
List__Fuse_Elements_ElementBatch* List__Fuse_Elements_ElementBatch__New_1(::uStatic* __this);

struct List__Fuse_Elements_ElementBatch : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Elements_ElementBatch___ObjInit(this); }
    void Add(::app::Fuse::Elements::ElementBatch* item) { List__Fuse_Elements_ElementBatch__Add(this, item); }
    void Clear() { List__Fuse_Elements_ElementBatch__Clear(this); }
    void EnsureCapacity() { List__Fuse_Elements_ElementBatch__EnsureCapacity(this); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementBatch GetEnumerator();
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_ElementBatch.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementBatch List__Fuse_Elements_ElementBatch::GetEnumerator() { return List__Fuse_Elements_ElementBatch__GetEnumerator(this); }

}}}


#endif
