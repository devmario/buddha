// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Primitives/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_PRIMITIVES_RECTANGLE_H__
#define __APP_FUSE_DRAWING_PRIMITIVES_RECTANGLE_H__

#include <app/Uno.Graphics.VertexAttributeInfo.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Internal { struct FloatBuffer; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct Coverage; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct FillCoverage; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct StrokeCoverage; } } } }
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Primitives {

struct Rectangle;

extern ::uStaticStrong< Rectangle*> Rectangle__Singleton;

struct Rectangle__uType : ::uClassType
{
};

Rectangle__uType* Rectangle__typeof();

void Rectangle___ObjInit(Rectangle* __this);
void Rectangle___TypeInit(::uStatic* __this);
::uArray* Rectangle__add(Rectangle* __this, ::uArray* a, ::uArray* b);
void Rectangle__Draw(Rectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Node* node, ::app::Uno::Float2 Size, ::app::Uno::Float4 CornerRadius, ::app::Fuse::Drawing::Brush* brush, ::app::Fuse::Drawing::Primitives::Coverage* cover, ::app::Uno::Float2 extend, ::app::Uno::Float2 position, float smoothness);
void Rectangle__Fill(Rectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Node* node, ::app::Uno::Float2 Size, ::app::Uno::Float4 CornerRadius, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float2 Position, float Smoothness);
void Rectangle__init_DrawCalls(Rectangle* __this);
void Rectangle__InitBuffers(Rectangle* __this);
::uArray* Rectangle__neg(Rectangle* __this, ::uArray* a);
Rectangle* Rectangle__New_1(::uStatic* __this);
void Rectangle__Stroke(Rectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Node* node, ::app::Uno::Float2 Size, ::app::Uno::Float4 CornerRadius, ::app::Fuse::Drawing::Stroke* stroke, ::app::Uno::Float2 Position, float Smoothness);
::uArray* Rectangle__sub(Rectangle* __this, ::uArray* a, ::uArray* b);

struct Rectangle : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Primitives::StrokeCoverage*> _strokeCoverage;
    ::uStrong< ::app::Fuse::Drawing::Primitives::FillCoverage*> _fillCoverage;
    ::app::Uno::Graphics::VertexAttributeInfo _vertexInfo;
    ::app::Uno::Graphics::VertexAttributeInfo _edgeInfo;
    ::uStrong< ::app::Fuse::Drawing::Internal::FloatBuffer*> _bufferDistance;
    ::uStrong< ::uArray*> _uniforms;
    int Draw_BlendSrcRgb_9e58ba5a_11_4_15;
    int Draw_BlendSrcAlpha_9e58ba5a_11_6_16;
    int Draw_BlendDstRgb_9e58ba5a_11_5_17;
    int Draw_BlendDstAlpha_9e58ba5a_11_7_18;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_9e575d3d;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_9e57d19c;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_9e5845fb;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_9e58ba5a;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_a52c9135;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_a52d0594;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_a52d79f3;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_a52dee52;

    void _ObjInit() { Rectangle___ObjInit(this); }
    ::uArray* add(::uArray* a, ::uArray* b) { return Rectangle__add(this, a, b); }
    void Draw(::app::Fuse::DrawContext* dc, ::app::Fuse::Node* node, ::app::Uno::Float2 Size, ::app::Uno::Float4 CornerRadius, ::app::Fuse::Drawing::Brush* brush, ::app::Fuse::Drawing::Primitives::Coverage* cover, ::app::Uno::Float2 extend, ::app::Uno::Float2 position, float smoothness);
    void Fill(::app::Fuse::DrawContext* dc, ::app::Fuse::Node* node, ::app::Uno::Float2 Size, ::app::Uno::Float4 CornerRadius, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float2 Position, float Smoothness);
    void init_DrawCalls() { Rectangle__init_DrawCalls(this); }
    void InitBuffers() { Rectangle__InitBuffers(this); }
    ::uArray* neg(::uArray* a) { return Rectangle__neg(this, a); }
    void Stroke(::app::Fuse::DrawContext* dc, ::app::Fuse::Node* node, ::app::Uno::Float2 Size, ::app::Uno::Float4 CornerRadius, ::app::Fuse::Drawing::Stroke* stroke, ::app::Uno::Float2 Position, float Smoothness);
    ::uArray* sub(::uArray* a, ::uArray* b) { return Rectangle__sub(this, a, b); }
};

}}}}

#include <app/Uno.Float2.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Primitives {

inline void Rectangle::Draw(::app::Fuse::DrawContext* dc, ::app::Fuse::Node* node, ::app::Uno::Float2 Size, ::app::Uno::Float4 CornerRadius, ::app::Fuse::Drawing::Brush* brush, ::app::Fuse::Drawing::Primitives::Coverage* cover, ::app::Uno::Float2 extend, ::app::Uno::Float2 position, float smoothness) { Rectangle__Draw(this, dc, node, Size, CornerRadius, brush, cover, extend, position, smoothness); }
inline void Rectangle::Fill(::app::Fuse::DrawContext* dc, ::app::Fuse::Node* node, ::app::Uno::Float2 Size, ::app::Uno::Float4 CornerRadius, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float2 Position, float Smoothness) { Rectangle__Fill(this, dc, node, Size, CornerRadius, brush, Position, Smoothness); }
inline void Rectangle::Stroke(::app::Fuse::DrawContext* dc, ::app::Fuse::Node* node, ::app::Uno::Float2 Size, ::app::Uno::Float4 CornerRadius, ::app::Fuse::Drawing::Stroke* stroke, ::app::Uno::Float2 Position, float Smoothness) { Rectangle__Stroke(this, dc, node, Size, CornerRadius, stroke, Position, Smoothness); }

}}}}


#endif
