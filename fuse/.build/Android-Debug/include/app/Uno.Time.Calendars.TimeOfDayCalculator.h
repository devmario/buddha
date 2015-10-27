// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Calendars/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_CALENDARS_TIME_OF_DAY_CALCULATOR_H__
#define __APP_UNO_TIME_CALENDARS_TIME_OF_DAY_CALCULATOR_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Time { struct Instant; } } }

namespace app {
namespace Uno {
namespace Time {
namespace Calendars {

struct TimeOfDayCalculator__uType : ::uClassType
{
};

TimeOfDayCalculator__uType* TimeOfDayCalculator__typeof();

int TimeOfDayCalculator__GetHourOfDay(::uStatic* __this, ::app::Uno::Time::Instant instant);
int TimeOfDayCalculator__GetHourOfDayFromTickOfDay(::uStatic* __this, ::uLong tickOfDay);
int TimeOfDayCalculator__GetMillisecondOfSecondFromTickOfDay(::uStatic* __this, ::uLong tickOfDay);
int TimeOfDayCalculator__GetMinuteOfHour(::uStatic* __this, ::app::Uno::Time::Instant instant);
int TimeOfDayCalculator__GetMinuteOfHourFromTickOfDay(::uStatic* __this, ::uLong tickOfDay);
int TimeOfDayCalculator__GetSecondOfMinute(::uStatic* __this, ::app::Uno::Time::Instant instant);
int TimeOfDayCalculator__GetSecondOfMinuteFromTickOfDay(::uStatic* __this, ::uLong tickOfDay);
::uLong TimeOfDayCalculator__GetTickOfDay(::uStatic* __this, ::app::Uno::Time::Instant instant);
::uLong TimeOfDayCalculator__GetTicks(::uStatic* __this, int hourOfDay, int minuteOfHour);

}}}}


#endif
