// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_NUMBER_PART__UNO_TIME_TEXT_LOCAL_TIME_PATTERN_LOCAL_TIME_BUCKET_H__
#define __APP_UNO_TIME_TEXT_NUMBER_PART__UNO_TIME_TEXT_LOCAL_TIME_PATTERN_LOCAL_TIME_BUCKET_H__

#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_LocalTimePattern_Loca-2b28bbf6.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_LocalTimePattern_Local-64ff6740.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct LocalTimePattern_LocalTimeBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket;

struct NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__uType
{
};

NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType* NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof();

void NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket___ObjInit_1(NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter);
NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_1(::uStatic* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter);
::uString* NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Write(NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value);

struct NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket : ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int
{
    void _ObjInit_1(int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter) { NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket___ObjInit_1(this, size, obligatory, setter, getter); }
};

}}}}


#endif
