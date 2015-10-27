// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_ACTION_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_ACTION_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Action; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Action;

struct List1_Enumerator__Uno_Action__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

List1_Enumerator__Uno_Action__uType* List1_Enumerator__Uno_Action__typeof();

void List1_Enumerator__Uno_Action___ObjInit(List1_Enumerator__Uno_Action* __this, ::app::Uno::Collections::List__Uno_Action* source);
void List1_Enumerator__Uno_Action__Dispose(List1_Enumerator__Uno_Action* __this);
::uDelegate* List1_Enumerator__Uno_Action__get_Current(List1_Enumerator__Uno_Action* __this);
bool List1_Enumerator__Uno_Action__MoveNext(List1_Enumerator__Uno_Action* __this);
List1_Enumerator__Uno_Action List1_Enumerator__Uno_Action__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Action* source);

struct List1_Enumerator__Uno_Action
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Action*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::uDelegate*> _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Action* source) { List1_Enumerator__Uno_Action___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Action__Dispose(this); }
    ::uDelegate* Current() { return List1_Enumerator__Uno_Action__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Action__MoveNext(this); }
};

}}}


#endif
