#include <app/Fuse.Internal.Blender__float.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Actions.Set__float.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Float.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.Expression__float.h>
#include <app/Uno.UX.Property__float.h>

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Set__float__uType* Set__float__typeof()
{
    static ::uStaticStrong<Set__float__uType*> type;
    if (type != NULL) return type;

    type = (Set__float__uType*)::uAllocClassType(sizeof(Set__float__uType), "Fuse.Triggers.Actions.Set<float>", false, 0, 3, 0);

    type->SetBaseType(::app::Fuse::Triggers::Actions::TriggerAction__typeof());
    type->__fp_Perform = (void(*)(::app::Fuse::Triggers::Actions::TriggerAction*, ::app::Fuse::Node*))Set__float__Perform;

    type->SetStrongRefs(
        "_blender", offsetof(Set__float, _blender),
        "_Expression", offsetof(Set__float, _Expression),
        "_Target", offsetof(Set__float, _Target));

    return type;
}

void Set__float___ObjInit_1(Set__float* __this, ::app::Uno::UX::Property__float* target)
{
    __this->_updateRestValue = true;
    ::app::Fuse::Triggers::Actions::TriggerAction___ObjInit(__this);

    if (target == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("target")));
    }

    __this->Target(target);
}

::uDelegate* Set__float__get_Expression(Set__float* __this)
{
    return __this->_Expression;
}

::app::Uno::UX::Property__float* Set__float__get_Target(Set__float* __this)
{
    return __this->_Target;
}

float Set__float__get_Value(Set__float* __this)
{
    return __this->_Value;
}

Set__float* Set__float__New_1(::uStatic* __this, ::app::Uno::UX::Property__float* target)
{
    Set__float* inst = (Set__float*)::uAllocObject(sizeof(Set__float), Set__float__typeof());
    inst->_ObjInit_1(target);
    return inst;
}

void Set__float__Perform(Set__float* __this, ::app::Fuse::Node* target)
{
    if (__this->_hasIncrement)
    {
        __this->Update(::uPtr< ::app::Fuse::Internal::Blender__float*>(__this->_blender)->Add(::uPtr< ::app::Uno::UX::Property__float*>(__this->Target())->Get(), __this->_increment));
    }
    else if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Expression(), NULL))
    {
        __this->Update(::uPtr< ::uDelegate*>(__this->Expression())->Invoke< float>());
    }
    else
    {
        __this->Update(__this->Value());
    }
}

void Set__float__set_Expression(Set__float* __this, ::uDelegate* value)
{
    __this->_Expression = value;
}

void Set__float__set_Target(Set__float* __this, ::app::Uno::UX::Property__float* value)
{
    __this->_Target = value;
}

void Set__float__set_Value(Set__float* __this, float value)
{
    __this->_Value = value;
}

void Set__float__Update(Set__float* __this, float value)
{
    if (__this->_updateRestValue)
    {
        ::uPtr< ::app::Uno::UX::Property__float*>(__this->Target())->SetRestState(value, (::uObject*)__this);
    }
    else
    {
        ::uPtr< ::app::Uno::UX::Property__float*>(__this->Target())->Set(value, (::uObject*)__this);
    }
}

}}}}
