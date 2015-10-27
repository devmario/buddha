// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Calendars/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_CALENDARS_YEAR_MONTH_DAY_CALCULATOR_H__
#define __APP_UNO_TIME_CALENDARS_YEAR_MONTH_DAY_CALCULATOR_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Calendars { struct Era; } } } }
namespace app { namespace Uno { namespace Time { struct Instant; } } }

namespace app {
namespace Uno {
namespace Time {
namespace Calendars {

struct YearMonthDayCalculator;

struct YearMonthDayCalculator__uType : ::uClassType
{
    int(*__fp_CalculateStartOfYearDays)(YearMonthDayCalculator*, int);
    int(*__fp_GetDaysInMonth)(YearMonthDayCalculator*, int, int);
    ::app::Uno::Time::Instant(*__fp_GetInstant_1)(YearMonthDayCalculator*, int, int, int);
    int(*__fp_GetMonthOfYear)(YearMonthDayCalculator*, ::app::Uno::Time::Instant, int);
    ::uLong(*__fp_GetStartOfYearInTicks)(YearMonthDayCalculator*, int);
    ::uLong(*__fp_GetTicksFromStartOfYearToStartOfMonth)(YearMonthDayCalculator*, int, int);
    bool(*__fp_IsLeapYear)(YearMonthDayCalculator*, int);
};

YearMonthDayCalculator__uType* YearMonthDayCalculator__typeof();

void YearMonthDayCalculator___ObjInit(YearMonthDayCalculator* __this, int minYear, int maxYear, int monthsInYear, ::uLong averageTicksPerYear, ::uLong ticksAtStartOfYear1, ::uArray* eras);
::uArray* YearMonthDayCalculator__get_Eras(YearMonthDayCalculator* __this);
int YearMonthDayCalculator__get_MaxYear(YearMonthDayCalculator* __this);
int YearMonthDayCalculator__get_MinYear(YearMonthDayCalculator* __this);
int YearMonthDayCalculator__GetDayOfMonth(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant, int year, int month);
int YearMonthDayCalculator__GetDayOfMonth_1(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant);
::app::Uno::Time::Instant YearMonthDayCalculator__GetInstant_1(YearMonthDayCalculator* __this, int year, int monthOfYear, int dayOfMonth);
int YearMonthDayCalculator__GetMaxMonth(YearMonthDayCalculator* __this, int year);
int YearMonthDayCalculator__GetMonthOfYear_1(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant);
::uLong YearMonthDayCalculator__GetStartOfYearInTicks(YearMonthDayCalculator* __this, int year);
::uLong YearMonthDayCalculator__GetTicksInYear(YearMonthDayCalculator* __this, int year);
int YearMonthDayCalculator__GetYear(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant);
::uLong YearMonthDayCalculator__GetYearMonthDayTicks(YearMonthDayCalculator* __this, int year, int month, int dayOfMonth);
::uLong YearMonthDayCalculator__GetYearMonthTicks(YearMonthDayCalculator* __this, int year, int month);

struct YearMonthDayCalculator : ::uObject
{
    int _minYear;
    int _maxYear;
    int _monthsInYear;
    ::uLong _averageTicksPerYear;
    ::uLong _ticksAtStartOfYear1;
    ::uStrong< ::uArray*> _eras;

    void _ObjInit(int minYear, int maxYear, int monthsInYear, ::uLong averageTicksPerYear, ::uLong ticksAtStartOfYear1, ::uArray* eras) { YearMonthDayCalculator___ObjInit(this, minYear, maxYear, monthsInYear, averageTicksPerYear, ticksAtStartOfYear1, eras); }
    int CalculateStartOfYearDays(int year) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_CalculateStartOfYearDays)(this, year); }
    ::uArray* Eras() { return YearMonthDayCalculator__get_Eras(this); }
    int MaxYear() { return YearMonthDayCalculator__get_MaxYear(this); }
    int MinYear() { return YearMonthDayCalculator__get_MinYear(this); }
    int GetDayOfMonth(::app::Uno::Time::Instant instant, int year, int month);
    int GetDayOfMonth_1(::app::Uno::Time::Instant instant);
    int GetDaysInMonth(int year, int month) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_GetDaysInMonth)(this, year, month); }
    ::app::Uno::Time::Instant GetInstant_1(int year, int monthOfYear, int dayOfMonth);
    int GetMaxMonth(int year) { return YearMonthDayCalculator__GetMaxMonth(this, year); }
    int GetMonthOfYear(::app::Uno::Time::Instant instant, int year);
    int GetMonthOfYear_1(::app::Uno::Time::Instant instant);
    ::uLong GetStartOfYearInTicks(int year) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_GetStartOfYearInTicks)(this, year); }
    ::uLong GetTicksFromStartOfYearToStartOfMonth(int year, int month) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_GetTicksFromStartOfYearToStartOfMonth)(this, year, month); }
    ::uLong GetTicksInYear(int year) { return YearMonthDayCalculator__GetTicksInYear(this, year); }
    int GetYear(::app::Uno::Time::Instant instant);
    ::uLong GetYearMonthDayTicks(int year, int month, int dayOfMonth) { return YearMonthDayCalculator__GetYearMonthDayTicks(this, year, month, dayOfMonth); }
    ::uLong GetYearMonthTicks(int year, int month) { return YearMonthDayCalculator__GetYearMonthTicks(this, year, month); }
    bool IsLeapYear(int year) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_IsLeapYear)(this, year); }
};

}}}}

#include <app/Uno.Time.Instant.h>

namespace app {
namespace Uno {
namespace Time {
namespace Calendars {

inline int YearMonthDayCalculator::GetDayOfMonth(::app::Uno::Time::Instant instant, int year, int month) { return YearMonthDayCalculator__GetDayOfMonth(this, instant, year, month); }
inline int YearMonthDayCalculator::GetDayOfMonth_1(::app::Uno::Time::Instant instant) { return YearMonthDayCalculator__GetDayOfMonth_1(this, instant); }
inline ::app::Uno::Time::Instant YearMonthDayCalculator::GetInstant_1(int year, int monthOfYear, int dayOfMonth) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_GetInstant_1)(this, year, monthOfYear, dayOfMonth); }
inline int YearMonthDayCalculator::GetMonthOfYear(::app::Uno::Time::Instant instant, int year) { return (((YearMonthDayCalculator__uType*)this->__obj_type)->__fp_GetMonthOfYear)(this, instant, year); }
inline int YearMonthDayCalculator::GetMonthOfYear_1(::app::Uno::Time::Instant instant) { return YearMonthDayCalculator__GetMonthOfYear_1(this, instant); }
inline int YearMonthDayCalculator::GetYear(::app::Uno::Time::Instant instant) { return YearMonthDayCalculator__GetYear(this, instant); }

}}}}


#endif
