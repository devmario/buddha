// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__FLOAT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__FLOAT_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__float.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__float;

struct Dictionary__string__float__uType : ::uClassType
{
};

Dictionary__string__float__uType* Dictionary__string__float__typeof();

void Dictionary__string__float___ObjInit_1(Dictionary__string__float* __this);
void Dictionary__string__float__Add(Dictionary__string__float* __this, ::uString* key, float value);
float Dictionary__string__float__get_Item(Dictionary__string__float* __this, ::uString* key);
Dictionary__string__float* Dictionary__string__float__New_1(::uStatic* __this);
void Dictionary__string__float__Rehash(Dictionary__string__float* __this);
void Dictionary__string__float__set_Item(Dictionary__string__float* __this, ::uString* key, float value);

struct Dictionary__string__float : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__string__float___ObjInit_1(this); }
    void Add(::uString* key, float value) { Dictionary__string__float__Add(this, key, value); }
    float Item(::uString* key) { return Dictionary__string__float__get_Item(this, key); }
    void Rehash() { Dictionary__string__float__Rehash(this); }
    void Item(::uString* key, float value) { Dictionary__string__float__set_Item(this, key, value); }
};

}}}


#endif
