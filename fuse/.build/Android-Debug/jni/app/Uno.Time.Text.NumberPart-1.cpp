#include <app/Uno.Action__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int.h>
#include <app/Uno.Action__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int.h>
#include <app/Uno.Action__Uno_Time_Text_OffsetPattern_OffsetBucket__int.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Func__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_OffsetPattern_OffsetBucket__int.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket.h>
#include <app/Uno.Time.Text.LocalTimePattern_LocalTimeBucket.h>
#include <app/Uno.Time.Text.NumberPart__Uno_Time_Text_LocalDateTimePattern_Lo-b8d1b898.h>
#include <app/Uno.Time.Text.NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket.h>
#include <app/Uno.Time.Text.NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket.h>
#include <app/Uno.Time.Text.OffsetPattern_OffsetBucket.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType* NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof()
{
    static ::uStaticStrong<NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType*)::uAllocClassType(sizeof(NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType), "Uno.Time.Text.NumberPart<Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof());
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int*, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Write;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof(), offsetof(NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__uType, __interface_0));

    return type;
}

void NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket___ObjInit_1(NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->ExpectedSize(size);
    __this->Obligatory(obligatory);
}

NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__New_1(::uStatic* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* inst = (NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket*)::uAllocObject(sizeof(NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket), NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof());
    inst->_ObjInit_1(size, obligatory, setter, getter);
    return inst;
}

::uString* NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__Write(NumberPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value)
{
    ::uArray* array_123;
    return ::app::Uno::String__Format(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("{0:D"), ::uBox< int>(::app::Uno::Int__typeof(), __this->ExpectedSize())), ::uGetConstString("}")), (array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), ::app::Uno::Math__Abs_2(NULL, __this->Get(value))), array_123));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType* NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof()
{
    static ::uStaticStrong<NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType*)::uAllocClassType(sizeof(NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType), "Uno.Time.Text.NumberPart<Uno.Time.Text.LocalTimePattern_LocalTimeBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__typeof());
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int*, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Write;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof(), offsetof(NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType, __interface_0));

    return type;
}

void NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket___ObjInit_1(NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->ExpectedSize(size);
    __this->Obligatory(obligatory);
}

NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_1(::uStatic* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* inst = (NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket*)::uAllocObject(sizeof(NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket), NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof());
    inst->_ObjInit_1(size, obligatory, setter, getter);
    return inst;
}

::uString* NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Write(NumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value)
{
    ::uArray* array_123;
    return ::app::Uno::String__Format(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("{0:D"), ::uBox< int>(::app::Uno::Int__typeof(), __this->ExpectedSize())), ::uGetConstString("}")), (array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), ::app::Uno::Math__Abs_2(NULL, __this->Get(value))), array_123));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType* NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof()
{
    static ::uStaticStrong<NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType*> type;
    if (type != NULL) return type;

    type = (NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType*)::uAllocClassType(sizeof(NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType), "Uno.Time.Text.NumberPart<Uno.Time.Text.OffsetPattern_OffsetBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__typeof());
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int*, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Write;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof(), offsetof(NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__uType, __interface_0));

    return type;
}

void NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket___ObjInit_1(NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->ExpectedSize(size);
    __this->Obligatory(obligatory);
}

NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket* NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__New_1(::uStatic* __this, int size, bool obligatory, ::uDelegate* setter, ::uDelegate* getter)
{
    NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket* inst = (NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket*)::uAllocObject(sizeof(NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket), NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof());
    inst->_ObjInit_1(size, obligatory, setter, getter);
    return inst;
}

::uString* NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket__Write(NumberPart__Uno_Time_Text_OffsetPattern_OffsetBucket* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value)
{
    ::uArray* array_123;
    return ::app::Uno::String__Format(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("{0:D"), ::uBox< int>(::app::Uno::Int__typeof(), __this->ExpectedSize())), ::uGetConstString("}")), (array_123 = ::uNewArray(::uObject__typeof(), 1), ::uPtr< ::uArray*>(array_123)->ItemStrong< ::uObject*>(0) = ::uBox< int>(::app::Uno::Int__typeof(), ::app::Uno::Math__Abs_2(NULL, __this->Get(value))), array_123));
}

}}}}
