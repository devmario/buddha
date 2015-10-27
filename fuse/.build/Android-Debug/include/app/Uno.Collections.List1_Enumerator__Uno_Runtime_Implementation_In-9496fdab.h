// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_RUNTIME_IMPLEMENTATION_IN_9496FDAB_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_RUNTIME_IMPLEMENTATION_IN_9496FDAB_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Runtime_Implementation_Internal_FormatStringToken; } } }
namespace app { namespace Uno { namespace Runtime { namespace Implementation { namespace Internal { struct FormatStringToken; } } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken;

struct List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__uType* List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__typeof();

void List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken___ObjInit(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken* __this, ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken* source);
void List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__Dispose(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken* __this);
::app::Uno::Runtime::Implementation::Internal::FormatStringToken* List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__get_Current(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken* __this);
bool List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__MoveNext(List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken* __this);
List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken* source);

struct List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::Runtime::Implementation::Internal::FormatStringToken*> _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Runtime_Implementation_Internal_FormatStringToken* source) { List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__Dispose(this); }
    ::app::Uno::Runtime::Implementation::Internal::FormatStringToken* Current() { return List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Runtime_Implementation_Internal_FormatStringToken__MoveNext(this); }
};

}}}


#endif
