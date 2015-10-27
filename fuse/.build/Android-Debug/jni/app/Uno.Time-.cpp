#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.ArgumentOutOfRangeException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Diagnostics.Clock.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.StringBuilder.h>
#include <app/Uno.Time.Calendars.Era.h>
#include <app/Uno.Time.Calendars.GregorianYearMonthDayCalculator.h>
#include <app/Uno.Time.Calendars.TimeOfDayCalculator.h>
#include <app/Uno.Time.Calendars.WeekYearCalculator.h>
#include <app/Uno.Time.Calendars.YearMonthDayCalculator.h>
#include <app/Uno.Time.CalendarSystem.h>
#include <app/Uno.Time.Constants.h>
#include <app/Uno.Time.Converter.h>
#include <app/Uno.Time.DateTimeZone.h>
#include <app/Uno.Time.DeviceTimeZone.h>
#include <app/Uno.Time.Duration.h>
#include <app/Uno.Time.FixedDateTimeZone.h>
#include <app/Uno.Time.HashCodeHelper.h>
#include <app/Uno.Time.Instant.h>
#include <app/Uno.Time.LocalDateTime.h>
#include <app/Uno.Time.LocalTime.h>
#include <app/Uno.Time.Offset.h>
#include <app/Uno.Time.Period.h>
#include <app/Uno.Time.Preconditions.h>
#include <app/Uno.Time.Text.LocalDateTimePattern.h>
#include <app/Uno.Time.Text.LocalTimePattern.h>
#include <app/Uno.Time.Text.OffsetPattern.h>
#include <app/Uno.Time.ZonedDateTime.h>
#include <app/Uno.Type.h>

namespace app {
namespace Uno {
namespace Time {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< CalendarSystem*> CalendarSystem___gregorianCalendarSystem;

CalendarSystem__uType* CalendarSystem__typeof()
{
    static ::uStaticStrong<CalendarSystem__uType*> type;
    if (type != NULL) return type;

    type = (CalendarSystem__uType*)::uAllocClassType(sizeof(CalendarSystem__uType), "Uno.Time.CalendarSystem", false, 0, 5, 0);

    type->__fp_ToString = (::uString*(*)(::uObject*))CalendarSystem__ToString;

    type->SetStrongRefs(
        "_eras", offsetof(CalendarSystem, _eras),
        "_id", offsetof(CalendarSystem, _id),
        "_name", offsetof(CalendarSystem, _name),
        "_weekYearCalculator", offsetof(CalendarSystem, _weekYearCalculator),
        "_yearMonthDayCalculator", offsetof(CalendarSystem, _yearMonthDayCalculator));

    return type;
}

void CalendarSystem___ObjInit(CalendarSystem* __this, ::uString* id, ::uString* name, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek)
{
    __this->_id = id;
    __this->_name = name;
    __this->_yearMonthDayCalculator = yearMonthDayCalculator;
    __this->_weekYearCalculator = ::app::Uno::Time::Calendars::WeekYearCalculator__New_1(NULL, yearMonthDayCalculator, minDaysInFirstWeek);
    __this->_eras = ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->Eras();
    __this->_minYear = ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(yearMonthDayCalculator)->MinYear();
    __this->_maxYear = yearMonthDayCalculator->MaxYear();
    __this->_minTicks = yearMonthDayCalculator->GetStartOfYearInTicks(__this->_minYear);
    __this->_maxTicks = yearMonthDayCalculator->GetStartOfYearInTicks(__this->_maxYear + 1) - 1ll;
}

CalendarSystem* CalendarSystem__get_Iso(::uStatic* __this)
{
    if (CalendarSystem___gregorianCalendarSystem == NULL)
    {
        CalendarSystem___gregorianCalendarSystem = CalendarSystem__New_2(NULL, ::uGetConstString("ISO"), ::uGetConstString("ISO"), (::app::Uno::Time::Calendars::YearMonthDayCalculator*)::app::Uno::Time::Calendars::GregorianYearMonthDayCalculator__New_1(NULL), 4);
    }

    return CalendarSystem___gregorianCalendarSystem;
}

int CalendarSystem__GetDayOfMonth(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetDayOfMonth_1(instant);
}

int CalendarSystem__GetHourOfDay(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetHourOfDay(NULL, instant);
}

::app::Uno::Time::Instant CalendarSystem__GetInstant_3(CalendarSystem* __this, int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour)
{
    ::app::Uno::Time::Instant date = ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetInstant_1(year, monthOfYear, dayOfMonth);
    ::uLong timeTicks = ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetTicks(NULL, hourOfDay, minuteOfHour);
    return date.PlusTicks(timeTicks);
}

int CalendarSystem__GetMinuteOfHour(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetMinuteOfHour(NULL, instant);
}

int CalendarSystem__GetMonthOfYear(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetMonthOfYear_1(instant);
}

int CalendarSystem__GetSecondOfMinute(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetSecondOfMinute(NULL, instant);
}

int CalendarSystem__GetYear(CalendarSystem* __this, ::app::Uno::Time::Instant instant)
{
    return ::uPtr< ::app::Uno::Time::Calendars::YearMonthDayCalculator*>(__this->_yearMonthDayCalculator)->GetYear(instant);
}

CalendarSystem* CalendarSystem__New_2(::uStatic* __this, ::uString* id, ::uString* name, ::app::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator, int minDaysInFirstWeek)
{
    CalendarSystem* inst = (CalendarSystem*)::uAllocObject(sizeof(CalendarSystem), CalendarSystem__typeof());
    inst->_ObjInit(id, name, yearMonthDayCalculator, minDaysInFirstWeek);
    return inst;
}

::uString* CalendarSystem__ToString(CalendarSystem* __this)
{
    return __this->_id;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Utilities/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::app::Uno::Time::Instant Constants__BclEpoch;
::app::Uno::Time::Instant Constants__UnixEpoch;

Constants__uType* Constants__typeof()
{
    static ::uStaticStrong<Constants__uType*> type;
    if (type != NULL) return type;

    type = (Constants__uType*)::uAllocClassType(sizeof(Constants__uType), "Uno.Time.Constants");

    return type;
}

void Constants___TypeInit(::uStatic* __this)
{
    Constants__UnixEpoch = ::uDefault< ::app::Uno::Time::Instant>();
    Constants__BclEpoch = ::app::Uno::Time::Instant__FromUtc_1(NULL, 1, 1, 1, 0, 0);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Utilities/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Converter__uType* Converter__typeof()
{
    static ::uStaticStrong<Converter__uType*> type;
    if (type != NULL) return type;

    type = (Converter__uType*)::uAllocClassType(sizeof(Converter__uType), "Uno.Time.Converter");

    return type;
}

int Converter__TicksToDays(::uStatic* __this, ::uLong ticks)
{
    if (ticks >= 0ll)
    {
        return (int)((ticks >> 14) / 52734375ll);
    }
    else
    {
        return (int)((ticks - 863999999999ll) / 864000000000ll);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< DateTimeZone*> DateTimeZone__UtcZone;

DateTimeZone__uType* DateTimeZone__typeof()
{
    static ::uStaticStrong<DateTimeZone__uType*> type;
    if (type != NULL) return type;

    type = (DateTimeZone__uType*)::uAllocClassType(sizeof(DateTimeZone__uType), "Uno.Time.DateTimeZone", false, 0, 1, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))DateTimeZone__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))DateTimeZone__GetHashCode;
    type->__fp_ToString = (::uString*(*)(::uObject*))DateTimeZone__ToString;

    type->SetStrongRefs(
        "id", offsetof(DateTimeZone, id));

    return type;
}

void DateTimeZone___ObjInit(DateTimeZone* __this, ::uString* id, bool isFixed, ::app::Uno::Time::Offset minOffset, ::app::Uno::Time::Offset maxOffset)
{
    __this->id = id;
    __this->isFixed = isFixed;
    __this->minOffsetTicks = minOffset.Ticks();
    __this->maxOffsetTicks = maxOffset.Ticks();
}

void DateTimeZone___TypeInit(::uStatic* __this)
{
    DateTimeZone__UtcZone = (DateTimeZone*)::app::Uno::Time::FixedDateTimeZone__New_1(NULL, ::app::Uno::Time::Offset__Zero);
}

bool DateTimeZone__Equals(DateTimeZone* __this, ::uObject* obj)
{
    return __this->Equals_2(::uAs< DateTimeZone*>(obj, DateTimeZone__typeof()));
}

bool DateTimeZone__Equals_2(DateTimeZone* __this, DateTimeZone* obj)
{
    if (::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)__this, (::uObject*)obj))
    {
        return true;
    }

