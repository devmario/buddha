#include <app/Fuse.DrawContext.h>
#include <app/Fuse.Drawing.Antialiasing.h>
#include <app/Fuse.Drawing.BezierOp.h>
#include <app/Fuse.Drawing.BlendMode.h>
#include <app/Fuse.Drawing.BlendModeHelpers.h>
#include <app/Fuse.Drawing.Border.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.Brushes.h>
#include <app/Fuse.Drawing.ButtCap.h>
#include <app/Fuse.Drawing.Cache__float2.h>
#include <app/Fuse.Drawing.Cache__Fuse_Drawing_Contour.h>
#include <app/Fuse.Drawing.ClosePath.h>
#include <app/Fuse.Drawing.Colors.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.ContourEnumerable.h>
#include <app/Fuse.Drawing.ContourEnumerator.h>
#include <app/Fuse.Drawing.ContourTerminator.h>
#include <app/Fuse.Drawing.CurveTo.h>
#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Fuse.Drawing.EllipseFactory.h>
#include <app/Fuse.Drawing.GradientStop.h>
#include <app/Fuse.Drawing.HorizontalLineTo.h>
#include <app/Fuse.Drawing.ImageFill.h>
#include <app/Fuse.Drawing.ImageFill_DrawParams.h>
#include <app/Fuse.Drawing.LinearGradient.h>
#include <app/Fuse.Drawing.LinearGradientDrawable.h>
#include <app/Fuse.Drawing.LineCap.h>
#include <app/Fuse.Drawing.LineCapImpl.h>
#include <app/Fuse.Drawing.LineTo.h>
#include <app/Fuse.Drawing.MoveTo.h>
#include <app/Fuse.Drawing.NonConsecutiveEnumerable.h>
#include <app/Fuse.Drawing.NonConsecutiveEnumerator.h>
#include <app/Fuse.Drawing.NonConsecutiveExtension.h>
#include <app/Fuse.Drawing.PathGeometry.h>
#include <app/Fuse.Drawing.PathGeometryExtensions.h>
#include <app/Fuse.Drawing.PathGeometryParser.h>
#include <app/Fuse.Drawing.PathGeometryRenderer.h>
#include <app/Fuse.Drawing.Polygon.h>
#include <app/Fuse.Drawing.PolygonDrawable.h>
#include <app/Fuse.Drawing.PolygonFiller.h>
#include <app/Fuse.Drawing.RegularPolygonFactory.h>
#include <app/Fuse.Drawing.RendererContext.h>
#include <app/Fuse.Drawing.ResampleMode.h>
#include <app/Fuse.Drawing.RoundCap.h>
#include <app/Fuse.Drawing.SmoothCurveTo.h>
#include <app/Fuse.Drawing.SolidColor.h>
#include <app/Fuse.Drawing.StarFactory.h>
#include <app/Fuse.Drawing.StaticBrush.h>
#include <app/Fuse.Drawing.StaticSolidColor.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Drawing.StrokeAdjustment.h>
#include <app/Fuse.Drawing.StrokeAlignment.h>
#include <app/Fuse.Drawing.Tesselation.Face.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Fuse.Drawing.Tesselation.Mesh.h>
#include <app/Fuse.Drawing.Tesselation.MeshBuilder.h>
#include <app/Fuse.Drawing.Tesselation.Vertex.h>
#include <app/Fuse.Drawing.Token.h>
#include <app/Fuse.Drawing.Util.h>
#include <app/Fuse.Drawing.VerticalLineTo.h>
#include <app/Fuse.Drawing.WindingRules.h>
#include <app/Fuse.FramebufferPool.h>
#include <app/Fuse.Internal.ImageContainer.h>
#include <app/Fuse.Internal.SizingContainer.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Fuse_Drawing_Brush.h>
#include <app/Uno.Action__Fuse_Drawing_Stroke.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_P-f183901b.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fu-8962d4aa.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection__Fuse_Drawing_Strok-bbc0c8c7.h>
#include <app/Uno.Collections.Dictionary2_ValueCollection_Enumerator__Fuse_Dr-d900373a.h>
#include <app/Uno.Collections.EmptyEnumerable__float2.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Border.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_PolygonDrawable.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing-202bf65.h>
#include <app/Uno.Collections.List__float2.h>
#include <app/Uno.Collections.List__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.List__Fuse_Drawing_PathGeometry.h>
#include <app/Uno.Collections.ObservableList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ObservableList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Color.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float2x2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Func__Fuse_Drawing_Border__Fuse_Drawing_Contour.h>
#include <app/Uno.Func__Fuse_Drawing_Contour__Fuse_Drawing_Border.h>
#include <app/Uno.Geometry.Collision2D.h>
#include <app/Uno.Geometry.CubicBezier.h>
#include <app/Uno.Graphics.BlendOperand.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.Format.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Graphics.PolygonWinding.h>
#include <app/Uno.Graphics.PrimitiveType.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.Math.h>
#include <app/Uno.NotImplementedException.h>
#include <app/Uno.Object.h>
#include <app/Uno.Predicate__int.h>
#include <app/Uno.Rect.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__float2.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawi-15b37739.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawi-7fc6ad57.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawing_Border.h>
#include <app/Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <app/Uno.Runtime.Implementation.Internal.BundleRegistry.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Fuse {
namespace Drawing {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Antialiasing__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Drawing.Antialiasing", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "None", 0LL,
        "Gradient", 1LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BezierOp__uType* BezierOp__typeof()
{
    static ::uStaticStrong<BezierOp__uType*> type;
    if (type != NULL) return type;

    type = (BezierOp__uType*)::uAllocClassType(sizeof(BezierOp__uType), "Fuse.Drawing.BezierOp");

    return type;
}

double BezierOp___Solve(::uStatic* __this, double a_, double b_, double c_, bool s)
{
    return (-b_ + (::app::Uno::Math__Sqrt(NULL, (b_ * b_) - ((4.0 * a_) * c_)) * (double)(s ? 1 : -1))) / (2.0 * a_);
}

double BezierOp__A(::uStatic* __this, double p0, double p1, double p2, double p3)
{
    return (((3.0 * p3) - (9.0 * p2)) + (9.0 * p1)) - (3.0 * p0);
}

double BezierOp__B(::uStatic* __this, double p0, double p1, double p2)
{
    return ((6.0 * p2) - (12.0 * p1)) + (6.0 * p0);
}

double BezierOp__bezierSpline(::uStatic* __this, double p0, double p1, double p2, double p3, double t)
{
    return ((((((p3 - (3.0 * p2)) + (3.0 * p1)) - p0) * ::app::Uno::Math__Pow(NULL, t, 3.0)) + ((((3.0 * p2) - (6.0 * p1)) + (3.0 * p0)) * ::app::Uno::Math__Pow(NULL, t, 2.0))) + (((3.0 * p1) - (3.0 * p0)) * t)) + p0;
}

double BezierOp__C(::uStatic* __this, double p0, double p1)
{
    return (3.0 * p1) - (3.0 * p0);
}

double BezierOp__Determinant(::uStatic* __this, double a, double b, double c)
{
    return ::app::Uno::Math__Pow(NULL, b, 2.0) - ((4.0 * a) * c);
}

::app::Uno::Rect BezierOp__GetRect(::uStatic* __this, ::app::Uno::Float2 p1, ::app::Uno::Float2 c1, ::app::Uno::Float2 c2, ::app::Uno::Float2 p2)
{
    double aX = BezierOp__A(NULL, (double)p1.X, (double)c1.X, (double)c2.X, (double)p2.X);
    double bX = BezierOp__B(NULL, (double)p1.X, (double)c1.X, (double)c2.X);
    double cX = BezierOp__C(NULL, (double)p1.X, (double)c1.X);
    double aY = BezierOp__A(NULL, (double)p1.Y, (double)c1.Y, (double)c2.Y, (double)p2.Y);
    double bY = BezierOp__B(NULL, (double)p1.Y, (double)c1.Y, (double)c2.Y);
    double cY = BezierOp__C(NULL, (double)p1.Y, (double)c1.Y);
    ::uArray* resX = BezierOp__Solve(NULL, aX, bX, cX);
    ::uArray* resY = BezierOp__Solve(NULL, aY, bY, cY);
    ::app::Uno::Float2 min = ::app::Uno::Math__Min_13(NULL, p1, p2);
    ::app::Uno::Float2 max = ::app::Uno::Math__Max_10(NULL, p1, p2);

    for (int index_124 = 0, length_125 = ::uPtr< ::uArray*>(resX)->Length(); index_124 < length_125; ++index_124)
    {
        double e = ::uPtr< ::uArray*>(resX)->Item< double>(index_124);

        if ((e < 0.0) || (e > 1.0))
        {
            continue;
        }

        double x = BezierOp__bezierSpline(NULL, (double)p1.X, (double)c1.X, (double)c2.X, (double)p2.X, e);
        min.X = ::app::Uno::Math__Min_11(NULL, min.X, (float)x);
        max.X = ::app::Uno::Math__Max_8(NULL, max.X, (float)x);
    }

    for (int index_127 = 0, length_128 = ::uPtr< ::uArray*>(resY)->Length(); index_127 < length_128; ++index_127)
    {
        double e = ::uPtr< ::uArray*>(resY)->Item< double>(index_127);

        if ((e < 0.0) || (e > 1.0))
        {
            continue;
        }

        double y = BezierOp__bezierSpline(NULL, (double)p1.Y, (double)c1.Y, (double)c2.Y, (double)p2.Y, e);
        min.Y = ::app::Uno::Math__Min_11(NULL, min.Y, (float)y);
        max.Y = ::app::Uno::Math__Max_8(NULL, max.Y, (float)y);
    }

    return ::app::Uno::Rect__New_1(NULL, min.X, min.Y, max.X, max.Y);
}

::uArray* BezierOp__Solve(::uStatic* __this, double a, double b, double c)
{
    ::uArray* array_129;
    ::uArray* array_130;
    ::uArray* array_131;
    ::uArray* array_132;
    ::uArray* array_133;
    double d = BezierOp__Determinant(NULL, a, b, c);

    if (d < 0.0)
    {
        return (array_129 = ::uNewArray(::app::Uno::Double__typeof(), 0), array_129);
    }

    if (::app::Uno::Math__Abs_7(NULL, a) < 9.9999997473787516e-06)
    {
        if (::app::Uno::Math__Abs_7(NULL, b) < 9.9999997473787516e-06)
        {
            return (array_130 = ::uNewArray(::app::Uno::Double__typeof(), 0), array_130);
        }

        array_131 = ::uNewArray(::app::Uno::Double__typeof(), 1);
        ::uPtr< ::uArray*>(array_131)->Item< double>(0) = -c / b;
        return array_131;
    }

    if (d == 0.0)
    {
        array_132 = ::uNewArray(::app::Uno::Double__typeof(), 1);
        ::uPtr< ::uArray*>(array_132)->Item< double>(0) = BezierOp___Solve(NULL, a, b, c, true);
        return array_132;
    }
    else
    {
        return (array_133 = ::uNewArray(::app::Uno::Double__typeof(), 2), ::uPtr< ::uArray*>(array_133)->Item< double>(0) = BezierOp___Solve(NULL, a, b, c, true), ::uPtr< ::uArray*>(array_133)->Item< double>(1) = BezierOp___Solve(NULL, a, b, c, false), array_133);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* BlendMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Drawing.BlendMode", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "Normal", 0LL,
        "Add", 1LL,
        "Screen", 2LL,
        "Multiply", 3LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uString*> BlendModeHelpers___invalidBlendMode;

BlendModeHelpers__uType* BlendModeHelpers__typeof()
{
    static ::uStaticStrong<BlendModeHelpers__uType*> type;
    if (type != NULL) return type;

    type = (BlendModeHelpers__uType*)::uAllocClassType(sizeof(BlendModeHelpers__uType), "Fuse.Drawing.BlendModeHelpers");

    return type;
}

void BlendModeHelpers___TypeInit(::uStatic* __this)
{
    BlendModeHelpers___invalidBlendMode = ::uGetConstString("Invalid blend mode");
}

int BlendModeHelpers__GetDstAlpha(::uStatic* __this, int mode)
{
    switch (mode)
    {
        case 0:
        {
            return 3;
        }
        case 1:
        {
            return 3;
        }
        case 2:
        {
            return 3;
        }
        case 3:
        {
            return 3;
        }
        default:
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, BlendModeHelpers___invalidBlendMode));
        }
    }
}

int BlendModeHelpers__GetDstRgb(::uStatic* __this, int mode)
{
    switch (mode)
    {
        case 0:
        {
            return 3;
        }
        case 1:
        {
            return 1;
        }
        case 2:
        {
            return 5;
        }
        case 3:
        {
            return 3;
        }
        default:
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, BlendModeHelpers___invalidBlendMode));
        }
    }
}

int BlendModeHelpers__GetSrcAlpha(::uStatic* __this, int mode)
{
    switch (mode)
    {
        case 0:
        {
            return 1;
        }
        case 1:
        {
            return 1;
        }
        case 2:
        {
            return 1;
        }
        case 3:
        {
            return 1;
        }
        default:
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, BlendModeHelpers___invalidBlendMode));
        }
    }
}

int BlendModeHelpers__GetSrcRgb(::uStatic* __this, int mode)
{
    switch (mode)
    {
        case 0:
        {
            return 1;
        }
        case 1:
        {
            return 1;
        }
        case 2:
        {
            return 1;
        }
        case 3:
        {
            return 8;
        }
        default:
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, BlendModeHelpers___invalidBlendMode));
        }
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.10.5/Rendering/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Border__uType* Border__typeof()
{
    static ::uStaticStrong<Border__uType*> type;
    if (type != NULL) return type;

    type = (Border__uType*)::uAllocClassType(sizeof(Border__uType), "Fuse.Drawing.Border", false, 0, 16, 0);

    type->SetStrongRefs(
        "_contour", offsetof(Border, _contour),
        "_draw_dcb22334._compiledProgram", offsetof(Border, _draw_dcb22334._compiledProgram),
        "_draw_dcb22334._constValues", offsetof(Border, _draw_dcb22334._constValues),
        "_draw_dcb22334._Program", offsetof(Border, _draw_dcb22334._Program),
        "_draw_dcb29793._compiledProgram", offsetof(Border, _draw_dcb29793._compiledProgram),
        "_draw_dcb29793._constValues", offsetof(Border, _draw_dcb29793._constValues),
        "_draw_dcb29793._Program", offsetof(Border, _draw_dcb29793._Program),
        "_draw_dcb30bf2._compiledProgram", offsetof(Border, _draw_dcb30bf2._compiledProgram),
        "_draw_dcb30bf2._constValues", offsetof(Border, _draw_dcb30bf2._constValues),
        "_draw_dcb30bf2._Program", offsetof(Border, _draw_dcb30bf2._Program),
        "_draw_dcb38051._compiledProgram", offsetof(Border, _draw_dcb38051._compiledProgram),
        "_draw_dcb38051._constValues", offsetof(Border, _draw_dcb38051._constValues),
        "_draw_dcb38051._Program", offsetof(Border, _draw_dcb38051._Program),
        "_strokeVertices", offsetof(Border, _strokeVertices),
        "_vbo", offsetof(Border, _vbo),
        "_vertices", offsetof(Border, _vertices));

    return type;
}

void Border___ObjInit(Border* __this, ::uArray* vertices, float offset, float width)
{
    __this->_vertices = vertices;
    __this->_offset = offset;
    __this->_width = width;
    __this->init_DrawCalls();
}

void Border__CalculateStrokeVertices(Border* __this)
{
    if (__this->_strokeVertices != NULL)
    {
        return;
    }

    if (::uPtr< ::uArray*>(__this->_vertices)->Length() < 2)
    {
        __this->_strokeVertices = ::uNewArray(::app::Uno::Float4__typeof(), 0);
        __this->_contour = ::app::Fuse::Drawing::Contour__New_1(NULL, true, ::uNewArray(::app::Uno::Float2__typeof(), 0));
        return;
    }

    ::uArray* vertices = ::uNewArray(::app::Uno::Float4__typeof(), __this->VertexCount() * 2);
    ::uArray* shrinkedContour = ::uNewArray(::app::Uno::Float2__typeof(), __this->VertexCount());
    int v = 0;
    int s = 0;
    float dist = 0.0f;

    for (int i = 0; i < __this->VertexCount(); i++)
    {
        ::app::Uno::Float2 last = __this->GetVertex(i - 1);
        ::app::Uno::Float2 current = __this->GetVertex(i);
        ::app::Uno::Float2 next = __this->GetVertex(i + 1);
        float len = ::app::Uno::Vector__Length_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, last, current));

        if (i > 0)
        {
            dist = dist + len;
        }

        if (len < 1e-05f)
        {
            continue;
        }

        ::app::Uno::Float2 lv = ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, current, last));
        ::app::Uno::Float2 rv = ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, next, current));
        ::app::Uno::Float2 lvn = ::app::Uno::Float2__New_2(NULL, -lv.Y, lv.X);
        ::app::Uno::Float2 rvn = ::app::Uno::Float2__New_2(NULL, -rv.Y, rv.X);
        ::app::Uno::Float2 bn0 = ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Addition_2(NULL, rvn, lvn), 2.0f);
        ::app::Uno::Float2 bisectNormal = ((::app::Uno::Math__Abs_8(NULL, bn0.X) + ::app::Uno::Math__Abs_8(NULL, bn0.Y)) < 1e-05f) ? lvn : ::app::Uno::Vector__Normalize(NULL, bn0);
        ::app::Uno::Float4 outer = ::app::Uno::Float4();
        ::app::Uno::Float4 inner = ::app::Uno::Float4();
        float angle = ::app::Uno::Geometry::Collision2D__AngleBetween(NULL, lv, bisectNormal);

        if (((angle < 0.2f) || (angle > 2.94159269f)) || (len < 1.0f))
        {
            ::app::Uno::Float2 lvo = ::app::Uno::Float2__op_Addition_2(NULL, current, ::app::Uno::Float2__op_Multiply_2(NULL, bisectNormal, __this->_width + __this->_offset));
            ::app::Uno::Float2 lvi = ::app::Uno::Float2__op_Addition_2(NULL, current, ::app::Uno::Float2__op_Multiply_2(NULL, bisectNormal, __this->_offset));
            outer = ::app::Uno::Float4__New_1(NULL, lvo, 0.0f, dist);
            inner = ::app::Uno::Float4__New_1(NULL, lvi, 1.0f, dist);
        }
        else
        {
            ::app::Uno::Float2 lvo = ::app::Uno::Float2__op_Addition_2(NULL, last, ::app::Uno::Float2__op_Multiply_2(NULL, lvn, __this->_width + __this->_offset));
            ::app::Uno::Float2 lvi = ::app::Uno::Float2__op_Addition_2(NULL, last, ::app::Uno::Float2__op_Multiply_2(NULL, lvn, __this->_offset));
            outer = ::app::Uno::Float4__New_1(NULL, ::app::Uno::Geometry::Collision2D__LineIntersectionPointVector(NULL, lvo, lv, current, bisectNormal), 0.0f, dist);
            inner = ::app::Uno::Float4__New_1(NULL, ::app::Uno::Geometry::Collision2D__LineIntersectionPointVector(NULL, lvi, lv, current, bisectNormal), 1.0f, dist);
        }

        ::uPtr< ::uArray*>(vertices)->Item< ::app::Uno::Float4>(v++) = outer;
        vertices->Item< ::app::Uno::Float4>(v++) = inner;
        ::uPtr< ::uArray*>(shrinkedContour)->Item< ::app::Uno::Float2>(s++) = ::app::Uno::Float2__New_2(NULL, inner.X, inner.Y);
    }

    __this->_strokeVertices = vertices;
    __this->_vbo = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_6(NULL, vertices), 0);
    __this->_contour = ::app::Fuse::Drawing::Contour__New_1(NULL, true, shrinkedContour);
}

void Border__Dispose(Border* __this)
{
    __this->free_DrawCalls();
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->_vbo)->Dispose();
}

