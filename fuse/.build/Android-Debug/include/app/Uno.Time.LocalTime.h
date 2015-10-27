// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_LOCAL_TIME_H__
#define __APP_UNO_TIME_LOCAL_TIME_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Time {

struct LocalTime;

extern LocalTime LocalTime__Midnight;
extern LocalTime LocalTime__Noon;

struct LocalTime__uType : ::uStructType
{
};

LocalTime__uType* LocalTime__typeof();

void LocalTime___ObjInit_2(LocalTime* __this, int hour, int minute, int second);
void LocalTime___TypeInit(::uStatic* __this);
bool LocalTime__Equals(LocalTime* __this, ::uObject* obj);
int LocalTime__get_Hour(LocalTime* __this);
int LocalTime__get_Millisecond(LocalTime* __this);
int LocalTime__get_Minute(LocalTime* __this);
int LocalTime__get_Second(LocalTime* __this);
int LocalTime__GetHashCode(LocalTime* __this);
LocalTime LocalTime__New_3(::uStatic* __this, int hour, int minute, int second);
bool LocalTime__op_Equality(::uStatic* __this, LocalTime lhs, LocalTime rhs);
::uString* LocalTime__ToString(LocalTime* __this);

struct LocalTime
{
    ::uLong _ticks;

    void _ObjInit_2(int hour, int minute, int second) { LocalTime___ObjInit_2(this, hour, minute, second); }
    bool Equals(::uObject* obj) { return LocalTime__Equals(this, obj); }
    int Hour() { return LocalTime__get_Hour(this); }
    int Millisecond() { return LocalTime__get_Millisecond(this); }
    int Minute() { return LocalTime__get_Minute(this); }
    int Second() { return LocalTime__get_Second(this); }
    int GetHashCode() { return LocalTime__GetHashCode(this); }
    ::uString* ToString() { return LocalTime__ToString(this); }
};

}}}


#endif
