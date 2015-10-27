// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRID_H__
#define __APP_FUSE_CONTROLS_GRID_H__

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
namespace app { namespace Fuse { namespace Layouts { struct GridLayout; } } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Grid__float; } }

namespace app {
namespace Fuse {
namespace Controls {

struct Grid;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Grid__float*> Grid__CellSpacingProperty;

struct Grid__uType : ::app::Fuse::Controls::Panel__uType
{
};

Grid__uType* Grid__typeof();

void Grid___ObjInit_4(Grid* __this);
void Grid___TypeInit_4(::uStatic* __this);
float Grid__get_CellSpacing(Grid* __this);
::uString* Grid__get_ColumnData(Grid* __this);
::uString* Grid__get_Rows(Grid* __this);
Grid* Grid__New_2(::uStatic* __this);
void Grid__OnCellSpacingChanged(::uStatic* __this, Grid* p);
void Grid__set_CellSpacing(Grid* __this, float value);
void Grid__set_ColumnData(Grid* __this, ::uString* value);
void Grid__set_Rows(Grid* __this, ::uString* value);

struct Grid : ::app::Fuse::Controls::Panel
{
    ::uStrong< ::app::Fuse::Layouts::GridLayout*> _gridLayout;

    void _ObjInit_4() { Grid___ObjInit_4(this); }
    float CellSpacing() { return Grid__get_CellSpacing(this); }
    ::uString* ColumnData() { return Grid__get_ColumnData(this); }
    ::uString* Rows() { return Grid__get_Rows(this); }
    void CellSpacing(float value) { Grid__set_CellSpacing(this, value); }
    void ColumnData(::uString* value) { Grid__set_ColumnData(this, value); }
    void Rows(::uString* value) { Grid__set_Rows(this, value); }
};

}}}


#endif