void Border__Draw(Border* __this, ::app::Fuse::Drawing::Brush* s, ::app::Fuse::Drawing::RendererContext* ctx)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_124 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_125 = ::app::Uno::Float4();

    if (::uPtr< ::uArray*>(__this->_vertices)->Length() < 2)
    {
        return;
    }

    if (::uPtr< ::uArray*>(__this->StrokeVertices())->Length() < 4)
    {
        return;
    }

    if (::uIs(s, ::app::Fuse::Drawing::ImageFill__typeof()))
    {
        ::app::Uno::Graphics::Texture2D* Texture_dcb22334_8_6_1 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(s, ::app::Fuse::Drawing::ImageFill__typeof()))->GetTexture();
        ::app::Fuse::Drawing::ImageFill_DrawParams DP_dcb22334_8_5_4 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(s, ::app::Fuse::Drawing::ImageFill__typeof()))->GetDrawParams(NULL, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CanvasSize());
        {
            __this->_draw_dcb22334.BlendEnabled(true);
            __this->_draw_dcb22334.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(s, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
            __this->_draw_dcb22334.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(s, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
            __this->_draw_dcb22334.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(s, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
            __this->_draw_dcb22334.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(s, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
            __this->_draw_dcb22334.CullFace(::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CullFace());
            __this->_draw_dcb22334.PrimitiveType(4);
            __this->_draw_dcb22334.Const_1(0, Texture_dcb22334_8_6_1 == NULL);
            __this->_draw_dcb22334.Use();
            __this->_draw_dcb22334.Attrib(1, 4, __this->_vbo, 16, 0);
            __this->_draw_dcb22334.Uniform_2(2, ctx->Transform());
            __this->_draw_dcb22334.Uniform_7(3, ctx->CanvasSize());
            __this->_draw_dcb22334.Uniform_7(4, DP_dcb22334_8_5_4.Origin);
            __this->_draw_dcb22334.Uniform_7(5, DP_dcb22334_8_5_4.Size);
            __this->_draw_dcb22334.Uniform_7(6, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_123 = DP_dcb22334_8_5_4.UVClip, ::app::Uno::Float2__New_2(NULL, ind_123.Z, ind_123.W)), (ind_124 = DP_dcb22334_8_5_4.UVClip, ::app::Uno::Float2__New_2(NULL, ind_124.X, ind_124.Y))));
            __this->_draw_dcb22334.Uniform_7(7, (ind_125 = DP_dcb22334_8_5_4.UVClip, ::app::Uno::Float2__New_2(NULL, ind_125.X, ind_125.Y)));
            __this->_draw_dcb22334.Uniform_5(8, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(s, ::app::Fuse::Drawing::ImageFill__typeof()))->Color());
            __this->_draw_dcb22334.Uniform_8(9, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(s, ::app::Fuse::Drawing::ImageFill__typeof()))->Opacity());
            __this->_draw_dcb22334.Sampler_1(10, Texture_dcb22334_8_6_1);
            __this->_draw_dcb22334.DrawArrays(::uPtr< ::uArray*>(__this->StrokeVertices())->Length());
        }
    }
    else if (::uIs(s, ::app::Fuse::Drawing::SolidColor__typeof()))
    {
        {
            __this->_draw_dcb29793.BlendEnabled(true);
            __this->_draw_dcb29793.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(s, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_dcb29793.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(s, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_dcb29793.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(s, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_dcb29793.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(s, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_dcb29793.CullFace(::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CullFace());
            __this->_draw_dcb29793.PrimitiveType(4);
            __this->_draw_dcb29793.Use();
            __this->_draw_dcb29793.Attrib(0, 4, __this->_vbo, 16, 0);
            __this->_draw_dcb29793.Uniform_2(1, ctx->Transform());
            __this->_draw_dcb29793.Uniform_5(2, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(s, ::app::Fuse::Drawing::SolidColor__typeof()))->Color());
            __this->_draw_dcb29793.Uniform_8(3, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(s, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity());
            __this->_draw_dcb29793.DrawArrays(::uPtr< ::uArray*>(__this->StrokeVertices())->Length());
        }
    }
    else if (::uIs(s, ::app::Fuse::Drawing::LinearGradient__typeof()))
    {
        ::app::Uno::Float2 angleSlope_dcb30bf2_8_17_3 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()), ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
        float angleLen_dcb30bf2_8_16_4 = ::app::Uno::Math__Abs_8(NULL, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CanvasSize().X * ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle())) + ::app::Uno::Math__Abs_8(NULL, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CanvasSize().Y * ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
        {
            __this->_draw_dcb30bf2.BlendEnabled(true);
            __this->_draw_dcb30bf2.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_dcb30bf2.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_dcb30bf2.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_dcb30bf2.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_dcb30bf2.CullFace(::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CullFace());
            __this->_draw_dcb30bf2.PrimitiveType(4);
            __this->_draw_dcb30bf2.Use();
            __this->_draw_dcb30bf2.Attrib(0, 4, __this->_vbo, 16, 0);
            __this->_draw_dcb30bf2.Uniform_2(1, ctx->Transform());
            __this->_draw_dcb30bf2.Uniform_7(2, ctx->CanvasSize());
            __this->_draw_dcb30bf2.Uniform_7(3, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, ctx->CanvasSize(), 2.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, angleSlope_dcb30bf2_8_17_3, angleLen_dcb30bf2_8_16_4), 2.0f)) : ::app::Uno::Float2__op_Multiply_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint(), ctx->CanvasSize()));
            __this->_draw_dcb30bf2.Uniform_7(4, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientStart);
            __this->_draw_dcb30bf2.Uniform_8(5, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
            __this->_draw_dcb30bf2.Uniform_7(6, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleSlope_dcb30bf2_8_17_3 : ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), ctx->CanvasSize())));
            __this->_draw_dcb30bf2.Uniform_8(7, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleLen_dcb30bf2_8_16_4 : ::app::Uno::Vector__Length_2(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), ctx->CanvasSize())));
            __this->_draw_dcb30bf2.Sampler_1(8, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(s, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientBuffer)->ColorBuffer());
            __this->_draw_dcb30bf2.DrawArrays(::uPtr< ::uArray*>(__this->StrokeVertices())->Length());
        }
    }
    else if (::uIs(s, ::app::Fuse::Drawing::StaticSolidColor__typeof()))
    {
        {
            __this->_draw_dcb38051.BlendEnabled(true);
            __this->_draw_dcb38051.BlendSrcRgb(__this->Draw_BlendSrcRgb_dcb38051_6_4_7);
            __this->_draw_dcb38051.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_dcb38051_6_6_8);
            __this->_draw_dcb38051.BlendDstRgb(__this->Draw_BlendDstRgb_dcb38051_6_5_9);
            __this->_draw_dcb38051.BlendDstAlpha(__this->Draw_BlendDstAlpha_dcb38051_6_7_10);
            __this->_draw_dcb38051.CullFace(::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CullFace());
            __this->_draw_dcb38051.PrimitiveType(4);
            __this->_draw_dcb38051.Use();
            __this->_draw_dcb38051.Attrib(0, 4, __this->_vbo, 16, 0);
            __this->_draw_dcb38051.Uniform_2(1, ctx->Transform());
            __this->_draw_dcb38051.Uniform_5(2, ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(s, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color());
            __this->_draw_dcb38051.DrawArrays(::uPtr< ::uArray*>(__this->StrokeVertices())->Length());
        }
    }
}

void Border__free_DrawCalls(Border* __this)
{
}

::app::Fuse::Drawing::Contour* Border__get_Contour(Border* __this)
{
    __this->CalculateStrokeVertices();
    return __this->_contour;
}

::uArray* Border__get_StrokeVertices(Border* __this)
{
    __this->CalculateStrokeVertices();
    return __this->_strokeVertices;
}

int Border__get_VertexCount(Border* __this)
{
    return ::uPtr< ::uArray*>(__this->_vertices)->Length() + 1;
}

::app::Uno::Float2 Border__GetVertex(Border* __this, int indexWrap)
{
    while (indexWrap < 0)
    {
        indexWrap = indexWrap + ::uPtr< ::uArray*>(__this->_vertices)->Length();
    }

    while (indexWrap >= ::uPtr< ::uArray*>(__this->_vertices)->Length())
    {
        indexWrap = indexWrap - ::uPtr< ::uArray*>(__this->_vertices)->Length();
    }

    return ::uPtr< ::uArray*>(__this->_vertices)->Item< ::app::Uno::Float2>(indexWrap);
}

void Border__init_DrawCalls(Border* __this)
{
    __this->Draw_BlendSrcRgb_dcb38051_6_4_7 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, 0);
    __this->Draw_BlendSrcAlpha_dcb38051_6_6_8 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, 0);
    __this->Draw_BlendDstRgb_dcb38051_6_5_9 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, 0);
    __this->Draw_BlendDstAlpha_dcb38051_6_7_10 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, 0);
    __this->_draw_dcb22334 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 602), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_dcb29793 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 603), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_dcb30bf2 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 604), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_dcb38051 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 605), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

Border* Border__New_1(::uStatic* __this, ::uArray* vertices, float offset, float width)
{
    Border* inst = (Border*)::uAllocObject(sizeof(Border), Border__typeof());
    inst->_ObjInit(vertices, offset, width);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Brush__uType* Brush__typeof()
{
    static ::uStaticStrong<Brush__uType*> type;
    if (type != NULL) return type;

    type = (Brush__uType*)::uAllocClassType(sizeof(Brush__uType), "Fuse.Drawing.Brush", false, 0, 0, 0);

    type->__fp_get_IsCompletelyTransparent = Brush__get_IsCompletelyTransparent;
    type->__fp_OnPinned = Brush__OnPinned;
    type->__fp_OnPrepare = Brush__OnPrepare;
    type->__fp_OnUnpinned = Brush__OnUnpinned;

    return type;
}

void Brush___ObjInit(Brush* __this)
{
}

bool Brush__get_IsCompletelyTransparent(Brush* __this)
{
    return false;
}

bool Brush__get_IsPinned(Brush* __this)
{
    return __this->_pinCount > 0;
}

void Brush__OnPinned(Brush* __this)
{
}

void Brush__OnPrepare(Brush* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize)
{
}

void Brush__OnUnpinned(Brush* __this)
{
}

void Brush__Pin(Brush* __this)
{
    __this->_pinCount++;

    if (__this->_pinCount == 1)
    {
        __this->OnPinned();
    }
}

void Brush__Prepare(Brush* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize)
{
    if (!__this->IsPinned())
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Warning: Brush is not pinned, preparation invalid"), 1, ::uGetConstString("/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/$.uno"), 134);
    }

    __this->OnPrepare(dc, canvasSize);
}

void Brush__Unpin(Brush* __this)
{
    __this->_pinCount--;

    if (__this->_pinCount == 0)
    {
        __this->OnUnpinned();
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Aqua;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Black;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Blue;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Fuchsia;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Gray;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Green;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Lime;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Maroon;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Navy;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Olive;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Purple;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Red;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Silver;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Teal;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Transparent;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__White;
::uStaticStrong< ::app::Fuse::Drawing::StaticSolidColor*> Brushes__Yellow;

Brushes__uType* Brushes__typeof()
{
    static ::uStaticStrong<Brushes__uType*> type;
    if (type != NULL) return type;

    type = (Brushes__uType*)::uAllocClassType(sizeof(Brushes__uType), "Fuse.Drawing.Brushes");

    return type;
}

void Brushes___TypeInit(::uStatic* __this)
{
    Brushes__Transparent = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Black);
    Brushes__Black = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Black);
    Brushes__Silver = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Silver);
    Brushes__Gray = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Gray);
    Brushes__White = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__White);
    Brushes__Maroon = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Maroon);
    Brushes__Red = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Red);
    Brushes__Purple = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Purple);
    Brushes__Fuchsia = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Fuchsia);
    Brushes__Green = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Green);
    Brushes__Lime = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Lime);
    Brushes__Olive = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Olive);
    Brushes__Yellow = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Yellow);
    Brushes__Navy = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Navy);
    Brushes__Blue = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Blue);
    Brushes__Teal = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Teal);
    Brushes__Aqua = ::app::Fuse::Drawing::StaticSolidColor__New_1(NULL, ::app::Fuse::Drawing::Colors__Aqua);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ButtCap__uType* ButtCap__typeof()
{
    static ::uStaticStrong<ButtCap__uType*> type;
    if (type != NULL) return type;

    type = (ButtCap__uType*)::uAllocClassType(sizeof(ButtCap__uType), "Fuse.Drawing.ButtCap", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::LineCapImpl__typeof());
    type->__fp_Create = (::uObject*(*)(::app::Fuse::Drawing::LineCapImpl*, ::app::Uno::Float2, ::app::Uno::Float2))ButtCap__Create;

    return type;
}

void ButtCap___ObjInit_1(ButtCap* __this)
{
    ::app::Fuse::Drawing::LineCapImpl___ObjInit(__this);
}

::uObject* ButtCap__Create(ButtCap* __this, ::app::Uno::Float2 from, ::app::Uno::Float2 to)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__float2__New_1(NULL, ::uNewArray(::app::Uno::Float2__typeof(), 0));
}

ButtCap* ButtCap__New_1(::uStatic* __this)
{
    ButtCap* inst = (ButtCap*)::uAllocObject(sizeof(ButtCap), ButtCap__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ClosePath__uType* ClosePath__typeof()
{
    static ::uStaticStrong<ClosePath__uType*> type;
    if (type != NULL) return type;

    type = (ClosePath__uType*)::uAllocClassType(sizeof(ClosePath__uType), "Fuse.Drawing.ClosePath", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::ContourTerminator__typeof());
    type->__fp_Serialize = (::uString*(*)(::app::Fuse::Drawing::PathGeometry*))ClosePath__Serialize;

    return type;
}

void ClosePath___ObjInit_3(ClosePath* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition)
{
    ::app::Fuse::Drawing::ContourTerminator___ObjInit_2(__this);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, lastPosition);
    __this->ContourTerminatorCtor(prev, ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(prev)->FindStartOfLastContour());
    __this->_lastPosition = lastPosition;
}

ClosePath* ClosePath__New_2(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition)
{
    ClosePath* inst = (ClosePath*)::uAllocObject(sizeof(ClosePath), ClosePath__typeof());
    inst->_ObjInit_3(prev, lastPosition);
    return inst;
}

::uString* ClosePath__Serialize(ClosePath* __this)
{
    return ::uGetConstString("Z");
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::app::Uno::Float4 Colors__Aqua;
::app::Uno::Float4 Colors__Black;
::app::Uno::Float4 Colors__Blue;
::app::Uno::Float4 Colors__Fuchsia;
::app::Uno::Float4 Colors__Gray;
::app::Uno::Float4 Colors__Green;
::app::Uno::Float4 Colors__Lime;
::app::Uno::Float4 Colors__Maroon;
::app::Uno::Float4 Colors__Navy;
::app::Uno::Float4 Colors__Olive;
::app::Uno::Float4 Colors__Purple;
::app::Uno::Float4 Colors__Red;
::app::Uno::Float4 Colors__Silver;
::app::Uno::Float4 Colors__Teal;
::app::Uno::Float4 Colors__Transparent;
::app::Uno::Float4 Colors__White;
::app::Uno::Float4 Colors__Yellow;

Colors__uType* Colors__typeof()
{
    static ::uStaticStrong<Colors__uType*> type;
    if (type != NULL) return type;

    type = (Colors__uType*)::uAllocClassType(sizeof(Colors__uType), "Fuse.Drawing.Colors");

    return type;
}

void Colors___TypeInit(::uStatic* __this)
{
    Colors__Transparent = ::app::Uno::Color__FromRgba32_1(NULL, 0u);
    Colors__Black = ::app::Uno::Color__FromRgba32_1(NULL, 255u);
    Colors__Silver = ::app::Uno::Color__FromRgba32_1(NULL, 3233857791u);
    Colors__Gray = ::app::Uno::Color__FromRgba32_1(NULL, 2155905279u);
    Colors__White = ::app::Uno::Color__FromRgba32_1(NULL, 4294967295u);
    Colors__Maroon = ::app::Uno::Color__FromRgba32_1(NULL, 2147483903u);
    Colors__Red = ::app::Uno::Color__FromRgba32_1(NULL, 4278190335u);
    Colors__Purple = ::app::Uno::Color__FromRgba32_1(NULL, 2147516671u);
    Colors__Fuchsia = ::app::Uno::Color__FromRgba32_1(NULL, 4278255615u);
    Colors__Green = ::app::Uno::Color__FromRgba32_1(NULL, 8388863u);
    Colors__Lime = ::app::Uno::Color__FromRgba32_1(NULL, 16711935u);
    Colors__Olive = ::app::Uno::Color__FromRgba32_1(NULL, 2155872511u);
    Colors__Yellow = ::app::Uno::Color__FromRgba32_1(NULL, 4294902015u);
    Colors__Navy = ::app::Uno::Color__FromRgba32_1(NULL, 33023u);
    Colors__Blue = ::app::Uno::Color__FromRgba32_1(NULL, 65535u);
    Colors__Teal = ::app::Uno::Color__FromRgba32_1(NULL, 8421631u);
    Colors__Aqua = ::app::Uno::Color__FromRgba32_1(NULL, 16777215u);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Contour__uType* Contour__typeof()
{
    static ::uStaticStrong<Contour__uType*> type;
    if (type != NULL) return type;

    type = (Contour__uType*)::uAllocClassType(sizeof(Contour__uType), "Fuse.Drawing.Contour", false, 0, 1, 0);

    type->SetStrongRefs(
        "_vertices", offsetof(Contour, _vertices));

    return type;
}

void Contour___ObjInit(Contour* __this, bool isClosed, ::uArray* vertices)
{
    __this->_ObjInit_1(isClosed, (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__float2__New_1(NULL, vertices));
}

void Contour___ObjInit_1(Contour* __this, bool isClosed, ::uObject* vertices)
{
    __this->_vertices = ::app::Fuse::Drawing::Cache__float2__New_2(NULL, ::app::Fuse::Drawing::NonConsecutiveExtension__NonConsecutive(NULL, vertices));
    __this->IsClosed(isClosed);
    __this->_count = (isClosed && ::app::Uno::Float2__op_Equality(NULL, ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(0), ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Length() - 1))) ? (::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Length() - 1) : ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Length();
}

bool Contour__get_IsClosed(Contour* __this)
{
    return __this->_IsClosed;
}

::app::Uno::Float2 Contour__get_Item(Contour* __this, int vertexIndex)
{
    if (__this->IsClosed())
    {
        while (vertexIndex < 0)
        {
            vertexIndex = vertexIndex + __this->VertexCount();
        }

        while (vertexIndex >= __this->VertexCount())
        {
            vertexIndex = vertexIndex - __this->VertexCount();
        }

        return ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(vertexIndex);
    }
    else
    {
        if (vertexIndex < 0)
        {
            return ::app::Uno::Float2__op_Addition_2(NULL, ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(0), ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(0), ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(1)));
        }

        if (vertexIndex >= ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Length())
        {
            return ::app::Uno::Float2__op_Addition_2(NULL, ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Length() - 1), ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Length() - 1), ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Length() - 2)));
        }

        return ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Item(vertexIndex);
    }
}

int Contour__get_VertexCount(Contour* __this)
{
    return __this->_count;
}

::uObject* Contour__get_Vertices(Contour* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Cache__float2*>(__this->_vertices)->Items();
}

Contour* Contour__New_1(::uStatic* __this, bool isClosed, ::uArray* vertices)
{
    Contour* inst = (Contour*)::uAllocObject(sizeof(Contour), Contour__typeof());
    inst->_ObjInit(isClosed, vertices);
    return inst;
}

Contour* Contour__New_2(::uStatic* __this, bool isClosed, ::uObject* vertices)
{
    Contour* inst = (Contour*)::uAllocObject(sizeof(Contour), Contour__typeof());
    inst->_ObjInit_1(isClosed, vertices);
    return inst;
}

void Contour__set_IsClosed(Contour* __this, bool value)
{
    __this->_IsClosed = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContourEnumerable__uType* ContourEnumerable__typeof()
{
    static ::uStaticStrong<ContourEnumerable__uType*> type;
    if (type != NULL) return type;

    type = (ContourEnumerable__uType*)::uAllocClassType(sizeof(ContourEnumerable__uType), "Fuse.Drawing.ContourEnumerable", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ContourEnumerable__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof(), offsetof(ContourEnumerable__uType, __interface_0));

    type->SetStrongRefs(
        "_head", offsetof(ContourEnumerable, _head));

    return type;
}

void ContourEnumerable___ObjInit(ContourEnumerable* __this, ::app::Fuse::Drawing::PathGeometry* head, ::app::Uno::Float2 scale)
{
    __this->_head = head;
    __this->_scale = scale;
}

::uObject* ContourEnumerable__GetEnumerator(ContourEnumerable* __this)
{
    return (::uObject*)::app::Fuse::Drawing::ContourEnumerator__New_1(NULL, __this->_head, __this->_scale);
}

ContourEnumerable* ContourEnumerable__New_1(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* head, ::app::Uno::Float2 scale)
{
    ContourEnumerable* inst = (ContourEnumerable*)::uAllocObject(sizeof(ContourEnumerable), ContourEnumerable__typeof());
    inst->_ObjInit(head, scale);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContourEnumerator__uType* ContourEnumerator__typeof()
{
    static ::uStaticStrong<ContourEnumerator__uType*> type;
    if (type != NULL) return type;

    type = (ContourEnumerator__uType*)::uAllocClassType(sizeof(ContourEnumerator__uType), "Fuse.Drawing.ContourEnumerator", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Contour*(*)(void*))ContourEnumerator__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ContourEnumerator__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ContourEnumerator__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour__typeof(), offsetof(ContourEnumerator__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ContourEnumerator__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ContourEnumerator__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ContourEnumerator, _current),
        "_currentHead", offsetof(ContourEnumerator, _currentHead));

    return type;
}

void ContourEnumerator___ObjInit(ContourEnumerator* __this, ::app::Fuse::Drawing::PathGeometry* head, ::app::Uno::Float2 scale)
{
    __this->_currentHead = head;
    __this->_scale = scale;
}

void ContourEnumerator__Dispose(ContourEnumerator* __this)
{
}

::app::Fuse::Drawing::Contour* ContourEnumerator__get_Current(ContourEnumerator* __this)
{
    return __this->_current;
}

bool ContourEnumerator__MoveNext(ContourEnumerator* __this)
{
    if (__this->_currentHead == NULL)
    {
        return false;
    }

    bool isClosed = ::uIs(__this->_currentHead, ::app::Fuse::Drawing::ClosePath__typeof());
    ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry* revPath = ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry__New_1(NULL);

    do
    {
        ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry*>(revPath)->Add(__this->_currentHead);
        __this->_currentHead = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_currentHead)->RemoveLast();
    }
    while ((__this->_currentHead != NULL) && !::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_currentHead)->EndsContour());

    ::app::Uno::Collections::List__float2* vertices = ::app::Uno::Collections::List__float2__New_1(NULL);

    for (int i = ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry*>(revPath)->Count() - 1; i >= 0; --i)
    {
        ::uObject* headVertices = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_PathGeometry*>(revPath)->Item(i))->EvaluateLast();

        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__float2::GetEnumerator(::uPtr< ::uObject*>(headVertices)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Uno::Float2 v = ::app::Uno::Collections::IEnumerator__float2::Current(::uPtr< ::uObject*>(enum_123));
            ::uPtr< ::app::Uno::Collections::List__float2*>(vertices)->Add(::app::Uno::Float2__op_Multiply_1(NULL, v, __this->_scale));
        }
    }

    __this->_current = ::app::Fuse::Drawing::Contour__New_2(NULL, isClosed, (::uObject*)vertices);
    return true;
}

