#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Fuse.Triggers.WhileValue__bool.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Object.h>
#include <app/Uno.UX.ValueChangedArgs__bool.h>
#include <app/Uno.UX.ValueChangedHandler__bool.h>

namespace app {
namespace Fuse {
namespace Triggers {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WhileValue__bool__uType* WhileValue__bool__typeof()
{
    static ::uStaticStrong<WhileValue__bool__uType*> type;
    if (type != NULL) return type;

    type = (WhileValue__bool__uType*)::uAllocClassType(sizeof(WhileValue__bool__uType), "Fuse.Triggers.WhileValue<bool>", false, 1, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::WhileTrigger__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileValue__bool__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))WhileValue__bool__OnUnrooted;
    type->__interface_0.__fp_get_Value = (bool(*)(void*))WhileValue__bool__get_Value;
    type->__interface_0.__fp_set_Value = (void(*)(void*, bool))WhileValue__bool__set_Value;
    type->__interface_0.__fp_add_ValueChanged = (void(*)(void*, ::uDelegate*))WhileValue__bool__add_ValueChanged;
    type->__interface_0.__fp_remove_ValueChanged = (void(*)(void*, ::uDelegate*))WhileValue__bool__remove_ValueChanged;

    type->SetInterfaces(
        ::app::Fuse::Triggers::IValue__bool__typeof(), offsetof(WhileValue__bool__uType, __interface_0));

    type->SetStrongRefs(
        "_obj", offsetof(WhileValue__bool, _obj),
        "_source", offsetof(WhileValue__bool, _source),
        "ValueChanged", offsetof(WhileValue__bool, ValueChanged));

    return type;
}

void WhileValue__bool___ObjInit_3(WhileValue__bool* __this)
{
    ::app::Fuse::Triggers::WhileTrigger___ObjInit_2(__this);
}

void WhileValue__bool__add_ValueChanged(WhileValue__bool* __this, ::uDelegate* value)
{
    __this->ValueChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ValueChanged, (::uDelegate*)value), ::app::Uno::UX::ValueChangedHandler__bool__typeof());
}

::uObject* WhileValue__bool__FindValueNode(::uStatic* __this, ::app::Fuse::Node* n)
{
    if (::uIs(n, ::app::Fuse::Triggers::IValue__bool__typeof()))
    {
        return (::uObject*)n;
    }

    if (::uPtr< ::app::Fuse::Node*>(n)->Parent() != NULL)
    {
        return WhileValue__bool__FindValueNode(NULL, ::uPtr< ::app::Fuse::Node*>(n)->Parent());
    }

    return NULL;
}

bool WhileValue__bool__get_Value(WhileValue__bool* __this)
{
    if (__this->_hasValue)
    {
        return __this->_value;
    }

    if (__this->_obj != NULL)
    {
        return ::app::Fuse::Triggers::IValue__bool::Value(::uPtr< ::uObject*>(__this->_obj));
    }

    return __this->_value;
}

void WhileValue__bool__OnRooted(WhileValue__bool* __this, ::app::Fuse::Node* elm)
{
    ::uObject* ind_123;
    ::app::Fuse::Triggers::Trigger__OnRooted(__this, elm);
    __this->_obj = (ind_123 = __this->_source, (ind_123 != NULL) ? ind_123 : WhileValue__bool__FindValueNode(NULL, elm));

    if (__this->_obj != NULL)
    {
        ::app::Fuse::Triggers::IValue__bool::add_ValueChanged(::uPtr< ::uObject*>(__this->_obj), ::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__bool__typeof(), (const void*)WhileValue__bool__OnValueChanged, __this));
    }

    __this->BypassSetActive(__this->IsOn());
}

void WhileValue__bool__OnUnrooted(WhileValue__bool* __this, ::app::Fuse::Node* elm)
{
    if (__this->_obj != NULL)
    {
        ::app::Fuse::Triggers::IValue__bool::remove_ValueChanged(::uPtr< ::uObject*>(__this->_obj), ::uNewDelegateNonVirt(::app::Uno::UX::ValueChangedHandler__bool__typeof(), (const void*)WhileValue__bool__OnValueChanged, __this));
        __this->_obj = NULL;
    }

    ::app::Fuse::Triggers::Trigger__OnUnrooted(__this, elm);
}

void WhileValue__bool__OnValueChanged(WhileValue__bool* __this, ::uObject* s, ::app::Uno::UX::ValueChangedArgs__bool* a)
{
    __this->SetActive(__this->IsOn());

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ValueChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ValueChanged)->InvokeVoid< ::uObject*, ::app::Uno::UX::ValueChangedArgs__bool*>((::uObject*)__this, a);
    }
}

void WhileValue__bool__Pulse_1(WhileValue__bool* __this)
{
    if (__this->IsOn() != __this->Invert())
    {
        ::app::Fuse::Triggers::Trigger__InversePulse(__this);
    }
    else
    {
        ::app::Fuse::Triggers::Trigger__Pulse(__this);
    }
}

void WhileValue__bool__remove_ValueChanged(WhileValue__bool* __this, ::uDelegate* value)
{
    __this->ValueChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ValueChanged, (::uDelegate*)value), ::app::Uno::UX::ValueChangedHandler__bool__typeof());
}

void WhileValue__bool__set_Value(WhileValue__bool* __this, bool value)
{
    if (!__this->_hasValue || !::app::Uno::Object__Equals_1(NULL, ::uBox(::app::Uno::Bool__typeof(), __this->_value), ::uBox(::app::Uno::Bool__typeof(), value)))
    {
        __this->_hasValue = true;
        __this->_value = value;

        if (__this->Node() != NULL)
        {
            __this->SetActive(__this->IsOn());
        }
    }
}

}}}
