// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_CLOCK_IMPL_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_CLOCK_IMPL_H__

#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

struct ClockImpl__uType : ::uClassType
{
};

ClockImpl__uType* ClockImpl__typeof();

double ClockImpl__GetSeconds(::uStatic* __this);
::uLong ClockImpl__GetTicks(::uStatic* __this);
int ClockImpl__GetTimezoneOffset(::uStatic* __this, int year_, int month_, int day_);

}}}}


#endif
