#include <app/Uno.Action__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int.h>
#include <app/Uno.Action__Uno_Time_Text_OffsetPattern_OffsetBucket__int.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Func__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_OffsetPattern_OffsetBucket__int.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket.h>
#include <app/Uno.Time.Text.OffsetPattern_OffsetBucket.h>
#include <app/Uno.Time.Text.SignPart__Uno_Time_Text_LocalDateTimePattern_Loca-d227330c.h>
#include <app/Uno.Time.Text.SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType* SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof()
{
    static ::uStaticStrong<SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType*)::uAllocClassType(sizeof(SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType), "Uno.Time.Text.SignPart<Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof());
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int*, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Write;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof(), offsetof(SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType, __interface_0));

    return type;
}

void SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket___ObjInit_1(SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->ExpectedSize(1);
    __this->Obligatory(false);
}

SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(::uStatic* __this, ::uDelegate* setter, ::uDelegate* getter)
{
    SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* inst = (SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket*)::uAllocObject(sizeof(SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket), SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof());
    inst->_ObjInit_1(setter, getter);
    return inst;
}

::uString* SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Write(SignPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value)
{
    if (__this->Get(value) == 1)
    {
        return __this->Obligatory() ? ::uGetConstString("+") : ::app::Uno::String__Empty;
    }

    return ::uGetConstString("-");
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType* SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof()
{
    static ::uStaticStrong<SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType*> type;
    if (type != NULL) return type;

    type = (SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType*)::uAllocClassType(sizeof(SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType), "Uno.Time.Text.SignPart<Uno.Time.Text.OffsetPattern_OffsetBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__typeof());
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int*, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Write;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof(), offsetof(SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType, __interface_0));

    return type;
}

void SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket___ObjInit_2(SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->ExpectedSize(1);
    __this->Obligatory(obligatory);
}

SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket* SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__New_2(::uStatic* __this, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket* inst = (SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket*)::uAllocObject(sizeof(SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket), SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof());
    inst->_ObjInit_2(obligatory, setter, getter);
    return inst;
}

::uString* SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Write(SignPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value)
{
    if (__this->Get(value) == 1)
    {
        return __this->Obligatory() ? ::uGetConstString("+") : ::app::Uno::String__Empty;
    }

    return ::uGetConstString("-");
}

}}}}
