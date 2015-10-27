// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ELEMENTS_ELEMENT_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ELEMENTS_ELEMENT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Elements_Element; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Elements_Element;

struct List__Fuse_Elements_Element__uType : ::uClassType
{
};

List__Fuse_Elements_Element__uType* List__Fuse_Elements_Element__typeof();

void List__Fuse_Elements_Element___ObjInit(List__Fuse_Elements_Element* __this);
void List__Fuse_Elements_Element__Add(List__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* item);
void List__Fuse_Elements_Element__BoundsCheck(List__Fuse_Elements_Element* __this, int index);
void List__Fuse_Elements_Element__Clear(List__Fuse_Elements_Element* __this);
void List__Fuse_Elements_Element__EnsureCapacity(List__Fuse_Elements_Element* __this);
int List__Fuse_Elements_Element__get_Count(List__Fuse_Elements_Element* __this);
::app::Fuse::Elements::Element* List__Fuse_Elements_Element__get_Item(List__Fuse_Elements_Element* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Elements_Element List__Fuse_Elements_Element__GetEnumerator(List__Fuse_Elements_Element* __this);
List__Fuse_Elements_Element* List__Fuse_Elements_Element__New_1(::uStatic* __this);
bool List__Fuse_Elements_Element__Remove(List__Fuse_Elements_Element* __this, ::app::Fuse::Elements::Element* item);
void List__Fuse_Elements_Element__RemoveAt(List__Fuse_Elements_Element* __this, int index);
void List__Fuse_Elements_Element__set_Item(List__Fuse_Elements_Element* __this, int index, ::app::Fuse::Elements::Element* value);

struct List__Fuse_Elements_Element : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Elements_Element___ObjInit(this); }
    void Add(::app::Fuse::Elements::Element* item) { List__Fuse_Elements_Element__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Elements_Element__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Elements_Element__Clear(this); }
    void EnsureCapacity() { List__Fuse_Elements_Element__EnsureCapacity(this); }
    int Count() { return List__Fuse_Elements_Element__get_Count(this); }
    ::app::Fuse::Elements::Element* Item(int index) { return List__Fuse_Elements_Element__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_Element GetEnumerator();
    bool Remove(::app::Fuse::Elements::Element* item) { return List__Fuse_Elements_Element__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Elements_Element__RemoveAt(this, index); }
    void Item(int index, ::app::Fuse::Elements::Element* value) { List__Fuse_Elements_Element__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_Element.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_Element List__Fuse_Elements_Element::GetEnumerator() { return List__Fuse_Elements_Element__GetEnumerator(this); }

}}}


#endif
