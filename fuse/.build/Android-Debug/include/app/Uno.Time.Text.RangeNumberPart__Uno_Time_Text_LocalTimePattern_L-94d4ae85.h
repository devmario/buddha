// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_RANGE_NUMBER_PART__UNO_TIME_TEXT_LOCAL_TIME_PATTERN_L_94D4AE85_H__
#define __APP_UNO_TIME_TEXT_RANGE_NUMBER_PART__UNO_TIME_TEXT_LOCAL_TIME_PATTERN_L_94D4AE85_H__

#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_LocalTimePattern_Loca-2b28bbf6.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_LocalTimePattern_Local-64ff6740.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct LocalTimePattern_LocalTimeBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket;

struct RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__uType
{
};

RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType* RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof();

void RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket___ObjInit_2(RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, int size, int maxSize, ::uDelegate* setter, ::uDelegate* getter);
RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_2(::uStatic* __this, int size, int maxSize, ::uDelegate* setter, ::uDelegate* getter);
::uString* RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Write(RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value);

struct RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int
{
    int _maxSize;

    void _ObjInit_2(int size, int maxSize, ::uDelegate* setter, ::uDelegate* getter) { RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket___ObjInit_2(this, size, maxSize, setter, getter); }
};

}}}}


#endif
