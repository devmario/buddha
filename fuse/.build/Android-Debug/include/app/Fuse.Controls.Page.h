// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_PAGE_H__
#define __APP_FUSE_CONTROLS_PAGE_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Controls {

struct Page;

struct Page__uType : ::app::Fuse::Controls::Panel__uType
{
};

Page__uType* Page__typeof();

void Page___ObjInit_4(Page* __this);
Page* Page__New_2(::uStatic* __this);

struct Page : ::app::Fuse::Controls::Panel
{
    void _ObjInit_4() { Page___ObjInit_4(this); }
};

}}}


#endif
