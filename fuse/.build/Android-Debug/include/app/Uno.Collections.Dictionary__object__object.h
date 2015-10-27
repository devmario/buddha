// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__OBJECT__OBJECT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__OBJECT__OBJECT_H__

#include <app/Uno.Collections.Dictionary2_Bucket__object__object.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__object__object;

struct Dictionary__object__object__uType : ::uClassType
{
};

Dictionary__object__object__uType* Dictionary__object__object__typeof();

void Dictionary__object__object___ObjInit_1(Dictionary__object__object* __this);
void Dictionary__object__object__Add(Dictionary__object__object* __this, ::uObject* key, ::uObject* value);
Dictionary__object__object* Dictionary__object__object__New_1(::uStatic* __this);
void Dictionary__object__object__Rehash(Dictionary__object__object* __this);
bool Dictionary__object__object__Remove(Dictionary__object__object* __this, ::uObject* key);
bool Dictionary__object__object__TryGetValue(Dictionary__object__object* __this, ::uObject* key, ::uObject** value);

struct Dictionary__object__object : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__object__object___ObjInit_1(this); }
    void Add(::uObject* key, ::uObject* value) { Dictionary__object__object__Add(this, key, value); }
    void Rehash() { Dictionary__object__object__Rehash(this); }
    bool Remove(::uObject* key) { return Dictionary__object__object__Remove(this, key); }
    bool TryGetValue(::uObject* key, ::uObject** value) { return Dictionary__object__object__TryGetValue(this, key, value); }
};

}}}


#endif
