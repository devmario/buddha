#include <app/Uno.Action__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int.h>
#include <app/Uno.Action__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int.h>
#include <app/Uno.Action__Uno_Time_Text_OffsetPattern_OffsetBucket__int.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Func__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_OffsetPattern_OffsetBucket__int.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.Time.LocalDateTime.h>
#include <app/Uno.Time.Text.FixedFormatPattern__Uno_Time_Text_LocalDateTimePa-36c9c741.h>
#include <app/Uno.Time.Text.FixedFormatPattern__Uno_Time_Text_LocalTimePatter-63c7a501.h>
#include <app/Uno.Time.Text.FixedFormatPattern__Uno_Time_Text_OffsetPattern_O-a6482565.h>
#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_LocalDateTimePattern_-d4331936.h>
#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_LocalTimePattern_Loca-2b28bbf6.h>
#include <app/Uno.Time.Text.IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket.h>
#include <app/Uno.Time.Text.LocalDateTimePattern.h>
#include <app/Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket.h>
#include <app/Uno.Time.Text.LocalTimePattern.h>
#include <app/Uno.Time.Text.LocalTimePattern_LocalTimeBucket.h>
#include <app/Uno.Time.Text.NumberPart__Uno_Time_Text_LocalDateTimePattern_Lo-b8d1b898.h>
#include <app/Uno.Time.Text.NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket.h>
#include <app/Uno.Time.Text.NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket.h>
#include <app/Uno.Time.Text.OffsetPattern.h>
#include <app/Uno.Time.Text.OffsetPattern_OffsetBucket.h>
#include <app/Uno.Time.Text.RangeNumberPart__Uno_Time_Text_LocalTimePattern_L-94d4ae85.h>
#include <app/Uno.Time.Text.SeparatorPart__Uno_Time_Text_LocalDateTimePattern-1b78f244.h>
#include <app/Uno.Time.Text.SeparatorPart__Uno_Time_Text_LocalTimePattern_Loc-42678304.h>
#include <app/Uno.Time.Text.SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket.h>
#include <app/Uno.Time.Text.SignPart__Uno_Time_Text_LocalDateTimePattern_Loca-d227330c.h>
#include <app/Uno.Time.Text.SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IPatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Time.Text.IPatternPart<Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IPatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Time.Text.IPatternPart<Uno.Time.Text.LocalTimePattern_LocalTimeBucket>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Time.Text.IPatternPart<Uno.Time.Text.OffsetPattern_OffsetBucket>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< LocalDateTimePattern*> LocalDateTimePattern__General;

LocalDateTimePattern__uType* LocalDateTimePattern__typeof()
{
    static ::uStaticStrong<LocalDateTimePattern__uType*> type;
    if (type != NULL) return type;

    type = (LocalDateTimePattern__uType*)::uAllocClassType(sizeof(LocalDateTimePattern__uType), "Uno.Time.Text.LocalDateTimePattern", false, 0, 1, 0);

    type->SetStrongRefs(
        "_generalPattern", offsetof(LocalDateTimePattern, _generalPattern));

    return type;
}

void LocalDateTimePattern___ObjInit(LocalDateTimePattern* __this)
{
    ::uArray* array_124;
    __this->_generalPattern = ::app::Uno::Time::Text::FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(NULL, (array_124 = ::uNewArray(::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof(), 12), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(0) = (::uObject*)::app::Uno::Time::Text::SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof(), (const void*)LocalDateTimePattern__SetSign, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof(), (const void*)LocalDateTimePattern__GetSign, __this)), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(1) = (::uObject*)::app::Uno::Time::Text::NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(NULL, 4, true, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof(), (const void*)LocalDateTimePattern__SetYear, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof(), (const void*)LocalDateTimePattern__GetYear, __this)), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(2) = (::uObject*)::app::Uno::Time::Text::SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(NULL, true, '-', 0), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(3) = (::uObject*)::app::Uno::Time::Text::NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(NULL, 2, true, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof(), (const void*)LocalDateTimePattern__SetMonth, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof(), (const void*)LocalDateTimePattern__GetMonth, __this)), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(4) = (::uObject*)::app::Uno::Time::Text::SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(NULL, true, '-', 0), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(5) = (::uObject*)::app::Uno::Time::Text::NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(NULL, 2, true, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof(), (const void*)LocalDateTimePattern__SetDay, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof(), (const void*)LocalDateTimePattern__GetDay, __this)), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(6) = (::uObject*)::app::Uno::Time::Text::SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(NULL, true, 'T', 0), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(7) = (::uObject*)::app::Uno::Time::Text::NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(NULL, 2, true, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof(), (const void*)LocalDateTimePattern__SetHour, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof(), (const void*)LocalDateTimePattern__GetHour, __this)), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(8) = (::uObject*)::app::Uno::Time::Text::SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(NULL, true, ':', 0), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(9) = (::uObject*)::app::Uno::Time::Text::NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(NULL, 2, true, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof(), (const void*)LocalDateTimePattern__SetMinute, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof(), (const void*)LocalDateTimePattern__GetMinute, __this)), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(10) = (::uObject*)::app::Uno::Time::Text::SeparatorPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(NULL, true, ':', 0), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(11) = (::uObject*)::app::Uno::Time::Text::NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(NULL, 2, true, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof(), (const void*)LocalDateTimePattern__SetSecond, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof(), (const void*)LocalDateTimePattern__GetSecond, __this)), array_124));
}

