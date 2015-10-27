// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATE_TIME_H__
#define __APP_UNO_DATE_TIME_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { struct ZonedDateTime; } } }

namespace app {
namespace Uno {

struct DateTime;

struct DateTime__uType : ::uClassType
{
};

DateTime__uType* DateTime__typeof();

::app::Uno::Time::ZonedDateTime* DateTime__get_Now(::uStatic* __this);

struct DateTime : ::uObject
{
};

}}


#endif
