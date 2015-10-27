// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAW_HELPERS_H__
#define __APP_FUSE_DRAW_HELPERS_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Float4x4; } }
namespace app { namespace Uno { struct Rect; } }

namespace app {
namespace Fuse {

struct DrawHelpers;

extern ::uStaticStrong< DrawHelpers*> DrawHelpers___instance;

struct DrawHelpers__uType : ::uClassType
{
};

DrawHelpers__uType* DrawHelpers__typeof();

void DrawHelpers___ObjInit(DrawHelpers* __this);
void DrawHelpers__DrawLocalRect(DrawHelpers* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect rect, ::app::Uno::Float4x4 transform, float lineWidth, ::app::Uno::Float4 color);
DrawHelpers* DrawHelpers__get_Singelton(::uStatic* __this);
void DrawHelpers__init_DrawCalls(DrawHelpers* __this);
DrawHelpers* DrawHelpers__New_1(::uStatic* __this);

struct DrawHelpers : ::uObject
{
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> DrawLocalRect_Coord_9c5663de_1_2_1;
    ::uStrong< ::uArray*> DrawLocalRect_Vertices_9c5663de_1_1_4;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_9c5663de;

    void _ObjInit() { DrawHelpers___ObjInit(this); }
    void DrawLocalRect(::app::Fuse::DrawContext* dc, ::app::Uno::Rect rect, ::app::Uno::Float4x4 transform, float lineWidth, ::app::Uno::Float4 color);
    void init_DrawCalls() { DrawHelpers__init_DrawCalls(this); }
};

}}

#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Rect.h>

namespace app {
namespace Fuse {

inline void DrawHelpers::DrawLocalRect(::app::Fuse::DrawContext* dc, ::app::Uno::Rect rect, ::app::Uno::Float4x4 transform, float lineWidth, ::app::Uno::Float4 color) { DrawHelpers__DrawLocalRect(this, dc, rect, transform, lineWidth, color); }

}}


#endif
