// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Diagnostics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DIAGNOSTICS_CLOCK_H__
#define __APP_UNO_DIAGNOSTICS_CLOCK_H__

#include <Uno.h>

namespace app {
namespace Uno {
namespace Diagnostics {

struct Clock__uType : ::uClassType
{
};

Clock__uType* Clock__typeof();

double Clock__GetSeconds(::uStatic* __this);
::uLong Clock__GetTicks(::uStatic* __this);
int Clock__GetTimezoneOffset(::uStatic* __this, int year, int month, int day);

}}}


#endif
