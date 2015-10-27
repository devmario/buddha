// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/Brushes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_LINEAR_GRADIENT_H__
#define __APP_FUSE_DRAWING_LINEAR_GRADIENT_H__

#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct GradientStop; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }

namespace app {
namespace Fuse {
namespace Drawing {

struct LinearGradient;

extern int LinearGradient___gradientSize;

struct LinearGradient__uType : ::app::Fuse::Drawing::DynamicBrush__uType
{
};

LinearGradient__uType* LinearGradient__typeof();

void LinearGradient___TypeInit(::uStatic* __this);
float LinearGradient__get_Angle(LinearGradient* __this);
::app::Uno::Float2 LinearGradient__get_EndPoint(LinearGradient* __this);
bool LinearGradient__get_HasAngle(LinearGradient* __this);
::uArray* LinearGradient__get_SortedStops(LinearGradient* __this);
::app::Uno::Float2 LinearGradient__get_StartPoint(LinearGradient* __this);
void LinearGradient__OnPrepare(LinearGradient* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize);
void LinearGradient__OnUnpinned(LinearGradient* __this);
void LinearGradient__set_Angle(LinearGradient* __this, float value);
void LinearGradient__set_EndPoint(LinearGradient* __this, ::app::Uno::Float2 value);
void LinearGradient__set_StartPoint(LinearGradient* __this, ::app::Uno::Float2 value);

struct LinearGradient : ::app::Fuse::Drawing::DynamicBrush
{
    ::uStrong< ::uArray*> _sortedStops;
    ::app::Uno::Float2 _startPoint;
    ::app::Uno::Float2 _endPoint;
    float _angle;
    bool _hasAngle;
    ::uStrong< ::app::Uno::Graphics::Framebuffer*> _gradientBuffer;
    ::app::Uno::Float2 _gradientStart;

    float Angle() { return LinearGradient__get_Angle(this); }
    ::app::Uno::Float2 EndPoint() { return LinearGradient__get_EndPoint(this); }
    bool HasAngle() { return LinearGradient__get_HasAngle(this); }
    ::uArray* SortedStops() { return LinearGradient__get_SortedStops(this); }
    ::app::Uno::Float2 StartPoint() { return LinearGradient__get_StartPoint(this); }
    void Angle(float value) { LinearGradient__set_Angle(this, value); }
    void EndPoint(::app::Uno::Float2 value) { LinearGradient__set_EndPoint(this, value); }
    void StartPoint(::app::Uno::Float2 value) { LinearGradient__set_StartPoint(this, value); }
};

}}}


#endif
