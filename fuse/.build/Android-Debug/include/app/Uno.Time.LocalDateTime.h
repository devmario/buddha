// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_LOCAL_DATE_TIME_H__
#define __APP_UNO_TIME_LOCAL_DATE_TIME_H__

#include <app/Uno.Object.h>
#include <app/Uno.Time.Instant.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { struct CalendarSystem; } } }

namespace app {
namespace Uno {
namespace Time {

struct LocalDateTime;

struct LocalDateTime__uType : ::uClassType
{
};

LocalDateTime__uType* LocalDateTime__typeof();

void LocalDateTime___ObjInit_8(LocalDateTime* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::CalendarSystem* calendar);
void LocalDateTime___ObjInit_9(LocalDateTime* __this, ::app::Uno::Time::Instant instant);
bool LocalDateTime__Equals(LocalDateTime* __this, ::uObject* obj);
bool LocalDateTime__Equals_2(LocalDateTime* __this, LocalDateTime* other);
::app::Uno::Time::CalendarSystem* LocalDateTime__get_Calendar(LocalDateTime* __this);
int LocalDateTime__get_Day(LocalDateTime* __this);
int LocalDateTime__get_Hour(LocalDateTime* __this);
::app::Uno::Time::Instant LocalDateTime__get_Instant(LocalDateTime* __this);
int LocalDateTime__get_Minute(LocalDateTime* __this);
int LocalDateTime__get_Month(LocalDateTime* __this);
int LocalDateTime__get_Second(LocalDateTime* __this);
int LocalDateTime__get_Year(LocalDateTime* __this);
int LocalDateTime__GetHashCode(LocalDateTime* __this);
LocalDateTime* LocalDateTime__New_10(::uStatic* __this, ::app::Uno::Time::Instant instant);
LocalDateTime* LocalDateTime__New_6(::uStatic* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::CalendarSystem* calendar);
bool LocalDateTime__op_Equality(::uStatic* __this, LocalDateTime* left, LocalDateTime* right);
::uString* LocalDateTime__ToString(LocalDateTime* __this);

struct LocalDateTime : ::uObject
{
    ::uStrong< ::app::Uno::Time::CalendarSystem*> _calendar;
    ::app::Uno::Time::Instant _instant;

    void _ObjInit_8(::app::Uno::Time::Instant instant, ::app::Uno::Time::CalendarSystem* calendar) { LocalDateTime___ObjInit_8(this, instant, calendar); }
    void _ObjInit_9(::app::Uno::Time::Instant instant) { LocalDateTime___ObjInit_9(this, instant); }
    bool Equals_2(LocalDateTime* other) { return LocalDateTime__Equals_2(this, other); }
    ::app::Uno::Time::CalendarSystem* Calendar() { return LocalDateTime__get_Calendar(this); }
    int Day() { return LocalDateTime__get_Day(this); }
    int Hour() { return LocalDateTime__get_Hour(this); }
    ::app::Uno::Time::Instant Instant() { return LocalDateTime__get_Instant(this); }
    int Minute() { return LocalDateTime__get_Minute(this); }
    int Month() { return LocalDateTime__get_Month(this); }
    int Second() { return LocalDateTime__get_Second(this); }
    int Year() { return LocalDateTime__get_Year(this); }
};

}}}


#endif