    return (!::app::Uno::Object__ReferenceEquals(NULL, (::uObject*)obj, NULL) && (::app::Uno::Object::GetType(::uPtr< DateTimeZone*>(obj)) == ::app::Uno::Object::GetType(__this))) && __this->EqualsImpl(obj);
}

::uString* DateTimeZone__get_Id(DateTimeZone* __this)
{
    return __this->id;
}

DateTimeZone* DateTimeZone__get_Utc(::uStatic* __this)
{
    return DateTimeZone__UtcZone;
}

int DateTimeZone__GetHashCode(DateTimeZone* __this)
{
    return ::app::Uno::Object__GetHashCode(__this);
}

::uString* DateTimeZone__ToString(DateTimeZone* __this)
{
    return __this->Id();
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Timezones/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DeviceTimeZone__uType* DeviceTimeZone__typeof()
{
    static ::uStaticStrong<DeviceTimeZone__uType*> type;
    if (type != NULL) return type;

    type = (DeviceTimeZone__uType*)::uAllocClassType(sizeof(DeviceTimeZone__uType), "Uno.Time.DeviceTimeZone", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Time::DateTimeZone__typeof());
    type->__fp_EqualsImpl = (bool(*)(::app::Uno::Time::DateTimeZone*, ::app::Uno::Time::DateTimeZone*))DeviceTimeZone__EqualsImpl;
    type->__fp_GetHashCode = (int(*)(::uObject*))DeviceTimeZone__GetHashCode;
    type->__fp_GetUtcOffset = (::app::Uno::Time::Offset(*)(::app::Uno::Time::DateTimeZone*, ::app::Uno::Time::LocalDateTime*))DeviceTimeZone__GetUtcOffset;
    type->__fp_ToString = (::uString*(*)(::uObject*))DeviceTimeZone__ToString;

    return type;
}

void DeviceTimeZone___ObjInit_1(DeviceTimeZone* __this, ::uString* id)
{
    ::app::Uno::Time::DateTimeZone___ObjInit(__this, id, false, ::app::Uno::Time::Offset__FromHours(NULL, -12), ::app::Uno::Time::Offset__FromHours(NULL, 12));
}

void DeviceTimeZone___ObjInit_2(DeviceTimeZone* __this)
{
    __this->_ObjInit_1(::uGetConstString("UTC"));
}

bool DeviceTimeZone__EqualsImpl(DeviceTimeZone* __this, ::app::Uno::Time::DateTimeZone* other)
{
    return ::uIs(other, DeviceTimeZone__typeof());
}

int DeviceTimeZone__GetHashCode(DeviceTimeZone* __this)
{
    int hash = ::app::Uno::Time::HashCodeHelper__Initialize(NULL);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__string(NULL, hash, __this->Id());
    return hash;
}

::app::Uno::Time::Offset DeviceTimeZone__GetUtcOffset(DeviceTimeZone* __this, ::app::Uno::Time::LocalDateTime* dateTime)
{
    int offsetMinutes = ::app::Uno::Diagnostics::Clock__GetTimezoneOffset(NULL, ::uPtr< ::app::Uno::Time::LocalDateTime*>(dateTime)->Year(), ::uPtr< ::app::Uno::Time::LocalDateTime*>(dateTime)->Month(), ::uPtr< ::app::Uno::Time::LocalDateTime*>(dateTime)->Day());
    return ::app::Uno::Time::Offset__FromHoursAndMinutes(NULL, offsetMinutes / 60, offsetMinutes % 60);
}

DeviceTimeZone* DeviceTimeZone__New_1(::uStatic* __this)
{
    DeviceTimeZone* inst = (DeviceTimeZone*)::uAllocObject(sizeof(DeviceTimeZone), DeviceTimeZone__typeof());
    inst->_ObjInit_2();
    return inst;
}

::uString* DeviceTimeZone__ToString(DeviceTimeZone* __this)
{
    return __this->Id();
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Duration Duration__Epsilon;
Duration Duration__OneHour;
Duration Duration__OneMillisecond;
Duration Duration__OneMinute;
Duration Duration__OneSecond;
Duration Duration__OneStandardDay;
Duration Duration__OneStandardWeek;
Duration Duration__Zero;

Duration__uType* Duration__typeof()
{
    static ::uStaticStrong<Duration__uType*> type;
    if (type != NULL) return type;

    type = (Duration__uType*)::uAllocStructType(sizeof(Duration__uType), "Uno.Time.Duration", sizeof(Duration), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Duration__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Duration__GetHashCode;

    return type;
}

void Duration___ObjInit(Duration* __this, ::uLong ticks)
{
    __this->ticks = ticks;
}

void Duration___TypeInit(::uStatic* __this)
{
    Duration__Zero = Duration__New_1(NULL, 0ll);
    Duration__Epsilon = Duration__New_1(NULL, 1ll);
    Duration__OneStandardWeek = Duration__New_1(NULL, 6048000000000ll);
    Duration__OneStandardDay = Duration__New_1(NULL, 864000000000ll);
    Duration__OneHour = Duration__New_1(NULL, 36000000000ll);
    Duration__OneMinute = Duration__New_1(NULL, 600000000ll);
    Duration__OneSecond = Duration__New_1(NULL, 10000000ll);
    Duration__OneMillisecond = Duration__New_1(NULL, 10000ll);
}

bool Duration__Equals(Duration* __this, ::uObject* obj)
{
    if (::uIs(obj, Duration__typeof()))
    {
        return __this->Equals_2(::uUnbox< Duration>(Duration__typeof(), obj));
    }

    return false;
}

bool Duration__Equals_2(Duration* __this, Duration other)
{
    return __this->Ticks() == other.Ticks();
}

::uLong Duration__get_Ticks(Duration* __this)
{
    return __this->ticks;
}

int Duration__GetHashCode(Duration* __this)
{
    return ::app::Uno::Long::GetHashCode(__this->Ticks());
}

Duration Duration__New_1(::uStatic* __this, ::uLong ticks)
{
    Duration inst = ::uDefault< Duration>();
    inst._ObjInit(ticks);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Timezones/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FixedDateTimeZone__uType* FixedDateTimeZone__typeof()
{
    static ::uStaticStrong<FixedDateTimeZone__uType*> type;
    if (type != NULL) return type;

    type = (FixedDateTimeZone__uType*)::uAllocClassType(sizeof(FixedDateTimeZone__uType), "Uno.Time.FixedDateTimeZone", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Time::DateTimeZone__typeof());
    type->__fp_EqualsImpl = (bool(*)(::app::Uno::Time::DateTimeZone*, ::app::Uno::Time::DateTimeZone*))FixedDateTimeZone__EqualsImpl;
    type->__fp_GetHashCode = (int(*)(::uObject*))FixedDateTimeZone__GetHashCode;
    type->__fp_GetUtcOffset = (::app::Uno::Time::Offset(*)(::app::Uno::Time::DateTimeZone*, ::app::Uno::Time::LocalDateTime*))FixedDateTimeZone__GetUtcOffset;
    type->__fp_ToString = (::uString*(*)(::uObject*))FixedDateTimeZone__ToString;

    return type;
}

void FixedDateTimeZone___ObjInit_1(FixedDateTimeZone* __this, ::uString* id, ::app::Uno::Time::Offset offset)
{
    ::app::Uno::Time::DateTimeZone___ObjInit(__this, id, true, offset, offset);
    __this->offset = offset;
}

void FixedDateTimeZone___ObjInit_2(FixedDateTimeZone* __this, ::app::Uno::Time::Offset offset)
{
    __this->_ObjInit_1(::uGetConstString("UTC"), offset);
}

bool FixedDateTimeZone__EqualsImpl(FixedDateTimeZone* __this, ::app::Uno::Time::DateTimeZone* other)
{
    FixedDateTimeZone* otherZone = ::uCast< FixedDateTimeZone*>(other, FixedDateTimeZone__typeof());
    return ::app::Uno::Time::Offset__op_Equality(NULL, __this->offset, ::uPtr< FixedDateTimeZone*>(otherZone)->offset) && ::app::Uno::String__op_Equality(NULL, __this->Id(), ::uPtr< ::app::Uno::Time::DateTimeZone*>(other)->Id());
}

int FixedDateTimeZone__GetHashCode(FixedDateTimeZone* __this)
{
    int hash = ::app::Uno::Time::HashCodeHelper__Initialize(NULL);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__Uno_Time_Offset(NULL, hash, __this->offset);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__string(NULL, hash, __this->Id());
    return hash;
}

::app::Uno::Time::Offset FixedDateTimeZone__GetUtcOffset(FixedDateTimeZone* __this, ::app::Uno::Time::LocalDateTime* dateTime)
{
    return __this->offset;
}

FixedDateTimeZone* FixedDateTimeZone__New_1(::uStatic* __this, ::app::Uno::Time::Offset offset)
{
    FixedDateTimeZone* inst = (FixedDateTimeZone*)::uAllocObject(sizeof(FixedDateTimeZone), FixedDateTimeZone__typeof());
    inst->_ObjInit_2(offset);
    return inst;
}

::uString* FixedDateTimeZone__ToString(FixedDateTimeZone* __this)
{
    return __this->Id();
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Utilities/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HashCodeHelper__uType* HashCodeHelper__typeof()
{
    static ::uStaticStrong<HashCodeHelper__uType*> type;
    if (type != NULL) return type;

    type = (HashCodeHelper__uType*)::uAllocClassType(sizeof(HashCodeHelper__uType), "Uno.Time.HashCodeHelper");

    return type;
}

int HashCodeHelper__Hash__long(::uStatic* __this, int code, ::uLong value)
{
    int hash = 0;

    if (!::app::Uno::Object::Equals(::uBox< ::uLong>(::app::Uno::Long__typeof(), value), NULL))
    {
        hash = ::app::Uno::Object::GetHashCode(::uBox< ::uLong>(::app::Uno::Long__typeof(), value));
    }

    return HashCodeHelper__MakeHash(NULL, code, hash);
}

int HashCodeHelper__Hash__string(::uStatic* __this, int code, ::uString* value)
{
    int hash = 0;

    if (!::app::Uno::Object::Equals(::uPtr< ::uString*>(value), NULL))
    {
        hash = ::app::Uno::Object::GetHashCode(::uPtr< ::uString*>(value));
    }

    return HashCodeHelper__MakeHash(NULL, code, hash);
}

int HashCodeHelper__Hash__Uno_Time_CalendarSystem(::uStatic* __this, int code, ::app::Uno::Time::CalendarSystem* value)
{
    int hash = 0;

    if (!::app::Uno::Object::Equals(::uPtr< ::app::Uno::Time::CalendarSystem*>(value), NULL))
    {
        hash = ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::Time::CalendarSystem*>(value));
    }

    return HashCodeHelper__MakeHash(NULL, code, hash);
}

int HashCodeHelper__Hash__Uno_Time_DateTimeZone(::uStatic* __this, int code, ::app::Uno::Time::DateTimeZone* value)
{
    int hash = 0;

    if (!::app::Uno::Object::Equals(::uPtr< ::app::Uno::Time::DateTimeZone*>(value), NULL))
    {
        hash = ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::Time::DateTimeZone*>(value));
    }

    return HashCodeHelper__MakeHash(NULL, code, hash);
}

int HashCodeHelper__Hash__Uno_Time_Instant(::uStatic* __this, int code, ::app::Uno::Time::Instant value)
{
    int hash = 0;

    if (!::app::Uno::Object::Equals(::uBox(::app::Uno::Time::Instant__typeof(), value), NULL))
    {
        hash = ::app::Uno::Object::GetHashCode(::uBox(::app::Uno::Time::Instant__typeof(), value));
    }

    return HashCodeHelper__MakeHash(NULL, code, hash);
}

int HashCodeHelper__Hash__Uno_Time_LocalDateTime(::uStatic* __this, int code, ::app::Uno::Time::LocalDateTime* value)
{
    int hash = 0;

    if (!::app::Uno::Object::Equals(::uPtr< ::app::Uno::Time::LocalDateTime*>(value), NULL))
    {
        hash = ::app::Uno::Object::GetHashCode(::uPtr< ::app::Uno::Time::LocalDateTime*>(value));
    }

    return HashCodeHelper__MakeHash(NULL, code, hash);
}

int HashCodeHelper__Hash__Uno_Time_Offset(::uStatic* __this, int code, ::app::Uno::Time::Offset value)
{
    int hash = 0;

    if (!::app::Uno::Object::Equals(::uBox(::app::Uno::Time::Offset__typeof(), value), NULL))
    {
        hash = ::app::Uno::Object::GetHashCode(::uBox(::app::Uno::Time::Offset__typeof(), value));
    }

    return HashCodeHelper__MakeHash(NULL, code, hash);
}

int HashCodeHelper__Initialize(::uStatic* __this)
{
    return 17;
}

int HashCodeHelper__MakeHash(::uStatic* __this, int code, int value)
{
    return (code * 37) + value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Instant__uType* Instant__typeof()
{
    static ::uStaticStrong<Instant__uType*> type;
    if (type != NULL) return type;

    type = (Instant__uType*)::uAllocStructType(sizeof(Instant__uType), "Uno.Time.Instant", sizeof(Instant), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Instant__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Instant__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Instant__ToString;

    return type;
}

void Instant___ObjInit(Instant* __this, ::uLong ticks)
{
    __this->_ticks = ticks;
}

bool Instant__Equals(Instant* __this, ::uObject* obj)
{
    if (::uIs(obj, Instant__typeof()))
    {
        return __this->Equals_2(::uUnbox< Instant>(Instant__typeof(), obj));
    }

    return false;
}

bool Instant__Equals_2(Instant* __this, Instant other)
{
    return __this->Ticks() == other.Ticks();
}

Instant Instant__FromUtc_1(::uStatic* __this, int year, int monthOfYear, int dayOfMonth, int hourOfDay, int minuteOfHour)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(::app::Uno::Time::CalendarSystem__get_Iso(NULL))->GetInstant_3(year, monthOfYear, dayOfMonth, hourOfDay, minuteOfHour);
}

::uLong Instant__get_Ticks(Instant* __this)
{
    return __this->_ticks;
}

int Instant__GetHashCode(Instant* __this)
{
    return ::app::Uno::Long::GetHashCode(__this->Ticks());
}

Instant Instant__New_1(::uStatic* __this, ::uLong ticks)
{
    Instant inst = ::uDefault< Instant>();
    inst._ObjInit(ticks);
    return inst;
}

bool Instant__op_Equality(::uStatic* __this, Instant left, Instant right)
{
    return left.Equals_2(right);
}

Instant Instant__Plus(Instant* __this, ::app::Uno::Time::Offset offset)
{
    return Instant__New_1(NULL, __this->Ticks() + offset.Ticks());
}

Instant Instant__PlusTicks(Instant* __this, ::uLong ticksToAdd)
{
    return Instant__New_1(NULL, __this->_ticks + ticksToAdd);
}

::uString* Instant__ToString(Instant* __this)
{
    return ::uPtr< ::app::Uno::Time::Text::LocalDateTimePattern*>(::app::Uno::Time::Text::LocalDateTimePattern__get_GeneralIsoPattern(NULL))->Format(::app::Uno::Time::LocalDateTime__New_10(NULL, *__this));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LocalDateTime__uType* LocalDateTime__typeof()
{
    static ::uStaticStrong<LocalDateTime__uType*> type;
    if (type != NULL) return type;

    type = (LocalDateTime__uType*)::uAllocClassType(sizeof(LocalDateTime__uType), "Uno.Time.LocalDateTime", false, 0, 1, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))LocalDateTime__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))LocalDateTime__GetHashCode;
    type->__fp_ToString = (::uString*(*)(::uObject*))LocalDateTime__ToString;

    type->SetStrongRefs(
        "_calendar", offsetof(LocalDateTime, _calendar));

    return type;
}

void LocalDateTime___ObjInit_8(LocalDateTime* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::CalendarSystem* calendar)
{
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_CalendarSystem(NULL, calendar, ::uGetConstString("calendar"));
    __this->_instant = instant;
    __this->_calendar = calendar;
}

void LocalDateTime___ObjInit_9(LocalDateTime* __this, ::app::Uno::Time::Instant instant)
{
    __this->_ObjInit_8(instant, ::app::Uno::Time::CalendarSystem__get_Iso(NULL));
}

bool LocalDateTime__Equals(LocalDateTime* __this, ::uObject* obj)
{
    if (::uIs(obj, LocalDateTime__typeof()))
    {
        return __this->Equals_2(::uCast< LocalDateTime*>(obj, LocalDateTime__typeof()));
    }

    return false;
}

bool LocalDateTime__Equals_2(LocalDateTime* __this, LocalDateTime* other)
{
    return ::app::Uno::Time::Instant__op_Equality(NULL, __this->_instant, ::uPtr< LocalDateTime*>(other)->_instant) && ::app::Uno::Object::Equals(::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar()), (::uObject*)::uPtr< LocalDateTime*>(other)->Calendar());
}

::app::Uno::Time::CalendarSystem* LocalDateTime__get_Calendar(LocalDateTime* __this)
{
    ::app::Uno::Time::CalendarSystem* ind_132 = __this->_calendar;
    return (ind_132 != NULL) ? ind_132 : ::app::Uno::Time::CalendarSystem__get_Iso(NULL);
}

int LocalDateTime__get_Day(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetDayOfMonth(__this->_instant);
}

int LocalDateTime__get_Hour(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetHourOfDay(__this->_instant);
}

::app::Uno::Time::Instant LocalDateTime__get_Instant(LocalDateTime* __this)
{
    return __this->_instant;
}

int LocalDateTime__get_Minute(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetMinuteOfHour(__this->_instant);
}

int LocalDateTime__get_Month(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetMonthOfYear(__this->_instant);
}

int LocalDateTime__get_Second(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetSecondOfMinute(__this->_instant);
}

int LocalDateTime__get_Year(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::CalendarSystem*>(__this->Calendar())->GetYear(__this->_instant);
}

int LocalDateTime__GetHashCode(LocalDateTime* __this)
{
    int hash = ::app::Uno::Time::HashCodeHelper__Initialize(NULL);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__Uno_Time_Instant(NULL, hash, __this->Instant());
    hash = ::app::Uno::Time::HashCodeHelper__Hash__Uno_Time_CalendarSystem(NULL, hash, __this->Calendar());
    return hash;
}

LocalDateTime* LocalDateTime__New_10(::uStatic* __this, ::app::Uno::Time::Instant instant)
{
    LocalDateTime* inst = (LocalDateTime*)::uAllocObject(sizeof(LocalDateTime), LocalDateTime__typeof());
    inst->_ObjInit_9(instant);
    return inst;
}

LocalDateTime* LocalDateTime__New_6(::uStatic* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::CalendarSystem* calendar)
{
    LocalDateTime* inst = (LocalDateTime*)::uAllocObject(sizeof(LocalDateTime), LocalDateTime__typeof());
    inst->_ObjInit_8(instant, calendar);
    return inst;
}

bool LocalDateTime__op_Equality(::uStatic* __this, LocalDateTime* left, LocalDateTime* right)
{
    return ::uPtr< LocalDateTime*>(left)->Equals_2(right);
}

::uString* LocalDateTime__ToString(LocalDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::Text::LocalDateTimePattern*>(::app::Uno::Time::Text::LocalDateTimePattern__get_GeneralIsoPattern(NULL))->Format(__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LocalTime LocalTime__Midnight;
LocalTime LocalTime__Noon;

LocalTime__uType* LocalTime__typeof()
{
    static ::uStaticStrong<LocalTime__uType*> type;
    if (type != NULL) return type;

    type = (LocalTime__uType*)::uAllocStructType(sizeof(LocalTime__uType), "Uno.Time.LocalTime", sizeof(LocalTime), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))LocalTime__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))LocalTime__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))LocalTime__ToString;

