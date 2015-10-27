#include <app/Uno.Action__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int.h>
#include <app/Uno.Action__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int.h>
#include <app/Uno.Action__Uno_Time_Text_OffsetPattern_OffsetBucket__int.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Func__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char.h>
#include <app/Uno.Func__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char.h>
#include <app/Uno.Func__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int.h>
#include <app/Uno.Func__Uno_Time_Text_OffsetPattern_OffsetBucket__char.h>
#include <app/Uno.Func__Uno_Time_Text_OffsetPattern_OffsetBucket__int.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket.h>
#include <app/Uno.Time.Text.LocalTimePattern_LocalTimeBucket.h>
#include <app/Uno.Time.Text.OffsetPattern_OffsetBucket.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_LocalDateTimePattern_L-94fcfb00.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_LocalDateTimePattern_L-a9f9265.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_LocalTimePattern_Local-3aeaae25.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_LocalTimePattern_Local-64ff6740.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_OffsetPattern_OffsetBu-7a6e09.h>
#include <app/Uno.Time.Text.PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int.h>

namespace app {
namespace Uno {
namespace Time {
namespace Text {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__uType* PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__typeof()
{
    static ::uStaticStrong<PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__uType*> type;
    if (type != NULL) return type;

    type = (PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__uType*)::uAllocClassType(sizeof(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__uType), "Uno.Time.Text.PatternPart<Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket,char>", false, 1, 1, 0);

    type->__fp_Write = PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__Write;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof(), offsetof(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__uType, __interface_0));

    type->SetStrongRefs(
        "_Getter", offsetof(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char, _Getter));

    return type;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char___ObjInit(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this)
{
}

::uChar PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__Get(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* bucket)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Getter(), NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->Getter())->Invoke< ::uChar, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*>(bucket);
    }

    return 0;
}

int PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__get_ExpectedSize(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this)
{
    return __this->_ExpectedSize;
}

::uDelegate* PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__get_Getter(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this)
{
    return __this->_Getter;
}

bool PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__get_Obligatory(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this)
{
    return __this->_Obligatory;
}

int PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__get_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this)
{
    return __this->_SkipNextPartsCountIfThisNotSpecified;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__set_ExpectedSize(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this, int value)
{
    __this->_ExpectedSize = value;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__set_Getter(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this, ::uDelegate* value)
{
    __this->_Getter = value;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__set_Obligatory(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this, bool value)
{
    __this->_Obligatory = value;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__set_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this, int value)
{
    __this->_SkipNextPartsCountIfThisNotSpecified = value;
}

::uString* PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char__Write(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__char* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value)
{
    return ::app::Uno::Object::ToString(::uBox< ::uChar>(::app::Uno::Char__typeof(), __this->Get(value)));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__uType* PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__typeof()
{
    static ::uStaticStrong<PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__uType*> type;
    if (type != NULL) return type;

    type = (PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__uType*)::uAllocClassType(sizeof(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__uType), "Uno.Time.Text.PatternPart<Uno.Time.Text.LocalDateTimePattern_LocalDateTimeBucket,int>", false, 1, 2, 0);

    type->__fp_Write = PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*))PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__Write;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__typeof(), offsetof(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__uType, __interface_0));

    type->SetStrongRefs(
        "_Getter", offsetof(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int, _Getter),
        "_Setter", offsetof(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int, _Setter));

    return type;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int___ObjInit(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this)
{
}

int PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__Get(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* bucket)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Getter(), NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->Getter())->Invoke< int, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket*>(bucket);
    }

    return 0;
}

int PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__get_ExpectedSize(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this)
{
    return __this->_ExpectedSize;
}

::uDelegate* PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__get_Getter(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this)
{
    return __this->_Getter;
}

bool PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__get_Obligatory(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this)
{
    return __this->_Obligatory;
}

