// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__UNO_U_X_I_FACTORY_H__
#define __APP_UNO_COLLECTIONS_OBSERVABLE_LIST__UNO_U_X_I_FACTORY_H__

#include <app/Uno.Collections.IEnumerable__Uno_UX_IFactory.h>
#include <app/Uno.Collections.IList__Uno_UX_IFactory.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_UX_IFactory; } } }

namespace app {
namespace Uno {
namespace Collections {

struct ObservableList__Uno_UX_IFactory;

struct ObservableList__Uno_UX_IFactory__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_UX_IFactory __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_UX_IFactory __interface_1;
};

ObservableList__Uno_UX_IFactory__uType* ObservableList__Uno_UX_IFactory__typeof();

void ObservableList__Uno_UX_IFactory___ObjInit(ObservableList__Uno_UX_IFactory* __this, ::uDelegate* added, ::uDelegate* removed);
::uObject* ObservableList__Uno_UX_IFactory__GetEnumerator(ObservableList__Uno_UX_IFactory* __this);
ObservableList__Uno_UX_IFactory* ObservableList__Uno_UX_IFactory__New_1(::uStatic* __this, ::uDelegate* added, ::uDelegate* removed);

struct ObservableList__Uno_UX_IFactory : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Uno_UX_IFactory*> items;
    ::uStrong< ::uDelegate*> added;
    ::uStrong< ::uDelegate*> removed;

    void _ObjInit(::uDelegate* added, ::uDelegate* removed) { ObservableList__Uno_UX_IFactory___ObjInit(this, added, removed); }
    ::uObject* GetEnumerator() { return ObservableList__Uno_UX_IFactory__GetEnumerator(this); }
};

}}}


#endif
