// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_LAYOUTS_ROW_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_LAYOUTS_ROW_H__

#include <app/Uno.Collections.ICollection__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_Row.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Layouts { struct Row; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Layouts_Row; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Fuse_Layouts_Row;

struct ObservableList__Fuse_Layouts_Row__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Layouts_Row __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Layouts_Row __interface_1;
};

ObservableList__Fuse_Layouts_Row__uType* ObservableList__Fuse_Layouts_Row__typeof();

void ObservableList__Fuse_Layouts_Row___ObjInit(ObservableList__Fuse_Layouts_Row* __this, ::uDelegate* added, ::uDelegate* removed);
void ObservableList__Fuse_Layouts_Row__Add(ObservableList__Fuse_Layouts_Row* __this, ::app::Fuse::Layouts::Row* item);
void ObservableList__Fuse_Layouts_Row__Clear(ObservableList__Fuse_Layouts_Row* __this);
int ObservableList__Fuse_Layouts_Row__get_Count(ObservableList__Fuse_Layouts_Row* __this);
::app::Fuse::Layouts::Row* ObservableList__Fuse_Layouts_Row__get_Item(ObservableList__Fuse_Layouts_Row* __this, int index);
ObservableList__Fuse_Layouts_Row* ObservableList__Fuse_Layouts_Row__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);

struct ObservableList__Fuse_Layouts_Row : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Layouts_Row*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Fuse_Layouts_Row___ObjInit(this, added, removed); }
    void Add(::app::Fuse::Layouts::Row* item) { ObservableList__Fuse_Layouts_Row__Add(this, item); }
    void Clear() { ObservableList__Fuse_Layouts_Row__Clear(this); }
    int Count() { return ObservableList__Fuse_Layouts_Row__get_Count(this); }
    ::app::Fuse::Layouts::Row* Item(int index) { return ObservableList__Fuse_Layouts_Row__get_Item(this, index); }
};

}}}


#endif
