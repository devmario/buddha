// This file was generated based on '/Users/jangwonhee/Documents/Buddha_2/fuse/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___MAIN_VIEW_FUSE_ELEMENTS_ELEMENT_FLOAT_OPACITY_PROPERTY_H__
#define __APP___MAIN_VIEW_FUSE_ELEMENTS_ELEMENT_FLOAT_OPACITY_PROPERTY_H__

#include <app/Uno.UX.Property__float.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Element; } } }

namespace app {

struct MainView_Fuse_Elements_Element_float_Opacity_Property;

struct MainView_Fuse_Elements_Element_float_Opacity_Property__uType : ::app::Uno::UX::Property__float__uType
{
};

MainView_Fuse_Elements_Element_float_Opacity_Property__uType* MainView_Fuse_Elements_Element_float_Opacity_Property__typeof();

void MainView_Fuse_Elements_Element_float_Opacity_Property___ObjInit_1(MainView_Fuse_Elements_Element_float_Opacity_Property* __this, ::app::Fuse::Elements::Element* obj);
MainView_Fuse_Elements_Element_float_Opacity_Property* MainView_Fuse_Elements_Element_float_Opacity_Property__New_1(::uStatic* __this, ::app::Fuse::Elements::Element* obj);
float MainView_Fuse_Elements_Element_float_Opacity_Property__OnGet(MainView_Fuse_Elements_Element_float_Opacity_Property* __this);
void MainView_Fuse_Elements_Element_float_Opacity_Property__OnSet(MainView_Fuse_Elements_Element_float_Opacity_Property* __this, float v, ::uObject* origin);

struct MainView_Fuse_Elements_Element_float_Opacity_Property : ::app::Uno::UX::Property__float
{
    ::uStrong< ::app::Fuse::Elements::Element*> _obj;

    void _ObjInit_1(::app::Fuse::Elements::Element* obj) { MainView_Fuse_Elements_Element_float_Opacity_Property___ObjInit_1(this, obj); }
};

}


#endif
