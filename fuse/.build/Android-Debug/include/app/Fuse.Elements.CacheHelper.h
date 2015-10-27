// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Caching/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ELEMENTS_CACHE_HELPER_H__
#define __APP_FUSE_ELEMENTS_CACHE_HELPER_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Elements { struct Cache; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct VertexBuffer; } } }

namespace app {
namespace Fuse {
namespace Elements {

struct CacheHelper;

struct CacheHelper__uType : ::uClassType
{
};

CacheHelper__uType* CacheHelper__typeof();

void CacheHelper___ObjInit(CacheHelper* __this);
void CacheHelper__Blit(CacheHelper* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Cache* cache, float opacity);
void CacheHelper__init_DrawCalls(CacheHelper* __this);
CacheHelper* CacheHelper__New_1(::uStatic* __this);

struct CacheHelper : ::uObject
{
    ::uStrong< ::app::Uno::Graphics::VertexBuffer*> Blit_Coord_934926a0_1_1_1;
    ::uStrong< ::uArray*> Blit_Vertices_934926a0_1_0_7;
    ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_934926a0;

    void _ObjInit() { CacheHelper___ObjInit(this); }
    void Blit(::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Cache* cache, float opacity) { CacheHelper__Blit(this, dc, cache, opacity); }
    void init_DrawCalls() { CacheHelper__init_DrawCalls(this); }
};

}}}


#endif
