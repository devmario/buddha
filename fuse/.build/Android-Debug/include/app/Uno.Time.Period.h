// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_PERIOD_H__
#define __APP_UNO_TIME_PERIOD_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Time {

struct Period;

extern ::uStaticStrong< Period*> Period__Zero;

struct Period__uType : ::uClassType
{
};

Period__uType* Period__typeof();

void Period___ObjInit(Period* __this, ::uLong years, ::uLong months, ::uLong weeks, ::uLong days, ::uLong hours, ::uLong minutes, ::uLong seconds, ::uLong milliseconds, ::uLong ticks);
void Period___TypeInit(::uStatic* __this);
bool Period__Equals(Period* __this, ::uObject* other);
bool Period__Equals_2(Period* __this, Period* other);
bool Period__get_HasTimeComponent(Period* __this);
int Period__GetHashCode(Period* __this);
Period* Period__New_1(::uStatic* __this, ::uLong years, ::uLong months, ::uLong weeks, ::uLong days, ::uLong hours, ::uLong minutes, ::uLong seconds, ::uLong milliseconds, ::uLong ticks);
::uString* Period__ToString(Period* __this);

struct Period : ::uObject
{
    ::uLong _ticks;
    ::uLong _milliseconds;
    ::uLong _seconds;
    ::uLong _minutes;
    ::uLong _hours;
    ::uLong _days;
    ::uLong _weeks;
    ::uLong _months;
    ::uLong _years;

    void _ObjInit(::uLong years, ::uLong months, ::uLong weeks, ::uLong days, ::uLong hours, ::uLong minutes, ::uLong seconds, ::uLong milliseconds, ::uLong ticks) { Period___ObjInit(this, years, months, weeks, days, hours, minutes, seconds, milliseconds, ticks); }
    bool Equals_2(Period* other) { return Period__Equals_2(this, other); }
    bool HasTimeComponent() { return Period__get_HasTimeComponent(this); }
};

}}}


#endif
