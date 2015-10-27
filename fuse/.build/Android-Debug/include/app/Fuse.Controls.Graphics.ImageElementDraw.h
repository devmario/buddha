// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_GRAPHICS_IMAGE_ELEMENT_DRAW_H__
#define __APP_FUSE_CONTROLS_GRAPHICS_IMAGE_ELEMENT_DRAW_H__

#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

struct ImageElementDraw;

extern ::uStaticStrong< ImageElementDraw*> ImageElementDraw__Impl;

struct ImageElementDraw__uType : ::uClassType
{
};

ImageElementDraw__uType* ImageElementDraw__typeof();

void ImageElementDraw___ObjInit(ImageElementDraw* __this);
void ImageElementDraw___TypeInit(::uStatic* __this);
void ImageElementDraw__Draw(ImageElementDraw* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Node* element, ::app::Uno::Float2 offset, ::app::Uno::Float2 size, ::app::Uno::Float2 uvPosition, ::app::Uno::Float2 uvSize, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float4 Color);
void ImageElementDraw__init_DrawCalls(ImageElementDraw* __this);
ImageElementDraw* ImageElementDraw__New_1(::uStatic* __this);

struct ImageElementDraw : ::uObject
{
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Draw_VertexData_62917c96_7_2_1;
    ::app::Uno::Float4x4 Draw_LocalTransform_62917c96_4_8_2;
    ::app::Uno::Float4x4 Draw_LocalTransform_62917c96_4_8_3;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_62917c96;

    void _ObjInit() { ImageElementDraw___ObjInit(this); }
    void Draw(::app::Fuse::DrawContext* dc, ::app::Fuse::Node* element, ::app::Uno::Float2 offset, ::app::Uno::Float2 size, ::app::Uno::Float2 uvPosition, ::app::Uno::Float2 uvSize, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float4 Color);
    void init_DrawCalls() { ImageElementDraw__init_DrawCalls(this); }
};

}}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Controls {
namespace Graphics {

inline void ImageElementDraw::Draw(::app::Fuse::DrawContext* dc, ::app::Fuse::Node* element, ::app::Uno::Float2 offset, ::app::Uno::Float2 size, ::app::Uno::Float2 uvPosition, ::app::Uno::Float2 uvSize, ::app::Uno::Graphics::Texture2D* tex, ::app::Uno::Float4 Color) { ImageElementDraw__Draw(this, dc, element, offset, size, uvPosition, uvSize, tex, Color); }

}}}}


#endif
