#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.String.h>
#include <app/Uno.Time.Calendars.Era.h>
#include <app/Uno.Time.Calendars.GregorianYearMonthDayCalculator.h>
#include <app/Uno.Time.Calendars.TimeOfDayCalculator.h>
#include <app/Uno.Time.Calendars.WeekYearCalculator.h>
#include <app/Uno.Time.Calendars.YearMonthDayCalculator.h>
#include <app/Uno.Time.Converter.h>
#include <app/Uno.Time.Instant.h>
#include <app/Uno.Time.Preconditions.h>

namespace app {
namespace Uno {
namespace Time {
namespace Calendars {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Calendars/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Era*> Era__AnnoHegirae;
::uStaticStrong< Era*> Era__AnnoMartyrum;
::uStaticStrong< Era*> Era__AnnoMundi;
::uStaticStrong< Era*> Era__AnnoPersico;
::uStaticStrong< Era*> Era__BeforeCommon;
::uStaticStrong< Era*> Era__Common;

Era__uType* Era__typeof()
{
    static ::uStaticStrong<Era__uType*> type;
    if (type != NULL) return type;

    type = (Era__uType*)::uAllocClassType(sizeof(Era__uType), "Uno.Time.Calendars.Era", false, 0, 1, 0);

    type->__fp_ToString = (::uString*(*)(::uObject*))Era__ToString;

    type->SetStrongRefs(
        "_name", offsetof(Era, _name));

    return type;
}

void Era___ObjInit(Era* __this, ::uString* name)
{
    __this->_name = name;
}

void Era___TypeInit(::uStatic* __this)
{
    Era__Common = Era__New_1(NULL, ::uGetConstString("CE"));
    Era__BeforeCommon = Era__New_1(NULL, ::uGetConstString("BCE"));
    Era__AnnoMartyrum = Era__New_1(NULL, ::uGetConstString("AM"));
    Era__AnnoHegirae = Era__New_1(NULL, ::uGetConstString("EH"));
    Era__AnnoMundi = Era__New_1(NULL, ::uGetConstString("AM"));
    Era__AnnoPersico = Era__New_1(NULL, ::uGetConstString("AP"));
}

Era* Era__New_1(::uStatic* __this, ::uString* name)
{
    Era* inst = (Era*)::uAllocObject(sizeof(Era), Era__typeof());
    inst->_ObjInit(name);
    return inst;
}

::uString* Era__ToString(Era* __this)
{
    return __this->_name;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Calendars/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__MaxDaysPerMonth;
::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__MaxTotalTicksByMonth;
::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__MinDaysPerMonth;
::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__MinTotalTicksByMonth;
::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__MonthLengths;
::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__MonthStartTicks;
::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__YearStartDays;
::uStaticStrong< ::uArray*> GregorianYearMonthDayCalculator__YearStartTicks;

GregorianYearMonthDayCalculator__uType* GregorianYearMonthDayCalculator__typeof()
{
    static ::uStaticStrong<GregorianYearMonthDayCalculator__uType*> type;
    if (type != NULL) return type;

    type = (GregorianYearMonthDayCalculator__uType*)::uAllocClassType(sizeof(GregorianYearMonthDayCalculator__uType), "Uno.Time.Calendars.GregorianYearMonthDayCalculator", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Time::Calendars::YearMonthDayCalculator__typeof());
    type->__fp_CalculateStartOfYearDays = (int(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, int))GregorianYearMonthDayCalculator__CalculateStartOfYearDays;
    type->__fp_GetDaysInMonth = (int(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, int, int))GregorianYearMonthDayCalculator__GetDaysInMonth;
    type->__fp_GetInstant_1 = (::app::Uno::Time::Instant(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, int, int, int))GregorianYearMonthDayCalculator__GetInstant_1;
    type->__fp_GetMonthOfYear = (int(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, ::app::Uno::Time::Instant, int))GregorianYearMonthDayCalculator__GetMonthOfYear;
    type->__fp_GetStartOfYearInTicks = (::uLong(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, int))GregorianYearMonthDayCalculator__GetStartOfYearInTicks;
    type->__fp_GetTicksFromStartOfYearToStartOfMonth = (::uLong(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, int, int))GregorianYearMonthDayCalculator__GetTicksFromStartOfYearToStartOfMonth;
    type->__fp_IsLeapYear = (bool(*)(::app::Uno::Time::Calendars::YearMonthDayCalculator*, int))GregorianYearMonthDayCalculator__IsLeapYear;

    return type;
}

void GregorianYearMonthDayCalculator___ObjInit_1(GregorianYearMonthDayCalculator* __this)
{
    ::uArray* array_125;
    ::app::Uno::Time::Calendars::YearMonthDayCalculator___ObjInit(__this, -27255, 31195, 12, 315569520000000ll, -621355968000000000ll, (array_125 = ::uNewArray(::app::Uno::Time::Calendars::Era__typeof(), 2), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::app::Uno::Time::Calendars::Era*>(0) = ::app::Uno::Time::Calendars::Era__BeforeCommon, ::uPtr< ::uArray*>(array_125)->ItemStrong< ::app::Uno::Time::Calendars::Era*>(1) = ::app::Uno::Time::Calendars::Era__Common, array_125));
}

void GregorianYearMonthDayCalculator___TypeInit(::uStatic* __this)
{
    ::uArray* array_123;
    ::uArray* array_124;
    GregorianYearMonthDayCalculator__MonthStartTicks = ::uNewArray(::app::Uno::Long__typeof(), 2413);
    GregorianYearMonthDayCalculator__MonthLengths = ::uNewArray(::app::Uno::Int__typeof(), 2413);
    GregorianYearMonthDayCalculator__YearStartTicks = ::uNewArray(::app::Uno::Long__typeof(), 201);
    GregorianYearMonthDayCalculator__YearStartDays = ::uNewArray(::app::Uno::Int__typeof(), 201);
    GregorianYearMonthDayCalculator__MinDaysPerMonth = (array_123 = ::uNewArray(::app::Uno::Int__typeof(), 12), ::uPtr< ::uArray*>(array_123)->Item< int>(0) = 31, ::uPtr< ::uArray*>(array_123)->Item< int>(1) = 28, ::uPtr< ::uArray*>(array_123)->Item< int>(2) = 31, ::uPtr< ::uArray*>(array_123)->Item< int>(3) = 30, ::uPtr< ::uArray*>(array_123)->Item< int>(4) = 31, ::uPtr< ::uArray*>(array_123)->Item< int>(5) = 30, ::uPtr< ::uArray*>(array_123)->Item< int>(6) = 31, ::uPtr< ::uArray*>(array_123)->Item< int>(7) = 31, ::uPtr< ::uArray*>(array_123)->Item< int>(8) = 30, ::uPtr< ::uArray*>(array_123)->Item< int>(9) = 31, ::uPtr< ::uArray*>(array_123)->Item< int>(10) = 30, ::uPtr< ::uArray*>(array_123)->Item< int>(11) = 31, array_123);
    GregorianYearMonthDayCalculator__MaxDaysPerMonth = (array_124 = ::uNewArray(::app::Uno::Int__typeof(), 12), ::uPtr< ::uArray*>(array_124)->Item< int>(0) = 31, ::uPtr< ::uArray*>(array_124)->Item< int>(1) = 29, ::uPtr< ::uArray*>(array_124)->Item< int>(2) = 31, ::uPtr< ::uArray*>(array_124)->Item< int>(3) = 30, ::uPtr< ::uArray*>(array_124)->Item< int>(4) = 31, ::uPtr< ::uArray*>(array_124)->Item< int>(5) = 30, ::uPtr< ::uArray*>(array_124)->Item< int>(6) = 31, ::uPtr< ::uArray*>(array_124)->Item< int>(7) = 31, ::uPtr< ::uArray*>(array_124)->Item< int>(8) = 30, ::uPtr< ::uArray*>(array_124)->Item< int>(9) = 31, ::uPtr< ::uArray*>(array_124)->Item< int>(10) = 30, ::uPtr< ::uArray*>(array_124)->Item< int>(11) = 31, array_124);
    GregorianYearMonthDayCalculator__MinTotalTicksByMonth = ::uNewArray(::app::Uno::Long__typeof(), 12);
    GregorianYearMonthDayCalculator__MaxTotalTicksByMonth = ::uNewArray(::app::Uno::Long__typeof(), 12);
    ::uLong minSum = 0ll;
    ::uLong maxSum = 0ll;

    for (int i = 0; i < 11; i++)
    {
        minSum = minSum + ((::uLong)::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MinDaysPerMonth)->Item< int>(i) * 864000000000ll);
        maxSum = maxSum + ((::uLong)::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MaxDaysPerMonth)->Item< int>(i) * 864000000000ll);
        ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MinTotalTicksByMonth)->Item< ::uLong>(i + 1) = minSum;
        ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MaxTotalTicksByMonth)->Item< ::uLong>(i + 1) = maxSum;
    }

