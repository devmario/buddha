#include <app/Fuse.Resources.ImageSource.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.ValueChangedArgs__bool.h>
#include <app/Uno.UX.ValueChangedArgs__double.h>
#include <app/Uno.UX.ValueChangedArgs__float.h>
#include <app/Uno.UX.ValueChangedArgs__Fuse_Resources_ImageSource.h>
#include <app/Uno.UX.ValueChangedArgs__string.h>

namespace app {
namespace Uno {
namespace UX {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__bool__uType* ValueChangedArgs__bool__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__bool__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__bool__uType*)::uAllocClassType(sizeof(ValueChangedArgs__bool__uType), "Uno.UX.ValueChangedArgs<bool>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__bool, _Origin));

    return type;
}

void ValueChangedArgs__bool___ObjInit_1(ValueChangedArgs__bool* __this, bool value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__bool__get_Origin(ValueChangedArgs__bool* __this)
{
    return __this->_Origin;
}

bool ValueChangedArgs__bool__get_Value(ValueChangedArgs__bool* __this)
{
    return __this->_Value;
}

void ValueChangedArgs__bool__set_Origin(ValueChangedArgs__bool* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__bool__set_Value(ValueChangedArgs__bool* __this, bool value)
{
    __this->_Value = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__double__uType* ValueChangedArgs__double__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__double__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__double__uType*)::uAllocClassType(sizeof(ValueChangedArgs__double__uType), "Uno.UX.ValueChangedArgs<double>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__double, _Origin));

    return type;
}

void ValueChangedArgs__double___ObjInit_1(ValueChangedArgs__double* __this, double value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__double__get_Origin(ValueChangedArgs__double* __this)
{
    return __this->_Origin;
}

double ValueChangedArgs__double__get_Value(ValueChangedArgs__double* __this)
{
    return __this->_Value;
}

void ValueChangedArgs__double__set_Origin(ValueChangedArgs__double* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__double__set_Value(ValueChangedArgs__double* __this, double value)
{
    __this->_Value = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__float__uType* ValueChangedArgs__float__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__float__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__float__uType*)::uAllocClassType(sizeof(ValueChangedArgs__float__uType), "Uno.UX.ValueChangedArgs<float>", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__float, _Origin));

    return type;
}

void ValueChangedArgs__float___ObjInit_1(ValueChangedArgs__float* __this, float value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__float__get_Origin(ValueChangedArgs__float* __this)
{
    return __this->_Origin;
}

float ValueChangedArgs__float__get_Value(ValueChangedArgs__float* __this)
{
    return __this->_Value;
}

ValueChangedArgs__float* ValueChangedArgs__float__New_2(::uStatic* __this, float value, ::uObject* origin)
{
    ValueChangedArgs__float* inst = (ValueChangedArgs__float*)::uAllocObject(sizeof(ValueChangedArgs__float), ValueChangedArgs__float__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__float__set_Origin(ValueChangedArgs__float* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__float__set_Value(ValueChangedArgs__float* __this, float value)
{
    __this->_Value = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__Fuse_Resources_ImageSource__uType* ValueChangedArgs__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__Fuse_Resources_ImageSource__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__Fuse_Resources_ImageSource__uType*)::uAllocClassType(sizeof(ValueChangedArgs__Fuse_Resources_ImageSource__uType), "Uno.UX.ValueChangedArgs<Fuse.Resources.ImageSource>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__Fuse_Resources_ImageSource, _Origin),
        "_Value", offsetof(ValueChangedArgs__Fuse_Resources_ImageSource, _Value));

    return type;
}

::uObject* ValueChangedArgs__Fuse_Resources_ImageSource__get_Origin(ValueChangedArgs__Fuse_Resources_ImageSource* __this)
{
    return __this->_Origin;
}

::app::Fuse::Resources::ImageSource* ValueChangedArgs__Fuse_Resources_ImageSource__get_Value(ValueChangedArgs__Fuse_Resources_ImageSource* __this)
{
    return __this->_Value;
}

void ValueChangedArgs__Fuse_Resources_ImageSource__set_Origin(ValueChangedArgs__Fuse_Resources_ImageSource* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__Fuse_Resources_ImageSource__set_Value(ValueChangedArgs__Fuse_Resources_ImageSource* __this, ::app::Fuse::Resources::ImageSource* value)
{
    __this->_Value = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/UX/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ValueChangedArgs__string__uType* ValueChangedArgs__string__typeof()
{
    static ::uStaticStrong<ValueChangedArgs__string__uType*> type;
    if (type != NULL) return type;

    type = (ValueChangedArgs__string__uType*)::uAllocClassType(sizeof(ValueChangedArgs__string__uType), "Uno.UX.ValueChangedArgs<string>", false, 0, 2, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    type->SetStrongRefs(
        "_Origin", offsetof(ValueChangedArgs__string, _Origin),
        "_Value", offsetof(ValueChangedArgs__string, _Value));

    return type;
}

void ValueChangedArgs__string___ObjInit_1(ValueChangedArgs__string* __this, ::uString* value, ::uObject* origin)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->Value(value);
    __this->Origin(origin);
}

::uObject* ValueChangedArgs__string__get_Origin(ValueChangedArgs__string* __this)
{
    return __this->_Origin;
}

::uString* ValueChangedArgs__string__get_Value(ValueChangedArgs__string* __this)
{
    return __this->_Value;
}

ValueChangedArgs__string* ValueChangedArgs__string__New_2(::uStatic* __this, ::uString* value, ::uObject* origin)
{
    ValueChangedArgs__string* inst = (ValueChangedArgs__string*)::uAllocObject(sizeof(ValueChangedArgs__string), ValueChangedArgs__string__typeof());
    inst->_ObjInit_1(value, origin);
    return inst;
}

void ValueChangedArgs__string__set_Origin(ValueChangedArgs__string* __this, ::uObject* value)
{
    __this->_Origin = value;
}

void ValueChangedArgs__string__set_Value(ValueChangedArgs__string* __this, ::uString* value)
{
    __this->_Value = value;
}

}}}
