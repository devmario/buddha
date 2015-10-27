// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_I_PATTERN_PART__UNO_TIME_TEXT_LOCAL_TIME_PATTERN_LOCA_2B28BBF6_H__
#define __APP_UNO_TIME_TEXT_I_PATTERN_PART__UNO_TIME_TEXT_LOCAL_TIME_PATTERN_LOCA_2B28BBF6_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct LocalTimePattern_LocalTimeBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

::uInterfaceType* IPatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof();

struct IPatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket
{
    ::uString*(*__fp_Write)(void*, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*);

    static ::uString* Write(::uObject* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value) { return ((IPatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket*)uGetInterfacePtr(__this, IPatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof()))->__fp_Write((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), value); }
};

}}}}


#endif
