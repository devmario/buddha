// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Calendars/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_CALENDARS_WEEK_YEAR_CALCULATOR_H__
#define __APP_UNO_TIME_CALENDARS_WEEK_YEAR_CALCULATOR_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Calendars { struct YearMonthDayCalculator; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Calendars {

struct WeekYearCalculator;

struct WeekYearCalculator__uType : ::uClassType
{
};

WeekYearCalculator__uType* WeekYearCalculator__typeof();

void WeekYearCalculator___ObjInit(WeekYearCalculator* __this, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek);
WeekYearCalculator* WeekYearCalculator__New_1(::uStatic* __this, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek);

struct WeekYearCalculator : ::uObject
{
    ::uStrong< ::app::Uno::Time::Calendars::YearMonthDayCalculator*> yearMonthDayCalculator;
    int minDaysInFirstWeek;

    void _ObjInit(::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek) { WeekYearCalculator___ObjInit(this, yearMonthDayCalculator, minDaysInFirstWeek); }
};

}}}}


#endif
