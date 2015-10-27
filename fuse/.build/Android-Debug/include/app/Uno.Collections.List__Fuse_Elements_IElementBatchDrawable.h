// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ELEMENTS_I_ELEMENT_BATCH_DRAWABLE_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ELEMENTS_I_ELEMENT_BATCH_DRAWABLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Elements_IElementBatchDrawable; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Elements_IElementBatchDrawable;

struct List__Fuse_Elements_IElementBatchDrawable__uType : ::uClassType
{
};

List__Fuse_Elements_IElementBatchDrawable__uType* List__Fuse_Elements_IElementBatchDrawable__typeof();

void List__Fuse_Elements_IElementBatchDrawable___ObjInit(List__Fuse_Elements_IElementBatchDrawable* __this);
void List__Fuse_Elements_IElementBatchDrawable__Add(List__Fuse_Elements_IElementBatchDrawable* __this, ::uObject* item);
void List__Fuse_Elements_IElementBatchDrawable__Clear(List__Fuse_Elements_IElementBatchDrawable* __this);
void List__Fuse_Elements_IElementBatchDrawable__EnsureCapacity(List__Fuse_Elements_IElementBatchDrawable* __this);
::app::Uno::Collections::List1_Enumerator__Fuse_Elements_IElementBatchDrawable List__Fuse_Elements_IElementBatchDrawable__GetEnumerator(List__Fuse_Elements_IElementBatchDrawable* __this);
List__Fuse_Elements_IElementBatchDrawable* List__Fuse_Elements_IElementBatchDrawable__New_1(::uStatic* __this);

struct List__Fuse_Elements_IElementBatchDrawable : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Elements_IElementBatchDrawable___ObjInit(this); }
    void Add(::uObject* item) { List__Fuse_Elements_IElementBatchDrawable__Add(this, item); }
    void Clear() { List__Fuse_Elements_IElementBatchDrawable__Clear(this); }
    void EnsureCapacity() { List__Fuse_Elements_IElementBatchDrawable__EnsureCapacity(this); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_IElementBatchDrawable GetEnumerator();
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_IElementBatchDrawable.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_IElementBatchDrawable List__Fuse_Elements_IElementBatchDrawable::GetEnumerator() { return List__Fuse_Elements_IElementBatchDrawable__GetEnumerator(this); }

}}}


#endif