::uDelegate* PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__get_Setter(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this)
{
    return __this->_Setter;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__set_ExpectedSize(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this, int value)
{
    __this->_ExpectedSize = value;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__set_Getter(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this, ::uDelegate* value)
{
    __this->_Getter = value;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__set_Obligatory(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this, bool value)
{
    __this->_Obligatory = value;
}

void PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__set_Setter(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this, ::uDelegate* value)
{
    __this->_Setter = value;
}

::uString* PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int__Write(PatternPart__Uno_Time_Text_LocalDateTimePattern_LocalDateTimeBucket__int* __this, ::app::Uno::Time::Text::LocalDateTimePattern_LocalDateTimeBucket* value)
{
    return ::app::Uno::Object::ToString(::uBox< int>(::app::Uno::Int__typeof(), __this->Get(value)));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__uType* PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__typeof()
{
    static ::uStaticStrong<PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__uType*> type;
    if (type != NULL) return type;

    type = (PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__uType*)::uAllocClassType(sizeof(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__uType), "Uno.Time.Text.PatternPart<Uno.Time.Text.LocalTimePattern_LocalTimeBucket,char>", false, 1, 1, 0);

    type->__fp_Write = PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__Write;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof(), offsetof(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__uType, __interface_0));

    type->SetStrongRefs(
        "_Getter", offsetof(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char, _Getter));

    return type;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char___ObjInit(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this)
{
}

::uChar PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__Get(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* bucket)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Getter(), NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->Getter())->Invoke< ::uChar, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*>(bucket);
    }

    return 0;
}

int PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__get_ExpectedSize(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this)
{
    return __this->_ExpectedSize;
}

::uDelegate* PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__get_Getter(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this)
{
    return __this->_Getter;
}

bool PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__get_Obligatory(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this)
{
    return __this->_Obligatory;
}

int PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__get_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this)
{
    return __this->_SkipNextPartsCountIfThisNotSpecified;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__set_ExpectedSize(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this, int value)
{
    __this->_ExpectedSize = value;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__set_Getter(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this, ::uDelegate* value)
{
    __this->_Getter = value;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__set_Obligatory(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this, bool value)
{
    __this->_Obligatory = value;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__set_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this, int value)
{
    __this->_SkipNextPartsCountIfThisNotSpecified = value;
}

::uString* PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char__Write(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__char* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value)
{
    return ::app::Uno::Object::ToString(::uBox< ::uChar>(::app::Uno::Char__typeof(), __this->Get(value)));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__uType* PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__typeof()
{
    static ::uStaticStrong<PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__uType*> type;
    if (type != NULL) return type;

    type = (PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__uType*)::uAllocClassType(sizeof(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__uType), "Uno.Time.Text.PatternPart<Uno.Time.Text.LocalTimePattern_LocalTimeBucket,int>", false, 1, 2, 0);

    type->__fp_Write = PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*))PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__Write;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__typeof(), offsetof(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__uType, __interface_0));

    type->SetStrongRefs(
        "_Getter", offsetof(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int, _Getter),
        "_Setter", offsetof(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int, _Setter));

    return type;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int___ObjInit(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this)
{
}

int PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__Get(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* bucket)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Getter(), NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->Getter())->Invoke< int, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket*>(bucket);
    }

    return 0;
}

int PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__get_ExpectedSize(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this)
{
    return __this->_ExpectedSize;
}

::uDelegate* PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__get_Getter(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this)
{
    return __this->_Getter;
}

bool PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__get_Obligatory(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this)
{
    return __this->_Obligatory;
}

