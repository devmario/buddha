// This file was generated based on '/Users/jangwonhee/Documents/Buddha_2/fuse/.cache/GeneratedCode/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___MAIN_VIEW_TEMPLATE1_H__
#define __APP___MAIN_VIEW_TEMPLATE1_H__

#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Template__Fuse_Controls_Page.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct Page; } } }
namespace app { struct MainView; }
namespace app { struct MainView_Fuse_Elements_Element_float_Opacity_Property; }

namespace app {

struct MainView_Template1;

struct MainView_Template1__uType : ::app::Uno::UX::Template__Fuse_Controls_Page__uType
{
};

MainView_Template1__uType* MainView_Template1__typeof();

void MainView_Template1___ObjInit_1(MainView_Template1* __this, ::app::MainView* parent);
MainView_Template1* MainView_Template1__New_1(::uStatic* __this, ::app::MainView* parent);
void MainView_Template1__OnApply(MainView_Template1* __this, ::app::Fuse::Controls::Page* self);

struct MainView_Template1 : ::app::Uno::UX::Template__Fuse_Controls_Page
{
    ::uStrong< ::app::MainView*> __parent;
    ::uStrong< ::app::MainView_Fuse_Elements_Element_float_Opacity_Property*> self_Opacity_inst;

    void _ObjInit_1(::app::MainView* parent) { MainView_Template1___ObjInit_1(this, parent); }
};

}


#endif