::uString* LocalDateTimePattern__Format(LocalDateTimePattern* __this, ::app::Uno::Time::LocalDateTime* value)
{
    ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* collection_123;
    collection_123 = ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket__New_1(NULL);
    ::uPtr< ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*>(collection_123)->Sign = (::uPtr< ::app::Uno::Time::LocalDateTime*>(value)->Year() < 0) ? -1 : 1;
    collection_123->Year = value->Year();
    collection_123->Month = value->Month();
    collection_123->Day = value->Day();
    collection_123->Hour = value->Hour();
    collection_123->Minute = value->Minute();
    collection_123->Second = value->Second();
    ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* bucket = collection_123;
    return ::uPtr< ::app::Uno::Time::Text::FixedFormatPattern__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket*>(__this->_generalPattern)->Format(bucket);
}

LocalDateTimePattern* LocalDateTimePattern__get_GeneralIsoPattern(::uStatic* __this)
{
    if (LocalDateTimePattern__General == NULL)
    {
        LocalDateTimePattern__General = LocalDateTimePattern__New_1(NULL);
    }

    return LocalDateTimePattern__General;
}

int LocalDateTimePattern__GetDay(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value)
{
    return ::uPtr< ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*>(value)->Day;
}

int LocalDateTimePattern__GetHour(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value)
{
    return ::uPtr< ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*>(value)->Hour;
}

int LocalDateTimePattern__GetMinute(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value)
{
    return ::uPtr< ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*>(value)->Minute;
}

int LocalDateTimePattern__GetMonth(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value)
{
    return ::uPtr< ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*>(value)->Month;
}

int LocalDateTimePattern__GetSecond(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value)
{
    return ::uPtr< ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*>(value)->Second;
}

int LocalDateTimePattern__GetSign(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value)
{
    return ::uPtr< ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*>(value)->Sign;
}

int LocalDateTimePattern__GetYear(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value)
{
    return ::uPtr< ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*>(value)->Year;
}

LocalDateTimePattern* LocalDateTimePattern__New_1(::uStatic* __this)
{
    LocalDateTimePattern* inst = (LocalDateTimePattern*)::uAllocObject(sizeof(LocalDateTimePattern), LocalDateTimePattern__typeof());
    inst->_ObjInit();
    return inst;
}

void LocalDateTimePattern__SetDay(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value, int day)
{
    ::uPtr< ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*>(value)->Day = day;
}

void LocalDateTimePattern__SetHour(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value, int hour)
{
    ::uPtr< ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*>(value)->Hour = hour;
}

void LocalDateTimePattern__SetMinute(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value, int minute)
{
    ::uPtr< ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*>(value)->Minute = minute;
}

void LocalDateTimePattern__SetMonth(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value, int month)
{
    ::uPtr< ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*>(value)->Month = month;
}

void LocalDateTimePattern__SetSecond(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value, int second)
{
    ::uPtr< ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*>(value)->Second = second;
}

void LocalDateTimePattern__SetSign(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value, int sign)
{
    ::uPtr< ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*>(value)->Sign = sign;
}

