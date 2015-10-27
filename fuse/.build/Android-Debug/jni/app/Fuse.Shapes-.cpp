#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.PathGeometryExtensions.h>
#include <app/Fuse.Drawing.PathGeometryRenderer.h>
#include <app/Fuse.Drawing.Primitives.Circle.h>
#include <app/Fuse.Drawing.Primitives.Rectangle.h>
#include <app/Fuse.Drawing.Primitives.Wedge.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Elements.Element.h>
#include <app/Fuse.HitTestContext.h>
#include <app/Fuse.Internal.SizingContainer.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.NodeBounds.h>
#include <app/Fuse.Shapes.Circle.h>
#include <app/Fuse.Shapes.Ellipse.h>
#include <app/Fuse.Shapes.FitMode.h>
#include <app/Fuse.Shapes.Path.h>
#include <app/Fuse.Shapes.PathScaleMode.h>
#include <app/Fuse.Shapes.PathShape.h>
#include <app/Fuse.Shapes.Rectangle.h>
#include <app/Fuse.Shapes.RegularPolygon.h>
#include <app/Fuse.Shapes.Shape.h>
#include <app/Fuse.Shapes.Star.h>
#include <app/Fuse.SizeFlags.h>
#include <app/Fuse.StyleProperty__Fuse_Shapes_Rectangle__float4.h>
#include <app/Fuse.StyleProperty__Fuse_Shapes_Shape__float.h>
#include <app/Fuse.StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush.h>
#include <app/Fuse.StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Drawing_Stroke.h>
#include <app/Uno.Action__Fuse_Shapes_Rectangle.h>
#include <app/Uno.Action__Fuse_Shapes_Shape.h>
#include <app/Uno.Action__Fuse_Shapes_Shape__float.h>
#include <app/Uno.Action__Fuse_Shapes_Shape__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Shapes_Shape__Fuse_Drawing_Stroke.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.ObservableList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ObservableList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Func__Fuse_Shapes_Shape__float.h>
#include <app/Uno.Func__Fuse_Shapes_Shape__Fuse_Drawing_Brush.h>
#include <app/Uno.Func__Fuse_Shapes_Shape__Fuse_Drawing_Stroke.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Matrix.h>
#include <app/Uno.Object.h>
#include <app/Uno.Rect.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Shapes {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Shapes/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Circle__uType* Circle__typeof()
{
    static ::uStaticStrong<Circle__uType*> type;
    if (type != NULL) return type;

    type = (Circle__uType*)::uAllocClassType(sizeof(Circle__uType), "Fuse.Shapes.Circle", false, 6, 0, 0);

    type->SetBaseType(::app::Fuse::Shapes::Shape__typeof());
    type->__fp_DrawFill = (void(*)(::app::Fuse::Shapes::Shape*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Brush*))Circle__DrawFill;
    type->__fp_DrawStroke = (void(*)(::app::Fuse::Shapes::Shape*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Stroke*))Circle__DrawStroke;
    type->__fp_OnHitTestLocalVisual = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::HitTestContext*))Circle__OnHitTestLocalVisual;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Circle__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Circle__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Circle__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Circle__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Circle__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Circle__uType, __interface_5));

    return type;
}

bool Circle__AngleInRange(::uStatic* __this, float angle, float start, float end)
{
    angle = ::app::Uno::Math__Mod_4(NULL, angle, 6.28318548f);
    float pStartAngle = ::app::Uno::Math__Mod_4(NULL, start, 6.28318548f);
    float pEndAngle = ::app::Uno::Math__Mod_4(NULL, end, 6.28318548f);

    if (pStartAngle > pEndAngle)
    {
        return (angle > pStartAngle) || (angle < pEndAngle);
    }
    else
    {
        return (angle > pStartAngle) && (angle < pEndAngle);
    }
}

void Circle__DrawFill(Circle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Brush* fill)
{
    float startAngle = __this->_startAngle;
    float endAngle = __this->EffectiveEndAngle();

    if (__this->UseAngle())
    {
        ::uPtr< ::app::Fuse::Drawing::Primitives::Wedge*>(::app::Fuse::Drawing::Primitives::Wedge__Singleton)->Fill(dc, (::app::Fuse::Elements::Element*)__this, __this->Radius(), fill, __this->Center(), startAngle, endAngle, __this->Smoothness());
    }
    else
    {
        ::uPtr< ::app::Fuse::Drawing::Primitives::Circle*>(::app::Fuse::Drawing::Primitives::Circle__Singleton)->Fill(dc, (::app::Fuse::Elements::Element*)__this, __this->Radius(), fill, __this->Center(), __this->Smoothness());
    }
}

