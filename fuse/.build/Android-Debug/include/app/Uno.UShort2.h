// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_U_SHORT2_H__
#define __APP_UNO_U_SHORT2_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct UShort2;

struct UShort2__uType : ::uStructType
{
};

UShort2__uType* UShort2__typeof();

bool UShort2__Equals(UShort2* __this, ::uObject* o);
int UShort2__GetHashCode(UShort2* __this);
::uString* UShort2__ToString(UShort2* __this);

struct UShort2
{
    ::uUShort X;
    ::uUShort Y;

    bool Equals(::uObject* o) { return UShort2__Equals(this, o); }
    int GetHashCode() { return UShort2__GetHashCode(this); }
    ::uString* ToString() { return UShort2__ToString(this); }
};

}}


#endif
