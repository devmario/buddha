#include <app/Fuse.CacheFramebuffer.h>
#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Effects.EffectType.h>
#include <app/Fuse.Elements.Alignment.h>
#include <app/Fuse.Elements.AlignmentHelpers.h>
#include <app/Fuse.Elements.BoxSizing.h>
#include <app/Fuse.Elements.Cache.h>
#include <app/Fuse.Elements.CacheHelper.h>
#include <app/Fuse.Elements.CacheTile.h>
#include <app/Fuse.Elements.CachingMode.h>
#include <app/Fuse.Elements.DisplayHelpers.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.Elements.Element_GMSCacheItem.h>
#include <app/Fuse.Elements.ElementAtlas.h>
#include <app/Fuse.Elements.ElementAtlasFramebuffer.h>
#include <app/Fuse.Elements.ElementAtlasFramebufferPool.h>
#include <app/Fuse.Elements.ElementAtlasFramebufferPoolEntry.h>
#include <app/Fuse.Elements.ElementAtlasFramebufferPoolImpl.h>
#include <app/Fuse.Elements.ElementBatch.h>
#include <app/Fuse.Elements.ElementBatchEntry.h>
#include <app/Fuse.Elements.ElementBatcher.h>
#include <app/Fuse.Elements.HitTestMode.h>
#include <app/Fuse.Elements.IElementBatchDrawable.h>
#include <app/Fuse.Elements.ITransformOrigin.h>
#include <app/Fuse.Elements.LayoutArgs.h>
#include <app/Fuse.Elements.LayoutHandler.h>
#include <app/Fuse.Elements.LimitBoxSizing.h>
#include <app/Fuse.Elements.LimitBoxSizingData.h>
#include <app/Fuse.Elements.NoImplicitMaxBoxSizing.h>
#include <app/Fuse.Elements.ShadowBoxSizing.h>
#include <app/Fuse.Elements.ShadowBoxSizing_ShadowData.h>
#include <app/Fuse.Elements.SimpleAlignment.h>
#include <app/Fuse.Elements.SingleNodeDrawable.h>
#include <app/Fuse.Elements.SizeUnit.h>
#include <app/Fuse.Elements.StandardBoxSizing.h>
#include <app/Fuse.Elements.StretchDirection.h>
#include <app/Fuse.Elements.StretchMode.h>
#include <app/Fuse.Elements.StretchSizing.h>
#include <app/Fuse.Elements.TextAlignment.h>
#include <app/Fuse.Elements.TextureAtlas.h>
#include <app/Fuse.Elements.TextWrapping.h>
#include <app/Fuse.Elements.TransformOrigins.h>
#include <app/Fuse.Elements.TransformOrigins_AnchorOrigin.h>
#include <app/Fuse.Elements.TransformOrigins_BoxCenter.h>
#include <app/Fuse.Elements.TransformOrigins_CenterOrigin.h>
#include <app/Fuse.Elements.TransformOrigins_TopLeftOrigin.h>
#include <app/Fuse.Elements.Viewport.h>
#include <app/Fuse.Elements.Visibility.h>
#include <app/Fuse.FastMatrix.h>
#include <app/Fuse.FixedViewport.h>
#include <app/Fuse.FramebufferPool.h>
#include <app/Fuse.FrustumViewport.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.IFrustum.h>
#include <app/Fuse.InvalidateLayoutReason.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.LayoutDependent.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeBounds.h>
#include <app/Fuse.OrthographicFrustum.h>
#include <app/Fuse.PlacedArgs.h>
#include <app/Fuse.PlacedHandler.h>
#include <app/Fuse.Properties.h>
#include <app/Fuse.PropertyHandle.h>
#include <app/Fuse.Resources.DisposalManager.h>
#include <app/Fuse.RootViewport.h>
#include <app/Fuse.SizeFlags.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__bool.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__float.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__float2.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode.h>
#include <app/Fuse.StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility.h>
#include <app/Fuse.StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_-710aaa9c.h>
#include <app/Fuse.StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse-6f3bbd54.h>
#include <app/Fuse.UpdateManager.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Fuse_Effects_Effect.h>
#include <app/Uno.Action__Fuse_Elements_Element.h>
#include <app/Uno.Action__Fuse_Elements_Element__float.h>
#include <app/Uno.Action__Fuse_Elements_Element__Fuse_Elements_CachingMode.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Collections.ICollection__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IList__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.LinkedList__Fuse_Elements_ElementAtlasFramebuff-df9f456a.h>
#include <app/Uno.Collections.LinkedListNode__Fuse_Elements_ElementAtlasFrame-daa4478c.h>
#include <app/Uno.Collections.List__Fuse_Elements_Element.h>
#include <app/Uno.Collections.List__Fuse_Elements_ElementAtlas.h>
#include <app/Uno.Collections.List__Fuse_Elements_ElementBatch.h>
#include <app/Uno.Collections.List__Fuse_Elements_ElementBatchEntry.h>
#include <app/Uno.Collections.List__Fuse_Elements_IElementBatchDrawable.h>
#include <app/Uno.Collections.List__Fuse_Node.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_Element.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_ElementAtlas.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_ElementBatch.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_ElementBatchEntry.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Elements_IElementBatchDrawable.h>
#include <app/Uno.Collections.List1_Enumerator__Fuse_Node.h>
#include <app/Uno.Collections.ObservableList__Fuse_Effects_Effect.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Double.h>
#include <app/Uno.EventArgs.h>
#include <app/Uno.EventHandler.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Func__Fuse_Elements_Element__float.h>
#include <app/Uno.Func__Fuse_Elements_Element__Fuse_Elements_CachingMode.h>
#include <app/Uno.Graphics.BlendOperand.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.Format.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.FramebufferFlags.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.IndexType.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Graphics.RenderTarget.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Object.h>
#include <app/Uno.Platform2.Display.h>
#include <app/Uno.Rect.h>
#include <app/Uno.Recti.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.String.h>
#include <app/Uno.UShort.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Elements {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Alignment__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Elements.Alignment", ::app::Uno::Int__typeof(), 16);

    type->SetLiterals(
        "Default", 0LL,
        "Left", 1LL,
        "HorizontalCenter", 2LL,
        "Right", 3LL,
        "Top", 4LL,
        "VerticalCenter", 8LL,
        "Bottom", 12LL,
        "TopLeft", 5LL,
        "TopCenter", 6LL,
        "TopRight", 7LL,
        "CenterLeft", 9LL,
        "Center", 10LL,
        "CenterRight", 11LL,
        "BottomLeft", 13LL,
        "BottomCenter", 14LL,
        "BottomRight", 15LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AlignmentHelpers__uType* AlignmentHelpers__typeof()
{
    static ::uStaticStrong<AlignmentHelpers__uType*> type;
    if (type != NULL) return type;

    type = (AlignmentHelpers__uType*)::uAllocClassType(sizeof(AlignmentHelpers__uType), "Fuse.Elements.AlignmentHelpers");

    return type;
}

int AlignmentHelpers__GetHorizontalAlign(::uStatic* __this, int a)
{
    return a & 3;
}

int AlignmentHelpers__GetVerticalAlign(::uStatic* __this, int a)
{
    return a & 12;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BoxSizing__uType* BoxSizing__typeof()
{
    static ::uStaticStrong<BoxSizing__uType*> type;
    if (type != NULL) return type;

    type = (BoxSizing__uType*)::uAllocClassType(sizeof(BoxSizing__uType), "Fuse.Elements.BoxSizing", false, 0, 0, 0);

    type->__fp_IsContainerRelativeSize = BoxSizing__IsContainerRelativeSize;

    return type;
}

void BoxSizing___ObjInit(BoxSizing* __this)
{
}

void BoxSizing__EffectiveAnchor(BoxSizing* __this, ::app::Fuse::Elements::Element* element, int halign, int valign, ::app::Uno::Float2* anchor, int* unit)
{
    if (::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__AnchorProperty)->HasValue(element))
    {
        *anchor = ::uPtr< ::app::Fuse::Elements::Element*>(element)->Anchor();
        *unit = ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__AnchorProperty)->GetUnit(element);
        return;
    }

    (*anchor).X = __this->SimpleToAnchor(halign);
    (*anchor).Y = __this->SimpleToAnchor(valign);
    *unit = 1;
}

int BoxSizing__EffectiveHorizontalAlignment(BoxSizing* __this, ::app::Fuse::Elements::Element* element)
{
    int raw = ::app::Fuse::Elements::AlignmentHelpers__GetHorizontalAlign(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(element)->Alignment());

    if (raw == 1)
    {
        return 0;
    }

    if (raw == 3)
    {
        return 2;
    }

    if (raw == 2)
    {
        return 1;
    }

    if (::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__XProperty)->HasValue(element))
    {
        return 0;
    }

    return 1;
}

int BoxSizing__EffectiveVerticalAlignment(BoxSizing* __this, ::app::Fuse::Elements::Element* element)
{
    int raw = ::app::Fuse::Elements::AlignmentHelpers__GetVerticalAlign(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(element)->Alignment());

    if (raw == 4)
    {
        return 0;
    }

    if (raw == 12)
    {
        return 2;
    }

    if (raw == 8)
    {
        return 1;
    }

    if (::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__YProperty)->HasValue(element))
    {
        return 0;
    }

    return 1;
}

bool BoxSizing__IsContainerRelativeSize(BoxSizing* __this, ::app::Fuse::Elements::Element* element)
{
    return false;
}

float BoxSizing__SimpleToAnchor(BoxSizing* __this, int align)
{
    if (align == 0)
    {
        return 0.0f;
    }

    if (align == 2)
    {
        return 100.0f;
    }

    return 50.0f;
}

float BoxSizing__UnitSize(BoxSizing* __this, ::app::Fuse::Elements::Element* element, float scalar, int unit, float fill, bool secondary, bool* known)
{
    *known = true;

    if (unit == 0)
    {
        return scalar;
    }

    if (unit == 2)
    {
        return scalar / ::uPtr< ::app::Fuse::Elements::Element*>(element)->AbsoluteZoom();
    }

    if (secondary)
    {
        return (scalar * fill) / 100.0f;
    }

    *known = false;
    return 0.0f;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Caching/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Elements::CacheHelper*> Cache__cacheHelper;

Cache__uType* Cache__typeof()
{
    static ::uStaticStrong<Cache__uType*> type;
    if (type != NULL) return type;

    type = (Cache__uType*)::uAllocClassType(sizeof(Cache__uType), "Fuse.Elements.Cache", false, 0, 2, 0);

    type->SetStrongRefs(
        "_cacheTiles", offsetof(Cache, _cacheTiles),
        "_element", offsetof(Cache, _element));

    return type;
}

void Cache___ObjInit(Cache* __this, ::app::Fuse::Elements::Element* elm)
{
    __this->_element = elm;

    if (__this->_element == NULL)
    {
        U_THROW(::app::Uno::Exception__New_1(NULL));
    }
}

void Cache___TypeInit(::uStatic* __this)
{
    Cache__cacheHelper = ::app::Fuse::Elements::CacheHelper__New_1(NULL);
}

void Cache__Blit(Cache* __this, ::app::Fuse::DrawContext* dc, float opacity)
{
    ::uPtr< ::app::Fuse::Elements::CacheHelper*>(Cache__cacheHelper)->Blit(dc, __this, opacity);
}

::app::Uno::Float4x4 Cache__CalculateCompositMatrix(Cache* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Recti cachingRect)
{
    ::app::Uno::Float4x4 translation = ::app::Uno::Matrix__Translation(NULL, (float)cachingRect.Left / ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->AbsoluteZoom(), (float)cachingRect.Top / ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->AbsoluteZoom(), 0.0f);
    return ::app::Uno::Matrix__Mul_10(NULL, translation, ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->WorldTransform());
}

::app::Uno::Recti Cache__ConservativelySnapToCoveringIntegers(::uStatic* __this, ::app::Uno::Rect r)
{
    ::app::Uno::Int2 origin = ::app::Uno::Int2__op_Explicit(NULL, ::app::Uno::Math__Floor_2(NULL, r.LeftTop()));
    ::app::Uno::Int2 size = ::app::Uno::Int2__op_Explicit(NULL, ::app::Uno::Math__Ceil_2(NULL, ::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, r.RightBottom(), r.LeftTop()), 0.01f)));
    return ::app::Uno::Recti__New_1(NULL, origin.X, origin.Y, (origin.X + size.X) + 1, (origin.Y + size.Y) + 1);
}

void Cache__DrawHeuristically(Cache* __this, ::app::Fuse::DrawContext* dc)
{
    if (__this->GetCachePreference(dc))
    {
        __this->PinAndValidate(dc);
        __this->Blit(dc, ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->Opacity());
        __this->Unpin();
    }
    else
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->CompositEffects(dc);
    }
}

::uArray* Cache__get_CacheTiles(Cache* __this)
{
    return __this->_cacheTiles;
}

int Cache__get_MaxTileSize(Cache* __this)
{
    return ::app::Uno::Graphics::Texture2D__get_MaxSize(NULL);
}

bool Cache__GetCachePreference(Cache* __this, ::app::Fuse::DrawContext* dc)
{
    bool flat = ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->IsFlat() && ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->IsLocalFlat();

    if (!flat)
    {
        return false;
    }

    switch (::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->CachingMode())
    {
        case 2:
        {
            return false;
        }
        case 1:
        {
            return true;
        }
    }

    ::app::Uno::Recti cachingRect = __this->GetCachingRect(dc);

    if (((double)cachingRect.Size().X > ((double)::uPtr< ::app::Uno::Graphics::RenderTarget*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->RenderTarget())->Size().X * 1.2)) || ((double)cachingRect.Size().Y > ((double)::uPtr< ::app::Uno::Graphics::RenderTarget*>(::uPtr< ::app::Fuse::DrawContext*>(dc)->RenderTarget())->Size().Y * 1.2)))
    {
        return false;
    }

    if (::uIs(::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->Parent(), ::app::Fuse::RootViewport__typeof()))
    {
    }
    else if (::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->Parent() == NULL)
    {
        return __this->GetCachePreferenceCore(dc);
    }
    else
    {
        if (::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->DrawCost() > 1.0)
        {
            return __this->GetCachePreferenceCore(dc);
        }
        else
        {
            ;
        }
    }

    return false;
}

bool Cache__GetCachePreferenceCore(Cache* __this, ::app::Fuse::DrawContext* dc)
{
    if (::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->ValidFrameCount() > 0)
    {
        if (!::uPtr< ::app::Fuse::DrawContext*>(dc)->IsCaching())
        {
            return true;
        }
        else
        {
            ;
        }
    }
    else
    {
        ;
    }

    return false;
}

::app::Uno::Recti Cache__GetCachingRect(Cache* __this, ::app::Fuse::DrawContext* dc)
{
    return ::app::Uno::Recti__Inflate_1(NULL, Cache__ConservativelySnapToCoveringIntegers(NULL, ::app::Uno::Rect__Scale(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->RenderBoundsWithEffects(), ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->AbsoluteZoom())), 1);
}

void Cache__Invalidate(Cache* __this)
{
    __this->_isValid = false;
}

Cache* Cache__New_1(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    Cache* inst = (Cache*)::uAllocObject(sizeof(Cache), Cache__typeof());
    inst->_ObjInit(elm);
    return inst;
}

void Cache__PinAndValidate(Cache* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Uno::Recti cacheRect = __this->GetCachingRect(dc);

    if (!::app::Uno::Recti__Equals_2(NULL, cacheRect, __this->_cacheRect))
    {
        int numTilesX = ((cacheRect.Size().X + __this->MaxTileSize()) - 1) / __this->MaxTileSize();
        int numTilesY = ((cacheRect.Size().Y + __this->MaxTileSize()) - 1) / __this->MaxTileSize();
        int numTiles = numTilesX * numTilesY;

        if ((__this->_cacheTiles == NULL) || (numTiles != ::uPtr< ::uArray*>(__this->_cacheTiles)->Length()))
        {
            __this->_cacheTiles = ::uNewArray(::app::Fuse::Elements::CacheTile__typeof(), numTiles);
        }

        for (int y = 0; y < numTilesY; ++y)
        {
            for (int x = 0; x < numTilesX; ++x)
            {
                int tile = x + (y * numTilesX);
                ::app::Uno::Int2 Position = ::app::Uno::Int2__New_2(NULL, x * __this->MaxTileSize(), y * __this->MaxTileSize());
                ::uPtr< ::uArray*>(__this->_cacheTiles)->Item< ::app::Fuse::Elements::CacheTile>(tile)._rect = ::app::Uno::Recti__New_1(NULL, cacheRect.Left + Position.X, cacheRect.Top + Position.Y, (cacheRect.Left + Position.X) + ::app::Uno::Math__Min_5(NULL, cacheRect.Size().X - Position.X, __this->MaxTileSize()), (cacheRect.Top + Position.Y) + ::app::Uno::Math__Min_5(NULL, cacheRect.Size().Y - Position.Y, __this->MaxTileSize()));
            }
        }
    }

    for (int i = 0; i < ::uPtr< ::uArray*>(__this->_cacheTiles)->Length(); ++i)
    {
        ::uPtr< ::uArray*>(__this->_cacheTiles)->Item< ::app::Fuse::Elements::CacheTile>(i).EnsureHasFramebuffer((::uObject*)__this->_element);
        ::uPtr< ::uArray*>(__this->_cacheTiles)->Item< ::app::Fuse::Elements::CacheTile>(i)._compositMatrix = __this->CalculateCompositMatrix(dc, ::uPtr< ::uArray*>(__this->_cacheTiles)->Item< ::app::Fuse::Elements::CacheTile>(i)._rect);
        ::uPtr< ::app::Fuse::CacheFramebuffer*>(::uPtr< ::uArray*>(__this->_cacheTiles)->Item< ::app::Fuse::Elements::CacheTile>(i)._framebuffer)->Pin();

        if (!::uPtr< ::app::Fuse::CacheFramebuffer*>(::uPtr< ::uArray*>(__this->_cacheTiles)->Item< ::app::Fuse::Elements::CacheTile>(i)._framebuffer)->IsContentValid() || !__this->_isValid)
        {
            __this->Repaint(dc, ::uPtr< ::uArray*>(__this->_cacheTiles)->Item< ::app::Fuse::Elements::CacheTile>(i));
        }
    }

    __this->_isValid = true;
}

void Cache__Repaint(Cache* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::CacheTile tile)
{
    ::app::Fuse::OrthographicFrustum* collection_126;
    collection_126 = ::app::Fuse::OrthographicFrustum__New_1(NULL);
    ::uPtr< ::app::Fuse::OrthographicFrustum*>(collection_126)->Origin(::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)tile._rect.Minimum().X, (float)tile._rect.Minimum().Y), ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->AbsoluteZoom()));
    collection_126->Size(::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)tile._rect.Size().X, (float)tile._rect.Size().Y), ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->AbsoluteZoom()));
    collection_126->LocalFromWorld(::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->WorldTransformInverse());
    ::app::Fuse::OrthographicFrustum* cc = collection_126;
    bool oldIsCaching = ::uPtr< ::app::Fuse::DrawContext*>(dc)->IsCaching();
    dc->IsCaching(true);
    dc->PushRenderTargetViewport(::uPtr< ::app::Fuse::CacheFramebuffer*>(tile._framebuffer)->Framebuffer(), (::uObject*)cc);
    dc->Clear(::app::Uno::Float4__New_3(NULL, 0.0f), 1.0f);
    ::app::Uno::Recti oldScissor = dc->Scissor();
    dc->Scissor(::app::Uno::Recti__New_1(NULL, 0, 0, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::CacheFramebuffer*>(tile._framebuffer)->Framebuffer())->Size().X, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::CacheFramebuffer*>(tile._framebuffer)->Framebuffer())->Size().Y));
    ::uPtr< ::app::Fuse::Elements::Element*>(__this->_element)->CompositEffects(dc);
    dc->Scissor(oldScissor);
    dc->PopRenderTargetViewport();
    dc->IsCaching(oldIsCaching);
}

void Cache__Unpin(Cache* __this)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();

    for (array_123 = __this->_cacheTiles, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Fuse::Elements::CacheTile tile = ::uPtr< ::uArray*>(array_123)->Item< ::app::Fuse::Elements::CacheTile>(index_124);
        ::uPtr< ::app::Fuse::CacheFramebuffer*>(tile._framebuffer)->Unpin(true);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Caching/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CacheHelper__uType* CacheHelper__typeof()
{
    static ::uStaticStrong<CacheHelper__uType*> type;
    if (type != NULL) return type;

    type = (CacheHelper__uType*)::uAllocClassType(sizeof(CacheHelper__uType), "Fuse.Elements.CacheHelper", false, 0, 5, 0);

    type->SetStrongRefs(
        "_draw_934926a0._compiledProgram", offsetof(CacheHelper, _draw_934926a0._compiledProgram),
        "_draw_934926a0._constValues", offsetof(CacheHelper, _draw_934926a0._constValues),
        "_draw_934926a0._Program", offsetof(CacheHelper, _draw_934926a0._Program),
        "Blit_Coord_934926a0_1_1_1", offsetof(CacheHelper, Blit_Coord_934926a0_1_1_1),
        "Blit_Vertices_934926a0_1_0_7", offsetof(CacheHelper, Blit_Vertices_934926a0_1_0_7));

    return type;
}

void CacheHelper___ObjInit(CacheHelper* __this)
{
    __this->init_DrawCalls();
}

void CacheHelper__Blit(CacheHelper* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Elements::Cache* cache, float opacity)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();

    for (array_123 = ::uPtr< ::app::Fuse::Elements::Cache*>(cache)->CacheTiles(), index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Fuse::Elements::CacheTile tile = ::uPtr< ::uArray*>(array_123)->Item< ::app::Fuse::Elements::CacheTile>(index_124);
        {
            __this->_draw_934926a0.BlendEnabled(true);
            __this->_draw_934926a0.BlendDstRgb(3);
            __this->_draw_934926a0.BlendDstAlpha(3);
            __this->_draw_934926a0.DepthTestEnabled(false);
            __this->_draw_934926a0.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
            __this->_draw_934926a0.Use();
            __this->_draw_934926a0.Attrib(0, 2, __this->Blit_Coord_934926a0_1_1_1, 8, 0);
            __this->_draw_934926a0.Uniform_7(1, ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__New_2(NULL, (float)::uPtr< ::app::Uno::Graphics::Texture2D*>(tile.Texture())->Size().X, (float)::uPtr< ::app::Uno::Graphics::Texture2D*>(tile.Texture())->Size().Y), dc->ViewportPointDensity()));
            __this->_draw_934926a0.Uniform_2(2, tile._compositMatrix);
            __this->_draw_934926a0.Uniform_2(3, ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(dc->Viewport())));
            __this->_draw_934926a0.Uniform_8(4, opacity);
            __this->_draw_934926a0.Sampler_1(5, tile.Texture());
            __this->_draw_934926a0.DrawArrays(::uPtr< ::uArray*>(__this->Blit_Vertices_934926a0_1_0_7)->Length());
        }
    }
}

void CacheHelper__init_DrawCalls(CacheHelper* __this)
{
    ::uArray* array_126;
    array_126 = ::uNewArray(::app::Uno::Float2__typeof(), 6);
    ::uPtr< ::uArray*>(array_126)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_126)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f);
    ::uPtr< ::uArray*>(array_126)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_126)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_126)->Item< ::app::Uno::Float2>(4) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_126)->Item< ::app::Uno::Float2>(5) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f);
    ::uArray* Vertices_934926a0_1_0_0 = array_126;
    __this->Blit_Coord_934926a0_1_1_1 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_8(NULL, Vertices_934926a0_1_0_0), 0);
    __this->Blit_Vertices_934926a0_1_0_7 = Vertices_934926a0_1_0_0;
    __this->_draw_934926a0 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 607), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

