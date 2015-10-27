// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_FIXED_FORMAT_PATTERN__UNO_TIME_TEXT_LOCAL_TIME_PATTER_63C7A501_H__
#define __APP_UNO_TIME_TEXT_FIXED_FORMAT_PATTERN__UNO_TIME_TEXT_LOCAL_TIME_PATTER_63C7A501_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct LocalTimePattern_LocalTimeBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket;

struct FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType : ::uClassType
{
};

FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType* FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof();

void FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket___ObjInit(FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, ::uArray* parts);
::uString* FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Format(FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* bucket);
FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_1(::uStatic* __this, ::uArray* parts);

struct FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket : ::uObject
{
    ::uStrong< ::uArray*> _parts;

    void _ObjInit(::uArray* parts) { FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket___ObjInit(this, parts); }
    ::uString* Format(::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* bucket) { return FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Format(this, bucket); }
};

}}}}


#endif