    return type;
}

void LocalTime___ObjInit_2(LocalTime* __this, int hour, int minute, int second)
{
    ::app::Uno::Time::Preconditions__CheckArgumentRange_1(NULL, ::uGetConstString("hour"), hour, 0, 23);
    ::app::Uno::Time::Preconditions__CheckArgumentRange_1(NULL, ::uGetConstString("minute"), minute, 0, 59);
    ::app::Uno::Time::Preconditions__CheckArgumentRange_1(NULL, ::uGetConstString("second"), second, 0, 59);
    __this->_ticks = (((::uLong)hour * 36000000000ll) + ((::uLong)minute * 600000000ll)) + ((::uLong)second * 10000000ll);
}

void LocalTime___TypeInit(::uStatic* __this)
{
    LocalTime__Midnight = LocalTime__New_3(NULL, 0, 0, 0);
    LocalTime__Noon = LocalTime__New_3(NULL, 12, 0, 0);
}

bool LocalTime__Equals(LocalTime* __this, ::uObject* obj)
{
    if (::uIs(obj, LocalTime__typeof()))
    {
        return LocalTime__op_Equality(NULL, *__this, ::uUnbox< LocalTime>(LocalTime__typeof(), obj));
    }

    return false;
}

int LocalTime__get_Hour(LocalTime* __this)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetHourOfDayFromTickOfDay(NULL, __this->_ticks);
}

