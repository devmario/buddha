// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_TIME_TEXT_FIXED_FORMAT_PATTERN__UNO_TIME_TEXT_OFFSET_PATTERN_O_A6482565_H__
#define __APP_UNO_TIME_TEXT_FIXED_FORMAT_PATTERN__UNO_TIME_TEXT_OFFSET_PATTERN_O_A6482565_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Time { namespace Text { struct OffsetPattern_OffsetBucket; } } } }

namespace app {
namespace Uno {
namespace Time {
namespace Text {

struct FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket;

struct FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__uType : ::uClassType
{
};

FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__uType* FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof();

void FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket___ObjInit(FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::uArray* parts);
::uString* FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__Format(FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* bucket);
FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket* FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__New_1(::uStatic* __this, ::uArray* parts);

struct FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket : ::uObject
{
    ::uStrong< ::uArray*> _parts;

    void _ObjInit(::uArray* parts) { FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket___ObjInit(this, parts); }
    ::uString* Format(::app::Uno::Time::Text::OffsetPattern_OffsetBucket* bucket) { return FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__Format(this, bucket); }
};

}}}}


#endif