CacheHelper* CacheHelper__New_1(::uStatic* __this)
{
    CacheHelper* inst = (CacheHelper*)::uAllocObject(sizeof(CacheHelper), CacheHelper__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Caching/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CacheTile__uType* CacheTile__typeof()
{
    static ::uStaticStrong<CacheTile__uType*> type;
    if (type != NULL) return type;

    type = (CacheTile__uType*)::uAllocStructType(sizeof(CacheTile__uType), "Fuse.Elements.CacheTile", sizeof(CacheTile), 0, 1, 0);

    type->SetStrongRefs(
        "_framebuffer", offsetof(CacheTile, _framebuffer));

    return type;
}

void CacheTile__EnsureHasFramebuffer(CacheTile* __this, ::uObject* owner)
{
    if (((__this->_framebuffer == NULL) || (::uPtr< ::app::Fuse::CacheFramebuffer*>(__this->_framebuffer)->Width() != __this->_rect.Size().X)) || (::uPtr< ::app::Fuse::CacheFramebuffer*>(__this->_framebuffer)->Height() != __this->_rect.Size().Y))
    {
        if (__this->_framebuffer != NULL)
        {
            ::uPtr< ::app::Fuse::CacheFramebuffer*>(__this->_framebuffer)->Dispose();
        }

        __this->_framebuffer = ::app::Fuse::CacheFramebuffer__New_1(NULL, owner, __this->_rect.Size().X, __this->_rect.Size().Y, 3, 0);
    }
}

::app::Uno::Graphics::Texture2D* CacheTile__get_Texture(CacheTile* __this)
{
    return ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::CacheFramebuffer*>(__this->_framebuffer)->Framebuffer())->ColorBuffer();
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* CachingMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Elements.CachingMode", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Optimized", 0LL,
        "Always", 1LL,
        "Never", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Caching/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DisplayHelpers__uType* DisplayHelpers__typeof()
{
    static ::uStaticStrong<DisplayHelpers__uType*> type;
    if (type != NULL) return type;

    type = (DisplayHelpers__uType*)::uAllocClassType(sizeof(DisplayHelpers__uType), "Fuse.Elements.DisplayHelpers");

    return type;
}

::app::Uno::Int2 DisplayHelpers__get_DisplaySizeHint(::uStatic* __this)
{
    {
        ::app::Uno::Platform2::Display* display = ::app::Uno::Platform2::Display__get_MainDisplay(NULL);
        return ::app::Uno::Int2__op_Explicit(NULL, ::uPtr< ::app::Uno::Platform2::Display*>(display)->Frame().Size());
    }
}

float DisplayHelpers__get_PointDensity(::uStatic* __this)
{
    return ::app::Fuse::RootViewport__get_DefaultDensity(NULL);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment*> Element__AlignmentProperty;
::uStaticStrong< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit*> Element__AnchorProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode*> Element__CachingModeProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Elements_Element__bool*> Element__ClipToBoundsProperty;
::uStaticStrong< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*> Element__HeightProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode*> Element__HitTestModeProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4*> Element__MarginProperty;
::uStaticStrong< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*> Element__MaxHeightProperty;
::uStaticStrong< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*> Element__MaxWidthProperty;
::uStaticStrong< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*> Element__MinHeightProperty;
::uStaticStrong< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*> Element__MinWidthProperty;
::uStaticStrong< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit*> Element__OffsetProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float*> Element__OpacityProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4*> Element__PaddingProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility*> Element__VisibilityProperty;
::uStaticStrong< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*> Element__WidthProperty;
::uStaticStrong< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*> Element__XProperty;
::uStaticStrong< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*> Element__YProperty;

Element__uType* Element__typeof()
{
    static ::uStaticStrong<Element__uType*> type;
    if (type != NULL) return type;

    type = (Element__uType*)::uAllocClassType(sizeof(Element__uType), "Fuse.Elements.Element", false, 6, 10, 0);

    type->SetBaseType(::app::Fuse::Node__typeof());
    type->__fp_ArrangePaddingBox = Element__ArrangePaddingBox;
    type->__fp_CalcRenderBounds = Element__CalcRenderBounds;
    type->__fp_Draw = (void(*)(::app::Fuse::Node*, ::app::Fuse::DrawContext*))Element__Draw;
    type->__fp_DrawSelection = (void(*)(::app::Fuse::Node*, ::app::Fuse::DrawContext*))Element__DrawSelection;
    type->__fp_FastTrackDrawWithOpacity = Element__FastTrackDrawWithOpacity;
    type->__fp_get_AbsoluteViewportOrigin = (::app::Uno::Float2(*)(::app::Fuse::Node*))Element__get_AbsoluteViewportOrigin;
    type->__fp_get_HitTestChildrenBounds = (::app::Fuse::NodeBounds*(*)(::app::Fuse::Node*))Element__get_HitTestChildrenBounds;
    type->__fp_get_HitTestLocalBounds = (::app::Fuse::NodeBounds*(*)(::app::Fuse::Node*))Element__get_HitTestLocalBounds;
    type->__fp_get_HitTestLocalVisualBounds = Element__get_HitTestLocalVisualBounds;
    type->__fp_get_IsLocalVisible = (bool(*)(::app::Fuse::Node*))Element__get_IsLocalVisible;
    type->__fp_get_LocalBounds = (::app::Uno::Geometry::Box(*)(::app::Fuse::Node*))Element__get_LocalBounds;
    type->__fp_get_LocalRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Node*))Element__get_LocalRenderBounds;
    type->__fp_GetContentSize = Element__GetContentSize;
    type->__fp_GetMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, int))Element__GetMarginSize;
    type->__fp_InvalidateLocalTransform = (void(*)(::app::Fuse::Node*))Element__InvalidateLocalTransform;
    type->__fp_InvalidateVisual = (void(*)(::app::Fuse::Node*))Element__InvalidateVisual;
    type->__fp_IsMarginBoxDependent = (int(*)(::app::Fuse::Node*, ::app::Fuse::Node*))Element__IsMarginBoxDependent;
    type->__fp_OnArrangeMarginBox = (::app::Uno::Float2(*)(::app::Fuse::Node*, ::app::Uno::Float2, ::app::Uno::Float2, int))Element__OnArrangeMarginBox;
    type->__fp_OnHitTest = (void(*)(::app::Fuse::Node*, ::app::Fuse::HitTestContext*))Element__OnHitTest;
    type->__fp_OnHitTestChildren = Element__OnHitTestChildren;
    type->__fp_OnHitTestLocalVisual = Element__OnHitTestLocalVisual;
    type->__fp_OnInvalidateLayout = (void(*)(::app::Fuse::Node*))Element__OnInvalidateLayout;
    type->__fp_OnInvalidateRenderBounds = (bool(*)(::app::Fuse::Node*))Element__OnInvalidateRenderBounds;
    type->__fp_OnIsEnabledChanged = (void(*)(::app::Fuse::Node*))Element__OnIsEnabledChanged;
    type->__fp_OnResetStyle = (void(*)(::app::Fuse::Node*))Element__OnResetStyle;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))Element__OnRooted;
    type->__fp_OnSaveLayoutState = (void(*)(::app::Fuse::Node*))Element__OnSaveLayoutState;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Node*))Element__OnUnrooted;
    type->__fp_PrependImplicitTransform = (void(*)(::app::Fuse::Node*, ::app::Fuse::FastMatrix*))Element__PrependImplicitTransform;
    type->__fp_PrependInverseTransformOrigin = (void(*)(::app::Fuse::Node*, ::app::Fuse::FastMatrix*))Element__PrependInverseTransformOrigin;
    type->__fp_PrependTransformOrigin = (void(*)(::app::Fuse::Node*, ::app::Fuse::FastMatrix*))Element__PrependTransformOrigin;
    type->__interface_1.__fp_Show = (void(*)(void*))Element__Fuse_Triggers_Actions_IShow_Show;
    type->__interface_3.__fp_Collapse = (void(*)(void*))Element__Fuse_Triggers_Actions_ICollapse_Collapse;
    type->__interface_2.__fp_Hide = (void(*)(void*))Element__Fuse_Triggers_Actions_IHide_Hide;
    type->__interface_5.__fp_SetSize = (void(*)(void*, ::app::Uno::Float2))Element__Fuse_Animations_IResize_SetSize;
    type->__interface_4.__fp_get_ActualSize = (::app::Uno::Float3(*)(void*))Element__Fuse_IActualPlacement_get_ActualSize;
    type->__interface_4.__fp_add_Placed = (void(*)(void*, ::uDelegate*))Element__add_Placed;
    type->__interface_4.__fp_remove_Placed = (void(*)(void*, ::uDelegate*))Element__remove_Placed;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Element__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Element__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Element__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Element__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Element__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Element__uType, __interface_5));

    type->SetStrongRefs(
        "_boxSizing", offsetof(Element, _boxSizing),
        "_cache", offsetof(Element, _cache),
        "_effects", offsetof(Element, _effects),
        "_ElementBatchEntry", offsetof(Element, _ElementBatchEntry),
        "_gmsCache", offsetof(Element, _gmsCache),
        "_placedBefore", offsetof(Element, _placedBefore),
        "_transformOrigin", offsetof(Element, _transformOrigin),
        "LayoutChanged", offsetof(Element, LayoutChanged),
        "Placed", offsetof(Element, Placed),
        "PropertyChanged", offsetof(Element, PropertyChanged));

    return type;
}

void Element___ObjInit_1(Element* __this)
{
    __this->_gmsCache = ::uNewArray(::app::Fuse::Elements::Element_GMSCacheItem__typeof(), 2);
    __this->_boxSizing = (::app::Fuse::Elements::BoxSizing*)::app::Fuse::Elements::StandardBoxSizing__Singleton;
    __this->_transformOrigin = ::app::Fuse::Elements::TransformOrigins__Center;
    __this->_renderBoundsWithoutEffectsDirty = true;
    __this->_renderBoundsWithEffectsDirty = true;
    ::app::Fuse::Node___ObjInit(__this);
}

void Element___TypeInit_1(::uStatic* __this)
{
    Element__CachingModeProperty = ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode__New_2(NULL, 0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Element__typeof(), (const void*)Element__OnCachingModeChanged), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Element__Fuse_Elements_CachingMode__typeof(), (const void*)Element__SetCachingMode), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Elements_Element__Fuse_Elements_CachingMode__typeof(), (const void*)Element__GetCachingMode));
    Element__HitTestModeProperty = ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode__New_1(NULL, 5, NULL);
    Element__WidthProperty = ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__New_4(NULL, 0.0f, 0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Element__typeof(), (const void*)::app::Fuse::Node__InvalidateLayout_1), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Element__float__typeof(), (const void*)Element__SetWidth), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Elements_Element__float__typeof(), (const void*)Element__GetWidth));
    Element__HeightProperty = ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__New_4(NULL, 0.0f, 0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Element__typeof(), (const void*)::app::Fuse::Node__InvalidateLayout_1), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Element__float__typeof(), (const void*)Element__SetHeight), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Elements_Element__float__typeof(), (const void*)Element__GetHeight));
    Element__MinWidthProperty = ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__New_3(NULL, 0.0f, 0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Element__typeof(), (const void*)::app::Fuse::Node__InvalidateLayout_1));
    Element__MinHeightProperty = ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__New_3(NULL, 0.0f, 0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Element__typeof(), (const void*)::app::Fuse::Node__InvalidateLayout_1));
    Element__MaxWidthProperty = ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__New_3(NULL, 0.0f, 0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Element__typeof(), (const void*)::app::Fuse::Node__InvalidateLayout_1));
    Element__MaxHeightProperty = ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__New_3(NULL, 0.0f, 0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Element__typeof(), (const void*)::app::Fuse::Node__InvalidateLayout_1));
    Element__AlignmentProperty = ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment__New_1(NULL, 0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Element__typeof(), (const void*)::app::Fuse::Node__InvalidateLayout_1));
    Element__VisibilityProperty = ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility__New_1(NULL, 0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Element__typeof(), (const void*)Element__OnVisibilityChanged));
    Element__MarginProperty = ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4__New_1(NULL, ::app::Uno::Float4__New_3(NULL, 0.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Element__typeof(), (const void*)::app::Fuse::Node__InvalidateLayout_1));
    Element__PaddingProperty = ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4__New_1(NULL, ::app::Uno::Float4__New_3(NULL, 0.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Element__typeof(), (const void*)::app::Fuse::Node__InvalidateLayout_1));
    Element__OffsetProperty = ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__New_3(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), 0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Element__typeof(), (const void*)::app::Fuse::Node__InvalidateLayout_1));
    Element__XProperty = ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__New_3(NULL, 0.0f, 0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Element__typeof(), (const void*)::app::Fuse::Node__InvalidateLayout_1));
    Element__YProperty = ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit__New_3(NULL, 0.0f, 0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Element__typeof(), (const void*)::app::Fuse::Node__InvalidateLayout_1));
    Element__AnchorProperty = ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit__New_3(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), 0, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Element__typeof(), (const void*)::app::Fuse::Node__InvalidateLayout_1));
    Element__ClipToBoundsProperty = ::app::Fuse::StyleProperty__Fuse_Elements_Element__bool__New_1(NULL, false, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Element__typeof(), (const void*)Element__OnClipToBoundsChanged));
    Element__OpacityProperty = ::app::Fuse::StyleProperty__Fuse_Elements_Element__float__New_1(NULL, 1.0f, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Elements_Element__typeof(), (const void*)Element__OnOpacityChanged));
}

void Element__add_LayoutChanged(Element* __this, ::uDelegate* value)
{
    __this->LayoutChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->LayoutChanged, (::uDelegate*)value), ::app::Fuse::Elements::LayoutHandler__typeof());
}

void Element__add_Placed(Element* __this, ::uDelegate* value)
{
    __this->Placed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Placed, (::uDelegate*)value), ::app::Fuse::PlacedHandler__typeof());
}

void Element__add_PropertyChanged(Element* __this, ::uDelegate* value)
{
    __this->PropertyChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->PropertyChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Element__AddStyleEffect(Element* __this, ::app::Fuse::Effects::Effect* e)
{
    ::uPtr< ::app::Fuse::Effects::Effect*>(e)->AddedByStyle = true;
    ::app::Uno::Collections::ICollection__Fuse_Effects_Effect::Add(::uPtr< ::uObject*>(__this->Effects()), e);
}

void Element__ArrangePaddingBox(Element* __this, ::app::Uno::Float2 avsize)
{
}

::app::Uno::Rect Element__CalcRenderBounds(Element* __this)
{
    return ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());
}

::app::Uno::Rect Element__CalcRenderBoundsWithEffects(Element* __this)
{
    ::app::Uno::Rect r = __this->RenderBoundsWithoutEffects();

    if (__this->HasActiveEffects())
    {
        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Effects_Effect::Count(::uPtr< ::uObject*>(__this->Effects())); i++)
        {
            if (::uPtr< ::app::Fuse::Effects::Effect*>(::app::Uno::Collections::IList__Fuse_Effects_Effect::Item(::uPtr< ::uObject*>(__this->Effects()), i))->Active())
            {
                r = ::uPtr< ::app::Fuse::Effects::Effect*>(::app::Uno::Collections::IList__Fuse_Effects_Effect::Item(::uPtr< ::uObject*>(__this->Effects()), i))->ModifyRenderBounds(r);
            }
        }
    }

    return r;
}

::app::Uno::Graphics::Framebuffer* Element__CaptureRegion(Element* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect region, ::app::Uno::Float2 padding)
{
    ::app::Fuse::OrthographicFrustum* collection_123;
    ::app::Uno::Float2 sz = ::app::Uno::Float2__op_Addition_2(NULL, region.Size(), ::app::Uno::Float2__op_Multiply_2(NULL, padding, 2.0f));
    ::app::Uno::Float2 pixelSize = ::app::Uno::Math__Ceil_2(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, sz, __this->AbsoluteZoom()));
    ::app::Uno::Int2 fsz = ::app::Uno::Int2__New_2(NULL, (int)pixelSize.X, (int)pixelSize.Y);

    if ((fsz.X > ::app::Uno::Graphics::Texture2D__get_MaxSize(NULL)) || (fsz.Y > ::app::Uno::Graphics::Texture2D__get_MaxSize(NULL)))
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("CaptureRegion bigger than maximum texture size, dropping rendering (size: "), ::uBox(::app::Uno::Int2__typeof(), fsz)), ::uGetConstString(", max-size: ")), ::uBox< int>(::app::Uno::Int__typeof(), ::app::Uno::Graphics::Texture2D__get_MaxSize(NULL))), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno"), 567);
        return NULL;
    }

    ::app::Uno::Graphics::Framebuffer* fb = ::app::Fuse::FramebufferPool__Lock(NULL, fsz, 3, false);
    collection_123 = ::app::Fuse::OrthographicFrustum__New_1(NULL);
    ::uPtr< ::app::Fuse::OrthographicFrustum*>(collection_123)->Origin(::app::Uno::Float2__New_2(NULL, region.Left - padding.X, region.Top - padding.Y));
    collection_123->Size(sz);
    collection_123->LocalFromWorld(__this->WorldTransformInverse());
    ::app::Fuse::OrthographicFrustum* cc = collection_123;
    ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushRenderTargetViewport(fb, (::uObject*)cc);
    dc->Clear(::app::Uno::Float4__New_3(NULL, 0.0f), 1.0f);
    ::app::Uno::Recti oldScissor = dc->Scissor();
    dc->Scissor(::app::Uno::Recti__New_1(NULL, 0, 0, fsz.X, fsz.Y));
    __this->LocalDraw(dc);
    dc->Scissor(oldScissor);
    dc->PopRenderTargetViewport();
    return fb;
}

void Element__Composit(Element* __this, ::app::Fuse::DrawContext* dc)
{
    if (((__this->Opacity() <= 0.0f) || (__this->RenderBoundsWithEffects().Size().X < 1.0f)) || (__this->RenderBoundsWithEffects().Size().Y < 1.0f))
    {
        return;
    }

    if (__this->Opacity() >= 1.0f)
    {
        ::uPtr< ::app::Fuse::Elements::Cache*>(__this->Cache())->DrawHeuristically(dc);
        return;
    }

    if (__this->FastTrackDrawWithOpacity(dc))
    {
        return;
    }

    ::uPtr< ::app::Fuse::Elements::Cache*>(__this->Cache())->PinAndValidate(dc);
    ::uPtr< ::app::Fuse::Elements::Cache*>(__this->Cache())->Blit(dc, __this->Opacity());
    ::uPtr< ::app::Fuse::Elements::Cache*>(__this->Cache())->Unpin();
}

void Element__CompositEffects(Element* __this, ::app::Fuse::DrawContext* dc)
{
    bool hasActiveEffects = __this->HasActiveEffects() && true;

    if (hasActiveEffects)
    {
        for (::uObject* enum_125 = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Effects_Effect*>(__this->_effects)->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
        {
            ::app::Fuse::Effects::Effect* e = ::app::Uno::Collections::IEnumerator__Fuse_Effects_Effect::Current(::uPtr< ::uObject*>(enum_125));

            if ((::uPtr< ::app::Fuse::Effects::Effect*>(e)->Type() == 0) && ::uPtr< ::app::Fuse::Effects::Effect*>(e)->Active())
            {
                double t = double();
                ::uPtr< ::app::Fuse::Effects::Effect*>(e)->Render(dc);
            }
        }
    }

    if (hasActiveEffects && __this->HasCompositionEffect())
    {
        for (::uObject* enum_126 = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Effects_Effect*>(__this->_effects)->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_126)); )
        {
            ::app::Fuse::Effects::Effect* e = ::app::Uno::Collections::IEnumerator__Fuse_Effects_Effect::Current(::uPtr< ::uObject*>(enum_126));

            if ((::uPtr< ::app::Fuse::Effects::Effect*>(e)->Type() == 1) && ::uPtr< ::app::Fuse::Effects::Effect*>(e)->Active())
            {
                double t = double();
                ::uPtr< ::app::Fuse::Effects::Effect*>(e)->Render(dc);
            }
        }
    }
    else
    {
        __this->LocalDraw(dc);
    }

    if (hasActiveEffects)
    {
        for (::uObject* enum_127 = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Effects_Effect*>(__this->_effects)->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_127)); )
        {
            ::app::Fuse::Effects::Effect* e = ::app::Uno::Collections::IEnumerator__Fuse_Effects_Effect::Current(::uPtr< ::uObject*>(enum_127));

            if ((::uPtr< ::app::Fuse::Effects::Effect*>(e)->Type() == 2) && ::uPtr< ::app::Fuse::Effects::Effect*>(e)->Active())
            {
                double t = double();
                ::uPtr< ::app::Fuse::Effects::Effect*>(e)->Render(dc);
            }
        }
    }
}

void Element__DispatchPlacement(Element* __this)
{
    ::app::Uno::Float4x4 ind_131 = ::app::Uno::Float4x4();
    ::app::Uno::Float4x4 ind_132 = ::app::Uno::Float4x4();

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Placed, NULL))
    {
        ::app::Fuse::PlacedArgs* args = ::app::Fuse::PlacedArgs__New_2(NULL, __this->_ppPrevPlacedBefore, __this->_ppPrevPosition, __this->_ppPrevSize);
        ::uPtr< ::uDelegate*>(__this->Placed)->InvokeVoid< ::uObject*, ::app::Fuse::PlacedArgs*>((::uObject*)__this, args);
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->LayoutChanged, NULL) && __this->HasSavedLayoutChange())
    {
        ::app::Uno::Float3 positionChange = ::app::Uno::Float3__op_Subtraction_2(NULL, (ind_131 = __this->_ppPrevWorldTransform, ::app::Uno::Float3__New_2(NULL, ind_131.M41, ind_131.M42, ind_131.M43)), (ind_132 = __this->WorldTransform(), ::app::Uno::Float3__New_2(NULL, ind_132.M41, ind_132.M42, ind_132.M43)));

        if (::app::Uno::Float3__op_Inequality(NULL, positionChange, ::app::Uno::Float3__New_1(NULL, 0.0f)) || ::app::Uno::Float2__op_Inequality(NULL, __this->_ppPrevSize, __this->ActualSize()))
        {
            ::uPtr< ::uDelegate*>(__this->LayoutChanged)->InvokeVoid< ::uObject*, ::app::Fuse::Elements::LayoutArgs*>((::uObject*)__this, ::app::Fuse::Elements::LayoutArgs__New_2(NULL, positionChange, __this->_ppPrevSize, __this->ActualSize(), __this->_ppPrevPlacedBefore));
        }
    }

    __this->_placedBefore = __this->Parent();
}

void Element__Draw(Element* __this, ::app::Fuse::DrawContext* dc)
{
    if (__this->Visibility() != 0)
    {
        return;
    }

    double t = double();
    ::app::Uno::Recti visibleRect = __this->GetVisibleViewportInvertPixelRect(dc, __this->RenderBoundsWithEffects());

    if (!::app::Uno::Recti__New_2(NULL, ::app::Uno::Int2__New_1(NULL, 0), ::uPtr< ::app::Fuse::DrawContext*>(dc)->ViewportPixelSize()).Intersects(visibleRect))
    {
        __this->ValidateVisual();
        return;
    }

    if (__this->NeedsClipping())
    {
        ::app::Uno::Recti oldScissor = ::uPtr< ::app::Fuse::DrawContext*>(dc)->Scissor();
        dc->Scissor(visibleRect);
        __this->Composit(dc);
        dc->Scissor(oldScissor);
    }
    else
    {
        __this->Composit(dc);
    }

    __this->ValidateVisual();
}

void Element__DrawSelection(Element* __this, ::app::Fuse::DrawContext* dc)
{
    __this->DrawLocalSelectionRect(dc, ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f), __this->ActualSize()));
}

bool Element__FastTrackDrawWithOpacity(Element* __this, ::app::Fuse::DrawContext* dc)
{
    return false;
}

void Element__Fuse_Animations_IResize_SetSize(Element* __this, ::app::Uno::Float2 size)
{
    __this->_actualSize = size;
    __this->InternArrangePaddingBox(size);
    __this->InvalidateVisual();
    __this->InvalidateRenderBounds();
    __this->InvalidateLocalTransform();
}

::app::Uno::Float3 Element__Fuse_IActualPlacement_get_ActualSize(Element* __this)
{
    return ::app::Uno::Float3__New_4(NULL, __this->ActualSize(), 0.0f);
}

void Element__Fuse_Triggers_Actions_ICollapse_Collapse(Element* __this)
{
    __this->Visibility(1);
}

void Element__Fuse_Triggers_Actions_IHide_Hide(Element* __this)
{
    __this->Visibility(2);
}

void Element__Fuse_Triggers_Actions_IShow_Show(Element* __this)
{
    __this->Visibility(0);
}

::app::Uno::Float2 Element__get_AbsoluteViewportOrigin(Element* __this)
{
    ::app::Uno::Float2 p = __this->ActualPosition();
    p = ::app::Uno::Float2__op_Addition_2(NULL, p, ::app::Fuse::Node__get_AbsoluteViewportOrigin(__this));
    return p;
}

::app::Uno::Float2 Element__get_ActualAnchor(Element* __this)
{
    return __this->_actualAnchor;
}

::app::Uno::Float2 Element__get_ActualPosition(Element* __this)
{
    if (__this->_haveActualPositionCache)
    {
        return __this->_actualPositionCache;
    }

    if (!__this->SnapToPixels())
    {
        return __this->_actualPosition;
    }

    ::app::Uno::Float2 parentP = ::app::Uno::Float2__New_1(NULL, 0.0f);

    if (__this->Parent() != NULL)
    {
        parentP = ::uPtr< ::app::Fuse::Node*>(__this->Parent())->AbsoluteViewportOrigin();
    }

    ::app::Uno::Float2 p = ::app::Uno::Float2__op_Addition_2(NULL, parentP, __this->_actualPosition);
    p = __this->Snap(p);
    p = ::app::Uno::Float2__op_Subtraction_2(NULL, p, parentP);
    __this->_actualPositionCache = p;
    __this->_haveActualPositionCache = true;
    return p;
}

