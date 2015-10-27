// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_SEPARATOR_PART__UNO_TIME_TEXT_LOCAL_DATE_TIME_PATTERN_1B78F244_H__
#define __APP_UNO_TIME_TEXT_SEPARATOR_PART__UNO_TIME_TEXT_LOCAL_DATE_TIME_PATTERN_1B78F244_H__

#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_LocalDateTimePattern_-d4331936.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_LocalDateTimePattern_L-a9f9265.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct LocalDateTimePattern_LocalDateTimeBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket;

struct SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__uType
{
};

SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType* SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof();

void SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket___ObjInit_1(SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified);
SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(::uStatic* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified);
::uString* SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Write(SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value);

struct SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char
{
    ::uChar _separator;
    bool _show;

    void _ObjInit_1(bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified) { SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket___ObjInit_1(this, obligatory, separator, skipNextPartsCountIfThisNotSpecified); }
};

}}}}


#endif