ContourEnumerator* ContourEnumerator__New_1(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* head, ::app::Uno::Float2 scale)
{
    ContourEnumerator* inst = (ContourEnumerator*)::uAllocObject(sizeof(ContourEnumerator), ContourEnumerator__typeof());
    inst->_ObjInit(head, scale);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ContourTerminator__uType* ContourTerminator__typeof()
{
    static ::uStaticStrong<ContourTerminator__uType*> type;
    if (type != NULL) return type;

    type = (ContourTerminator__uType*)::uAllocClassType(sizeof(ContourTerminator__uType), "Fuse.Drawing.ContourTerminator", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::PathGeometry__typeof());
    type->__fp_EvaluateLast = (::uObject*(*)(::app::Fuse::Drawing::PathGeometry*))ContourTerminator__EvaluateLast;
    type->__fp_FindStartOfLastContour = (::app::Uno::Float2(*)(::app::Fuse::Drawing::PathGeometry*))ContourTerminator__FindStartOfLastContour;
    type->__fp_get_EndsContour = (bool(*)(::app::Fuse::Drawing::PathGeometry*))ContourTerminator__get_EndsContour;

    return type;
}

void ContourTerminator___ObjInit_2(ContourTerminator* __this)
{
    ::app::Fuse::Drawing::PathGeometry___ObjInit(__this);
}

void ContourTerminator__ContourTerminatorCtor(ContourTerminator* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 position)
{
    __this->PathGeometryCtor(prev, position);
}

::uObject* ContourTerminator__EvaluateLast(ContourTerminator* __this)
{
    return (::uObject*)::app::Uno::Collections::EmptyEnumerable__float2__New_1(NULL);
}

::app::Uno::Float2 ContourTerminator__FindStartOfLastContour(ContourTerminator* __this)
{
    return __this->EndPosition();
}

bool ContourTerminator__get_EndsContour(ContourTerminator* __this)
{
    return true;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CurveTo__uType* CurveTo__typeof()
{
    static ::uStaticStrong<CurveTo__uType*> type;
    if (type != NULL) return type;

    type = (CurveTo__uType*)::uAllocClassType(sizeof(CurveTo__uType), "Fuse.Drawing.CurveTo", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::PathGeometry__typeof());
    type->__fp_EvaluateLast = (::uObject*(*)(::app::Fuse::Drawing::PathGeometry*))CurveTo__EvaluateLast;
    type->__fp_get_EndTangent = (::app::Uno::Float2(*)(::app::Fuse::Drawing::PathGeometry*))CurveTo__get_EndTangent;
    type->__fp_get_HasLastBounds = (bool(*)(::app::Fuse::Drawing::PathGeometry*))CurveTo__get_HasLastBounds;
    type->__fp_get_LastBounds = (::app::Uno::Rect(*)(::app::Fuse::Drawing::PathGeometry*))CurveTo__get_LastBounds;
    type->__fp_Serialize = (::uString*(*)(::app::Fuse::Drawing::PathGeometry*))CurveTo__Serialize;

    return type;
}

void CurveTo___ObjInit_1(CurveTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position)
{
    ::app::Fuse::Drawing::PathGeometry___ObjInit(__this);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, lastPosition);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, controlPointStart);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, controlPointEnd);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, position);
    __this->CurveToCtor(prev, lastPosition, controlPointStart, controlPointEnd, position);
}

void CurveTo___ObjInit_2(CurveTo* __this)
{
    ::app::Fuse::Drawing::PathGeometry___ObjInit(__this);
}

void CurveTo__CurveToCtor(CurveTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position)
{
    __this->PathGeometryCtor(prev, position);
    __this->_lastPosition = lastPosition;
    __this->_controlPointStart = controlPointStart;
    __this->_controlPointEnd = controlPointEnd;
}

::uObject* CurveTo__EvaluateLast(CurveTo* __this)
{
    float maxError = 0.5f;
    return ::app::Uno::Geometry::CubicBezier__Subdivide(NULL, __this->_lastPosition, __this->_controlPointStart, __this->_controlPointEnd, __this->EndPosition(), maxError);
}

::app::Uno::Float2 CurveTo__get_ControlPointEnd(CurveTo* __this)
{
    return __this->_controlPointEnd;
}

::app::Uno::Float2 CurveTo__get_EndTangent(CurveTo* __this)
{
    return ::app::Uno::Float2__op_Subtraction_2(NULL, __this->EndPosition(), __this->ControlPointEnd());
}

bool CurveTo__get_HasLastBounds(CurveTo* __this)
{
    return true;
}

::app::Uno::Rect CurveTo__get_LastBounds(CurveTo* __this)
{
    return ::app::Fuse::Drawing::BezierOp__GetRect(NULL, __this->_lastPosition, __this->_controlPointStart, __this->_controlPointEnd, __this->EndPosition());
}

CurveTo* CurveTo__New_2(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position)
{
    CurveTo* inst = (CurveTo*)::uAllocObject(sizeof(CurveTo), CurveTo__typeof());
    inst->_ObjInit_1(prev, lastPosition, controlPointStart, controlPointEnd, position);
    return inst;
}

::uString* CurveTo__Serialize(CurveTo* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("C "), ::uBox(::app::Uno::Float__typeof(), __this->_controlPointStart.X)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->_controlPointStart.Y)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->_controlPointEnd.X)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->_controlPointEnd.Y)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().X)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().Y));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DynamicBrush__uType* DynamicBrush__typeof()
{
    static ::uStaticStrong<DynamicBrush__uType*> type;
    if (type != NULL) return type;

    type = (DynamicBrush__uType*)::uAllocClassType(sizeof(DynamicBrush__uType), "Fuse.Drawing.DynamicBrush", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Drawing::Brush__typeof());
    type->__fp_get_IsCompletelyTransparent = (bool(*)(::app::Fuse::Drawing::Brush*))DynamicBrush__get_IsCompletelyTransparent;

    type->SetStrongRefs(
        "ShadingChanged", offsetof(DynamicBrush, ShadingChanged));

    return type;
}

void DynamicBrush___ObjInit_1(DynamicBrush* __this)
{
    __this->_opacity = 1.0f;
    ::app::Fuse::Drawing::Brush___ObjInit(__this);
}

void DynamicBrush__add_ShadingChanged(DynamicBrush* __this, ::uDelegate* value)
{
    __this->ShadingChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ShadingChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

int DynamicBrush__get_BlendMode(DynamicBrush* __this)
{
    return __this->_blendMode;
}

bool DynamicBrush__get_IsCompletelyTransparent(DynamicBrush* __this)
{
    return __this->Opacity() == 0.0f;
}

float DynamicBrush__get_Opacity(DynamicBrush* __this)
{
    return __this->_opacity;
}

void DynamicBrush__OnShadingChanged(DynamicBrush* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ShadingChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ShadingChanged)->InvokeVoid();
    }
}

void DynamicBrush__remove_ShadingChanged(DynamicBrush* __this, ::uDelegate* value)
{
    __this->ShadingChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ShadingChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

void DynamicBrush__set_BlendMode(DynamicBrush* __this, int value)
{
    if (value == __this->_blendMode)
    {
        return;
    }

    __this->_blendMode = value;
    __this->OnShadingChanged();
}

void DynamicBrush__set_Opacity(DynamicBrush* __this, float value)
{
    if (value == __this->_opacity)
    {
        return;
    }

    __this->_opacity = value;
    __this->OnShadingChanged();
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EllipseFactory__uType* EllipseFactory__typeof()
{
    static ::uStaticStrong<EllipseFactory__uType*> type;
    if (type != NULL) return type;

    type = (EllipseFactory__uType*)::uAllocClassType(sizeof(EllipseFactory__uType), "Fuse.Drawing.EllipseFactory");

    return type;
}

::app::Fuse::Drawing::PathGeometry* EllipseFactory__AppendTo(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, ::app::Uno::Float2 Radius)
{
    ::app::Uno::Float2 o = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(self)->EndPosition();
    ::app::Uno::Float2 n = ::app::Uno::Float2__New_2(NULL, 0.0f, -Radius.Y);
    ::app::Uno::Float2 s = ::app::Uno::Float2__New_2(NULL, 0.0f, Radius.Y);
    ::app::Uno::Float2 w = ::app::Uno::Float2__New_2(NULL, -Radius.X, 0.0f);
    ::app::Uno::Float2 e = ::app::Uno::Float2__New_2(NULL, Radius.X, 0.0f);
    float p = 0.55f;
    return ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(self->MoveTo_1(::app::Uno::Float2__op_Addition_2(NULL, o, w)))->CurveTo(::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, o, w), ::app::Uno::Float2__op_Multiply_2(NULL, s, p)), ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, o, s), ::app::Uno::Float2__op_Multiply_2(NULL, w, p)), ::app::Uno::Float2__op_Addition_2(NULL, o, s)))->CurveTo(::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, o, s), ::app::Uno::Float2__op_Multiply_2(NULL, e, p)), ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, o, e), ::app::Uno::Float2__op_Multiply_2(NULL, s, p)), ::app::Uno::Float2__op_Addition_2(NULL, o, e)))->CurveTo(::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, o, e), ::app::Uno::Float2__op_Multiply_2(NULL, n, p)), ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, o, n), ::app::Uno::Float2__op_Multiply_2(NULL, e, p)), ::app::Uno::Float2__op_Addition_2(NULL, o, n)))->CurveTo(::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, o, n), ::app::Uno::Float2__op_Multiply_2(NULL, w, p)), ::app::Uno::Float2__op_Addition_2(NULL, ::app::Uno::Float2__op_Addition_2(NULL, o, w), ::app::Uno::Float2__op_Multiply_2(NULL, n, p)), ::app::Uno::Float2__op_Addition_2(NULL, o, w)))->ClosePath())->MoveTo_1(o);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/Brushes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GradientStop__uType* GradientStop__typeof()
{
    static ::uStaticStrong<GradientStop__uType*> type;
    if (type != NULL) return type;

    type = (GradientStop__uType*)::uAllocClassType(sizeof(GradientStop__uType), "Fuse.Drawing.GradientStop", false, 0, 1, 0);

    type->SetStrongRefs(
        "Changed", offsetof(GradientStop, Changed));

    return type;
}

::app::Uno::Float4 GradientStop__get_Color(GradientStop* __this)
{
    return __this->_color;
}

float GradientStop__get_Offset(GradientStop* __this)
{
    return __this->_offset;
}

void GradientStop__OnChanged(GradientStop* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->Changed, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->Changed)->InvokeVoid();
    }
}

void GradientStop__set_Color(GradientStop* __this, ::app::Uno::Float4 value)
{
    if (::app::Uno::Float4__op_Inequality(NULL, __this->_color, value))
    {
        __this->_color = value;
        __this->OnChanged();
    }
}

void GradientStop__set_Offset(GradientStop* __this, float value)
{
    if (__this->_offset != value)
    {
        __this->_offset = value;
        __this->OnChanged();
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HorizontalLineTo__uType* HorizontalLineTo__typeof()
{
    static ::uStaticStrong<HorizontalLineTo__uType*> type;
    if (type != NULL) return type;

    type = (HorizontalLineTo__uType*)::uAllocClassType(sizeof(HorizontalLineTo__uType), "Fuse.Drawing.HorizontalLineTo", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::LineTo__typeof());
    type->__fp_Serialize = (::uString*(*)(::app::Fuse::Drawing::PathGeometry*))HorizontalLineTo__Serialize;

    return type;
}

void HorizontalLineTo___ObjInit_3(HorizontalLineTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, float x)
{
    ::app::Fuse::Drawing::LineTo___ObjInit_2(__this);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, lastPosition);
    ::app::Fuse::Drawing::Util__ValidateFloat(NULL, x);
    __this->LineToCtor(prev, lastPosition, ::app::Uno::Float2__New_2(NULL, x, lastPosition.Y));
    __this->_x = x;
}

HorizontalLineTo* HorizontalLineTo__New_4(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, float x)
{
    HorizontalLineTo* inst = (HorizontalLineTo*)::uAllocObject(sizeof(HorizontalLineTo), HorizontalLineTo__typeof());
    inst->_ObjInit_3(prev, lastPosition, x);
    return inst;
}

::uString* HorizontalLineTo__Serialize(HorizontalLineTo* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::uGetConstString("H "), ::uBox(::app::Uno::Float__typeof(), __this->_x));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Drawing/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ImageFill__uType* ImageFill__typeof()
{
    static ::uStaticStrong<ImageFill__uType*> type;
    if (type != NULL) return type;

    type = (ImageFill__uType*)::uAllocClassType(sizeof(ImageFill__uType), "Fuse.Drawing.ImageFill", false, 1, 1, 0);

    type->SetBaseType(::app::Fuse::Drawing::DynamicBrush__typeof());
    type->__fp_OnPinned = (void(*)(::app::Fuse::Drawing::Brush*))ImageFill__OnPinned;
    type->__fp_OnUnpinned = (void(*)(::app::Fuse::Drawing::Brush*))ImageFill__OnUnpinned;
    type->__interface_0.__fp_OnSourceChanged = (void(*)(void*))ImageFill__Fuse_Internal_IImageContainerOwner_OnSourceChanged;
    type->__interface_0.__fp_OnParamChanged = (void(*)(void*))ImageFill__Fuse_Internal_IImageContainerOwner_OnParamChanged;
    type->__interface_0.__fp_OnSizingChanged = (void(*)(void*))ImageFill__Fuse_Internal_IImageContainerOwner_OnSizingChanged;

    type->SetInterfaces(
        ::app::Fuse::Internal::IImageContainerOwner__typeof(), offsetof(ImageFill__uType, __interface_0));

    type->SetStrongRefs(
        "_container", offsetof(ImageFill, _container));

    return type;
}

void ImageFill__Fuse_Internal_IImageContainerOwner_OnParamChanged(ImageFill* __this)
{
    __this->OnShadingChanged();
}

void ImageFill__Fuse_Internal_IImageContainerOwner_OnSizingChanged(ImageFill* __this)
{
    __this->OnShadingChanged();
}

void ImageFill__Fuse_Internal_IImageContainerOwner_OnSourceChanged(ImageFill* __this)
{
    __this->OnShadingChanged();
}

::app::Uno::Float4 ImageFill__get_Color(ImageFill* __this)
{
    return __this->_color;
}

::app::Fuse::Resources::ImageSource* ImageFill__get_Source(ImageFill* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Source();
}

::app::Fuse::Drawing::ImageFill_DrawParams ImageFill__GetDrawParams(ImageFill* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float2 size)
{
    ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Sizing)->absoluteZoom = (dc == NULL) ? 1.0f : ::uPtr< ::app::Fuse::DrawContext*>(dc)->ViewportPointDensity();
    ::app::Uno::Float2 contentDesiredSize = __this->GetSize();
    ::app::Uno::Float2 scale = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Sizing)->CalcScale_1(size, contentDesiredSize);
    ::app::Uno::Float2 origin = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Sizing)->CalcOrigin(size, ::app::Uno::Float2__op_Multiply_1(NULL, contentDesiredSize, scale));
    ::app::Fuse::Drawing::ImageFill_DrawParams dp = ::uDefault< ::app::Fuse::Drawing::ImageFill_DrawParams>();
    dp.Origin = origin;
    dp.Size = ::app::Uno::Float2__op_Multiply_1(NULL, contentDesiredSize, scale);
    dp.UVClip = ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Sizing)->CalcClip(size, &dp.Origin, &dp.Size);
    return dp;
}

::app::Uno::Float2 ImageFill__GetSize(ImageFill* __this)
{
    if (__this->Source() != NULL)
    {
        return ::uPtr< ::app::Fuse::Internal::SizingContainer*>(::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Sizing)->CalcContentSize(::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->Source())->Size(), ::uPtr< ::app::Fuse::Resources::ImageSource*>(__this->Source())->PixelSize());
    }

    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

::app::Uno::Graphics::Texture2D* ImageFill__GetTexture(ImageFill* __this)
{
    return ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->GetTexture();
}

void ImageFill__OnPinned(ImageFill* __this)
{
    ::app::Fuse::Drawing::Brush__OnPinned(__this);
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->IsRooted(true);
}

void ImageFill__OnUnpinned(ImageFill* __this)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->IsRooted(false);
    ::app::Fuse::Drawing::Brush__OnUnpinned(__this);
}

void ImageFill__set_Color(ImageFill* __this, ::app::Uno::Float4 value)
{
    if (::app::Uno::Float4__op_Inequality(NULL, __this->_color, value))
    {
        __this->_color = value;
        __this->OnShadingChanged();
    }
}

