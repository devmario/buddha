// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAW_CONTEXT_H__
#define __APP_FUSE_DRAW_CONTEXT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct RenderTargetEntry; } }
namespace app { namespace Uno { namespace Collections { struct HashSet__Fuse_IFlush; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_IViewport; } } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_RenderTargetEntry; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Graphics_PolygonFace; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Recti; } } }
namespace app { namespace Uno { namespace Graphics { struct Framebuffer; } } }
namespace app { namespace Uno { namespace Graphics { struct RenderTarget; } } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Float4x4; } }
namespace app { namespace Uno { struct Int2; } }
namespace app { namespace Uno { struct Recti; } }

namespace app {
namespace Fuse {

struct DrawContext;

extern ::uStaticStrong< ::app::Uno::Collections::List__Uno_Graphics_PolygonFace*> DrawContext___cullFaces;
extern ::uStaticStrong< ::app::Uno::Collections::List__Fuse_RenderTargetEntry*> DrawContext___renderTargets;
extern ::uStaticStrong< ::app::Uno::Collections::List__Uno_Recti*> DrawContext___scissors;
extern ::uStaticStrong< ::app::Uno::Collections::List__Fuse_IViewport*> DrawContext___viewports;

struct DrawContext__uType : ::uClassType
{
};

DrawContext__uType* DrawContext__typeof();

void DrawContext___ObjInit(DrawContext* __this, ::uObject* viewport);
void DrawContext___TypeInit(::uStatic* __this);
void DrawContext__Clear(DrawContext* __this, ::app::Uno::Float4 color, float depth);
void DrawContext__Flush(DrawContext* __this);
int DrawContext__get_CullFace(DrawContext* __this);
bool DrawContext__get_IsCaching(DrawContext* __this);
::app::Uno::Graphics::RenderTarget* DrawContext__get_RenderTarget(DrawContext* __this);
::app::Uno::Recti DrawContext__get_Scissor(DrawContext* __this);
::uObject* DrawContext__get_Viewport(DrawContext* __this);
::app::Uno::Int2 DrawContext__get_ViewportPixelSize(DrawContext* __this);
float DrawContext__get_ViewportPointDensity(DrawContext* __this);
::app::Uno::Float4x4 DrawContext__GetLocalToClipTransform(DrawContext* __this, ::app::Fuse::Node* n);
::app::Fuse::RenderTargetEntry* DrawContext__GetRenderTargetEntry(DrawContext* __this);
DrawContext* DrawContext__New_1(::uStatic* __this, ::uObject* viewport);
void DrawContext__PopCullFace(DrawContext* __this);
void DrawContext__PopRenderTarget(DrawContext* __this);
void DrawContext__PopRenderTargetViewport(DrawContext* __this);
void DrawContext__PopViewport(DrawContext* __this);
void DrawContext__PushCullFace(DrawContext* __this, int cf);
void DrawContext__PushRenderTarget(DrawContext* __this, ::app::Uno::Graphics::RenderTarget* rt, ::app::Uno::Int2 viewportPixelSize, ::app::Uno::Recti scissor);
void DrawContext__PushRenderTarget_1(DrawContext* __this, ::app::Uno::Graphics::Framebuffer* fb, ::app::Uno::Int2 viewportPixelSize, ::app::Uno::Recti scissor);
void DrawContext__PushRenderTarget_2(DrawContext* __this, ::app::Uno::Graphics::Framebuffer* fb);
void DrawContext__PushRenderTarget_3(DrawContext* __this, ::app::Uno::Graphics::RenderTarget* rt);
void DrawContext__PushRenderTargetViewport(DrawContext* __this, ::app::Uno::Graphics::Framebuffer* fb, ::uObject* frustum);
void DrawContext__PushViewport(DrawContext* __this, ::uObject* v);
void DrawContext__set_IsCaching(DrawContext* __this, bool value);
void DrawContext__set_Scissor(DrawContext* __this, ::app::Uno::Recti value);
void DrawContext__SetRenderTargetEntry(DrawContext* __this, ::app::Fuse::RenderTargetEntry* old);
void DrawContext__UpdateBackbuffer(DrawContext* __this);

struct DrawContext : ::uObject
{
    ::uStrong< ::uObject*> _viewport;
    ::uStrong< ::app::Uno::Collections::HashSet__Fuse_IFlush*> flushSet;
    int _cullFace;
    bool _IsCaching;

