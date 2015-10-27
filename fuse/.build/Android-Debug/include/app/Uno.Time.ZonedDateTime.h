// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_ZONED_DATE_TIME_H__
#define __APP_UNO_TIME_ZONED_DATE_TIME_H__

#include <app/Uno.Object.h>
#include <app/Uno.Time.Offset.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { struct CalendarSystem; } } }
namespace app { namespace Uno { namespace Time { struct DateTimeZone; } } }
namespace app { namespace Uno { namespace Time { struct Instant; } } }
namespace app { namespace Uno { namespace Time { struct LocalDateTime; } } }

namespace app {
namespace Uno {
namespace Time {

struct ZonedDateTime;

struct ZonedDateTime__uType : ::uClassType
{
};

ZonedDateTime__uType* ZonedDateTime__typeof();

void ZonedDateTime___ObjInit(ZonedDateTime* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone, ::app::Uno::Time::CalendarSystem* calendar);
void ZonedDateTime___ObjInit_2(ZonedDateTime* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone);
bool ZonedDateTime__Equals(ZonedDateTime* __this, ::uObject* obj);
bool ZonedDateTime__Equals_2(ZonedDateTime* __this, ZonedDateTime* other);
int ZonedDateTime__get_Day(ZonedDateTime* __this);
int ZonedDateTime__get_Hour(ZonedDateTime* __this);
::app::Uno::Time::LocalDateTime* ZonedDateTime__get_LocalDateTime(ZonedDateTime* __this);
int ZonedDateTime__get_Minute(ZonedDateTime* __this);
int ZonedDateTime__get_Month(ZonedDateTime* __this);
ZonedDateTime* ZonedDateTime__get_Now(::uStatic* __this);
::app::Uno::Time::Offset ZonedDateTime__get_Offset(ZonedDateTime* __this);
int ZonedDateTime__get_Second(ZonedDateTime* __this);
int ZonedDateTime__get_Year(ZonedDateTime* __this);
::app::Uno::Time::DateTimeZone* ZonedDateTime__get_Zone(ZonedDateTime* __this);
int ZonedDateTime__GetHashCode(ZonedDateTime* __this);
ZonedDateTime* ZonedDateTime__New_1(::uStatic* __this, ::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone);
::uString* ZonedDateTime__ToString(ZonedDateTime* __this);

struct ZonedDateTime : ::uObject
{
    ::uStrong< ::app::Uno::Time::LocalDateTime*> _localDateTime;
    ::uStrong< ::app::Uno::Time::DateTimeZone*> _zone;
    ::app::Uno::Time::Offset _offset;

    void _ObjInit(::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone, ::app::Uno::Time::CalendarSystem* calendar);
    void _ObjInit_2(::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone);
    bool Equals_2(ZonedDateTime* other) { return ZonedDateTime__Equals_2(this, other); }
    int Day() { return ZonedDateTime__get_Day(this); }
    int Hour() { return ZonedDateTime__get_Hour(this); }
    ::app::Uno::Time::LocalDateTime* LocalDateTime() { return ZonedDateTime__get_LocalDateTime(this); }
    int Minute() { return ZonedDateTime__get_Minute(this); }
    int Month() { return ZonedDateTime__get_Month(this); }
    ::app::Uno::Time::Offset Offset();
    int Second() { return ZonedDateTime__get_Second(this); }
    int Year() { return ZonedDateTime__get_Year(this); }
    ::app::Uno::Time::DateTimeZone* Zone() { return ZonedDateTime__get_Zone(this); }
};

}}}

#include <app/Uno.Time.Instant.h>

namespace app {
namespace Uno {
namespace Time {

inline void ZonedDateTime::_ObjInit(::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone, ::app::Uno::Time::CalendarSystem* calendar) { ZonedDateTime___ObjInit(this, instant, zone, calendar); }
inline void ZonedDateTime::_ObjInit_2(::app::Uno::Time::Instant instant, ::app::Uno::Time::DateTimeZone* zone) { ZonedDateTime___ObjInit_2(this, instant, zone); }
inline ::app::Uno::Time::Offset ZonedDateTime::Offset() { return ZonedDateTime__get_Offset(this); }

}}}


#endif
