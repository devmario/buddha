// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/Brushes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_GRADIENT_STOP_H__
#define __APP_FUSE_DRAWING_GRADIENT_STOP_H__

#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Drawing {

struct GradientStop;

struct GradientStop__uType : ::uClassType
{
};

GradientStop__uType* GradientStop__typeof();

::app::Uno::Float4 GradientStop__get_Color(GradientStop* __this);
float GradientStop__get_Offset(GradientStop* __this);
void GradientStop__OnChanged(GradientStop* __this);
void GradientStop__set_Color(GradientStop* __this, ::app::Uno::Float4 value);
void GradientStop__set_Offset(GradientStop* __this, float value);

struct GradientStop : ::uObject
{
    float _offset;
    ::app::Uno::Float4 _color;
    ::uStrong< ::uDelegate*> Changed;

    ::app::Uno::Float4 Color() { return GradientStop__get_Color(this); }
    float Offset() { return GradientStop__get_Offset(this); }
    void OnChanged() { GradientStop__OnChanged(this); }
    void Color(::app::Uno::Float4 value) { GradientStop__set_Color(this, value); }
    void Offset(float value) { GradientStop__set_Offset(this, value); }
};

}}}


#endif
