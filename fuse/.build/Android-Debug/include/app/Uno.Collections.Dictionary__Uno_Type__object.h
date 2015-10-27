// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__UNO_TYPE__OBJECT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__UNO_TYPE__OBJECT_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Uno_Type__object.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Uno_Type__object;

struct Dictionary__Uno_Type__object__uType : ::uClassType
{
};

Dictionary__Uno_Type__object__uType* Dictionary__Uno_Type__object__typeof();

void Dictionary__Uno_Type__object___ObjInit_1(Dictionary__Uno_Type__object* __this);
void Dictionary__Uno_Type__object__Add(Dictionary__Uno_Type__object* __this, ::uType* key, ::uObject* value);
Dictionary__Uno_Type__object* Dictionary__Uno_Type__object__New_1(::uStatic* __this);
void Dictionary__Uno_Type__object__Rehash(Dictionary__Uno_Type__object* __this);
bool Dictionary__Uno_Type__object__TryGetValue(Dictionary__Uno_Type__object* __this, ::uType* key, ::uObject** value);

struct Dictionary__Uno_Type__object : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__Uno_Type__object___ObjInit_1(this); }
    void Add(::uType* key, ::uObject* value) { Dictionary__Uno_Type__object__Add(this, key, value); }
    void Rehash() { Dictionary__Uno_Type__object__Rehash(this); }
    bool TryGetValue(::uType* key, ::uObject** value) { return Dictionary__Uno_Type__object__TryGetValue(this, key, value); }
};

}}}


#endif
