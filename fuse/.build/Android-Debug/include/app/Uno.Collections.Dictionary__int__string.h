// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__INT__STRING_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__INT__STRING_H__

#include <app/Uno.Collections.Dictionary2_Bucket__int__string.h>
#include <app/Uno.Collections.IDictionary__int__string.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__int__string;

struct Dictionary__int__string__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__int__string __interface_0;
};

Dictionary__int__string__uType* Dictionary__int__string__typeof();

void Dictionary__int__string___ObjInit_1(Dictionary__int__string* __this);
void Dictionary__int__string__Add(Dictionary__int__string* __this, int key, ::uString* value);
Dictionary__int__string* Dictionary__int__string__New_1(::uStatic* __this);
void Dictionary__int__string__Rehash(Dictionary__int__string* __this);

struct Dictionary__int__string : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__int__string___ObjInit_1(this); }
    void Add(int key, ::uString* value) { Dictionary__int__string__Add(this, key, value); }
    void Rehash() { Dictionary__int__string__Rehash(this); }
};

}}}


#endif
