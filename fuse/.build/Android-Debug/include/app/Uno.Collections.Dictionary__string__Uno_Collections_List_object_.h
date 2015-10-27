// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_COLLECTIONS_LIST_OBJECT__H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_COLLECTIONS_LIST_OBJECT__H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Collections_List_object_.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__Uno_Collections_List_object_; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__string__Uno_Collections_List_object_; } } }
namespace app { namespace Uno { namespace Collections { struct List__object; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Uno_Collections_List_object_;

struct Dictionary__string__Uno_Collections_List_object___uType : ::uClassType
{
};

Dictionary__string__Uno_Collections_List_object___uType* Dictionary__string__Uno_Collections_List_object___typeof();

void Dictionary__string__Uno_Collections_List_object____ObjInit_1(Dictionary__string__Uno_Collections_List_object_* __this);
void Dictionary__string__Uno_Collections_List_object___Add(Dictionary__string__Uno_Collections_List_object_* __this, ::uString* key, ::app::Uno::Collections::List__object* value);
bool Dictionary__string__Uno_Collections_List_object___ContainsKey(Dictionary__string__Uno_Collections_List_object_* __this, ::uString* key);
::app::Uno::Collections::List__object* Dictionary__string__Uno_Collections_List_object___get_Item(Dictionary__string__Uno_Collections_List_object_* __this, ::uString* key);
::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Collections_List_object_* Dictionary__string__Uno_Collections_List_object___get_Values(Dictionary__string__Uno_Collections_List_object_* __this);
::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Collections_List_object_ Dictionary__string__Uno_Collections_List_object___GetEnumerator(Dictionary__string__Uno_Collections_List_object_* __this);
Dictionary__string__Uno_Collections_List_object_* Dictionary__string__Uno_Collections_List_object___New_1(::uStatic* __this);
void Dictionary__string__Uno_Collections_List_object___Rehash(Dictionary__string__Uno_Collections_List_object_* __this);
void Dictionary__string__Uno_Collections_List_object___set_Item(Dictionary__string__Uno_Collections_List_object_* __this, ::uString* key, ::app::Uno::Collections::List__object* value);
bool Dictionary__string__Uno_Collections_List_object___TryGetValue(Dictionary__string__Uno_Collections_List_object_* __this, ::uString* key, ::app::Uno::Collections::List__object** value);

struct Dictionary__string__Uno_Collections_List_object_ : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__string__Uno_Collections_List_object____ObjInit_1(this); }
    void Add(::uString* key, ::app::Uno::Collections::List__object* value) { Dictionary__string__Uno_Collections_List_object___Add(this, key, value); }
    bool ContainsKey(::uString* key) { return Dictionary__string__Uno_Collections_List_object___ContainsKey(this, key); }
    ::app::Uno::Collections::List__object* Item(::uString* key) { return Dictionary__string__Uno_Collections_List_object___get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Collections_List_object_* Values() { return Dictionary__string__Uno_Collections_List_object___get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Collections_List_object_ GetEnumerator();
    void Rehash() { Dictionary__string__Uno_Collections_List_object___Rehash(this); }
    void Item(::uString* key, ::app::Uno::Collections::List__object* value) { Dictionary__string__Uno_Collections_List_object___set_Item(this, key, value); }
    bool TryGetValue(::uString* key, ::app::Uno::Collections::List__object** value) { return Dictionary__string__Uno_Collections_List_object___TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__string__Uno_Collections-1b08b4db.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Collections_List_object_ Dictionary__string__Uno_Collections_List_object_::GetEnumerator() { return Dictionary__string__Uno_Collections_List_object___GetEnumerator(this); }

}}}


#endif
