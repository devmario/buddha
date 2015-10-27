// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__STRING_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__STRING_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__string.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__string; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__string__string; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__string;

struct Dictionary__string__string__uType : ::uClassType
{
};

Dictionary__string__string__uType* Dictionary__string__string__typeof();

void Dictionary__string__string___ObjInit_1(Dictionary__string__string* __this);
void Dictionary__string__string__Add(Dictionary__string__string* __this, ::uString* key, ::uString* value);
bool Dictionary__string__string__ContainsKey(Dictionary__string__string* __this, ::uString* key);
int Dictionary__string__string__get_Count(Dictionary__string__string* __this);
::uString* Dictionary__string__string__get_Item(Dictionary__string__string* __this, ::uString* key);
::app::Uno::Collections::Dictionary2_KeyCollection__string__string* Dictionary__string__string__get_Keys(Dictionary__string__string* __this);
::app::Uno::Collections::Dictionary2_Enumerator__string__string Dictionary__string__string__GetEnumerator(Dictionary__string__string* __this);
Dictionary__string__string* Dictionary__string__string__New_1(::uStatic* __this);
void Dictionary__string__string__Rehash(Dictionary__string__string* __this);
void Dictionary__string__string__set_Item(Dictionary__string__string* __this, ::uString* key, ::uString* value);
bool Dictionary__string__string__TryGetValue(Dictionary__string__string* __this, ::uString* key, ::uString** value);

struct Dictionary__string__string : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__string__string___ObjInit_1(this); }
    void Add(::uString* key, ::uString* value) { Dictionary__string__string__Add(this, key, value); }
    bool ContainsKey(::uString* key) { return Dictionary__string__string__ContainsKey(this, key); }
    int Count() { return Dictionary__string__string__get_Count(this); }
    ::uString* Item(::uString* key) { return Dictionary__string__string__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__string__string* Keys() { return Dictionary__string__string__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__string__string GetEnumerator();
    void Rehash() { Dictionary__string__string__Rehash(this); }
    void Item(::uString* key, ::uString* value) { Dictionary__string__string__set_Item(this, key, value); }
    bool TryGetValue(::uString* key, ::uString** value) { return Dictionary__string__string__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__string__string.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__string__string Dictionary__string__string::GetEnumerator() { return Dictionary__string__string__GetEnumerator(this); }

}}}


#endif
