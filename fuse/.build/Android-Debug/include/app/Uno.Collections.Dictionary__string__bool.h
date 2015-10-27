// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__BOOL_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__BOOL_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__bool.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__bool;

struct Dictionary__string__bool__uType : ::uClassType
{
};

Dictionary__string__bool__uType* Dictionary__string__bool__typeof();

void Dictionary__string__bool___ObjInit_1(Dictionary__string__bool* __this);
void Dictionary__string__bool__Add(Dictionary__string__bool* __this, ::uString* key, bool value);
bool Dictionary__string__bool__get_Item(Dictionary__string__bool* __this, ::uString* key);
Dictionary__string__bool* Dictionary__string__bool__New_1(::uStatic* __this);
void Dictionary__string__bool__Rehash(Dictionary__string__bool* __this);
void Dictionary__string__bool__set_Item(Dictionary__string__bool* __this, ::uString* key, bool value);

struct Dictionary__string__bool : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__string__bool___ObjInit_1(this); }
    void Add(::uString* key, bool value) { Dictionary__string__bool__Add(this, key, value); }
    bool Item(::uString* key) { return Dictionary__string__bool__get_Item(this, key); }
    void Rehash() { Dictionary__string__bool__Rehash(this); }
    void Item(::uString* key, bool value) { Dictionary__string__bool__set_Item(this, key, value); }
};

}}}


#endif