::app::Uno::Float2 Element__get_ActualSize(Element* __this)
{
    return __this->_actualSize;
}

int Element__get_Alignment(Element* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment*>(Element__AlignmentProperty)->Get(__this);
}

Element* Element__get_AncestorElement(Element* __this)
{
    ::app::Fuse::Node* n = __this->Parent();

    while (n != NULL)
    {
        Element* elm = ::uAs< Element*>(n, Element__typeof());

        if (elm != NULL)
        {
            return elm;
        }

        n = ::uPtr< ::app::Fuse::Node*>(n)->Parent();
    }

    return NULL;
}

::app::Uno::Float2 Element__get_Anchor(Element* __this)
{
    return ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit*>(Element__AnchorProperty)->Get(__this);
}

::app::Fuse::Elements::Cache* Element__get_Cache(Element* __this)
{
    ::app::Fuse::Elements::Cache* ind_133 = __this->_cache;
    return (ind_133 != NULL) ? ind_133 : (__this->_cache = ::app::Fuse::Elements::Cache__New_1(NULL, __this));
}

int Element__get_CachingMode(Element* __this)
{
    return __this->_cachingMode;
}

bool Element__get_ClipToBounds(Element* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__bool*>(Element__ClipToBoundsProperty)->Get(__this);
}

::uObject* Element__get_Effects(Element* __this)
{
    if (__this->_effects == NULL)
    {
        __this->_effects = ::app::Uno::Collections::ObservableList__Fuse_Effects_Effect__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Effects_Effect__typeof(), (const void*)Element__OnEffectAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Effects_Effect__typeof(), (const void*)Element__OnEffectRemoved, __this));
    }

    return (::uObject*)__this->_effects;
}

::app::Fuse::Elements::ElementBatchEntry* Element__get_ElementBatchEntry(Element* __this)
{
    return __this->_ElementBatchEntry;
}

bool Element__get_HasActiveEffects(Element* __this)
{
    if (__this->HasEffects())
    {
        for (::uObject* enum_124 = ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Effects_Effect*>(__this->_effects)->GetEnumerator(); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
        {
            ::app::Fuse::Effects::Effect* e = ::app::Uno::Collections::IEnumerator__Fuse_Effects_Effect::Current(::uPtr< ::uObject*>(enum_124));

            if (::uPtr< ::app::Fuse::Effects::Effect*>(e)->Active())
            {
                return true;
            }
        }
    }

    return false;
}

bool Element__get_HasCompositionEffect(Element* __this)
{
    return __this->_compositionEffects > 0;
}

bool Element__get_HasEffects(Element* __this)
{
    return (__this->_effects != NULL) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Effects_Effect*>(__this->_effects)->Count() > 0);
}

float Element__get_Height(Element* __this)
{
    return __this->_height;
}

::app::Fuse::NodeBounds* Element__get_HitTestChildrenBounds(Element* __this)
{
    if ((__this->HitTestMode() & 4) == 4)
    {
        return ::app::Fuse::Node__get_HitTestChildrenBounds(__this);
    }

    return ::app::Fuse::NodeBounds__get_Empty(NULL);
}

::app::Fuse::NodeBounds* Element__get_HitTestLocalBounds(Element* __this)
{
    ::app::Fuse::NodeBounds* n = ::app::Fuse::NodeBounds__get_Empty(NULL);

    if ((__this->HitTestMode() & 2) == 2)
    {
        n = ::uPtr< ::app::Fuse::NodeBounds*>(n)->AddRect(::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());
    }

    if ((__this->HitTestMode() & 1) == 1)
    {
        n = ::uPtr< ::app::Fuse::NodeBounds*>(n)->Merge(__this->HitTestLocalVisualBounds(), NULL);
    }

    return n;
}

::app::Fuse::NodeBounds* Element__get_HitTestLocalVisualBounds(Element* __this)
{
    return ::app::Fuse::NodeBounds__get_Empty(NULL);
}

int Element__get_HitTestMode(Element* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode*>(Element__HitTestModeProperty)->Get(__this);
}

float Element__get_HitTestOpacityThreshold(Element* __this)
{
    return __this->_hitTestOpacityThreshold;
}

bool Element__get_IsLocalVisible(Element* __this)
{
    return __this->Visibility() == 0;
}

::app::Uno::Geometry::Box Element__get_LocalBounds(Element* __this)
{
    return ::app::Uno::Geometry::Box__New_1(NULL, ::app::Uno::Float3__New_1(NULL, 0.0f), ::app::Uno::Float3__New_4(NULL, __this->ActualSize(), 0.0f));
}

::app::Uno::Rect Element__get_LocalRenderBounds(Element* __this)
{
    return __this->RenderBoundsWithEffects();
}

::app::Uno::Float4 Element__get_Margin(Element* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4*>(Element__MarginProperty)->Get(__this);
}

float Element__get_MaxHeight(Element* __this)
{
    return ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(Element__MaxHeightProperty)->Get(__this);
}

float Element__get_MaxWidth(Element* __this)
{
    return ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(Element__MaxWidthProperty)->Get(__this);
}

float Element__get_MinHeight(Element* __this)
{
    return ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(Element__MinHeightProperty)->Get(__this);
}

float Element__get_MinWidth(Element* __this)
{
    return ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(Element__MinWidthProperty)->Get(__this);
}

bool Element__get_NeedsClipping(Element* __this)
{
    return __this->ClipToBounds();
}

::app::Uno::Float2 Element__get_Offset(Element* __this)
{
    return ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit*>(Element__OffsetProperty)->Get(__this);
}

float Element__get_Opacity(Element* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float*>(Element__OpacityProperty)->Get(__this);
}

::app::Uno::Float4 Element__get_Padding(Element* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4*>(Element__PaddingProperty)->Get(__this);
}

::app::Uno::Rect Element__get_RenderBoundsWithEffects(Element* __this)
{
    if (__this->_renderBoundsWithEffectsDirty)
    {
        __this->_renderBoundsWithEffects = __this->CalcRenderBoundsWithEffects();
        __this->_renderBoundsWithEffectsDirty = false;
    }

    return __this->_renderBoundsWithEffects;
}

::app::Uno::Rect Element__get_RenderBoundsWithoutEffects(Element* __this)
{
    if (__this->_renderBoundsWithoutEffectsDirty)
    {
        __this->_renderBoundsWithoutEffects = __this->CalcRenderBounds();

        if (__this->ClipToBounds())
        {
            __this->_renderBoundsWithoutEffects = ::app::Uno::Rect__Intersect(NULL, __this->_renderBoundsWithoutEffects, ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize()));
        }

        __this->_renderBoundsWithoutEffectsDirty = false;
    }

    return __this->_renderBoundsWithoutEffects;
}

::uObject* Element__get_TransformOrigin(Element* __this)
{
    return __this->_transformOrigin;
}

int Element__get_Visibility(Element* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility*>(Element__VisibilityProperty)->Get(__this);
}

float Element__get_Width(Element* __this)
{
    return __this->_width;
}

float Element__get_X(Element* __this)
{
    return ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(Element__XProperty)->Get(__this);
}

float Element__get_Y(Element* __this)
{
    return ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(Element__YProperty)->Get(__this);
}

int Element__GetCachingMode(::uStatic* __this, Element* elm)
{
    return ::uPtr< Element*>(elm)->_cachingMode;
}

::app::Uno::Float2 Element__GetContentSize(Element* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

float Element__GetHeight(::uStatic* __this, Element* elm)
{
    return ::uPtr< Element*>(elm)->_height;
}

::app::Uno::Float2 Element__GetMarginSize(Element* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::app::Fuse::Elements::Element_GMSCacheItem collection_128 = ::app::Fuse::Elements::Element_GMSCacheItem();

    for (int i = 0; i < __this->_gmsCount; ++i)
    {
        ::app::Fuse::Elements::Element_GMSCacheItem g = ::uPtr< ::uArray*>(__this->_gmsCache)->Item< ::app::Fuse::Elements::Element_GMSCacheItem>(i);

        if ((fillSet == g.fillSet) && ::app::Uno::Float2__op_Equality(NULL, fillSize, g.fillSize))
        {
            return g.result;
        }
    }

    ::app::Uno::Float2 sz = ::uPtr< ::app::Fuse::Elements::BoxSizing*>(__this->_boxSizing)->CalcMarginSize(__this, fillSize, fillSet);
    int n = (__this->_gmsAt++) % 2;
    __this->_gmsCount = ::app::Uno::Math__Min_5(NULL, 2, __this->_gmsCount + 1);
    ::uPtr< ::uArray*>(__this->_gmsCache)->Item< ::app::Fuse::Elements::Element_GMSCacheItem>(n) = (collection_128 = ::uDefault< ::app::Fuse::Elements::Element_GMSCacheItem>(), collection_128.fillSize = fillSize, collection_128.fillSet = fillSet, collection_128.result = sz, collection_128);
    return sz;
}

::app::Uno::Recti Element__GetViewportInvertPixelRect(Element* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect localRegion)
{
    ::app::Uno::Float4x4 transformMatrix = ::uPtr< ::app::Fuse::DrawContext*>(dc)->GetLocalToClipTransform((::app::Fuse::Node*)__this);
    ::app::Uno::Rect esr = ::app::Uno::Rect__Transform(NULL, localRegion, transformMatrix);
    ::app::Uno::Float2 low = ::app::Uno::Math__Floor_2(NULL, ::app::Uno::Float2__op_Addition_1(NULL, 0.005f, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Math__Min_13(NULL, esr.Minimum(), esr.Maximum()), 1.0f), 2.0f), ::app::Uno::Float2__op_Implicit_4(NULL, dc->ViewportPixelSize()))));
    ::app::Uno::Float2 high = ::app::Uno::Math__Ceil_2(NULL, ::app::Uno::Float2__op_Subtraction(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Addition(NULL, ::app::Uno::Math__Max_10(NULL, esr.Minimum(), esr.Maximum()), 1.0f), 2.0f), ::app::Uno::Float2__op_Implicit_4(NULL, dc->ViewportPixelSize())), 0.005f));
    ::app::Uno::Recti r = ::app::Uno::Recti__New_1(NULL, (int)low.X, (int)((float)dc->ViewportPixelSize().Y - high.Y), (int)high.X, (int)((float)dc->ViewportPixelSize().Y - low.Y));
    return r;
}

::app::Uno::Recti Element__GetVisibleViewportInvertPixelRect(Element* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Rect localRegion)
{
    return ::app::Uno::Recti__Intersect(NULL, ::uPtr< ::app::Fuse::DrawContext*>(dc)->Scissor(), __this->GetViewportInvertPixelRect(dc, localRegion));
}

float Element__GetWidth(::uStatic* __this, Element* elm)
{
    return ::uPtr< Element*>(elm)->_width;
}

void Element__GMSReset(Element* __this)
{
    __this->_gmsCount = 0;
    __this->_gmsAt = 0;
}

void Element__InternArrangePaddingBox(Element* __this, ::app::Uno::Float2 avsize)
{
    __this->ArrangePaddingBox(avsize);
}

::app::Uno::Float2 Element__InternGetContentSize(Element* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    return __this->GetContentSize(fillSize, fillSet);
}

void Element__InvalidateLocalTransform(Element* __this)
{
    __this->InvalidateVisualComposition();
    Element* p = __this->AncestorElement();

    if (p != NULL)
    {
        ::uPtr< Element*>(p)->InvalidateRenderBounds();
    }

    if (__this->ElementBatchEntry() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(__this->ElementBatchEntry())->InvalidateTransform();
    }

    ::app::Fuse::Node__InvalidateLocalTransform(__this);
}

void Element__InvalidateRenderBoundsWithEffects(Element* __this)
{
    __this->OnInvalidateRenderBoundsWithEffects();

    if (__this->Parent() != NULL)
    {
        ::uPtr< ::app::Fuse::Node*>(__this->Parent())->InvalidateRenderBounds();
    }
}

void Element__InvalidateVisual(Element* __this)
{
    if (__this->Cache() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Cache*>(__this->Cache())->Invalidate();
    }

    if (__this->ElementBatchEntry() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(__this->ElementBatchEntry())->InvalidateVisual();
    }

    if (__this->Visibility() != 0)
    {
        return;
    }

    ::app::Fuse::Node__InvalidateVisual(__this);
}

void Element__InvalidateVisualComposition(Element* __this)
{
    if (__this->ElementBatchEntry() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(__this->ElementBatchEntry())->InvalidateVisualComposition();
    }

    ::app::Fuse::Node* p = __this->Parent();

    if (p != NULL)
    {
        ::uPtr< ::app::Fuse::Node*>(p)->InvalidateVisual();
    }
    else
    {
        __this->InvalidateVisual();
    }
}

int Element__IsMarginBoxDependent(Element* __this, ::app::Fuse::Node* child)
{
    if (!::uPtr< ::app::Fuse::Elements::BoxSizing*>(__this->_boxSizing)->IsContainerRelativeSize(__this))
    {
        return 2;
    }

    return 1;
}

bool Element__IsPointInside(Element* __this, ::app::Uno::Float2 localPoint)
{
    return !((((localPoint.X < 0.0f) || (localPoint.Y < 0.0f)) || (localPoint.X > __this->ActualSize().X)) || (localPoint.Y > __this->ActualSize().Y));
}

void Element__LocalDraw(Element* __this, ::app::Fuse::DrawContext* dc)
{
    __this->OnDraw(dc);
}

void Element__NotifyPropertyChanged(Element* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->PropertyChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->PropertyChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__Empty);
    }
}

::app::Uno::Float2 Element__OnArrangeMarginBox(Element* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet)
{
    ::app::Uno::Float2 marginBox = ::uPtr< ::app::Fuse::Elements::BoxSizing*>(__this->_boxSizing)->ArrangeMarginBox(__this, position, availableSize, availSet);
    __this->_haveActualPositionCache = false;
    return marginBox;
}

void Element__OnCachingModeChanged(::uStatic* __this, Element* elm)
{
    ::uPtr< Element*>(elm)->InvalidateVisual();
}

void Element__OnClipToBoundsChanged(::uStatic* __this, Element* elm)
{
    ::uPtr< Element*>(elm)->InvalidateVisual();
    elm->InvalidateHitTestBounds();
    elm->NotifyPropertyChanged();
}

void Element__OnEffectAdded(Element* __this, ::app::Fuse::Effects::Effect* e)
{
    if (::uPtr< ::app::Fuse::Effects::Effect*>(e)->Type() == 1)
    {
        __this->_compositionEffects++;
    }

    ::uPtr< ::app::Fuse::Effects::Effect*>(e)->Added(__this);
    e->add_RenderingChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Effects_Effect__typeof(), (const void*)Element__OnEffectRenderingChanged, __this));
    e->add_RenderBoundsChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Effects_Effect__typeof(), (const void*)Element__OnEffectRenderBoundsChanged, __this));
    __this->InvalidateVisual();
}

void Element__OnEffectRemoved(Element* __this, ::app::Fuse::Effects::Effect* e)
{
    if (::uPtr< ::app::Fuse::Effects::Effect*>(e)->Type() == 1)
    {
        __this->_compositionEffects--;
    }

    ::uPtr< ::app::Fuse::Effects::Effect*>(e)->Removed(__this);
    e->remove_RenderingChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Effects_Effect__typeof(), (const void*)Element__OnEffectRenderingChanged, __this));
    e->remove_RenderBoundsChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Effects_Effect__typeof(), (const void*)Element__OnEffectRenderBoundsChanged, __this));
    __this->InvalidateVisual();
    e->AddedByStyle = false;
}

void Element__OnEffectRenderBoundsChanged(Element* __this, ::app::Fuse::Effects::Effect* e)
{
    __this->InvalidateRenderBoundsWithEffects();
}

void Element__OnEffectRenderingChanged(Element* __this, ::app::Fuse::Effects::Effect* e)
{
    __this->InvalidateVisual();
}

void Element__OnHitTest(Element* __this, ::app::Fuse::HitTestContext* htc)
{
    if (__this->Opacity() <= __this->HitTestOpacityThreshold())
    {
        return;
    }

    if (__this->ClipToBounds() && !__this->IsPointInside(::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint()))
    {
        return;
    }

    if ((__this->HitTestMode() & 4) == 4)
    {
        __this->OnHitTestChildren(htc);
    }

    if ((__this->HitTestMode() & 1) == 1)
    {
        __this->OnHitTestLocalVisual(htc);
    }

    if ((__this->HitTestMode() & 2) == 2)
    {
        if (__this->IsPointInside(::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint()))
        {
            ::uPtr< ::app::Fuse::HitTestContext*>(htc)->Hit_1((::app::Fuse::Node*)__this);
        }
    }
}

void Element__OnHitTestChildren(Element* __this, ::app::Fuse::HitTestContext* htc)
{
}

void Element__OnHitTestLocalVisual(Element* __this, ::app::Fuse::HitTestContext* htc)
{
}

void Element__OnInvalidateLayout(Element* __this)
{
    __this->GMSReset();
}

bool Element__OnInvalidateRenderBounds(Element* __this)
{
    __this->_renderBoundsWithoutEffectsDirty = true;
    __this->OnInvalidateRenderBoundsWithEffects();

    if (__this->ElementBatchEntry() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(__this->ElementBatchEntry())->InvalidateRenderBounds();
    }

    return __this->ClipToBounds();
}

void Element__OnInvalidateRenderBoundsWithEffects(Element* __this)
{
    if (__this->ElementBatchEntry() != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(__this->ElementBatchEntry())->InvalidateRenderBounds();
    }

    __this->_renderBoundsWithEffectsDirty = true;
}

void Element__OnIsEnabledChanged(Element* __this)
{
    ::app::Fuse::Node__OnIsEnabledChanged(__this);
    __this->InvalidateVisual();
}

void Element__OnOpacityChanged(::uStatic* __this, Element* elm)
{
    ::uPtr< Element*>(elm)->InvalidateVisualComposition();
    elm->NotifyPropertyChanged();
}

void Element__OnResetStyle(Element* __this)
{
    if (__this->_effects != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Effects_Effect*>(__this->_effects)->Count(); i++)
        {
            if (::uPtr< ::app::Fuse::Effects::Effect*>(::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Effects_Effect*>(__this->_effects)->Item(i))->AddedByStyle)
            {
                ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Effects_Effect*>(__this->_effects)->RemoveAt(i--);
            }
        }
    }

    ::app::Fuse::Node__OnResetStyle(__this);
}

void Element__OnRooted(Element* __this)
{
    if (__this->HasEffects())
    {
        for (::uObject* enum_129 = ::app::Uno::Collections::IEnumerable__Fuse_Effects_Effect::GetEnumerator(::uPtr< ::uObject*>(__this->Effects())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_129)); )
        {
            ::app::Fuse::Effects::Effect* e = ::app::Uno::Collections::IEnumerator__Fuse_Effects_Effect::Current(::uPtr< ::uObject*>(enum_129));
            ::uPtr< ::app::Fuse::Effects::Effect*>(e)->Rooted();
        }
    }

    __this->InvalidateVisualComposition();
    ::app::Fuse::Node__OnRooted(__this);
}

void Element__OnSaveLayoutState(Element* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->LayoutChanged, NULL))
    {
        __this->_ppPrevWorldTransform = __this->WorldTransform();
    }
}

void Element__OnUnrooted(Element* __this)
{
    __this->InvalidateVisualComposition();

    if (__this->HasEffects())
    {
        for (::uObject* enum_130 = ::app::Uno::Collections::IEnumerable__Fuse_Effects_Effect::GetEnumerator(::uPtr< ::uObject*>(__this->Effects())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_130)); )
        {
            ::app::Fuse::Effects::Effect* e = ::app::Uno::Collections::IEnumerator__Fuse_Effects_Effect::Current(::uPtr< ::uObject*>(enum_130));
            ::uPtr< ::app::Fuse::Effects::Effect*>(e)->Unrooted();
        }
    }

    ::app::Fuse::Node__OnUnrooted(__this);
}

void Element__OnVisibilityChanged(::uStatic* __this, Element* elm)
{
    ::uPtr< Element*>(elm)->OnLocalVisibleChanged();

    if ((elm->_oldVisibility == 1) || (elm->Visibility() == 1))
    {
        elm->InvalidateLayout(2);
    }

    elm->_oldVisibility = elm->Visibility();
    elm->InvalidateVisualComposition();
}

void Element__PerformPlacement(Element* __this, ::app::Uno::Float2 position, ::app::Uno::Float2 size)
{
    ::app::Uno::Float2 s = ::app::Uno::Math__Max_10(NULL, size, ::app::Uno::Float2__New_1(NULL, 0.0f));
    __this->_ppPrevSize = __this->ActualSize();
    __this->_ppPrevPosition = __this->ActualPosition();
    __this->_ppPrevPlacedBefore = __this->_placedBefore != NULL;
    bool newSize = (__this->_ppPrevSize.X != s.X) || (__this->_ppPrevSize.Y != s.Y);

    if (newSize)
    {
        __this->_actualSize = s;

        if (newSize)
        {
            __this->InvalidateVisual();
        }
    }

    bool newPosition = (__this->_ppPrevPosition.X != position.X) || (__this->_ppPrevPosition.Y != position.Y);

    if (newPosition)
    {
        __this->_actualPosition = position;
        __this->InvalidateVisualComposition();
    }

    bool newParent = __this->_placedBefore != __this->Parent();

    if ((newParent || newPosition) || newSize)
    {
        __this->InvalidateRenderBounds();
        __this->InvalidateLocalTransform();

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Placed, NULL) || ::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->LayoutChanged, NULL))
        {
            ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Element__DispatchPlacement, __this));
        }
    }
}

void Element__PrependImplicitTransform(Element* __this, ::app::Fuse::FastMatrix* m)
{
    ::app::Uno::Float2 actualPosition = __this->ActualPosition();

    if ((actualPosition.X != 0.0f) || (actualPosition.Y != 0.0f))
    {
        ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependTranslation(::app::Uno::Float3__New_4(NULL, ::app::Uno::Float2__New_2(NULL, actualPosition.X, actualPosition.Y), 0.0f));
    }
}

void Element__PrependInverseTransformOrigin(Element* __this, ::app::Fuse::FastMatrix* m)
{
    ::app::Uno::Float3 off = ::app::Fuse::Elements::ITransformOrigin::GetOffset(::uPtr< ::uObject*>(__this->TransformOrigin()), __this);
    ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependTranslation(::app::Uno::Float3__op_UnaryNegation(NULL, off));
}

void Element__PrependTransformOrigin(Element* __this, ::app::Fuse::FastMatrix* m)
{
    ::app::Uno::Float3 off = ::app::Fuse::Elements::ITransformOrigin::GetOffset(::uPtr< ::uObject*>(__this->TransformOrigin()), __this);
    ::uPtr< ::app::Fuse::FastMatrix*>(m)->PrependTranslation(off);
}

void Element__remove_LayoutChanged(Element* __this, ::uDelegate* value)
{
    __this->LayoutChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->LayoutChanged, (::uDelegate*)value), ::app::Fuse::Elements::LayoutHandler__typeof());
}

void Element__remove_Placed(Element* __this, ::uDelegate* value)
{
    __this->Placed = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->Placed, (::uDelegate*)value), ::app::Fuse::PlacedHandler__typeof());
}

