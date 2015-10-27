// This file was generated based on '/Users/jangwonhee/Documents/Buddha_2/fuse/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___MAIN_VIEW_FUSE_CONTROLS_TEXT_CONTROL_STRING_VALUE_PROPERTY_H__
#define __APP___MAIN_VIEW_FUSE_CONTROLS_TEXT_CONTROL_STRING_VALUE_PROPERTY_H__

#include <app/Uno.UX.Property__string.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct TextControl; } } }

namespace app {

struct MainView_Fuse_Controls_TextControl_string_Value_Property;

struct MainView_Fuse_Controls_TextControl_string_Value_Property__uType : ::app::Uno::UX::Property__string__uType
{
};

MainView_Fuse_Controls_TextControl_string_Value_Property__uType* MainView_Fuse_Controls_TextControl_string_Value_Property__typeof();

void MainView_Fuse_Controls_TextControl_string_Value_Property___ObjInit_1(MainView_Fuse_Controls_TextControl_string_Value_Property* __this, ::app::Fuse::Controls::TextControl* obj);
MainView_Fuse_Controls_TextControl_string_Value_Property* MainView_Fuse_Controls_TextControl_string_Value_Property__New_1(::uStatic* __this, ::app::Fuse::Controls::TextControl* obj);
void MainView_Fuse_Controls_TextControl_string_Value_Property__OnAddListener(MainView_Fuse_Controls_TextControl_string_Value_Property* __this, ::uDelegate* listener);
::uString* MainView_Fuse_Controls_TextControl_string_Value_Property__OnGet(MainView_Fuse_Controls_TextControl_string_Value_Property* __this);
void MainView_Fuse_Controls_TextControl_string_Value_Property__OnRemoveListener(MainView_Fuse_Controls_TextControl_string_Value_Property* __this, ::uDelegate* listener);
void MainView_Fuse_Controls_TextControl_string_Value_Property__OnSet(MainView_Fuse_Controls_TextControl_string_Value_Property* __this, ::uString* v, ::uObject* origin);

struct MainView_Fuse_Controls_TextControl_string_Value_Property : ::app::Uno::UX::Property__string
{
    ::uStrong< ::app::Fuse::Controls::TextControl*> _obj;

    void _ObjInit_1(::app::Fuse::Controls::TextControl* obj) { MainView_Fuse_Controls_TextControl_string_Value_Property___ObjInit_1(this, obj); }
};

}


#endif
