// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Timezones/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_DEVICE_TIME_ZONE_H__
#define __APP_UNO_TIME_DEVICE_TIME_ZONE_H__

#include <app/Uno.Time.DateTimeZone.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { struct LocalDateTime; } } }
namespace app { namespace Uno { namespace Time { struct Offset; } } }

namespace app {
namespace Uno {
namespace Time {

struct DeviceTimeZone;

struct DeviceTimeZone__uType : ::app::Uno::Time::DateTimeZone__uType
{
};

DeviceTimeZone__uType* DeviceTimeZone__typeof();

void DeviceTimeZone___ObjInit_1(DeviceTimeZone* __this, ::uString* id);
void DeviceTimeZone___ObjInit_2(DeviceTimeZone* __this);
bool DeviceTimeZone__EqualsImpl(DeviceTimeZone* __this, ::app::Uno::Time::DateTimeZone* other);
int DeviceTimeZone__GetHashCode(DeviceTimeZone* __this);
::app::Uno::Time::Offset DeviceTimeZone__GetUtcOffset(DeviceTimeZone* __this, ::app::Uno::Time::LocalDateTime* dateTime);
DeviceTimeZone* DeviceTimeZone__New_1(::uStatic* __this);
::uString* DeviceTimeZone__ToString(DeviceTimeZone* __this);

struct DeviceTimeZone : ::app::Uno::Time::DateTimeZone
{
    void _ObjInit_1(::uString* id) { DeviceTimeZone___ObjInit_1(this, id); }
    void _ObjInit_2() { DeviceTimeZone___ObjInit_2(this); }
};

}}}


#endif