void Circle__DrawStroke(Circle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Stroke* stroke)
{
    float startAngle = __this->_startAngle;
    float endAngle = __this->EffectiveEndAngle();

    if (__this->UseAngle())
    {
        ::uPtr< ::app::Fuse::Drawing::Primitives::Wedge*>(::app::Fuse::Drawing::Primitives::Wedge__Singleton)->Stroke(dc, (::app::Fuse::Elements::Element*)__this, __this->Radius(), stroke, __this->Center(), startAngle, endAngle, __this->Smoothness());
    }
    else
    {
        ::uPtr< ::app::Fuse::Drawing::Primitives::Circle*>(::app::Fuse::Drawing::Primitives::Circle__Singleton)->Stroke(dc, (::app::Fuse::Elements::Element*)__this, __this->Radius(), stroke, __this->Center(), __this->Smoothness());
    }
}

::app::Uno::Float2 Circle__get_Center(Circle* __this)
{
    return ::app::Uno::Float2__op_Division_1(NULL, __this->ActualSize(), 2.0f);
}

float Circle__get_EffectiveEndAngle(Circle* __this)
{
    return __this->_hasLengthAngle ? (__this->_startAngle + __this->_lengthAngle) : __this->_endAngle;
}

float Circle__get_Radius(Circle* __this)
{
    return ::app::Uno::Math__Min_11(NULL, __this->ActualSize().X, __this->ActualSize().Y) * 0.5f;
}

float Circle__get_StartAngle(Circle* __this)
{
    return __this->_startAngle;
}

bool Circle__get_UseAngle(Circle* __this)
{
    if (!__this->_hasAngle)
    {
        return false;
    }

    if (__this->_hasLengthAngle && (__this->_lengthAngle >= 6.28318548f))
    {
        return false;
    }

    return true;
}

void Circle__OnHitTestLocalVisual(Circle* __this, ::app::Fuse::HitTestContext* htc)
{
    if (!__this->HasFills() || (::app::Uno::Vector__Distance_2(NULL, ::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint(), __this->Center()) > __this->Radius()))
    {
        return;
    }

    if (__this->UseAngle())
    {
        ::app::Uno::Float2 off = ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint(), __this->Center());
        float localAngle = ::app::Uno::Math__Atan2_1(NULL, off.Y, off.X) + 1.57079637f;

        if (!Circle__AngleInRange(NULL, localAngle, __this->StartAngle(), __this->EffectiveEndAngle()))
        {
            return;
        }
    }

    ::uPtr< ::app::Fuse::HitTestContext*>(htc)->Hit_1((::app::Fuse::Node*)__this);
}

void Circle__set_StartAngle(Circle* __this, float value)
{
    __this->_startAngle = value;
    __this->_hasAngle = true;
    __this->InvalidateVisual();
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Shapes/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Ellipse__uType* Ellipse__typeof()
{
    static ::uStaticStrong<Ellipse__uType*> type;
    if (type != NULL) return type;

    type = (Ellipse__uType*)::uAllocClassType(sizeof(Ellipse__uType), "Fuse.Shapes.Ellipse", false, 6, 0, 0);

    type->SetBaseType(::app::Fuse::Shapes::PathShape__typeof());
    type->__fp_UpdatePath = (void(*)(::app::Fuse::Shapes::PathShape*))Ellipse__UpdatePath;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Ellipse__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Ellipse__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Ellipse__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Ellipse__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Ellipse__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Ellipse__uType, __interface_5));

    return type;
}

void Ellipse__UpdatePath(Ellipse* __this)
{
    ::app::Uno::Float2 radius = ::app::Uno::Float2__op_Multiply_2(NULL, __this->ActualSize(), 0.5f);

    if (::app::Uno::Float2__op_Equality(NULL, __this->_cachedRadius, radius))
    {
        return;
    }

    __this->_cachedRadius = radius;
    __this->InvalidateRenderBounds();
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Geometry(::app::Fuse::Drawing::PathGeometryExtensions__Ellipse(NULL, ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::app::Fuse::Drawing::PathGeometry__New_1(NULL))->MoveTo_1(radius), radius));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Shapes/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* FitMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Shapes.FitMode", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "GeometryMaximum", 0LL,
        "StrokeMaximum", 1LL,
        "ShrinkToGeometry", 2LL,
        "ShrinkToStroke", 3LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Shapes/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Path__uType* Path__typeof()
{
    static ::uStaticStrong<Path__uType*> type;
    if (type != NULL) return type;

    type = (Path__uType*)::uAllocClassType(sizeof(Path__uType), "Fuse.Shapes.Path", false, 6, 1, 0);

    type->SetBaseType(::app::Fuse::Shapes::PathShape__typeof());
    type->__fp_ArrangePaddingBox = (void(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2))Path__ArrangePaddingBox;
    type->__fp_CalcRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Elements::Element*))Path__CalcRenderBounds;
    type->__fp_GetContentSize = (::app::Uno::Float2(*)(::app::Fuse::Elements::Element*, ::app::Uno::Float2, int))Path__GetContentSize;
    type->__fp_OnDraw = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::DrawContext*))Path__OnDraw;
    type->__fp_UpdatePath = (void(*)(::app::Fuse::Shapes::PathShape*))Path__UpdatePath;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Path__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Path__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Path__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Path__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Path__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Path__uType, __interface_5));

    type->SetStrongRefs(
        "sizing", offsetof(Path, sizing));

    return type;
}

