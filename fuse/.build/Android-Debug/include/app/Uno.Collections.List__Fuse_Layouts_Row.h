// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_LAYOUTS_ROW_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_LAYOUTS_ROW_H__

#include <app/Uno.Collections.ICollection__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_Row.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Layouts { struct Row; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Layouts_Row; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Layouts_Row;

struct List__Fuse_Layouts_Row__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Layouts_Row __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Layouts_Row __interface_1;
};

List__Fuse_Layouts_Row__uType* List__Fuse_Layouts_Row__typeof();

void List__Fuse_Layouts_Row___ObjInit(List__Fuse_Layouts_Row* __this);
void List__Fuse_Layouts_Row__Add(List__Fuse_Layouts_Row* __this, ::app::Fuse::Layouts::Row* item);
void List__Fuse_Layouts_Row__BoundsCheck(List__Fuse_Layouts_Row* __this, int index);
void List__Fuse_Layouts_Row__Clear(List__Fuse_Layouts_Row* __this);
void List__Fuse_Layouts_Row__EnsureCapacity(List__Fuse_Layouts_Row* __this);
int List__Fuse_Layouts_Row__get_Count(List__Fuse_Layouts_Row* __this);
::app::Fuse::Layouts::Row* List__Fuse_Layouts_Row__get_Item(List__Fuse_Layouts_Row* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_Row List__Fuse_Layouts_Row__GetEnumerator(List__Fuse_Layouts_Row* __this);
List__Fuse_Layouts_Row* List__Fuse_Layouts_Row__New_1(::uStatic* __this);
void List__Fuse_Layouts_Row__set_Item(List__Fuse_Layouts_Row* __this, int index, ::app::Fuse::Layouts::Row* value);

struct List__Fuse_Layouts_Row : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Layouts_Row___ObjInit(this); }
    void Add(::app::Fuse::Layouts::Row* item) { List__Fuse_Layouts_Row__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Layouts_Row__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Layouts_Row__Clear(this); }
    void EnsureCapacity() { List__Fuse_Layouts_Row__EnsureCapacity(this); }
    int Count() { return List__Fuse_Layouts_Row__get_Count(this); }
    ::app::Fuse::Layouts::Row* Item(int index) { return List__Fuse_Layouts_Row__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_Row GetEnumerator();
    void Item(int index, ::app::Fuse::Layouts::Row* value) { List__Fuse_Layouts_Row__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Layouts_Row.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_Row List__Fuse_Layouts_Row::GetEnumerator() { return List__Fuse_Layouts_Row__GetEnumerator(this); }

}}}


#endif
