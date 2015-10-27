#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Float.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Float4x4.h>
#include <app/Uno.Geometry.Box.h>
#include <app/Uno.Geometry.Collision.h>
#include <app/Uno.Geometry.Collision2D.h>
#include <app/Uno.Geometry.CubicBezier.h>
#include <app/Uno.Geometry.Ray.h>
#include <app/Uno.Geometry.Vertex.h>
#include <app/Uno.Geometry.VertexEnumerable.h>
#include <app/Uno.Geometry.VertexEnumerator.h>
#include <app/Uno.Int.h>
#include <app/Uno.Math.h>
#include <app/Uno.Vector.h>

namespace app {
namespace Uno {
namespace Geometry {

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Geometry/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Box__uType* Box__typeof()
{
    static ::uStaticStrong<Box__uType*> type;
    if (type != NULL) return type;

    type = (Box__uType*)::uAllocStructType(sizeof(Box__uType), "Uno.Geometry.Box", sizeof(Box), 0, 0, 0);

    return type;
}

void Box___ObjInit(Box* __this, ::app::Uno::Float3 min, ::app::Uno::Float3 max)
{
    __this->Minimum = min;
    __this->Maximum = max;
}

::app::Uno::Float3 Box__get_Center(Box* __this)
{
    return ::app::Uno::Float3__op_Multiply_2(NULL, ::app::Uno::Float3__op_Addition_2(NULL, __this->Minimum, __this->Maximum), 0.5f);
}

Box Box__New_1(::uStatic* __this, ::app::Uno::Float3 min, ::app::Uno::Float3 max)
{
    Box inst = ::uDefault< Box>();
    inst._ObjInit(min, max);
    return inst;
}

Box Box__Transform(::uStatic* __this, Box box, ::app::Uno::Float4x4 transform)
{
    ::app::Uno::Float4 ind_123 = ::app::Uno::Vector__Transform_3(NULL, ::app::Uno::Float4__New_2(NULL, box.Minimum.X, box.Minimum.Y, box.Minimum.Z, 1.0f), transform);
    ::app::Uno::Float3 A = ::app::Uno::Float3__New_2(NULL, ind_123.X, ind_123.Y, ind_123.Z);
    ::app::Uno::Float4 ind_124 = ::app::Uno::Vector__Transform_3(NULL, ::app::Uno::Float4__New_2(NULL, box.Maximum.X, box.Minimum.Y, box.Minimum.Z, 1.0f), transform);
    ::app::Uno::Float3 B = ::app::Uno::Float3__New_2(NULL, ind_124.X, ind_124.Y, ind_124.Z);
    ::app::Uno::Float4 ind_125 = ::app::Uno::Vector__Transform_3(NULL, ::app::Uno::Float4__New_2(NULL, box.Maximum.X, box.Maximum.Y, box.Minimum.Z, 1.0f), transform);
    ::app::Uno::Float3 C = ::app::Uno::Float3__New_2(NULL, ind_125.X, ind_125.Y, ind_125.Z);
    ::app::Uno::Float4 ind_126 = ::app::Uno::Vector__Transform_3(NULL, ::app::Uno::Float4__New_2(NULL, box.Minimum.X, box.Maximum.Y, box.Minimum.Z, 1.0f), transform);
    ::app::Uno::Float3 D = ::app::Uno::Float3__New_2(NULL, ind_126.X, ind_126.Y, ind_126.Z);
    ::app::Uno::Float4 ind_127 = ::app::Uno::Vector__Transform_3(NULL, ::app::Uno::Float4__New_2(NULL, box.Minimum.X, box.Minimum.Y, box.Maximum.Z, 1.0f), transform);
    ::app::Uno::Float3 E = ::app::Uno::Float3__New_2(NULL, ind_127.X, ind_127.Y, ind_127.Z);
    ::app::Uno::Float4 ind_128 = ::app::Uno::Vector__Transform_3(NULL, ::app::Uno::Float4__New_2(NULL, box.Maximum.X, box.Minimum.Y, box.Maximum.Z, 1.0f), transform);
    ::app::Uno::Float3 F = ::app::Uno::Float3__New_2(NULL, ind_128.X, ind_128.Y, ind_128.Z);
    ::app::Uno::Float4 ind_129 = ::app::Uno::Vector__Transform_3(NULL, ::app::Uno::Float4__New_2(NULL, box.Maximum.X, box.Maximum.Y, box.Maximum.Z, 1.0f), transform);
    ::app::Uno::Float3 G = ::app::Uno::Float3__New_2(NULL, ind_129.X, ind_129.Y, ind_129.Z);
    ::app::Uno::Float4 ind_130 = ::app::Uno::Vector__Transform_3(NULL, ::app::Uno::Float4__New_2(NULL, box.Minimum.X, box.Maximum.Y, box.Maximum.Z, 1.0f), transform);
    ::app::Uno::Float3 H = ::app::Uno::Float3__New_2(NULL, ind_130.X, ind_130.Y, ind_130.Z);
    return Box__New_1(NULL, ::app::Uno::Math__Min_9(NULL, ::app::Uno::Math__Min_9(NULL, ::app::Uno::Math__Min_9(NULL, ::app::Uno::Math__Min_9(NULL, ::app::Uno::Math__Min_9(NULL, ::app::Uno::Math__Min_9(NULL, ::app::Uno::Math__Min_9(NULL, A, B), C), D), E), F), G), H), ::app::Uno::Math__Max_6(NULL, ::app::Uno::Math__Max_6(NULL, ::app::Uno::Math__Max_6(NULL, ::app::Uno::Math__Max_6(NULL, ::app::Uno::Math__Max_6(NULL, ::app::Uno::Math__Max_6(NULL, ::app::Uno::Math__Max_6(NULL, A, B), C), D), E), F), G), H));
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Geometry/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Collision__uType* Collision__typeof()
{
    static ::uStaticStrong<Collision__uType*> type;
    if (type != NULL) return type;

    type = (Collision__uType*)::uAllocClassType(sizeof(Collision__uType), "Uno.Geometry.Collision");

    return type;
}

bool Collision__RayIntersectsBox_1(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Box box, float* distance)
{
    *distance = 0.0f;
    float tmax = 3.402823e+38f;

    if (::app::Uno::Math__Abs_8(NULL, ray.Direction.X) < 1e-05f)
    {
        if ((ray.Position.X < box.Minimum.X) || (ray.Position.X > box.Maximum.X))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else
    {
        float inverse = 1.0f / ray.Direction.X;
        float t1 = (box.Minimum.X - ray.Position.X) * inverse;
        float t2 = (box.Maximum.X - ray.Position.X) * inverse;

        if (t1 > t2)
        {
            float temp = t1;
            t1 = t2;
            t2 = temp;
        }

        *distance = ::app::Uno::Math__Max_8(NULL, t1, *distance);
        tmax = ::app::Uno::Math__Min_11(NULL, t2, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    if (::app::Uno::Math__Abs_8(NULL, ray.Direction.Y) < 1e-05f)
    {
        if ((ray.Position.Y < box.Minimum.Y) || (ray.Position.Y > box.Maximum.Y))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else
    {
        float inverse = 1.0f / ray.Direction.Y;
        float t1 = (box.Minimum.Y - ray.Position.Y) * inverse;
        float t2 = (box.Maximum.Y - ray.Position.Y) * inverse;

        if (t1 > t2)
        {
            float temp = t1;
            t1 = t2;
            t2 = temp;
        }

        *distance = ::app::Uno::Math__Max_8(NULL, t1, *distance);
        tmax = ::app::Uno::Math__Min_11(NULL, t2, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    if (::app::Uno::Math__Abs_8(NULL, ray.Direction.Z) < 1e-05f)
    {
        if ((ray.Position.Z < box.Minimum.Z) || (ray.Position.Z > box.Maximum.Z))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else
    {
        float inverse = 1.0f / ray.Direction.Z;
        float t1 = (box.Minimum.Z - ray.Position.Z) * inverse;
        float t2 = (box.Maximum.Z - ray.Position.Z) * inverse;

        if (t1 > t2)
        {
            float temp = t1;
            t1 = t2;
            t2 = temp;
        }

        *distance = ::app::Uno::Math__Max_8(NULL, t1, *distance);
        tmax = ::app::Uno::Math__Min_11(NULL, t2, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    return true;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Geometry/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Collision2D__uType* Collision2D__typeof()
{
    static ::uStaticStrong<Collision2D__uType*> type;
    if (type != NULL) return type;

    type = (Collision2D__uType*)::uAllocClassType(sizeof(Collision2D__uType), "Uno.Geometry.Collision2D");

    return type;
}

float Collision2D__AngleBetween(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b)
{
    float d = ::app::Uno::Vector__Dot_2(NULL, a, b);
    float l = ::app::Uno::Vector__Length_2(NULL, a) * ::app::Uno::Vector__Length_2(NULL, b);

    if (l < 1e-05f)
    {
        return 0.0f;
    }

    return ::app::Uno::Math__Acos(NULL, d / l);
}

::app::Uno::Float2 Collision2D__LineIntersectionPointVector(::uStatic* __this, ::app::Uno::Float2 ps1, ::app::Uno::Float2 v1, ::app::Uno::Float2 ps2, ::app::Uno::Float2 v2)
{
    float A1 = v1.Y;
    float B1 = -v1.X;
    float C1 = (A1 * ps1.X) + (B1 * ps1.Y);
    float A2 = v2.Y;
    float B2 = -v2.X;
    float C2 = (A2 * ps2.X) + (B2 * ps2.Y);
    float delta = (A1 * B2) - (A2 * B1);

    if (::app::Uno::Math__Abs_8(NULL, delta) < 1e-05f)
    {
        return ps1;
    }

    return ::app::Uno::Float2__New_2(NULL, ((B2 * C1) - (B1 * C2)) / delta, ((A1 * C2) - (A2 * C1)) / delta);
}

bool Collision2D__TriangleContainsPoint(::uStatic* __this, ::app::Uno::Float2 A, ::app::Uno::Float2 B, ::app::Uno::Float2 C, ::app::Uno::Float2 P)
{
    ::app::Uno::Float2 v0 = ::app::Uno::Float2__op_Subtraction_2(NULL, C, A);
    ::app::Uno::Float2 v1 = ::app::Uno::Float2__op_Subtraction_2(NULL, B, A);
    ::app::Uno::Float2 v2 = ::app::Uno::Float2__op_Subtraction_2(NULL, P, A);
    float dot00 = ::app::Uno::Vector__Dot_2(NULL, v0, v0);
    float dot01 = ::app::Uno::Vector__Dot_2(NULL, v0, v1);
    float dot02 = ::app::Uno::Vector__Dot_2(NULL, v0, v2);
    float dot11 = ::app::Uno::Vector__Dot_2(NULL, v1, v1);
    float dot12 = ::app::Uno::Vector__Dot_2(NULL, v1, v2);
    float denom = (dot00 * dot11) - (dot01 * dot01);

    if (denom < 1e-05f)
    {
        return false;
    }

    float invDenom = 1.0f / denom;
    float u = ((dot11 * dot02) - (dot01 * dot12)) * invDenom;
    float v = ((dot00 * dot12) - (dot01 * dot02)) * invDenom;
    bool r = ((u >= 0.0f) && (v >= 0.0f)) && ((u + v) < 1.0f);
    return r;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Geometry/0.12.1/Curves/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

CubicBezier__uType* CubicBezier__typeof()
{
    static ::uStaticStrong<CubicBezier__uType*> type;
    if (type != NULL) return type;

    type = (CubicBezier__uType*)::uAllocClassType(sizeof(CubicBezier__uType), "Uno.Geometry.CubicBezier", false, 0, 2, 0);

    type->SetStrongRefs(
        "_head", offsetof(CubicBezier, _head),
        "_last", offsetof(CubicBezier, _last));

    return type;
}

void CubicBezier___ObjInit(CubicBezier* __this, float maxError)
{
    __this->_head = __this->_last = ::app::Uno::Geometry::Vertex__New_1(NULL);
    __this->_maxErrorSquared = maxError * maxError;
}

void CubicBezier__AddPoint(CubicBezier* __this, float x, float y)
{
    ::app::Uno::Geometry::Vertex* collection_123;
    __this->_last = ::uPtr< ::app::Uno::Geometry::Vertex*>(__this->_last)->Next = (collection_123 = ::app::Uno::Geometry::Vertex__New_1(NULL), ::uPtr< ::app::Uno::Geometry::Vertex*>(collection_123)->X = x, ::uPtr< ::app::Uno::Geometry::Vertex*>(collection_123)->Y = y, collection_123);
}

CubicBezier* CubicBezier__New_1(::uStatic* __this, float maxError)
{
    CubicBezier* inst = (CubicBezier*)::uAllocObject(sizeof(CubicBezier), CubicBezier__typeof());
    inst->_ObjInit(maxError);
    return inst;
}

::uObject* CubicBezier__Subdivide(::uStatic* __this, ::app::Uno::Float2 p1, ::app::Uno::Float2 p2, ::app::Uno::Float2 p3, ::app::Uno::Float2 p4, float maxError)
{
    CubicBezier* s = CubicBezier__New_1(NULL, maxError);
    ::uPtr< CubicBezier*>(s)->AddPoint(p1.X, p1.Y);
    s->SubdivideRecursive(p1.X, p1.Y, p2.X, p2.Y, p3.X, p3.Y, p4.X, p4.Y, 0);
    s->AddPoint(p4.X, p4.Y);
    return (::uObject*)::app::Uno::Geometry::VertexEnumerable__New_1(NULL, s->_head);
}

void CubicBezier__SubdivideRecursive(CubicBezier* __this, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, int level)
{
    if ((((((::app::Uno::Math__Abs_8(NULL, x1 - x2) <= 1e-05f) && (::app::Uno::Math__Abs_8(NULL, x2 - x3) <= 1e-05f)) && (::app::Uno::Math__Abs_8(NULL, x3 - x4) <= 1e-05f)) && (::app::Uno::Math__Abs_8(NULL, y1 - y2) <= 1e-05f)) && (::app::Uno::Math__Abs_8(NULL, y2 - y3) <= 1e-05f)) && (::app::Uno::Math__Abs_8(NULL, y3 - y4) <= 1e-05f))
    {
        return;
    }

    float x12 = (x1 + x2) / 2.0f;
    float y12 = (y1 + y2) / 2.0f;
    float x23 = (x2 + x3) / 2.0f;
    float y23 = (y2 + y3) / 2.0f;
    float x34 = (x3 + x4) / 2.0f;
    float y34 = (y3 + y4) / 2.0f;
    float x123 = (x12 + x23) / 2.0f;
    float y123 = (y12 + y23) / 2.0f;
    float x234 = (x23 + x34) / 2.0f;
    float y234 = (y23 + y34) / 2.0f;
    float x1234 = (x123 + x234) / 2.0f;
    float y1234 = (y123 + y234) / 2.0f;
    float dx = x4 - x1;
    float dy = y4 - y1;
    float d2 = ::app::Uno::Math__Abs_8(NULL, ((x2 - x4) * dy) - ((y2 - y4) * dx));
    float d3 = ::app::Uno::Math__Abs_8(NULL, ((x3 - x4) * dy) - ((y3 - y4) * dx));

    if (((d2 + d3) * (d2 + d3)) < (__this->_maxErrorSquared * ((dx * dx) + (dy * dy))))
    {
        __this->AddPoint(x1234, y1234);
        return;
    }

    __this->SubdivideRecursive(x1, y1, x12, y12, x123, y123, x1234, y1234, level + 1);
    __this->SubdivideRecursive(x1234, y1234, x234, y234, x34, y34, x4, y4, level + 1);
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Geometry/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Ray__uType* Ray__typeof()
{
    static ::uStaticStrong<Ray__uType*> type;
    if (type != NULL) return type;

    type = (Ray__uType*)::uAllocStructType(sizeof(Ray__uType), "Uno.Geometry.Ray", sizeof(Ray), 0, 0, 0);

    return type;
}

void Ray___ObjInit(Ray* __this, ::app::Uno::Float3 pos, ::app::Uno::Float3 dir)
{
    __this->Position = pos;
    __this->Direction = dir;
}

Ray Ray__New_1(::uStatic* __this, ::app::Uno::Float3 pos, ::app::Uno::Float3 dir)
{
    Ray inst = ::uDefault< Ray>();
    inst._ObjInit(pos, dir);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Geometry/0.12.1/Curves/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Vertex__uType* Vertex__typeof()
{
    static ::uStaticStrong<Vertex__uType*> type;
    if (type != NULL) return type;

    type = (Vertex__uType*)::uAllocClassType(sizeof(Vertex__uType), "Uno.Geometry.Vertex", false, 0, 1, 0);

    type->SetStrongRefs(
        "Next", offsetof(Vertex, Next));

    return type;
}

void Vertex___ObjInit(Vertex* __this)
{
}

Vertex* Vertex__New_1(::uStatic* __this)
{
    Vertex* inst = (Vertex*)::uAllocObject(sizeof(Vertex), Vertex__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Geometry/0.12.1/Curves/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

VertexEnumerable__uType* VertexEnumerable__typeof()
{
    static ::uStaticStrong<VertexEnumerable__uType*> type;
    if (type != NULL) return type;

    type = (VertexEnumerable__uType*)::uAllocClassType(sizeof(VertexEnumerable__uType), "Uno.Geometry.VertexEnumerable", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))VertexEnumerable__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__float2__typeof(), offsetof(VertexEnumerable__uType, __interface_0));

    type->SetStrongRefs(
        "_head", offsetof(VertexEnumerable, _head));

    return type;
}

void VertexEnumerable___ObjInit(VertexEnumerable* __this, ::app::Uno::Geometry::Vertex* head)
{
    __this->_head = head;
}

::uObject* VertexEnumerable__GetEnumerator(VertexEnumerable* __this)
{
    return (::uObject*)::app::Uno::Geometry::VertexEnumerator__New_1(NULL, __this->_head);
}

VertexEnumerable* VertexEnumerable__New_1(::uStatic* __this, ::app::Uno::Geometry::Vertex* head)
{
    VertexEnumerable* inst = (VertexEnumerable*)::uAllocObject(sizeof(VertexEnumerable), VertexEnumerable__typeof());
    inst->_ObjInit(head);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Geometry/0.12.1/Curves/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

VertexEnumerator__uType* VertexEnumerator__typeof()
{
    static ::uStaticStrong<VertexEnumerator__uType*> type;
    if (type != NULL) return type;

    type = (VertexEnumerator__uType*)::uAllocClassType(sizeof(VertexEnumerator__uType), "Uno.Geometry.VertexEnumerator", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Uno::Float2(*)(void*))VertexEnumerator__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))VertexEnumerator__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))VertexEnumerator__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__float2__typeof(), offsetof(VertexEnumerator__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(VertexEnumerator__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(VertexEnumerator__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(VertexEnumerator, _current),
        "_head", offsetof(VertexEnumerator, _head));

    return type;
}

void VertexEnumerator___ObjInit(VertexEnumerator* __this, ::app::Uno::Geometry::Vertex* head)
{
    __this->_head = __this->_current = head;
}

void VertexEnumerator__Dispose(VertexEnumerator* __this)
{
}

::app::Uno::Float2 VertexEnumerator__get_Current(VertexEnumerator* __this)
{
    return ::app::Uno::Float2__New_2(NULL, ::uPtr< ::app::Uno::Geometry::Vertex*>(__this->_current)->X, ::uPtr< ::app::Uno::Geometry::Vertex*>(__this->_current)->Y);
}

bool VertexEnumerator__MoveNext(VertexEnumerator* __this)
{
    return (__this->_current = ::uPtr< ::app::Uno::Geometry::Vertex*>(__this->_current)->Next) != NULL;
}

VertexEnumerator* VertexEnumerator__New_1(::uStatic* __this, ::app::Uno::Geometry::Vertex* head)
{
    VertexEnumerator* inst = (VertexEnumerator*)::uAllocObject(sizeof(VertexEnumerator), VertexEnumerator__typeof());
    inst->_ObjInit(head);
    return inst;
}

}}}