::app::Uno::Float4x4 Path__AlignMatrix(Path* __this, ::app::Uno::Float4x4 b)
{
    ::app::Uno::Float4x4 t = ::app::Uno::Matrix__Translation_1(NULL, ::app::Uno::Float3__New_4(NULL, __this->_origin, 0.0f));
    ::app::Uno::Float4x4 r0 = ::app::Uno::Matrix__Mul_10(NULL, t, b);
    ::app::Uno::Float4x4 s = ::app::Uno::Matrix__Scaling_2(NULL, ::app::Uno::Float3__New_4(NULL, __this->_postScale, 1.0f));
    ::app::Uno::Float4x4 r1 = ::app::Uno::Matrix__Mul_10(NULL, s, r0);
    return r1;
}

void Path__ArrangePaddingBox(Path* __this, ::app::Uno::Float2 size)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->padding = __this->Padding();
    ::app::Uno::Float2 contentDesiredSize = __this->GetNaturalContentSize();
    ::app::Uno::Float2 scale = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->CalcScale_1(size, contentDesiredSize);
    __this->_origin = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->CalcOrigin(size, ::app::Uno::Float2__op_Multiply_1(NULL, contentDesiredSize, scale));

    if (__this->_scaleMode == 0)
    {
        ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->PreScale(scale);
    }
    else
    {
        __this->_postScale = scale;
    }

    switch (__this->_fitMode)
    {
        case 0:
        {
            break;
        }
        case 1:
        {
            __this->_origin = ::app::Uno::Float2__op_Addition_2(NULL, __this->_origin, (ind_123 = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->StrokePadding(), ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y)));
            break;
        }
        case 2:
        {
            __this->_origin = ::app::Uno::Float2__op_Subtraction_2(NULL, __this->_origin, ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Minimum());
            break;
        }
        case 3:
        {
            __this->_origin = ::app::Uno::Float2__op_Subtraction_2(NULL, __this->_origin, ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Minimum());
            __this->_origin = ::app::Uno::Float2__op_Addition_2(NULL, __this->_origin, (ind_124 = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->StrokePadding(), ::app::Uno::Float2__New_2(NULL, ind_124.X, ind_124.Y)));
            break;
        }
    }
}

::app::Uno::Rect Path__CalcRenderBounds(Path* __this)
{
    ::app::Uno::Float4x4 m = __this->AlignMatrix(::app::Uno::Float4x4__get_Identity(NULL));
    ::app::Uno::Rect b = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Bounds();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Vector__Transform_2(NULL, b.Minimum(), m);
    ::app::Uno::Float2 tl = ::app::Uno::Float2__New_2(NULL, ind_125.X, ind_125.Y);
    ::app::Uno::Float4 ind_126 = ::app::Uno::Vector__Transform_2(NULL, b.Maximum(), m);
    ::app::Uno::Float2 br = ::app::Uno::Float2__New_2(NULL, ind_126.X, ind_126.Y);
    return ::app::Uno::Rect__New_2(NULL, tl, ::app::Uno::Float2__op_Subtraction_2(NULL, br, tl));
}

::app::Uno::Float2 Path__GetContentSize(Path* __this, ::app::Uno::Float2 fillSize, int fillSet)
{
    ::app::Uno::Float2 natural = __this->GetNaturalContentSize();
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->padding = ::app::Uno::Float4__New_3(NULL, 0.0f);
    ::app::Uno::Float2 r = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(__this->sizing)->ExpandFillSize(natural, fillSize, fillSet);
    return r;
}

::app::Uno::Float2 Path__GetNaturalContentSize(Path* __this)
{
    ::app::Uno::Float2 hi = ::app::Uno::Float2__New_1(NULL, 0.0f);
    ::app::Uno::Float2 lo = ::app::Uno::Float2__New_1(NULL, 0.0f);

    switch (__this->_fitMode)
    {
        case 0:
        {
            lo = ::app::Uno::Float2__New_1(NULL, 0.0f);
            hi = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Maximum();
            break;
        }
        case 1:
        {
            hi = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Maximum();
            ::app::Uno::Float4 s = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->StrokePadding();
            hi.X = hi.X + s.Item(2);
            hi.Y = hi.Y + s.Item(3);
            lo.X = lo.X - s.Item(0);
            lo.Y = lo.Y - s.Item(1);
            break;
        }
        case 2:
        {
            lo = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Minimum();
            hi = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Maximum();
            break;
        }
        case 3:
        {
            {
                lo = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Minimum();
                hi = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->InnerBounds().Maximum();
                ::app::Uno::Float4 s = ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->StrokePadding();
                lo.X = lo.X - s.Item(0);
                lo.Y = lo.Y - s.Item(1);
                hi.X = hi.X + s.Item(2);
                hi.Y = hi.Y + s.Item(3);
                break;
            }
        }
    }

    ::app::Uno::Float2 natural = ::app::Uno::Float2__op_Subtraction_2(NULL, hi, lo);
    return natural;
}

