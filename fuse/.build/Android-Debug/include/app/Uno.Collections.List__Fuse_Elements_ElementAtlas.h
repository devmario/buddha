// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_ELEMENTS_ELEMENT_ATLAS_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_ELEMENTS_ELEMENT_ATLAS_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct ElementAtlas; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Elements_ElementAtlas; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Elements_ElementAtlas;

struct List__Fuse_Elements_ElementAtlas__uType : ::uClassType
{
};

List__Fuse_Elements_ElementAtlas__uType* List__Fuse_Elements_ElementAtlas__typeof();

void List__Fuse_Elements_ElementAtlas___ObjInit(List__Fuse_Elements_ElementAtlas* __this);
void List__Fuse_Elements_ElementAtlas__Add(List__Fuse_Elements_ElementAtlas* __this, ::app::Fuse::Elements::ElementAtlas* item);
void List__Fuse_Elements_ElementAtlas__BoundsCheck(List__Fuse_Elements_ElementAtlas* __this, int index);
void List__Fuse_Elements_ElementAtlas__Clear(List__Fuse_Elements_ElementAtlas* __this);
void List__Fuse_Elements_ElementAtlas__EnsureCapacity(List__Fuse_Elements_ElementAtlas* __this);
int List__Fuse_Elements_ElementAtlas__get_Count(List__Fuse_Elements_ElementAtlas* __this);
::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementAtlas List__Fuse_Elements_ElementAtlas__GetEnumerator(List__Fuse_Elements_ElementAtlas* __this);
List__Fuse_Elements_ElementAtlas* List__Fuse_Elements_ElementAtlas__New_1(::uStatic* __this);
bool List__Fuse_Elements_ElementAtlas__Remove(List__Fuse_Elements_ElementAtlas* __this, ::app::Fuse::Elements::ElementAtlas* item);
void List__Fuse_Elements_ElementAtlas__RemoveAt(List__Fuse_Elements_ElementAtlas* __this, int index);

struct List__Fuse_Elements_ElementAtlas : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Elements_ElementAtlas___ObjInit(this); }
    void Add(::app::Fuse::Elements::ElementAtlas* item) { List__Fuse_Elements_ElementAtlas__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Elements_ElementAtlas__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Elements_ElementAtlas__Clear(this); }
    void EnsureCapacity() { List__Fuse_Elements_ElementAtlas__EnsureCapacity(this); }
    int Count() { return List__Fuse_Elements_ElementAtlas__get_Count(this); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementAtlas GetEnumerator();
    bool Remove(::app::Fuse::Elements::ElementAtlas* item) { return List__Fuse_Elements_ElementAtlas__Remove(this, item); }
    void RemoveAt(int index) { List__Fuse_Elements_ElementAtlas__RemoveAt(this, index); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_ElementAtlas.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementAtlas List__Fuse_Elements_ElementAtlas::GetEnumerator() { return List__Fuse_Elements_ElementAtlas__GetEnumerator(this); }

}}}


#endif