void ImageFill__set_Source(ImageFill* __this, ::app::Fuse::Resources::ImageSource* value)
{
    ::uPtr< ::app::Fuse::Internal::ImageContainer*>(__this->_container)->Source(value);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Drawing/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ImageFill_DrawParams__uType* ImageFill_DrawParams__typeof()
{
    static ::uStaticStrong<ImageFill_DrawParams__uType*> type;
    if (type != NULL) return type;

    type = (ImageFill_DrawParams__uType*)::uAllocStructType(sizeof(ImageFill_DrawParams__uType), "Fuse.Drawing.ImageFill.DrawParams", sizeof(ImageFill_DrawParams), 0, 0, 0);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/Brushes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

int LinearGradient___gradientSize;

LinearGradient__uType* LinearGradient__typeof()
{
    static ::uStaticStrong<LinearGradient__uType*> type;
    if (type != NULL) return type;

    type = (LinearGradient__uType*)::uAllocClassType(sizeof(LinearGradient__uType), "Fuse.Drawing.LinearGradient", false, 0, 2, 0);

    type->SetBaseType(::app::Fuse::Drawing::DynamicBrush__typeof());
    type->__fp_OnPrepare = (void(*)(::app::Fuse::Drawing::Brush*, ::app::Fuse::DrawContext*, ::app::Uno::Float2))LinearGradient__OnPrepare;
    type->__fp_OnUnpinned = (void(*)(::app::Fuse::Drawing::Brush*))LinearGradient__OnUnpinned;

    type->SetStrongRefs(
        "_gradientBuffer", offsetof(LinearGradient, _gradientBuffer),
        "_sortedStops", offsetof(LinearGradient, _sortedStops));

    return type;
}

void LinearGradient___TypeInit(::uStatic* __this)
{
    LinearGradient___gradientSize = 256;
    LinearGradient___gradientSize = ::app::Uno::Math__Min_5(NULL, 1028, ::app::Uno::Graphics::Texture2D__get_MaxSize(NULL));
}

float LinearGradient__get_Angle(LinearGradient* __this)
{
    return __this->_angle;
}

::app::Uno::Float2 LinearGradient__get_EndPoint(LinearGradient* __this)
{
    return __this->_endPoint;
}

bool LinearGradient__get_HasAngle(LinearGradient* __this)
{
    return __this->_hasAngle;
}

::uArray* LinearGradient__get_SortedStops(LinearGradient* __this)
{
    return __this->_sortedStops;
}

::app::Uno::Float2 LinearGradient__get_StartPoint(LinearGradient* __this)
{
    return __this->_startPoint;
}

void LinearGradient__OnPrepare(LinearGradient* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize)
{
    if (__this->_gradientBuffer != NULL)
    {
        return;
    }

    __this->_gradientBuffer = ::app::Fuse::FramebufferPool__Lock(NULL, ::app::Uno::Int2__New_2(NULL, LinearGradient___gradientSize, 1), 3, false);
    __this->_gradientStart = ::uPtr< ::app::Fuse::Drawing::LinearGradientDrawable*>(::app::Fuse::Drawing::LinearGradientDrawable__Singleton)->FillBuffer(dc, __this, __this->_gradientBuffer);
}

void LinearGradient__OnUnpinned(LinearGradient* __this)
{
    if (__this->_gradientBuffer != NULL)
    {
        ::app::Fuse::FramebufferPool__Release(NULL, __this->_gradientBuffer);
        __this->_gradientBuffer = NULL;
    }
}

void LinearGradient__set_Angle(LinearGradient* __this, float value)
{
    if ((__this->_angle != value) || !__this->_hasAngle)
    {
        __this->_angle = value;
        __this->_hasAngle = true;
        __this->OnShadingChanged();
    }
}

void LinearGradient__set_EndPoint(LinearGradient* __this, ::app::Uno::Float2 value)
{
    if (::app::Uno::Float2__op_Inequality(NULL, __this->_endPoint, value))
    {
        __this->_endPoint = value;
        __this->OnShadingChanged();
    }
}

void LinearGradient__set_StartPoint(LinearGradient* __this, ::app::Uno::Float2 value)
{
    if (::app::Uno::Float2__op_Inequality(NULL, __this->_startPoint, value))
    {
        __this->_startPoint = value;
        __this->OnShadingChanged();
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/Brushes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< LinearGradientDrawable*> LinearGradientDrawable__Singleton;

LinearGradientDrawable__uType* LinearGradientDrawable__typeof()
{
    static ::uStaticStrong<LinearGradientDrawable__uType*> type;
    if (type != NULL) return type;

    type = (LinearGradientDrawable__uType*)::uAllocClassType(sizeof(LinearGradientDrawable__uType), "Fuse.Drawing.LinearGradientDrawable", false, 0, 5, 0);

    type->SetStrongRefs(
        "_draw_d6f2a2f9._compiledProgram", offsetof(LinearGradientDrawable, _draw_d6f2a2f9._compiledProgram),
        "_draw_d6f2a2f9._constValues", offsetof(LinearGradientDrawable, _draw_d6f2a2f9._constValues),
        "_draw_d6f2a2f9._Program", offsetof(LinearGradientDrawable, _draw_d6f2a2f9._Program),
        "FillBuffer_TexCoord_d6f2a2f9_1_1_1", offsetof(LinearGradientDrawable, FillBuffer_TexCoord_d6f2a2f9_1_1_1),
        "FillBuffer_Vertices_d6f2a2f9_1_0_9", offsetof(LinearGradientDrawable, FillBuffer_Vertices_d6f2a2f9_1_0_9));

    return type;
}

void LinearGradientDrawable___ObjInit(LinearGradientDrawable* __this)
{
    __this->init_DrawCalls();
}

void LinearGradientDrawable___TypeInit(::uStatic* __this)
{
    LinearGradientDrawable__Singleton = LinearGradientDrawable__New_1(NULL);
}

::app::Uno::Float2 LinearGradientDrawable__FillBuffer(LinearGradientDrawable* __this, ::app::Fuse::DrawContext* dc, ::app::Fuse::Drawing::LinearGradient* lg, ::app::Uno::Graphics::Framebuffer* fb)
{
    ::uArray* stops = ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(lg)->SortedStops();

    if (::uPtr< ::uArray*>(stops)->Length() < 2)
    {
        return ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f);
    }

    float length = ::uPtr< ::app::Fuse::Drawing::GradientStop*>(::uPtr< ::uArray*>(stops)->Item< ::app::Fuse::Drawing::GradientStop*>(::uPtr< ::uArray*>(stops)->Length() - 1))->Offset() - ::uPtr< ::app::Fuse::Drawing::GradientStop*>(::uPtr< ::uArray*>(stops)->Item< ::app::Fuse::Drawing::GradientStop*>(0))->Offset();
    ::uPtr< ::app::Fuse::DrawContext*>(dc)->PushRenderTarget_2(fb);
    ::uArray* Offsets_d6f2a2f9_1_5_5 = LinearGradientDrawable__FillBuffer_Offsets_d6f2a2f9_1_5_4(NULL, stops->Length(), stops);
    ::uArray* Colors_d6f2a2f9_1_6_7 = LinearGradientDrawable__FillBuffer_Colors_d6f2a2f9_1_6_6(NULL, stops->Length(), stops);
    {
        __this->_draw_d6f2a2f9.DepthTestEnabled(false);
        __this->_draw_d6f2a2f9.Const(0, ::uPtr< ::uArray*>(Offsets_d6f2a2f9_1_5_5)->Length());
        __this->_draw_d6f2a2f9.Const(1, ::uPtr< ::uArray*>(Colors_d6f2a2f9_1_6_7)->Length());
        __this->_draw_d6f2a2f9.Use();
        __this->_draw_d6f2a2f9.Attrib(2, 2, __this->FillBuffer_TexCoord_d6f2a2f9_1_1_1, 8, 0);
        __this->_draw_d6f2a2f9.Uniform_1(3, Offsets_d6f2a2f9_1_5_5);
        __this->_draw_d6f2a2f9.Uniform_8(4, length);
        __this->_draw_d6f2a2f9.Uniform_13(5, Colors_d6f2a2f9_1_6_7);
        __this->_draw_d6f2a2f9.DrawArrays(::uPtr< ::uArray*>(__this->FillBuffer_Vertices_d6f2a2f9_1_0_9)->Length());
    }

    dc->PopRenderTarget();
    return ::app::Uno::Float2__New_2(NULL, ::uPtr< ::app::Fuse::Drawing::GradientStop*>(stops->Item< ::app::Fuse::Drawing::GradientStop*>(0))->Offset(), length);
}

::uArray* LinearGradientDrawable__FillBuffer_Colors_d6f2a2f9_1_6_6(::uStatic* __this, int Colors_1_6_4, ::uArray* Colors_1_6_5)
{
    ::uArray* cols = ::uNewArray(::app::Uno::Float4__typeof(), ::app::Uno::Math__Max_2(NULL, Colors_1_6_4, 1));

    for (int i = 0; i < Colors_1_6_4; i++)
    {
        cols->Item< ::app::Uno::Float4>(i) = ::uPtr< ::app::Fuse::Drawing::GradientStop*>(::uPtr< ::uArray*>(Colors_1_6_5)->Item< ::app::Fuse::Drawing::GradientStop*>(i))->Color();
    }

    return cols;
}

::uArray* LinearGradientDrawable__FillBuffer_Offsets_d6f2a2f9_1_5_4(::uStatic* __this, int Offsets_1_5_1, ::uArray* Offsets_1_5_2)
{
    ::uArray* ofs = ::uNewArray(::app::Uno::Float__typeof(), ::app::Uno::Math__Max_2(NULL, Offsets_1_5_1, 1));

    for (int i = 0; i < Offsets_1_5_1; i++)
    {
        ofs->Item< float>(i) = ::uPtr< ::app::Fuse::Drawing::GradientStop*>(::uPtr< ::uArray*>(Offsets_1_5_2)->Item< ::app::Fuse::Drawing::GradientStop*>(i))->Offset();
    }

    return ofs;
}

void LinearGradientDrawable__init_DrawCalls(LinearGradientDrawable* __this)
{
    ::uArray* array_123;
    array_123 = ::uNewArray(::app::Uno::Float2__typeof(), 6);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(0) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(1) = ::app::Uno::Float2__New_2(NULL, 0.0f, 1.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(2) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(3) = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(4) = ::app::Uno::Float2__New_2(NULL, 1.0f, 1.0f);
    ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(5) = ::app::Uno::Float2__New_2(NULL, 1.0f, 0.0f);
    ::uArray* Vertices_d6f2a2f9_1_0_0 = array_123;
    __this->FillBuffer_TexCoord_d6f2a2f9_1_1_1 = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_8(NULL, Vertices_d6f2a2f9_1_0_0), 0);
    __this->FillBuffer_Vertices_d6f2a2f9_1_0_9 = Vertices_d6f2a2f9_1_0_0;
    __this->_draw_d6f2a2f9 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 598), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

LinearGradientDrawable* LinearGradientDrawable__New_1(::uStatic* __this)
{
    LinearGradientDrawable* inst = (LinearGradientDrawable*)::uAllocObject(sizeof(LinearGradientDrawable), LinearGradientDrawable__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* LineCap__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Drawing.LineCap", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Butt", 0LL,
        "Round", 1LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LineCapImpl__uType* LineCapImpl__typeof()
{
    static ::uStaticStrong<LineCapImpl__uType*> type;
    if (type != NULL) return type;

    type = (LineCapImpl__uType*)::uAllocClassType(sizeof(LineCapImpl__uType), "Fuse.Drawing.LineCapImpl", false, 0, 0, 0);

    return type;
}

void LineCapImpl___ObjInit(LineCapImpl* __this)
{
}

LineCapImpl* LineCapImpl__Create_1(::uStatic* __this, int lineCap)
{
    switch (lineCap)
    {
        case 0:
        {
            return (LineCapImpl*)::app::Fuse::Drawing::ButtCap__New_1(NULL);
        }
        case 1:
        {
            return (LineCapImpl*)::app::Fuse::Drawing::RoundCap__New_1(NULL);
        }
    }

    U_THROW(::app::Uno::NotImplementedException__New_3(NULL));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LineTo__uType* LineTo__typeof()
{
    static ::uStaticStrong<LineTo__uType*> type;
    if (type != NULL) return type;

    type = (LineTo__uType*)::uAllocClassType(sizeof(LineTo__uType), "Fuse.Drawing.LineTo", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::PathGeometry__typeof());
    type->__fp_EvaluateLast = (::uObject*(*)(::app::Fuse::Drawing::PathGeometry*))LineTo__EvaluateLast;
    type->__fp_get_HasLastBounds = (bool(*)(::app::Fuse::Drawing::PathGeometry*))LineTo__get_HasLastBounds;
    type->__fp_get_LastBounds = (::app::Uno::Rect(*)(::app::Fuse::Drawing::PathGeometry*))LineTo__get_LastBounds;
    type->__fp_Serialize = (::uString*(*)(::app::Fuse::Drawing::PathGeometry*))LineTo__Serialize;

    return type;
}

void LineTo___ObjInit_1(LineTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position)
{
    ::app::Fuse::Drawing::PathGeometry___ObjInit(__this);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, lastPosition);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, position);
    __this->LineToCtor(prev, lastPosition, position);
}

void LineTo___ObjInit_2(LineTo* __this)
{
    ::app::Fuse::Drawing::PathGeometry___ObjInit(__this);
}

::uObject* LineTo__EvaluateLast(LineTo* __this)
{
    ::uArray* array_123;
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__float2__New_1(NULL, (array_123 = ::uNewArray(::app::Uno::Float2__typeof(), 2), ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(0) = __this->_lastPosition, ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(1) = __this->EndPosition(), array_123));
}

bool LineTo__get_HasLastBounds(LineTo* __this)
{
    return true;
}

::app::Uno::Rect LineTo__get_LastBounds(LineTo* __this)
{
    return ::app::Uno::Rect__ContainingPoints(NULL, __this->_lastPosition, __this->EndPosition());
}

void LineTo__LineToCtor(LineTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position)
{
    __this->PathGeometryCtor(prev, position);
    __this->_lastPosition = lastPosition;
}

LineTo* LineTo__New_2(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 position)
{
    LineTo* inst = (LineTo*)::uAllocObject(sizeof(LineTo), LineTo__typeof());
    inst->_ObjInit_1(prev, lastPosition, position);
    return inst;
}

::uString* LineTo__Serialize(LineTo* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("L "), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().X)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().Y));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

MoveTo__uType* MoveTo__typeof()
{
    static ::uStaticStrong<MoveTo__uType*> type;
    if (type != NULL) return type;

    type = (MoveTo__uType*)::uAllocClassType(sizeof(MoveTo__uType), "Fuse.Drawing.MoveTo", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::ContourTerminator__typeof());
    type->__fp_Serialize = (::uString*(*)(::app::Fuse::Drawing::PathGeometry*))MoveTo__Serialize;

    return type;
}

void MoveTo___ObjInit_3(MoveTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 position)
{
    ::app::Fuse::Drawing::ContourTerminator___ObjInit_2(__this);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, position);
    __this->ContourTerminatorCtor(prev, position);
}

MoveTo* MoveTo__New_2(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 position)
{
    MoveTo* inst = (MoveTo*)::uAllocObject(sizeof(MoveTo), MoveTo__typeof());
    inst->_ObjInit_3(prev, position);
    return inst;
}

::uString* MoveTo__Serialize(MoveTo* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("M "), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().X)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().Y));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.10.5/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NonConsecutiveEnumerable__uType* NonConsecutiveEnumerable__typeof()
{
    static ::uStaticStrong<NonConsecutiveEnumerable__uType*> type;
    if (type != NULL) return type;

    type = (NonConsecutiveEnumerable__uType*)::uAllocClassType(sizeof(NonConsecutiveEnumerable__uType), "Fuse.Drawing.NonConsecutiveEnumerable", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))NonConsecutiveEnumerable__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__float2__typeof(), offsetof(NonConsecutiveEnumerable__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(NonConsecutiveEnumerable, _source));

    return type;
}

void NonConsecutiveEnumerable___ObjInit(NonConsecutiveEnumerable* __this, ::uObject* source)
{
    __this->_source = source;
}

::uObject* NonConsecutiveEnumerable__GetEnumerator(NonConsecutiveEnumerable* __this)
{
    return (::uObject*)::app::Fuse::Drawing::NonConsecutiveEnumerator__New_1(NULL, ::app::Uno::Collections::IEnumerable__float2::GetEnumerator(::uPtr< ::uObject*>(__this->_source)));
}

NonConsecutiveEnumerable* NonConsecutiveEnumerable__New_1(::uStatic* __this, ::uObject* source)
{
    NonConsecutiveEnumerable* inst = (NonConsecutiveEnumerable*)::uAllocObject(sizeof(NonConsecutiveEnumerable), NonConsecutiveEnumerable__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.10.5/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NonConsecutiveEnumerator__uType* NonConsecutiveEnumerator__typeof()
{
    static ::uStaticStrong<NonConsecutiveEnumerator__uType*> type;
    if (type != NULL) return type;

    type = (NonConsecutiveEnumerator__uType*)::uAllocClassType(sizeof(NonConsecutiveEnumerator__uType), "Fuse.Drawing.NonConsecutiveEnumerator", false, 3, 1, 0);

    type->__interface_0.__fp_get_Current = (::app::Uno::Float2(*)(void*))NonConsecutiveEnumerator__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))NonConsecutiveEnumerator__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))NonConsecutiveEnumerator__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__float2__typeof(), offsetof(NonConsecutiveEnumerator__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(NonConsecutiveEnumerator__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(NonConsecutiveEnumerator__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(NonConsecutiveEnumerator, _source));

    return type;
}

void NonConsecutiveEnumerator___ObjInit(NonConsecutiveEnumerator* __this, ::uObject* source)
{
    __this->_source = source;
}

void NonConsecutiveEnumerator__Dispose(NonConsecutiveEnumerator* __this)
{
}

::app::Uno::Float2 NonConsecutiveEnumerator__get_Current(NonConsecutiveEnumerator* __this)
{
    return ::app::Uno::Float2__New_2(NULL, __this->_current.X, __this->_current.Y);
}

bool NonConsecutiveEnumerator__MoveNext(NonConsecutiveEnumerator* __this)
{
    if (!__this->_hasCurrent)
    {
        if (!::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source)))
        {
            return false;
        }

        __this->_first = ::app::Uno::Collections::IEnumerator__float2::Current(::uPtr< ::uObject*>(__this->_source));
        __this->_current = ::app::Uno::Collections::IEnumerator__float2::Current(::uPtr< ::uObject*>(__this->_source));
        __this->_hasCurrent = true;
        return true;
    }

    while (true)
    {
        if (!::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source)))
        {
            return false;
        }

        ::app::Uno::Float2 next = ::app::Uno::Collections::IEnumerator__float2::Current(::uPtr< ::uObject*>(__this->_source));

        if ((::app::Uno::Math__Abs_8(NULL, next.X - __this->_current.X) > 1e-05f) || (::app::Uno::Math__Abs_8(NULL, next.Y - __this->_current.Y) > 1e-05f))
        {
            __this->_current = next;
            return true;
        }
    }

    return false;
}

NonConsecutiveEnumerator* NonConsecutiveEnumerator__New_1(::uStatic* __this, ::uObject* source)
{
    NonConsecutiveEnumerator* inst = (NonConsecutiveEnumerator*)::uAllocObject(sizeof(NonConsecutiveEnumerator), NonConsecutiveEnumerator__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.10.5/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

NonConsecutiveExtension__uType* NonConsecutiveExtension__typeof()
{
    static ::uStaticStrong<NonConsecutiveExtension__uType*> type;
    if (type != NULL) return type;

    type = (NonConsecutiveExtension__uType*)::uAllocClassType(sizeof(NonConsecutiveExtension__uType), "Fuse.Drawing.NonConsecutiveExtension");

    return type;
}

::uObject* NonConsecutiveExtension__NonConsecutive(::uStatic* __this, ::uObject* self)
{
    return (::uObject*)::app::Fuse::Drawing::NonConsecutiveEnumerable__New_1(NULL, self);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PathGeometry__uType* PathGeometry__typeof()
{
    static ::uStaticStrong<PathGeometry__uType*> type;
    if (type != NULL) return type;

    type = (PathGeometry__uType*)::uAllocClassType(sizeof(PathGeometry__uType), "Fuse.Drawing.PathGeometry", false, 0, 1, 0);

    type->__fp_EvaluateLast = PathGeometry__EvaluateLast;
    type->__fp_FindStartOfLastContour = PathGeometry__FindStartOfLastContour;
    type->__fp_get_EndsContour = PathGeometry__get_EndsContour;
    type->__fp_get_EndTangent = PathGeometry__get_EndTangent;
    type->__fp_get_HasLastBounds = PathGeometry__get_HasLastBounds;
    type->__fp_get_LastBounds = PathGeometry__get_LastBounds;
    type->__fp_Serialize = PathGeometry__Serialize;
    type->__fp_ToString = (::uString*(*)(::uObject*))PathGeometry__ToString;

    type->SetStrongRefs(
        "_previous", offsetof(PathGeometry, _previous));

    return type;
}

void PathGeometry___ObjInit(PathGeometry* __this)
{
    __this->_previous = NULL;
    __this->_position = ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
}

::app::Uno::Rect PathGeometry__CalculateBounds(PathGeometry* __this)
{
    PathGeometry* pg = __this;

    while ((pg != NULL) && !pg->HasLastBounds())
    {
        pg = ::uPtr< PathGeometry*>(pg)->_previous;
    }

    if (pg == NULL)
    {
        return ::app::Uno::Rect__New_1(NULL, 0.0f, 0.0f, 0.0f, 0.0f);
    }

    ::app::Uno::Rect rectUnion = pg->LastBounds();
    pg = ::uPtr< PathGeometry*>(pg)->_previous;

    while (pg != NULL)
    {
        if (::uPtr< PathGeometry*>(pg)->HasLastBounds())
        {
            rectUnion = ::app::Uno::Rect__Union(NULL, rectUnion, ::uPtr< PathGeometry*>(pg)->LastBounds());
        }

        pg = ::uPtr< PathGeometry*>(pg)->_previous;
    }

    return rectUnion;
}

PathGeometry* PathGeometry__ClosePath(PathGeometry* __this)
{
    return (PathGeometry*)::app::Fuse::Drawing::ClosePath__New_2(NULL, __this, __this->EndPosition());
}

PathGeometry* PathGeometry__CurveTo(PathGeometry* __this, ::app::Uno::Float2 controlPointStart, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position)
{
    return (PathGeometry*)::app::Fuse::Drawing::CurveTo__New_2(NULL, __this, __this->EndPosition(), controlPointStart, controlPointEnd, position);
}

::uObject* PathGeometry__EvaluateLast(PathGeometry* __this)
{
    return (::uObject*)::app::Uno::Collections::EmptyEnumerable__float2__New_1(NULL);
}

::app::Uno::Float2 PathGeometry__FindStartOfLastContour(PathGeometry* __this)
{
    return (__this->_previous != NULL) ? ::uPtr< PathGeometry*>(__this->_previous)->FindStartOfLastContour() : ::app::Uno::Float2__New_2(NULL, 0.0f, 0.0f);
}

::app::Uno::Rect PathGeometry__get_Bounds(PathGeometry* __this)
{
    if (!__this->_hasBoundsCache)
    {
        __this->_hasBoundsCache = true;
        __this->_boundsCache = __this->CalculateBounds();
    }

    return __this->_boundsCache;
}

::app::Uno::Float2 PathGeometry__get_EndPosition(PathGeometry* __this)
{
    return __this->_position;
}

bool PathGeometry__get_EndsContour(PathGeometry* __this)
{
    return false;
}

::app::Uno::Float2 PathGeometry__get_EndTangent(PathGeometry* __this)
{
    return ::app::Uno::Float2__New_1(NULL, 0.0f);
}

bool PathGeometry__get_HasLastBounds(PathGeometry* __this)
{
    return false;
}

::app::Uno::Rect PathGeometry__get_LastBounds(PathGeometry* __this)
{
    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

PathGeometry* PathGeometry__HorizontalLineTo(PathGeometry* __this, float x)
{
    return (PathGeometry*)::app::Fuse::Drawing::HorizontalLineTo__New_4(NULL, __this, __this->EndPosition(), x);
}

PathGeometry* PathGeometry__LineTo(PathGeometry* __this, float x, float y)
{
    return (PathGeometry*)::app::Fuse::Drawing::LineTo__New_2(NULL, __this, __this->EndPosition(), ::app::Uno::Float2__New_2(NULL, x, y));
}

PathGeometry* PathGeometry__LineTo_1(PathGeometry* __this, ::app::Uno::Float2 position)
{
    return (PathGeometry*)::app::Fuse::Drawing::LineTo__New_2(NULL, __this, __this->EndPosition(), position);
}

PathGeometry* PathGeometry__MoveTo(PathGeometry* __this, float x, float y)
{
    return (PathGeometry*)::app::Fuse::Drawing::MoveTo__New_2(NULL, __this, ::app::Uno::Float2__New_2(NULL, x, y));
}

PathGeometry* PathGeometry__MoveTo_1(PathGeometry* __this, ::app::Uno::Float2 position)
{
    return (PathGeometry*)::app::Fuse::Drawing::MoveTo__New_2(NULL, __this, position);
}

PathGeometry* PathGeometry__New_1(::uStatic* __this)
{
    PathGeometry* inst = (PathGeometry*)::uAllocObject(sizeof(PathGeometry), PathGeometry__typeof());
    inst->_ObjInit();
    return inst;
}

PathGeometry* PathGeometry__Parse(::uStatic* __this, ::uString* pathDescription)
{
    return ::app::Fuse::Drawing::PathGeometryParser__Deserialize(NULL, pathDescription);
}

void PathGeometry__PathGeometryCtor(PathGeometry* __this, PathGeometry* previous, ::app::Uno::Float2 position)
{
    __this->_previous = previous;
    __this->_position = position;
}

PathGeometry* PathGeometry__RemoveLast(PathGeometry* __this)
{
    return __this->_previous;
}

::uString* PathGeometry__Serialize(PathGeometry* __this)
{
    return ::uGetConstString("");
}

PathGeometry* PathGeometry__SmoothCurveTo(PathGeometry* __this, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position)
{
    return (PathGeometry*)::app::Fuse::Drawing::SmoothCurveTo__New_4(NULL, __this, __this->EndPosition(), __this->EndTangent(), controlPointEnd, position);
}

::app::Fuse::Drawing::Polygon* PathGeometry__ToPolygon(PathGeometry* __this, ::uDelegate* WindingRule, ::app::Uno::Float2 scale)
{
    return ::app::Fuse::Drawing::Polygon__New_2(NULL, WindingRule, (::uObject*)::app::Fuse::Drawing::ContourEnumerable__New_1(NULL, __this, scale));
}

::uString* PathGeometry__ToString(PathGeometry* __this)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, (__this->_previous == NULL) ? ::uGetConstString("") : ::uPtr< PathGeometry*>(__this->_previous)->ToString(), ::uGetConstString(" ")), __this->Serialize());
}

PathGeometry* PathGeometry__VerticalLineTo(PathGeometry* __this, float y)
{
    return (PathGeometry*)::app::Fuse::Drawing::VerticalLineTo__New_4(NULL, __this, __this->EndPosition(), y);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PathGeometryExtensions__uType* PathGeometryExtensions__typeof()
{
    static ::uStaticStrong<PathGeometryExtensions__uType*> type;
    if (type != NULL) return type;

    type = (PathGeometryExtensions__uType*)::uAllocClassType(sizeof(PathGeometryExtensions__uType), "Fuse.Drawing.PathGeometryExtensions");

    return type;
}

::app::Fuse::Drawing::PathGeometry* PathGeometryExtensions__Ellipse(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, ::app::Uno::Float2 Radius)
{
    return ::app::Fuse::Drawing::EllipseFactory__AppendTo(NULL, self, Radius);
}

::app::Fuse::Drawing::PathGeometry* PathGeometryExtensions__RegularPolygon(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, int Sides, float Radius)
{
    return ::app::Fuse::Drawing::RegularPolygonFactory__AppendTo(NULL, self, Sides, Radius);
}

::app::Fuse::Drawing::PathGeometry* PathGeometryExtensions__Star(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, int Corners, float Radius, float SpokeRadius, float CornerRatio, float rotation)
{
    return ::app::Fuse::Drawing::StarFactory__AppendTo(NULL, self, Corners, Radius, SpokeRadius, CornerRatio, rotation);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PathGeometryParser__uType* PathGeometryParser__typeof()
{
    static ::uStaticStrong<PathGeometryParser__uType*> type;
    if (type != NULL) return type;

    type = (PathGeometryParser__uType*)::uAllocClassType(sizeof(PathGeometryParser__uType), "Fuse.Drawing.PathGeometryParser", false, 0, 5, 0);

    type->SetStrongRefs(
        "_data", offsetof(PathGeometryParser, _data),
        "_head", offsetof(PathGeometryParser, _head),
        "_headToken", offsetof(PathGeometryParser, _headToken),
        "_prevToken", offsetof(PathGeometryParser, _prevToken),
        "_token", offsetof(PathGeometryParser, _token));

    return type;
}

void PathGeometryParser___ObjInit(PathGeometryParser* __this, ::uString* data)
{
    __this->_data = data;
    __this->_headToken = ::app::Fuse::Drawing::Token__New_1(NULL, -1, false);
    __this->_prevToken = ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_headToken)->Next = ::app::Fuse::Drawing::Token__New_1(NULL, 0, false);
    bool wasExponent = false;

    for (int i = 0; i < ::uPtr< ::uString*>(data)->Length(); i++)
    {
        ::uChar c = ::uPtr< ::uString*>(data)->Item(i);

        switch (c)
        {
            case 0:
            case ' ':
            case ',':
            {
                __this->StartNewToken(i - 1, i + 1, false);
                break;
            }
            case '-':
            {
                if (!wasExponent)
                {
                    __this->StartNewToken(i - 1, i, false);
                }

                break;
            }
            case 'M':
            case 'C':
            case 'S':
            case 'Z':
            case 'L':
            case 'H':
            case 'V':
            case 'm':
            case 'c':
            case 's':
            case 'z':
            case 'l':
            case 'h':
            case 'v':
            {
                __this->StartNewToken(i - 1, i, true);
                __this->StartNewToken(i, i + 1, false);
                break;
            }
        }

        wasExponent = (c == 'e') || (c == 'E');
    }

    ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_prevToken)->Last = ::uPtr< ::uString*>(data)->Length() - 1;

    for (::app::Fuse::Drawing::Token* token = ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_headToken)->Next; token != NULL; )
    {
        ::app::Fuse::Drawing::Token* next = ::uPtr< ::app::Fuse::Drawing::Token*>(token)->Next;

        while ((next != NULL) && ((::uPtr< ::app::Fuse::Drawing::Token*>(next)->Last - ::uPtr< ::app::Fuse::Drawing::Token*>(next)->First) < 0))
        {
            next = ::uPtr< ::app::Fuse::Drawing::Token*>(next)->Next;
        }

        token = ::uPtr< ::app::Fuse::Drawing::Token*>(token)->Next = next;
    }

    __this->_head = ::app::Fuse::Drawing::PathGeometry__New_1(NULL);
    __this->_token = ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_headToken)->Next;

    while (__this->_token != NULL)
    {
        if (!::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->HasAction)
        {
            __this->_token = ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->Next;
            continue;
        }

        ::uChar currentCommand = ::uPtr< ::uString*>(__this->_data)->Item(::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->First);
        __this->_token = ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->Next;

        do
        {
            __this->Execute(currentCommand);
        }
        while ((__this->_token != NULL) && !::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->HasAction);
    }
}