void LocalDateTimePattern__SetYear(LocalDateTimePattern* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value, int year)
{
    ::uPtr< ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*>(value)->Year = year;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LocalDateTimePattern_LocalDateTimeBucket__uType* LocalDateTimePattern_LocalDateTimeBucket__typeof()
{
    static ::uStaticStrong<LocalDateTimePattern_LocalDateTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (LocalDateTimePattern_LocalDateTimeBucket__uType*)::uAllocClassType(sizeof(LocalDateTimePattern_LocalDateTimeBucket__uType), "Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket", false, 0, 0, 0);

    return type;
}

void LocalDateTimePattern_LocalDateTimeBucket___ObjInit(LocalDateTimePattern_LocalDateTimeBucket* __this)
{
}

LocalDateTimePattern_LocalDateTimeBucket* LocalDateTimePattern_LocalDateTimeBucket__New_1(::uStatic* __this)
{
    LocalDateTimePattern_LocalDateTimeBucket* inst = (LocalDateTimePattern_LocalDateTimeBucket*)::uAllocObject(sizeof(LocalDateTimePattern_LocalDateTimeBucket), LocalDateTimePattern_LocalDateTimeBucket__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< LocalTimePattern*> LocalTimePattern__General;

LocalTimePattern__uType* LocalTimePattern__typeof()
{
    static ::uStaticStrong<LocalTimePattern__uType*> type;
    if (type != NULL) return type;

    type = (LocalTimePattern__uType*)::uAllocClassType(sizeof(LocalTimePattern__uType), "Uno.Time.Text.LocalTimePattern", false, 0, 1, 0);

    type->SetStrongRefs(
        "_generalPattern", offsetof(LocalTimePattern, _generalPattern));

    return type;
}

void LocalTimePattern___ObjInit(LocalTimePattern* __this)
{
    ::uArray* array_124;
    __this->_generalPattern = ::app::Uno::Time::Text::FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_1(NULL, (array_124 = ::uNewArray(::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof(), 7), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(0) = (::uObject*)::app::Uno::Time::Text::NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_1(NULL, 2, true, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__typeof(), (const void*)LocalTimePattern__SetHour, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__typeof(), (const void*)LocalTimePattern__GetHour, __this)), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(1) = (::uObject*)::app::Uno::Time::Text::SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_1(NULL, true, ':', 0), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(2) = (::uObject*)::app::Uno::Time::Text::NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_1(NULL, 2, true, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__typeof(), (const void*)LocalTimePattern__SetMinute, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__typeof(), (const void*)LocalTimePattern__GetMinute, __this)), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(3) = (::uObject*)::app::Uno::Time::Text::SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_1(NULL, true, ':', 0), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(4) = (::uObject*)::app::Uno::Time::Text::NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_1(NULL, 2, true, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__typeof(), (const void*)LocalTimePattern__SetSecond, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__typeof(), (const void*)LocalTimePattern__GetSecond, __this)), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(5) = (::uObject*)::app::Uno::Time::Text::SeparatorPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_1(NULL, false, '.', 0), ::uPtr< ::uArray*>(array_124)->ItemStrong< ::uObject*>(6) = (::uObject*)::app::Uno::Time::Text::RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_2(NULL, 3, 7, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__typeof(), (const void*)LocalTimePattern__SetMillisecond, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__typeof(), (const void*)LocalTimePattern__GetMillisecond, __this)), array_124));
}

::uString* LocalTimePattern__Format(LocalTimePattern* __this, ::app::Uno::Time::LocalTime value)
{
    ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* collection_123;
    collection_123 = ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket__New_1(NULL);
    ::uPtr< ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*>(collection_123)->Hour = value.Hour();
    collection_123->Minute = value.Minute();
    collection_123->Second = value.Second();
    collection_123->Millisecond = value.Millisecond();
    ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* bucket = collection_123;
    return ::uPtr< ::app::Uno::Time::Text::FixedFormatPattern__Uno_Time_Text_LocalTimePattern_LocalTimeBucket*>(__this->_generalPattern)->Format(bucket);
}

LocalTimePattern* LocalTimePattern__get_GeneralIsoPattern(::uStatic* __this)
{
    if (LocalTimePattern__General == NULL)
    {
        LocalTimePattern__General = LocalTimePattern__New_1(NULL);
    }

    return LocalTimePattern__General;
}

