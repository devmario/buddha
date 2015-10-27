#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket.h>
#include <app/Uno.Time.Text.LocalTimePattern_LocalTimeBucket.h>
#include <app/Uno.Time.Text.OffsetPattern_OffsetBucket.h>
#include <app/Uno.Time.Text.SeparatorPart__Uno_Time_Text_LocalDateTimePattern-1b78f244.h>
#include <app/Uno.Time.Text.SeparatorPart__Uno_Time_Text_LocalTimePattern_Loc-42678304.h>
#include <app/Uno.Time.Text.SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType* SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof()
{
    static ::uStaticStrong<SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType*)::uAllocClassType(sizeof(SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType), "Uno.Time.Text.SeparatorPart<Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__typeof());
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char*, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Write;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof(), offsetof(SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType, __interface_0));

    return type;
}

void SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket___ObjInit_1(SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char___ObjInit(__this);
    __this->ExpectedSize(1);
    __this->Obligatory(obligatory);
    __this->SkipNextPartsCountIfThisNotSpecified(skipNextPartsCountIfThisNotSpecified);
    __this->_separator = separator;
    __this->_show = false;
}

SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(::uStatic* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* inst = (SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket*)::uAllocObject(sizeof(SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket), SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof());
    inst->_ObjInit_1(obligatory, separator, skipNextPartsCountIfThisNotSpecified);
    return inst;
}

::uString* SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Write(SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value)
{
    return (__this->Obligatory() || __this->_show) ? ::app::Uno::Char::ToString(__this->_separator) : ::app::Uno::String__Empty;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType* SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof()
{
    static ::uStaticStrong<SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType*)::uAllocClassType(sizeof(SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType), "Uno.Time.Text.SeparatorPart<Uno.Time.Text.LocalTimePattern_LocalTimeBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__typeof());
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char*, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Write;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof(), offsetof(SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType, __interface_0));

    return type;
}

void SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket___ObjInit_1(SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char___ObjInit(__this);
    __this->ExpectedSize(1);
    __this->Obligatory(obligatory);
    __this->SkipNextPartsCountIfThisNotSpecified(skipNextPartsCountIfThisNotSpecified);
    __this->_separator = separator;
    __this->_show = false;
}

SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_1(::uStatic* __this, bool obligatory, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* inst = (SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket*)::uAllocObject(sizeof(SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket), SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof());
    inst->_ObjInit_1(obligatory, separator, skipNextPartsCountIfThisNotSpecified);
    return inst;
}

::uString* SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Write(SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value)
{
    return (__this->Obligatory() || __this->_show) ? ::app::Uno::Char::ToString(__this->_separator) : ::app::Uno::String__Empty;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType* SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof()
{
    static ::uStaticStrong<SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType*> type;
    if (type != NULL) return type;

    type = (SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType*)::uAllocClassType(sizeof(SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType), "Uno.Time.Text.SeparatorPart<Uno.Time.Text.OffsetPattern_OffsetBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__typeof());
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char*, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Write;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof(), offsetof(SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType, __interface_0));

    return type;
}

void SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket___ObjInit_2(SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char___ObjInit(__this);
    __this->ExpectedSize(1);
    __this->Obligatory(obligatory);
    __this->SkipNextPartsCountIfThisNotSpecified(skipNextPartsCountIfThisNotSpecified);
    __this->_separator = separator;
    __this->_show = show;
}

SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket* SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__New_2(::uStatic* __this, bool obligatory, bool show, ::uChar separator, int skipNextPartsCountIfThisNotSpecified)
{
    SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket* inst = (SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket*)::uAllocObject(sizeof(SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket), SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof());
    inst->_ObjInit_2(obligatory, show, separator, skipNextPartsCountIfThisNotSpecified);
    return inst;
}

::uString* SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Write(SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value)
{
    return (__this->Obligatory() || __this->_show) ? ::app::Uno::Char::ToString(__this->_separator) : ::app::Uno::String__Empty;
}

}}}}
