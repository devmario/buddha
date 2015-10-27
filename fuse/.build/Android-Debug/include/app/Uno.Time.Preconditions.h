// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Utilities/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_PRECONDITIONS_H__
#define __APP_UNO_TIME_PRECONDITIONS_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Calendars { struct Era; } } } }
namespace app { namespace Uno { namespace Time { struct CalendarSystem; } } }
namespace app { namespace Uno { namespace Time { struct DateTimeZone; } } }

namespace app {
namespace Uno {
namespace Time {

struct Preconditions__uType : ::uClassType
{
};

Preconditions__uType* Preconditions__typeof();

void Preconditions__CheckArgumentRange_1(::uStatic* __this, ::uString* paramName, int value, int minInclusive, int maxInclusive);
::uArray* Preconditions__CheckNotNull__Uno_Time_Calendars_Era__(::uStatic* __this, ::uArray* argument, ::uString* paramName);
::app::Uno::Time::CalendarSystem* Preconditions__CheckNotNull__Uno_Time_CalendarSystem(::uStatic* __this, ::app::Uno::Time::CalendarSystem* argument, ::uString* paramName);
::app::Uno::Time::DateTimeZone* Preconditions__CheckNotNull__Uno_Time_DateTimeZone(::uStatic* __this, ::app::Uno::Time::DateTimeZone* argument, ::uString* paramName);

}}}


#endif
