#include <app/Uno.Action__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.Time.Text.LocalTimePattern_LocalTimeBucket.h>
#include <app/Uno.Time.Text.RangeNumberPart__Uno_Time_Text_LocalTimePattern_L-94d4ae85.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType* RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof()
{
    static ::uStaticStrong<RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType*> type;
    if (type != NULL) return type;

    type = (RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType*)::uAllocClassType(sizeof(RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType), "Uno.Time.Text.RangeNumberPart<Uno.Time.Text.LocalTimePattern_LocalTimeBucket>", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__typeof());
    type->__fp_Write = (::uString*(*)(::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int*, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Write;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof(), offsetof(RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__uType, __interface_0));

    return type;
}

void RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket___ObjInit_2(RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, int size, int maxSize, ::uDelegate* setter, ::uDelegate* getter)
{
    ::app::Uno::Time::Text::PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int___ObjInit(__this);
    __this->Setter(setter);
    __this->Getter(getter);
    __this->_maxSize = maxSize;
    __this->ExpectedSize(size);
}

RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__New_2(::uStatic* __this, int size, int maxSize, ::uDelegate* setter, ::uDelegate* getter)
{
    RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* inst = (RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket*)::uAllocObject(sizeof(RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket), RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof());
    inst->_ObjInit_2(size, maxSize, setter, getter);
    return inst;
}

::uString* RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__Write(RangeNumberPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value)
{
    return ::app::Uno::String__Empty;
}

}}}}