void Path__OnDraw(Path* __this, ::app::Fuse::DrawContext* dc)
{
    ::app::Uno::Float4x4 r = __this->AlignMatrix(::uPtr< ::app::Fuse::DrawContext*>(dc)->GetLocalToClipTransform((::app::Fuse::Node*)__this));
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Draw(dc, r, __this->ActualSize());
}

void Path__UpdatePath(Path* __this)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Shapes/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* PathScaleMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Shapes.PathScaleMode", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Pre", 0LL,
        "Post", 1LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Shapes/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PathShape__uType* PathShape__typeof()
{
    static ::uStaticStrong<PathShape__uType*> type;
    if (type != NULL) return type;

    type = (PathShape__uType*)::uAllocClassType(sizeof(PathShape__uType), "Fuse.Shapes.PathShape", false, 6, 1, 0);

    type->SetBaseType(::app::Fuse::Elements::Element__typeof());
    type->__fp_CalcRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Elements::Element*))PathShape__CalcRenderBounds;
    type->__fp_get_HitTestLocalVisualBounds = (::app::Fuse::NodeBounds*(*)(::app::Fuse::Elements::Element*))PathShape__get_HitTestLocalVisualBounds;
    type->__fp_OnDraw = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::DrawContext*))PathShape__OnDraw;
    type->__fp_OnHitTestLocalVisual = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::HitTestContext*))PathShape__OnHitTestLocalVisual;
    type->__fp_OnRooted = (void(*)(::app::Fuse::Node*))PathShape__OnRooted;
    type->__fp_SoftDispose = (void(*)(::app::Fuse::Node*))PathShape__SoftDispose;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(PathShape__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(PathShape__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(PathShape__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(PathShape__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(PathShape__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(PathShape__uType, __interface_5));

    type->SetStrongRefs(
        "_renderer", offsetof(PathShape, _renderer));

    return type;
}

::app::Uno::Rect PathShape__CalcRenderBounds(PathShape* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Bounds();
}

::app::Fuse::NodeBounds* PathShape__get_HitTestLocalVisualBounds(PathShape* __this)
{
    return ::app::Fuse::NodeBounds__Rect_1(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());
}

::app::Fuse::Drawing::PathGeometryRenderer* PathShape__get_Renderer(PathShape* __this)
{
    __this->UpdatePath();
    return __this->_renderer;
}

::uObject* PathShape__GetHitPart(PathShape* __this, ::app::Uno::Float2 localCoords)
{
    return ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->GetHitPart(localCoords);
}

void PathShape__OnDraw(PathShape* __this, ::app::Fuse::DrawContext* dc)
{
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Draw(dc, ::uPtr< ::app::Fuse::DrawContext*>(dc)->GetLocalToClipTransform((::app::Fuse::Node*)__this), __this->ActualSize());
}

void PathShape__OnHitTestLocalVisual(PathShape* __this, ::app::Fuse::HitTestContext* htc)
{
    ::uObject* hitPart = __this->GetHitPart(::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint());

    if (hitPart != NULL)
    {
        htc->Hit_1((::app::Fuse::Node*)__this);
    }

    ::app::Fuse::Elements::Element__OnHitTestLocalVisual(__this, htc);
}

void PathShape__OnRooted(PathShape* __this)
{
    ::app::Fuse::Elements::Element__OnRooted(__this);
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->_renderer)->Density(::app::Fuse::IViewport::PointDensity(::uPtr< ::uObject*>(__this->Viewport())));
}

void PathShape__SoftDispose(PathShape* __this)
{
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->_renderer)->SoftDispose();
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Shapes/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Shapes_Rectangle__float4*> Rectangle__CornerRadiusProperty;

Rectangle__uType* Rectangle__typeof()
{
    static ::uStaticStrong<Rectangle__uType*> type;
    if (type != NULL) return type;

    type = (Rectangle__uType*)::uAllocClassType(sizeof(Rectangle__uType), "Fuse.Shapes.Rectangle", false, 6, 0, 0);

    type->SetBaseType(::app::Fuse::Shapes::Shape__typeof());
    type->__fp_DrawFill = (void(*)(::app::Fuse::Shapes::Shape*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Brush*))Rectangle__DrawFill;
    type->__fp_DrawStroke = (void(*)(::app::Fuse::Shapes::Shape*, ::app::Fuse::DrawContext*, ::app::Fuse::Drawing::Stroke*))Rectangle__DrawStroke;
    type->__fp_OnHitTestLocalVisual = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::HitTestContext*))Rectangle__OnHitTestLocalVisual;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Rectangle__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Rectangle__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Rectangle__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Rectangle__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Rectangle__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Rectangle__uType, __interface_5));

    return type;
}

void Rectangle___TypeInit_3(::uStatic* __this)
{
    Rectangle__CornerRadiusProperty = ::app::Fuse::StyleProperty__Fuse_Shapes_Rectangle__float4__New_1(NULL, ::app::Uno::Float4__New_3(NULL, 0.0f), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Shapes_Rectangle__typeof(), (const void*)Rectangle__OnCornerRadiusChanged));
}