void PathGeometryParser__ClosePath(PathGeometryParser* __this)
{
    __this->_head = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_head)->ClosePath();
}

void PathGeometryParser__CurveTo(PathGeometryParser* __this, float offsetX, float offsetY)
{
    float x1 = offsetX + __this->ReadFloat();
    float y1 = offsetY + __this->ReadFloat();
    float x2 = offsetX + __this->ReadFloat();
    float y2 = offsetY + __this->ReadFloat();
    float x = __this->_x = offsetX + __this->ReadFloat();
    float y = __this->_y = offsetY + __this->ReadFloat();
    __this->_head = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_head)->CurveTo(::app::Uno::Float2__New_2(NULL, x1, y1), ::app::Uno::Float2__New_2(NULL, x2, y2), ::app::Uno::Float2__New_2(NULL, x, y));
}

::app::Fuse::Drawing::PathGeometry* PathGeometryParser__Deserialize(::uStatic* __this, ::uString* data)
{
    if (::app::Uno::String__op_Equality(NULL, data, NULL) || (::uPtr< ::uString*>(data)->Length() == 0))
    {
        return ::app::Fuse::Drawing::PathGeometry__New_1(NULL);
    }

    return ::uPtr< PathGeometryParser*>(PathGeometryParser__New_1(NULL, data))->_head;
}

void PathGeometryParser__Execute(PathGeometryParser* __this, ::uChar c)
{
    switch (c)
    {
        case 'M':
        {
            __this->MoveTo(0.0f, 0.0f);
            break;
        }
        case 'C':
        {
            __this->CurveTo(0.0f, 0.0f);
            break;
        }
        case 'S':
        {
            __this->SmoothCurveTo(0.0f, 0.0f);
            break;
        }
        case 'Z':
        {
            __this->ClosePath();
            break;
        }
        case 'L':
        {
            __this->LineTo(0.0f, 0.0f);
            break;
        }
        case 'H':
        {
            __this->HLineTo(0.0f, 0.0f);
            break;
        }
        case 'V':
        {
            __this->VLineTo(0.0f, 0.0f);
            break;
        }
        case 'm':
        {
            __this->MoveTo(__this->_x, __this->_y);
            break;
        }
        case 'c':
        {
            __this->CurveTo(__this->_x, __this->_y);
            break;
        }
        case 's':
        {
            __this->SmoothCurveTo(__this->_x, __this->_y);
            break;
        }
        case 'z':
        {
            __this->ClosePath();
            break;
        }
        case 'l':
        {
            __this->LineTo(__this->_x, __this->_y);
            break;
        }
        case 'h':
        {
            __this->HLineTo(__this->_x, __this->_y);
            break;
        }
        case 'v':
        {
            __this->VLineTo(__this->_x, __this->_y);
            break;
        }
    }
}

void PathGeometryParser__HLineTo(PathGeometryParser* __this, float offsetX, float offsetY)
{
    float x = __this->_x = offsetX + __this->ReadFloat();
    __this->_head = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_head)->HorizontalLineTo(x);
}

void PathGeometryParser__LineTo(PathGeometryParser* __this, float offsetX, float offsetY)
{
    float x = __this->_x = offsetX + __this->ReadFloat();
    float y = __this->_y = offsetY + __this->ReadFloat();
    __this->_head = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_head)->LineTo(x, y);
}

void PathGeometryParser__MoveTo(PathGeometryParser* __this, float offsetX, float offsetY)
{
    float x = __this->_x = offsetX + __this->ReadFloat();
    float y = __this->_y = offsetY + __this->ReadFloat();
    __this->_head = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_head)->MoveTo(x, y);
}

PathGeometryParser* PathGeometryParser__New_1(::uStatic* __this, ::uString* data)
{
    PathGeometryParser* inst = (PathGeometryParser*)::uAllocObject(sizeof(PathGeometryParser), PathGeometryParser__typeof());
    inst->_ObjInit(data);
    return inst;
}

float PathGeometryParser__ReadFloat(PathGeometryParser* __this)
{
    ::uString* str = ::app::Uno::String::Substring(::uPtr< ::uString*>(__this->_data), ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->First, (::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->Last - ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->First) + 1);
    float res = ::app::Uno::Float__Parse(NULL, str);
    __this->_token = ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_token)->Next;
    return res;
}

void PathGeometryParser__SmoothCurveTo(PathGeometryParser* __this, float offsetX, float offsetY)
{
    float x2 = offsetX + __this->ReadFloat();
    float y2 = offsetY + __this->ReadFloat();
    float x = __this->_x = offsetX + __this->ReadFloat();
    float y = __this->_y = offsetY + __this->ReadFloat();
    __this->_head = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_head)->SmoothCurveTo(::app::Uno::Float2__New_2(NULL, x2, y2), ::app::Uno::Float2__New_2(NULL, x, y));
}

void PathGeometryParser__StartNewToken(PathGeometryParser* __this, int prevLastChar, int nextFirstChar, bool hasAction)
{
    ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_prevToken)->Last = prevLastChar;
    __this->_prevToken = ::uPtr< ::app::Fuse::Drawing::Token*>(__this->_prevToken)->Next = ::app::Fuse::Drawing::Token__New_1(NULL, nextFirstChar, hasAction);
}

void PathGeometryParser__VLineTo(PathGeometryParser* __this, float offsetX, float offsetY)
{
    float y = __this->_y = offsetY + __this->ReadFloat();
    __this->_head = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_head)->VerticalLineTo(y);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PathGeometryRenderer__uType* PathGeometryRenderer__typeof()
{
    static ::uStaticStrong<PathGeometryRenderer__uType*> type;
    if (type != NULL) return type;

    type = (PathGeometryRenderer__uType*)::uAllocClassType(sizeof(PathGeometryRenderer__uType), "Fuse.Drawing.PathGeometryRenderer", false, 0, 7, 0);

    type->SetStrongRefs(
        "_fillRenderer", offsetof(PathGeometryRenderer, _fillRenderer),
        "_fillRule", offsetof(PathGeometryRenderer, _fillRule),
        "_fills", offsetof(PathGeometryRenderer, _fills),
        "_geometry", offsetof(PathGeometryRenderer, _geometry),
        "_strokeRenderers", offsetof(PathGeometryRenderer, _strokeRenderers),
        "_strokes", offsetof(PathGeometryRenderer, _strokes),
        "VisualInvalidated", offsetof(PathGeometryRenderer, VisualInvalidated));

    return type;
}

void PathGeometryRenderer___ObjInit_1(PathGeometryRenderer* __this)
{
    __this->_geometry = ::app::Fuse::Drawing::PathGeometry__New_1(NULL);
    __this->_density = 1.0f;
    __this->_antialiasing = 1;
    __this->_fillRule = ::uNewDelegateNonVirt(::app::Uno::Predicate__int__typeof(), (const void*)::app::Fuse::Drawing::WindingRules__NonZero);
    __this->_preScale = ::app::Uno::Float2__New_1(NULL, 1.0f);
}

void PathGeometryRenderer__add_VisualInvalidated(PathGeometryRenderer* __this, ::uDelegate* value)
{
    __this->VisualInvalidated = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->VisualInvalidated, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

void PathGeometryRenderer__CalcBounds(PathGeometryRenderer* __this)
{
    if (__this->_hasBoundsCache)
    {
        return;
    }

    __this->_innerBounds = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_geometry)->Bounds();
    ::app::Uno::Rect scaled = __this->_innerBounds;
    scaled.Left = scaled.Left * __this->_preScale.X;
    scaled.Top = scaled.Top * __this->_preScale.Y;
    scaled.Right = scaled.Right * __this->_preScale.X;
    scaled.Bottom = scaled.Bottom * __this->_preScale.Y;
    __this->_bounds = scaled;
    __this->_strokePadding = ::app::Uno::Float4__New_3(NULL, 0.0f);

    if (__this->HasStrokes())
    {
        __this->UpdateAa();
        __this->CompleteStrokeRenderers(__this->Density());
        ::app::Uno::Rect r = scaled;

        for (::app::Uno::Collections::Dictionary2_ValueCollection_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller enum_125 = ::uPtr< ::app::Uno::Collections::Dictionary2_ValueCollection__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->Values())->GetEnumerator(); enum_125.MoveNext(); )
        {
            ::app::Fuse::Drawing::PolygonFiller* s = enum_125.Current();
            ::app::Uno::Rect c = ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(s)->Bounds();
            r = ::app::Uno::Rect__Union(NULL, r, c);
        }

        ::app::Uno::Float2 diffMin = ::app::Uno::Float2__op_Subtraction_2(NULL, __this->_bounds.Minimum(), r.Minimum());
        ::app::Uno::Float2 diffMax = ::app::Uno::Float2__op_Subtraction_2(NULL, r.Maximum(), __this->_bounds.Maximum());
        __this->_strokePadding = ::app::Uno::Float4__New_2(NULL, diffMin.X, diffMin.Y, diffMax.X, diffMax.Y);
        __this->_strokePadding = ::app::Uno::Math__Max_1(NULL, __this->_strokePadding, ::app::Uno::Float4__New_3(NULL, 0.0f));
        __this->_bounds = r;
    }

    __this->_hasBoundsCache = true;
}

void PathGeometryRenderer__CompleteStrokeRenderers(PathGeometryRenderer* __this, float density)
{
    __this->EnsureStrokeRenderers();

    for (::uObject* enum_124 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke::GetEnumerator(::uPtr< ::uObject*>(__this->Strokes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_124)); )
    {
        ::app::Fuse::Drawing::Stroke* s = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke::Current(::uPtr< ::uObject*>(enum_124));
        __this->GetStrokeRenderer(s, density);
    }
}

void PathGeometryRenderer__Draw(PathGeometryRenderer* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize)
{
    __this->Draw_1(__this->GetRendererContext(dc, transform, elementSize));
}

void PathGeometryRenderer__Draw_1(PathGeometryRenderer* __this, ::app::Fuse::Drawing::RendererContext* ctx)
{
    __this->UpdateAa();
    __this->DrawFills(ctx);
    __this->DrawStrokes(ctx);
}

void PathGeometryRenderer__DrawFill(PathGeometryRenderer* __this, ::app::Fuse::Drawing::RendererContext* ctx, ::app::Fuse::Drawing::Brush* fill)
{
    __this->EnsureFillRenderer(::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->Density());

    if (!::uPtr< ::app::Fuse::Drawing::Brush*>(fill)->IsCompletelyTransparent())
    {
        ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(__this->_fillRenderer)->Draw(fill, ctx);
    }
}

void PathGeometryRenderer__DrawFills(PathGeometryRenderer* __this, ::app::Fuse::Drawing::RendererContext* ctx)
{
    if (__this->HasFills())
    {
        for (int i = 0; i < ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Count(); i++)
        {
            __this->DrawFill(ctx, ::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Item(i));
        }
    }
}

void PathGeometryRenderer__DrawStroke(PathGeometryRenderer* __this, ::app::Fuse::Drawing::RendererContext* ctx, ::app::Fuse::Drawing::Stroke* s)
{
    __this->EnsureStrokeRenderers();

    if (__this->_strokeDensity != ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->Density())
    {
        ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->Clear();
        __this->_strokeDensity = ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->Density();
    }

    if ((::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->Brush() != NULL) && !::uPtr< ::app::Fuse::Drawing::Brush*>(::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->Brush())->IsCompletelyTransparent())
    {
        ::app::Fuse::Drawing::PolygonFiller* sr = __this->GetStrokeRenderer(s, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->Density());
        ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(sr)->Draw(::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->Brush(), ctx);
    }
}

void PathGeometryRenderer__DrawStrokes(PathGeometryRenderer* __this, ::app::Fuse::Drawing::RendererContext* ctx)
{
    if (__this->HasStrokes())
    {
        for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke::GetEnumerator(::uPtr< ::uObject*>(__this->Strokes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
        {
            ::app::Fuse::Drawing::Stroke* s = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke::Current(::uPtr< ::uObject*>(enum_123));
            __this->DrawStroke(ctx, s);
        }
    }
}

void PathGeometryRenderer__EnsureFillRenderer(PathGeometryRenderer* __this, float density)
{
    ::app::Fuse::Drawing::PolygonFiller* ind_130;

    if ((__this->_fillDensity != density) || (__this->_fillRenderer == NULL))
    {
        __this->_fillRenderer = (ind_130 = __this->_fillRenderer, (ind_130 != NULL) ? ind_130 : ::app::Fuse::Drawing::PolygonFiller__New_1(NULL, ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_geometry)->ToPolygon(__this->_fillRule, __this->_preScale), __this->_antialiasing, density));
        __this->_fillDensity = density;
    }
}

void PathGeometryRenderer__EnsureStrokeRenderers(PathGeometryRenderer* __this)
{
    if (__this->_strokeRenderers == NULL)
    {
        __this->_strokeRenderers = ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller__New_1(NULL);
    }
}

void PathGeometryRenderer__GeometryChanged(PathGeometryRenderer* __this, ::app::Fuse::Drawing::PathGeometry* geom)
{
    __this->InvalidateStrokeAndFill();
}

int PathGeometryRenderer__get_Antialiasing(PathGeometryRenderer* __this)
{
    return __this->_antialiasing;
}

::app::Uno::Rect PathGeometryRenderer__get_Bounds(PathGeometryRenderer* __this)
{
    __this->CalcBounds();
    return __this->_bounds;
}

float PathGeometryRenderer__get_Density(PathGeometryRenderer* __this)
{
    return __this->_density;
}

::app::Fuse::Drawing::Brush* PathGeometryRenderer__get_Fill(PathGeometryRenderer* __this)
{
    return __this->HasFills() ? ::app::Uno::Collections::EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Brush_1(NULL, (::uObject*)__this->Fills()) : NULL;
}

::uDelegate* PathGeometryRenderer__get_FillRule(PathGeometryRenderer* __this)
{
    return __this->_fillRule;
}

::uObject* PathGeometryRenderer__get_Fills(PathGeometryRenderer* __this)
{
    ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush* ind_131;
    return (::uObject*)(ind_131 = __this->_fills, ((ind_131 != NULL) ? ind_131 : (__this->_fills = ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Brush__typeof(), (const void*)PathGeometryRenderer__OnFillAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Brush__typeof(), (const void*)PathGeometryRenderer__OnFillRemoved, __this)))));
}

::app::Fuse::Drawing::PathGeometry* PathGeometryRenderer__get_Geometry(PathGeometryRenderer* __this)
{
    return __this->_geometry;
}

bool PathGeometryRenderer__get_HasFills(PathGeometryRenderer* __this)
{
    return (__this->_fills != NULL) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Count() > 0);
}

bool PathGeometryRenderer__get_HasStrokes(PathGeometryRenderer* __this)
{
    return (__this->_strokes != NULL) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke*>(__this->_strokes)->Count() > 0);
}

::app::Uno::Rect PathGeometryRenderer__get_InnerBounds(PathGeometryRenderer* __this)
{
    __this->CalcBounds();
    return __this->_innerBounds;
}

::app::Uno::Float2 PathGeometryRenderer__get_PreScale(PathGeometryRenderer* __this)
{
    return __this->_preScale;
}

::app::Uno::Float4 PathGeometryRenderer__get_StrokePadding(PathGeometryRenderer* __this)
{
    __this->CalcBounds();
    return __this->_strokePadding;
}

::uObject* PathGeometryRenderer__get_Strokes(PathGeometryRenderer* __this)
{
    ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke* ind_132;
    return (::uObject*)(ind_132 = __this->_strokes, ((ind_132 != NULL) ? ind_132 : (__this->_strokes = ::app::Uno::Collections::ObservableList__Fuse_Drawing_Stroke__New_1(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)PathGeometryRenderer__OnStrokeAdded, __this), ::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)PathGeometryRenderer__OnStrokeRemoved, __this)))));
}

::uObject* PathGeometryRenderer__GetHitPart(PathGeometryRenderer* __this, ::app::Uno::Float2 p)
{
    __this->UpdateAa();

    if (__this->HasStrokes())
    {
        __this->CompleteStrokeRenderers(__this->Density());

        for (::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller enum_127 = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->GetEnumerator(); enum_127.MoveNext(); )
        {
            ::app::Uno::Collections::KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller stroke = enum_127.Current();

            if (::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(stroke.Value())->Intersects(p))
            {
                return (::uObject*)stroke.Key();
            }
        }
    }

    if (__this->HasFills())
    {
        __this->EnsureFillRenderer(__this->Density());

        if (::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(__this->_fillRenderer)->Intersects(p))
        {
            return (::uObject*)__this->Fill();
        }
    }

    return NULL;
}

::app::Fuse::Drawing::RendererContext* PathGeometryRenderer__GetRendererContext(PathGeometryRenderer* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float4x4 transform, ::app::Uno::Float2 elementSize)
{
    ::app::Fuse::Drawing::RendererContext* collection_128;
    collection_128 = ::app::Fuse::Drawing::RendererContext__New_1(NULL);
    ::uPtr< ::app::Fuse::Drawing::RendererContext*>(collection_128)->Transform(transform);
    collection_128->CanvasSize(elementSize);
    collection_128->Density(__this->Density());
    collection_128->CullFace(::uPtr< ::app::Fuse::DrawContext*>(dc)->CullFace());
    return collection_128;
}

::app::Fuse::Drawing::PolygonFiller* PathGeometryRenderer__GetStrokeRenderer(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Stroke* s, float density)
{
    ::app::Fuse::Drawing::PolygonFiller* strokeRenderer;

    if (!::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->TryGetValue(s, &strokeRenderer))
    {
        ::app::Uno::Float2 widthOffset = ::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->GetDeviceAdjusted(density);
        ::app::Fuse::Drawing::Polygon* strokePolygon = ::uPtr< ::app::Fuse::Drawing::Polygon*>(::uPtr< ::app::Fuse::Drawing::PathGeometry*>(__this->_geometry)->ToPolygon(__this->_fillRule, __this->_preScale))->Stroke(::app::Uno::Math__Max_8(NULL, 0.0f, widthOffset.Item(0)), widthOffset.Item(1), s->LineCap(), s->LineCap());
        ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->Item(s, strokeRenderer = ::app::Fuse::Drawing::PolygonFiller__New_1(NULL, strokePolygon, __this->_antialiasing, density));
    }

    return strokeRenderer;
}

