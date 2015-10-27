// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_LAYOUTS_COLUMN_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_LAYOUTS_COLUMN_H__

#include <app/Uno.Collections.ICollection__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_Column.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Layouts { struct Column; } } }
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Layouts_Column; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Layouts_Column;

struct List__Fuse_Layouts_Column__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Layouts_Column __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Layouts_Column __interface_1;
};

List__Fuse_Layouts_Column__uType* List__Fuse_Layouts_Column__typeof();

void List__Fuse_Layouts_Column___ObjInit(List__Fuse_Layouts_Column* __this);
void List__Fuse_Layouts_Column__Add(List__Fuse_Layouts_Column* __this, ::app::Fuse::Layouts::Column* item);
void List__Fuse_Layouts_Column__BoundsCheck(List__Fuse_Layouts_Column* __this, int index);
void List__Fuse_Layouts_Column__Clear(List__Fuse_Layouts_Column* __this);
void List__Fuse_Layouts_Column__EnsureCapacity(List__Fuse_Layouts_Column* __this);
int List__Fuse_Layouts_Column__get_Count(List__Fuse_Layouts_Column* __this);
::app::Fuse::Layouts::Column* List__Fuse_Layouts_Column__get_Item(List__Fuse_Layouts_Column* __this, int index);
::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_Column List__Fuse_Layouts_Column__GetEnumerator(List__Fuse_Layouts_Column* __this);
List__Fuse_Layouts_Column* List__Fuse_Layouts_Column__New_1(::uStatic* __this);
void List__Fuse_Layouts_Column__set_Item(List__Fuse_Layouts_Column* __this, int index, ::app::Fuse::Layouts::Column* value);

struct List__Fuse_Layouts_Column : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Fuse_Layouts_Column___ObjInit(this); }
    void Add(::app::Fuse::Layouts::Column* item) { List__Fuse_Layouts_Column__Add(this, item); }
    void BoundsCheck(int index) { List__Fuse_Layouts_Column__BoundsCheck(this, index); }
    void Clear() { List__Fuse_Layouts_Column__Clear(this); }
    void EnsureCapacity() { List__Fuse_Layouts_Column__EnsureCapacity(this); }
    int Count() { return List__Fuse_Layouts_Column__get_Count(this); }
    ::app::Fuse::Layouts::Column* Item(int index) { return List__Fuse_Layouts_Column__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_Column GetEnumerator();
    void Item(int index, ::app::Fuse::Layouts::Column* value) { List__Fuse_Layouts_Column__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Layouts_Column.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_Column List__Fuse_Layouts_Column::GetEnumerator() { return List__Fuse_Layouts_Column__GetEnumerator(this); }

}}}


#endif
