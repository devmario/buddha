// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_INT_H__
#define __APP_UNO_U_INT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct UInt__uType : ::uStructType
{
};

UInt__uType* UInt__typeof();

bool UInt__Equals(::uUInt* __this, ::uObject* o);
int UInt__GetHashCode(::uUInt* __this);
::uString* UInt__ToString(::uUInt* __this);

struct UInt
{
    static bool Equals(::uUInt __this, ::uObject* o) { return UInt__Equals(&__this, o); }
    static int GetHashCode(::uUInt __this) { return UInt__GetHashCode(&__this); }
    static ::uString* ToString(::uUInt __this) { return UInt__ToString(&__this); }
};

}}


#endif
