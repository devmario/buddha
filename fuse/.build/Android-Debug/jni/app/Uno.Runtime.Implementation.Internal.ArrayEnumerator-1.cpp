#include <app/Fuse.Controls.Internal.WrappedLine.h>
#include <app/Fuse.Drawing.Border.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.PolygonDrawable.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Int.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__float2.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Fuse_Contr-19f1b31c.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Fuse_Drawi-154d053.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Fuse_Drawi-19a25635.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerator__Fuse_Drawing_Border.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__float2__uType* ArrayEnumerator__float2__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__float2__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__float2__uType*)::uAllocClassType(sizeof(ArrayEnumerator__float2__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<float2>", false, 3, 1, 0);

    type->__interface_0.__fp_get_Current = (::app::Uno::Float2(*)(void*))ArrayEnumerator__float2__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__float2__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__float2__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__float2__typeof(), offsetof(ArrayEnumerator__float2__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__float2__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__float2__uType, __interface_2));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerator__float2, _source));

    return type;
}

void ArrayEnumerator__float2___ObjInit(ArrayEnumerator__float2* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__float2__Dispose(ArrayEnumerator__float2* __this)
{
}

::app::Uno::Float2 ArrayEnumerator__float2__get_Current(ArrayEnumerator__float2* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__float2__MoveNext(ArrayEnumerator__float2* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Uno::Float2>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__float2* ArrayEnumerator__float2__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__float2* inst = (ArrayEnumerator__float2*)::uAllocObject(sizeof(ArrayEnumerator__float2), ArrayEnumerator__float2__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__uType* ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Fuse.Controls.Internal.WrappedLine>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Controls::Internal::WrappedLine*(*)(void*))ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Controls_Internal_WrappedLine__typeof(), offsetof(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine, _current),
        "_source", offsetof(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine, _source));

    return type;
}

void ArrayEnumerator__Fuse_Controls_Internal_WrappedLine___ObjInit(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__Dispose(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine* __this)
{
}

::app::Fuse::Controls::Internal::WrappedLine* ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__get_Current(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__MoveNext(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Fuse::Controls::Internal::WrappedLine*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Fuse_Controls_Internal_WrappedLine* ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Fuse_Controls_Internal_WrappedLine* inst = (ArrayEnumerator__Fuse_Controls_Internal_WrappedLine*)::uAllocObject(sizeof(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine), ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Fuse_Drawing_Border__uType* ArrayEnumerator__Fuse_Drawing_Border__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Fuse_Drawing_Border__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Fuse_Drawing_Border__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Fuse_Drawing_Border__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Fuse.Drawing.Border>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Border*(*)(void*))ArrayEnumerator__Fuse_Drawing_Border__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Fuse_Drawing_Border__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Fuse_Drawing_Border__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Border__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_Border__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_Border__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_Border__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Fuse_Drawing_Border, _current),
        "_source", offsetof(ArrayEnumerator__Fuse_Drawing_Border, _source));

    return type;
}

void ArrayEnumerator__Fuse_Drawing_Border___ObjInit(ArrayEnumerator__Fuse_Drawing_Border* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Fuse_Drawing_Border__Dispose(ArrayEnumerator__Fuse_Drawing_Border* __this)
{
}

::app::Fuse::Drawing::Border* ArrayEnumerator__Fuse_Drawing_Border__get_Current(ArrayEnumerator__Fuse_Drawing_Border* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Fuse_Drawing_Border__MoveNext(ArrayEnumerator__Fuse_Drawing_Border* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Fuse::Drawing::Border*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Fuse_Drawing_Border* ArrayEnumerator__Fuse_Drawing_Border__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Fuse_Drawing_Border* inst = (ArrayEnumerator__Fuse_Drawing_Border*)::uAllocObject(sizeof(ArrayEnumerator__Fuse_Drawing_Border), ArrayEnumerator__Fuse_Drawing_Border__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Fuse_Drawing_Contour__uType* ArrayEnumerator__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Fuse_Drawing_Contour__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Fuse_Drawing_Contour__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Fuse.Drawing.Contour>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Contour*(*)(void*))ArrayEnumerator__Fuse_Drawing_Contour__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Fuse_Drawing_Contour__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Fuse_Drawing_Contour__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_Contour__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_Contour__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_Contour__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Fuse_Drawing_Contour, _current),
        "_source", offsetof(ArrayEnumerator__Fuse_Drawing_Contour, _source));

    return type;
}

void ArrayEnumerator__Fuse_Drawing_Contour___ObjInit(ArrayEnumerator__Fuse_Drawing_Contour* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Fuse_Drawing_Contour__Dispose(ArrayEnumerator__Fuse_Drawing_Contour* __this)
{
}

::app::Fuse::Drawing::Contour* ArrayEnumerator__Fuse_Drawing_Contour__get_Current(ArrayEnumerator__Fuse_Drawing_Contour* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Fuse_Drawing_Contour__MoveNext(ArrayEnumerator__Fuse_Drawing_Contour* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Fuse::Drawing::Contour*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Fuse_Drawing_Contour* ArrayEnumerator__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Fuse_Drawing_Contour* inst = (ArrayEnumerator__Fuse_Drawing_Contour*)::uAllocObject(sizeof(ArrayEnumerator__Fuse_Drawing_Contour), ArrayEnumerator__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType* ArrayEnumerator__Fuse_Drawing_PolygonDrawable__typeof()
{
    static ::uStaticStrong<ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType*)::uAllocClassType(sizeof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerator<Fuse.Drawing.PolygonDrawable>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::PolygonDrawable*(*)(void*))ArrayEnumerator__Fuse_Drawing_PolygonDrawable__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))ArrayEnumerator__Fuse_Drawing_PolygonDrawable__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))ArrayEnumerator__Fuse_Drawing_PolygonDrawable__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_PolygonDrawable__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable, _current),
        "_source", offsetof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable, _source));

    return type;
}

void ArrayEnumerator__Fuse_Drawing_PolygonDrawable___ObjInit(ArrayEnumerator__Fuse_Drawing_PolygonDrawable* __this, ::uArray* source)
{
    __this->_source = source;
    __this->_iterator = -1;
}

void ArrayEnumerator__Fuse_Drawing_PolygonDrawable__Dispose(ArrayEnumerator__Fuse_Drawing_PolygonDrawable* __this)
{
}

::app::Fuse::Drawing::PolygonDrawable* ArrayEnumerator__Fuse_Drawing_PolygonDrawable__get_Current(ArrayEnumerator__Fuse_Drawing_PolygonDrawable* __this)
{
    return __this->_current;
}

bool ArrayEnumerator__Fuse_Drawing_PolygonDrawable__MoveNext(ArrayEnumerator__Fuse_Drawing_PolygonDrawable* __this)
{
    __this->_iterator++;

    if (__this->_iterator < ::uPtr< ::uArray*>(__this->_source)->Length())
    {
        __this->_current = ::uPtr< ::uArray*>(__this->_source)->Item< ::app::Fuse::Drawing::PolygonDrawable*>(__this->_iterator);
        return true;
    }

    return false;
}

ArrayEnumerator__Fuse_Drawing_PolygonDrawable* ArrayEnumerator__Fuse_Drawing_PolygonDrawable__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerator__Fuse_Drawing_PolygonDrawable* inst = (ArrayEnumerator__Fuse_Drawing_PolygonDrawable*)::uAllocObject(sizeof(ArrayEnumerator__Fuse_Drawing_PolygonDrawable), ArrayEnumerator__Fuse_Drawing_PolygonDrawable__typeof());
    inst->_ObjInit(source);
    return inst;
}

}}}}}
