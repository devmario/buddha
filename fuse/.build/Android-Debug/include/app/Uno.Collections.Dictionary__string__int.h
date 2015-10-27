// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__INT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__INT_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__int.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__int;

struct Dictionary__string__int__uType : ::uClassType
{
};

Dictionary__string__int__uType* Dictionary__string__int__typeof();

void Dictionary__string__int___ObjInit_1(Dictionary__string__int* __this);
void Dictionary__string__int__Add(Dictionary__string__int* __this, ::uString* key, int value);
int Dictionary__string__int__get_Item(Dictionary__string__int* __this, ::uString* key);
Dictionary__string__int* Dictionary__string__int__New_1(::uStatic* __this);
void Dictionary__string__int__Rehash(Dictionary__string__int* __this);
void Dictionary__string__int__set_Item(Dictionary__string__int* __this, ::uString* key, int value);

struct Dictionary__string__int : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__string__int___ObjInit_1(this); }
    void Add(::uString* key, int value) { Dictionary__string__int__Add(this, key, value); }
    int Item(::uString* key) { return Dictionary__string__int__get_Item(this, key); }
    void Rehash() { Dictionary__string__int__Rehash(this); }
    void Item(::uString* key, int value) { Dictionary__string__int__set_Item(this, key, value); }
};

}}}


#endif