::uDelegate* PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__get_Setter(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this)
{
    return __this->_Setter;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__set_ExpectedSize(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this, int value)
{
    __this->_ExpectedSize = value;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__set_Getter(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this, ::uDelegate* value)
{
    __this->_Getter = value;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__set_Obligatory(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this, bool value)
{
    __this->_Obligatory = value;
}

void PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__set_Setter(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this, ::uDelegate* value)
{
    __this->_Setter = value;
}

::uString* PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int__Write(PatternPart__Uno_Time_Text_LocalTimePattern_LocalTimeBucket__int* __this, ::app::Uno::Time::Text::LocalTimePattern_LocalTimeBucket* value)
{
    return ::app::Uno::Object::ToString(::uBox< int>(::app::Uno::Int__typeof(), __this->Get(value)));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__uType* PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__typeof()
{
    static ::uStaticStrong<PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__uType*> type;
    if (type != NULL) return type;

    type = (PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__uType*)::uAllocClassType(sizeof(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__uType), "Uno.Time.Text.PatternPart<Uno.Time.Text.OffsetPattern_OffsetBucket,char>", false, 1, 1, 0);

    type->__fp_Write = PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__Write;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof(), offsetof(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__uType, __interface_0));

    type->SetStrongRefs(
        "_Getter", offsetof(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char, _Getter));

    return type;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char___ObjInit(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this)
{
}

::uChar PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__Get(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* bucket)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Getter(), NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->Getter())->Invoke< ::uChar, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*>(bucket);
    }

    return 0;
}

int PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__get_ExpectedSize(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this)
{
    return __this->_ExpectedSize;
}

::uDelegate* PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__get_Getter(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this)
{
    return __this->_Getter;
}

bool PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__get_Obligatory(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this)
{
    return __this->_Obligatory;
}

int PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__get_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this)
{
    return __this->_SkipNextPartsCountIfThisNotSpecified;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__set_ExpectedSize(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this, int value)
{
    __this->_ExpectedSize = value;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__set_Getter(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this, ::uDelegate* value)
{
    __this->_Getter = value;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__set_Obligatory(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this, bool value)
{
    __this->_Obligatory = value;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__set_SkipNextPartsCountIfThisNotSpecified(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this, int value)
{
    __this->_SkipNextPartsCountIfThisNotSpecified = value;
}

::uString* PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char__Write(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__char* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value)
{
    return ::app::Uno::Object::ToString(::uBox< ::uChar>(::app::Uno::Char__typeof(), __this->Get(value)));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Time/Text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__uType* PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__typeof()
{
    static ::uStaticStrong<PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__uType*> type;
    if (type != NULL) return type;

    type = (PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__uType*)::uAllocClassType(sizeof(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__uType), "Uno.Time.Text.PatternPart<Uno.Time.Text.OffsetPattern_OffsetBucket,int>", false, 1, 2, 0);

    type->__fp_Write = PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__Write;
    type->__interface_0.__fp_Write = (::uString*(*)(void*, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*))PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__Write;

    type->SetInterfaces(
        ::app::Uno::Time::Text::IPatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__typeof(), offsetof(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__uType, __interface_0));

    type->SetStrongRefs(
        "_Getter", offsetof(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int, _Getter),
        "_Setter", offsetof(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int, _Setter));

    return type;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int___ObjInit(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this)
{
}

int PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__Get(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* bucket)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Getter(), NULL))
    {
        return ::uPtr< ::uDelegate*>(__this->Getter())->Invoke< int, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket*>(bucket);
    }

    return 0;
}

int PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__get_ExpectedSize(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this)
{
    return __this->_ExpectedSize;
}

::uDelegate* PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__get_Getter(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this)
{
    return __this->_Getter;
}

bool PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__get_Obligatory(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this)
{
    return __this->_Obligatory;
}

::uDelegate* PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__get_Setter(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this)
{
    return __this->_Setter;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__set_ExpectedSize(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this, int value)
{
    __this->_ExpectedSize = value;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__set_Getter(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this, ::uDelegate* value)
{
    __this->_Getter = value;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__set_Obligatory(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this, bool value)
{
    __this->_Obligatory = value;
}

void PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__set_Setter(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this, ::uDelegate* value)
{
    __this->_Setter = value;
}

::uString* PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int__Write(PatternPart__Uno_Time_Text_OffsetPattern_OffsetBucket__int* __this, ::app::Uno::Time::Text::OffsetPattern_OffsetBucket* value)
{
    return ::app::Uno::Object::ToString(::uBox< int>(::app::Uno::Int__typeof(), __this->Get(value)));
}

}}}}
