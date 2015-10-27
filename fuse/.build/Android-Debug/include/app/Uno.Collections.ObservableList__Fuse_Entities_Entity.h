// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_ENTITIES_ENTITY_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__FUSE_ENTITIES_ENTITY_H__

#include <app/Uno.Collections.ICollection__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.IList__Fuse_Entities_Entity.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Entities { struct Entity; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_Entities_Entity; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Fuse_Entities_Entity;

struct ObservableList__Fuse_Entities_Entity__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Entities_Entity __interface_0;
    ::app::Uno::Collections::ICollection__Fuse_Entities_Entity __interface_1;
};

ObservableList__Fuse_Entities_Entity__uType* ObservableList__Fuse_Entities_Entity__typeof();

void ObservableList__Fuse_Entities_Entity___ObjInit(ObservableList__Fuse_Entities_Entity* __this, ::uDelegate* added, ::uDelegate* removed);
int ObservableList__Fuse_Entities_Entity__get_Count(ObservableList__Fuse_Entities_Entity* __this);
::app::Fuse::Entities::Entity* ObservableList__Fuse_Entities_Entity__get_Item(ObservableList__Fuse_Entities_Entity* __this, int index);
ObservableList__Fuse_Entities_Entity* ObservableList__Fuse_Entities_Entity__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);

struct ObservableList__Fuse_Entities_Entity : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Fuse_Entities_Entity*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Fuse_Entities_Entity___ObjInit(this, added, removed); }
    int Count() { return ObservableList__Fuse_Entities_Entity__get_Count(this); }
    ::app::Fuse::Entities::Entity* Item(int index) { return ObservableList__Fuse_Entities_Entity__get_Item(this, index); }
};

}}}


#endif