    void _ObjInit(::uObject* viewport) { DrawContext___ObjInit(this, viewport); }
    void Clear(::app::Uno::Float4 color, float depth);
    void Flush() { DrawContext__Flush(this); }
    int CullFace() { return DrawContext__get_CullFace(this); }
    bool IsCaching() { return DrawContext__get_IsCaching(this); }
    ::app::Uno::Graphics::RenderTarget* RenderTarget() { return DrawContext__get_RenderTarget(this); }
    ::app::Uno::Recti Scissor();
    ::uObject* Viewport() { return DrawContext__get_Viewport(this); }
    ::app::Uno::Int2 ViewportPixelSize();
    float ViewportPointDensity() { return DrawContext__get_ViewportPointDensity(this); }
    ::app::Uno::Float4x4 GetLocalToClipTransform(::app::Fuse::Node* n);
    ::app::Fuse::RenderTargetEntry* GetRenderTargetEntry() { return DrawContext__GetRenderTargetEntry(this); }
    void PopCullFace() { DrawContext__PopCullFace(this); }
    void PopRenderTarget() { DrawContext__PopRenderTarget(this); }
    void PopRenderTargetViewport() { DrawContext__PopRenderTargetViewport(this); }
    void PopViewport() { DrawContext__PopViewport(this); }
    void PushCullFace(int cf) { DrawContext__PushCullFace(this, cf); }
    void PushRenderTarget(::app::Uno::Graphics::RenderTarget* rt, ::app::Uno::Int2 viewportPixelSize, ::app::Uno::Recti scissor);
    void PushRenderTarget_1(::app::Uno::Graphics::Framebuffer* fb, ::app::Uno::Int2 viewportPixelSize, ::app::Uno::Recti scissor);
    void PushRenderTarget_2(::app::Uno::Graphics::Framebuffer* fb) { DrawContext__PushRenderTarget_2(this, fb); }
    void PushRenderTarget_3(::app::Uno::Graphics::RenderTarget* rt) { DrawContext__PushRenderTarget_3(this, rt); }
    void PushRenderTargetViewport(::app::Uno::Graphics::Framebuffer* fb, ::uObject* frustum) { DrawContext__PushRenderTargetViewport(this, fb, frustum); }
    void PushViewport(::uObject* v) { DrawContext__PushViewport(this, v); }
    void IsCaching(bool value) { DrawContext__set_IsCaching(this, value); }
    void Scissor(::app::Uno::Recti value);
    void SetRenderTargetEntry(::app::Fuse::RenderTargetEntry* old) { DrawContext__SetRenderTargetEntry(this, old); }
    void UpdateBackbuffer() { DrawContext__UpdateBackbuffer(this); }
};

}}

#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Recti.h>

namespace app {
namespace Fuse {

inline void DrawContext::Clear(::app::Uno::Float4 color, float depth) { DrawContext__Clear(this, color, depth); }
inline ::app::Uno::Recti DrawContext::Scissor() { return DrawContext__get_Scissor(this); }
inline ::app::Uno::Int2 DrawContext::ViewportPixelSize() { return DrawContext__get_ViewportPixelSize(this); }
inline ::app::Uno::Float4x4 DrawContext::GetLocalToClipTransform(::app::Fuse::Node* n) { return DrawContext__GetLocalToClipTransform(this, n); }
inline void DrawContext::PushRenderTarget(::app::Uno::Graphics::RenderTarget* rt, ::app::Uno::Int2 viewportPixelSize, ::app::Uno::Recti scissor) { DrawContext__PushRenderTarget(this, rt, viewportPixelSize, scissor); }
inline void DrawContext::PushRenderTarget_1(::app::Uno::Graphics::Framebuffer* fb, ::app::Uno::Int2 viewportPixelSize, ::app::Uno::Recti scissor) { DrawContext__PushRenderTarget_1(this, fb, viewportPixelSize, scissor); }
inline void DrawContext::Scissor(::app::Uno::Recti value) { DrawContext__set_Scissor(this, value); }

}}


#endif
