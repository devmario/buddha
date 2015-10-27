// This file was generated based on '/Users/jangwonhee/Documents/Buddha_2/fuse/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Sourc-ef3dbb07.h>
#include <app/Fuse.Controls.Image.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Uno.Object.h>

namespace app {

MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__uType* MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__typeof()
{
    static ::uStaticStrong<MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__uType*> type;
    if (type != NULL) return type;

    type = (MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__uType*)::uAllocClassType(sizeof(MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__uType), "MainView.Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::UX::Property__Fuse_Resources_ImageSource__typeof());
    type->__fp_OnGet = (::app::Fuse::Resources::ImageSource*(*)(::app::Uno::UX::Property__Fuse_Resources_ImageSource*))MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__OnGet;
    type->__fp_OnSet = (void(*)(::app::Uno::UX::Property__Fuse_Resources_ImageSource*, ::app::Fuse::Resources::ImageSource*, ::uObject*))MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__OnSet;

    type->SetStrongRefs(
        "_obj", offsetof(MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property, _obj));

    return type;
}

void MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property___ObjInit_1(MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property* __this, ::app::Fuse::Controls::Image* obj)
{
    ::app::Uno::UX::Property__Fuse_Resources_ImageSource___ObjInit(__this);
    __this->_obj = obj;
}

MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property* MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__New_1(::uStatic* __this, ::app::Fuse::Controls::Image* obj)
{
    MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property* inst = (MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property*)::uAllocObject(sizeof(MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property), MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__typeof());
    inst->_ObjInit_1(obj);
    return inst;
}

::app::Fuse::Resources::ImageSource* MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__OnGet(MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property* __this)
{
    return ::uPtr< ::app::Fuse::Controls::Image*>(__this->_obj)->Source();
}

void MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property__OnSet(MainView_Fuse_Controls_Image_Fuse_Resources_ImageSource_Source_Property* __this, ::app::Fuse::Resources::ImageSource* v, ::uObject* origin)
{
    ::uPtr< ::app::Fuse::Controls::Image*>(__this->_obj)->Source(v);
}

}
