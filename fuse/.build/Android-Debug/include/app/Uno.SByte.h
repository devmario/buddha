// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_S_BYTE_H__
#define __APP_UNO_S_BYTE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct SByte__uType : ::uStructType
{
};

SByte__uType* SByte__typeof();

bool SByte__Equals(::uSByte* __this, ::uObject* o);
int SByte__GetHashCode(::uSByte* __this);
::uString* SByte__ToString(::uSByte* __this);

struct SByte
{
    static bool Equals(::uSByte __this, ::uObject* o) { return SByte__Equals(&__this, o); }
    static int GetHashCode(::uSByte __this) { return SByte__GetHashCode(&__this); }
    static ::uString* ToString(::uSByte __this) { return SByte__ToString(&__this); }
};

}}


#endif