    GregorianYearMonthDayCalculator* instance = GregorianYearMonthDayCalculator__New_1(NULL);

    for (int year = 1900; year <= 2100; year++)
    {
        ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__YearStartDays)->Item< int>(year - 1900) = ::uPtr< GregorianYearMonthDayCalculator*>(instance)->CalculateStartOfYearDays(year);
        ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__YearStartTicks)->Item< ::uLong>(year - 1900) = (::uLong)::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__YearStartDays)->Item< int>(year - 1900) * 864000000000ll;

        for (int month = 1; month <= 12; month++)
        {
            int yearMonthIndex = ((year - 1900) * 12) + month;
            ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MonthStartTicks)->Item< ::uLong>(yearMonthIndex) = ::uPtr< GregorianYearMonthDayCalculator*>(instance)->GetYearMonthTicks(year, month);
            ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MonthLengths)->Item< int>(yearMonthIndex) = instance->GetDaysInMonth(year, month);
        }
    }
}

int GregorianYearMonthDayCalculator__CalculateStartOfYearDays(GregorianYearMonthDayCalculator* __this, int year)
{
    int leapYears = year / 100;

    if (year < 0)
    {
        leapYears = ((((year + 3) >> 2) - leapYears) + ((leapYears + 3) >> 2)) - 1;
    }
    else
    {
        leapYears = ((year >> 2) - leapYears) + (leapYears >> 2);

        if (__this->IsLeapYear(year))
        {
            leapYears--;
        }
    }

    return (year * 365) + (leapYears - 719527);
}