void PathGeometryRenderer__InvalidateStrokeAndFill(PathGeometryRenderer* __this)
{
    __this->_hasBoundsCache = false;

    if (__this->HasStrokes())
    {
        for (int i = 0; i < ::app::Uno::Collections::ICollection__Fuse_Drawing_Stroke::Count(::uPtr< ::uObject*>(__this->Strokes())); i++)
        {
            __this->OnStrokeChanged(::app::Uno::Collections::IList__Fuse_Drawing_Stroke::Item(::uPtr< ::uObject*>(__this->Strokes()), i));
        }
    }

    if (__this->_strokeRenderers != NULL)
    {
        for (::app::Uno::Collections::Dictionary2_Enumerator__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller enum_126 = ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->GetEnumerator(); enum_126.MoveNext(); )
        {
            ::app::Uno::Collections::KeyValuePair__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller p = enum_126.Current();
            ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(p.Value())->Dispose();
        }

        __this->_strokeRenderers = NULL;
    }

    if (__this->_fillRenderer != NULL)
    {
        ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(__this->_fillRenderer)->Dispose();
        __this->_fillRenderer = NULL;
    }

    __this->InvalidateVisual();
}

void PathGeometryRenderer__InvalidateVisual(PathGeometryRenderer* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->VisualInvalidated, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->VisualInvalidated)->InvokeVoid();
    }
}

PathGeometryRenderer* PathGeometryRenderer__New_2(::uStatic* __this)
{
    PathGeometryRenderer* inst = (PathGeometryRenderer*)::uAllocObject(sizeof(PathGeometryRenderer), PathGeometryRenderer__typeof());
    inst->_ObjInit_1();
    return inst;
}

void PathGeometryRenderer__OnFillAdded(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Brush* f)
{
    if (::uIs(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))->add_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)PathGeometryRenderer__OnShadingChanged, __this));
    }

    __this->OnShadingChanged();
}

void PathGeometryRenderer__OnFillRemoved(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Brush* f)
{
    if (::uIs(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(f, ::app::Fuse::Drawing::DynamicBrush__typeof()))->remove_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)PathGeometryRenderer__OnShadingChanged, __this));
    }

    __this->OnShadingChanged();
}

void PathGeometryRenderer__OnShadingChanged(PathGeometryRenderer* __this)
{
    __this->InvalidateVisual();
}

void PathGeometryRenderer__OnStrokeAdded(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Stroke* s)
{
    ::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->add_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)PathGeometryRenderer__OnShadingChanged, __this));
    s->add_StrokeChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)PathGeometryRenderer__OnStrokeChanged, __this));
    __this->OnStrokeChanged(s);
}

void PathGeometryRenderer__OnStrokeChanged(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Stroke* s)
{
    if (__this->_strokeRenderers != NULL)
    {
        ::app::Fuse::Drawing::PolygonFiller* strokeRenderer = NULL;

        if (::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->TryGetValue(s, &strokeRenderer))
        {
            ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(strokeRenderer)->Dispose();
            ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->Remove(s);
        }
    }

    __this->InvalidateVisual();
}

void PathGeometryRenderer__OnStrokeRemoved(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Stroke* s)
{
    ::uPtr< ::app::Fuse::Drawing::Stroke*>(s)->remove_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)PathGeometryRenderer__OnShadingChanged, __this));
    s->remove_StrokeChanged(::uNewDelegateNonVirt(::app::Uno::Action__Fuse_Drawing_Stroke__typeof(), (const void*)PathGeometryRenderer__OnStrokeChanged, __this));
    __this->OnStrokeChanged(s);
}

void PathGeometryRenderer__set_Antialiasing(PathGeometryRenderer* __this, int value)
{
    if (value == __this->_antialiasing)
    {
        return;
    }

    __this->_antialiasing = value;
    __this->InvalidateVisual();
}

void PathGeometryRenderer__set_Density(PathGeometryRenderer* __this, float value)
{
    if (__this->_density != value)
    {
        __this->_density = value;
        __this->InvalidateStrokeAndFill();
    }
}

void PathGeometryRenderer__set_Fill(PathGeometryRenderer* __this, ::app::Fuse::Drawing::Brush* value)
{
    if ((__this->HasFills() && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Count() == 1)) && (::uPtr< ::app::Uno::Collections::ObservableList__Fuse_Drawing_Brush*>(__this->_fills)->Item(0) == value))
    {
        return;
    }

    ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Clear(::uPtr< ::uObject*>(__this->Fills()));

    if (value != NULL)
    {
        ::app::Uno::Collections::ICollection__Fuse_Drawing_Brush::Add(::uPtr< ::uObject*>(__this->Fills()), value);
    }
}

void PathGeometryRenderer__set_FillRule(PathGeometryRenderer* __this, ::uDelegate* value)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)value, (::uDelegate*)__this->_fillRule))
    {
        return;
    }

    __this->_fillRule = value;
    __this->InvalidateStrokeAndFill();
}

void PathGeometryRenderer__set_Geometry(PathGeometryRenderer* __this, ::app::Fuse::Drawing::PathGeometry* value)
{
    if (value == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("value")));
    }

    if (value == __this->_geometry)
    {
        return;
    }

    __this->_geometry = value;
    __this->GeometryChanged(__this->_geometry);
}

void PathGeometryRenderer__set_PreScale(PathGeometryRenderer* __this, ::app::Uno::Float2 value)
{
    if (::app::Uno::Float2__op_Inequality(NULL, __this->_preScale, value))
    {
        __this->_preScale = value;
        __this->InvalidateStrokeAndFill();
    }
}

void PathGeometryRenderer__SoftDispose(PathGeometryRenderer* __this)
{
    if (__this->_fillRenderer != NULL)
    {
        ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(__this->_fillRenderer)->Dispose();
        __this->_fillRenderer = NULL;
    }

    if (__this->_strokeRenderers != NULL)
    {
        for (::uObject* enum_129 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Stroke::GetEnumerator(::uPtr< ::uObject*>(__this->Strokes())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_129)); )
        {
            ::app::Fuse::Drawing::Stroke* s = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Stroke::Current(::uPtr< ::uObject*>(enum_129));
            ::app::Fuse::Drawing::PolygonFiller* strokeRenderer = NULL;

            if (::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->TryGetValue(s, &strokeRenderer))
            {
                ::uPtr< ::app::Fuse::Drawing::PolygonFiller*>(strokeRenderer)->Dispose();
            }
        }

        ::uPtr< ::app::Uno::Collections::Dictionary__Fuse_Drawing_Stroke__Fuse_Drawing_PolygonFiller*>(__this->_strokeRenderers)->Clear();
        __this->_strokeRenderers = NULL;
    }
}

void PathGeometryRenderer__UpdateAa(PathGeometryRenderer* __this)
{
    if (__this->_cachedAntialiasing == __this->Antialiasing())
    {
        return;
    }

    __this->_cachedAntialiasing = __this->Antialiasing();
    __this->InvalidateStrokeAndFill();
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Polygon__uType* Polygon__typeof()
{
    static ::uStaticStrong<Polygon__uType*> type;
    if (type != NULL) return type;

    type = (Polygon__uType*)::uAllocClassType(sizeof(Polygon__uType), "Fuse.Drawing.Polygon", false, 0, 3, 0);

    type->SetStrongRefs(
        "_boundaryContours", offsetof(Polygon, _boundaryContours),
        "_contours", offsetof(Polygon, _contours),
        "_windingRule", offsetof(Polygon, _windingRule));

    return type;
}

void Polygon___ObjInit(Polygon* __this, ::uObject* contours)
{
    __this->_ObjInit_1(::uNewDelegateNonVirt(::app::Uno::Predicate__int__typeof(), (const void*)::app::Fuse::Drawing::WindingRules__NonZero), contours);
}

void Polygon___ObjInit_1(Polygon* __this, ::uDelegate* windingRule, ::uObject* contours)
{
    __this->_windingRule = windingRule;
    __this->_contours = ::app::Fuse::Drawing::Cache__Fuse_Drawing_Contour__New_2(NULL, contours);
}

::uObject* Polygon__get_Contours(Polygon* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Cache__Fuse_Drawing_Contour*>(__this->_contours)->Items();
}

bool Polygon__get_IsDegenerate(Polygon* __this)
{
    return ::uPtr< ::app::Fuse::Drawing::Cache__Fuse_Drawing_Contour*>(__this->_contours)->Length() < 1;
}

::uObject* Polygon__GetBoundaryContours(Polygon* __this)
{
    if (__this->IsDegenerate())
    {
        __this->_boundaryContours = ::uNewArray(::app::Fuse::Drawing::Contour__typeof(), 0);
    }

    if (__this->_boundaryContours == NULL)
    {
        ::app::Fuse::Drawing::Tesselation::Mesh* mesh = ::app::Fuse::Drawing::Tesselation::MeshBuilder__CreateFromContours(NULL, __this->Contours());
        ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(mesh)->ComputeInterior(__this->_windingRule);
        mesh->SetWindingNumber(1);
        mesh->DeleteInternalEdges();
        __this->_boundaryContours = ::app::Uno::Collections::EnumerableExtensions__ToArray__Fuse_Drawing_Contour(NULL, mesh->GetContours());
        mesh->Dispose();
    }

    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_Contour__New_1(NULL, __this->_boundaryContours);
}

::uArray* Polygon__GetTriangleVertices(Polygon* __this)
{
    ::app::Fuse::Drawing::Tesselation::Mesh* mesh = ::app::Fuse::Drawing::Tesselation::MeshBuilder__CreateFromContours(NULL, __this->Contours());
    ::uPtr< ::app::Fuse::Drawing::Tesselation::Mesh*>(mesh)->ComputeInterior(__this->_windingRule);
    mesh->TessellateInterior();
    ::uArray* vertices = ::uNewArray(::app::Uno::Float2__typeof(), ::app::Uno::Collections::EnumerableExtensions__Count__Fuse_Drawing_Tesselation_Face(NULL, mesh->InteriorFaces()) * 3);
    int v = 0;

    for (::uObject* enum_126 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face::GetEnumerator(::uPtr< ::uObject*>(mesh->InteriorFaces())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_126)); )
    {
        ::app::Fuse::Drawing::Tesselation::Face* face = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face::Current(::uPtr< ::uObject*>(enum_126));

        for (::uObject* enum_127 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge::GetEnumerator(::uPtr< ::uObject*>(::uPtr< ::app::Fuse::Drawing::Tesselation::Face*>(face)->EdgeLoop())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_127)); )
        {
            ::app::Fuse::Drawing::Tesselation::HalfEdge* vert = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_HalfEdge::Current(::uPtr< ::uObject*>(enum_127));
            ::uPtr< ::uArray*>(vertices)->Item< ::app::Uno::Float2>(v++) = ::uPtr< ::app::Fuse::Drawing::Tesselation::Vertex*>(::uPtr< ::app::Fuse::Drawing::Tesselation::HalfEdge*>(vert)->Origin())->Coords();
        }
    }

    mesh->Dispose();
    return vertices;
}

Polygon* Polygon__New_1(::uStatic* __this, ::uObject* contours)
{
    Polygon* inst = (Polygon*)::uAllocObject(sizeof(Polygon), Polygon__typeof());
    inst->_ObjInit(contours);
    return inst;
}

Polygon* Polygon__New_2(::uStatic* __this, ::uDelegate* windingRule, ::uObject* contours)
{
    Polygon* inst = (Polygon*)::uAllocObject(sizeof(Polygon), Polygon__typeof());
    inst->_ObjInit_1(windingRule, contours);
    return inst;
}

Polygon* Polygon__Stroke(Polygon* __this, float Width, float Offset, int StartCap, int EndCap)
{
    float _width = Width;
    float _offset = Offset - (Width * 0.5f);
    ::app::Uno::Collections::List__Fuse_Drawing_Contour* strokeContours = ::app::Uno::Collections::List__Fuse_Drawing_Contour__New_1(NULL);

    for (::uObject* enum_125 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour::GetEnumerator(::uPtr< ::uObject*>(__this->Contours())); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_125)); )
    {
        ::app::Fuse::Drawing::Contour* contour = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour::Current(::uPtr< ::uObject*>(enum_125));
        int vertexCount = ::uPtr< ::app::Fuse::Drawing::Contour*>(contour)->VertexCount();

        if (vertexCount < 2)
        {
            continue;
        }

        ::app::Uno::Collections::List__float2* outer = ::app::Uno::Collections::List__float2__New_1(NULL);
        ::app::Uno::Collections::List__float2* inner = ::app::Uno::Collections::List__float2__New_1(NULL);
        float dist = 0.0f;
        ::app::Uno::Float2 startInner = ::app::Uno::Float2__New_1(NULL, 0.0f);
        ::app::Uno::Float2 startOuter = ::app::Uno::Float2__New_1(NULL, 0.0f);
        ::app::Uno::Float2 endInner = ::app::Uno::Float2__New_1(NULL, 0.0f);
        ::app::Uno::Float2 endOuter = ::app::Uno::Float2__New_1(NULL, 0.0f);

        for (int i = 0; i < vertexCount; i++)
        {
            ::app::Uno::Float2 last = ::uPtr< ::app::Fuse::Drawing::Contour*>(contour)->Item(i - 1);
            ::app::Uno::Float2 current = contour->Item(i);
            ::app::Uno::Float2 next = contour->Item(i + 1);
            ::app::Uno::Float2 lv = ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, current, last));
            ::app::Uno::Float2 lvn = ::app::Uno::Float2__New_2(NULL, -lv.Y, lv.X);
            ::app::Uno::Float2 rv = ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, next, current));
            ::app::Uno::Float2 rvn = ::app::Uno::Float2__New_2(NULL, -rv.Y, rv.X);
            float len = ::app::Uno::Vector__Length_2(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, last, current));

            if (i > 0)
            {
                dist = dist + len;
            }

            ::app::Uno::Float2 outerV = ::app::Uno::Float2();
            ::app::Uno::Float2 innerV = ::app::Uno::Float2();

            if (!contour->IsClosed() && (i == 0))
            {
                startInner = innerV = ::app::Uno::Float2__op_Addition_2(NULL, current, ::app::Uno::Float2__op_Multiply_2(NULL, rvn, _offset));
                startOuter = outerV = ::app::Uno::Float2__op_Addition_2(NULL, current, ::app::Uno::Float2__op_Multiply_2(NULL, rvn, _width + _offset));
            }
            else if (!contour->IsClosed() && (i == (vertexCount - 1)))
            {
                endInner = innerV = ::app::Uno::Float2__op_Addition_2(NULL, current, ::app::Uno::Float2__op_Multiply_2(NULL, lvn, _offset));
                endOuter = outerV = ::app::Uno::Float2__op_Addition_2(NULL, current, ::app::Uno::Float2__op_Multiply_2(NULL, lvn, _width + _offset));
            }
            else
            {
                ::app::Uno::Float2 bn0 = ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Addition_2(NULL, rvn, lvn), 2.0f);
                ::app::Uno::Float2 bisectNormal = ((::app::Uno::Math__Abs_8(NULL, bn0.X) + ::app::Uno::Math__Abs_8(NULL, bn0.Y)) < 1e-05f) ? lvn : ::app::Uno::Vector__Normalize(NULL, bn0);
                float angle = ::app::Uno::Geometry::Collision2D__AngleBetween(NULL, lv, bisectNormal);

                if (((angle < 0.1f) || (angle > 3.04159284f)) || (len < 1.0f))
                {
                    outerV = ::app::Uno::Float2__op_Addition_2(NULL, current, ::app::Uno::Float2__op_Multiply_2(NULL, bisectNormal, _width + _offset));
                    innerV = ::app::Uno::Float2__op_Addition_2(NULL, current, ::app::Uno::Float2__op_Multiply_2(NULL, bisectNormal, _offset));
                }
                else
                {
                    ::app::Uno::Float2 lvo = ::app::Uno::Float2__op_Addition_2(NULL, last, ::app::Uno::Float2__op_Multiply_2(NULL, lvn, _width + _offset));
                    ::app::Uno::Float2 lvi = ::app::Uno::Float2__op_Addition_2(NULL, last, ::app::Uno::Float2__op_Multiply_2(NULL, lvn, _offset));
                    outerV = ::app::Uno::Geometry::Collision2D__LineIntersectionPointVector(NULL, lvo, lv, current, bisectNormal);
                    innerV = ::app::Uno::Geometry::Collision2D__LineIntersectionPointVector(NULL, lvi, lv, current, bisectNormal);
                }
            }

            ::uPtr< ::app::Uno::Collections::List__float2*>(outer)->Add(outerV);
            ::uPtr< ::app::Uno::Collections::List__float2*>(inner)->Add(innerV);
        }

        ::uArray* innerRev = ::uNewArray(::app::Uno::Float2__typeof(), ::uPtr< ::app::Uno::Collections::List__float2*>(inner)->Count());

        for (int i = 0; i < inner->Count(); ++i)
        {
            innerRev->Item< ::app::Uno::Float2>(i) = inner->Item((inner->Count() - i) - 1);
        }

        if (contour->IsClosed())
        {
            ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Contour*>(strokeContours)->Add(::app::Fuse::Drawing::Contour__New_2(NULL, true, (::uObject*)outer));
            strokeContours->Add(::app::Fuse::Drawing::Contour__New_1(NULL, true, innerRev));
        }
        else
        {
            ::uObject* start = ::uPtr< ::app::Fuse::Drawing::LineCapImpl*>(::app::Fuse::Drawing::LineCapImpl__Create_1(NULL, StartCap))->Create(startInner, startOuter);
            ::uObject* end = ::uPtr< ::app::Fuse::Drawing::LineCapImpl*>(::app::Fuse::Drawing::LineCapImpl__Create_1(NULL, EndCap))->Create(endOuter, endInner);
            ::uPtr< ::app::Uno::Collections::List__Fuse_Drawing_Contour*>(strokeContours)->Add(::app::Fuse::Drawing::Contour__New_2(NULL, true, ::app::Uno::Collections::EnumerableExtensions__Union__float2(NULL, ::app::Uno::Collections::EnumerableExtensions__Union__float2(NULL, ::app::Uno::Collections::EnumerableExtensions__Union__float2(NULL, start, (::uObject*)outer), end), (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__float2__New_1(NULL, innerRev))));
        }
    }

    return Polygon__New_1(NULL, (::uObject*)strokeContours);
}

::uObject* Polygon__Triangulate(Polygon* __this)
{
    ::uArray* array_128;
    ::uArray* verts = __this->GetTriangleVertices();

    if (::uPtr< ::uArray*>(verts)->Length() < 3)
    {
        return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_PolygonDrawable__New_1(NULL, ::uNewArray(::app::Fuse::Drawing::PolygonDrawable__typeof(), 0));
    }

    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_PolygonDrawable__New_1(NULL, (array_128 = ::uNewArray(::app::Fuse::Drawing::PolygonDrawable__typeof(), 1), ::uPtr< ::uArray*>(array_128)->ItemStrong< ::app::Fuse::Drawing::PolygonDrawable*>(0) = ::app::Fuse::Drawing::PolygonDrawable__New_1(NULL, verts), array_128));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PolygonDrawable__uType* PolygonDrawable__typeof()
{
    static ::uStaticStrong<PolygonDrawable__uType*> type;
    if (type != NULL) return type;

    type = (PolygonDrawable__uType*)::uAllocClassType(sizeof(PolygonDrawable__uType), "Fuse.Drawing.PolygonDrawable", false, 0, 11, 0);

    type->SetStrongRefs(
        "_draw_15b596e6._compiledProgram", offsetof(PolygonDrawable, _draw_15b596e6._compiledProgram),
        "_draw_15b596e6._constValues", offsetof(PolygonDrawable, _draw_15b596e6._constValues),
        "_draw_15b596e6._Program", offsetof(PolygonDrawable, _draw_15b596e6._Program),
        "_draw_15b60b45._compiledProgram", offsetof(PolygonDrawable, _draw_15b60b45._compiledProgram),
        "_draw_15b60b45._constValues", offsetof(PolygonDrawable, _draw_15b60b45._constValues),
        "_draw_15b60b45._Program", offsetof(PolygonDrawable, _draw_15b60b45._Program),
        "_draw_15b67fa4._compiledProgram", offsetof(PolygonDrawable, _draw_15b67fa4._compiledProgram),
        "_draw_15b67fa4._constValues", offsetof(PolygonDrawable, _draw_15b67fa4._constValues),
        "_draw_15b67fa4._Program", offsetof(PolygonDrawable, _draw_15b67fa4._Program),
        "_vbo", offsetof(PolygonDrawable, _vbo),
        "_vertices", offsetof(PolygonDrawable, _vertices));

    return type;
}

void PolygonDrawable___ObjInit(PolygonDrawable* __this, ::uArray* vertices)
{
    __this->_vertices = vertices;
    __this->_vbo = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, ::app::Uno::Runtime::Implementation::Internal::BufferConverters__ToBuffer_8(NULL, vertices), 0);
    __this->init_DrawCalls();
}

::app::Uno::Rect PolygonDrawable__CalcBounds(PolygonDrawable* __this)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();

    if (::uPtr< ::uArray*>(__this->_vertices)->Length() == 0)
    {
        return ::app::Uno::Rect__New_1(NULL, 0.0f, 0.0f, 0.0f, 0.0f);
    }

    ::app::Uno::Float2 min = ::uPtr< ::uArray*>(__this->_vertices)->Item< ::app::Uno::Float2>(0);
    ::app::Uno::Float2 max = ::uPtr< ::uArray*>(__this->_vertices)->Item< ::app::Uno::Float2>(0);

    for (array_123 = __this->_vertices, index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::app::Uno::Float2 v = ::uPtr< ::uArray*>(array_123)->Item< ::app::Uno::Float2>(index_124);
        min = ::app::Uno::Math__Min_13(NULL, min, v);
        max = ::app::Uno::Math__Max_10(NULL, max, v);
    }

    return ::app::Uno::Rect__New_1(NULL, min.X, min.Y, max.X, max.Y);
}

void PolygonDrawable__Dispose(PolygonDrawable* __this)
{
    __this->free_DrawCalls();
    ::uPtr< ::app::Uno::Graphics::VertexBuffer*>(__this->_vbo)->Dispose();
}

