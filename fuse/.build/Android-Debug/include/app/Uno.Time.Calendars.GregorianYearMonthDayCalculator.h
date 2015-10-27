// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Calendars/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_CALENDARS_GREGORIAN_YEAR_MONTH_DAY_CALCULATOR_H__
#define __APP_UNO_TIME_CALENDARS_GREGORIAN_YEAR_MONTH_DAY_CALCULATOR_H__

#include <app/Uno.Time.Calendars.YearMonthDayCalculator.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { struct Instant; } } }

namespace app {
namespace Uno {
namespace Time {
namespace Calendars {

struct GregorianYearMonthDayCalculator;

extern ::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__MaxDaysPerMonth;
extern ::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__MaxTotalTicksByMonth;
extern ::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__MinDaysPerMonth;
extern ::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__MinTotalTicksByMonth;
extern ::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__MonthLengths;
extern ::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__MonthStartTicks;
extern ::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__YearStartDays;
extern ::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__YearStartTicks;

struct GregorianYearMonthDayCalculator__uType : ::app::Uno::Time::Calendars::YearMonthDayCalculator__uType
{
};

GregorianYearMonthDayCalculator__uType* GregorianYearMonthDayCalculator__typeof();

void GregorianYearMonthDayCalculator___ObjInit_1(GregorianYearMonthDayCalculator* __this);
void GregorianYearMonthDayCalculator___TypeInit(::uStatic* __this);
int GregorianYearMonthDayCalculator__CalculateStartOfYearDays(GregorianYearMonthDayCalculator* __this, int year);
int GregorianYearMonthDayCalculator__GetDaysInMonth(GregorianYearMonthDayCalculator* __this, int year, int month);
::app::Uno::Time::Instant GregorianYearMonthDayCalculator__GetInstant_1(GregorianYearMonthDayCalculator* __this, int year, int monthOfYear, int dayOfMonth);
int GregorianYearMonthDayCalculator__GetMonthOfYear(GregorianYearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant, int year);
::uLong GregorianYearMonthDayCalculator__GetStartOfYearInTicks(GregorianYearMonthDayCalculator* __this, int year);
::uLong GregorianYearMonthDayCalculator__GetTicksFromStartOfYearToStartOfMonth(GregorianYearMonthDayCalculator* __this, int year, int month);
bool GregorianYearMonthDayCalculator__IsLeapYear(GregorianYearMonthDayCalculator* __this, int year);
GregorianYearMonthDayCalculator* GregorianYearMonthDayCalculator__New_1(::uStatic* __this);

struct GregorianYearMonthDayCalculator : ::app::Uno::Time::Calendars::YearMonthDayCalculator
{
    void _ObjInit_1() { GregorianYearMonthDayCalculator___ObjInit_1(this); }
};

}}}}


#endif
