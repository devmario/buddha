// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__UNO_U_X_RESOURCE_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__UNO_U_X_RESOURCE_H__

#include <app/Uno.Collections.ICollection__Uno_UX_Resource.h>
#include <app/Uno.Collections.IList__Uno_UX_Resource.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_UX_Resource; } } }
namespace app { namespace Uno { namespace UX { struct Resource; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Uno_UX_Resource;

struct ObservableList__Uno_UX_Resource__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_UX_Resource __interface_0;
    ::app::Uno::Collections::ICollection__Uno_UX_Resource __interface_1;
};

ObservableList__Uno_UX_Resource__uType* ObservableList__Uno_UX_Resource__typeof();

void ObservableList__Uno_UX_Resource___ObjInit(ObservableList__Uno_UX_Resource* __this, ::uDelegate* added, ::uDelegate* removed);
void ObservableList__Uno_UX_Resource__Add(ObservableList__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item);
int ObservableList__Uno_UX_Resource__get_Count(ObservableList__Uno_UX_Resource* __this);
::app::Uno::UX::Resource* ObservableList__Uno_UX_Resource__get_Item(ObservableList__Uno_UX_Resource* __this, int index);
ObservableList__Uno_UX_Resource* ObservableList__Uno_UX_Resource__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);
bool ObservableList__Uno_UX_Resource__Remove(ObservableList__Uno_UX_Resource* __this, ::app::Uno::UX::Resource* item);
void ObservableList__Uno_UX_Resource__RemoveAt(ObservableList__Uno_UX_Resource* __this, int index);

struct ObservableList__Uno_UX_Resource : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Uno_UX_Resource*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Uno_UX_Resource___ObjInit(this, added, removed); }
    void Add(::app::Uno::UX::Resource* item) { ObservableList__Uno_UX_Resource__Add(this, item); }
    int Count() { return ObservableList__Uno_UX_Resource__get_Count(this); }
    ::app::Uno::UX::Resource* Item(int index) { return ObservableList__Uno_UX_Resource__get_Item(this, index); }
    bool Remove(::app::Uno::UX::Resource* item) { return ObservableList__Uno_UX_Resource__Remove(this, item); }
    void RemoveAt(int index) { ObservableList__Uno_UX_Resource__RemoveAt(this, index); }
};

}}}


#endif