void Rectangle__DrawFill(Rectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Brush* fill)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();
    ::app::Uno::Float4 cr = __this->CornerRadius();
    ::app::Uno::Float2 sz = ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, __this->ActualSize(), (ind_123 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_123.X, ind_123.Y))), (ind_124 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_124.Z, ind_124.W)));
    ::uPtr< ::app::Fuse::Drawing::Primitives::Rectangle*>(::app::Fuse::Drawing::Primitives::Rectangle__Singleton)->Fill(dc, (::app::Fuse::Node*)__this, sz, cr, fill, (ind_125 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_125.X, ind_125.Y)), __this->Smoothness());
}

void Rectangle__DrawStroke(Rectangle* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::Stroke* stroke)
{
    ::app::Uno::Float4 ind_126 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_127 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_128 = ::app::Uno::Float4();
    ::app::Uno::Float4 cr = __this->CornerRadius();
    ::app::Uno::Float2 sz = ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, __this->ActualSize(), (ind_126 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_126.X, ind_126.Y))), (ind_127 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_127.Z, ind_127.W)));
    ::uPtr< ::app::Fuse::Drawing::Primitives::Rectangle*>(::app::Fuse::Drawing::Primitives::Rectangle__Singleton)->Stroke(dc, (::app::Fuse::Node*)__this, sz, cr, stroke, (ind_128 = __this->Padding(), ::app::Uno::Float2__New_2(NULL, ind_128.X, ind_128.Y)), __this->Smoothness());
}

::app::Uno::Float4 Rectangle__get_CornerRadius(Rectangle* __this)
{
    return ::uPtr< ::app::Fuse::StyleProperty__Fuse_Shapes_Rectangle__float4*>(Rectangle__CornerRadiusProperty)->Get(__this);
}

void Rectangle__OnCornerRadiusChanged(::uStatic* __this, Rectangle* r)
{
    ::uPtr< Rectangle*>(r)->InvalidateVisual();
}

void Rectangle__OnHitTestLocalVisual(Rectangle* __this, ::app::Fuse::HitTestContext* htc)
{
    ::app::Uno::Float2 lp = ::uPtr< ::app::Fuse::HitTestContext*>(htc)->LocalPoint();

    if (!__this->HasFills() || !__this->IsPointInside(lp))
    {
        return;
    }

    ::app::Uno::Float4 cr = __this->CornerRadius();

    if ((lp.X < cr.Item(0)) && (lp.Y < cr.Item(0)))
    {
        if (::app::Uno::Vector__Distance_2(NULL, lp, ::app::Uno::Float2__New_1(NULL, cr.Item(0))) > cr.Item(0))
        {
            return;
        }
    }
    else if ((lp.X > (__this->ActualSize().X - cr.Item(1))) && (lp.Y < cr.Item(1)))
    {
        if (::app::Uno::Vector__Distance_2(NULL, lp, ::app::Uno::Float2__New_2(NULL, __this->ActualSize().X - cr.Item(1), cr.Item(1))) > cr.Item(1))
        {
            return;
        }
    }
    else if ((lp.X < cr.Item(3)) && (lp.Y > (__this->ActualSize().Y - cr.Item(3))))
    {
        if (::app::Uno::Vector__Distance_2(NULL, lp, ::app::Uno::Float2__New_2(NULL, cr.Item(3), __this->ActualSize().Y - cr.Item(3))) > cr.Item(3))
        {
            return;
        }
    }
    else if ((lp.X > (__this->ActualSize().X - cr.Item(2))) && (lp.Y > (__this->ActualSize().Y - cr.Item(2))))
    {
        if (::app::Uno::Vector__Distance_2(NULL, lp, ::app::Uno::Float2__New_2(NULL, __this->ActualSize().X - cr.Item(2), __this->ActualSize().Y - cr.Item(2))) > cr.Item(2))
        {
            return;
        }
    }

    htc->Hit_1((::app::Fuse::Node*)__this);
}

