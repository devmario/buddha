#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.SizeUnit.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.PropertyState.h>
#include <app/Fuse.StyleProperty.h>
#include <app/Fuse.StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_-710aaa9c.h>
#include <app/Fuse.StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse-6f3bbd54.h>
#include <app/Uno.Action__Fuse_Elements_Element.h>
#include <app/Uno.Action__Fuse_Elements_Element__float.h>
#include <app/Uno.Action__Fuse_Elements_Element__float2.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Float.h>
#include <app/Uno.Func__Fuse_Elements_Element__float.h>
#include <app/Uno.Func__Fuse_Elements_Element__float2.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>

namespace app {
namespace Fuse {

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__uType* StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__typeof()
{
    static ::uStaticStrong<StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__uType*> type;
    if (type != NULL) return type;

    type = (StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__uType*)::uAllocClassType(sizeof(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__uType), "Fuse.StylePropertyWithUnit<Fuse.Elements.Element,float,Fuse.Elements.SizeUnit>", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__Fuse_Elements_Element__float__typeof());

    type->SetStrongRefs(
        "_unitHandle", offsetof(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit, _unitHandle));

    return type;
}

void StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit___ObjInit_3(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* __this, float defaultValue, int defaultUnit, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    __this->_unitHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty__Fuse_Elements_Element__float___ObjInit_2(__this, defaultValue, changedCallback, setter, getter);
    __this->_unitId = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultUnit = defaultUnit;
}

void StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit___ObjInit_4(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* __this, float defaultValue, int defaultUnit, ::uDelegate* changedCallback)
{
    __this->_unitHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty__Fuse_Elements_Element__float___ObjInit_2(__this, defaultValue, changedCallback, NULL, NULL);
    __this->_unitId = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultUnit = defaultUnit;
}

int StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__GetUnit(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = (::app::Fuse::Node*)owner;

    if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_unitId) == 0)
    {
        return __this->_defaultUnit;
    }
    else
    {
        ::uObject* res;
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_unitHandle, &res);
        return ::uUnbox< int>(::app::Fuse::Elements::SizeUnit__typeof(), res);
    }
}

StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__New_3(::uStatic* __this, float defaultValue, int defaultUnit, ::uDelegate* changedCallback)
{
    StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* inst = (StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*)::uAllocObject(sizeof(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit), StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__typeof());
    inst->_ObjInit_4(defaultValue, defaultUnit, changedCallback);
    return inst;
}

StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__New_4(::uStatic* __this, float defaultValue, int defaultUnit, ::uDelegate* changedCallback, ::uDelegate* setter, ::uDelegate* getter)
{
    StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* inst = (StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*)::uAllocObject(sizeof(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit), StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__typeof());
    inst->_ObjInit_3(defaultValue, defaultUnit, changedCallback, setter, getter);
    return inst;
}

bool StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__Set_1(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Elements::Element* owner, float value, int unit)
{
    ::app::Fuse::Node* n = (::app::Fuse::Node*)owner;

    if (!::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), unit), ::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), __this->GetUnit(owner))))
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_unitHandle, ::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), unit));
        n->SetPropertyState(__this->_unitId, 2);

        if (!__this->Set(owner, value))
        {
            __this->OnChanged(owner);
        }

        return true;
    }
    else
    {
        return __this->Set(owner, value);
    }
}

bool StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__SetStyle_1(StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Elements::Element* owner, float value, int unit)
{
    if (!__this->HasValue(owner))
    {
        ::app::Fuse::Node* n = (::app::Fuse::Node*)owner;

        if (!::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), unit), ::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), __this->GetUnit(owner))))
        {
            ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_unitHandle, ::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), unit));
            n->SetPropertyState(__this->_unitId, 1);

            if (!__this->SetStyle(owner, value))
            {
                __this->OnChanged(owner);
            }

            return true;
        }
        else
        {
            return __this->SetStyle(owner, value);
        }
    }

    return false;
}

// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__uType* StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__typeof()
{
    static ::uStaticStrong<StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__uType*> type;
    if (type != NULL) return type;

    type = (StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__uType*)::uAllocClassType(sizeof(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__uType), "Fuse.StylePropertyWithUnit<Fuse.Elements.Element,float2,Fuse.Elements.SizeUnit>", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::StyleProperty__Fuse_Elements_Element__float2__typeof());

    type->SetStrongRefs(
        "_unitHandle", offsetof(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit, _unitHandle));

    return type;
}

void StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit___ObjInit_4(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit* __this, ::app::Uno::Float2 defaultValue, int defaultUnit, ::uDelegate* changedCallback)
{
    __this->_unitHandle = ::app::Fuse::Properties__CreateHandle(NULL);
    ::app::Fuse::StyleProperty__Fuse_Elements_Element__float2___ObjInit_2(__this, defaultValue, changedCallback, NULL, NULL);
    __this->_unitId = ::app::Fuse::StyleProperty___propertyEnum++;
    __this->_defaultUnit = defaultUnit;
}

int StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__GetUnit(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Elements::Element* owner)
{
    ::app::Fuse::Node* n = (::app::Fuse::Node*)owner;

    if (::uPtr< ::app::Fuse::Node*>(n)->GetPropertyState(__this->_unitId) == 0)
    {
        return __this->_defaultUnit;
    }
    else
    {
        ::uObject* res;
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->TryGet(__this->_unitHandle, &res);
        return ::uUnbox< int>(::app::Fuse::Elements::SizeUnit__typeof(), res);
    }
}

StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit* StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__New_3(::uStatic* __this, ::app::Uno::Float2 defaultValue, int defaultUnit, ::uDelegate* changedCallback)
{
    StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit* inst = (StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit*)::uAllocObject(sizeof(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit), StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__typeof());
    inst->_ObjInit_4(defaultValue, defaultUnit, changedCallback);
    return inst;
}

bool StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__Set_1(StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Elements::Element* owner, ::app::Uno::Float2 value, int unit)
{
    ::app::Fuse::Node* n = (::app::Fuse::Node*)owner;

    if (!::app::Uno::Object::Equals(::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), unit), ::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), __this->GetUnit(owner))))
    {
        ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Node*>(n)->Properties())->Set(__this->_unitHandle, ::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), unit));
        n->SetPropertyState(__this->_unitId, 2);

        if (!__this->Set(owner, value))
        {
            __this->OnChanged(owner);
        }

        return true;
    }
    else
    {
        return __this->Set(owner, value);
    }
}

}}
