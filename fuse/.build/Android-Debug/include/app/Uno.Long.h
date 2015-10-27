// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_LONG_H__
#define __APP_UNO_LONG_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct Long__uType : ::uStructType
{
};

Long__uType* Long__typeof();

bool Long__Equals(::uLong* __this, ::uObject* o);
int Long__GetHashCode(::uLong* __this);
::uString* Long__ToString(::uLong* __this);

struct Long
{
    static bool Equals(::uLong __this, ::uObject* o) { return Long__Equals(&__this, o); }
    static int GetHashCode(::uLong __this) { return Long__GetHashCode(&__this); }
    static ::uString* ToString(::uLong __this) { return Long__ToString(&__this); }
};

}}


#endif