int LocalTime__get_Millisecond(LocalTime* __this)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetMillisecondOfSecondFromTickOfDay(NULL, __this->_ticks);
}

int LocalTime__get_Minute(LocalTime* __this)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetMinuteOfHourFromTickOfDay(NULL, __this->_ticks);
}

int LocalTime__get_Second(LocalTime* __this)
{
    return ::app::Uno::Time::Calendars::TimeOfDayCalculator__GetSecondOfMinuteFromTickOfDay(NULL, __this->_ticks);
}

int LocalTime__GetHashCode(LocalTime* __this)
{
    ::uLong ticks = __this->_ticks;
    return ::app::Uno::Long::GetHashCode(ticks);
}

LocalTime LocalTime__New_3(::uStatic* __this, int hour, int minute, int second)
{
    LocalTime inst = ::uDefault< LocalTime>();
    inst._ObjInit_2(hour, minute, second);
    return inst;
}

bool LocalTime__op_Equality(::uStatic* __this, LocalTime lhs, LocalTime rhs)
{
    return lhs._ticks == rhs._ticks;
}

::uString* LocalTime__ToString(LocalTime* __this)
{
    return ::uPtr< ::app::Uno::Time::Text::LocalTimePattern*>(::app::Uno::Time::Text::LocalTimePattern__get_GeneralIsoPattern(NULL))->Format(*__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Offset Offset__MaxValue;
Offset Offset__MinValue;
Offset Offset__Zero;

Offset__uType* Offset__typeof()
{
    static ::uStaticStrong<Offset__uType*> type;
    if (type != NULL) return type;

    type = (Offset__uType*)::uAllocStructType(sizeof(Offset__uType), "Uno.Time.Offset", sizeof(Offset), 0, 0, 0);

    type->__fp_Equals_value = (bool(*)(void*, ::uObject*))Offset__Equals;
    type->__fp_GetHashCode_value = (int(*)(void*))Offset__GetHashCode;
    type->__fp_ToString_value = (::uString*(*)(void*))Offset__ToString;

    return type;
}

void Offset___ObjInit(Offset* __this, int milliseconds)
{
    ::app::Uno::Time::Preconditions__CheckArgumentRange_1(NULL, ::uGetConstString("milliseconds"), milliseconds, -86399999, 86399999);
    __this->_milliseconds = milliseconds;
}

void Offset___TypeInit(::uStatic* __this)
{
    Offset__Zero = Offset__FromMilliseconds(NULL, 0);
    Offset__MinValue = Offset__FromMilliseconds(NULL, -86399999);
    Offset__MaxValue = Offset__FromMilliseconds(NULL, 86399999);
}

bool Offset__Equals(Offset* __this, ::uObject* obj)
{
    if (::uIs(obj, Offset__typeof()))
    {
        return __this->Equals_2(::uUnbox< Offset>(Offset__typeof(), obj));
    }

    return false;
}

bool Offset__Equals_2(Offset* __this, Offset other)
{
    return __this->Milliseconds() == other.Milliseconds();
}

Offset Offset__FromHours(::uStatic* __this, int hours)
{
    return Offset__New_1(NULL, hours * 3600000);
}

Offset Offset__FromHoursAndMinutes(::uStatic* __this, int hours, int minutes)
{
    return Offset__New_1(NULL, (hours * 3600000) + (minutes * 60000));
}

Offset Offset__FromMilliseconds(::uStatic* __this, int milliseconds)
{
    return Offset__New_1(NULL, milliseconds);
}

int Offset__get_Milliseconds(Offset* __this)
{
    return __this->_milliseconds;
}

::uLong Offset__get_Ticks(Offset* __this)
{
    return (::uLong)__this->Milliseconds() * 10000ll;
}

int Offset__GetHashCode(Offset* __this)
{
    return ::app::Uno::Int::GetHashCode(__this->Milliseconds());
}

Offset Offset__New_1(::uStatic* __this, int milliseconds)
{
    Offset inst = ::uDefault< Offset>();
    inst._ObjInit(milliseconds);
    return inst;
}

bool Offset__op_Equality(::uStatic* __this, Offset left, Offset right)
{
    return ::app::Uno::Int::Equals(left.Milliseconds(), ::uBox< int>(::app::Uno::Int__typeof(), right.Milliseconds()));
}

::uString* Offset__ToString(Offset* __this)
{
    return ::uPtr< ::app::Uno::Time::Text::OffsetPattern*>(::app::Uno::Time::Text::OffsetPattern__get_GeneralIsoPattern(NULL))->Format(*__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Period*> Period__Zero;

Period__uType* Period__typeof()
{
    static ::uStaticStrong<Period__uType*> type;
    if (type != NULL) return type;

    type = (Period__uType*)::uAllocClassType(sizeof(Period__uType), "Uno.Time.Period", false, 0, 0, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))Period__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))Period__GetHashCode;
    type->__fp_ToString = (::uString*(*)(::uObject*))Period__ToString;

    return type;
}

void Period___ObjInit(Period* __this, ::uLong years, ::uLong months, ::uLong weeks, ::uLong days, ::uLong hours, ::uLong minutes, ::uLong seconds, ::uLong milliseconds, ::uLong ticks)
{
    __this->_years = years;
    __this->_months = months;
    __this->_weeks = weeks;
    __this->_days = days;
    __this->_hours = hours;
    __this->_minutes = minutes;
    __this->_seconds = seconds;
    __this->_milliseconds = milliseconds;
    __this->_ticks = ticks;
}

void Period___TypeInit(::uStatic* __this)
{
    Period__Zero = Period__New_1(NULL, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll, 0ll);
}

bool Period__Equals(Period* __this, ::uObject* other)
{
    return __this->Equals_2(::uAs< Period*>(other, Period__typeof()));
}

bool Period__Equals_2(Period* __this, Period* other)
{
    if (other == NULL)
    {
        return false;
    }

    return ((((((((__this->_years == ::uPtr< Period*>(other)->_years) && (__this->_months == ::uPtr< Period*>(other)->_months)) && (__this->_weeks == ::uPtr< Period*>(other)->_weeks)) && (__this->_days == ::uPtr< Period*>(other)->_days)) && (__this->_hours == ::uPtr< Period*>(other)->_hours)) && (__this->_minutes == ::uPtr< Period*>(other)->_minutes)) && (__this->_seconds == ::uPtr< Period*>(other)->_seconds)) && (__this->_milliseconds == ::uPtr< Period*>(other)->_milliseconds)) && (__this->_ticks == ::uPtr< Period*>(other)->_ticks);
}

bool Period__get_HasTimeComponent(Period* __this)
{
    return ((((__this->_hours != 0ll) || (__this->_minutes != 0ll)) || (__this->_seconds != 0ll)) || (__this->_milliseconds != 0ll)) || (__this->_ticks != 0ll);
}

int Period__GetHashCode(Period* __this)
{
    int hash = ::app::Uno::Time::HashCodeHelper__Initialize(NULL);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__long(NULL, hash, __this->_years);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__long(NULL, hash, __this->_months);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__long(NULL, hash, __this->_weeks);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__long(NULL, hash, __this->_days);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__long(NULL, hash, __this->_hours);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__long(NULL, hash, __this->_minutes);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__long(NULL, hash, __this->_seconds);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__long(NULL, hash, __this->_milliseconds);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__long(NULL, hash, __this->_ticks);
    return hash;
}

Period* Period__New_1(::uStatic* __this, ::uLong years, ::uLong months, ::uLong weeks, ::uLong days, ::uLong hours, ::uLong minutes, ::uLong seconds, ::uLong milliseconds, ::uLong ticks)
{
    Period* inst = (Period*)::uAllocObject(sizeof(Period), Period__typeof());
    inst->_ObjInit(years, months, weeks, days, hours, minutes, seconds, milliseconds, ticks);
    return inst;
}

::uString* Period__ToString(Period* __this)
{
    ::uArray* array_123;
    ::uArray* array_124;
    ::uArray* array_125;
    ::uArray* array_126;
    ::uArray* array_127;
    ::uArray* array_128;
    ::uArray* array_129;
    ::uArray* array_130;
    ::uArray* array_131;
    ::app::Uno::Text::StringBuilder* sb = ::app::Uno::Text::StringBuilder__New_1(NULL);
    ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->Append_1(::uGetConstString("P"));

    if (__this->_years != 0ll)
    {
        sb->Append_1(::app::Uno::String__Format(NULL, ::uGetConstString("{0}Y"), (array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = ::uBox< ::uLong>(::app::Uno::Long__typeof(), __this->_years), array_123)));
    }

    if (__this->_months != 0ll)
    {
        sb->Append_1(::app::Uno::String__Format(NULL, ::uGetConstString("{0}M"), (array_124 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(0) = ::uBox< ::uLong>(::app::Uno::Long__typeof(), __this->_months), array_124)));
    }

    if (__this->_weeks != 0ll)
    {
        sb->Append_1(::app::Uno::String__Format(NULL, ::uGetConstString("{0}W"), (array_125 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_125)->ItemStrong< ::uObject*>(0) = ::uBox< ::uLong>(::app::Uno::Long__typeof(), __this->_weeks), array_125)));
    }

    if (__this->_days != 0ll)
    {
        sb->Append_1(::app::Uno::String__Format(NULL, ::uGetConstString("{0}D"), (array_126 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_126)->ItemStrong< ::uObject*>(0) = ::uBox< ::uLong>(::app::Uno::Long__typeof(), __this->_days), array_126)));
    }

    if (__this->HasTimeComponent())
    {
        sb->Append_1(::uGetConstString("T"));
    }

    if (__this->_hours != 0ll)
    {
        sb->Append_1(::app::Uno::String__Format(NULL, ::uGetConstString("{0}H"), (array_127 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_127)->ItemStrong< ::uObject*>(0) = ::uBox< ::uLong>(::app::Uno::Long__typeof(), __this->_hours), array_127)));
    }

    if (__this->_minutes != 0ll)
    {
        sb->Append_1(::app::Uno::String__Format(NULL, ::uGetConstString("{0}M"), (array_128 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::uObject*>(0) = ::uBox< ::uLong>(::app::Uno::Long__typeof(), __this->_minutes), array_128)));
    }

    if (__this->_seconds != 0ll)
    {
        sb->Append_1(::app::Uno::String__Format(NULL, ::uGetConstString("{0}S"), (array_129 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_129)->ItemStrong< ::uObject*>(0) = ::uBox< ::uLong>(::app::Uno::Long__typeof(), __this->_seconds), array_129)));
    }

    if (__this->_milliseconds != 0ll)
    {
        sb->Append_1(::app::Uno::String__Format(NULL, ::uGetConstString("{0}s"), (array_130 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_130)->ItemStrong< ::uObject*>(0) = ::uBox< ::uLong>(::app::Uno::Long__typeof(), __this->_milliseconds), array_130)));
    }

    if (__this->_ticks != 0ll)
    {
        sb->Append_1(::app::Uno::String__Format(NULL, ::uGetConstString("{0}t"), (array_131 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_131)->ItemStrong< ::uObject*>(0) = ::uBox< ::uLong>(::app::Uno::Long__typeof(), __this->_ticks), array_131)));
    }

    return sb->ToString();
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Utilities/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Preconditions__uType* Preconditions__typeof()
{
    static ::uStaticStrong<Preconditions__uType*> type;
    if (type != NULL) return type;

    type = (Preconditions__uType*)::uAllocClassType(sizeof(Preconditions__uType), "Uno.Time.Preconditions");

    return type;
}