void Element__remove_PropertyChanged(Element* __this, ::uDelegate* value)
{
    __this->PropertyChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->PropertyChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void Element__set_ActualAnchor(Element* __this, ::app::Uno::Float2 value)
{
    __this->_actualAnchor = value;
}

void Element__set_Alignment(Element* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_Alignment*>(Element__AlignmentProperty)->Set(__this, value);
}

void Element__set_Anchor(Element* __this, ::app::Uno::Float2 value)
{
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit*>(Element__AnchorProperty)->Set(__this, value);
}

void Element__set_CachingMode(Element* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_CachingMode*>(Element__CachingModeProperty)->Set(__this, value);
}

void Element__set_ClipToBounds(Element* __this, bool value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__bool*>(Element__ClipToBoundsProperty)->Set(__this, value);
}

void Element__set_ElementBatchEntry(Element* __this, ::app::Fuse::Elements::ElementBatchEntry* value)
{
    __this->_ElementBatchEntry = value;
}

void Element__set_Height(Element* __this, float value)
{
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(Element__HeightProperty)->Set(__this, value);
}

void Element__set_HitTestMode(Element* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_HitTestMode*>(Element__HitTestModeProperty)->Set(__this, value);
}

void Element__set_HitTestOpacityThreshold(Element* __this, float value)
{
    __this->_hitTestOpacityThreshold = value;
}

void Element__set_Margin(Element* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4*>(Element__MarginProperty)->Set(__this, value);
}

void Element__set_MaxHeight(Element* __this, float value)
{
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(Element__MaxHeightProperty)->Set(__this, value);
}

void Element__set_MaxWidth(Element* __this, float value)
{
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(Element__MaxWidthProperty)->Set(__this, value);
}

void Element__set_MinHeight(Element* __this, float value)
{
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(Element__MinHeightProperty)->Set(__this, value);
}

void Element__set_MinWidth(Element* __this, float value)
{
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(Element__MinWidthProperty)->Set(__this, value);
}

void Element__set_Offset(Element* __this, ::app::Uno::Float2 value)
{
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit*>(Element__OffsetProperty)->Set(__this, value);
}

void Element__set_Opacity(Element* __this, float value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float*>(Element__OpacityProperty)->Set(__this, value);
}

void Element__set_Padding(Element* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4*>(Element__PaddingProperty)->Set(__this, value);
}

void Element__set_TransformOrigin(Element* __this, ::uObject* value)
{
    if (__this->_transformOrigin != value)
    {
        __this->_transformOrigin = value;
        __this->InvalidateLocalTransform();
    }
}

void Element__set_Visibility(Element* __this, int value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__Fuse_Elements_Visibility*>(Element__VisibilityProperty)->Set(__this, value);
}

void Element__set_Width(Element* __this, float value)
{
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(Element__WidthProperty)->Set(__this, value);
}

void Element__set_X(Element* __this, float value)
{
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(Element__XProperty)->Set(__this, value);
}

void Element__set_Y(Element* __this, float value)
{
    ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(Element__YProperty)->Set(__this, value);
}

void Element__SetCachingMode(::uStatic* __this, Element* elm, int value)
{
    ::uPtr< Element*>(elm)->_cachingMode = value;
}

void Element__SetHeight(::uStatic* __this, Element* elm, float val)
{
    ::uPtr< Element*>(elm)->_height = val;
}

void Element__SetWidth(::uStatic* __this, Element* elm, float val)
{
    ::uPtr< Element*>(elm)->_width = val;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Element_GMSCacheItem__uType* Element_GMSCacheItem__typeof()
{
    static ::uStaticStrong<Element_GMSCacheItem__uType*> type;
    if (type != NULL) return type;

    type = (Element_GMSCacheItem__uType*)::uAllocStructType(sizeof(Element_GMSCacheItem__uType), "Fuse.Elements.Element.GMSCacheItem", sizeof(Element_GMSCacheItem), 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Caching/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ElementAtlas__uType* ElementAtlas__typeof()
{
    static ::uStaticStrong<ElementAtlas__uType*> type;
    if (type != NULL) return type;

    type = (ElementAtlas__uType*)::uAllocClassType(sizeof(ElementAtlas__uType), "Fuse.Elements.ElementAtlas", false, 0, 3, 0);

    type->SetStrongRefs(
        "_elements", offsetof(ElementAtlas, _elements),
        "_framebuffer", offsetof(ElementAtlas, _framebuffer),
        "_textureAtlas", offsetof(ElementAtlas, _textureAtlas));

    return type;
}

void ElementAtlas___ObjInit(ElementAtlas* __this)
{
    __this->_elements = ::app::Uno::Collections::List__Fuse_Elements_Element__New_1(NULL);
    __this->_framebuffer = ::app::Fuse::Elements::ElementAtlasFramebuffer__New_1(NULL);
    ::uPtr< ::app::Fuse::Elements::ElementAtlasFramebuffer*>(__this->_framebuffer)->add_FramebufferCollected(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ElementAtlas__OnFramebufferCollected, __this));
    __this->_textureAtlas = ::app::Fuse::Elements::TextureAtlas__New_1(NULL, ::app::Fuse::Elements::ElementAtlasFramebuffer__get_Size(NULL));
}

bool ElementAtlas__AddElement(ElementAtlas* __this, ::app::Fuse::Elements::Element* elm)
{
    ::app::Uno::Recti rect = ::app::Uno::Recti();

    if (!::uPtr< ::app::Fuse::Elements::TextureAtlas*>(__this->_textureAtlas)->AddRect(::app::Fuse::Elements::ElementBatch__GetCachingRect(NULL, elm).Size(), &rect))
    {
        return false;
    }

    if (::uPtr< ::app::Fuse::Elements::Element*>(elm)->ElementBatchEntry() == NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(elm)->ElementBatchEntry(::app::Fuse::Elements::ElementBatchEntry__New_1(NULL, elm));
    }

    ::app::Fuse::Elements::ElementBatchEntry* entry = elm->ElementBatchEntry();

    if (::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(entry)->_atlas != NULL)
    {
        ::uPtr< ElementAtlas*>(::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(entry)->_atlas)->RemoveElement(elm);
    }

    entry->_atlas = __this;
    entry->_rect = rect;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_elements)->Add(elm);
    __this->_invalidElements++;
    entry->IsValid = false;
    return true;
}

void ElementAtlas__Dispose(ElementAtlas* __this)
{
    ::uPtr< ::app::Fuse::Elements::ElementAtlasFramebuffer*>(__this->_framebuffer)->Dispose();
}

void ElementAtlas__FillFramebuffer(ElementAtlas* __this, ::app::Fuse::DrawContext* dc, bool drawAll, ::app::Uno::Rect scissorRectInClipSpace)
{
    ::app::Fuse::OrthographicFrustum* collection_125;
    float density = ::app::Fuse::Elements::DisplayHelpers__get_PointDensity(NULL);
    ::app::Uno::Float2 viewport = ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Implicit_4(NULL, ::uPtr< ::app::Fuse::Elements::TextureAtlas*>(__this->_textureAtlas)->Size()), density);

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Elements_Element enum_124 = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_elements)->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Fuse::Elements::Element* elm = enum_124.Current();
        ::app::Fuse::Elements::ElementBatchEntry* entry = ::uPtr< ::app::Fuse::Elements::Element*>(elm)->ElementBatchEntry();

        if (!::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(entry)->IsValid || drawAll)
        {
            ::app::Uno::Float4x4 localToClipTransform = ::uPtr< ::app::Fuse::DrawContext*>(dc)->GetLocalToClipTransform((::app::Fuse::Node*)elm);
            ::app::Uno::Rect visibleRect = ::app::Uno::Rect__Transform(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(elm)->RenderBoundsWithEffects(), localToClipTransform);

            if (!scissorRectInClipSpace.Intersects(visibleRect))
            {
                continue;
            }

            ::app::Uno::Recti cachingRect = ::app::Fuse::Elements::ElementBatch__GetCachingRect(NULL, elm);
            ::app::Uno::Float2 offset = ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Implicit_4(NULL, ::app::Uno::Int2__op_Subtraction(NULL, ::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(entry)->_rect.Minimum(), cachingRect.Minimum())), density);
            ::app::Uno::Float4x4 translation = ::app::Uno::Matrix__Translation(NULL, offset.X, offset.Y, 0.0f);
            collection_125 = ::app::Fuse::OrthographicFrustum__New_1(NULL);
            ::uPtr< ::app::Fuse::OrthographicFrustum*>(collection_125)->Origin(::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f));
            collection_125->Size(viewport);
            collection_125->LocalFromWorld(::app::Uno::Matrix__Mul_10(NULL, elm->WorldTransformInverse(), translation));
            ::app::Fuse::OrthographicFrustum* cc = collection_125;
            dc->PushViewport((::uObject*)::app::Fuse::FixedViewport__New_1(NULL, ::uPtr< ::app::Fuse::Elements::TextureAtlas*>(__this->_textureAtlas)->Size(), density, (::uObject*)cc));
            ::app::Uno::Recti oldScissor = dc->Scissor();
            dc->Scissor(entry->_rect);

            if (!drawAll)
            {
                dc->Clear(::app::Uno::Float4__New_3(NULL, 0.0f), 1.0f);
            }

            elm->CompositEffects(dc);
            dc->Scissor(oldScissor);
            dc->PopViewport();

            if (!entry->IsValid)
            {
                __this->_invalidElements--;
            }

            entry->IsValid = true;
        }
    }
}

float ElementAtlas__get_SpilledRatio(ElementAtlas* __this)
{
    return (float)__this->_spilledPixels / (float)(::uPtr< ::app::Fuse::Elements::TextureAtlas*>(__this->_textureAtlas)->Size().X * ::uPtr< ::app::Fuse::Elements::TextureAtlas*>(__this->_textureAtlas)->Size().Y);
}

::app::Uno::Rect ElementAtlas__GetScissorRectInClipSpace(::uStatic* __this, ::app::Fuse::DrawContext* dc)
{
    return ElementAtlas__WindowRectToClipSpace(NULL, ::app::Uno::Rect__op_Implicit(NULL, ::uPtr< ::app::Fuse::DrawContext*>(dc)->Scissor()), ::uPtr< ::app::Fuse::DrawContext*>(dc)->ViewportPixelSize());
}

void ElementAtlas__InvalidateElement(ElementAtlas* __this, ::app::Fuse::Elements::Element* elm)
{
    ::app::Fuse::Elements::ElementBatchEntry* entry = ::uPtr< ::app::Fuse::Elements::Element*>(elm)->ElementBatchEntry();

    if (entry == NULL)
    {
        return;
    }

    if (::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(entry)->IsValid)
    {
        __this->_invalidElements++;
        ::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(entry)->IsValid = false;
    }
}

ElementAtlas* ElementAtlas__New_1(::uStatic* __this)
{
    ElementAtlas* inst = (ElementAtlas*)::uAllocObject(sizeof(ElementAtlas), ElementAtlas__typeof());
    inst->_ObjInit();
    return inst;
}

void ElementAtlas__OnFramebufferCollected(ElementAtlas* __this, ::uObject* sender, ::app::Uno::EventArgs* eventArgs)
{
    for (::app::Uno::Collections::List1_Enumerator__Fuse_Elements_Element enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_elements)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Elements::Element* elm = enum_123.Current();
        __this->InvalidateElement(elm);
    }
}

::app::Uno::Graphics::Framebuffer* ElementAtlas__PinAndValidateFramebuffer(ElementAtlas* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Uno::Graphics::Framebuffer* fb = ::uPtr< ::app::Fuse::Elements::ElementAtlasFramebuffer*>(__this->_framebuffer)->Pin();

    if (__this->_invalidElements > 0)
    {
        ::app::Uno::Rect scissorRectInClipSpace = ElementAtlas__GetScissorRectInClipSpace(NULL, dc);
        ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushRenderTarget_2(fb);
        bool drawAll = __this->_invalidElements == ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_elements)->Count();

        if (drawAll)
        {
            ::uPtr< ::app::Fuse::DrawContext*>(dc)->Clear(::app::Uno::Float4__New_3(NULL, 0.0f), 1.0f);
            __this->FillFramebuffer(dc, true, scissorRectInClipSpace);
        }
        else
        {
            __this->FillFramebuffer(dc, false, scissorRectInClipSpace);
        }

        dc->PopRenderTarget();
    }

    return fb;
}

bool ElementAtlas__ReinsertElement(ElementAtlas* __this, ::app::Fuse::Elements::Element* elm)
{
    if (::uPtr< ::app::Fuse::Elements::Element*>(elm)->ElementBatchEntry() == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("element not already inserted anywhere!")));
    }

    ::app::Fuse::Elements::ElementBatchEntry* entry = ::uPtr< ::app::Fuse::Elements::Element*>(elm)->ElementBatchEntry();

    if (::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(entry)->_atlas != __this)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("wrong atlas again, dummy!")));
    }

    ::app::Uno::Recti rect = ::app::Uno::Recti();

    if (!::uPtr< ::app::Fuse::Elements::TextureAtlas*>(__this->_textureAtlas)->AddRect(::app::Fuse::Elements::ElementBatch__GetCachingRect(NULL, elm).Size(), &rect))
    {
        return false;
    }

    __this->_spilledPixels = __this->_spilledPixels + ::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(entry)->_rect.Area();
    entry->_rect = rect;

    if (entry->IsValid)
    {
        __this->_invalidElements++;
        ::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(entry)->IsValid = false;
    }

    return true;
}

void ElementAtlas__RemoveElement(ElementAtlas* __this, ::app::Fuse::Elements::Element* elm)
{
    ::app::Fuse::Elements::ElementBatchEntry* entry = ::uPtr< ::app::Fuse::Elements::Element*>(elm)->ElementBatchEntry();

    if (::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(entry)->_atlas != __this)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Removing from wrong atlas")));
    }

    __this->_spilledPixels = __this->_spilledPixels + ::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(entry)->_rect.Area();

    if (!entry->IsValid)
    {
        __this->_invalidElements--;
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_Element*>(__this->_elements)->Remove(elm);
    entry->_atlas = NULL;
}

void ElementAtlas__Unpin(ElementAtlas* __this)
{
    ::uPtr< ::app::Fuse::Elements::ElementAtlasFramebuffer*>(__this->_framebuffer)->Unpin();
}

::app::Uno::Float2 ElementAtlas__WindowCoordToClipSpace(::uStatic* __this, ::app::Uno::Float2 input, ::app::Uno::Int2 viewportSize)
{
    return ::app::Uno::Float2__op_Subtraction(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Division_2(NULL, input, ::app::Uno::Float2__op_Implicit_4(NULL, viewportSize)), 2.0f), 1.0f);
}

::app::Uno::Rect ElementAtlas__WindowRectToClipSpace(::uStatic* __this, ::app::Uno::Rect input, ::app::Uno::Int2 viewportSize)
{
    ::app::Uno::Float2 leftTop = ElementAtlas__WindowCoordToClipSpace(NULL, input.LeftTop(), viewportSize);
    ::app::Uno::Float2 rightBottom = ElementAtlas__WindowCoordToClipSpace(NULL, input.RightBottom(), viewportSize);
    return ::app::Uno::Rect__ContainingPoints(NULL, ::app::Uno::Float2__New_2(NULL, leftTop.X, -leftTop.Y), ::app::Uno::Float2__New_2(NULL, rightBottom.X, -rightBottom.Y));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Caching/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ElementAtlasFramebuffer__uType* ElementAtlasFramebuffer__typeof()
{
    static ::uStaticStrong<ElementAtlasFramebuffer__uType*> type;
    if (type != NULL) return type;

    type = (ElementAtlasFramebuffer__uType*)::uAllocClassType(sizeof(ElementAtlasFramebuffer__uType), "Fuse.Elements.ElementAtlasFramebuffer", false, 0, 2, 0);

    type->SetStrongRefs(
        "_fb", offsetof(ElementAtlasFramebuffer, _fb),
        "FramebufferCollected", offsetof(ElementAtlasFramebuffer, FramebufferCollected));

    return type;
}

void ElementAtlasFramebuffer___ObjInit(ElementAtlasFramebuffer* __this)
{
}

void ElementAtlasFramebuffer__add_FramebufferCollected(ElementAtlasFramebuffer* __this, ::uDelegate* value)
{
    __this->FramebufferCollected = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->FramebufferCollected, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void ElementAtlasFramebuffer__Collect(ElementAtlasFramebuffer* __this)
{
    if (__this->Pinned())
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Cannot Collect while pinned!")));
    }

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->FramebufferCollected, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->FramebufferCollected)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>((::uObject*)__this, ::app::Uno::EventArgs__New_1(NULL));
    }

    ::uPtr< ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry*>(::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(__this->_fb)->Value())->Owner = NULL;
    __this->_fb = NULL;
}

void ElementAtlasFramebuffer__Dispose(ElementAtlasFramebuffer* __this)
{
    if (__this->_fb != NULL)
    {
        __this->Collect();
    }
}

bool ElementAtlasFramebuffer__get_Pinned(ElementAtlasFramebuffer* __this)
{
    return __this->_Pinned;
}

::app::Uno::Int2 ElementAtlasFramebuffer__get_Size(::uStatic* __this)
{
    return ::app::Fuse::Elements::ElementAtlasFramebufferPool__get_ElementAtlasSize(NULL);
}

ElementAtlasFramebuffer* ElementAtlasFramebuffer__New_1(::uStatic* __this)
{
    ElementAtlasFramebuffer* inst = (ElementAtlasFramebuffer*)::uAllocObject(sizeof(ElementAtlasFramebuffer), ElementAtlasFramebuffer__typeof());
    inst->_ObjInit();
    return inst;
}

::app::Uno::Graphics::Framebuffer* ElementAtlasFramebuffer__Pin(ElementAtlasFramebuffer* __this)
{
    if (__this->Pinned())
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("ElementAtlasFramebuffer already pinned")));
    }

    __this->Pinned(true);

    if (__this->_fb == NULL)
    {
        ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* fb = ::app::Fuse::Elements::ElementAtlasFramebufferPool__FindFramebuffer(NULL);

        if (::uPtr< ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry*>(::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(fb)->Value())->Owner != NULL)
        {
            ::uPtr< ElementAtlasFramebuffer*>(::uPtr< ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry*>(::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(fb)->Value())->Owner)->Collect();
        }

        ::uPtr< ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry*>(fb->Value())->Owner = __this;
        __this->_fb = fb;
    }
    else
    {
        ::uPtr< ::app::Fuse::Elements::ElementAtlasFramebufferPoolImpl*>(::uPtr< ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry*>(::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(__this->_fb)->Value())->Pool)->UpdateUsage(__this->_fb);
    }

    return ::uPtr< ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry*>(::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(__this->_fb)->Value())->Framebuffer;
}

void ElementAtlasFramebuffer__set_Pinned(ElementAtlasFramebuffer* __this, bool value)
{
    __this->_Pinned = value;
}

void ElementAtlasFramebuffer__Unpin(ElementAtlasFramebuffer* __this)
{
    if (!__this->Pinned())
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("ElementAtlasFramebuffer not already pinned")));
    }

    __this->Pinned(false);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Caching/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::app::Uno::Int2 ElementAtlasFramebufferPool___elementAtlasSize;
bool ElementAtlasFramebufferPool___isInitialized;
::uStaticStrong< ::app::Fuse::Elements::ElementAtlasFramebufferPoolImpl*> ElementAtlasFramebufferPool___poolImpl;
::uStaticStrong< ::uDelegate*> ElementAtlasFramebufferPool__AtlasSizeChanged;

ElementAtlasFramebufferPool__uType* ElementAtlasFramebufferPool__typeof()
{
    static ::uStaticStrong<ElementAtlasFramebufferPool__uType*> type;
    if (type != NULL) return type;

    type = (ElementAtlasFramebufferPool__uType*)::uAllocClassType(sizeof(ElementAtlasFramebufferPool__uType), "Fuse.Elements.ElementAtlasFramebufferPool");

    return type;
}

void ElementAtlasFramebufferPool__add_AtlasSizeChanged(::uStatic* __this, ::uDelegate* value)
{
    ElementAtlasFramebufferPool__AtlasSizeChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)ElementAtlasFramebufferPool__AtlasSizeChanged, (::uDelegate*)value), ::app::Uno::EventHandler__typeof());
}

void ElementAtlasFramebufferPool__EnsurePool(::uStatic* __this)
{
    if (ElementAtlasFramebufferPool___poolImpl != NULL)
    {
        return;
    }

    ElementAtlasFramebufferPool__Initialize(NULL);
    ElementAtlasFramebufferPool___poolImpl = ::app::Fuse::Elements::ElementAtlasFramebufferPoolImpl__New_1(NULL);
}

::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* ElementAtlasFramebufferPool__FindFramebuffer(::uStatic* __this)
{
    ElementAtlasFramebufferPool__EnsurePool(NULL);
    return ::uPtr< ::app::Fuse::Elements::ElementAtlasFramebufferPoolImpl*>(ElementAtlasFramebufferPool___poolImpl)->FindFramebuffer();
}

::app::Uno::Int2 ElementAtlasFramebufferPool__get_ElementAtlasSize(::uStatic* __this)
{
    ElementAtlasFramebufferPool__Initialize(NULL);
    return ElementAtlasFramebufferPool___elementAtlasSize;
}

void ElementAtlasFramebufferPool__Initialize(::uStatic* __this)
{
    if (ElementAtlasFramebufferPool___isInitialized)
    {
        return;
    }

    ElementAtlasFramebufferPool__UpdateElementAtlasSize(NULL);
    ::uPtr< ::app::Uno::Platform2::Display*>(::app::Uno::Platform2::Display__get_MainDisplay(NULL))->add_FrameChanged(::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ElementAtlasFramebufferPool__OnResized));
    ElementAtlasFramebufferPool___isInitialized = true;
}

void ElementAtlasFramebufferPool__OnResized(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    ElementAtlasFramebufferPool__UpdateElementAtlasSize(NULL);
}

void ElementAtlasFramebufferPool__set_ElementAtlasSize(::uStatic* __this, ::app::Uno::Int2 value)
{
    if (::app::Uno::Int2__op_Inequality(NULL, ElementAtlasFramebufferPool___elementAtlasSize, value))
    {
        ElementAtlasFramebufferPool___elementAtlasSize = value;

        if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)ElementAtlasFramebufferPool__AtlasSizeChanged, NULL))
        {
            ::uPtr< ::uDelegate*>(ElementAtlasFramebufferPool__AtlasSizeChanged)->InvokeVoid< ::uObject*, ::app::Uno::EventArgs*>(NULL, ::app::Uno::EventArgs__New_1(NULL));
        }
    }
}