int GregorianYearMonthDayCalculator__GetDaysInMonth(GregorianYearMonthDayCalculator* __this, int year, int month)
{
    return __this->IsLeapYear(year) ? ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MaxDaysPerMonth)->Item< int>(month - 1) : ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MinDaysPerMonth)->Item< int>(month - 1);
}

::app::Uno::Time::Instant GregorianYearMonthDayCalculator__GetInstant_1(GregorianYearMonthDayCalculator* __this, int year, int monthOfYear, int dayOfMonth)
{
    int yearMonthIndex = ((year - 1900) * 12) + monthOfYear;

    if ((((((year < 1900) || (year > 2099)) || (monthOfYear < 1)) || (monthOfYear > 12)) || (dayOfMonth < 1)) || (dayOfMonth > ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MonthLengths)->Item< int>(yearMonthIndex)))
    {
        return ::app::Uno::Time::Calendars::YearMonthDayCalculator__GetInstant_1(__this, year, monthOfYear, dayOfMonth);
    }

    return ::app::Uno::Time::Instant__New_1(NULL, ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MonthStartTicks)->Item< ::uLong>(yearMonthIndex) + ((::uLong)(dayOfMonth - 1) * 864000000000ll));
}

int GregorianYearMonthDayCalculator__GetMonthOfYear(GregorianYearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant, int year)
{
    int i = (int)(((instant.Ticks() - __this->GetStartOfYearInTicks(year)) >> 10) / 10000ll);
    return __this->IsLeapYear(year) ? ((i < 15356250) ? ((i < 7678125) ? ((i < 2615625) ? 1 : ((i < 5062500) ? 2 : 3)) : ((i < 10209375) ? 4 : ((i < 12825000) ? 5 : 6))) : ((i < 23118750) ? ((i < 17971875) ? 7 : ((i < 20587500) ? 8 : 9)) : ((i < 25734375) ? 10 : ((i < 28265625) ? 11 : 12)))) : ((i < 15271875) ? ((i < 7593750) ? ((i < 2615625) ? 1 : ((i < 4978125) ? 2 : 3)) : ((i < 10125000) ? 4 : ((i < 12740625) ? 5 : 6))) : ((i < 23034375) ? ((i < 17887500) ? 7 : ((i < 20503125) ? 8 : 9)) : ((i < 25650000) ? 10 : ((i < 28181250) ? 11 : 12))));
}