void Preconditions__CheckArgumentRange_1(::uStatic* __this, ::uString* paramName, int value, int minInclusive, int maxInclusive)
{
    if ((value < minInclusive) || (value > maxInclusive))
    {
        U_THROW(::app::Uno::ArgumentOutOfRangeException__New_5(NULL, paramName, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Value should be in range ["), ::uBox< int>(::app::Uno::Int__typeof(), minInclusive)), ::uGetConstString("-")), ::uBox< int>(::app::Uno::Int__typeof(), maxInclusive)), ::uGetConstString("]"))));
    }
}

::uArray* Preconditions__CheckNotNull__Uno_Time_Calendars_Era__(::uStatic* __this, ::uArray* argument, ::uString* paramName)
{
    if (argument == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, paramName));
    }

    return argument;
}

::app::Uno::Time::CalendarSystem* Preconditions__CheckNotNull__Uno_Time_CalendarSystem(::uStatic* __this, ::app::Uno::Time::CalendarSystem* argument, ::uString* paramName)
{
    if (argument == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, paramName));
    }

    return argument;
}

::app::Uno::Time::DateTimeZone* Preconditions__CheckNotNull__Uno_Time_DateTimeZone(::uStatic* __this, ::app::Uno::Time::DateTimeZone* argument, ::uString* paramName)
{
    if (argument == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, paramName));
    }

    return argument;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ZonedDateTime__uType* ZonedDateTime__typeof()
{
    static ::uStaticStrong<ZonedDateTime__uType*> type;
    if (type != NULL) return type;

    type = (ZonedDateTime__uType*)::uAllocClassType(sizeof(ZonedDateTime__uType), "Uno.Time.ZonedDateTime", false, 0, 2, 0);

    type->__fp_Equals = (bool(*)(::uObject*, ::uObject*))ZonedDateTime__Equals;
    type->__fp_GetHashCode = (int(*)(::uObject*))ZonedDateTime__GetHashCode;
    type->__fp_ToString = (::uString*(*)(::uObject*))ZonedDateTime__ToString;

    type->SetStrongRefs(
        "_localDateTime", offsetof(ZonedDateTime, _localDateTime),
        "_zone", offsetof(ZonedDateTime, _zone));

    return type;
}

