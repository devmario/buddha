// This file was generated based on '/Users/jangwonhee/Documents/Buddha_2/fuse/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.MainView.h>
#include <app/-.MainView_Fuse_Elements_Element_float_Opacity_Property.h>
#include <app/-.MainView_Template1.h>
#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Animations.Change__float.h>
#include <app/Fuse.Animations.TrackAnimator.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Page.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Navigation.ExitingAnimation.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Triggers.Trigger.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.UX.Property__float.h>

namespace app {

MainView_Template1__uType* MainView_Template1__typeof()
{
    static ::uStaticStrong<MainView_Template1__uType*> type;
    if (type != NULL) return type;

    type = (MainView_Template1__uType*)::uAllocClassType(sizeof(MainView_Template1__uType), "MainView.Template1", false, 1, 2, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_Page__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Page*, ::app::Fuse::Controls::Page*))MainView_Template1__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(MainView_Template1__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(MainView_Template1, __parent),
        "self_Opacity_inst", offsetof(MainView_Template1, self_Opacity_inst));

    return type;
}

void MainView_Template1___ObjInit_1(MainView_Template1* __this, ::app::MainView* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_Page___ObjInit(__this);
    __this->__parent = parent;
}

MainView_Template1* MainView_Template1__New_1(::uStatic* __this, ::app::MainView* parent)
{
    MainView_Template1* inst = (MainView_Template1*)::uAllocObject(sizeof(MainView_Template1), MainView_Template1__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void MainView_Template1__OnApply(MainView_Template1* __this, ::app::Fuse::Controls::Page* self)
{
    __this->self_Opacity_inst = ::app::MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(NULL, (::app::Fuse::Elements::Element*)self);
    ::app::Fuse::Navigation::ExitingAnimation* temp = ::app::Fuse::Navigation::ExitingAnimation__New_1(NULL);
    ::app::Fuse::Animations::Change__float* temp1 = ::app::Fuse::Animations::Change__float__New_1(NULL, (::app::Uno::UX::Property__float*)__this->self_Opacity_inst);
    ::app::Uno::Collections::ICollection__Fuse_Animations_Animator::Add(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Navigation::ExitingAnimation*>(temp)->Animators()), (::app::Fuse::Animations::Animator*)temp1);
    ::uPtr< ::app::Fuse::Animations::Change__float*>(temp1)->Value(0.0f);
    temp1->Duration(0.5);
    ::uPtr< ::app::Fuse::Controls::Page*>(self)->AddStyleBehavior((::app::Fuse::Behavior*)temp);
}

}
