// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_INT4_H__
#define __APP_UNO_INT4_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct Int4;

struct Int4__uType : ::uStructType
{
};

Int4__uType* Int4__typeof();

void Int4___ObjInit_3(Int4* __this, int x, int y, int z, int w);
bool Int4__Equals(Int4* __this, ::uObject* o);
int Int4__GetHashCode(Int4* __this);
Int4 Int4__New_3(::uStatic* __this, int x, int y, int z, int w);
::uString* Int4__ToString(Int4* __this);

struct Int4
{
    int X;
    int Y;
    int Z;
    int W;

    void _ObjInit_3(int x, int y, int z, int w) { Int4___ObjInit_3(this, x, y, z, w); }
    bool Equals(::uObject* o) { return Int4__Equals(this, o); }
    int GetHashCode() { return Int4__GetHashCode(this); }
    ::uString* ToString() { return Int4__ToString(this); }
};

}}


#endif