void ElementAtlasFramebufferPool__UpdateElementAtlasSize(::uStatic* __this)
{
    ::app::Uno::Int2 clientSize = ::app::Fuse::Elements::DisplayHelpers__get_DisplaySizeHint(NULL);
    ElementAtlasFramebufferPool__set_ElementAtlasSize(NULL, ::app::Uno::Int2__New_2(NULL, ::app::Uno::Math__Min_5(NULL, (clientSize.X * 3) / 2, ::app::Uno::Graphics::Texture2D__get_MaxSize(NULL)), ::app::Uno::Math__Min_5(NULL, clientSize.Y / 2, ::app::Uno::Graphics::Texture2D__get_MaxSize(NULL))));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Caching/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ElementAtlasFramebufferPoolEntry__uType* ElementAtlasFramebufferPoolEntry__typeof()
{
    static ::uStaticStrong<ElementAtlasFramebufferPoolEntry__uType*> type;
    if (type != NULL) return type;

    type = (ElementAtlasFramebufferPoolEntry__uType*)::uAllocClassType(sizeof(ElementAtlasFramebufferPoolEntry__uType), "Fuse.Elements.ElementAtlasFramebufferPoolEntry", false, 0, 3, 0);

    type->SetStrongRefs(
        "Framebuffer", offsetof(ElementAtlasFramebufferPoolEntry, Framebuffer),
        "Owner", offsetof(ElementAtlasFramebufferPoolEntry, Owner),
        "Pool", offsetof(ElementAtlasFramebufferPoolEntry, Pool));

    return type;
}

void ElementAtlasFramebufferPoolEntry___ObjInit(ElementAtlasFramebufferPoolEntry* __this)
{
}

void ElementAtlasFramebufferPoolEntry__Collect(ElementAtlasFramebufferPoolEntry* __this)
{
    if (__this->Owner != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::ElementAtlasFramebuffer*>(__this->Owner)->Collect();
    }
}

void ElementAtlasFramebufferPoolEntry__Dispose(ElementAtlasFramebufferPoolEntry* __this)
{
    if (__this->Framebuffer != NULL)
    {
        ::uPtr< ::app::Uno::Graphics::Framebuffer*>(__this->Framebuffer)->Dispose();
        __this->Framebuffer = NULL;
    }
}

ElementAtlasFramebufferPoolEntry* ElementAtlasFramebufferPoolEntry__New_1(::uStatic* __this)
{
    ElementAtlasFramebufferPoolEntry* inst = (ElementAtlasFramebufferPoolEntry*)::uAllocObject(sizeof(ElementAtlasFramebufferPoolEntry), ElementAtlasFramebufferPoolEntry__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Caching/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ElementAtlasFramebufferPoolImpl__uType* ElementAtlasFramebufferPoolImpl__typeof()
{
    static ::uStaticStrong<ElementAtlasFramebufferPoolImpl__uType*> type;
    if (type != NULL) return type;

    type = (ElementAtlasFramebufferPoolImpl__uType*)::uAllocClassType(sizeof(ElementAtlasFramebufferPoolImpl__uType), "Fuse.Elements.ElementAtlasFramebufferPoolImpl", false, 1, 1, 0);

    type->__interface_0.__fp_SoftDispose = (void(*)(void*))ElementAtlasFramebufferPoolImpl__Fuse_Resources_ISoftDisposable_SoftDispose;

    type->SetInterfaces(
        ::app::Fuse::Resources::ISoftDisposable__typeof(), offsetof(ElementAtlasFramebufferPoolImpl__uType, __interface_0));

    type->SetStrongRefs(
        "_framebufferPool", offsetof(ElementAtlasFramebufferPoolImpl, _framebufferPool));

    return type;
}

void ElementAtlasFramebufferPoolImpl___ObjInit(ElementAtlasFramebufferPoolImpl* __this)
{
    ::app::Fuse::Resources::DisposalManager__Add_1(NULL, (::uObject*)__this);
    ::app::Fuse::Elements::ElementAtlasFramebufferPool__add_AtlasSizeChanged(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ElementAtlasFramebufferPoolImpl__OnAtlasSizeChanged, __this));
}

::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* ElementAtlasFramebufferPoolImpl__AddEntry(ElementAtlasFramebufferPoolImpl* __this)
{
    ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* entry = ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry__New_1(NULL);
    ::uPtr< ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry*>(entry)->Pool = __this;
    entry->Framebuffer = ::app::Uno::Graphics::Framebuffer__New_1(NULL, ::app::Fuse::Elements::ElementAtlasFramebufferPool__get_ElementAtlasSize(NULL), 3, 0);
    return ::uPtr< ::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(__this->_framebufferPool)->AddLast(entry);
}

void ElementAtlasFramebufferPoolImpl__DiscardPool(ElementAtlasFramebufferPoolImpl* __this)
{
    GLHelper::SwapBackToBackgroundSurface();
    ::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry* pool = __this->_framebufferPool;

    if (pool == NULL)
    {
        return;
    }

    ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* curr = ::uPtr< ::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(pool)->First();

    while (curr != NULL)
    {
        ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry* fb = ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(curr)->Value();
        ::uPtr< ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry*>(fb)->Collect();
        fb->Dispose();
        curr = ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(curr)->Next();
    }

    pool->Clear();
    __this->_framebufferPool = NULL;
}

void ElementAtlasFramebufferPoolImpl__EnsurePool(ElementAtlasFramebufferPoolImpl* __this)
{
    if (__this->_framebufferPool != NULL)
    {
        return;
    }

    __this->_framebufferPool = ::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry__New_1(NULL);

    for (int i = 0; i < 20; ++i)
    {
        __this->AddEntry();
    }
}

::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* ElementAtlasFramebufferPoolImpl__FindFramebuffer(ElementAtlasFramebufferPoolImpl* __this)
{
    __this->EnsurePool();
    ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* fb = ::uPtr< ::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(__this->_framebufferPool)->Last();

    while ((fb != NULL) && ((::uPtr< ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry*>(::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(fb)->Value())->Owner != NULL) && ::uPtr< ::app::Fuse::Elements::ElementAtlasFramebuffer*>(::uPtr< ::app::Fuse::Elements::ElementAtlasFramebufferPoolEntry*>(::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(fb)->Value())->Owner)->Pinned()))
    {
        fb = ::uPtr< ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(fb)->Previous();
    }

    if (fb == NULL)
    {
        fb = __this->AddEntry();
    }

    __this->UpdateUsage(fb);
    return fb;
}

void ElementAtlasFramebufferPoolImpl__Fuse_Resources_ISoftDisposable_SoftDispose(ElementAtlasFramebufferPoolImpl* __this)
{
    __this->DiscardPool();
}

ElementAtlasFramebufferPoolImpl* ElementAtlasFramebufferPoolImpl__New_1(::uStatic* __this)
{
    ElementAtlasFramebufferPoolImpl* inst = (ElementAtlasFramebufferPoolImpl*)::uAllocObject(sizeof(ElementAtlasFramebufferPoolImpl), ElementAtlasFramebufferPoolImpl__typeof());
    inst->_ObjInit();
    return inst;
}

void ElementAtlasFramebufferPoolImpl__OnAtlasSizeChanged(ElementAtlasFramebufferPoolImpl* __this, ::uObject* sender, ::app::Uno::EventArgs* eventArgs)
{
    __this->DiscardPool();
}

void ElementAtlasFramebufferPoolImpl__UpdateUsage(ElementAtlasFramebufferPoolImpl* __this, ::app::Uno::Collections::LinkedListNode__Fuse_Elements_ElementAtlasFramebufferPoolEntry* fb)
{
    ::uPtr< ::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(__this->_framebufferPool)->Remove_1(fb);
    ::uPtr< ::app::Uno::Collections::LinkedList__Fuse_Elements_ElementAtlasFramebufferPoolEntry*>(__this->_framebufferPool)->AddFirst_1(fb);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Caching/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ElementBatch__uType* ElementBatch__typeof()
{
    static ::uStaticStrong<ElementBatch__uType*> type;
    if (type != NULL) return type;

    type = (ElementBatch__uType*)::uAllocClassType(sizeof(ElementBatch__uType), "Fuse.Elements.ElementBatch", false, 1, 10, 0);

    type->__interface_0.__fp_Draw = (void(*)(void*, ::app::Fuse::DrawContext*, ::app::Uno::Float4x4, ::app::Uno::Rect))ElementBatch__Draw;

    type->SetInterfaces(
        ::app::Fuse::Elements::IElementBatchDrawable__typeof(), offsetof(ElementBatch__uType, __interface_0));

    type->SetStrongRefs(
        "_draw_3bd224e1._compiledProgram", offsetof(ElementBatch, _draw_3bd224e1._compiledProgram),
        "_draw_3bd224e1._constValues", offsetof(ElementBatch, _draw_3bd224e1._constValues),
        "_draw_3bd224e1._Program", offsetof(ElementBatch, _draw_3bd224e1._Program),
        "_elementAtlas", offsetof(ElementBatch, _elementAtlas),
        "_elementBatcher", offsetof(ElementBatch, _elementBatcher),
        "_elements", offsetof(ElementBatch, _elements),
        "_indexBuffer", offsetof(ElementBatch, _indexBuffer),
        "_positionInfo.Buffer", offsetof(ElementBatch, _positionInfo.Buffer),
        "_tempBuffer", offsetof(ElementBatch, _tempBuffer),
        "_texCoordInfo.Buffer", offsetof(ElementBatch, _texCoordInfo.Buffer));

    return type;
}

void ElementBatch___ObjInit(ElementBatch* __this, ::app::Fuse::Elements::ElementBatcher* elementBatcher, ::app::Fuse::Elements::ElementAtlas* elementAtlas)
{
    __this->_elements = ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry__New_1(NULL);
    __this->_elementBatcher = elementBatcher;
    __this->_elementAtlas = elementAtlas;
    __this->_positionInfo = ::uDefault< ::app::Uno::Graphics::VertexAttributeInfo>();
    __this->_positionInfo.BufferOffset = 0;
    __this->_positionInfo.BufferStride = 12;
    __this->_positionInfo.Type = 3;
    __this->_positionInfo.Buffer = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, 1);
    __this->_texCoordInfo = ::uDefault< ::app::Uno::Graphics::VertexAttributeInfo>();
    __this->_texCoordInfo.BufferOffset = 0;
    __this->_texCoordInfo.BufferStride = 8;
    __this->_texCoordInfo.Type = 2;
    __this->_texCoordInfo.Buffer = ::app::Uno::Graphics::VertexBuffer__New_1(NULL, 0);
    __this->init_DrawCalls();
}

void ElementBatch__AddElement(ElementBatch* __this, ::app::Fuse::Elements::Element* elm)
{
    if (::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->ElementBatchEntry())->_atlas != __this->_elementAtlas)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("wrong atlas, stupid!")));
    }

    ::app::Fuse::Elements::ElementBatchEntry* entry = ::uPtr< ::app::Fuse::Elements::Element*>(elm)->ElementBatchEntry();
    ::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(entry)->_batch = __this;
    ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_elements)->Add(entry);
    __this->_indexBufferValid = false;
    __this->_vertexPositionBufferValid = false;
    __this->_vertexTexCoordBufferValid = false;
    __this->_renderBoundsValid = false;
}

::app::Uno::Rect ElementBatch__CalcRenderBounds(ElementBatch* __this)
{
    ::app::Uno::Rect rect = ::uPtr< ::app::Fuse::Elements::Element*>(::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_elements)->Item(0))->_elm)->CalcRenderBoundsInParentSpace();

    for (int i = 1; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_elements)->Count(); i++)
    {
        rect = ::app::Uno::Rect__Union(NULL, rect, ::uPtr< ::app::Fuse::Elements::Element*>(::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_elements)->Item(i))->_elm)->CalcRenderBoundsInParentSpace());
    }

    return rect;
}

::app::Uno::Recti ElementBatch__ConservativelySnapToCoveringIntegers(::uStatic* __this, ::app::Uno::Rect r)
{
    ::app::Uno::Int2 origin = ::app::Uno::Int2__op_Explicit(NULL, ::app::Uno::Math__Floor_2(NULL, r.Minimum()));
    ::app::Uno::Int2 size = ::app::Uno::Int2__op_Explicit(NULL, ::app::Uno::Math__Ceil_2(NULL, ::app::Uno::Float2__op_Addition(NULL, r.Size(), 0.01f)));
    return ::app::Uno::Recti__New_1(NULL, origin.X, origin.Y, (origin.X + size.X) + 1, (origin.Y + size.Y) + 1);
}

void ElementBatch__Dispose(ElementBatch* __this)
{
    for (::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementBatchEntry enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_elements)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Elements::ElementBatchEntry* elm = enum_123.Current();
        ::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(elm)->_batch = NULL;
    }

    if (__this->_positionInfo.Buffer != NULL)
    {
        ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->_positionInfo.Buffer)->Dispose();
    }

    if (__this->_texCoordInfo.Buffer != NULL)
    {
        ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->_texCoordInfo.Buffer)->Dispose();
    }

    if (__this->_indexBuffer != NULL)
    {
        ::uPtr< ::app::Uno::Graphics::IndexBuffer*>(__this->_indexBuffer)->Dispose();
    }
}

void ElementBatch__Draw(ElementBatch* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 localToClipTransform, ::app::Uno::Rect scissorRectInClipSpace)
{
    ::app::Uno::Rect visibleRect = ::app::Uno::Rect__Transform(NULL, __this->RenderBounds(), localToClipTransform);

    if (!scissorRectInClipSpace.Intersects(visibleRect))
    {
        return;
    }

    ::app::Uno::Graphics::Framebuffer* fb = ::uPtr< ::app::Fuse::Elements::ElementAtlas*>(__this->_elementAtlas)->PinAndValidateFramebuffer(dc);

    if (__this->_prevElementCount != ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_elements)->Count())
    {
        __this->_indexBufferValid = false;
        __this->_vertexPositionBufferValid = false;
        __this->_vertexTexCoordBufferValid = false;
        __this->_tempBuffer = ::app::Uno::Buffer__New_3(NULL, (::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_elements)->Count() * 4) * 12);
    }

    if (!__this->_indexBufferValid)
    {
        __this->FillIndexBuffer();
        __this->_indexBufferValid = true;
    }

    if (!__this->_vertexPositionBufferValid)
    {
        __this->FillVertexPositionBuffer(dc);
        __this->_vertexPositionBufferValid = true;
    }

    if (!__this->_vertexTexCoordBufferValid)
    {
        __this->FillVertexTexCoordBuffer();
        __this->_vertexTexCoordBufferValid = true;
    }

    ::app::Uno::Graphics::Texture2D* tex = ::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->ColorBuffer();
    ::app::Uno::Float4x4 transform = ::uPtr< ::app::Fuse::DrawContext*>(dc)->GetLocalToClipTransform(::uPtr< ::app::Fuse::Elements::Element*>(::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_elements)->Item(0))->_elm)->Parent());
    {
        __this->_draw_3bd224e1.BlendEnabled(true);
        __this->_draw_3bd224e1.BlendDstRgb(3);
        __this->_draw_3bd224e1.BlendDstAlpha(3);
        __this->_draw_3bd224e1.DepthTestEnabled(false);
        __this->_draw_3bd224e1.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
        __this->_draw_3bd224e1.Use();
        __this->_draw_3bd224e1.Attrib(0, __this->_positionInfo.Type, __this->_positionInfo.Buffer, __this->_positionInfo.BufferStride, __this->_positionInfo.BufferOffset);
        __this->_draw_3bd224e1.Attrib(1, __this->_texCoordInfo.Type, __this->_texCoordInfo.Buffer, __this->_texCoordInfo.BufferStride, __this->_texCoordInfo.BufferOffset);
        __this->_draw_3bd224e1.Uniform_2(2, transform);
        __this->_draw_3bd224e1.Sampler_1(3, tex);
        __this->_draw_3bd224e1.Draw(::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_elements)->Count() * 6, 2, __this->_indexBuffer);
    }

    ::uPtr< ::app::Fuse::Elements::ElementAtlas*>(__this->_elementAtlas)->Unpin();
    __this->_prevElementCount = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_elements)->Count();
}

void ElementBatch__FillIndexBuffer(ElementBatch* __this)
{
    ::app::Uno::Buffer* indices = ::app::Uno::Buffer__New_3(NULL, (::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_elements)->Count() * 6) * 2);

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_elements)->Count(); ++i)
    {
        ::uPtr< ::app::Uno::Buffer*>(indices)->SetUShort((i * 6) * 2, (::uUShort)(i * 4), true);
        indices->SetUShort(((i * 6) + 1) * 2, (::uUShort)((i * 4) + 1), true);
        indices->SetUShort(((i * 6) + 2) * 2, (::uUShort)((i * 4) + 2), true);
        indices->SetUShort(((i * 6) + 3) * 2, (::uUShort)(i * 4), true);
        indices->SetUShort(((i * 6) + 4) * 2, (::uUShort)((i * 4) + 2), true);
        indices->SetUShort(((i * 6) + 5) * 2, (::uUShort)((i * 4) + 3), true);
    }

    if (__this->_indexBuffer != NULL)
    {
        ::uPtr< ::app::Uno::Graphics::IndexBuffer*>(__this->_indexBuffer)->Dispose();
    }

    __this->_indexBuffer = ::app::Uno::Graphics::IndexBuffer__New_3(NULL, indices, 0);
}

void ElementBatch__FillVertexPositionBuffer(ElementBatch* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_126 = ::app::Uno::Float4();
    int elementCount = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_elements)->Count();
    ::app::Uno::Buffer* vertexPositions = __this->_tempBuffer;
    float densityScale = 1.0f / ::app::Fuse::Elements::DisplayHelpers__get_PointDensity(NULL);

    for (int i = 0; i < elementCount; ++i)
    {
        ::app::Fuse::Elements::ElementBatchEntry* entry = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_elements)->Item(i);
        ::app::Uno::Recti cachingRect = ElementBatch__GetCachingRect(NULL, ::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(entry)->_elm);
        float opacity = entry->_opacity;
        ::app::Uno::Float4x4 transform = ::uPtr< ::app::Fuse::Elements::Element*>(entry->_elm)->LocalTransform();
        ::app::Uno::Float2 positionOrigin = ::app::Uno::Float2__op_Addition_2(NULL, (ind_124 = transform.Item(3), ::app::Uno::Float2__New_2(NULL, ind_124.X, ind_124.Y)), ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Implicit_4(NULL, cachingRect.Minimum()), densityScale));
        ::app::Uno::Float2 size = ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Implicit_4(NULL, cachingRect.Size()), densityScale);
        ::app::Uno::Float2 right = ::app::Uno::Float2__op_Multiply_2(NULL, (ind_125 = transform.Item(0), ::app::Uno::Float2__New_2(NULL, ind_125.X, ind_125.Y)), size.X);
        ::app::Uno::Float2 up = ::app::Uno::Float2__op_Multiply_2(NULL, (ind_126 = transform.Item(1), ::app::Uno::Float2__New_2(NULL, ind_126.X, ind_126.Y)), size.Y);
        ::uPtr< ::app::Uno::Buffer*>(vertexPositions)->SetFloat3(((i * 4) * __this->_positionInfo.BufferStride) + __this->_positionInfo.BufferOffset, ::app::Uno::Float3__New_4(NULL, positionOrigin, opacity), true);
        vertexPositions->SetFloat3((((i * 4) + 1) * __this->_positionInfo.BufferStride) + __this->_positionInfo.BufferOffset, ::app::Uno::Float3__New_4(NULL, ::app::Uno::Float2__op_Addition_2(NULL, positionOrigin, right), opacity), true);
        vertexPositions->SetFloat3((((i * 4) + 2) * __this->_positionInfo.BufferStride) + __this->_positionInfo.BufferOffset, ::app::Uno::Float3__New_4(NULL, ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, positionOrigin, right), up), opacity), true);
        vertexPositions->SetFloat3((((i * 4) + 3) * __this->_positionInfo.BufferStride) + __this->_positionInfo.BufferOffset, ::app::Uno::Float3__New_4(NULL, ::app::Uno::Float2__op_Addition_2(NULL, positionOrigin, up), opacity), true);
    }

    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->_positionInfo.Buffer)->Update(vertexPositions);
}

void ElementBatch__FillVertexTexCoordBuffer(ElementBatch* __this)
{
    int elementCount = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_elements)->Count();
    ::app::Uno::Buffer* vertexTexCoords = __this->_tempBuffer;

    for (int i = 0; i < elementCount; ++i)
    {
        ::app::Fuse::Elements::ElementBatchEntry* entry = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_elements)->Item(i);
        ::app::Uno::Recti cachingRect = ElementBatch__GetCachingRect(NULL, ::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(entry)->_elm);
        ::app::Uno::Float2 texCoordOrigin = ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Float2__op_Implicit_4(NULL, entry->_rect.Minimum()), ::app::Uno::Float2__op_Implicit_4(NULL, ::uPtr< ::app::Fuse::Elements::TextureAtlas*>(::uPtr< ::app::Fuse::Elements::ElementAtlas*>(__this->_elementAtlas)->_textureAtlas)->Size()));
        ::app::Uno::Float2 size = ::app::Uno::Float2__op_Division_2(NULL, ::app::Uno::Float2__op_Implicit_4(NULL, cachingRect.Size()), ::app::Uno::Float2__op_Implicit_4(NULL, ::uPtr< ::app::Fuse::Elements::TextureAtlas*>(::uPtr< ::app::Fuse::Elements::ElementAtlas*>(__this->_elementAtlas)->_textureAtlas)->Size()));
        ::uPtr< ::app::Uno::Buffer*>(vertexTexCoords)->SetFloat2(((i * 4) * __this->_texCoordInfo.BufferStride) + __this->_texCoordInfo.BufferOffset, texCoordOrigin, true);
        vertexTexCoords->SetFloat2((((i * 4) + 1) * __this->_texCoordInfo.BufferStride) + __this->_texCoordInfo.BufferOffset, ::app::Uno::Float2__op_Addition_2(NULL, texCoordOrigin, ::app::Uno::Float2__New_2(NULL, size.X, 0.0f)), true);
        vertexTexCoords->SetFloat2((((i * 4) + 2) * __this->_texCoordInfo.BufferStride) + __this->_texCoordInfo.BufferOffset, ::app::Uno::Float2__op_Addition_2(NULL, texCoordOrigin, size), true);
        vertexTexCoords->SetFloat2((((i * 4) + 3) * __this->_texCoordInfo.BufferStride) + __this->_texCoordInfo.BufferOffset, ::app::Uno::Float2__op_Addition_2(NULL, texCoordOrigin, ::app::Uno::Float2__New_2(NULL, 0.0f, size.Y)), true);
    }

    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->_texCoordInfo.Buffer)->Update(vertexTexCoords);
}

::app::Uno::Rect ElementBatch__get_RenderBounds(ElementBatch* __this)
{
    if (!__this->_renderBoundsValid)
    {
        __this->_renderBounds = __this->CalcRenderBounds();
        __this->_renderBoundsValid = true;
    }

    return __this->_renderBounds;
}

::app::Uno::Recti ElementBatch__GetCachingRect(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    return ::app::Uno::Recti__Inflate_1(NULL, ElementBatch__ConservativelySnapToCoveringIntegers(NULL, ::app::Uno::Rect__Scale(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(elm)->RenderBoundsWithEffects(), ::uPtr< ::app::Fuse::Elements::Element*>(elm)->AbsoluteZoom())), 1);
}

void ElementBatch__init_DrawCalls(ElementBatch* __this)
{
    __this->_draw_3bd224e1 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 608), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

void ElementBatch__InvalidateOpacity(ElementBatch* __this, ::app::Fuse::Elements::Element* elm)
{
    __this->_vertexPositionBufferValid = false;
}

void ElementBatch__InvalidateRenderBounds(ElementBatch* __this, ::app::Fuse::Elements::Element* elm)
{
    __this->_vertexPositionBufferValid = false;
    __this->_vertexTexCoordBufferValid = false;
    __this->_renderBoundsValid = false;
}

void ElementBatch__InvalidateTransform(ElementBatch* __this, ::app::Fuse::Elements::Element* elm)
{
    __this->_vertexPositionBufferValid = false;
    __this->_renderBoundsValid = false;
}

bool ElementBatch__IsFull(ElementBatch* __this)
{
    return (::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatchEntry*>(__this->_elements)->Count() * 6) >= 65535;
}

ElementBatch* ElementBatch__New_1(::uStatic* __this, ::app::Fuse::Elements::ElementBatcher* elementBatcher, ::app::Fuse::Elements::ElementAtlas* elementAtlas)
{
    ElementBatch* inst = (ElementBatch*)::uAllocObject(sizeof(ElementBatch), ElementBatch__typeof());
    inst->_ObjInit(elementBatcher, elementAtlas);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Caching/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ElementBatchEntry__uType* ElementBatchEntry__typeof()
{
    static ::uStaticStrong<ElementBatchEntry__uType*> type;
    if (type != NULL) return type;

    type = (ElementBatchEntry__uType*)::uAllocClassType(sizeof(ElementBatchEntry__uType), "Fuse.Elements.ElementBatchEntry", false, 0, 3, 0);

    type->SetStrongRefs(
        "_atlas", offsetof(ElementBatchEntry, _atlas),
        "_batch", offsetof(ElementBatchEntry, _batch),
        "_elm", offsetof(ElementBatchEntry, _elm));

    return type;
}

void ElementBatchEntry___ObjInit(ElementBatchEntry* __this, ::app::Fuse::Elements::Element* elm)
{
    __this->_elm = elm;
    __this->_opacity = __this->GetEffectiveOpacity();
}

float ElementBatchEntry__GetEffectiveOpacity(ElementBatchEntry* __this)
{
    if (::uPtr< ::app::Fuse::Elements::Element*>(__this->_elm)->Visibility() == 0)
    {
        return ::uPtr< ::app::Fuse::Elements::Element*>(__this->_elm)->Opacity();
    }

    return 0.0f;
}

void ElementBatchEntry__InvalidateRenderBounds(ElementBatchEntry* __this)
{
    ::app::Uno::Recti cachingRect = ::app::Fuse::Elements::ElementBatch__GetCachingRect(NULL, __this->_elm);

    if ((cachingRect.Size().X > __this->_rect.Size().X) || (cachingRect.Size().Y > __this->_rect.Size().Y))
    {
        if (!::uPtr< ::app::Fuse::Elements::ElementAtlas*>(__this->_atlas)->ReinsertElement(__this->_elm))
        {
            ::uPtr< ::app::Fuse::Elements::ElementAtlas*>(__this->_atlas)->RemoveElement(__this->_elm);
            ::uPtr< ::app::Fuse::Elements::Element*>(__this->_elm)->ElementBatchEntry(NULL);

            if (__this->_batch != NULL)
            {
                ::uPtr< ::app::Fuse::Elements::ElementBatcher*>(::uPtr< ::app::Fuse::Elements::ElementBatch*>(__this->_batch)->_elementBatcher)->DrawListValid = false;
            }
        }
    }

    if (__this->_batch != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::ElementBatch*>(__this->_batch)->InvalidateRenderBounds(__this->_elm);
    }
}

void ElementBatchEntry__InvalidateTransform(ElementBatchEntry* __this)
{
    if (__this->_batch != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::ElementBatch*>(__this->_batch)->InvalidateTransform(__this->_elm);
    }
}

void ElementBatchEntry__InvalidateVisual(ElementBatchEntry* __this)
{
    ::uPtr< ::app::Fuse::Elements::ElementAtlas*>(__this->_atlas)->InvalidateElement(__this->_elm);
}

void ElementBatchEntry__InvalidateVisualComposition(ElementBatchEntry* __this)
{
    float opacity = __this->GetEffectiveOpacity();

    if (__this->_opacity != opacity)
    {
        if (__this->_batch != NULL)
        {
            ::uPtr< ::app::Fuse::Elements::ElementBatch*>(__this->_batch)->InvalidateOpacity(__this->_elm);
        }

        __this->_opacity = opacity;
    }
}

ElementBatchEntry* ElementBatchEntry__New_1(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    ElementBatchEntry* inst = (ElementBatchEntry*)::uAllocObject(sizeof(ElementBatchEntry), ElementBatchEntry__typeof());
    inst->_ObjInit(elm);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Caching/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ElementBatcher__uType* ElementBatcher__typeof()
{
    static ::uStaticStrong<ElementBatcher__uType*> type;
    if (type != NULL) return type;

    type = (ElementBatcher__uType*)::uAllocClassType(sizeof(ElementBatcher__uType), "Fuse.Elements.ElementBatcher", false, 1, 4, 0);

    type->__interface_0.__fp_SoftDispose = (void(*)(void*))ElementBatcher__Fuse_Resources_ISoftDisposable_SoftDispose;

    type->SetInterfaces(
        ::app::Fuse::Resources::ISoftDisposable__typeof(), offsetof(ElementBatcher__uType, __interface_0));

    type->SetStrongRefs(
        "_atlasPool", offsetof(ElementBatcher, _atlasPool),
        "_batchPool", offsetof(ElementBatcher, _batchPool),
        "_drawList", offsetof(ElementBatcher, _drawList),
        "_elements", offsetof(ElementBatcher, _elements));

    return type;
}

void ElementBatcher___ObjInit(ElementBatcher* __this)
{
    __this->_elements = ::app::Uno::Collections::List__Fuse_Node__New_1(NULL);
    __this->_atlasPool = ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas__New_1(NULL);
    __this->_batchPool = ::app::Uno::Collections::List__Fuse_Elements_ElementBatch__New_1(NULL);
    __this->_drawList = ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable__New_1(NULL);
    ::app::Fuse::Resources::DisposalManager__Add_1(NULL, (::uObject*)__this);
    ::app::Fuse::Elements::ElementAtlasFramebufferPool__add_AtlasSizeChanged(NULL, ::uNewDelegateNonVirt(::app::Uno::EventHandler__typeof(), (const void*)ElementBatcher__OnAtlasSizeChanged, __this));
}

void ElementBatcher__AddElement(ElementBatcher* __this, ::app::Fuse::Node* elm)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_elements)->Add(elm);
    __this->DrawListValid = false;
}

