// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Shapes/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SHAPES_CIRCLE_H__
#define __APP_FUSE_SHAPES_CIRCLE_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct HitTestContext; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Shapes {

struct Circle;

struct Circle__uType : ::app::Fuse::Shapes::Shape__uType
{
};

Circle__uType* Circle__typeof();

bool Circle__AngleInRange(::uStatic* __this, float angle, float start, float end);
void Circle__DrawFill(Circle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Brush* fill);
void Circle__DrawStroke(Circle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Stroke* stroke);
::app::Uno::Float2 Circle__get_Center(Circle* __this);
float Circle__get_EffectiveEndAngle(Circle* __this);
float Circle__get_Radius(Circle* __this);
float Circle__get_StartAngle(Circle* __this);
bool Circle__get_UseAngle(Circle* __this);
void Circle__OnHitTestLocalVisual(Circle* __this, ::app::Fuse::HitTestContext* htc);
void Circle__set_StartAngle(Circle* __this, float value);

struct Circle : ::app::Fuse::Shapes::Shape
{
    float _startAngle;
    float _endAngle;
    bool _hasAngle;
    float _lengthAngle;
    bool _hasLengthAngle;

    ::app::Uno::Float2 Center();
    float EffectiveEndAngle() { return Circle__get_EffectiveEndAngle(this); }
    float Radius() { return Circle__get_Radius(this); }
    float StartAngle() { return Circle__get_StartAngle(this); }
    bool UseAngle() { return Circle__get_UseAngle(this); }
    void StartAngle(float value) { Circle__set_StartAngle(this, value); }
};

}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Shapes {

inline ::app::Uno::Float2 Circle::Center() { return Circle__get_Center(this); }

}}}


#endif
