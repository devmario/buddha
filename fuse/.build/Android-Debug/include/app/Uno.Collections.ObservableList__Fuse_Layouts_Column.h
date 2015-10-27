// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_LAYOUTS_COLUMN_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_LAYOUTS_COLUMN_H__

#include <app/Uno.Collections.ICollection__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_Column.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Layouts { struct Column; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Layouts_Column; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Fuse_Layouts_Column;

struct ObservableList__Fuse_Layouts_Column__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Layouts_Column __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Layouts_Column __interface_1;
};

ObservableList__Fuse_Layouts_Column__uType* ObservableList__Fuse_Layouts_Column__typeof();

void ObservableList__Fuse_Layouts_Column___ObjInit(ObservableList__Fuse_Layouts_Column* __this, ::uDelegate* added, ::uDelegate* removed);
void ObservableList__Fuse_Layouts_Column__Add(ObservableList__Fuse_Layouts_Column* __this, ::app::Fuse::Layouts::Column* item);
void ObservableList__Fuse_Layouts_Column__Clear(ObservableList__Fuse_Layouts_Column* __this);
int ObservableList__Fuse_Layouts_Column__get_Count(ObservableList__Fuse_Layouts_Column* __this);
::app::Fuse::Layouts::Column* ObservableList__Fuse_Layouts_Column__get_Item(ObservableList__Fuse_Layouts_Column* __this, int index);
ObservableList__Fuse_Layouts_Column* ObservableList__Fuse_Layouts_Column__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);

struct ObservableList__Fuse_Layouts_Column : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Layouts_Column*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Fuse_Layouts_Column___ObjInit(this, added, removed); }
    void Add(::app::Fuse::Layouts::Column* item) { ObservableList__Fuse_Layouts_Column__Add(this, item); }
    void Clear() { ObservableList__Fuse_Layouts_Column__Clear(this); }
    int Count() { return ObservableList__Fuse_Layouts_Column__get_Count(this); }
    ::app::Fuse::Layouts::Column* Item(int index) { return ObservableList__Fuse_Layouts_Column__get_Item(this, index); }
};

}}}


#endif