::app::Fuse::Elements::ElementAtlas* ElementBatcher__allocAtlas(ElementBatcher* __this)
{
    ::app::Fuse::Elements::ElementAtlas* atlas = ::app::Fuse::Elements::ElementAtlas__New_1(NULL);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas*>(__this->_atlasPool)->Add(atlas);
    return atlas;
}

::app::Fuse::Elements::ElementBatch* ElementBatcher__allocBatch(ElementBatcher* __this, ::app::Fuse::Elements::ElementAtlas* atlas)
{
    ::app::Fuse::Elements::ElementBatch* batch = ::app::Fuse::Elements::ElementBatch__New_1(NULL, __this, atlas);
    ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatch*>(__this->_batchPool)->Add(batch);
    return batch;
}

void ElementBatcher__DiscardAtlasing(ElementBatcher* __this)
{
    for (::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementAtlas enum_123 = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas*>(__this->_atlasPool)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Fuse::Elements::ElementAtlas* atlas = enum_123.Current();
        ::uPtr< ::app::Fuse::Elements::ElementAtlas*>(atlas)->Dispose();
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas*>(__this->_atlasPool)->Clear();

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Node enum_124 = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_elements)->GetEnumerator(); enum_124.MoveNext(); )
    {
        ::app::Fuse::Node* node = enum_124.Current();
        ::app::Fuse::Elements::Element* elm = ::uAs< ::app::Fuse::Elements::Element*>(node, ::app::Fuse::Elements::Element__typeof());

        if (elm != NULL)
        {
            ::uPtr< ::app::Fuse::Elements::Element*>(elm)->ElementBatchEntry(NULL);
        }
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable*>(__this->_drawList)->Clear();
    __this->DrawListValid = false;
}

void ElementBatcher__DiscardBatching(ElementBatcher* __this)
{
    for (::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementBatch enum_125 = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatch*>(__this->_batchPool)->GetEnumerator(); enum_125.MoveNext(); )
    {
        ::app::Fuse::Elements::ElementBatch* batch = enum_125.Current();
        ::uPtr< ::app::Fuse::Elements::ElementBatch*>(batch)->Dispose();
    }

    ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementBatch*>(__this->_batchPool)->Clear();
}

void ElementBatcher__Draw(ElementBatcher* __this, ::app::Fuse::DrawContext* dc)
{
    if ((double)__this->MaxSpilledRatio > 0.5)
    {
        ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas* removeList = ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas__New_1(NULL);

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementAtlas enum_129 = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas*>(__this->_atlasPool)->GetEnumerator(); enum_129.MoveNext(); )
        {
            ::app::Fuse::Elements::ElementAtlas* a = enum_129.Current();

            if ((double)::uPtr< ::app::Fuse::Elements::ElementAtlas*>(a)->SpilledRatio() > 0.5)
            {
                ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas*>(removeList)->Add(a);
            }
        }

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Node enum_130 = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_elements)->GetEnumerator(); enum_130.MoveNext(); )
        {
            ::app::Fuse::Node* node = enum_130.Current();
            ::app::Fuse::Elements::Element* elm = ::uAs< ::app::Fuse::Elements::Element*>(node, ::app::Fuse::Elements::Element__typeof());

            if (elm == NULL)
            {
                continue;
            }

            for (::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementAtlas enum_131 = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas*>(removeList)->GetEnumerator(); enum_131.MoveNext(); )
            {
                ::app::Fuse::Elements::ElementAtlas* a = enum_131.Current();

                if ((::uPtr< ::app::Fuse::Elements::Element*>(elm)->ElementBatchEntry() != NULL) && (::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->ElementBatchEntry())->_atlas == a))
                {
                    ::uPtr< ::app::Fuse::Elements::Element*>(elm)->ElementBatchEntry(NULL);
                }
            }
        }

        for (::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementAtlas enum_132 = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas*>(removeList)->GetEnumerator(); enum_132.MoveNext(); )
        {
            ::app::Fuse::Elements::ElementAtlas* a = enum_132.Current();
            ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas*>(__this->_atlasPool)->Remove(a);
            ::uPtr< ::app::Fuse::Elements::ElementAtlas*>(a)->Dispose();
        }

        __this->DrawListValid = false;
    }

    if (!__this->DrawListValid)
    {
        __this->UpdateDrawList();
        __this->DrawListValid = true;
    }

    ::app::Fuse::Node* parent = ::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_elements)->Item(0))->Parent();
    ::app::Uno::Float4x4 localToClipTransform = ::uPtr< ::app::Fuse::DrawContext*>(dc)->GetLocalToClipTransform(parent);
    ::app::Uno::Rect scissorRectInClipSpace = ::app::Fuse::Elements::ElementAtlas__GetScissorRectInClipSpace(NULL, dc);

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Elements_IElementBatchDrawable enum_133 = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable*>(__this->_drawList)->GetEnumerator(); enum_133.MoveNext(); )
    {
        ::uObject* d = enum_133.Current();
        ::app::Fuse::Elements::IElementBatchDrawable::Draw(::uPtr< ::uObject*>(d), dc, localToClipTransform, scissorRectInClipSpace);
    }
}

void ElementBatcher__Fuse_Resources_ISoftDisposable_SoftDispose(ElementBatcher* __this)
{
    __this->DiscardAtlasing();
}

int ElementBatcher__get_MaxElementPixels(::uStatic* __this)
{
    return (ElementBatcher__get_MaxElementSize(NULL).X * ElementBatcher__get_MaxElementSize(NULL).Y) / 2;
}

::app::Uno::Int2 ElementBatcher__get_MaxElementSize(::uStatic* __this)
{
    return ::app::Fuse::Elements::ElementAtlasFramebuffer__get_Size(NULL);
}

ElementBatcher* ElementBatcher__New_1(::uStatic* __this)
{
    ElementBatcher* inst = (ElementBatcher*)::uAllocObject(sizeof(ElementBatcher), ElementBatcher__typeof());
    inst->_ObjInit();
    return inst;
}

void ElementBatcher__OnAtlasSizeChanged(ElementBatcher* __this, ::uObject* sender, ::app::Uno::EventArgs* args)
{
    __this->DiscardAtlasing();
}

void ElementBatcher__RemoveAllElements(ElementBatcher* __this)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_elements)->Clear();
    __this->DrawListValid = false;
}

bool ElementBatcher__ShouldBatchElement(::uStatic* __this, ::app::Fuse::Node* node)
{
    ::app::Fuse::Elements::Element* elm = ::uAs< ::app::Fuse::Elements::Element*>(node, ::app::Fuse::Elements::Element__typeof());

    if (elm == NULL)
    {
        return false;
    }

    if (::uPtr< ::app::Fuse::Elements::Element*>(elm)->DrawCost() <= 1.0)
    {
        return false;
    }

    return ElementBatcher__ShouldBatchElementWithCachingMode(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(elm)->CachingMode()) && ElementBatcher__ShouldBatchElementWithSize(NULL, ::app::Fuse::Elements::ElementBatch__GetCachingRect(NULL, elm).Size());
}

bool ElementBatcher__ShouldBatchElementWithCachingMode(::uStatic* __this, int mode)
{
    return mode != 2;
}

bool ElementBatcher__ShouldBatchElementWithSize(::uStatic* __this, ::app::Uno::Int2 size)
{
    ::app::Uno::Int2 maxSize = ElementBatcher__get_MaxElementSize(NULL);
    return ((size.X <= maxSize.X) && (size.Y <= maxSize.Y)) && ((size.X * size.Y) <= ElementBatcher__get_MaxElementPixels(NULL));
}

void ElementBatcher__UpdateDrawList(ElementBatcher* __this)
{
    ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable*>(__this->_drawList)->Clear();
    __this->DiscardBatching();
    ::app::Uno::Int2 maxBatchRenderBounds = ::app::Uno::Int2__op_Multiply_1(NULL, ::app::Fuse::Elements::DisplayHelpers__get_DisplaySizeHint(NULL), 2);
    ::app::Fuse::Elements::ElementBatch* batch = NULL;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Node enum_126 = ::uPtr< ::app::Uno::Collections::List__Fuse_Node*>(__this->_elements)->GetEnumerator(); enum_126.MoveNext(); )
    {
        ::app::Fuse::Node* node = enum_126.Current();

        if (!ElementBatcher__ShouldBatchElement(NULL, node))
        {
            ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable*>(__this->_drawList)->Add((::uObject*)::app::Fuse::Elements::SingleNodeDrawable__New_1(NULL, node));
            batch = NULL;
            continue;
        }

        ::app::Fuse::Elements::Element* elm = ::uCast< ::app::Fuse::Elements::Element*>(node, ::app::Fuse::Elements::Element__typeof());
        bool emitNewBatch = false;
        ::app::Fuse::Elements::ElementAtlas* atlas = NULL;

        if (batch == NULL)
        {
            emitNewBatch = true;

            if (::uPtr< ::app::Fuse::Elements::Element*>(elm)->ElementBatchEntry() != NULL)
            {
                atlas = ::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->ElementBatchEntry())->_atlas;
            }
        }
        else
        {
            if ((::uPtr< ::app::Fuse::Elements::Element*>(elm)->ElementBatchEntry() == NULL) || (::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->ElementBatchEntry())->_atlas == NULL))
            {
                atlas = ::uPtr< ::app::Fuse::Elements::ElementBatch*>(batch)->_elementAtlas;

                if (!::uPtr< ::app::Fuse::Elements::ElementAtlas*>(atlas)->AddElement(elm))
                {
                    atlas = NULL;
                }
            }
            else
            {
                if (::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->ElementBatchEntry())->_atlas != ::uPtr< ::app::Fuse::Elements::ElementBatch*>(batch)->_elementAtlas)
                {
                    emitNewBatch = true;
                }

                atlas = ::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->ElementBatchEntry())->_atlas;
            }
        }

        if ((batch != NULL) && !emitNewBatch)
        {
            ::app::Uno::Rect batchRenderBounds = ::uPtr< ::app::Fuse::Elements::ElementBatch*>(batch)->RenderBounds();
            ::app::Uno::Rect elmRenderBounds = ::uPtr< ::app::Fuse::Elements::Element*>(elm)->CalcRenderBoundsInParentSpace();
            ::app::Uno::Rect newRenderBounds = ::app::Uno::Rect__Union(NULL, batchRenderBounds, elmRenderBounds);

            if (((newRenderBounds.Size().X > (float)maxBatchRenderBounds.X) || (newRenderBounds.Size().Y > (float)maxBatchRenderBounds.Y)) || batch->IsFull())
            {
                emitNewBatch = true;
            }
        }

        if (emitNewBatch || (atlas == NULL))
        {
            if (atlas == NULL)
            {
                for (::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementAtlas enum_127 = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas*>(__this->_atlasPool)->GetEnumerator(); enum_127.MoveNext(); )
                {
                    ::app::Fuse::Elements::ElementAtlas* a = enum_127.Current();

                    if (::uPtr< ::app::Fuse::Elements::ElementAtlas*>(a)->AddElement(elm))
                    {
                        atlas = a;
                        break;
                    }
                }

                if (atlas == NULL)
                {
                    atlas = __this->allocAtlas();
                }
            }

            batch = __this->allocBatch(atlas);

            if (((::uPtr< ::app::Fuse::Elements::Element*>(elm)->ElementBatchEntry() == NULL) || (::uPtr< ::app::Fuse::Elements::ElementBatchEntry*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->ElementBatchEntry())->_atlas != atlas)) && !::uPtr< ::app::Fuse::Elements::ElementAtlas*>(atlas)->AddElement(elm))
            {
                ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("BUG: atlas-insertion failed, but should not!"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Caching/$.uno"), 1040);
                ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable*>(__this->_drawList)->Add((::uObject*)::app::Fuse::Elements::SingleNodeDrawable__New_1(NULL, (::app::Fuse::Node*)elm));
                batch = NULL;
                continue;
            }

            ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_IElementBatchDrawable*>(__this->_drawList)->Add((::uObject*)batch);
        }

        ::uPtr< ::app::Fuse::Elements::ElementBatch*>(batch)->AddElement(elm);
    }

    __this->MaxSpilledRatio = 0.0f;

    for (::app::Uno::Collections::List1_Enumerator__Fuse_Elements_ElementAtlas enum_128 = ::uPtr< ::app::Uno::Collections::List__Fuse_Elements_ElementAtlas*>(__this->_atlasPool)->GetEnumerator(); enum_128.MoveNext(); )
    {
        ::app::Fuse::Elements::ElementAtlas* a = enum_128.Current();
        __this->MaxSpilledRatio = ::app::Uno::Math__Max_8(NULL, __this->MaxSpilledRatio, ::uPtr< ::app::Fuse::Elements::ElementAtlas*>(a)->SpilledRatio());
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* HitTestMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Elements.HitTestMode", ::app::Uno::Int__typeof(), 6);

    type->SetLiterals(
        "None", 0LL,
        "LocalVisual", 1LL,
        "LocalBounds", 2LL,
        "Children", 4LL,
        "LocalVisualAndChildren", 5LL,
        "LocalBoundsAndChildren", 6LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Caching/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IElementBatchDrawable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Elements.IElementBatchDrawable");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ITransformOrigin__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Fuse.Elements.ITransformOrigin");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LayoutArgs__uType* LayoutArgs__typeof()
{
    static ::uStaticStrong<LayoutArgs__uType*> type;
    if (type != NULL) return type;

    type = (LayoutArgs__uType*)::uAllocClassType(sizeof(LayoutArgs__uType), "Fuse.Elements.LayoutArgs", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::EventArgs__typeof());

    return type;
}

void LayoutArgs___ObjInit_1(LayoutArgs* __this, ::app::Uno::Float3 positionChange, ::app::Uno::Float2 oldSize, ::app::Uno::Float2 newSize, bool hasOld)
{
    ::app::Uno::EventArgs___ObjInit(__this);
    __this->PositionChange(positionChange);
    __this->OldSize(oldSize);
    __this->NewSize(newSize);
    __this->HasOld(hasOld);
}

bool LayoutArgs__get_HasOld(LayoutArgs* __this)
{
    return __this->_HasOld;
}

::app::Uno::Float2 LayoutArgs__get_NewSize(LayoutArgs* __this)
{
    return __this->_NewSize;
}

::app::Uno::Float2 LayoutArgs__get_OldSize(LayoutArgs* __this)
{
    return __this->_OldSize;
}

::app::Uno::Float3 LayoutArgs__get_PositionChange(LayoutArgs* __this)
{
    return __this->_PositionChange;
}

LayoutArgs* LayoutArgs__New_2(::uStatic* __this, ::app::Uno::Float3 positionChange, ::app::Uno::Float2 oldSize, ::app::Uno::Float2 newSize, bool hasOld)
{
    LayoutArgs* inst = (LayoutArgs*)::uAllocObject(sizeof(LayoutArgs), LayoutArgs__typeof());
    inst->_ObjInit_1(positionChange, oldSize, newSize, hasOld);
    return inst;
}

void LayoutArgs__set_HasOld(LayoutArgs* __this, bool value)
{
    __this->_HasOld = value;
}

void LayoutArgs__set_NewSize(LayoutArgs* __this, ::app::Uno::Float2 value)
{
    __this->_NewSize = value;
}

void LayoutArgs__set_OldSize(LayoutArgs* __this, ::app::Uno::Float2 value)
{
    __this->_OldSize = value;
}

void LayoutArgs__set_PositionChange(LayoutArgs* __this, ::app::Uno::Float3 value)
{
    __this->_PositionChange = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uDelegateType* LayoutHandler__typeof()
{
    static ::uStaticStrong< ::uDelegateType*> type;
    if (type != NULL) return type;

    type = ::uAllocDelegateType("Fuse.Elements.LayoutHandler", 2);

    type->SetSignature(::uVoid__typeof(),
        ::uObject__typeof(),
        ::app::Fuse::Elements::LayoutArgs__typeof());

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> LimitBoxSizing___limitHeightProperty;
::uStaticStrong< ::app::Fuse::PropertyHandle*> LimitBoxSizing___limitHeightUnitProperty;
::uStaticStrong< ::app::Fuse::PropertyHandle*> LimitBoxSizing___limitWidthProperty;
::uStaticStrong< ::app::Fuse::PropertyHandle*> LimitBoxSizing___limitWidthUnitProperty;
::uStaticStrong< LimitBoxSizing*> LimitBoxSizing__Singleton;

LimitBoxSizing__uType* LimitBoxSizing__typeof()
{
    static ::uStaticStrong<LimitBoxSizing__uType*> type;
    if (type != NULL) return type;

    type = (LimitBoxSizing__uType*)::uAllocClassType(sizeof(LimitBoxSizing__uType), "Fuse.Elements.LimitBoxSizing", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Elements::BoxSizing__typeof());
    type->__fp_ArrangeMarginBox = (::app::Uno::Float2(*)(::app::Fuse::Elements::BoxSizing*, ::app::Fuse::Elements::Element*, ::app::Uno::Float2, ::app::Uno::Float2, int))LimitBoxSizing__ArrangeMarginBox;
    type->__fp_CalcMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::BoxSizing*, ::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))LimitBoxSizing__CalcMarginSize;

    return type;
}

void LimitBoxSizing___ObjInit_1(LimitBoxSizing* __this)
{
    ::app::Fuse::Elements::BoxSizing___ObjInit(__this);
}

void LimitBoxSizing___TypeInit(::uStatic* __this)
{
    LimitBoxSizing__Singleton = LimitBoxSizing__New_1(NULL);
    LimitBoxSizing___limitHeightProperty = ::app::Fuse::Properties__CreateHandle(NULL);
    LimitBoxSizing___limitHeightUnitProperty = ::app::Fuse::Properties__CreateHandle(NULL);
    LimitBoxSizing___limitWidthProperty = ::app::Fuse::Properties__CreateHandle(NULL);
    LimitBoxSizing___limitWidthUnitProperty = ::app::Fuse::Properties__CreateHandle(NULL);
}

::app::Uno::Float2 LimitBoxSizing__ArrangeMarginBox(LimitBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet)
{
    return ::uPtr< ::app::Fuse::Elements::StandardBoxSizing*>(::app::Fuse::Elements::StandardBoxSizing__Singleton)->ArrangeMarginBox(element, position, availableSize, availSet);
}

::app::Uno::Float2 LimitBoxSizing__CalcMarginSize(LimitBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 fillSize, int fillSet)
{
    if (LimitBoxSizing__HasLimitHeight(NULL, element))
    {
        fillSet = fillSet & -3;
    }

    if (LimitBoxSizing__HasLimitWidth(NULL, element))
    {
        fillSet = fillSet & -2;
    }

    ::app::Uno::Float2 std = ::uPtr< ::app::Fuse::Elements::StandardBoxSizing*>(::app::Fuse::Elements::StandardBoxSizing__Singleton)->CalcMarginSize(element, fillSize, fillSet);
    ::app::Uno::Float2 c = __this->Limit(element, std);
    return c;
}

float LimitBoxSizing__GetLimitHeight(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->TryGet(LimitBoxSizing___limitHeightProperty, &v))
    {
        return ::uUnbox< float>(::app::Uno::Float__typeof(), v);
    }

    return 0.0f;
}

int LimitBoxSizing__GetLimitHeightUnit(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->TryGet(LimitBoxSizing___limitHeightUnitProperty, &v))
    {
        return ::uUnbox< int>(::app::Fuse::Elements::SizeUnit__typeof(), v);
    }

    return 0;
}

float LimitBoxSizing__GetLimitWidth(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->TryGet(LimitBoxSizing___limitWidthProperty, &v))
    {
        return ::uUnbox< float>(::app::Uno::Float__typeof(), v);
    }

    return 0.0f;
}

int LimitBoxSizing__GetLimitWidthUnit(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->TryGet(LimitBoxSizing___limitWidthUnitProperty, &v))
    {
        return ::uUnbox< int>(::app::Fuse::Elements::SizeUnit__typeof(), v);
    }

    return 0;
}

bool LimitBoxSizing__HasLimitHeight(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    return ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->Has(LimitBoxSizing___limitHeightProperty);
}

bool LimitBoxSizing__HasLimitWidth(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    return ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->Has(LimitBoxSizing___limitWidthProperty);
}

::app::Uno::Float2 LimitBoxSizing__Limit(LimitBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 std)
{
    if (LimitBoxSizing__HasLimitHeight(NULL, element))
    {
        float height = LimitBoxSizing__GetLimitHeight(NULL, element);
        int unit = LimitBoxSizing__GetLimitHeightUnit(NULL, element);
        bool known = bool();
        float size = __this->UnitSize(element, height, unit, std.Y, true, &known);
        std.Y = ::app::Uno::Math__Min_11(NULL, std.Y, size);
    }

    if (LimitBoxSizing__HasLimitWidth(NULL, element))
    {
        float height = LimitBoxSizing__GetLimitWidth(NULL, element);
        int unit = LimitBoxSizing__GetLimitWidthUnit(NULL, element);
        bool known = bool();
        float size = __this->UnitSize(element, height, unit, std.X, true, &known);
        std.X = ::app::Uno::Math__Min_11(NULL, std.X, size);
    }

    if (::uPtr< ::app::Fuse::Elements::Element*>(element)->SnapToPixels())
    {
        std = ::uPtr< ::app::Fuse::Elements::Element*>(element)->InternSnap(std);
    }

    return std;
}

LimitBoxSizing* LimitBoxSizing__New_1(::uStatic* __this)
{
    LimitBoxSizing* inst = (LimitBoxSizing*)::uAllocObject(sizeof(LimitBoxSizing), LimitBoxSizing__typeof());
    inst->_ObjInit_1();
    return inst;
}

void LimitBoxSizing__SetLimitHeight(::uStatic* __this, ::app::Fuse::Elements::Element* elm, float height)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->Set(LimitBoxSizing___limitHeightProperty, ::uBox(::app::Uno::Float__typeof(), height));
    elm->InvalidateLayout(2);
}

void LimitBoxSizing__SetLimitHeightUnit(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int unit)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->Set(LimitBoxSizing___limitHeightUnitProperty, ::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), unit));
    elm->InvalidateLayout(2);
}

void LimitBoxSizing__SetLimitWidth(::uStatic* __this, ::app::Fuse::Elements::Element* elm, float width)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->Set(LimitBoxSizing___limitWidthProperty, ::uBox(::app::Uno::Float__typeof(), width));
    elm->InvalidateLayout(2);
}

void LimitBoxSizing__SetLimitWidthUnit(::uStatic* __this, ::app::Fuse::Elements::Element* elm, int unit)
{
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->Set(LimitBoxSizing___limitWidthUnitProperty, ::uBox< int>(::app::Fuse::Elements::SizeUnit__typeof(), unit));
    elm->InvalidateLayout(2);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LimitBoxSizingData__uType* LimitBoxSizingData__typeof()
{
    static ::uStaticStrong<LimitBoxSizingData__uType*> type;
    if (type != NULL) return type;

    type = (LimitBoxSizingData__uType*)::uAllocClassType(sizeof(LimitBoxSizingData__uType), "Fuse.Elements.LimitBoxSizingData", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Behavior__typeof());
    type->__fp_OnRooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))LimitBoxSizingData__OnRooted;
    type->__fp_OnUnrooted = (void(*)(::app::Fuse::Behavior*, ::app::Fuse::Node*))LimitBoxSizingData__OnUnrooted;

    type->SetStrongRefs(
        "_target", offsetof(LimitBoxSizingData, _target));

    return type;
}