void PolygonDrawable__Draw(PolygonDrawable* __this, ::app::Fuse::Drawing::Brush* f, ::app::Fuse::Drawing::RendererContext* ctx)
{
    ::app::Uno::Float4 ind_126 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_127 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_128 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_129 = ::app::Uno::Float4();
    ::app::Uno::Float4 ind_130 = ::app::Uno::Float4();

    if (::uIs(f, ::app::Fuse::Drawing::ImageFill__typeof()))
    {
        ::app::Uno::Graphics::Texture2D* Texture_15b596e6_8_6_1 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(f, ::app::Fuse::Drawing::ImageFill__typeof()))->GetTexture();
        ::app::Fuse::Drawing::ImageFill_DrawParams DP_15b596e6_8_5_4 = ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(f, ::app::Fuse::Drawing::ImageFill__typeof()))->GetDrawParams(NULL, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CanvasSize());
        {
            __this->_draw_15b596e6.BlendEnabled(true);
            __this->_draw_15b596e6.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(f, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
            __this->_draw_15b596e6.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(f, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
            __this->_draw_15b596e6.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(f, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
            __this->_draw_15b596e6.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(f, ::app::Fuse::Drawing::ImageFill__typeof()))->BlendMode()));
            __this->_draw_15b596e6.DepthTestEnabled(false);
            __this->_draw_15b596e6.CullFace(::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CullFace());
            __this->_draw_15b596e6.PolygonWinding(0);
            __this->_draw_15b596e6.Const_1(0, Texture_15b596e6_8_6_1 == NULL);
            __this->_draw_15b596e6.Use();
            __this->_draw_15b596e6.Attrib(1, 2, __this->_vbo, 8, 0);
            __this->_draw_15b596e6.Uniform_2(2, ctx->Transform());
            __this->_draw_15b596e6.Uniform_7(3, ctx->CanvasSize());
            __this->_draw_15b596e6.Uniform_7(4, DP_15b596e6_8_5_4.Origin);
            __this->_draw_15b596e6.Uniform_7(5, DP_15b596e6_8_5_4.Size);
            __this->_draw_15b596e6.Uniform_7(6, ::app::Uno::Float2__op_Subtraction_2(NULL, (ind_126 = DP_15b596e6_8_5_4.UVClip, ::app::Uno::Float2__New_2(NULL, ind_126.Z, ind_126.W)), (ind_127 = DP_15b596e6_8_5_4.UVClip, ::app::Uno::Float2__New_2(NULL, ind_127.X, ind_127.Y))));
            __this->_draw_15b596e6.Uniform_7(7, (ind_128 = DP_15b596e6_8_5_4.UVClip, ::app::Uno::Float2__New_2(NULL, ind_128.X, ind_128.Y)));
            __this->_draw_15b596e6.Uniform_5(8, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(f, ::app::Fuse::Drawing::ImageFill__typeof()))->Color());
            __this->_draw_15b596e6.Uniform_8(9, ::uPtr< ::app::Fuse::Drawing::ImageFill*>(::uAs< ::app::Fuse::Drawing::ImageFill*>(f, ::app::Fuse::Drawing::ImageFill__typeof()))->Opacity());
            __this->_draw_15b596e6.Sampler_1(10, Texture_15b596e6_8_6_1);
            __this->_draw_15b596e6.DrawArrays(::uPtr< ::uArray*>(__this->_vertices)->Length());
        }
    }
    else if (::uIs(f, ::app::Fuse::Drawing::SolidColor__typeof()))
    {
        {
            __this->_draw_15b60b45.BlendEnabled(true);
            __this->_draw_15b60b45.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_15b60b45.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_15b60b45.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_15b60b45.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->BlendMode()));
            __this->_draw_15b60b45.DepthTestEnabled(false);
            __this->_draw_15b60b45.CullFace(::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CullFace());
            __this->_draw_15b60b45.PolygonWinding(0);
            __this->_draw_15b60b45.Use();
            __this->_draw_15b60b45.Attrib(0, 2, __this->_vbo, 8, 0);
            __this->_draw_15b60b45.Uniform_2(1, ctx->Transform());
            __this->_draw_15b60b45.Uniform_5(2, ::app::Uno::Float4__New_5(NULL, ::app::Uno::Float3__op_Multiply_2(NULL, ::app::Uno::Float3__op_Multiply_2(NULL, (ind_129 = ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_129.X, ind_129.Y, ind_129.Z)), ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W), ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity()), ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->Color().W * ::uPtr< ::app::Fuse::Drawing::SolidColor*>(::uAs< ::app::Fuse::Drawing::SolidColor*>(f, ::app::Fuse::Drawing::SolidColor__typeof()))->Opacity()));
            __this->_draw_15b60b45.DrawArrays(::uPtr< ::uArray*>(__this->_vertices)->Length());
        }
    }
    else if (::uIs(f, ::app::Fuse::Drawing::LinearGradient__typeof()))
    {
        ::app::Uno::Float2 angleSlope_15b67fa4_8_17_3 = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()), ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
        float angleLen_15b67fa4_8_16_4 = ::app::Uno::Math__Abs_8(NULL, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CanvasSize().X * ::app::Uno::Math__Cos_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle())) + ::app::Uno::Math__Abs_8(NULL, ::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CanvasSize().Y * ::app::Uno::Math__Sin_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->Angle()));
        {
            __this->_draw_15b67fa4.BlendEnabled(true);
            __this->_draw_15b67fa4.BlendSrcRgb(::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_15b67fa4.BlendSrcAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_15b67fa4.BlendDstRgb(::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_15b67fa4.BlendDstAlpha(::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->BlendMode()));
            __this->_draw_15b67fa4.DepthTestEnabled(false);
            __this->_draw_15b67fa4.CullFace(::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CullFace());
            __this->_draw_15b67fa4.PolygonWinding(0);
            __this->_draw_15b67fa4.Use();
            __this->_draw_15b67fa4.Attrib(0, 2, __this->_vbo, 8, 0);
            __this->_draw_15b67fa4.Uniform_2(1, ctx->Transform());
            __this->_draw_15b67fa4.Uniform_7(2, ctx->CanvasSize());
            __this->_draw_15b67fa4.Uniform_7(3, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? ::app::Uno::Float2__op_Subtraction_2(NULL, ::app::Uno::Float2__op_Division_1(NULL, ctx->CanvasSize(), 2.0f), ::app::Uno::Float2__op_Division_1(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, angleSlope_15b67fa4_8_17_3, angleLen_15b67fa4_8_16_4), 2.0f)) : ::app::Uno::Float2__op_Multiply_1(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint(), ctx->CanvasSize()));
            __this->_draw_15b67fa4.Uniform_7(4, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientStart);
            __this->_draw_15b67fa4.Uniform_8(5, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->Opacity());
            __this->_draw_15b67fa4.Uniform_7(6, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleSlope_15b67fa4_8_17_3 : ::app::Uno::Vector__Normalize(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), ctx->CanvasSize())));
            __this->_draw_15b67fa4.Uniform_8(7, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->HasAngle() ? angleLen_15b67fa4_8_16_4 : ::app::Uno::Vector__Length_2(NULL, ::app::Uno::Float2__op_Multiply_1(NULL, ::app::Uno::Float2__op_Subtraction_2(NULL, ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->EndPoint(), ::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->StartPoint()), ctx->CanvasSize())));
            __this->_draw_15b67fa4.Sampler_1(8, ::uPtr< ::app::Uno::Graphics::Framebuffer*>(::uPtr< ::app::Fuse::Drawing::LinearGradient*>(::uAs< ::app::Fuse::Drawing::LinearGradient*>(f, ::app::Fuse::Drawing::LinearGradient__typeof()))->_gradientBuffer)->ColorBuffer());
            __this->_draw_15b67fa4.DrawArrays(::uPtr< ::uArray*>(__this->_vertices)->Length());
        }
    }
    else if (::uIs(f, ::app::Fuse::Drawing::StaticSolidColor__typeof()))
    {
        {
            __this->_draw_15b60b45.BlendEnabled(true);
            __this->_draw_15b60b45.BlendSrcRgb(__this->Draw_BlendSrcRgb_15b6f403_6_4_5);
            __this->_draw_15b60b45.BlendSrcAlpha(__this->Draw_BlendSrcAlpha_15b6f403_6_6_6);
            __this->_draw_15b60b45.BlendDstRgb(__this->Draw_BlendDstRgb_15b6f403_6_5_7);
            __this->_draw_15b60b45.BlendDstAlpha(__this->Draw_BlendDstAlpha_15b6f403_6_7_8);
            __this->_draw_15b60b45.DepthTestEnabled(false);
            __this->_draw_15b60b45.CullFace(::uPtr< ::app::Fuse::Drawing::RendererContext*>(ctx)->CullFace());
            __this->_draw_15b60b45.PolygonWinding(0);
            __this->_draw_15b60b45.Use();
            __this->_draw_15b60b45.Attrib(0, 2, __this->_vbo, 8, 0);
            __this->_draw_15b60b45.Uniform_2(1, ctx->Transform());
            __this->_draw_15b60b45.Uniform_5(2, ::app::Uno::Float4__New_5(NULL, ::app::Uno::Float3__op_Multiply_2(NULL, (ind_130 = ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(f, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color(), ::app::Uno::Float3__New_2(NULL, ind_130.X, ind_130.Y, ind_130.Z)), ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(f, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W), ::uPtr< ::app::Fuse::Drawing::StaticSolidColor*>(::uAs< ::app::Fuse::Drawing::StaticSolidColor*>(f, ::app::Fuse::Drawing::StaticSolidColor__typeof()))->Color().W));
            __this->_draw_15b60b45.DrawArrays(::uPtr< ::uArray*>(__this->_vertices)->Length());
        }
    }
}

void PolygonDrawable__free_DrawCalls(PolygonDrawable* __this)
{
}

void PolygonDrawable__init_DrawCalls(PolygonDrawable* __this)
{
    __this->Draw_BlendSrcRgb_15b6f403_6_4_5 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcRgb(NULL, 0);
    __this->Draw_BlendSrcAlpha_15b6f403_6_6_6 = ::app::Fuse::Drawing::BlendModeHelpers__GetSrcAlpha(NULL, 0);
    __this->Draw_BlendDstRgb_15b6f403_6_5_7 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstRgb(NULL, 0);
    __this->Draw_BlendDstAlpha_15b6f403_6_7_8 = ::app::Fuse::Drawing::BlendModeHelpers__GetDstAlpha(NULL, 0);
    __this->_draw_15b596e6 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 599), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_15b60b45 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 600), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
    __this->_draw_15b67fa4 = ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New_1(NULL, ::uCast< ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>(::app::Uno::Runtime::Implementation::Internal::BundleRegistry__Get(NULL, 601), ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram__typeof()));
}

bool PolygonDrawable__Intersects(PolygonDrawable* __this, ::app::Uno::Float2 p)
{
    for (int i = 2; i < ::uPtr< ::uArray*>(__this->_vertices)->Length(); i = i + 3)
    {
        if (::app::Uno::Geometry::Collision2D__TriangleContainsPoint(NULL, ::uPtr< ::uArray*>(__this->_vertices)->Item< ::app::Uno::Float2>(i - 2), ::uPtr< ::uArray*>(__this->_vertices)->Item< ::app::Uno::Float2>(i - 1), ::uPtr< ::uArray*>(__this->_vertices)->Item< ::app::Uno::Float2>(i), p))
        {
            return true;
        }
    }

    return false;
}

PolygonDrawable* PolygonDrawable__New_1(::uStatic* __this, ::uArray* vertices)
{
    PolygonDrawable* inst = (PolygonDrawable*)::uAllocObject(sizeof(PolygonDrawable), PolygonDrawable__typeof());
    inst->_ObjInit(vertices);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.10.5/Rendering/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PolygonFiller__uType* PolygonFiller__typeof()
{
    static ::uStaticStrong<PolygonFiller__uType*> type;
    if (type != NULL) return type;

    type = (PolygonFiller__uType*)::uAllocClassType(sizeof(PolygonFiller__uType), "Fuse.Drawing.PolygonFiller", false, 1, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))PolygonFiller__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(PolygonFiller__uType, __interface_0));

    type->SetStrongRefs(
        "_antialiasingBorders", offsetof(PolygonFiller, _antialiasingBorders),
        "_fills", offsetof(PolygonFiller, _fills));

    return type;
}

void PolygonFiller___ObjInit(PolygonFiller* __this, ::app::Fuse::Drawing::Polygon* polygon, int antialiasing, float density)
{
    __this->_density = density;

    if (false && (antialiasing == 1))
    {
        __this->_px = 1.0f / density;
        ::uObject* boundaries = ::uPtr< ::app::Fuse::Drawing::Polygon*>(polygon)->GetBoundaryContours();
        __this->_antialiasingBorders = ::app::Uno::Collections::EnumerableExtensions__ToArray__Fuse_Drawing_Border(NULL, ::app::Uno::Collections::EnumerableExtensions__Select__Fuse_Drawing_Contour__Fuse_Drawing_Border(NULL, boundaries, ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Drawing_Contour__Fuse_Drawing_Border__typeof(), (const void*)PolygonFiller__CreateBorder, __this)));
        __this->_fills = ::app::Uno::Collections::EnumerableExtensions__ToArray__Fuse_Drawing_PolygonDrawable(NULL, ::uPtr< ::app::Fuse::Drawing::Polygon*>(::app::Fuse::Drawing::Polygon__New_1(NULL, ::app::Uno::Collections::EnumerableExtensions__Select__Fuse_Drawing_Border__Fuse_Drawing_Contour(NULL, (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__Fuse_Drawing_Border__New_1(NULL, __this->_antialiasingBorders), ::uNewDelegateNonVirt(::app::Uno::Func__Fuse_Drawing_Border__Fuse_Drawing_Contour__typeof(), (const void*)PolygonFiller__Contour, __this))))->Triangulate());
    }
    else
    {
        __this->_fills = ::app::Uno::Collections::EnumerableExtensions__ToArray__Fuse_Drawing_PolygonDrawable(NULL, ::uPtr< ::app::Fuse::Drawing::Polygon*>(polygon)->Triangulate());
        __this->_antialiasingBorders = ::uNewArray(::app::Fuse::Drawing::Border__typeof(), 0);
    }
}

::app::Uno::Rect PolygonFiller__CalcBounds(PolygonFiller* __this)
{
    if (::uPtr< ::uArray*>(__this->_fills)->Length() == 0)
    {
        return ::app::Uno::Rect__New_1(NULL, 0.0f, 0.0f, 0.0f, 0.0f);
    }

    ::app::Uno::Rect r = ::uPtr< ::app::Fuse::Drawing::PolygonDrawable*>(::uPtr< ::uArray*>(__this->_fills)->Item< ::app::Fuse::Drawing::PolygonDrawable*>(0))->CalcBounds();

    for (int i = 1; i < ::uPtr< ::uArray*>(__this->_fills)->Length(); ++i)
    {
        r = ::app::Uno::Rect__Union(NULL, r, ::uPtr< ::app::Fuse::Drawing::PolygonDrawable*>(::uPtr< ::uArray*>(__this->_fills)->Item< ::app::Fuse::Drawing::PolygonDrawable*>(i))->CalcBounds());
    }

    return r;
}

::app::Fuse::Drawing::Contour* PolygonFiller__Contour(PolygonFiller* __this, ::app::Fuse::Drawing::Border* border)
{
    return ::uPtr< ::app::Fuse::Drawing::Border*>(border)->Contour();
}

::app::Fuse::Drawing::Border* PolygonFiller__CreateBorder(PolygonFiller* __this, ::app::Fuse::Drawing::Contour* contour)
{
    return ::app::Fuse::Drawing::Border__New_1(NULL, ::app::Uno::Collections::EnumerableExtensions__ToArray__float2(NULL, ::uPtr< ::app::Fuse::Drawing::Contour*>(contour)->Vertices()), __this->_px * 0.5f, -__this->_px);
}

void PolygonFiller__Dispose(PolygonFiller* __this)
{
    ::uArray* array_130;
    int index_131 = int();
    int length_132 = int();
    ::uArray* array_133;
    int index_134 = int();
    int length_135 = int();

    for (array_130 = __this->_antialiasingBorders, index_131 = 0, length_132 = ::uPtr< ::uArray*>(array_130)->Length(); index_131 < length_132; ++index_131)
    {
        ::app::Fuse::Drawing::Border* border = ::uPtr< ::uArray*>(array_130)->Item< ::app::Fuse::Drawing::Border*>(index_131);
        ::uPtr< ::app::Fuse::Drawing::Border*>(border)->Dispose();
    }

    for (array_133 = __this->_fills, index_134 = 0, length_135 = ::uPtr< ::uArray*>(array_133)->Length(); index_134 < length_135; ++index_134)
    {
        ::app::Fuse::Drawing::PolygonDrawable* fill = ::uPtr< ::uArray*>(array_133)->Item< ::app::Fuse::Drawing::PolygonDrawable*>(index_134);
        ::uPtr< ::app::Fuse::Drawing::PolygonDrawable*>(fill)->Dispose();
    }
}

void PolygonFiller__Draw(PolygonFiller* __this, ::app::Fuse::Drawing::Brush* f, ::app::Fuse::Drawing::RendererContext* ctx)
{
    ::uArray* array_124;
    int index_125 = int();
    int length_126 = int();
    ::uArray* array_127;
    int index_128 = int();
    int length_129 = int();

    for (array_124 = __this->_antialiasingBorders, index_125 = 0, length_126 = ::uPtr< ::uArray*>(array_124)->Length(); index_125 < length_126; ++index_125)
    {
        ::app::Fuse::Drawing::Border* aa = ::uPtr< ::uArray*>(array_124)->Item< ::app::Fuse::Drawing::Border*>(index_125);
        ::uPtr< ::app::Fuse::Drawing::Border*>(aa)->Draw(f, ctx);
    }

    for (array_127 = __this->_fills, index_128 = 0, length_129 = ::uPtr< ::uArray*>(array_127)->Length(); index_128 < length_129; ++index_128)
    {
        ::app::Fuse::Drawing::PolygonDrawable* fill = ::uPtr< ::uArray*>(array_127)->Item< ::app::Fuse::Drawing::PolygonDrawable*>(index_128);
        ::uPtr< ::app::Fuse::Drawing::PolygonDrawable*>(fill)->Draw(f, ctx);
    }
}

::app::Uno::Rect PolygonFiller__get_Bounds(PolygonFiller* __this)
{
    if (__this->_hasBounds)
    {
        return __this->_bounds;
    }

    __this->_bounds = __this->CalcBounds();
    __this->_hasBounds = true;
    return __this->_bounds;
}

bool PolygonFiller__Intersects(PolygonFiller* __this, ::app::Uno::Float2 p)
{
    ::uArray* array_136;
    int index_137 = int();
    int length_138 = int();

    for (array_136 = __this->_fills, index_137 = 0, length_138 = ::uPtr< ::uArray*>(array_136)->Length(); index_137 < length_138; ++index_137)
    {
        ::app::Fuse::Drawing::PolygonDrawable* fill = ::uPtr< ::uArray*>(array_136)->Item< ::app::Fuse::Drawing::PolygonDrawable*>(index_137);

        if (::uPtr< ::app::Fuse::Drawing::PolygonDrawable*>(fill)->Intersects(p))
        {
            return true;
        }
    }

    return false;
}