::uLong GregorianYearMonthDayCalculator__GetStartOfYearInTicks(GregorianYearMonthDayCalculator* __this, int year)
{
    if ((year < 1900) || (year > 2100))
    {
        return ::app::Uno::Time::Calendars::YearMonthDayCalculator__GetStartOfYearInTicks(__this, year);
    }

    return ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__YearStartTicks)->Item< ::uLong>(year - 1900);
}

::uLong GregorianYearMonthDayCalculator__GetTicksFromStartOfYearToStartOfMonth(GregorianYearMonthDayCalculator* __this, int year, int month)
{
    return __this->IsLeapYear(year) ? ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MaxTotalTicksByMonth)->Item< ::uLong>(month - 1) : ::uPtr< ::uArray*>(GregorianYearMonthDayCalculator__MinTotalTicksByMonth)->Item< ::uLong>(month - 1);
}

bool GregorianYearMonthDayCalculator__IsLeapYear(GregorianYearMonthDayCalculator* __this, int year)
{
    return ((year & 3) == 0) && (((year % 100) != 0) || ((year % 400) == 0));
}

GregorianYearMonthDayCalculator* GregorianYearMonthDayCalculator__New_1(::uStatic* __this)
{
    GregorianYearMonthDayCalculator* inst = (GregorianYearMonthDayCalculator*)::uAllocObject(sizeof(GregorianYearMonthDayCalculator), GregorianYearMonthDayCalculator__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Calendars/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TimeOfDayCalculator__uType* TimeOfDayCalculator__typeof()
{
    static ::uStaticStrong<TimeOfDayCalculator__uType*> type;
    if (type != NULL) return type;

    type = (TimeOfDayCalculator__uType*)::uAllocClassType(sizeof(TimeOfDayCalculator__uType), "Uno.Time.Calendars.TimeOfDayCalculator");

    return type;
}

int TimeOfDayCalculator__GetHourOfDay(::uStatic* __this, ::app::Uno::Time::Instant instant)
{
    return TimeOfDayCalculator__GetHourOfDayFromTickOfDay(NULL, TimeOfDayCalculator__GetTickOfDay(NULL, instant));
}

int TimeOfDayCalculator__GetHourOfDayFromTickOfDay(::uStatic* __this, ::uLong tickOfDay)
{
    return (int)(tickOfDay >> 11) / 17578125;
}

int TimeOfDayCalculator__GetMillisecondOfSecondFromTickOfDay(::uStatic* __this, ::uLong tickOfDay)
{
    ::uLong milliSecondOfDay = tickOfDay / 10000ll;
    return (int)(milliSecondOfDay % 1000ll);
}

int TimeOfDayCalculator__GetMinuteOfHour(::uStatic* __this, ::app::Uno::Time::Instant instant)
{
    return TimeOfDayCalculator__GetMinuteOfHourFromTickOfDay(NULL, TimeOfDayCalculator__GetTickOfDay(NULL, instant));
}

int TimeOfDayCalculator__GetMinuteOfHourFromTickOfDay(::uStatic* __this, ::uLong tickOfDay)
{
    int minuteOfDay = (int)(tickOfDay / 600000000ll);
    return minuteOfDay % 60;
}

int TimeOfDayCalculator__GetSecondOfMinute(::uStatic* __this, ::app::Uno::Time::Instant instant)
{
    return TimeOfDayCalculator__GetSecondOfMinuteFromTickOfDay(NULL, TimeOfDayCalculator__GetTickOfDay(NULL, instant));
}

int TimeOfDayCalculator__GetSecondOfMinuteFromTickOfDay(::uStatic* __this, ::uLong tickOfDay)
{
    int secondOfDay = (int)(tickOfDay / 10000000ll);
    return secondOfDay % 60;
}

::uLong TimeOfDayCalculator__GetTickOfDay(::uStatic* __this, ::app::Uno::Time::Instant instant)
{
    ::uLong ticks = instant.Ticks();

    if (ticks >= 0ll)
    {
        int days = ::app::Uno::Time::Converter__TicksToDays(NULL, instant.Ticks());
        return ticks - (((::uLong)days * 52734375ll) << 14);
    }
    else
    {
        return 863999999999ll + ((ticks + 1ll) % 864000000000ll);
    }
}

::uLong TimeOfDayCalculator__GetTicks(::uStatic* __this, int hourOfDay, int minuteOfHour)
{
    ::app::Uno::Time::Preconditions__CheckArgumentRange_1(NULL, ::uGetConstString("hourOfDay"), hourOfDay, 0, 23);
    ::app::Uno::Time::Preconditions__CheckArgumentRange_1(NULL, ::uGetConstString("minuteOfHour"), minuteOfHour, 0, 59);
    return ((::uLong)hourOfDay * 36000000000ll) + ((::uLong)minuteOfHour * 600000000ll);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Calendars/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WeekYearCalculator__uType* WeekYearCalculator__typeof()
{
    static ::uStaticStrong<WeekYearCalculator__uType*> type;
    if (type != NULL) return type;

    type = (WeekYearCalculator__uType*)::uAllocClassType(sizeof(WeekYearCalculator__uType), "Uno.Time.Calendars.WeekYearCalculator", false, 0, 1, 0);

    type->SetStrongRefs(
        "yearMonthDayCalculator", offsetof(WeekYearCalculator, yearMonthDayCalculator));

    return type;
}

void WeekYearCalculator___ObjInit(WeekYearCalculator* __this, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek)
{
    __this->yearMonthDayCalculator = yearMonthDayCalculator;
    __this->minDaysInFirstWeek = minDaysInFirstWeek;
}

WeekYearCalculator* WeekYearCalculator__New_1(::uStatic* __this, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek)
{
    WeekYearCalculator* inst = (WeekYearCalculator*)::uAllocObject(sizeof(WeekYearCalculator), WeekYearCalculator__typeof());
    inst->_ObjInit(yearMonthDayCalculator, minDaysInFirstWeek);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Calendars/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

YearMonthDayCalculator__uType* YearMonthDayCalculator__typeof()
{
    static ::uStaticStrong<YearMonthDayCalculator__uType*> type;
    if (type != NULL) return type;

    type = (YearMonthDayCalculator__uType*)::uAllocClassType(sizeof(YearMonthDayCalculator__uType), "Uno.Time.Calendars.YearMonthDayCalculator", false, 0, 1, 0);

    type->__fp_GetInstant_1 = YearMonthDayCalculator__GetInstant_1;
    type->__fp_GetStartOfYearInTicks = YearMonthDayCalculator__GetStartOfYearInTicks;

    type->SetStrongRefs(
        "_eras", offsetof(YearMonthDayCalculator, _eras));

    return type;
}

void YearMonthDayCalculator___ObjInit(YearMonthDayCalculator* __this, int minYear, int maxYear, int monthsInYear, ::uLong averageTicksPerYear, ::uLong ticksAtStartOfYear1, ::uArray* eras)
{
    __this->_minYear = minYear;
    __this->_maxYear = maxYear;
    __this->_monthsInYear = monthsInYear;
    __this->_eras = ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_Calendars_Era__(NULL, eras, ::uGetConstString("eras"));
    __this->_averageTicksPerYear = averageTicksPerYear;
    __this->_ticksAtStartOfYear1 = ticksAtStartOfYear1;
}

::uArray* YearMonthDayCalculator__get_Eras(YearMonthDayCalculator* __this)
{
    return __this->_eras;
}

int YearMonthDayCalculator__get_MaxYear(YearMonthDayCalculator* __this)
{
    return __this->_maxYear;
}

int YearMonthDayCalculator__get_MinYear(YearMonthDayCalculator* __this)
{
    return __this->_minYear;
}

int YearMonthDayCalculator__GetDayOfMonth(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant, int year, int month)
{
    ::uLong dateTicks = __this->GetYearMonthTicks(year, month);
    ::uLong ticksWithinMonth = instant.Ticks() - dateTicks;
    return ::app::Uno::Time::Converter__TicksToDays(NULL, ticksWithinMonth) + 1;
}

int YearMonthDayCalculator__GetDayOfMonth_1(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant)
{
    int year = __this->GetYear(instant);
    int month = __this->GetMonthOfYear(instant, year);
    return __this->GetDayOfMonth(instant, year, month);
}

::app::Uno::Time::Instant YearMonthDayCalculator__GetInstant_1(YearMonthDayCalculator* __this, int year, int monthOfYear, int dayOfMonth)
{
    ::app::Uno::Time::Preconditions__CheckArgumentRange_1(NULL, ::uGetConstString("year"), year, __this->MinYear(), __this->MaxYear());
    ::app::Uno::Time::Preconditions__CheckArgumentRange_1(NULL, ::uGetConstString("monthOfYear"), monthOfYear, 1, __this->GetMaxMonth(year));
    ::app::Uno::Time::Preconditions__CheckArgumentRange_1(NULL, ::uGetConstString("dayOfMonth"), dayOfMonth, 1, __this->GetDaysInMonth(year, monthOfYear));
    return ::app::Uno::Time::Instant__New_1(NULL, __this->GetYearMonthDayTicks(year, monthOfYear, dayOfMonth));
}

int YearMonthDayCalculator__GetMaxMonth(YearMonthDayCalculator* __this, int year)
{
    return __this->_monthsInYear;
}

int YearMonthDayCalculator__GetMonthOfYear_1(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant)
{
    return __this->GetMonthOfYear(instant, __this->GetYear(instant));
}

::uLong YearMonthDayCalculator__GetStartOfYearInTicks(YearMonthDayCalculator* __this, int year)
{
    return (::uLong)__this->CalculateStartOfYearDays(year) * 864000000000ll;
}

::uLong YearMonthDayCalculator__GetTicksInYear(YearMonthDayCalculator* __this, int year)
{
    return __this->IsLeapYear(year) ? 316224000000000ll : 315360000000000ll;
}

int YearMonthDayCalculator__GetYear(YearMonthDayCalculator* __this, ::app::Uno::Time::Instant instant)
{
    ::uLong targetTicks = instant.Ticks();
    ::uLong halfTicksPerYear = __this->_averageTicksPerYear >> 1;
    ::uLong halfTicksSinceStartOfYear1 = (targetTicks >> 1) - (__this->_ticksAtStartOfYear1 >> 1);

    if (halfTicksSinceStartOfYear1 < 0ll)
    {
        halfTicksSinceStartOfYear1 = halfTicksSinceStartOfYear1 + (1ll - halfTicksPerYear);
    }

    int candidate = (int)(halfTicksSinceStartOfYear1 / halfTicksPerYear) + 1;
    ::uLong candidateStart = __this->GetStartOfYearInTicks(candidate);
    ::uLong ticksFromCandidateStartToTarget = targetTicks - candidateStart;

    if (ticksFromCandidateStartToTarget < 0ll)
    {
        do
        {
            candidate--;
            ticksFromCandidateStartToTarget = ticksFromCandidateStartToTarget + __this->GetTicksInYear(candidate);
        }
        while (ticksFromCandidateStartToTarget < 0ll);

        return candidate;
    }

    ::uLong candidateLength = __this->GetTicksInYear(candidate);

    while (ticksFromCandidateStartToTarget >= candidateLength)
    {
        candidate++;
        ticksFromCandidateStartToTarget = ticksFromCandidateStartToTarget - candidateLength;
        candidateLength = __this->GetTicksInYear(candidate);
    }

    return candidate;
}

::uLong YearMonthDayCalculator__GetYearMonthDayTicks(YearMonthDayCalculator* __this, int year, int month, int dayOfMonth)
{
    ::uLong ticks = __this->GetYearMonthTicks(year, month);
    return ticks + ((::uLong)(dayOfMonth - 1) * 864000000000ll);
}

::uLong YearMonthDayCalculator__GetYearMonthTicks(YearMonthDayCalculator* __this, int year, int month)
{
    ::uLong ticks = __this->GetStartOfYearInTicks(year);
    return ticks + __this->GetTicksFromStartOfYearToStartOfMonth(year, month);
}

}}}}