void LimitBoxSizingData__OnRooted(LimitBoxSizingData* __this, ::app::Fuse::Node* elm)
{
    __this->_target = ::uAs< ::app::Fuse::Elements::Element*>(elm, ::app::Fuse::Elements::Element__typeof());

    if (__this->_target != NULL)
    {
        if (__this->_hasLimitHeight)
        {
            ::app::Fuse::Elements::LimitBoxSizing__SetLimitHeight(NULL, __this->_target, __this->_limitHeight);
            ::app::Fuse::Elements::LimitBoxSizing__SetLimitHeightUnit(NULL, __this->_target, __this->_limitHeightUnit);
        }

        if (__this->_hasLimitWidth)
        {
            ::app::Fuse::Elements::LimitBoxSizing__SetLimitWidth(NULL, __this->_target, __this->_limitWidth);
            ::app::Fuse::Elements::LimitBoxSizing__SetLimitWidthUnit(NULL, __this->_target, __this->_limitWidthUnit);
        }
    }
}

void LimitBoxSizingData__OnUnrooted(LimitBoxSizingData* __this, ::app::Fuse::Node* elm)
{
    __this->_target = NULL;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< NoImplicitMaxBoxSizing*> NoImplicitMaxBoxSizing__Singleton_1;

NoImplicitMaxBoxSizing__uType* NoImplicitMaxBoxSizing__typeof()
{
    static ::uStaticStrong<NoImplicitMaxBoxSizing__uType*> type;
    if (type != NULL) return type;

    type = (NoImplicitMaxBoxSizing__uType*)::uAllocClassType(sizeof(NoImplicitMaxBoxSizing__uType), "Fuse.Elements.NoImplicitMaxBoxSizing", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Elements::StandardBoxSizing__typeof());

    return type;
}

void NoImplicitMaxBoxSizing___ObjInit_2(NoImplicitMaxBoxSizing* __this)
{
    ::app::Fuse::Elements::StandardBoxSizing___ObjInit_1(__this);
    __this->ImplicitMax = false;
}

void NoImplicitMaxBoxSizing___TypeInit_1(::uStatic* __this)
{
    NoImplicitMaxBoxSizing__Singleton_1 = NoImplicitMaxBoxSizing__New_2(NULL);
}

NoImplicitMaxBoxSizing* NoImplicitMaxBoxSizing__New_2(::uStatic* __this)
{
    NoImplicitMaxBoxSizing* inst = (NoImplicitMaxBoxSizing*)::uAllocObject(sizeof(NoImplicitMaxBoxSizing), NoImplicitMaxBoxSizing__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::PropertyHandle*> ShadowBoxSizing___shadowDataProperty;
::uStaticStrong< ShadowBoxSizing*> ShadowBoxSizing__Singleton;

ShadowBoxSizing__uType* ShadowBoxSizing__typeof()
{
    static ::uStaticStrong<ShadowBoxSizing__uType*> type;
    if (type != NULL) return type;

    type = (ShadowBoxSizing__uType*)::uAllocClassType(sizeof(ShadowBoxSizing__uType), "Fuse.Elements.ShadowBoxSizing", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Elements::BoxSizing__typeof());
    type->__fp_ArrangeMarginBox = (::app::Uno::Float2(*)(::app::Fuse::Elements::BoxSizing*, ::app::Fuse::Elements::Element*, ::app::Uno::Float2, ::app::Uno::Float2, int))ShadowBoxSizing__ArrangeMarginBox;
    type->__fp_CalcMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::BoxSizing*, ::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))ShadowBoxSizing__CalcMarginSize;

    return type;
}

void ShadowBoxSizing___ObjInit_1(ShadowBoxSizing* __this)
{
    ::app::Fuse::Elements::BoxSizing___ObjInit(__this);
}

void ShadowBoxSizing___TypeInit(::uStatic* __this)
{
    ShadowBoxSizing__Singleton = ShadowBoxSizing__New_1(NULL);
    ShadowBoxSizing___shadowDataProperty = ::app::Fuse::Properties__CreateHandle(NULL);
}

::app::Uno::Float2 ShadowBoxSizing__ArrangeMarginBox(ShadowBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet)
{
    ::app::Fuse::Elements::Element* shadow = ShadowBoxSizing__GetShadowElement(NULL, element);

    if (shadow == NULL)
    {
        return ::uPtr< ::app::Fuse::Elements::Element*>(element)->ActualSize();
    }

    return ::uPtr< ::app::Fuse::Elements::StandardBoxSizing*>(::app::Fuse::Elements::StandardBoxSizing__Singleton)->ArrangeMarginBox(element, position, availableSize, 3);
}

::app::Uno::Float2 ShadowBoxSizing__CalcMarginSize(ShadowBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::app::Fuse::Elements::Element* shadow = ShadowBoxSizing__GetShadowElement(NULL, element);

    if (shadow == NULL)
    {
        return ::uPtr< ::app::Fuse::Elements::Element*>(element)->ActualSize();
    }

    return ::uPtr< ::app::Fuse::Elements::StandardBoxSizing*>(::app::Fuse::Elements::StandardBoxSizing__Singleton)->CalcMarginSize(element, fillSize, fillSet);
}

::app::Fuse::Elements::ShadowBoxSizing_ShadowData* ShadowBoxSizing__GetShadowData(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    ::uObject* v;

    if (::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->TryGet(ShadowBoxSizing___shadowDataProperty, &v))
    {
        return ::uCast< ::app::Fuse::Elements::ShadowBoxSizing_ShadowData*>(v, ::app::Fuse::Elements::ShadowBoxSizing_ShadowData__typeof());
    }

    ::app::Fuse::Elements::ShadowBoxSizing_ShadowData* sd = ::app::Fuse::Elements::ShadowBoxSizing_ShadowData__New_1(NULL);
    ::uPtr< ::app::Fuse::Elements::ShadowBoxSizing_ShadowData*>(sd)->Element = elm;
    ::uPtr< ::app::Fuse::Properties*>(::uPtr< ::app::Fuse::Elements::Element*>(elm)->Properties())->Set(ShadowBoxSizing___shadowDataProperty, (::uObject*)sd);
    return sd;
}

::app::Fuse::Elements::Element* ShadowBoxSizing__GetShadowElement(::uStatic* __this, ::app::Fuse::Elements::Element* elm)
{
    return ::uPtr< ::app::Fuse::Elements::ShadowBoxSizing_ShadowData*>(ShadowBoxSizing__GetShadowData(NULL, elm))->Shadow();
}

ShadowBoxSizing* ShadowBoxSizing__New_1(::uStatic* __this)
{
    ShadowBoxSizing* inst = (ShadowBoxSizing*)::uAllocObject(sizeof(ShadowBoxSizing), ShadowBoxSizing__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ShadowBoxSizing_ShadowData__uType* ShadowBoxSizing_ShadowData__typeof()
{
    static ::uStaticStrong<ShadowBoxSizing_ShadowData__uType*> type;
    if (type != NULL) return type;

    type = (ShadowBoxSizing_ShadowData__uType*)::uAllocClassType(sizeof(ShadowBoxSizing_ShadowData__uType), "Fuse.Elements.ShadowBoxSizing.ShadowData", false, 0, 2, 0);

    type->SetStrongRefs(
        "_shadow", offsetof(ShadowBoxSizing_ShadowData, _shadow),
        "Element", offsetof(ShadowBoxSizing_ShadowData, Element));

    return type;
}

void ShadowBoxSizing_ShadowData___ObjInit(ShadowBoxSizing_ShadowData* __this)
{
}

void ShadowBoxSizing_ShadowData__CheckLayout(ShadowBoxSizing_ShadowData* __this)
{
    if ((((__this->Element == NULL) || (__this->_shadow == NULL)) || !::uPtr< ::app::Fuse::Elements::Element*>(__this->_shadow)->IsRooted()) || !::uPtr< ::app::Fuse::Elements::Element*>(__this->Element)->IsRooted())
    {
        return;
    }

    ::app::Uno::Float4x4 m = ::uPtr< ::app::Fuse::Node*>(::uPtr< ::app::Fuse::Elements::Element*>(__this->_shadow)->Parent())->GetTransformTo(::uPtr< ::app::Fuse::Elements::Element*>(__this->Element)->Parent());
    ::app::Uno::Float4 ind_123 = ::app::Uno::Vector__Transform_2(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(__this->_shadow)->ActualPosition(), m);
    ::app::Uno::Float2 p = ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y);
    ::app::Uno::Rect r = ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), ::uPtr< ::app::Fuse::Elements::Element*>(__this->_shadow)->ActualSize());
    ::app::Uno::Float2 s = ::app::Uno::Rect__Transform(NULL, r, m).Size();
    ::uPtr< ::app::Fuse::Elements::Element*>(__this->Element)->ArrangeMarginBox(p, s, 3);
}

::app::Fuse::Elements::Element* ShadowBoxSizing_ShadowData__get_Shadow(ShadowBoxSizing_ShadowData* __this)
{
    return __this->_shadow;
}

ShadowBoxSizing_ShadowData* ShadowBoxSizing_ShadowData__New_1(::uStatic* __this)
{
    ShadowBoxSizing_ShadowData* inst = (ShadowBoxSizing_ShadowData*)::uAllocObject(sizeof(ShadowBoxSizing_ShadowData), ShadowBoxSizing_ShadowData__typeof());
    inst->_ObjInit();
    return inst;
}

void ShadowBoxSizing_ShadowData__OnLayoutChanged(ShadowBoxSizing_ShadowData* __this, ::uObject* s, ::uObject* args)
{
    ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)ShadowBoxSizing_ShadowData__CheckLayout, __this));
}

void ShadowBoxSizing_ShadowData__set_Shadow(ShadowBoxSizing_ShadowData* __this, ::app::Fuse::Elements::Element* value)
{
    if (__this->_shadow == value)
    {
        return;
    }

    if (__this->_shadow != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_shadow)->remove_LayoutChanged(::uNewDelegateNonVirt(::app::Fuse::Elements::LayoutHandler__typeof(), (const void*)ShadowBoxSizing_ShadowData__OnLayoutChanged, __this));
    }

    __this->_shadow = value;

    if (__this->_shadow != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(__this->_shadow)->add_LayoutChanged(::uNewDelegateNonVirt(::app::Fuse::Elements::LayoutHandler__typeof(), (const void*)ShadowBoxSizing_ShadowData__OnLayoutChanged, __this));
    }

    if (::uPtr< ::app::Fuse::Elements::Element*>(__this->Element)->IsRooted())
    {
        ::app::Fuse::UpdateManager__AddDeferredAction(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)ShadowBoxSizing_ShadowData__CheckLayout, __this));
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* SimpleAlignment__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Elements.SimpleAlignment", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Begin", 0LL,
        "Center", 1LL,
        "End", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Caching/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SingleNodeDrawable__uType* SingleNodeDrawable__typeof()
{
    static ::uStaticStrong<SingleNodeDrawable__uType*> type;
    if (type != NULL) return type;

    type = (SingleNodeDrawable__uType*)::uAllocClassType(sizeof(SingleNodeDrawable__uType), "Fuse.Elements.SingleNodeDrawable", false, 1, 1, 0);

    type->__interface_0.__fp_Draw = (void(*)(void*, ::app::Fuse::DrawContext*, ::app::Uno::Float4x4, ::app::Uno::Rect))SingleNodeDrawable__Draw;

    type->SetInterfaces(
        ::app::Fuse::Elements::IElementBatchDrawable__typeof(), offsetof(SingleNodeDrawable__uType, __interface_0));

    type->SetStrongRefs(
        "_elm", offsetof(SingleNodeDrawable, _elm));

    return type;
}

void SingleNodeDrawable___ObjInit(SingleNodeDrawable* __this, ::app::Fuse::Node* elm)
{
    __this->_elm = elm;
}

void SingleNodeDrawable__Draw(SingleNodeDrawable* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 localToClipTransform, ::app::Uno::Rect scissorRectInClipSpace)
{
    ::uPtr< ::app::Fuse::Node*>(__this->_elm)->Draw(dc);
}

SingleNodeDrawable* SingleNodeDrawable__New_1(::uStatic* __this, ::app::Fuse::Node* elm)
{
    SingleNodeDrawable* inst = (SingleNodeDrawable*)::uAllocObject(sizeof(SingleNodeDrawable), SingleNodeDrawable__typeof());
    inst->_ObjInit(elm);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* SizeUnit__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Elements.SizeUnit", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Points", 0LL,
        "Percent", 1LL,
        "Pixels", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< StandardBoxSizing*> StandardBoxSizing__Singleton;

StandardBoxSizing__uType* StandardBoxSizing__typeof()
{
    static ::uStaticStrong<StandardBoxSizing__uType*> type;
    if (type != NULL) return type;

    type = (StandardBoxSizing__uType*)::uAllocClassType(sizeof(StandardBoxSizing__uType), "Fuse.Elements.StandardBoxSizing", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Elements::BoxSizing__typeof());
    type->__fp_ArrangeMarginBox = (::app::Uno::Float2(*)(::app::Fuse::Elements::BoxSizing*, ::app::Fuse::Elements::Element*, ::app::Uno::Float2, ::app::Uno::Float2, int))StandardBoxSizing__ArrangeMarginBox;
    type->__fp_CalcMarginSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::BoxSizing*, ::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))StandardBoxSizing__CalcMarginSize;
    type->__fp_IsContainerRelativeSize = (bool(*)(::app::Fuse::Elements::BoxSizing*, ::app::Fuse::Elements::Element*))StandardBoxSizing__IsContainerRelativeSize;

    return type;
}

void StandardBoxSizing___ObjInit_1(StandardBoxSizing* __this)
{
    __this->ImplicitMax = true;
    ::app::Fuse::Elements::BoxSizing___ObjInit(__this);
}

void StandardBoxSizing___TypeInit(::uStatic* __this)
{
    StandardBoxSizing__Singleton = StandardBoxSizing__New_1(NULL);
}

::app::Uno::Float2 StandardBoxSizing__ApplyFixedPaddingBox(StandardBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int* fillSet, bool* fixedSize)
{
    int origFillSet = *fillSet;
    bool known = false;

    if (::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->HasValue(element))
    {
        int widthUnit = ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->GetUnit(element);
        sz.X = __this->UnitSize(element, ::uPtr< ::app::Fuse::Elements::Element*>(element)->Width(), widthUnit, fillSize.X, (*fillSet & 1) == 1, &known);
    }
    else if ((((*fillSet & 1) == 1) && (::app::Fuse::Elements::AlignmentHelpers__GetHorizontalAlign(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(element)->Alignment()) == 0)) && !::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__XProperty)->HasValue(element))
    {
        sz.X = fillSize.X;
        known = true;
    }

    if (known)
    {
        *fillSet = *fillSet | 1;
    }
    else
    {
        *fillSet = *fillSet & -2;
    }

    *fixedSize = known;
    known = false;

    if (::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->HasValue(element))
    {
        int heightUnit = ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->GetUnit(element);
        sz.Y = __this->UnitSize(element, ::uPtr< ::app::Fuse::Elements::Element*>(element)->Height(), heightUnit, fillSize.Y, (*fillSet & 2) == 2, &known);
    }
    else if ((((*fillSet & 2) == 2) && (::app::Fuse::Elements::AlignmentHelpers__GetVerticalAlign(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(element)->Alignment()) == 0)) && !::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__YProperty)->HasValue(element))
    {
        sz.Y = fillSize.Y;
        known = true;
    }

    if (known)
    {
        *fillSet = *fillSet | 2;
    }
    else
    {
        *fillSet = *fillSet & -3;
    }

    *fixedSize = *fixedSize && known;
    sz = __this->ConstrainMinMax(element, sz, fillSize, origFillSet);
    return sz;
}

::app::Uno::Float2 StandardBoxSizing__ArrangeMarginBox(StandardBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 position, ::app::Uno::Float2 availableSize, int availSet)
{
    ::app::Uno::Float4 margin = ::uPtr< ::app::Fuse::Elements::Element*>(element)->Margin();
    ::app::Uno::Float2 avSize = ::app::Uno::Math__Max_10(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), availableSize);
    ::app::Uno::Float2 marginBox = element->GetMarginSize(avSize, availSet);
    ::app::Uno::Float2 paddingBox = ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, marginBox, ::app::Uno::Float2__New_2(NULL, margin.X, margin.Y)), ::app::Uno::Float2__New_2(NULL, margin.Z, margin.W));
    avSize = ::app::Uno::Float2__op_Subtraction_2(NULL, avSize, ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__New_2(NULL, margin.X, margin.Y), ::app::Uno::Float2__New_2(NULL, margin.Z, margin.W)));
    avSize = ::app::Uno::Math__Max_10(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), avSize);
    paddingBox = ::app::Uno::Math__Max_10(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), paddingBox);
    ::app::Uno::Float2 s = ::app::Uno::Float2__New_1(NULL, 0.0f);

    if (element->Visibility() != 1)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(element)->InternArrangePaddingBox(paddingBox);
        s = paddingBox;
    }

    ::app::Uno::Float2 p = position;
    int halign = __this->EffectiveHorizontalAlignment(element);

    if (!((availSet & 1) == 1))
    {
        halign = 0;
    }

    int valign = __this->EffectiveVerticalAlignment(element);

    if (!((availSet & 2) == 2))
    {
        valign = 0;
    }

    p.X = p.X + margin.X;

    switch (halign)
    {
        case 0:
        {
            break;
        }
        case 1:
        {
            p.X = p.X + (avSize.X * 0.5f);
            break;
        }
        case 2:
        {
            p.X = p.X + avSize.X;
            break;
        }
    }

    p.Y = p.Y + margin.Y;

    if ((availSet & 2) == 2)
    {
        switch (valign)
        {
            case 0:
            {
                break;
            }
            case 1:
            {
                p.Y = p.Y + (avSize.Y * 0.5f);
                break;
            }
            case 2:
            {
                p.Y = p.Y + avSize.Y;
                break;
            }
        }
    }

    bool ignore = bool();

    if (::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__OffsetProperty)->HasValue(element))
    {
        ::app::Uno::Float2 offset = ::uPtr< ::app::Fuse::Elements::Element*>(element)->Offset();
        int offsetUnit = ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float2__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__OffsetProperty)->GetUnit(element);
        ::app::Uno::Float2 o = ::app::Uno::Float2__New_2(NULL, __this->UnitSize(element, offset.X, offsetUnit, avSize.X, (availSet & 1) == 1, &ignore), __this->UnitSize(element, offset.Y, offsetUnit, avSize.Y, (availSet & 2) == 2, &ignore));
        p = ::app::Uno::Float2__op_Addition_2(NULL, p, o);
    }

    if (::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__XProperty)->HasValue(element))
    {
        float o = ::uPtr< ::app::Fuse::Elements::Element*>(element)->X();
        int unit = ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__XProperty)->GetUnit(element);
        p.X = p.X + __this->UnitSize(element, o, unit, avSize.X, (availSet & 1) == 1, &ignore);
    }

    if (::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__YProperty)->HasValue(element))
    {
        float o = ::uPtr< ::app::Fuse::Elements::Element*>(element)->Y();
        int unit = ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__YProperty)->GetUnit(element);
        p.Y = p.Y + __this->UnitSize(element, o, unit, avSize.Y, (availSet & 2) == 2, &ignore);
    }

    ::app::Uno::Float2 anchor = ::app::Uno::Float2();
    int anchorUnit;
    __this->EffectiveAnchor(element, halign, valign, &anchor, &anchorUnit);
    element->ActualAnchor(::app::Uno::Float2__New_2(NULL, __this->UnitSize(element, anchor.X, anchorUnit, s.X, true, &ignore), __this->UnitSize(element, anchor.Y, anchorUnit, s.Y, true, &ignore)));
    p = ::app::Uno::Float2__op_Subtraction_2(NULL, p, element->ActualAnchor());
    element->PerformPlacement(p, s);
    return marginBox;
}

::app::Uno::Float2 StandardBoxSizing__CalcMarginSize(StandardBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_126 = ::app::Uno::Float4();

    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4*>(::app::Fuse::Elements::Element__MarginProperty)->HasValue(element))
    {
        fillSize = ::app::Uno::Float2__op_Subtraction_2(NULL, fillSize, ::app::Uno::Float2__op_Addition_2(NULL, (ind_123 = ::uPtr< ::app::Fuse::Elements::Element*>(element)->Margin(), ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y)), (ind_124 = ::uPtr< ::app::Fuse::Elements::Element*>(element)->Margin(), ::app::Uno::Float2__New_2(NULL, ind_124.Z, ind_124.W))));
    }

    if (element->Visibility() == 1)
    {
        return ::app::Uno::Float2__New_1(NULL, 0.0f);
    }

    bool childFixedSize = bool();
    int childFillSet = fillSet;
    ::app::Uno::Float2 childPadFill = __this->ApplyFixedPaddingBox(element, fillSize, fillSize, &childFillSet, &childFixedSize);
    ::app::Uno::Float2 sz = ::app::Uno::Float2();

    if (!childFixedSize)
    {
        sz = __this->GetPaddingSize(element, childPadFill, childFillSet);
    }
    else
    {
        sz = childPadFill;
    }

    ::app::Uno::Float2 lsz = __this->LimitPaddingBoxSize(element, sz, fillSize, fillSet);
    int nfs = childFillSet;
    bool needResize = false;

    if ((lsz.X < sz.X) && !((childFillSet & 1) == 1))
    {
        nfs = nfs | 1;
        needResize = true;
    }

    if ((lsz.Y < sz.Y) && !((childFillSet & 2) == 2))
    {
        nfs = nfs | 2;
        needResize = true;
    }

    if (needResize)
    {
        sz = __this->GetPaddingSize(element, lsz, nfs);
        sz = __this->LimitPaddingBoxSize(element, sz, fillSize, fillSet);
    }
    else
    {
        sz = lsz;
    }

    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4*>(::app::Fuse::Elements::Element__MarginProperty)->HasValue(element))
    {
        sz = ::app::Uno::Float2__op_Addition_2(NULL, sz, ::app::Uno::Float2__op_Addition_2(NULL, (ind_125 = element->Margin(), ::app::Uno::Float2__New_2(NULL, ind_125.X, ind_125.Y)), (ind_126 = element->Margin(), ::app::Uno::Float2__New_2(NULL, ind_126.Z, ind_126.W))));
    }

    return sz;
}

::app::Uno::Float2 StandardBoxSizing__ConstrainMinMax(StandardBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int fillSet)
{
    bool known = false;
    float limit = 0.0f;
    int unit = 0;

    if (::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MaxWidthProperty)->HasValue(element))
    {
        limit = ::uPtr< ::app::Fuse::Elements::Element*>(element)->MaxWidth();
        unit = ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MaxWidthProperty)->GetUnit(element);
        known = true;
    }
    else if (__this->ImplicitMax)
    {
        limit = 100.0f;
        unit = 1;
        known = true;
    }

    if (known)
    {
        float mx = __this->UnitSize(element, limit, unit, fillSize.X, (fillSet & 1) == 1, &known);

        if (known)
        {
            sz.X = ::app::Uno::Math__Min_11(NULL, mx, sz.X);
        }
    }

    known = false;

    if (::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MaxHeightProperty)->HasValue(element))
    {
        limit = ::uPtr< ::app::Fuse::Elements::Element*>(element)->MaxHeight();
        unit = ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MaxHeightProperty)->GetUnit(element);
        known = true;
    }
    else if (__this->ImplicitMax)
    {
        limit = 100.0f;
        unit = 1;
        known = true;
    }

    if (known)
    {
        float my = __this->UnitSize(element, limit, unit, fillSize.Y, (fillSet & 2) == 2, &known);

        if (known)
        {
            sz.Y = ::app::Uno::Math__Min_11(NULL, my, sz.Y);
        }
    }

    if (::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MinWidthProperty)->HasValue(element))
    {
        int minWidthUnit = ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MinWidthProperty)->GetUnit(element);
        float mn = __this->UnitSize(element, ::uPtr< ::app::Fuse::Elements::Element*>(element)->MinWidth(), minWidthUnit, fillSize.X, (fillSet & 1) == 1, &known);

        if (known)
        {
            sz.X = ::app::Uno::Math__Max_8(NULL, mn, sz.X);
        }
    }

    if (::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MinHeightProperty)->HasValue(element))
    {
        int minHeightUnit = ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__MinHeightProperty)->GetUnit(element);
        float mn = __this->UnitSize(element, ::uPtr< ::app::Fuse::Elements::Element*>(element)->MinHeight(), minHeightUnit, fillSize.Y, (fillSet & 2) == 2, &known);
        sz.Y = ::app::Uno::Math__Max_8(NULL, mn, sz.Y);
    }

    return sz;
}

