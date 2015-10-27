// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_REGULAR_POLYGON_H__
#define __APP_FUSE_CONTROLS_REGULAR_POLYGON_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Shape.h>
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

struct RegularPolygon;

struct RegularPolygon__uType : ::app::Fuse::Controls::Shape__uType
{
};

RegularPolygon__uType* RegularPolygon__typeof();

int RegularPolygon__get_Sides(RegularPolygon* __this);
void RegularPolygon__set_Sides(RegularPolygon* __this, int value);

struct RegularPolygon : ::app::Fuse::Controls::Shape
{
    int _sides;

    int Sides() { return RegularPolygon__get_Sides(this); }
    void Sides(int value) { RegularPolygon__set_Sides(this, value); }
};

}}}


#endif
