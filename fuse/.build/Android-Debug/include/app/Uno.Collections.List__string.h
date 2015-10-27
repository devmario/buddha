// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__STRING_H__
#define __APP_UNO_COLLECTIONS_LIST__STRING_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__string; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__string;

struct List__string__uType : ::uClassType
{
};

List__string__uType* List__string__typeof();

void List__string___ObjInit(List__string* __this);
void List__string__Add(List__string* __this, ::uString* item);
bool List__string__Contains(List__string* __this, ::uString* item);
void List__string__EnsureCapacity(List__string* __this);
::app::Uno::Collections::List1_Enumerator__string List__string__GetEnumerator(List__string* __this);
List__string* List__string__New_1(::uStatic* __this);
::uArray* List__string__ToArray(List__string* __this);

struct List__string : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__string___ObjInit(this); }
    void Add(::uString* item) { List__string__Add(this, item); }
    bool Contains(::uString* item) { return List__string__Contains(this, item); }
    void EnsureCapacity() { List__string__EnsureCapacity(this); }
    ::app::Uno::Collections::List1_Enumerator__string GetEnumerator();
    ::uArray* ToArray() { return List__string__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__string.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__string List__string::GetEnumerator() { return List__string__GetEnumerator(this); }

}}}


#endif
