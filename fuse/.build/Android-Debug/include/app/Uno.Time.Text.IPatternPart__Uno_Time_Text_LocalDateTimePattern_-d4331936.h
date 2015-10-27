// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_I_PATTERN_PART__UNO_TIME_TEXT_LOCAL_DATE_TIME_PATTERN__D4331936_H__
#define __APP_UNO_TIME_TEXT_I_PATTERN_PART__UNO_TIME_TEXT_LOCAL_DATE_TIME_PATTERN__D4331936_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct LocalDateTimePattern_LocalDateTimeBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

::uInterfaceType* IPatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof();

struct IPatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket
{
    ::uString*(*__fp_Write)(void*, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*);

    static ::uString* Write(::uObject* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value) { return ((IPatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket*)uGetInterfacePtr(__this, IPatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof()))->__fp_Write((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
};

}}}}


#endif
