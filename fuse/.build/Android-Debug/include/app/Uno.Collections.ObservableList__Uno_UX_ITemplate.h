// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__UNO_U_X_I_TEMPLATE_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__UNO_U_X_I_TEMPLATE_H__

#include <app/Uno.Collections.ICollection__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IList__Uno_UX_ITemplate.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_UX_ITemplate; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Uno_UX_ITemplate;

struct ObservableList__Uno_UX_ITemplate__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_UX_ITemplate __interface_0;
    ::app::Uno::Collections::ICollection__Uno_UX_ITemplate __interface_1;
};

ObservableList__Uno_UX_ITemplate__uType* ObservableList__Uno_UX_ITemplate__typeof();

void ObservableList__Uno_UX_ITemplate___ObjInit(ObservableList__Uno_UX_ITemplate* __this, ::uDelegate* added, ::uDelegate* removed);
void ObservableList__Uno_UX_ITemplate__Add(ObservableList__Uno_UX_ITemplate* __this, ::uObject* item);
int ObservableList__Uno_UX_ITemplate__get_Count(ObservableList__Uno_UX_ITemplate* __this);
::uObject* ObservableList__Uno_UX_ITemplate__get_Item(ObservableList__Uno_UX_ITemplate* __this, int index);
ObservableList__Uno_UX_ITemplate* ObservableList__Uno_UX_ITemplate__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);

struct ObservableList__Uno_UX_ITemplate : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Uno_UX_ITemplate*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Uno_UX_ITemplate___ObjInit(this, added, removed); }
    void Add(::uObject* item) { ObservableList__Uno_UX_ITemplate__Add(this, item); }
    int Count() { return ObservableList__Uno_UX_ITemplate__get_Count(this); }
    ::uObject* Item(int index) { return ObservableList__Uno_UX_ITemplate__get_Item(this, index); }
};

}}}


#endif
