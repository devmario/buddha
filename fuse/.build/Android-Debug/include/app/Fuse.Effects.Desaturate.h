// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Effects/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_EFFECTS_DESATURATE_H__
#define __APP_FUSE_EFFECTS_DESATURATE_H__

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

struct Desaturate;

struct Desaturate__uType : ::app::Fuse::Effects::BasicEffect__uType
{
};

Desaturate__uType* Desaturate__typeof();

float Desaturate__get_Amount(Desaturate* __this);
void Desaturate__OnRender(Desaturate* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect elementRect);
void Desaturate__set_Amount(Desaturate* __this, float value);

struct Desaturate : ::app::Fuse::Effects::BasicEffect
{
    float _amount;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> OnRender_VertexData_16161609_7_2_1;
    ::app::Uno::Float4x4 OnRender_LocalTransform_16161609_4_8_2;
    ::app::Uno::Float4x4 OnRender_LocalTransform_16161609_4_8_3;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_16161609;

    float Amount() { return Desaturate__get_Amount(this); }
    void Amount(float value) { Desaturate__set_Amount(this, value); }
};

}}}


#endif