void ZonedDateTime___ObjInit(ZonedDateTime* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone, ::app::Uno::Time::CalendarSystem* calendar)
{
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_DateTimeZone(NULL, zone, ::uGetConstString("zone"));
    ::app::Uno::Time::Preconditions__CheckNotNull__Uno_Time_CalendarSystem(NULL, calendar, ::uGetConstString("calendar"));
    __this->_offset = ::uPtr< ::app::Uno::Time::DateTimeZone*>(zone)->GetUtcOffset(::app::Uno::Time::LocalDateTime__New_6(NULL, instant, calendar));
    __this->_localDateTime = ::app::Uno::Time::LocalDateTime__New_6(NULL, instant.Plus(__this->_offset), calendar);
    __this->_zone = zone;
}

void ZonedDateTime___ObjInit_2(ZonedDateTime* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone)
{
    __this->_ObjInit(instant, zone, ::app::Uno::Time::CalendarSystem__get_Iso(NULL));
}

bool ZonedDateTime__Equals(ZonedDateTime* __this, ::uObject* obj)
{
    if (::uIs(obj, ZonedDateTime__typeof()))
    {
        return __this->Equals_2(::uCast< ZonedDateTime*>(obj, ZonedDateTime__typeof()));
    }

    return false;
}

bool ZonedDateTime__Equals_2(ZonedDateTime* __this, ZonedDateTime* other)
{
    return (::app::Uno::Time::LocalDateTime__op_Equality(NULL, __this->LocalDateTime(), ::uPtr< ZonedDateTime*>(other)->LocalDateTime()) && ::app::Uno::Time::Offset__op_Equality(NULL, __this->Offset(), ::uPtr< ZonedDateTime*>(other)->Offset())) && ::uPtr< ::app::Uno::Time::DateTimeZone*>(__this->Zone())->Equals_2(::uPtr< ZonedDateTime*>(other)->Zone());
}

