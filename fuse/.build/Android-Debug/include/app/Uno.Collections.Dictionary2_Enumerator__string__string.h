// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__STRING_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__STRING_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.KeyValuePair__string__string.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__string; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__string__string;

struct Dictionary2_Enumerator__string__string__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_Enumerator__string__string__uType* Dictionary2_Enumerator__string__string__typeof();

void Dictionary2_Enumerator__string__string___ObjInit(Dictionary2_Enumerator__string__string* __this, ::app::Uno::Collections::Dictionary__string__string* source);
void Dictionary2_Enumerator__string__string__Dispose(Dictionary2_Enumerator__string__string* __this);
::app::Uno::Collections::KeyValuePair__string__string Dictionary2_Enumerator__string__string__get_Current(Dictionary2_Enumerator__string__string* __this);
bool Dictionary2_Enumerator__string__string__MoveNext(Dictionary2_Enumerator__string__string* __this);
Dictionary2_Enumerator__string__string Dictionary2_Enumerator__string__string__New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__string* source);

struct Dictionary2_Enumerator__string__string
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__string*> _source;
    ::app::Uno::Collections::KeyValuePair__string__string _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__string* source) { Dictionary2_Enumerator__string__string___ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__string__string__Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__string__string Current() { return Dictionary2_Enumerator__string__string__get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__string__string__MoveNext(this); }
};

}}}


#endif