::app::Uno::Float2 StandardBoxSizing__GetPaddingSize(StandardBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 padFill, int fillSet)
{
    ::app::Uno::Float4 ind_127 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_128 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_129 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_130 = ::app::Uno::Float4();

    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4*>(::app::Fuse::Elements::Element__PaddingProperty)->HasValue(element))
    {
        padFill = ::app::Uno::Float2__op_Subtraction_2(NULL, padFill, ::app::Uno::Float2__op_Addition_2(NULL, (ind_127 = ::uPtr< ::app::Fuse::Elements::Element*>(element)->Padding(), ::app::Uno::Float2__New_2(NULL, ind_127.X, ind_127.Y)), (ind_128 = ::uPtr< ::app::Fuse::Elements::Element*>(element)->Padding(), ::app::Uno::Float2__New_2(NULL, ind_128.Z, ind_128.W))));
    }

    ::app::Uno::Float2 sz = element->InternGetContentSize(padFill, fillSet);

    if (::uPtr< ::app::Fuse::StyleProperty__Fuse_Elements_Element__float4*>(::app::Fuse::Elements::Element__PaddingProperty)->HasValue(element))
    {
        sz = ::app::Uno::Float2__op_Addition_2(NULL, sz, ::app::Uno::Float2__op_Addition_2(NULL, (ind_129 = element->Padding(), ::app::Uno::Float2__New_2(NULL, ind_129.X, ind_129.Y)), (ind_130 = element->Padding(), ::app::Uno::Float2__New_2(NULL, ind_130.Z, ind_130.W))));
    }

    return sz;
}

bool StandardBoxSizing__IsContainerRelativeSize(StandardBoxSizing* __this, ::app::Fuse::Elements::Element* element)
{
    bool w = ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__WidthProperty)->HasValue(element) || (!::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__XProperty)->HasValue(element) && (::app::Fuse::Elements::AlignmentHelpers__GetHorizontalAlign(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(element)->Alignment()) == 0));
    bool h = ::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__HeightProperty)->HasValue(element) || (!::uPtr< ::app::Fuse::StylePropertyWithUnit__Fuse_Elements_Element__float__Fuse_Elements_SizeUnit*>(::app::Fuse::Elements::Element__YProperty)->HasValue(element) && (::app::Fuse::Elements::AlignmentHelpers__GetVerticalAlign(NULL, element->Alignment()) == 0));
    return w && h;
}

::app::Uno::Float2 StandardBoxSizing__LimitPaddingBoxSize(StandardBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 sz, ::app::Uno::Float2 fillSize, int fillSet)
{
    bool fixedSize = bool();
    sz = __this->ApplyFixedPaddingBox(element, sz, fillSize, &fillSet, &fixedSize);

    if (::uPtr< ::app::Fuse::Elements::Element*>(element)->SnapToPixels())
    {
        sz = __this->SnapUp(element, sz);
    }

    return sz;
}

StandardBoxSizing* StandardBoxSizing__New_1(::uStatic* __this)
{
    StandardBoxSizing* inst = (StandardBoxSizing*)::uAllocObject(sizeof(StandardBoxSizing), StandardBoxSizing__typeof());
    inst->_ObjInit_1();
    return inst;
}

::app::Uno::Float2 StandardBoxSizing__SnapUp(StandardBoxSizing* __this, ::app::Fuse::Elements::Element* element, ::app::Uno::Float2 p)
{
    ::app::Uno::Float2 s = ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Math__Ceil_2(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, p, ::uPtr< ::app::Fuse::Elements::Element*>(element)->AbsoluteZoom())), ::uPtr< ::app::Fuse::Elements::Element*>(element)->AbsoluteZoom());
    return s;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* StretchDirection__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Elements.StretchDirection", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Both", 0LL,
        "UpOnly", 1LL,
        "DownOnly", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* StretchMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Elements.StretchMode", ::app::Uno::Int__typeof(), 7);

    type->SetLiterals(
        "PointPrecise", 0LL,
        "PixelPrecise", 1LL,
        "PointPrefer", 2LL,
        "Fill", 3LL,
        "Scale9", 4LL,
        "Uniform", 5LL,
        "UniformToFill", 6LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* StretchSizing__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Elements.StretchSizing", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Zero", 0LL,
        "Natural", 1LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* TextAlignment__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Elements.TextAlignment", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Left", 0LL,
        "Center", 1LL,
        "Right", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Caching/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextureAtlas__uType* TextureAtlas__typeof()
{
    static ::uStaticStrong<TextureAtlas__uType*> type;
    if (type != NULL) return type;

    type = (TextureAtlas__uType*)::uAllocClassType(sizeof(TextureAtlas__uType), "Fuse.Elements.TextureAtlas", false, 0, 0, 0);

    return type;
}

void TextureAtlas___ObjInit(TextureAtlas* __this, ::app::Uno::Int2 size)
{
    __this->Size(size);
}

bool TextureAtlas__AddRect(TextureAtlas* __this, ::app::Uno::Int2 size, ::app::Uno::Recti* ret)
{
    if ((__this->_allocatedLine.Right + size.X) > __this->Size().X)
    {
        __this->_allocatedLines = ::app::Uno::Recti__Union(NULL, __this->_allocatedLines, __this->_allocatedLine);
        __this->_allocatedLine = ::app::Uno::Recti__New_2(NULL, __this->_allocatedLines.LeftBottom(), ::app::Uno::Int2__New_2(NULL, 0, 0));
    }

    if ((__this->_allocatedLine.Bottom + size.Y) > __this->Size().Y)
    {
        *ret = ::app::Uno::Recti__New_1(NULL, 0, 0, 0, 0);
        return false;
    }

    *ret = ::app::Uno::Recti__New_2(NULL, __this->_allocatedLine.RightTop(), size);
    __this->_allocatedLine = ::app::Uno::Recti__Union(NULL, __this->_allocatedLine, *ret);
    return true;
}

::app::Uno::Int2 TextureAtlas__get_Size(TextureAtlas* __this)
{
    return __this->_Size;
}

TextureAtlas* TextureAtlas__New_1(::uStatic* __this, ::app::Uno::Int2 size)
{
    TextureAtlas* inst = (TextureAtlas*)::uAllocObject(sizeof(TextureAtlas), TextureAtlas__typeof());
    inst->_ObjInit(size);
    return inst;
}

void TextureAtlas__set_Size(TextureAtlas* __this, ::app::Uno::Int2 value)
{
    __this->_Size = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* TextWrapping__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Elements.TextWrapping", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "NoWrap", 0LL,
        "Wrap", 1LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uObject*> TransformOrigins__Anchor;
::uStaticStrong< ::uObject*> TransformOrigins__Center;
::uStaticStrong< ::uObject*> TransformOrigins__HorizontalBoxCenter;
::uStaticStrong< ::uObject*> TransformOrigins__TopLeft;
::uStaticStrong< ::uObject*> TransformOrigins__VerticalBoxCenter;

TransformOrigins__uType* TransformOrigins__typeof()
{
    static ::uStaticStrong<TransformOrigins__uType*> type;
    if (type != NULL) return type;

    type = (TransformOrigins__uType*)::uAllocClassType(sizeof(TransformOrigins__uType), "Fuse.Elements.TransformOrigins");

    return type;
}

void TransformOrigins___TypeInit(::uStatic* __this)
{
    ::app::Fuse::Elements::TransformOrigins_BoxCenter* collection_124;
    ::app::Fuse::Elements::TransformOrigins_BoxCenter* collection_123;
    TransformOrigins__TopLeft = (::uObject*)::app::Fuse::Elements::TransformOrigins_TopLeftOrigin__New_1(NULL);
    TransformOrigins__Center = (::uObject*)::app::Fuse::Elements::TransformOrigins_CenterOrigin__New_1(NULL);
    TransformOrigins__Anchor = (::uObject*)::app::Fuse::Elements::TransformOrigins_AnchorOrigin__New_1(NULL);
    TransformOrigins__HorizontalBoxCenter = (::uObject*)(collection_124 = ::app::Fuse::Elements::TransformOrigins_BoxCenter__New_1(NULL), ::uPtr< ::app::Fuse::Elements::TransformOrigins_BoxCenter*>(collection_124)->Depth = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f), collection_124);
    TransformOrigins__VerticalBoxCenter = (::uObject*)(collection_123 = ::app::Fuse::Elements::TransformOrigins_BoxCenter__New_1(NULL), ::uPtr< ::app::Fuse::Elements::TransformOrigins_BoxCenter*>(collection_123)->Depth = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f), collection_123);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TransformOrigins_AnchorOrigin__uType* TransformOrigins_AnchorOrigin__typeof()
{
    static ::uStaticStrong<TransformOrigins_AnchorOrigin__uType*> type;
    if (type != NULL) return type;

    type = (TransformOrigins_AnchorOrigin__uType*)::uAllocClassType(sizeof(TransformOrigins_AnchorOrigin__uType), "Fuse.Elements.TransformOrigins.AnchorOrigin", false, 1, 0, 0);

    type->__interface_0.__fp_GetOffset = (::app::Uno::Float3(*)(void*, ::app::Fuse::Elements::Element*))TransformOrigins_AnchorOrigin__GetOffset;

    type->SetInterfaces(
        ::app::Fuse::Elements::ITransformOrigin__typeof(), offsetof(TransformOrigins_AnchorOrigin__uType, __interface_0));

    return type;
}

void TransformOrigins_AnchorOrigin___ObjInit(TransformOrigins_AnchorOrigin* __this)
{
}

::app::Uno::Float3 TransformOrigins_AnchorOrigin__GetOffset(TransformOrigins_AnchorOrigin* __this, ::app::Fuse::Elements::Element* elm)
{
    return ::app::Uno::Float3__New_4(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(elm)->ActualAnchor(), 0.0f);
}

TransformOrigins_AnchorOrigin* TransformOrigins_AnchorOrigin__New_1(::uStatic* __this)
{
    TransformOrigins_AnchorOrigin* inst = (TransformOrigins_AnchorOrigin*)::uAllocObject(sizeof(TransformOrigins_AnchorOrigin), TransformOrigins_AnchorOrigin__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TransformOrigins_BoxCenter__uType* TransformOrigins_BoxCenter__typeof()
{
    static ::uStaticStrong<TransformOrigins_BoxCenter__uType*> type;
    if (type != NULL) return type;

    type = (TransformOrigins_BoxCenter__uType*)::uAllocClassType(sizeof(TransformOrigins_BoxCenter__uType), "Fuse.Elements.TransformOrigins.BoxCenter", false, 1, 0, 0);

    type->__interface_0.__fp_GetOffset = (::app::Uno::Float3(*)(void*, ::app::Fuse::Elements::Element*))TransformOrigins_BoxCenter__GetOffset;

    type->SetInterfaces(
        ::app::Fuse::Elements::ITransformOrigin__typeof(), offsetof(TransformOrigins_BoxCenter__uType, __interface_0));

    return type;
}

void TransformOrigins_BoxCenter___ObjInit(TransformOrigins_BoxCenter* __this)
{
}

::app::Uno::Float3 TransformOrigins_BoxCenter__GetOffset(TransformOrigins_BoxCenter* __this, ::app::Fuse::Elements::Element* elm)
{
    float depth = ::app::Uno::Vector__Dot_2(NULL, __this->Depth, ::uPtr< ::app::Fuse::Elements::Element*>(elm)->ActualSize());
    ::app::Uno::Float3 q = ::app::Uno::Float3__New_4(NULL, ::app::Uno::Float2__op_Division_1(NULL, elm->ActualSize(), 2.0f), depth / 2.0f);
    return q;
}

TransformOrigins_BoxCenter* TransformOrigins_BoxCenter__New_1(::uStatic* __this)
{
    TransformOrigins_BoxCenter* inst = (TransformOrigins_BoxCenter*)::uAllocObject(sizeof(TransformOrigins_BoxCenter), TransformOrigins_BoxCenter__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TransformOrigins_CenterOrigin__uType* TransformOrigins_CenterOrigin__typeof()
{
    static ::uStaticStrong<TransformOrigins_CenterOrigin__uType*> type;
    if (type != NULL) return type;

    type = (TransformOrigins_CenterOrigin__uType*)::uAllocClassType(sizeof(TransformOrigins_CenterOrigin__uType), "Fuse.Elements.TransformOrigins.CenterOrigin", false, 1, 0, 0);

    type->__interface_0.__fp_GetOffset = (::app::Uno::Float3(*)(void*, ::app::Fuse::Elements::Element*))TransformOrigins_CenterOrigin__GetOffset;

    type->SetInterfaces(
        ::app::Fuse::Elements::ITransformOrigin__typeof(), offsetof(TransformOrigins_CenterOrigin__uType, __interface_0));

    return type;
}

void TransformOrigins_CenterOrigin___ObjInit(TransformOrigins_CenterOrigin* __this)
{
}

::app::Uno::Float3 TransformOrigins_CenterOrigin__GetOffset(TransformOrigins_CenterOrigin* __this, ::app::Fuse::Elements::Element* elm)
{
    return ::app::Uno::Float3__New_4(NULL, ::app::Uno::Float2__op_Division_1(NULL, ::uPtr< ::app::Fuse::Elements::Element*>(elm)->ActualSize(), 2.0f), 0.0f);
}

TransformOrigins_CenterOrigin* TransformOrigins_CenterOrigin__New_1(::uStatic* __this)
{
    TransformOrigins_CenterOrigin* inst = (TransformOrigins_CenterOrigin*)::uAllocObject(sizeof(TransformOrigins_CenterOrigin), TransformOrigins_CenterOrigin__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TransformOrigins_TopLeftOrigin__uType* TransformOrigins_TopLeftOrigin__typeof()
{
    static ::uStaticStrong<TransformOrigins_TopLeftOrigin__uType*> type;
    if (type != NULL) return type;

    type = (TransformOrigins_TopLeftOrigin__uType*)::uAllocClassType(sizeof(TransformOrigins_TopLeftOrigin__uType), "Fuse.Elements.TransformOrigins.TopLeftOrigin", false, 1, 0, 0);

    type->__interface_0.__fp_GetOffset = (::app::Uno::Float3(*)(void*, ::app::Fuse::Elements::Element*))TransformOrigins_TopLeftOrigin__GetOffset;

    type->SetInterfaces(
        ::app::Fuse::Elements::ITransformOrigin__typeof(), offsetof(TransformOrigins_TopLeftOrigin__uType, __interface_0));

    return type;
}

void TransformOrigins_TopLeftOrigin___ObjInit(TransformOrigins_TopLeftOrigin* __this)
{
}

::app::Uno::Float3 TransformOrigins_TopLeftOrigin__GetOffset(TransformOrigins_TopLeftOrigin* __this, ::app::Fuse::Elements::Element* elm)
{
    return ::app::Uno::Float3__New_1(NULL, 0.0f);
}

TransformOrigins_TopLeftOrigin* TransformOrigins_TopLeftOrigin__New_1(::uStatic* __this)
{
    TransformOrigins_TopLeftOrigin* inst = (TransformOrigins_TopLeftOrigin*)::uAllocObject(sizeof(TransformOrigins_TopLeftOrigin), TransformOrigins_TopLeftOrigin__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Viewport__uType* Viewport__typeof()
{
    static ::uStaticStrong<Viewport__uType*> type;
    if (type != NULL) return type;

    type = (Viewport__uType*)::uAllocClassType(sizeof(Viewport__uType), "Fuse.Elements.Viewport", false, 7, 7, 0);

    type->SetBaseType(::app::Fuse::Elements::Element__typeof());
    type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2))Viewport__ArrangePaddingBox;
    type->__fp_get_HitTestBounds = (::app::Fuse::NodeBounds*(*)(::app::Fuse::Node*))Viewport__get_HitTestBounds;
    type->__fp_get_SubNodeCount = (int(*)(::app::Fuse::Node*))Viewport__get_SubNodeCount;
    type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))Viewport__GetContentSize;
    type->__fp_GetSubNode = (::app::Fuse::Node*(*)(::app::Fuse::Node*, int))Viewport__GetSubNode;
    type->__fp_OnDraw = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::DrawContext*))Viewport__OnDraw;
    type->__fp_OnHitTestChildren = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::HitTestContext*))Viewport__OnHitTestChildren;
    type->__interface_6.__fp_PointToWorldRay = (::app::Uno::Geometry::Ray(*)(void*, ::app::Uno::Float2))Viewport__PointToWorldRay;
    type->__interface_6.__fp_get_PointDensity = (float(*)(void*))Viewport__get_PointDensity_1;
    type->__interface_6.__fp_get_Size = (::app::Uno::Float2(*)(void*))Viewport__get_Size;
    type->__interface_6.__fp_get_ViewProjectionTransform = (::app::Uno::Float4x4(*)(void*))Viewport__get_ViewProjectionTransform;
    type->__interface_6.__fp_get_ViewProjectionTransformInverse = (::app::Uno::Float4x4(*)(void*))Viewport__get_ViewProjectionTransformInverse;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Viewport__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Viewport__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Viewport__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Viewport__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Viewport__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Viewport__uType, __interface_5),
        ::app::Fuse::IViewport__typeof(), offsetof(Viewport__uType, __interface_6));

    type->SetStrongRefs(
        "_draw_79d7a860._compiledProgram", offsetof(Viewport, _draw_79d7a860._compiledProgram),
        "_draw_79d7a860._constValues", offsetof(Viewport, _draw_79d7a860._constValues),
        "_draw_79d7a860._Program", offsetof(Viewport, _draw_79d7a860._Program),
        "_frustum", offsetof(Viewport, _frustum),
        "_frustumViewport", offsetof(Viewport, _frustumViewport),
        "_rootNode", offsetof(Viewport, _rootNode),
        "OnDraw_VertexData_79d7a860_7_2_1", offsetof(Viewport, OnDraw_VertexData_79d7a860_7_2_1));

    return type;
}

void Viewport__ArrangePaddingBox(Viewport* __this, ::app::Uno::Float2 size)
{
    ::app::Fuse::Elements::Element* elm = ::uAs< ::app::Fuse::Elements::Element*>(__this->RootNode(), ::app::Fuse::Elements::Element__typeof());

    if (elm != NULL)
    {
        ::uPtr< ::app::Fuse::Elements::Element*>(elm)->ArrangePaddingBox(size);
    }
}

int Viewport__get_CullFace(Viewport* __this)
{
    return __this->_cullFace;
}

bool Viewport__get_Flatten(Viewport* __this)
{
    return __this->_flatten;
}

::uObject* Viewport__get_Frustum(Viewport* __this)
{
    return __this->_frustum;
}

bool Viewport__get_HasCullFace(Viewport* __this)
{
    return __this->_hasCullFace;
}

::app::Fuse::NodeBounds* Viewport__get_HitTestBounds(Viewport* __this)
{
    return ::app::Fuse::NodeBounds__get_Infinite(NULL);
}

::app::Uno::Float2 Viewport__get_PixelSize(Viewport* __this)
{
    return ::app::Uno::Float2__op_Division_1(NULL, __this->ActualSize(), __this->AbsoluteZoom());
}

float Viewport__get_PointDensity_1(Viewport* __this)
{
    return ::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Node*>(__this->Parent())->Viewport()));
}

::app::Fuse::Node* Viewport__get_RootNode(Viewport* __this)
{
    return __this->_rootNode;
}

::app::Uno::Float2 Viewport__get_Size(Viewport* __this)
{
    return __this->ActualSize();
}

int Viewport__get_SubNodeCount(Viewport* __this)
{
    return (__this->RootNode() != NULL) ? 1 : 0;
}

::app::Uno::Float4x4 Viewport__get_ViewProjectionTransform(Viewport* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ViewProjectionTransform;
}

::app::Uno::Float4x4 Viewport__get_ViewProjectionTransformInverse(Viewport* __this)
{
    return ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->ViewProjectionTransformInverse;
}

::app::Uno::Float2 Viewport__GetContentSize(Viewport* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::app::Fuse::Elements::Element* elm = ::uAs< ::app::Fuse::Elements::Element*>(__this->RootNode(), ::app::Fuse::Elements::Element__typeof());

    if (elm != NULL)
    {
        return ::uPtr< ::app::Fuse::Elements::Element*>(elm)->GetContentSize(fillSize, fillSet);
    }

    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

::app::Fuse::Node* Viewport__GetSubNode(Viewport* __this, int index)
{
    return ::uAs< ::app::Fuse::Node*>(__this->RootNode(), ::app::Fuse::Node__typeof());
}

void Viewport__OnDraw(Viewport* __this, ::app::Fuse::DrawContext* dc)
{
    if ((__this->RootNode() == NULL) || (__this->Frustum() == NULL))
    {
        return;
    }

    if (__this->HasCullFace())
    {
        ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushCullFace(__this->CullFace());
    }

    if (__this->Flatten())
    {
        ::app::Uno::Float2 pxSize = __this->PixelSize();
        ::app::Uno::Graphics::Framebuffer* fb = ::app::Fuse::FramebufferPool__Lock(NULL, ::app::Uno::Int2__New_2(NULL, (int)pxSize.X, (int)pxSize.Y), 3, true);
        ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushRenderTargetViewport(fb, __this->Frustum());
        dc->Clear(::app::Uno::Float4__New_2(NULL, 0.0f, 0.0f, 0.0f, 0.0f), 1.0f);
        ::uPtr< ::app::Fuse::Node*>(__this->RootNode())->Draw(dc);
        dc->PopRenderTargetViewport();
        ::app::Uno::Float4x4 LocalTransform_79d7a860_4_8_5 = ::app::Uno::Matrix__Mul_3(NULL, __this->OnDraw_LocalTransform_79d7a860_4_8_2, ::app::Uno::Matrix__Scaling_1(NULL, __this->ActualSize().X, __this->ActualSize().Y, 1.0f), __this->OnDraw_LocalTransform_79d7a860_4_8_3, __this->OnDraw_LocalTransform_79d7a860_4_8_4);
        {
            __this->_draw_79d7a860.BlendEnabled(true);
            __this->_draw_79d7a860.BlendSrcRgb(2);
            __this->_draw_79d7a860.BlendDstRgb(3);
            __this->_draw_79d7a860.BlendDstAlpha(3);
            __this->_draw_79d7a860.DepthTestEnabled(false);
            __this->_draw_79d7a860.CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
            __this->_draw_79d7a860.Use();
            __this->_draw_79d7a860.Attrib(0, 2, __this->OnDraw_VertexData_79d7a860_7_2_1, 8, 0);
            __this->_draw_79d7a860.Uniform_2(1, ::app::Fuse::IViewport::ViewProjectionTransform(::uPtr< ::uObject*>(dc->Viewport())));
            __this->_draw_79d7a860.Uniform_2(2, ((::app::Fuse::Node*)__this != NULL) ? ::app::Uno::Matrix__Mul_10(NULL, LocalTransform_79d7a860_4_8_5, ((::app::Fuse::Node*)__this)->WorldTransform()) : LocalTransform_79d7a860_4_8_5);
            __this->_draw_79d7a860.Sampler_1(3, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(fb)->ColorBuffer());
            __this->_draw_79d7a860.DrawArrays(6);
        }

        ::app::Fuse::FramebufferPool__Release(NULL, fb);
    }
    else
    {
        __this->UpdateFrustum();
        ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushViewport((::uObject*)__this);
        ::uPtr< ::app::Fuse::Node*>(__this->RootNode())->Draw(dc);
        dc->PopViewport();
    }

    if (__this->HasCullFace())
    {
        dc->PopCullFace();
    }
}

void Viewport__OnHitTestChildren(Viewport* __this, ::app::Fuse::HitTestContext* htc)
{
    ::uPtr< ::app::Fuse::Node*>(__this->RootNode())->HitTest(htc);
}

::app::Uno::Geometry::Ray Viewport__PointToWorldRay(Viewport* __this, ::app::Uno::Float2 pointPos)
{
    ::app::Uno::Geometry::Ray r = ::app::Fuse::FrustumViewport__PointToWorldRay(NULL, (::uObject*)__this, pointPos);
    return r;
}

void Viewport__set_CullFace(Viewport* __this, int value)
{
    __this->_cullFace = value;
    __this->_hasCullFace = true;
    __this->InvalidateVisual();
}

void Viewport__set_Flatten(Viewport* __this, bool value)
{
    __this->_flatten = value;
    __this->InvalidateVisual();
}

void Viewport__set_Frustum(Viewport* __this, ::uObject* value)
{
    __this->_frustum = value;
    __this->InvalidateVisual();
    __this->UpdateFrustum();
}

void Viewport__set_RootNode(Viewport* __this, ::app::Fuse::Node* value)
{
    if (__this->_rootNode != NULL)
    {
        ::uPtr< ::app::Fuse::Node*>(__this->_rootNode)->OnRemoved((::app::Fuse::Node*)__this);
    }

    __this->_rootNode = value;

    if (__this->_rootNode != NULL)
    {
        ::uPtr< ::app::Fuse::Node*>(__this->_rootNode)->OnAdded((::app::Fuse::Node*)__this);
    }

    __this->InvalidateLayout(2);
}

void Viewport__UpdateFrustum(Viewport* __this)
{
    ::uPtr< ::app::Fuse::FrustumViewport*>(__this->_frustumViewport)->Update((::uObject*)__this, __this->Frustum());
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Visibility__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Elements.Visibility", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Visible", 0LL,
        "Collapsed", 1LL,
        "Hidden", 2LL);

    return type;
}

}}}
