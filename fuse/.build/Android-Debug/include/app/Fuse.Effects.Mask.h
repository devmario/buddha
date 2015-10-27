// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Effects/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_EFFECTS_MASK_H__
#define __APP_FUSE_EFFECTS_MASK_H__

#include <app/Fuse.Effects.BasicEffect.h>
#include <app/Fuse.Internal.IImageContainerOwner.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct ImageContainer; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {
namespace Effects {

struct Mask;

struct Mask__uType : ::app::Fuse::Effects::BasicEffect__uType
{
    ::app::Fuse::Internal::IImageContainerOwner __interface_0;
};

Mask__uType* Mask__typeof();

void Mask__Fuse_Internal_IImageContainerOwner_OnParamChanged(Mask* __this);
void Mask__Fuse_Internal_IImageContainerOwner_OnSizingChanged(Mask* __this);
void Mask__Fuse_Internal_IImageContainerOwner_OnSourceChanged(Mask* __this);
::app::Uno::Rect Mask__ModifyRenderBounds(Mask* __this, ::app::Uno::Rect inBounds);
void Mask__OnRender(Mask* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect elementRect);

struct Mask : ::app::Fuse::Effects::BasicEffect
{
    ::uStrong< ::app::Fuse::Internal::ImageContainer*> _container;
    int _mode;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> OnRender_VertexData_79857885_7_2_1;
    ::app::Uno::Float4x4 OnRender_LocalTransform_79857885_4_8_2;
    ::app::Uno::Float4x4 OnRender_LocalTransform_79857885_4_8_3;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> OnRender_VertexData_7985ece4_7_2_1;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> OnRender_VertexData_79866143_7_2_1;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_79857885;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_7985ece4;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_79866143;
};

}}}


#endif
