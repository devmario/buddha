// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Primitives/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_PRIMITIVES_CIRCLE_H__
#define __APP_FUSE_DRAWING_PRIMITIVES_CIRCLE_H__

#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { namespace Internal { struct Float2Buffer; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Internal { struct UShortBuffer; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct Coverage; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct FillCoverage; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct LimitCoverage; } } } }
namespace app { namespace Fuse { namespace Drawing { namespace Primitives { struct StrokeCoverage; } } } }
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }
namespace app { namespace Fuse { namespace Elements { struct Element; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {
namespace Primitives {

struct Circle;

extern ::uStaticStrong< Circle*> Circle__Singleton;

struct Circle__uType : ::uClassType
{
};

Circle__uType* Circle__typeof();

void Circle___ObjInit(Circle* __this);
void Circle___TypeInit(::uStatic* __this);
void Circle__Draw(Circle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Brush* brush, ::app::Fuse::Drawing::Primitives::Coverage* cover, ::app::Fuse::Drawing::Primitives::LimitCoverage* limit, ::app::Uno::Float2 extend, ::app::Uno::Float2 center, float smoothness);
void Circle__Fill(Circle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float2 center, float smoothness);
void Circle__init_DrawCalls(Circle* __this);
void Circle__InitBuffers(Circle* __this);
Circle* Circle__New_1(::uStatic* __this);
void Circle__Stroke(Circle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Stroke* stroke, ::app::Uno::Float2 center, float smoothness);

struct Circle : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Primitives::LimitCoverage*> _oneLimitCoverage;
    ::uStrong< ::app::Fuse::Drawing::Primitives::StrokeCoverage*> _strokeCoverage;
    ::uStrong< ::app::Fuse::Drawing::Primitives::FillCoverage*> _fillCoverage;
    ::uStrong< ::app::Fuse::Drawing::Internal::Float2Buffer*> _bufferVertex;
    ::uStrong< ::app::Fuse::Drawing::Internal::UShortBuffer*> _bufferIndex;
    int Draw_BlendSrcRgb_79559021_11_4_22;
    int Draw_BlendSrcAlpha_79559021_11_6_23;
    int Draw_BlendDstRgb_79559021_11_5_24;
    int Draw_BlendDstAlpha_79559021_11_7_25;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_758125db;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_75819a3a;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_75820e99;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_7aa10cd5;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_7aa18134;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_7aa1f593;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_7fc0f3cf;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_77d9da69;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_77da4ec8;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_79559021;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_79560480;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_795678df;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_c4bd2c3a;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_c4bda099;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_c4be14f8;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_63713b1a;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_6371af79;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_637bafa3;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_5911b21a;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_59122679;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_59129ad8;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_f7c5c0fa;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_f7c63559;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_f7c6a9b8;

    void _ObjInit() { Circle___ObjInit(this); }
    void Draw(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Brush* brush, ::app::Fuse::Drawing::Primitives::Coverage* cover, ::app::Fuse::Drawing::Primitives::LimitCoverage* limit, ::app::Uno::Float2 extend, ::app::Uno::Float2 center, float smoothness);
    void Fill(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float2 center, float smoothness);
    void init_DrawCalls() { Circle__init_DrawCalls(this); }
    void InitBuffers() { Circle__InitBuffers(this); }
    void Stroke(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Stroke* stroke, ::app::Uno::Float2 center, float smoothness);
};

}}}}

#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Primitives {

inline void Circle::Draw(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Brush* brush, ::app::Fuse::Drawing::Primitives::Coverage* cover, ::app::Fuse::Drawing::Primitives::LimitCoverage* limit, ::app::Uno::Float2 extend, ::app::Uno::Float2 center, float smoothness) { Circle__Draw(this, dc, node, radius, brush, cover, limit, extend, center, smoothness); }
inline void Circle::Fill(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Brush* brush, ::app::Uno::Float2 center, float smoothness) { Circle__Fill(this, dc, node, radius, brush, center, smoothness); }
inline void Circle::Stroke(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Element* node, float radius, ::app::Fuse::Drawing::Stroke* stroke, ::app::Uno::Float2 center, float smoothness) { Circle__Stroke(this, dc, node, radius, stroke, center, smoothness); }

}}}}


#endif
