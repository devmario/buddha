// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RENDER_TARGET_ENTRY_H__
#define __APP_FUSE_RENDER_TARGET_ENTRY_H__

#include <app/Uno.Int2.h>
#include <app/Uno.Object.h>
#include <app/Uno.Recti.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct RenderTarget; } } }

namespace app {
namespace Fuse {

struct RenderTargetEntry;

struct RenderTargetEntry__uType : ::uClassType
{
};

RenderTargetEntry__uType* RenderTargetEntry__typeof();

void RenderTargetEntry___ObjInit_1(RenderTargetEntry* __this, ::app::Uno::Graphics::RenderTarget* rt, ::app::Uno::Int2 viewportPixelSize, ::app::Uno::Recti scissor);
RenderTargetEntry* RenderTargetEntry__New_2(::uStatic* __this, ::app::Uno::Graphics::RenderTarget* rt, ::app::Uno::Int2 viewportPixelSize, ::app::Uno::Recti scissor);

struct RenderTargetEntry : ::uObject
{
    ::uStrong< ::app::Uno::Graphics::RenderTarget*> RenderTarget;
    ::app::Uno::Int2 ViewportPixelSize;
    ::app::Uno::Recti Scissor;

    void _ObjInit_1(::app::Uno::Graphics::RenderTarget* rt, ::app::Uno::Int2 viewportPixelSize, ::app::Uno::Recti scissor) { RenderTargetEntry___ObjInit_1(this, rt, viewportPixelSize, scissor); }
};

}}


#endif
