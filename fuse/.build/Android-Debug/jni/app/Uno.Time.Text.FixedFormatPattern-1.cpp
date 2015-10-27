#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.Text.StringBuilder.h>
#include <app/Uno.Time.Text.FixedFormatPattern__Uno_Time_Text_LocalDateTimePa-36c9c741.h>
#include <app/Uno.Time.Text.FixedFormatPattern__Uno_Time_Text_LocalTimePatter-63c7a501.h>
#include <app/Uno.Time.Text.FixedFormatPattern__Uno_Time_Text_OffsetPattern_O-a6482565.h>
#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_LocalDateTimePattern_-d4331936.h>
#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_LocalTimePattern_Loca-2b28bbf6.h>
#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket.h>
#include <app/Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket.h>
#include <app/Uno.Time.Text.LocalTimePattern_LocalTimeBucket.h>
#include <app/Uno.Time.Text.OffsetPattern_OffsetBucket.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType* FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof()
{
    static ::uStaticStrong<FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType*)::uAllocClassType(sizeof(FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType), "Uno.Time.Text.FixedFormatPattern<Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_parts", offsetof(FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket, _parts));

    return type;
}

void FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket___ObjInit(FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::uArray* parts)
{
    __this->_parts = parts;
}

::uString* FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Format(FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* bucket)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    ::app::Uno::Text::StringBuilder* sb = ::app::Uno::Text::StringBuilder__New_1(NULL);

    for (array_123 = __this->_parts, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::uObject* part = ::uPtr< ::uArray*>(array_123)->Item< ::uObject*>(index_124);
        ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->Append_1(::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket::Write(::uPtr< ::uObject*>(part), bucket));
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->ToString();
}

FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(::uStatic* __this, ::uArray* parts)
{
    FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* inst = (FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket*)::uAllocObject(sizeof(FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket), FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof());
    inst->_ObjInit(parts);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType* FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof()
{
    static ::uStaticStrong<FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType*)::uAllocClassType(sizeof(FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType), "Uno.Time.Text.FixedFormatPattern<Uno.Time.Text.LocalTimePattern_LocalTimeBucket>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_parts", offsetof(FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket, _parts));

    return type;
}

void FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket___ObjInit(FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, ::uArray* parts)
{
    __this->_parts = parts;
}

::uString* FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Format(FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* bucket)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    ::app::Uno::Text::StringBuilder* sb = ::app::Uno::Text::StringBuilder__New_1(NULL);

    for (array_123 = __this->_parts, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::uObject* part = ::uPtr< ::uArray*>(array_123)->Item< ::uObject*>(index_124);
        ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->Append_1(::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket::Write(::uPtr< ::uObject*>(part), bucket));
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->ToString();
}

FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_1(::uStatic* __this, ::uArray* parts)
{
    FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* inst = (FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket*)::uAllocObject(sizeof(FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket), FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof());
    inst->_ObjInit(parts);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__uType* FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof()
{
    static ::uStaticStrong<FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__uType*> type;
    if (type != NULL) return type;

    type = (FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__uType*)::uAllocClassType(sizeof(FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__uType), "Uno.Time.Text.FixedFormatPattern<Uno.Time.Text.OffsetPattern_OffsetBucket>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_parts", offsetof(FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket, _parts));

    return type;
}

void FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket___ObjInit(FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::uArray* parts)
{
    __this->_parts = parts;
}

::uString* FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__Format(FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* bucket)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    ::app::Uno::Text::StringBuilder* sb = ::app::Uno::Text::StringBuilder__New_1(NULL);

    for (array_123 = __this->_parts, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::uObject* part = ::uPtr< ::uArray*>(array_123)->Item< ::uObject*>(index_124);
        ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->Append_1(::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket::Write(::uPtr< ::uObject*>(part), bucket));
    }

    return ::uPtr< ::app::Uno::Text::StringBuilder*>(sb)->ToString();
}

FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket* FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__New_1(::uStatic* __this, ::uArray* parts)
{
    FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket* inst = (FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket*)::uAllocObject(sizeof(FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket), FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof());
    inst->_ObjInit(parts);
    return inst;
}

}}}}
