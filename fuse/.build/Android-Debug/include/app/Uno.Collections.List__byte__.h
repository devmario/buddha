// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__BYTE___H__
#define __APP_UNO_COLLECTIONS_LIST__BYTE___H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__byte__; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__byte__;

struct List__byte____uType : ::uClassType
{
};

List__byte____uType* List__byte____typeof();

void List__byte_____ObjInit(List__byte__* __this);
void List__byte____Add(List__byte__* __this, ::uArray* item);
void List__byte____EnsureCapacity(List__byte__* __this);
::app::Uno::Collections::List1_Enumerator__byte__ List__byte____GetEnumerator(List__byte__* __this);
List__byte__* List__byte____New_1(::uStatic* __this);

struct List__byte__ : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__byte_____ObjInit(this); }
    void Add(::uArray* item) { List__byte____Add(this, item); }
    void EnsureCapacity() { List__byte____EnsureCapacity(this); }
    ::app::Uno::Collections::List1_Enumerator__byte__ GetEnumerator();
};

}}}

#include <app/Uno.Collections.List1_Enumerator__byte__.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__byte__ List__byte__::GetEnumerator() { return List__byte____GetEnumerator(this); }

}}}


#endif
