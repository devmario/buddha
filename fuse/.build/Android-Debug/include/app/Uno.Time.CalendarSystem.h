// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_CALENDAR_SYSTEM_H__
#define __APP_UNO_TIME_CALENDAR_SYSTEM_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Calendars { struct Era; } } } }
namespace app { namespace Uno { namespace Time { namespace Calendars { struct WeekYearCalculator; } } } }
namespace app { namespace Uno { namespace Time { namespace Calendars { struct YearMonthDayCalculator; } } } }
namespace app { namespace Uno { namespace Time { struct Instant; } } }

namespace app {
namespace Uno {
namespace Time {

struct CalendarSystem;

extern ::uStaticStrong< CalendarSystem*> CalendarSystem___gregorianCalendarSystem;

struct CalendarSystem__uType : ::uClassType
{
};

CalendarSystem__uType* CalendarSystem__typeof();

void CalendarSystem___ObjInit(CalendarSystem* __this, ::uString* id, ::uString* name, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek);
CalendarSystem* CalendarSystem__get_Iso(::uStatic* __this);
int CalendarSystem__GetDayOfMonth(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetHourOfDay(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
::app::Uno::Time::Instant CalendarSystem__GetInstant_3(CalendarSystem* __this, int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour);
int CalendarSystem__GetMinuteOfHour(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetMonthOfYear(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetSecondOfMinute(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
int CalendarSystem__GetYear(CalendarSystem* __this, ::app::Uno::Time::Instant instant);
CalendarSystem* CalendarSystem__New_2(::uStatic* __this, ::uString* id, ::uString* name, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek);
::uString* CalendarSystem__ToString(CalendarSystem* __this);

struct CalendarSystem : ::uObject
{
    ::uStrong< ::app::Uno::Time::Calendars::YearMonthDayCalculator*> _yearMonthDayCalculator;
    ::uStrong< ::app::Uno::Time::Calendars::WeekYearCalculator*> _weekYearCalculator;
    ::uStrong< ::uString*> _id;
    ::uStrong< ::uString*> _name;
    ::uStrong< ::uArray*> _eras;
    int _minYear;
    int _maxYear;
    ::uLong _minTicks;
    ::uLong _maxTicks;

    void _ObjInit(::uString* id, ::uString* name, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek) { CalendarSystem___ObjInit(this, id, name, yearMonthDayCalculator, minDaysInFirstWeek); }
    int GetDayOfMonth(::app::Uno::Time::Instant instant);
    int GetHourOfDay(::app::Uno::Time::Instant instant);
    ::app::Uno::Time::Instant GetInstant_3(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour);
    int GetMinuteOfHour(::app::Uno::Time::Instant instant);
    int GetMonthOfYear(::app::Uno::Time::Instant instant);
    int GetSecondOfMinute(::app::Uno::Time::Instant instant);
    int GetYear(::app::Uno::Time::Instant instant);
};

}}}

#include <app/Uno.Time.Instant.h>

namespace app {
namespace Uno {
namespace Time {

inline int CalendarSystem::GetDayOfMonth(::app::Uno::Time::Instant instant) { return CalendarSystem__GetDayOfMonth(this, instant); }
inline int CalendarSystem::GetHourOfDay(::app::Uno::Time::Instant instant) { return CalendarSystem__GetHourOfDay(this, instant); }
inline ::app::Uno::Time::Instant CalendarSystem::GetInstant_3(int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour) { return CalendarSystem__GetInstant_3(this, year, monthOfYear, dayOfMonth, hourOfDay, minuteOfHour); }
inline int CalendarSystem::GetMinuteOfHour(::app::Uno::Time::Instant instant) { return CalendarSystem__GetMinuteOfHour(this, instant); }
inline int CalendarSystem::GetMonthOfYear(::app::Uno::Time::Instant instant) { return CalendarSystem__GetMonthOfYear(this, instant); }
inline int CalendarSystem::GetSecondOfMinute(::app::Uno::Time::Instant instant) { return CalendarSystem__GetSecondOfMinute(this, instant); }
inline int CalendarSystem::GetYear(::app::Uno::Time::Instant instant) { return CalendarSystem__GetYear(this, instant); }

}}}


#endif
