// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Effects/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_EFFECTS_EFFECT_HELPERS_H__
#define __APP_FUSE_EFFECTS_EFFECT_HELPERS_H__

#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct IndexBuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Effects {

struct EffectHelpers;

struct EffectHelpers__uType : ::uClassType
{
};

EffectHelpers__uType* EffectHelpers__typeof();

void EffectHelpers___ObjInit(EffectHelpers* __this);
::app::Uno::Graphics::Framebuffer* EffectHelpers__Blur(EffectHelpers* __this, ::app::Uno::Graphics::Texture2D* original, ::app::Fuse::DrawContext* dc, float sigma);
::app::Uno::Graphics::Framebuffer* EffectHelpers__BlurHorizontal(EffectHelpers* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Int2 size, ::app::Uno::Graphics::Texture2D* tex, float sigma, int samples);
::app::Uno::Graphics::Framebuffer* EffectHelpers__BlurVertical(EffectHelpers* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Int2 size, ::app::Uno::Graphics::Texture2D* tex, float sigma, int samples);
void EffectHelpers__GaussianBlurSeparable(EffectHelpers* __this, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float2 dir, float sigma, int samples);
void EffectHelpers__init_DrawCalls(EffectHelpers* __this);
EffectHelpers* EffectHelpers__New_1(::uStatic* __this);
::app::Uno::Graphics::Framebuffer* EffectHelpers__ResampleGaussian5tap(EffectHelpers* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Int2 size);

struct EffectHelpers : ::uObject
{
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> ResampleBilinear_VertexData_d6145401_2_5_2;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> ResampleBilinear_VertexData_d6145401_2_5_3;
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> ResampleGaussian5tap_VertexData_65bcd644_2_5_2;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> ResampleGaussian5tap_VertexData_65bcd644_2_5_3;
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> ResampleGaussian9tap_VertexData_3ba56f48_2_5_2;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> ResampleGaussian9tap_VertexData_3ba56f48_2_5_3;
    ::uStrong< ::app::Uno::Graphics::IndexBuffer*> GaussianBlurSeparable_VertexData_7fdf2489_2_5_2;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> GaussianBlurSeparable_VertexData_7fdf2489_2_5_3;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_d6145401;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_65bcd644;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_3ba56f48;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_7fdf2489;

    void _ObjInit() { EffectHelpers___ObjInit(this); }
    ::app::Uno::Graphics::Framebuffer* Blur(::app::Uno::Graphics::Texture2D* original, ::app::Fuse::DrawContext* dc, float sigma) { return EffectHelpers__Blur(this, original, dc, sigma); }
    ::app::Uno::Graphics::Framebuffer* BlurHorizontal(::app::Fuse::DrawContext* dc, ::app::Uno::Int2 size, ::app::Uno::Graphics::Texture2D* tex, float sigma, int samples);
    ::app::Uno::Graphics::Framebuffer* BlurVertical(::app::Fuse::DrawContext* dc, ::app::Uno::Int2 size, ::app::Uno::Graphics::Texture2D* tex, float sigma, int samples);
    void GaussianBlurSeparable(::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float2 dir, float sigma, int samples);
    void init_DrawCalls() { EffectHelpers__init_DrawCalls(this); }
    ::app::Uno::Graphics::Framebuffer* ResampleGaussian5tap(::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Int2 size);
};

}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Int2.h>

namespace app {
namespace Fuse {
namespace Effects {

inline ::app::Uno::Graphics::Framebuffer* EffectHelpers::BlurHorizontal(::app::Fuse::DrawContext* dc, ::app::Uno::Int2 size, ::app::Uno::Graphics::Texture2D* tex, float sigma, int samples) { return EffectHelpers__BlurHorizontal(this, dc, size, tex, sigma, samples); }
inline ::app::Uno::Graphics::Framebuffer* EffectHelpers::BlurVertical(::app::Fuse::DrawContext* dc, ::app::Uno::Int2 size, ::app::Uno::Graphics::Texture2D* tex, float sigma, int samples) { return EffectHelpers__BlurVertical(this, dc, size, tex, sigma, samples); }
inline void EffectHelpers::GaussianBlurSeparable(::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float2 dir, float sigma, int samples) { EffectHelpers__GaussianBlurSeparable(this, tex, dir, sigma, samples); }
inline ::app::Uno::Graphics::Framebuffer* EffectHelpers::ResampleGaussian5tap(::app::Fuse::DrawContext* dc, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Int2 size) { return EffectHelpers__ResampleGaussian5tap(this, dc, tex, size); }

}}}


#endif
