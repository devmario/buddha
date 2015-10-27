// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_BLITTER_H__
#define __APP_FUSE_I_O_S_BLITTER_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }

namespace app {
namespace Fuse {
namespace iOS {

struct Blitter;

extern ::uStaticStrong< Blitter*> Blitter__Singleton;

struct Blitter__uType : ::uClassType
{
};

Blitter__uType* Blitter__typeof();

void Blitter___ObjInit(Blitter* __this);
void Blitter___TypeInit(::uStatic* __this);
void Blitter__init_DrawCalls(Blitter* __this);
Blitter* Blitter__New_1(::uStatic* __this);

struct Blitter : ::uObject
{
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Blit_v_baea6daf_1_7_1;
    ::uStrong< ::uArray*> Blit_verts_baea6daf_1_6_6;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_baea6daf;

    void _ObjInit() { Blitter___ObjInit(this); }
    void init_DrawCalls() { Blitter__init_DrawCalls(this); }
};

}}}


#endif
