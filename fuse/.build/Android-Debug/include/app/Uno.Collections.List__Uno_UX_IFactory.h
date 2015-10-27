// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_U_X_I_FACTORY_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_U_X_I_FACTORY_H__

#include <app/Uno.Collections.IEnumerable__Uno_UX_IFactory.h>
#include <app/Uno.Collections.IList__Uno_UX_IFactory.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_UX_IFactory; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_UX_IFactory;

struct List__Uno_UX_IFactory__uType : ::uClassType
{
    ::app::Uno::Collections::IList__Uno_UX_IFactory __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_UX_IFactory __interface_1;
};

List__Uno_UX_IFactory__uType* List__Uno_UX_IFactory__typeof();

::uObject* List__Uno_UX_IFactory__GetEnumerator_boxed(List__Uno_UX_IFactory* __this);
void List__Uno_UX_IFactory___ObjInit(List__Uno_UX_IFactory* __this);
::app::Uno::Collections::List1_Enumerator__Uno_UX_IFactory List__Uno_UX_IFactory__GetEnumerator(List__Uno_UX_IFactory* __this);
List__Uno_UX_IFactory* List__Uno_UX_IFactory__New_1(::uStatic* __this);

struct List__Uno_UX_IFactory : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_UX_IFactory__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_UX_IFactory___ObjInit(this); }
    ::app::Uno::Collections::List1_Enumerator__Uno_UX_IFactory GetEnumerator();
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_UX_IFactory.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_UX_IFactory List__Uno_UX_IFactory::GetEnumerator() { return List__Uno_UX_IFactory__GetEnumerator(this); }

}}}


#endif