int LocalTimePattern__GetHour(LocalTimePattern* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value)
{
    return ::uPtr< ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*>(value)->Hour;
}

int LocalTimePattern__GetMillisecond(LocalTimePattern* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value)
{
    return ::uPtr< ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*>(value)->Millisecond;
}

int LocalTimePattern__GetMinute(LocalTimePattern* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value)
{
    return ::uPtr< ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*>(value)->Minute;
}

int LocalTimePattern__GetSecond(LocalTimePattern* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value)
{
    return ::uPtr< ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*>(value)->Second;
}

LocalTimePattern* LocalTimePattern__New_1(::uStatic* __this)
{
    LocalTimePattern* inst = (LocalTimePattern*)::uAllocObject(sizeof(LocalTimePattern), LocalTimePattern__typeof());
    inst->_ObjInit();
    return inst;
}

void LocalTimePattern__SetHour(LocalTimePattern* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value, int hour)
{
    ::uPtr< ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*>(value)->Hour = hour;
}

void LocalTimePattern__SetMillisecond(LocalTimePattern* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value, int millisecond)
{
    ::uPtr< ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*>(value)->Millisecond = millisecond;
}

void LocalTimePattern__SetMinute(LocalTimePattern* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value, int minute)
{
    ::uPtr< ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*>(value)->Minute = minute;
}

void LocalTimePattern__SetSecond(LocalTimePattern* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value, int second)
{
    ::uPtr< ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*>(value)->Second = second;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LocalTimePattern_LocalTimeBucket__uType* LocalTimePattern_LocalTimeBucket__typeof()
{
    static ::uStaticStrong<LocalTimePattern_LocalTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (LocalTimePattern_LocalTimeBucket__uType*)::uAllocClassType(sizeof(LocalTimePattern_LocalTimeBucket__uType), "Uno.Time.Text.LocalTimePattern.LocalTimeBucket", false, 0, 0, 0);

    return type;
}

void LocalTimePattern_LocalTimeBucket___ObjInit(LocalTimePattern_LocalTimeBucket* __this)
{
}

LocalTimePattern_LocalTimeBucket* LocalTimePattern_LocalTimeBucket__New_1(::uStatic* __this)
{
    LocalTimePattern_LocalTimeBucket* inst = (LocalTimePattern_LocalTimeBucket*)::uAllocObject(sizeof(LocalTimePattern_LocalTimeBucket), LocalTimePattern_LocalTimeBucket__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< OffsetPattern*> OffsetPattern__General;

OffsetPattern__uType* OffsetPattern__typeof()
{
    static ::uStaticStrong<OffsetPattern__uType*> type;
    if (type != NULL) return type;

    type = (OffsetPattern__uType*)::uAllocClassType(sizeof(OffsetPattern__uType), "Uno.Time.Text.OffsetPattern", false, 0, 1, 0);

    type->SetStrongRefs(
        "_generalPattern", offsetof(OffsetPattern, _generalPattern));

    return type;
}

void OffsetPattern___ObjInit(OffsetPattern* __this)
{
    ::uArray* array_123;
    __this->_generalPattern = ::app::Uno::Time::Text::FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket__New_1(NULL, (array_123 = ::uNewArray(::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof(), 6), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = (::uObject*)::app::Uno::Time::Text::SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__New_2(NULL, true, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_Time_Text_OffsetPattern_OffsetBucket__int__typeof(), (const void*)OffsetPattern__SetSign, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Time_Text_OffsetPattern_OffsetBucket__int__typeof(), (const void*)OffsetPattern__GetSign, __this)), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(1) = (::uObject*)::app::Uno::Time::Text::NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__New_1(NULL, 2, true, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_Time_Text_OffsetPattern_OffsetBucket__int__typeof(), (const void*)OffsetPattern__SetHour, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Time_Text_OffsetPattern_OffsetBucket__int__typeof(), (const void*)OffsetPattern__GetHour, __this)), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(2) = (::uObject*)::app::Uno::Time::Text::SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__New_2(NULL, false, true, ':', 0), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(3) = (::uObject*)::app::Uno::Time::Text::NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__New_1(NULL, 2, false, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_Time_Text_OffsetPattern_OffsetBucket__int__typeof(), (const void*)OffsetPattern__SetMinute, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Time_Text_OffsetPattern_OffsetBucket__int__typeof(), (const void*)OffsetPattern__GetMinute, __this)), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(4) = (::uObject*)::app::Uno::Time::Text::SeparatorPart__Uno_Time_Text_OffsetPattern_OffsetBucket__New_2(NULL, false, true, ':', 0), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(5) = (::uObject*)::app::Uno::Time::Text::NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__New_1(NULL, 2, false, ::uNewDelegateNonVirt(::app::Uno::Action__Uno_Time_Text_OffsetPattern_OffsetBucket__int__typeof(), (const void*)OffsetPattern__SetSecond, __this), ::uNewDelegateNonVirt(::app::Uno::Func__Uno_Time_Text_OffsetPattern_OffsetBucket__int__typeof(), (const void*)OffsetPattern__GetSecond, __this)), array_123));
}

