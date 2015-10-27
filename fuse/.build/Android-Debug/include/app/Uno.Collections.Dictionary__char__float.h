// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__CHAR__FLOAT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__CHAR__FLOAT_H__

#include <app/Uno.Collections.Dictionary2_Bucket__char__float.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__char__float;

struct Dictionary__char__float__uType : ::uClassType
{
};

Dictionary__char__float__uType* Dictionary__char__float__typeof();

void Dictionary__char__float___ObjInit_1(Dictionary__char__float* __this);
void Dictionary__char__float__Add(Dictionary__char__float* __this, ::uChar key, float value);
Dictionary__char__float* Dictionary__char__float__New_1(::uStatic* __this);
void Dictionary__char__float__Rehash(Dictionary__char__float* __this);

struct Dictionary__char__float : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__char__float___ObjInit_1(this); }
    void Add(::uChar key, float value) { Dictionary__char__float__Add(this, key, value); }
    void Rehash() { Dictionary__char__float__Rehash(this); }
};

}}}


#endif
