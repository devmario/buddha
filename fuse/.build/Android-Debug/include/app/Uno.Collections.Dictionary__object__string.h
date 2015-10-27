// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__OBJECT__STRING_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__OBJECT__STRING_H__

#include <app/Uno.Collections.Dictionary2_Bucket__object__string.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__object__string;

struct Dictionary__object__string__uType : ::uClassType
{
};

Dictionary__object__string__uType* Dictionary__object__string__typeof();

void Dictionary__object__string___ObjInit_1(Dictionary__object__string* __this);
void Dictionary__object__string__Add(Dictionary__object__string* __this, ::uObject* key, ::uString* value);
bool Dictionary__object__string__ContainsKey(Dictionary__object__string* __this, ::uObject* key);
::uString* Dictionary__object__string__get_Item(Dictionary__object__string* __this, ::uObject* key);
Dictionary__object__string* Dictionary__object__string__New_1(::uStatic* __this);
void Dictionary__object__string__Rehash(Dictionary__object__string* __this);
bool Dictionary__object__string__Remove(Dictionary__object__string* __this, ::uObject* key);
void Dictionary__object__string__set_Item(Dictionary__object__string* __this, ::uObject* key, ::uString* value);

struct Dictionary__object__string : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__object__string___ObjInit_1(this); }
    void Add(::uObject* key, ::uString* value) { Dictionary__object__string__Add(this, key, value); }
    bool ContainsKey(::uObject* key) { return Dictionary__object__string__ContainsKey(this, key); }
    ::uString* Item(::uObject* key) { return Dictionary__object__string__get_Item(this, key); }
    void Rehash() { Dictionary__object__string__Rehash(this); }
    bool Remove(::uObject* key) { return Dictionary__object__string__Remove(this, key); }
    void Item(::uObject* key, ::uString* value) { Dictionary__object__string__set_Item(this, key, value); }
};

}}}


#endif
