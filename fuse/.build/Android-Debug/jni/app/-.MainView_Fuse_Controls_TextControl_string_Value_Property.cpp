// This file was generated based on '/Users/jangwonhee/Documents/Buddha_2/fuse/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.MainView_Fuse_Controls_TextControl_string_Value_Property.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.UX.ValueChangedHandler__string.h>

namespace app {

MainView_Fuse_Controls_TextControl_string_Value_Property__uType* MainView_Fuse_Controls_TextControl_string_Value_Property__typeof()
{
    static ::uStaticStrong<MainView_Fuse_Controls_TextControl_string_Value_Property__uType*> type;
    if (type != NULL) return type;

    type = (MainView_Fuse_Controls_TextControl_string_Value_Property__uType*)::uAllocClassType(sizeof(MainView_Fuse_Controls_TextControl_string_Value_Property__uType), "MainView.Fuse_Controls_TextControl_string_Value_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__string__typeof());
    type->__fp_OnAddListener = (void(*)(::app::Uno::UX::Property__string*, ::uDelegate*))MainView_Fuse_Controls_TextControl_string_Value_Property__OnAddListener;
    type->__fp_OnGet = (::uString*(*)(::app::Uno::UX::Property__string*))MainView_Fuse_Controls_TextControl_string_Value_Property__OnGet;
    type->__fp_OnRemoveListener = (void(*)(::app::Uno::UX::Property__string*, ::uDelegate*))MainView_Fuse_Controls_TextControl_string_Value_Property__OnRemoveListener;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__string*, ::uString*, ::uObject*))MainView_Fuse_Controls_TextControl_string_Value_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(MainView_Fuse_Controls_TextControl_string_Value_Property, _obj));

    return type;
}

void MainView_Fuse_Controls_TextControl_string_Value_Property___ObjInit_1(MainView_Fuse_Controls_TextControl_string_Value_Property* __this, ::app::Fuse::Controls::TextControl* obj)
{
    ::app::Uno::UX::Property__string___ObjInit(__this);
    __this->_obj = obj;
}

MainView_Fuse_Controls_TextControl_string_Value_Property* MainView_Fuse_Controls_TextControl_string_Value_Property__New_1(::uStatic* __this, ::app::Fuse::Controls::TextControl* obj)
{
    MainView_Fuse_Controls_TextControl_string_Value_Property* inst = (MainView_Fuse_Controls_TextControl_string_Value_Property*)::uAllocObject(sizeof(MainView_Fuse_Controls_TextControl_string_Value_Property), MainView_Fuse_Controls_TextControl_string_Value_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

void MainView_Fuse_Controls_TextControl_string_Value_Property__OnAddListener(MainView_Fuse_Controls_TextControl_string_Value_Property* __this, ::uDelegate* listener)
{
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->_obj)->add_ValueChanged(listener);
}

::uString* MainView_Fuse_Controls_TextControl_string_Value_Property__OnGet(MainView_Fuse_Controls_TextControl_string_Value_Property* __this)
{
    return ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->_obj)->Value();
}

void MainView_Fuse_Controls_TextControl_string_Value_Property__OnRemoveListener(MainView_Fuse_Controls_TextControl_string_Value_Property* __this, ::uDelegate* listener)
{
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->_obj)->remove_ValueChanged(listener);
}

void MainView_Fuse_Controls_TextControl_string_Value_Property__OnSet(MainView_Fuse_Controls_TextControl_string_Value_Property* __this, ::uString* v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Controls::TextControl*>(__this->_obj)->SetValue_1(v, origin);
}

}
