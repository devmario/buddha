// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_DRAWING_SOLID_RECTANGLE_H__
#define __APP_FUSE_INTERNAL_DRAWING_SOLID_RECTANGLE_H__

#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }

namespace app {
namespace Fuse {
namespace Internal {
namespace Drawing {

struct SolidRectangle;

extern ::uStaticStrong< SolidRectangle*> SolidRectangle__Impl;

struct SolidRectangle__uType : ::uClassType
{
};

SolidRectangle__uType* SolidRectangle__typeof();

void SolidRectangle___ObjInit(SolidRectangle* __this);
void SolidRectangle___TypeInit(::uStatic* __this);
void SolidRectangle__DrawElement(SolidRectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* element, ::app::Fuse::Drawing::Brush* brush, float opacity);
void SolidRectangle__init_DrawCalls(SolidRectangle* __this);
SolidRectangle* SolidRectangle__New_1(::uStatic* __this);

struct SolidRectangle : ::uObject
{
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_66c7544_7_2_1;
    ::app::Uno::Float4x4 DrawElement_LocalTransform_66c7544_4_8_2;
    ::app::Uno::Float4x4 DrawElement_LocalTransform_66c7544_4_8_3;
    ::app::Uno::Float4x4 DrawElement_LocalTransform_66c7544_4_8_4;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_66ce9a3_7_2_1;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_66d5e02_7_2_1;
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_66dd261_7_2_1;
    int DrawElement_BlendSrcRgb_66dd261_11_4_10;
    int DrawElement_BlendSrcAlpha_66dd261_11_6_11;
    int DrawElement_BlendDstRgb_66dd261_11_5_12;
    int DrawElement_BlendDstAlpha_66dd261_11_7_13;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_66c7544;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_66ce9a3;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_66d5e02;

    void _ObjInit() { SolidRectangle___ObjInit(this); }
    void DrawElement(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* element, ::app::Fuse::Drawing::Brush* brush, float opacity) { SolidRectangle__DrawElement(this, dc, element, brush, opacity); }
    void init_DrawCalls() { SolidRectangle__init_DrawCalls(this); }
};

}}}}


#endif
