// This file was generated based on '/Users/jangwonhee/Documents/Buddha_2/fuse/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <app/-.MainView.h>
#include <app/-.MainView_Template.h>
#include <app/Fuse.Controls.Text.h>
#include <app/Fuse.Controls.TextControl.h>
#include <app/Fuse.Font.h>
#include <app/Fuse.StyleProperty__Fuse_Controls_TextControl__Fuse_Font.h>
#include <app/Uno.Bool.h>
#include <app/Uno.BundleFile.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.UX.BundleFileSource.h>
#include <app/Uno.UX.FileSource.h>

namespace app {

MainView_Template__uType* MainView_Template__typeof()
{
    static ::uStaticStrong<MainView_Template__uType*> type;
    if (type != NULL) return type;

    type = (MainView_Template__uType*)::uAllocClassType(sizeof(MainView_Template__uType), "MainView.Template", false, 1, 1, 0);

    type->SetBaseType(::app::Uno::UX::Template__Fuse_Controls_Text__typeof());
    type->__fp_OnApply = (void(*)(::app::Uno::UX::Template__Fuse_Controls_Text*, ::app::Fuse::Controls::Text*))MainView_Template__OnApply;

    type->SetInterfaces(
        ::app::Uno::UX::ITemplate__typeof(), offsetof(MainView_Template__uType, __interface_0));

    type->SetStrongRefs(
        "__parent", offsetof(MainView_Template, __parent));

    return type;
}

void MainView_Template___ObjInit_1(MainView_Template* __this, ::app::MainView* parent)
{
    ::app::Uno::UX::Template__Fuse_Controls_Text___ObjInit(__this);
    __this->__parent = parent;
}

MainView_Template* MainView_Template__New_1(::uStatic* __this, ::app::MainView* parent)
{
    MainView_Template* inst = (MainView_Template*)::uAllocObject(sizeof(MainView_Template), MainView_Template__typeof());
    inst->_ObjInit_1(parent);
    return inst;
}

void MainView_Template__OnApply(MainView_Template* __this, ::app::Fuse::Controls::Text* self)
{
    ::app::Fuse::Font* temp = ::app::Fuse::Font__New_1(NULL, (::app::Uno::UX::FileSource*)::app::Uno::UX::BundleFileSource__New_1(NULL, ::uCast< ::app::Uno::BundleFile*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 0), ::app::Uno::BundleFile__typeof())));
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Controls_TextControl__Fuse_Font*>(::app::Fuse::Controls::TextControl__FontProperty)->SetStyle((::app::Fuse::Controls::TextControl*)self, temp);
}

}
