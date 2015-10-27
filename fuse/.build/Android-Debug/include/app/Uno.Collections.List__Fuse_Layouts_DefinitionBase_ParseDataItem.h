// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__FUSE_LAYOUTS_DEFINITION_BASE_PARSE_DATA_ITEM_H__
#define __APP_UNO_COLLECTIONS_LIST__FUSE_LAYOUTS_DEFINITION_BASE_PARSE_DATA_ITEM_H__

#include <app/Fuse.Layouts.DefinitionBase_ParseDataItem.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Layouts_DefinitionBase_ParseDataItem.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_DefinitionBase_ParseDataItem.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Fuse_Layouts_DefinitionBase_ParseDataItem;

struct List__Fuse_Layouts_DefinitionBase_ParseDataItem__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Fuse_Layouts_DefinitionBase_ParseDataItem __interface_0;
    ::app::Uno::Collections::IEnumerable__Fuse_Layouts_DefinitionBase_ParseDataItem __interface_1;
};

List__Fuse_Layouts_DefinitionBase_ParseDataItem__uType* List__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof();

::uObject* List__Fuse_Layouts_DefinitionBase_ParseDataItem__GetEnumerator_boxed(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this);
void List__Fuse_Layouts_DefinitionBase_ParseDataItem___ObjInit(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this);
void List__Fuse_Layouts_DefinitionBase_ParseDataItem__Add(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this, ::app::Fuse::Layouts::DefinitionBase_ParseDataItem item);
void List__Fuse_Layouts_DefinitionBase_ParseDataItem__EnsureCapacity(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this);
::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem List__Fuse_Layouts_DefinitionBase_ParseDataItem__GetEnumerator(List__Fuse_Layouts_DefinitionBase_ParseDataItem* __this);
List__Fuse_Layouts_DefinitionBase_ParseDataItem* List__Fuse_Layouts_DefinitionBase_ParseDataItem__New_1(::uStatic* __this);

struct List__Fuse_Layouts_DefinitionBase_ParseDataItem : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Fuse_Layouts_DefinitionBase_ParseDataItem__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Fuse_Layouts_DefinitionBase_ParseDataItem___ObjInit(this); }
    void Add(::app::Fuse::Layouts::DefinitionBase_ParseDataItem item);
    void EnsureCapacity() { List__Fuse_Layouts_DefinitionBase_ParseDataItem__EnsureCapacity(this); }
    ::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem GetEnumerator();
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Fuse_Layouts_DefinitionBase_P-3410cf28.h>

namespace app {
namespace Uno {
namespace Collections {

inline void List__Fuse_Layouts_DefinitionBase_ParseDataItem::Add(::app::Fuse::Layouts::DefinitionBase_ParseDataItem item) { List__Fuse_Layouts_DefinitionBase_ParseDataItem__Add(this, item); }
inline ::app::Uno::Collections::List1_Enumerator__Fuse_Layouts_DefinitionBase_ParseDataItem List__Fuse_Layouts_DefinitionBase_ParseDataItem::GetEnumerator() { return List__Fuse_Layouts_DefinitionBase_ParseDataItem__GetEnumerator(this); }

}}}


#endif