int ZonedDateTime__get_Day(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Day();
}

int ZonedDateTime__get_Hour(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Hour();
}

::app::Uno::Time::LocalDateTime* ZonedDateTime__get_LocalDateTime(ZonedDateTime* __this)
{
    return __this->_localDateTime;
}

int ZonedDateTime__get_Minute(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Minute();
}

int ZonedDateTime__get_Month(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Month();
}

ZonedDateTime* ZonedDateTime__get_Now(::uStatic* __this)
{
    ::uLong ticks = ::app::Uno::Diagnostics::Clock__GetTicks(NULL);
    return ZonedDateTime__New_1(NULL, ::app::Uno::Time::Instant__New_1(NULL, ticks), (::app::Uno::Time::DateTimeZone*)::app::Uno::Time::DeviceTimeZone__New_1(NULL));
}

::app::Uno::Time::Offset ZonedDateTime__get_Offset(ZonedDateTime* __this)
{
    return __this->_offset;
}

int ZonedDateTime__get_Second(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Second();
}

int ZonedDateTime__get_Year(ZonedDateTime* __this)
{
    return ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->Year();
}

::app::Uno::Time::DateTimeZone* ZonedDateTime__get_Zone(ZonedDateTime* __this)
{
    ::app::Uno::Time::DateTimeZone* ind_124 = __this->_zone;
    return (ind_124 != NULL) ? ind_124 : ::app::Uno::Time::DateTimeZone__get_Utc(NULL);
}

int ZonedDateTime__GetHashCode(ZonedDateTime* __this)
{
    int hash = ::app::Uno::Time::HashCodeHelper__Initialize(NULL);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__Uno_Time_LocalDateTime(NULL, hash, __this->_localDateTime);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__Uno_Time_Offset(NULL, hash, __this->_offset);
    hash = ::app::Uno::Time::HashCodeHelper__Hash__Uno_Time_DateTimeZone(NULL, hash, __this->_zone);
    return hash;
}

ZonedDateTime* ZonedDateTime__New_1(::uStatic* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone)
{
    ZonedDateTime* inst = (ZonedDateTime*)::uAllocObject(sizeof(ZonedDateTime), ZonedDateTime__typeof());
    inst->_ObjInit_2(instant, zone);
    return inst;
}

::uString* ZonedDateTime__ToString(ZonedDateTime* __this)
{
    ::app::Uno::Time::Offset ind_123 = ::app::Uno::Time::Offset();
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uPtr< ::app::Uno::Time::LocalDateTime*>(__this->_localDateTime)->ToString(), ::uPtr< ::app::Uno::Time::DateTimeZone*>(__this->_zone)->ToString()), (ind_123 = __this->_offset, (&ind_123))->ToString());
}

}}}
