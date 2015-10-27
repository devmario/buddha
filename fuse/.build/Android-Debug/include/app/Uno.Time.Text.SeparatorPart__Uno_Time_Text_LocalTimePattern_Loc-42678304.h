// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_SEPARATOR_PART__UNO_TIME_TEXT_LOCAL_TIME_PATTERN_LOC_42678304_H__
#define __APP_UNO_TIME_TEXT_SEPARATOR_PART__UNO_TIME_TEXT_LOCAL_TIME_PATTERN_LOC_42678304_H__

#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_LocalTimePattern_Loca-2b28bbf6.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_LocalTimePattern_Local-3aeaae25.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct LocalTimePattern_LocalTimeBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket;

struct SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__uType
{
};

SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType* SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof();

void SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket___ObjInit_1(SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified);
SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_1(::uStatic* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified);
::uString* SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Write(SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value);

struct SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char
{
    ::uChar _separator;
    bool _show;

    void _ObjInit_1(bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified) { SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket___ObjInit_1(this, obligatory, separator, skipNextPartsCountIfThisNotSpecified); }
};

}}}}


#endif
