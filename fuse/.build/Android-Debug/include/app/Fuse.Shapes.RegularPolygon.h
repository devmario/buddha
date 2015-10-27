// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Shapes/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SHAPES_REGULAR_POLYGON_H__
#define __APP_FUSE_SHAPES_REGULAR_POLYGON_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Shapes.PathShape.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Shapes {

struct RegularPolygon;

struct RegularPolygon__uType : ::app::Fuse::Shapes::PathShape__uType
{
};

RegularPolygon__uType* RegularPolygon__typeof();

::app::Uno::Float2 RegularPolygon__get_Offset_1(RegularPolygon* __this);
float RegularPolygon__get_Radius(RegularPolygon* __this);
void RegularPolygon__UpdatePath(RegularPolygon* __this);

struct RegularPolygon : ::app::Fuse::Shapes::PathShape
{
    int _sides;
    int _cachedSides;
    float _cachedRadius;

    ::app::Uno::Float2 Offset_1();
    float Radius() { return RegularPolygon__get_Radius(this); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Shapes {

inline ::app::Uno::Float2 RegularPolygon::Offset_1() { return RegularPolygon__get_Offset_1(this); }

}}}


#endif