void Rectangle__set_CornerRadius(Rectangle* __this, ::app::Uno::Float4 value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Shapes_Rectangle__float4*>(Rectangle__CornerRadiusProperty)->Set(__this, value);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Shapes/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RegularPolygon__uType* RegularPolygon__typeof()
{
    static ::uStaticStrong<RegularPolygon__uType*> type;
    if (type != NULL) return type;

    type = (RegularPolygon__uType*)::uAllocClassType(sizeof(RegularPolygon__uType), "Fuse.Shapes.RegularPolygon", false, 6, 0, 0);

    type->SetBaseType(::app::Fuse::Shapes::PathShape__typeof());
    type->__fp_UpdatePath = (void(*)(::app::Fuse::Shapes::PathShape*))RegularPolygon__UpdatePath;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(RegularPolygon__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(RegularPolygon__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(RegularPolygon__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(RegularPolygon__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(RegularPolygon__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(RegularPolygon__uType, __interface_5));

    return type;
}

::app::Uno::Float2 RegularPolygon__get_Offset_1(RegularPolygon* __this)
{
    return (__this->ActualSize().X > __this->ActualSize().Y) ? ::app::Uno::Float2__New_2(NULL, (__this->ActualSize().X * 0.5f) - (__this->ActualSize().Y * 0.5f), 0.0f) : ::app::Uno::Float2__New_2(NULL, 0.0f, (__this->ActualSize().Y * 0.5f) - (__this->ActualSize().X * 0.5f));
}

float RegularPolygon__get_Radius(RegularPolygon* __this)
{
    return ::app::Uno::Math__Min_11(NULL, __this->ActualSize().X, __this->ActualSize().Y) * 0.5f;
}

void RegularPolygon__UpdatePath(RegularPolygon* __this)
{
    if (__this->_sides < 3)
    {
        return;
    }

    if ((__this->_cachedSides == __this->_sides) && (__this->_cachedRadius == __this->Radius()))
    {
        return;
    }

    __this->_cachedSides = __this->_sides;
    __this->_cachedRadius = __this->Radius();
    __this->InvalidateRenderBounds();
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Geometry(::app::Fuse::Drawing::PathGeometryExtensions__RegularPolygon(NULL, ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::app::Fuse::Drawing::PathGeometry__New_1(NULL))->MoveTo_1(::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__New_1(NULL, __this->Radius()), __this->Offset_1())), __this->_sides, __this->Radius()));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Shapes/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush*> Shape__FillProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Shapes_Shape__float*> Shape__SmoothnessProperty;
::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke*> Shape__StrokeProperty;

Shape__uType* Shape__typeof()
{
    static ::uStaticStrong<Shape__uType*> type;
    if (type != NULL) return type;

    type = (Shape__uType*)::uAllocClassType(sizeof(Shape__uType), "Fuse.Shapes.Shape", false, 6, 4, 0);

    type->SetBaseType(::app::Fuse::Elements::Element__typeof());
    type->__fp_CalcRenderBounds = (::app::Uno::Rect(*)(::app::Fuse::Elements::Element*))Shape__CalcRenderBounds;
    type->__fp_get_HitTestLocalVisualBounds = (::app::Fuse::NodeBounds*(*)(::app::Fuse::Elements::Element*))Shape__get_HitTestLocalVisualBounds;
    type->__fp_OnDraw = (void(*)(::app::Fuse::Elements::Element*, ::app::Fuse::DrawContext*))Shape__OnDraw;
    type->__fp_OnResetStyle = (void(*)(::app::Fuse::Node*))Shape__OnResetStyle;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Shape__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Shape__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Shape__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Shape__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Shape__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Shape__uType, __interface_5));

    type->SetStrongRefs(
        "_fills", offsetof(Shape, _fills),
        "_strokes", offsetof(Shape, _strokes),
        "_styleFills", offsetof(Shape, _styleFills),
        "_styleStrokes", offsetof(Shape, _styleStrokes));

    return type;
}

void Shape___TypeInit_2(::uStatic* __this)
{
    Shape__FillProperty = ::app::Fuse::StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Brush__New_2(NULL, NULL, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Shapes_Shape__Fuse_Drawing_Brush__typeof(), (const void*)Shape__SetFill), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Shapes_Shape__Fuse_Drawing_Brush__typeof(), (const void*)Shape__GetFill));
    Shape__StrokeProperty = ::app::Fuse::StyleProperty__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__New_2(NULL, NULL, NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__typeof(), (const void*)Shape__SetStroke), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Shapes_Shape__Fuse_Drawing_Stroke__typeof(), (const void*)Shape__GetStroke));
    Shape__SmoothnessProperty = ::app::Fuse::StyleProperty__Fuse_Shapes_Shape__float__New_2(NULL, 1.0f, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Shapes_Shape__typeof(), (const void*)Shape__OnSmoothnessChanged), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Shapes_Shape__float__typeof(), (const void*)Shape__SetSmoothness), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Shapes_Shape__float__typeof(), (const void*)Shape__GetSmoothness));
}

::app::Uno::Rect Shape__CalcRenderBounds(Shape* __this)
{
    ::app::Uno::Rect r = ::app::Uno::Rect__New_2(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());

    if (__this->HasStrokes())
    {
        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke::GetEnumerator(::uPtr< ::uObject*>(__this->Strokes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Fuse::Drawing::Stroke* stroke = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke::Current(::uPtr< ::uObject*>(enum_123));
            float b = ::uPtr< ::app::Fuse::Drawing::Stroke*>(stroke)->Offset() + ::uPtr< ::app::Fuse::Drawing::Stroke*>(stroke)->Width();

            if (b > 0.0f)
            {
                r = ::app::Uno::Rect__Inflate_1(NULL, r, b);
            }
        }
    }

    r = ::app::Uno::Rect__Inflate_1(NULL, r, __this->Smoothness() - 1.0f);
    return r;
}

::uObject* Shape__get_Fills(Shape* __this)
{
    if (__this->_fills == NULL)
    {
        __this->_fills = ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Brush__typeof(), (const void*)Shape__OnFillAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Brush__typeof(), (const void*)Shape__OnFillRemoved, __this));
    }

    return (::uObject*)__this->_fills;
}