PolygonFiller* PolygonFiller__New_1(::uStatic* __this, ::app::Fuse::Drawing::Polygon* polygon, int antialiasing, float density)
{
    PolygonFiller* inst = (PolygonFiller*)::uAllocObject(sizeof(PolygonFiller), PolygonFiller__typeof());
    inst->_ObjInit(polygon, antialiasing, density);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RegularPolygonFactory__uType* RegularPolygonFactory__typeof()
{
    static ::uStaticStrong<RegularPolygonFactory__uType*> type;
    if (type != NULL) return type;

    type = (RegularPolygonFactory__uType*)::uAllocClassType(sizeof(RegularPolygonFactory__uType), "Fuse.Drawing.RegularPolygonFactory");

    return type;
}

::app::Fuse::Drawing::PathGeometry* RegularPolygonFactory__AppendTo(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, int Sides, float Radius)
{
    float t = -6.28318548f / (float)Sides;
    ::app::Uno::Float2 c = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(self)->EndPosition();
    ::app::Fuse::Drawing::PathGeometry* g = self->MoveTo(c.X, c.Y - Radius);

    for (int i = 1; i < Sides; i++)
    {
        g = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(g)->LineTo(c.X + (::app::Uno::Math__Sin_1(NULL, t * (float)i) * Radius), c.Y - (::app::Uno::Math__Cos_1(NULL, t * (float)i) * Radius));
    }

    g = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(g)->ClosePath();
    return g;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.10.5/Rendering/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RendererContext__uType* RendererContext__typeof()
{
    static ::uStaticStrong<RendererContext__uType*> type;
    if (type != NULL) return type;

    type = (RendererContext__uType*)::uAllocClassType(sizeof(RendererContext__uType), "Fuse.Drawing.RendererContext", false, 0, 0, 0);

    return type;
}

void RendererContext___ObjInit(RendererContext* __this)
{
}

::app::Uno::Float2 RendererContext__get_CanvasSize(RendererContext* __this)
{
    return __this->_CanvasSize;
}

int RendererContext__get_CullFace(RendererContext* __this)
{
    return __this->_CullFace;
}

float RendererContext__get_Density(RendererContext* __this)
{
    return __this->_Density;
}

::app::Uno::Float4x4 RendererContext__get_Transform(RendererContext* __this)
{
    return __this->_Transform;
}

RendererContext* RendererContext__New_1(::uStatic* __this)
{
    RendererContext* inst = (RendererContext*)::uAllocObject(sizeof(RendererContext), RendererContext__typeof());
    inst->_ObjInit();
    return inst;
}

void RendererContext__set_CanvasSize(RendererContext* __this, ::app::Uno::Float2 value)
{
    __this->_CanvasSize = value;
}

void RendererContext__set_CullFace(RendererContext* __this, int value)
{
    __this->_CullFace = value;
}

void RendererContext__set_Density(RendererContext* __this, float value)
{
    __this->_Density = value;
}

void RendererContext__set_Transform(RendererContext* __this, ::app::Uno::Float4x4 value)
{
    __this->_Transform = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* ResampleMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Drawing.ResampleMode", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Nearest", 0LL,
        "Linear", 1LL,
        "Mipmap", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RoundCap__uType* RoundCap__typeof()
{
    static ::uStaticStrong<RoundCap__uType*> type;
    if (type != NULL) return type;

    type = (RoundCap__uType*)::uAllocClassType(sizeof(RoundCap__uType), "Fuse.Drawing.RoundCap", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::LineCapImpl__typeof());
    type->__fp_Create = (::uObject*(*)(::app::Fuse::Drawing::LineCapImpl*, ::app::Uno::Float2, ::app::Uno::Float2))RoundCap__Create;

    return type;
}

void RoundCap___ObjInit_1(RoundCap* __this)
{
    ::app::Fuse::Drawing::LineCapImpl___ObjInit(__this);
}

::uObject* RoundCap__Create(RoundCap* __this, ::app::Uno::Float2 from, ::app::Uno::Float2 to)
{
    int steps = 20;
    ::uArray* verts = ::uNewArray(::app::Uno::Float2__typeof(), 18);
    ::app::Uno::Float2 center = ::app::Uno::Math__Lerp_6(NULL, from, to, 0.5f);
    ::app::Uno::Float2 u = ::app::Uno::Float2__op_Subtraction_2(NULL, from, center);
    ::app::Uno::Float2 v = ::app::Uno::Float2__New_2(NULL, u.Y, -u.X);
    ::app::Uno::Float2x2 matrix = ::app::Uno::Float2x2__New_1(NULL, u, v);

    for (int i = 1; i < 19; i++)
    {
        float f = (float)i / 20.0f;
        float r = (float)((double)f * 3.1415926535897931);
        ::app::Uno::Float2 rainbow = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, r), ::app::Uno::Math__Sin_1(NULL, r));
        ::uPtr< ::uArray*>(verts)->Item< ::app::Uno::Float2>(i - 1) = ::app::Uno::Float2__op_Addition_2(NULL, center, ::app::Uno::Vector__Transform_4(NULL, rainbow, matrix));
    }

    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerable__float2__New_1(NULL, verts);
}

RoundCap* RoundCap__New_1(::uStatic* __this)
{
    RoundCap* inst = (RoundCap*)::uAllocObject(sizeof(RoundCap), RoundCap__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SmoothCurveTo__uType* SmoothCurveTo__typeof()
{
    static ::uStaticStrong<SmoothCurveTo__uType*> type;
    if (type != NULL) return type;

    type = (SmoothCurveTo__uType*)::uAllocClassType(sizeof(SmoothCurveTo__uType), "Fuse.Drawing.SmoothCurveTo", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::CurveTo__typeof());
    type->__fp_Serialize = (::uString*(*)(::app::Fuse::Drawing::PathGeometry*))SmoothCurveTo__Serialize;

    return type;
}

void SmoothCurveTo___ObjInit_3(SmoothCurveTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 lastTangent, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position)
{
    ::app::Fuse::Drawing::CurveTo___ObjInit_2(__this);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, lastPosition);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, lastTangent);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, controlPointEnd);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, position);
    __this->CurveToCtor(prev, ::app::Uno::Float2__New_2(NULL, lastPosition.X, lastPosition.Y), ::app::Uno::Float2__op_Addition_2(NULL, lastPosition, lastTangent), ::app::Uno::Float2__New_2(NULL, controlPointEnd.X, controlPointEnd.Y), ::app::Uno::Float2__New_2(NULL, position.X, position.Y));
}

SmoothCurveTo* SmoothCurveTo__New_4(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, ::app::Uno::Float2 lastTangent, ::app::Uno::Float2 controlPointEnd, ::app::Uno::Float2 position)
{
    SmoothCurveTo* inst = (SmoothCurveTo*)::uAllocObject(sizeof(SmoothCurveTo), SmoothCurveTo__typeof());
    inst->_ObjInit_3(prev, lastPosition, lastTangent, controlPointEnd, position);
    return inst;
}

::uString* SmoothCurveTo__Serialize(SmoothCurveTo* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("S "), ::uBox(::app::Uno::Float__typeof(), __this->ControlPointEnd().X)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->ControlPointEnd().Y)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().X)), ::uGetConstString(" ")), ::uBox(::app::Uno::Float__typeof(), __this->EndPosition().Y));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/Brushes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SolidColor__uType* SolidColor__typeof()
{
    static ::uStaticStrong<SolidColor__uType*> type;
    if (type != NULL) return type;

    type = (SolidColor__uType*)::uAllocClassType(sizeof(SolidColor__uType), "Fuse.Drawing.SolidColor", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::DynamicBrush__typeof());
    type->__fp_get_IsCompletelyTransparent = (bool(*)(::app::Fuse::Drawing::Brush*))SolidColor__get_IsCompletelyTransparent;

    return type;
}

void SolidColor___ObjInit_2(SolidColor* __this)
{
    ::app::Fuse::Drawing::DynamicBrush___ObjInit_1(__this);
    __this->_color = ::app::Uno::Float4__New_3(NULL, 1.0f);
}

::app::Uno::Float4 SolidColor__get_Color(SolidColor* __this)
{
    return __this->_color;
}

bool SolidColor__get_IsCompletelyTransparent(SolidColor* __this)
{
    return ::app::Fuse::Drawing::DynamicBrush__get_IsCompletelyTransparent(__this) || (__this->Color().W == 0.0f);
}

SolidColor* SolidColor__New_1(::uStatic* __this)
{
    SolidColor* inst = (SolidColor*)::uAllocObject(sizeof(SolidColor), SolidColor__typeof());
    inst->_ObjInit_2();
    return inst;
}

void SolidColor__set_Color(SolidColor* __this, ::app::Uno::Float4 value)
{
    if (::app::Uno::Float4__op_Inequality(NULL, __this->_color, value))
    {
        __this->_color = value;
        __this->OnShadingChanged();
    }
}

void SolidColor__SetColor(SolidColor* __this, ::app::Uno::Float4 c)
{
    __this->Color(c);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StarFactory__uType* StarFactory__typeof()
{
    static ::uStaticStrong<StarFactory__uType*> type;
    if (type != NULL) return type;

    type = (StarFactory__uType*)::uAllocClassType(sizeof(StarFactory__uType), "Fuse.Drawing.StarFactory");

    return type;
}

::app::Fuse::Drawing::PathGeometry* StarFactory__AppendTo(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* self, int Points, float Radius, float spokeRadius, float cornerRatio, float rotation)
{
    float t = -6.28318548f / (float)(Points * 2);
    ::app::Uno::Float2 c = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(self)->EndPosition();
    ::app::Fuse::Drawing::PathGeometry* g = self;
    int count = (Points * 2) - 1;

    for (int i = 0; i < count; i++)
    {
        ::app::Uno::Float2 radius = ((i % 2) == 0) ? ::app::Uno::Float2__New_2(NULL, Radius, spokeRadius) : ::app::Uno::Float2__New_2(NULL, spokeRadius, Radius);
        ::app::Uno::Float2 pa = ::app::Uno::Float2__New_2(NULL, c.X + (::app::Uno::Math__Sin_1(NULL, (t * (float)i) + rotation) * radius.Item(0)), c.Y - (::app::Uno::Math__Cos_1(NULL, (t * (float)i) + rotation) * radius.Item(0)));
        ::app::Uno::Float2 pb = ::app::Uno::Float2__New_2(NULL, c.X + (::app::Uno::Math__Sin_1(NULL, (t * (float)(i + 1)) + rotation) * radius.Item(1)), c.Y - (::app::Uno::Math__Cos_1(NULL, (t * (float)(i + 1)) + rotation) * radius.Item(1)));

        if (i == 0)
        {
            g = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(g)->MoveTo_1(pa);
        }

        if (cornerRatio > 1e-05f)
        {
            ::app::Uno::Float2 na = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, (t * (float)i) + rotation), ::app::Uno::Math__Sin_1(NULL, (t * (float)i) + rotation));
            ::app::Uno::Float2 nb = ::app::Uno::Float2__New_2(NULL, ::app::Uno::Math__Cos_1(NULL, (t * (float)(i + 1)) + rotation), ::app::Uno::Math__Sin_1(NULL, (t * (float)(i + 1)) + rotation));
            g = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(g)->CurveTo(::app::Uno::Float2__op_Subtraction_2(NULL, pa, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, na, cornerRatio), radius.Item(0))), ::app::Uno::Float2__op_Addition_2(NULL, pb, ::app::Uno::Float2__op_Multiply_2(NULL, ::app::Uno::Float2__op_Multiply_2(NULL, nb, cornerRatio), radius.Item(1))), pb);
        }
        else
        {
            g = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(g)->LineTo_1(pb);
        }
    }

    g = ::uPtr< ::app::Fuse::Drawing::PathGeometry*>(g)->ClosePath();
    return g;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StaticBrush__uType* StaticBrush__typeof()
{
    static ::uStaticStrong<StaticBrush__uType*> type;
    if (type != NULL) return type;

    type = (StaticBrush__uType*)::uAllocClassType(sizeof(StaticBrush__uType), "Fuse.Drawing.StaticBrush", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Brush__typeof());

    return type;
}

void StaticBrush___ObjInit_1(StaticBrush* __this)
{
    ::app::Fuse::Drawing::Brush___ObjInit(__this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/Brushes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

StaticSolidColor__uType* StaticSolidColor__typeof()
{
    static ::uStaticStrong<StaticSolidColor__uType*> type;
    if (type != NULL) return type;

    type = (StaticSolidColor__uType*)::uAllocClassType(sizeof(StaticSolidColor__uType), "Fuse.Drawing.StaticSolidColor", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::StaticBrush__typeof());
    type->__fp_get_IsCompletelyTransparent = (bool(*)(::app::Fuse::Drawing::Brush*))StaticSolidColor__get_IsCompletelyTransparent;

    return type;
}

void StaticSolidColor___ObjInit_2(StaticSolidColor* __this, ::app::Uno::Float4 color)
{
    ::app::Fuse::Drawing::StaticBrush___ObjInit_1(__this);
    __this->_color = color;
}

::app::Uno::Float4 StaticSolidColor__get_Color(StaticSolidColor* __this)
{
    return __this->_color;
}

bool StaticSolidColor__get_IsCompletelyTransparent(StaticSolidColor* __this)
{
    return ::app::Fuse::Drawing::Brush__get_IsCompletelyTransparent(__this) || (__this->Color().W == 0.0f);
}

StaticSolidColor* StaticSolidColor__New_1(::uStatic* __this, ::app::Uno::Float4 color)
{
    StaticSolidColor* inst = (StaticSolidColor*)::uAllocObject(sizeof(StaticSolidColor), StaticSolidColor__typeof());
    inst->_ObjInit_2(color);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Stroke__uType* Stroke__typeof()
{
    static ::uStaticStrong<Stroke__uType*> type;
    if (type != NULL) return type;

    type = (Stroke__uType*)::uAllocClassType(sizeof(Stroke__uType), "Fuse.Drawing.Stroke", false, 0, 3, 0);

    type->SetStrongRefs(
        "_brush", offsetof(Stroke, _brush),
        "ShadingChanged", offsetof(Stroke, ShadingChanged),
        "StrokeChanged", offsetof(Stroke, StrokeChanged));

    return type;
}

void Stroke___ObjInit(Stroke* __this)
{
    __this->_width = 1.0f;
    __this->_adjustment = 2;
    __this->_alignment = 1;
}

void Stroke__add_ShadingChanged(Stroke* __this, ::uDelegate* value)
{
    __this->ShadingChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->ShadingChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

void Stroke__add_StrokeChanged(Stroke* __this, ::uDelegate* value)
{
    __this->StrokeChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->StrokeChanged, (::uDelegate*)value), ::app::Uno::Action__Fuse_Drawing_Stroke__typeof());
}

float Stroke__Adjust(Stroke* __this, float w, float ppi)
{
    w = __this->AdjustPosition(w, ppi);
    w = ::app::Uno::Math__Max_8(NULL, w, 1.0f / ppi);
    return w;
}

float Stroke__AdjustPosition(Stroke* __this, float w, float ppi)
{
    switch (__this->Adjustment())
    {
        case 0:
        {
            return w;
        }
        case 1:
        {
            w = ::app::Uno::Math__Ceil_1(NULL, w * ppi) / ppi;
            break;
        }
        case 2:
        {
            w = ::app::Uno::Math__Floor_1(NULL, (w * ppi) + 0.5f) / ppi;
            break;
        }
        case 3:
        {
            w = ::app::Uno::Math__Floor_1(NULL, w * ppi) / ppi;
            break;
        }
    }

    return w;
}

int Stroke__get_Adjustment(Stroke* __this)
{
    return __this->_adjustment;
}

int Stroke__get_Alignment(Stroke* __this)
{
    return __this->_alignment;
}

::app::Fuse::Drawing::Brush* Stroke__get_Brush(Stroke* __this)
{
    return __this->_brush;
}

bool Stroke__get_IsPinned(Stroke* __this)
{
    return __this->_pinCount > 0;
}

int Stroke__get_LineCap(Stroke* __this)
{
    return __this->_lineCap;
}

float Stroke__get_Offset(Stroke* __this)
{
    return __this->_offset;
}

float Stroke__get_Width(Stroke* __this)
{
    return __this->_width;
}

::app::Uno::Float2 Stroke__GetDeviceAdjusted(Stroke* __this, float ppi)
{
    float lo = 0.0f;
    float hi = 0.0f;

    switch (__this->Alignment())
    {
        case 2:
        {
            lo = ::app::Uno::Math__Ceil_1(NULL, (__this->_offset - 0.5f) * ppi) / ppi;
            hi = lo + __this->Adjust(__this->_width, ppi);
            break;
        }
        case 1:
        {
            hi = ::app::Uno::Math__Floor_1(NULL, (__this->_offset + 0.5f) * ppi) / ppi;
            lo = hi - __this->Adjust(__this->_width, ppi);
            break;
        }
        case 0:
        {
            lo = __this->AdjustPosition(__this->_offset - (__this->_width / 2.0f), ppi);
            hi = lo + __this->Adjust(__this->_width, ppi);
            break;
        }
    }

    ::app::Uno::Float2 r = ::app::Uno::Float2__New_2(NULL, hi - lo, (hi + lo) / 2.0f);
    return r;
}

Stroke* Stroke__New_1(::uStatic* __this)
{
    Stroke* inst = (Stroke*)::uAllocObject(sizeof(Stroke), Stroke__typeof());
    inst->_ObjInit();
    return inst;
}

void Stroke__OnPinned(Stroke* __this)
{
    if (__this->Brush() != NULL)
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(__this->Brush())->Pin();
    }
}

void Stroke__OnShadingChanged(Stroke* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->ShadingChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->ShadingChanged)->InvokeVoid();
    }
}

void Stroke__OnStrokeChanged(Stroke* __this)
{
    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)__this->StrokeChanged, NULL))
    {
        ::uPtr< ::uDelegate*>(__this->StrokeChanged)->InvokeVoid< Stroke*>(__this);
    }
}

void Stroke__OnUnpinned(Stroke* __this)
{
    if (__this->Brush() != NULL)
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(__this->Brush())->Unpin();
    }
}

void Stroke__Pin(Stroke* __this)
{
    __this->_pinCount++;

    if (__this->_pinCount == 1)
    {
        __this->OnPinned();
    }
}

void Stroke__Prepare(Stroke* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float2 canvasSize)
{
    if (__this->Brush() != NULL)
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(__this->Brush())->Prepare(dc, canvasSize);
    }
}

void Stroke__remove_ShadingChanged(Stroke* __this, ::uDelegate* value)
{
    __this->ShadingChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->ShadingChanged, (::uDelegate*)value), ::app::Uno::Action__typeof());
}

void Stroke__remove_StrokeChanged(Stroke* __this, ::uDelegate* value)
{
    __this->StrokeChanged = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Remove(NULL, (::uDelegate*)__this->StrokeChanged, (::uDelegate*)value), ::app::Uno::Action__Fuse_Drawing_Stroke__typeof());
}

void Stroke__set_Adjustment(Stroke* __this, int value)
{
    if (__this->_adjustment != value)
    {
        __this->_adjustment = value;
        __this->OnStrokeChanged();
    }
}

void Stroke__set_Alignment(Stroke* __this, int value)
{
    if (__this->_alignment != value)
    {
        __this->_alignment = value;
        __this->OnStrokeChanged();
    }
}

void Stroke__set_Brush(Stroke* __this, ::app::Fuse::Drawing::Brush* value)
{
    if (value == __this->_brush)
    {
        return;
    }

    if (__this->IsPinned())
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(__this->_brush)->Unpin();
    }

    if (::uIs(__this->_brush, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(__this->_brush, ::app::Fuse::Drawing::DynamicBrush__typeof()))->remove_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Stroke__OnShadingChanged, __this));
    }

    __this->_brush = value;

    if (::uIs(__this->_brush, ::app::Fuse::Drawing::DynamicBrush__typeof()))
    {
        ::uPtr< ::app::Fuse::Drawing::DynamicBrush*>(::uCast< ::app::Fuse::Drawing::DynamicBrush*>(__this->_brush, ::app::Fuse::Drawing::DynamicBrush__typeof()))->add_ShadingChanged(::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)Stroke__OnShadingChanged, __this));
    }

    if (__this->IsPinned())
    {
        ::uPtr< ::app::Fuse::Drawing::Brush*>(__this->_brush)->Pin();
    }

    __this->OnShadingChanged();
}

void Stroke__set_LineCap(Stroke* __this, int value)
{
    if (value == __this->_lineCap)
    {
        return;
    }

    __this->_lineCap = value;
    __this->OnStrokeChanged();
}

void Stroke__set_Offset(Stroke* __this, float value)
{
    __this->_offset = value;
    __this->OnStrokeChanged();
}

void Stroke__set_Width(Stroke* __this, float value)
{
    __this->_width = value;
    __this->OnStrokeChanged();
}

void Stroke__Unpin(Stroke* __this)
{
    __this->_pinCount--;

    if (__this->_pinCount == 0)
    {
        __this->OnUnpinned();
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* StrokeAdjustment__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Drawing.StrokeAdjustment", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "None", 0LL,
        "PixelCeil", 1LL,
        "PixelNear", 2LL,
        "PixelFloor", 3LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* StrokeAlignment__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Fuse.Drawing.StrokeAlignment", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Center", 0LL,
        "Inside", 1LL,
        "Outside", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Token__uType* Token__typeof()
{
    static ::uStaticStrong<Token__uType*> type;
    if (type != NULL) return type;

    type = (Token__uType*)::uAllocClassType(sizeof(Token__uType), "Fuse.Drawing.Token", false, 0, 1, 0);

    type->SetStrongRefs(
        "Next", offsetof(Token, Next));

    return type;
}

void Token___ObjInit(Token* __this, int first, bool hasAction)
{
    __this->First = first;
    __this->HasAction = hasAction;
}

Token* Token__New_1(::uStatic* __this, int first, bool hasAction)
{
    Token* inst = (Token*)::uAllocObject(sizeof(Token), Token__typeof());
    inst->_ObjInit(first, hasAction);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Util__uType* Util__typeof()
{
    static ::uStaticStrong<Util__uType*> type;
    if (type != NULL) return type;

    type = (Util__uType*)::uAllocClassType(sizeof(Util__uType), "Fuse.Drawing.Util", false, 0, 0, 0);

    return type;
}

void Util__ValidateFloat(::uStatic* __this, float v)
{
    if (v != v)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("NaN in path data!")));
    }

    if (v >= 1e+18f)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Too large path coordinate!")));
    }
}

void Util__ValidateFloat2(::uStatic* __this, ::app::Uno::Float2 v)
{
    Util__ValidateFloat(NULL, v.X);
    Util__ValidateFloat(NULL, v.Y);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Paths/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

VerticalLineTo__uType* VerticalLineTo__typeof()
{
    static ::uStaticStrong<VerticalLineTo__uType*> type;
    if (type != NULL) return type;

    type = (VerticalLineTo__uType*)::uAllocClassType(sizeof(VerticalLineTo__uType), "Fuse.Drawing.VerticalLineTo", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::LineTo__typeof());
    type->__fp_Serialize = (::uString*(*)(::app::Fuse::Drawing::PathGeometry*))VerticalLineTo__Serialize;

    return type;
}

void VerticalLineTo___ObjInit_3(VerticalLineTo* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, float y)
{
    ::app::Fuse::Drawing::LineTo___ObjInit_2(__this);
    ::app::Fuse::Drawing::Util__ValidateFloat2(NULL, lastPosition);
    ::app::Fuse::Drawing::Util__ValidateFloat(NULL, y);
    __this->LineToCtor(prev, lastPosition, ::app::Uno::Float2__New_2(NULL, lastPosition.X, y));
    __this->_y = y;
}

VerticalLineTo* VerticalLineTo__New_4(::uStatic* __this, ::app::Fuse::Drawing::PathGeometry* prev, ::app::Uno::Float2 lastPosition, float y)
{
    VerticalLineTo* inst = (VerticalLineTo*)::uAllocObject(sizeof(VerticalLineTo), VerticalLineTo__typeof());
    inst->_ObjInit_3(prev, lastPosition, y);
    return inst;
}

::uString* VerticalLineTo__Serialize(VerticalLineTo* __this)
{
    return ::app::Uno::String__op_Addition(NULL, ::uGetConstString("V "), ::uBox(::app::Uno::Float__typeof(), __this->_y));
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WindingRules__uType* WindingRules__typeof()
{
    static ::uStaticStrong<WindingRules__uType*> type;
    if (type != NULL) return type;

    type = (WindingRules__uType*)::uAllocClassType(sizeof(WindingRules__uType), "Fuse.Drawing.WindingRules");

    return type;
}

bool WindingRules__NonZero(::uStatic* __this, int n)
{
    return n != 0;
}

bool WindingRules__Odd(::uStatic* __this, int n)
{
    return (n & 1) != 0;
}

}}}
