// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__OBJECT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__OBJECT_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__object.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__object;

struct Dictionary__string__object__uType : ::uClassType
{
};

Dictionary__string__object__uType* Dictionary__string__object__typeof();

void Dictionary__string__object___ObjInit_1(Dictionary__string__object* __this);
void Dictionary__string__object__Add(Dictionary__string__object* __this, ::uString* key, ::uObject* value);
Dictionary__string__object* Dictionary__string__object__New_1(::uStatic* __this);
void Dictionary__string__object__Rehash(Dictionary__string__object* __this);
bool Dictionary__string__object__Remove(Dictionary__string__object* __this, ::uString* key);
bool Dictionary__string__object__TryGetValue(Dictionary__string__object* __this, ::uString* key, ::uObject** value);

struct Dictionary__string__object : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__string__object___ObjInit_1(this); }
    void Add(::uString* key, ::uObject* value) { Dictionary__string__object__Add(this, key, value); }
    void Rehash() { Dictionary__string__object__Rehash(this); }
    bool Remove(::uString* key) { return Dictionary__string__object__Remove(this, key); }
    bool TryGetValue(::uString* key, ::uObject** value) { return Dictionary__string__object__TryGetValue(this, key, value); }
};

}}}


#endif