bool Shape__get_HasFills(Shape* __this)
{
    return (__this->_fills != NULL) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Count() > 0);
}

bool Shape__get_HasStrokes(Shape* __this)
{
    return (__this->_strokes != NULL) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(__this->_strokes)->Count() > 0);
}

::app::Fuse::NodeBounds* Shape__get_HitTestLocalVisualBounds(Shape* __this)
{
    return ::app::Fuse::NodeBounds__Rect_1(NULL, ::app::Uno::Float2__New_1(NULL, 0.0f), __this->ActualSize());
}

float Shape__get_Smoothness(Shape* __this)
{
    return __this->_smoothness;
}

::uObject* Shape__get_Strokes(Shape* __this)
{
    if (__this->_strokes == NULL)
    {
        __this->_strokes = ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)Shape__OnStrokeAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)Shape__OnStrokeRemoved, __this));
    }

    return (::uObject*)__this->_strokes;
}

::app::Fuse::Drawing::Brush* Shape__GetFill(::uStatic* __this, Shape* s)
{
    if ((::uPtr< Shape*>(s)->_fills == NULL) || (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(::uPtr< Shape*>(s)->_fills)->Count() == 0))
    {
        return NULL;
    }
    else
    {
        return ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(::uPtr< Shape*>(s)->_fills)->Item(0);
    }
}

float Shape__GetSmoothness(::uStatic* __this, Shape* s)
{
    return ::uPtr< Shape*>(s)->_smoothness;
}

::app::Fuse::Drawing::Stroke* Shape__GetStroke(::uStatic* __this, Shape* s)
{
    if ((::uPtr< Shape*>(s)->_strokes == NULL) || (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(::uPtr< Shape*>(s)->_strokes)->Count() == 0))
    {
        return NULL;
    }

    return ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(::uPtr< Shape*>(s)->_strokes)->Item(0);
}

void Shape__OnDraw(Shape* __this, ::app::Fuse::DrawContext* dc)
{
    if (__this->HasFills())
    {
        for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Brush::GetEnumerator(::uPtr< ::uObject*>(__this->Fills())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
        {
            ::app::Fuse::Drawing::Brush* fill = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Brush::Current(::uPtr< ::uObject*>(enum_124));
            __this->DrawFill(dc, fill);
        }
    }

    if (__this->HasStrokes())
    {
        for (::uObject* enum_125 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke::GetEnumerator(::uPtr< ::uObject*>(__this->Strokes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
        {
            ::app::Fuse::Drawing::Stroke* stroke = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke::Current(::uPtr< ::uObject*>(enum_125));
            __this->DrawStroke(dc, stroke);
        }
    }
}

void Shape__OnFillAdded(Shape* __this, ::app::Fuse::Drawing::Brush* f)
{
    if (::uIs(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))->add_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Shape__OnShadingChanged, __this));
    }

    __this->OnShadingChanged();
}

void Shape__OnFillRemoved(Shape* __this, ::app::Fuse::Drawing::Brush* f)
{
    if (::uIs(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))->remove_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Shape__OnShadingChanged, __this));
    }

    __this->OnShadingChanged();
}

void Shape__OnResetStyle(Shape* __this)
{
    if (__this->_styleFills != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->_styleFills)->Count(); i++)
        {
            ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Remove(::uPtr< ::uObject*>(__this->Fills()), ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Brush*>(__this->_styleFills)->Item(i));
        }

        __this->_styleFills = NULL;
    }

    if (__this->_styleStrokes != NULL)
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->_styleStrokes)->Count(); i++)
        {
            ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Remove(::uPtr< ::uObject*>(__this->Strokes()), ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Stroke*>(__this->_styleStrokes)->Item(i));
        }

        __this->_styleStrokes = NULL;
    }

    ::app::Fuse::Elements::Element__OnResetStyle(__this);
}

void Shape__OnShadingChanged(Shape* __this)
{
    __this->InvalidateVisual();
}

void Shape__OnSmoothnessChanged(::uStatic* __this, Shape* s)
{
    ::uPtr< Shape*>(s)->InvalidateVisual();
    s->InvalidateRenderBounds();
}

void Shape__OnStrokeAdded(Shape* __this, ::app::Fuse::Drawing::Stroke* s)
{
    ::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->add_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Shape__OnShadingChanged, __this));
    s->add_StrokeChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)Shape__OnStrokeChanged, __this));
    __this->OnStrokeChanged(s);
}

void Shape__OnStrokeChanged(Shape* __this, ::app::Fuse::Drawing::Stroke* s)
{
    __this->InvalidateVisual();
}

void Shape__OnStrokeRemoved(Shape* __this, ::app::Fuse::Drawing::Stroke* s)
{
    ::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->remove_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Shape__OnShadingChanged, __this));
    s->remove_StrokeChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)Shape__OnStrokeChanged, __this));
    __this->OnStrokeChanged(s);
}

