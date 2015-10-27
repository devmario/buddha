// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__UNO_COLLECTIONS_1B08B4DB_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_ENUMERATOR__STRING__UNO_COLLECTIONS_1B08B4DB_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Collections_List_object_.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary__string__Uno_Collections_List_object_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Enumerator__string__Uno_Collections_List_object_;

struct Dictionary2_Enumerator__string__Uno_Collections_List_object___uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Dictionary2_Enumerator__string__Uno_Collections_List_object___uType* Dictionary2_Enumerator__string__Uno_Collections_List_object___typeof();

void Dictionary2_Enumerator__string__Uno_Collections_List_object____ObjInit(Dictionary2_Enumerator__string__Uno_Collections_List_object_* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_* source);
void Dictionary2_Enumerator__string__Uno_Collections_List_object___Dispose(Dictionary2_Enumerator__string__Uno_Collections_List_object_* __this);
::app::Uno::Collections::KeyValuePair__string__Uno_Collections_List_object_ Dictionary2_Enumerator__string__Uno_Collections_List_object___get_Current(Dictionary2_Enumerator__string__Uno_Collections_List_object_* __this);
bool Dictionary2_Enumerator__string__Uno_Collections_List_object___MoveNext(Dictionary2_Enumerator__string__Uno_Collections_List_object_* __this);
Dictionary2_Enumerator__string__Uno_Collections_List_object_ Dictionary2_Enumerator__string__Uno_Collections_List_object___New_1(::uStatic* __this, ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_* source);

struct Dictionary2_Enumerator__string__Uno_Collections_List_object_
{
    ::uStrong< ::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_*> _source;
    ::app::Uno::Collections::KeyValuePair__string__Uno_Collections_List_object_ _current;
    int _iterator;
    int _version;

    void _ObjInit(::app::Uno::Collections::Dictionary__string__Uno_Collections_List_object_* source) { Dictionary2_Enumerator__string__Uno_Collections_List_object____ObjInit(this, source); }
    void Dispose() { Dictionary2_Enumerator__string__Uno_Collections_List_object___Dispose(this); }
    ::app::Uno::Collections::KeyValuePair__string__Uno_Collections_List_object_ Current() { return Dictionary2_Enumerator__string__Uno_Collections_List_object___get_Current(this); }
    bool MoveNext() { return Dictionary2_Enumerator__string__Uno_Collections_List_object___MoveNext(this); }
};

}}}


#endif
