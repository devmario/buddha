// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Effects/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_EFFECTS_HALFTONE_H__
#define __APP_FUSE_EFFECTS_HALFTONE_H__

#include <app/Fuse.Effects.BasicEffect.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Effects {

struct Halftone;

struct Halftone__uType : ::app::Fuse::Effects::BasicEffect__uType
{
};

Halftone__uType* Halftone__typeof();

float Halftone__get_DotTint(Halftone* __this);
float Halftone__get_Intensity(Halftone* __this);
float Halftone__get_PaperTint(Halftone* __this);
float Halftone__get_Smoothness(Halftone* __this);
float Halftone__get_Spacing(Halftone* __this);
void Halftone__OnRender(Halftone* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect elementRect);
void Halftone__set_DotTint(Halftone* __this, float value);
void Halftone__set_Intensity(Halftone* __this, float value);
void Halftone__set_PaperTint(Halftone* __this, float value);
void Halftone__set_Smoothness(Halftone* __this, float value);
void Halftone__set_Spacing(Halftone* __this, float value);

struct Halftone : ::app::Fuse::Effects::BasicEffect
{
    float _spacing;
    float _intensity;
    float _smoothness;
    float _dotTint;
    float _paperTint;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> OnRender_VertexData_57b2c97e_7_2_1;
    ::app::Uno::Float4x4 OnRender_LocalTransform_57b2c97e_4_8_2;
    ::app::Uno::Float4x4 OnRender_LocalTransform_57b2c97e_4_8_3;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_57b2c97e;

    float DotTint() { return Halftone__get_DotTint(this); }
    float Intensity() { return Halftone__get_Intensity(this); }
    float PaperTint() { return Halftone__get_PaperTint(this); }
    float Smoothness() { return Halftone__get_Smoothness(this); }
    float Spacing() { return Halftone__get_Spacing(this); }
    void DotTint(float value) { Halftone__set_DotTint(this, value); }
    void Intensity(float value) { Halftone__set_Intensity(this, value); }
    void PaperTint(float value) { Halftone__set_PaperTint(this, value); }
    void Smoothness(float value) { Halftone__set_Smoothness(this, value); }
    void Spacing(float value) { Halftone__set_Spacing(this, value); }
};

}}}


#endif