::uString* OffsetPattern__Format(OffsetPattern* __this, ::app::Uno::Time::Offset value)
{
    ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* bucket = ::app::Uno::Time::Text::OffsetPattern_OffsetBucket__New_1(NULL);
    ::uPtr< ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*>(bucket)->Sign = (value.Milliseconds() < 0) ? -1 : 1;
    bucket->Hour = value.Milliseconds() / 3600000;
    int remaining = value.Milliseconds() % 3600000;
    bucket->Minute = remaining / 60000;
    remaining = remaining % 60000;
    bucket->Second = remaining / 1000;
    return ::uPtr< ::app::Uno::Time::Text::FixedFormatPattern__Uno_Time_Text_OffsetPattern_OffsetBucket*>(__this->_generalPattern)->Format(bucket);
}

OffsetPattern* OffsetPattern__get_GeneralIsoPattern(::uStatic* __this)
{
    if (OffsetPattern__General == NULL)
    {
        OffsetPattern__General = OffsetPattern__New_1(NULL);
    }

    return OffsetPattern__General;
}

int OffsetPattern__GetHour(OffsetPattern* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value)
{
    return ::uPtr< ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*>(value)->Hour;
}

int OffsetPattern__GetMinute(OffsetPattern* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value)
{
    return ::uPtr< ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*>(value)->Minute;
}

int OffsetPattern__GetSecond(OffsetPattern* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value)
{
    return ::uPtr< ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*>(value)->Second;
}

int OffsetPattern__GetSign(OffsetPattern* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value)
{
    return ::uPtr< ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*>(value)->Sign;
}

OffsetPattern* OffsetPattern__New_1(::uStatic* __this)
{
    OffsetPattern* inst = (OffsetPattern*)::uAllocObject(sizeof(OffsetPattern), OffsetPattern__typeof());
    inst->_ObjInit();
    return inst;
}

void OffsetPattern__SetHour(OffsetPattern* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value, int hour)
{
    ::uPtr< ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*>(value)->Hour = hour;
}

void OffsetPattern__SetMinute(OffsetPattern* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value, int minute)
{
    ::uPtr< ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*>(value)->Minute = minute;
}

void OffsetPattern__SetSecond(OffsetPattern* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value, int second)
{
    ::uPtr< ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*>(value)->Second = second;
}

void OffsetPattern__SetSign(OffsetPattern* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value, int sign)
{
    ::uPtr< ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*>(value)->Sign = sign;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

OffsetPattern_OffsetBucket__uType* OffsetPattern_OffsetBucket__typeof()
{
    static ::uStaticStrong<OffsetPattern_OffsetBucket__uType*> type;
    if (type != NULL) return type;

    type = (OffsetPattern_OffsetBucket__uType*)::uAllocClassType(sizeof(OffsetPattern_OffsetBucket__uType), "Uno.Time.Text.OffsetPattern.OffsetBucket", false, 0, 0, 0);

    return type;
}

void OffsetPattern_OffsetBucket___ObjInit(OffsetPattern_OffsetBucket* __this)
{
}

OffsetPattern_OffsetBucket* OffsetPattern_OffsetBucket__New_1(::uStatic* __this)
{
    OffsetPattern_OffsetBucket* inst = (OffsetPattern_OffsetBucket*)::uAllocObject(sizeof(OffsetPattern_OffsetBucket), OffsetPattern_OffsetBucket__typeof());
    inst->_ObjInit();
    return inst;
}

}}}}
