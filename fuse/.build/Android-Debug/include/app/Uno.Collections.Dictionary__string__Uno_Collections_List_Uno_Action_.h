// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_COLLECTIONS_LIST_UNO_ACTION__H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_COLLECTIONS_LIST_UNO_ACTION__H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Collections_Lis-9fb18561.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Action; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Uno_Collections_List_Uno_Action_;

struct Dictionary__string__Uno_Collections_List_Uno_Action___uType : ::uClassType
{
};

Dictionary__string__Uno_Collections_List_Uno_Action___uType* Dictionary__string__Uno_Collections_List_Uno_Action___typeof();

void Dictionary__string__Uno_Collections_List_Uno_Action____ObjInit_1(Dictionary__string__Uno_Collections_List_Uno_Action_* __this);
void Dictionary__string__Uno_Collections_List_Uno_Action___Add(Dictionary__string__Uno_Collections_List_Uno_Action_* __this, ::uString* key, ::app::Uno::Collections::List__Uno_Action* value);
bool Dictionary__string__Uno_Collections_List_Uno_Action___ContainsKey(Dictionary__string__Uno_Collections_List_Uno_Action_* __this, ::uString* key);
::app::Uno::Collections::List__Uno_Action* Dictionary__string__Uno_Collections_List_Uno_Action___get_Item(Dictionary__string__Uno_Collections_List_Uno_Action_* __this, ::uString* key);
Dictionary__string__Uno_Collections_List_Uno_Action_* Dictionary__string__Uno_Collections_List_Uno_Action___New_1(::uStatic* __this);
void Dictionary__string__Uno_Collections_List_Uno_Action___Rehash(Dictionary__string__Uno_Collections_List_Uno_Action_* __this);
void Dictionary__string__Uno_Collections_List_Uno_Action___set_Item(Dictionary__string__Uno_Collections_List_Uno_Action_* __this, ::uString* key, ::app::Uno::Collections::List__Uno_Action* value);
bool Dictionary__string__Uno_Collections_List_Uno_Action___TryGetValue(Dictionary__string__Uno_Collections_List_Uno_Action_* __this, ::uString* key, ::app::Uno::Collections::List__Uno_Action** value);

struct Dictionary__string__Uno_Collections_List_Uno_Action_ : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__string__Uno_Collections_List_Uno_Action____ObjInit_1(this); }
    void Add(::uString* key, ::app::Uno::Collections::List__Uno_Action* value) { Dictionary__string__Uno_Collections_List_Uno_Action___Add(this, key, value); }
    bool ContainsKey(::uString* key) { return Dictionary__string__Uno_Collections_List_Uno_Action___ContainsKey(this, key); }
    ::app::Uno::Collections::List__Uno_Action* Item(::uString* key) { return Dictionary__string__Uno_Collections_List_Uno_Action___get_Item(this, key); }
    void Rehash() { Dictionary__string__Uno_Collections_List_Uno_Action___Rehash(this); }
    void Item(::uString* key, ::app::Uno::Collections::List__Uno_Action* value) { Dictionary__string__Uno_Collections_List_Uno_Action___set_Item(this, key, value); }
    bool TryGetValue(::uString* key, ::app::Uno::Collections::List__Uno_Action** value) { return Dictionary__string__Uno_Collections_List_Uno_Action___TryGetValue(this, key, value); }
};

}}}


#endif
