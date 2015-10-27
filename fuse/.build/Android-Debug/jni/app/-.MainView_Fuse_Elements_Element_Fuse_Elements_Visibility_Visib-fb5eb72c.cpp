// This file was generated based on '/Users/jangwonhee/Documents/Buddha_2/fuse/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visib-fb5eb72c.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.Visibility.h>
#include <app/Uno.Object.h>

namespace app {

MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__uType* MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__typeof()
{
    static ::uStaticStrong<MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__uType*> type;
    if (type != NULL) return type;

    type = (MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__uType*)::uAllocClassType(sizeof(MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__uType), "MainView.Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Elements_Visibility__typeof());
    type->__fp_OnGet = (int(*)(::app::Uno::UX::Property__Fuse_Elements_Visibility*))MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Elements_Visibility*, int, ::uObject*))MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property, _obj));

    return type;
}

void MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property___ObjInit_1(MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property* __this, ::app::Fuse::Elements::Element* obj)
{
    ::app::Uno::UX::Property__Fuse_Elements_Visibility___ObjInit(__this);
    __this->_obj = obj;
}

MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property* MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__New_1(::uStatic* __this, ::app::Fuse::Elements::Element* obj)
{
    MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property* inst = (MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property*)::uAllocObject(sizeof(MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property), MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

int MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__OnGet(MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property* __this)
{
    return ::uPtr< ::app::Fuse::Elements::Element*>(__this->_obj)->Visibility();
}

void MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property__OnSet(MainView_Fuse_Elements_Element_Fuse_Elements_Visibility_Visibility_Property* __this, int v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Elements::Element*>(__this->_obj)->Visibility(v);
}

}