void Shape__set_Smoothness(Shape* __this, float value)
{
    ::uPtr< ::app::Fuse::StyleProperty__Fuse_Shapes_Shape__float*>(Shape__SmoothnessProperty)->Set(__this, value);
}

void Shape__SetFill(::uStatic* __this, Shape* s, ::app::Fuse::Drawing::Brush* value)
{
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Clear(::uPtr< ::uObject*>(::uPtr< Shape*>(s)->Fills()));
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(s->Fills()), value);
}

void Shape__SetSmoothness(::uStatic* __this, Shape* s, float value)
{
    ::uPtr< Shape*>(s)->_smoothness = value;
}

void Shape__SetStroke(::uStatic* __this, Shape* s, ::app::Fuse::Drawing::Stroke* value)
{
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Clear(::uPtr< ::uObject*>(::uPtr< Shape*>(s)->Strokes()));
    ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Add(::uPtr< ::uObject*>(s->Strokes()), value);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Shapes/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Star__uType* Star__typeof()
{
    static ::uStaticStrong<Star__uType*> type;
    if (type != NULL) return type;

    type = (Star__uType*)::uAllocClassType(sizeof(Star__uType), "Fuse.Shapes.Star", false, 6, 0, 0);

    type->SetBaseType(::app::Fuse::Shapes::PathShape__typeof());
    type->__fp_UpdatePath = (void(*)(::app::Fuse::Shapes::PathShape*))Star__UpdatePath;

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(Star__uType, __interface_0),
        ::app::Fuse::Triggers::Actions::IShow__typeof(), offsetof(Star__uType, __interface_1),
        ::app::Fuse::Triggers::Actions::IHide__typeof(), offsetof(Star__uType, __interface_2),
        ::app::Fuse::Triggers::Actions::ICollapse__typeof(), offsetof(Star__uType, __interface_3),
        ::app::Fuse::IActualPlacement__typeof(), offsetof(Star__uType, __interface_4),
        ::app::Fuse::Animations::IResize__typeof(), offsetof(Star__uType, __interface_5));

    return type;
}

::app::Uno::Float2 Star__get__offset(Star* __this)
{
    return (__this->ActualSize().X > __this->ActualSize().Y) ? ::app::Uno::Float2__New_2(NULL, (__this->ActualSize().X * 0.5f) - (__this->ActualSize().Y * 0.5f), 0.0f) : ::app::Uno::Float2__New_2(NULL, 0.0f, (__this->ActualSize().Y * 0.5f) - (__this->ActualSize().X * 0.5f));
}

float Star__get_Radius(Star* __this)
{
    return ::app::Uno::Math__Min_11(NULL, __this->ActualSize().X, __this->ActualSize().Y) * 0.5f;
}

float Star__get_Ratio(Star* __this)
{
    return __this->_ratio;
}

float Star__get_RotationDegrees(Star* __this)
{
    return __this->_degrees;
}

float Star__get_RotationRadians(Star* __this)
{
    return (__this->_degrees / 180.0f) * 3.14159274f;
}

float Star__get_RoundRatio(Star* __this)
{
    return __this->_roundRatio;
}

float Star__get_SpokeRadius(Star* __this)
{
    return __this->Radius() * __this->Ratio();
}

void Star__set_Ratio(Star* __this, float value)
{
    if (value == __this->_ratio)
    {
        return;
    }

    __this->_ratio = value;
    __this->InvalidateVisual();
}

void Star__set_RotationDegrees(Star* __this, float value)
{
    if (value == __this->_degrees)
    {
        return;
    }

    __this->_degrees = value;
    __this->InvalidateVisual();
}

void Star__set_RoundRatio(Star* __this, float value)
{
    if (value == __this->_roundRatio)
    {
        return;
    }

    __this->_roundRatio = value;
    __this->InvalidateVisual();
}

void Star__UpdatePath(Star* __this)
{
    if (__this->_points < 3)
    {
        return;
    }

    if (((((__this->_cachedPoints == __this->_points) && (__this->_cachedRadius == __this->Radius())) && (__this->_cachedSpokeRadius == __this->SpokeRadius())) && (__this->_cachedDegrees == __this->RotationDegrees())) && (__this->_cachedRoundRatio == __this->RoundRatio()))
    {
        return;
    }

    __this->_cachedPoints = __this->_points;
    __this->_cachedRadius = __this->Radius();
    __this->_cachedSpokeRadius = __this->SpokeRadius();
    __this->_cachedDegrees = __this->RotationDegrees();
    __this->_cachedRoundRatio = __this->RoundRatio();
    __this->InvalidateRenderBounds();
    ::uPtr< ::app::Fuse::Drawing::PathGeometryRenderer*>(__this->Renderer())->Geometry(::app::Fuse::Drawing::PathGeometryExtensions__Star(NULL, ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::app::Fuse::Drawing::PathGeometry__New_1(NULL))->MoveTo_1(::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__New_1(NULL, __this->Radius()), __this->_offset())), __this->_points, __this->Radius(), __this->SpokeRadius(), __this->RoundRatio(), __this->RotationRadians()));
}

}}}
