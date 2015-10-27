// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_BYTE4_H__
#define __APP_UNO_BYTE4_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct Byte4;

struct Byte4__uType : ::uStructType
{
};

Byte4__uType* Byte4__typeof();

void Byte4___ObjInit_1(Byte4* __this, ::uByte x, ::uByte y, ::uByte z, ::uByte w);
bool Byte4__Equals(Byte4* __this, ::uObject* o);
int Byte4__GetHashCode(Byte4* __this);
Byte4 Byte4__New_2(::uStatic* __this, ::uByte x, ::uByte y, ::uByte z, ::uByte w);
::uString* Byte4__ToString(Byte4* __this);

struct Byte4
{
    ::uByte X;
    ::uByte Y;
    ::uByte Z;
    ::uByte W;

    void _ObjInit_1(::uByte x, ::uByte y, ::uByte z, ::uByte w) { Byte4___ObjInit_1(this, x, y, z, w); }
    bool Equals(::uObject* o) { return Byte4__Equals(this, o); }
    int GetHashCode() { return Byte4__GetHashCode(this); }
    ::uString* ToString() { return Byte4__ToString(this); }
};

}}


#endif
