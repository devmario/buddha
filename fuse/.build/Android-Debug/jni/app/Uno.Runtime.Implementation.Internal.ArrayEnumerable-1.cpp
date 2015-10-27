#include <app/Fuse.Controls.Internal.WrappedLine.h>
#include <app/Fuse.Drawing.Border.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.PolygonDrawable.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Controls_Internal_WrappedLine.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Border.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_PolygonDrawable.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__float2.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Contr-d462bd20.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawi-15b37739.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawi-7fc6ad57.h>
#include <app/Uno.Runtime.Implementation.Internal.ArrayEnumerable__Fuse_Drawing_Border.h>
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

ArrayEnumerable__float2__uType* ArrayEnumerable__float2__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__float2__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__float2__uType*)::uAllocClassType(sizeof(ArrayEnumerable__float2__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<float2>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__float2__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__float2__typeof(), offsetof(ArrayEnumerable__float2__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__float2, _source));

    return type;
}

void ArrayEnumerable__float2___ObjInit(ArrayEnumerable__float2* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__float2__GetEnumerator(ArrayEnumerable__float2* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__float2__New_1(NULL, __this->_source);
}

ArrayEnumerable__float2* ArrayEnumerable__float2__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__float2* inst = (ArrayEnumerable__float2*)::uAllocObject(sizeof(ArrayEnumerable__float2), ArrayEnumerable__float2__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__uType* ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Controls.Internal.WrappedLine>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Controls_Internal_WrappedLine__typeof(), offsetof(ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Fuse_Controls_Internal_WrappedLine, _source));

    return type;
}

void ArrayEnumerable__Fuse_Controls_Internal_WrappedLine___ObjInit(ArrayEnumerable__Fuse_Controls_Internal_WrappedLine* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__GetEnumerator(ArrayEnumerable__Fuse_Controls_Internal_WrappedLine* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__New_1(NULL, __this->_source);
}

ArrayEnumerable__Fuse_Controls_Internal_WrappedLine* ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Fuse_Controls_Internal_WrappedLine* inst = (ArrayEnumerable__Fuse_Controls_Internal_WrappedLine*)::uAllocObject(sizeof(ArrayEnumerable__Fuse_Controls_Internal_WrappedLine), ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Fuse_Drawing_Border__uType* ArrayEnumerable__Fuse_Drawing_Border__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Fuse_Drawing_Border__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Fuse_Drawing_Border__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Fuse_Drawing_Border__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Drawing.Border>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Fuse_Drawing_Border__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Border__typeof(), offsetof(ArrayEnumerable__Fuse_Drawing_Border__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Fuse_Drawing_Border, _source));

    return type;
}

void ArrayEnumerable__Fuse_Drawing_Border___ObjInit(ArrayEnumerable__Fuse_Drawing_Border* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Fuse_Drawing_Border__GetEnumerator(ArrayEnumerable__Fuse_Drawing_Border* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Drawing_Border__New_1(NULL, __this->_source);
}

ArrayEnumerable__Fuse_Drawing_Border* ArrayEnumerable__Fuse_Drawing_Border__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Fuse_Drawing_Border* inst = (ArrayEnumerable__Fuse_Drawing_Border*)::uAllocObject(sizeof(ArrayEnumerable__Fuse_Drawing_Border), ArrayEnumerable__Fuse_Drawing_Border__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Fuse_Drawing_Contour__uType* ArrayEnumerable__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Fuse_Drawing_Contour__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Fuse_Drawing_Contour__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Drawing.Contour>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Fuse_Drawing_Contour__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof(), offsetof(ArrayEnumerable__Fuse_Drawing_Contour__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Fuse_Drawing_Contour, _source));

    return type;
}

void ArrayEnumerable__Fuse_Drawing_Contour___ObjInit(ArrayEnumerable__Fuse_Drawing_Contour* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Fuse_Drawing_Contour__GetEnumerator(ArrayEnumerable__Fuse_Drawing_Contour* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Drawing_Contour__New_1(NULL, __this->_source);
}

ArrayEnumerable__Fuse_Drawing_Contour* ArrayEnumerable__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Fuse_Drawing_Contour* inst = (ArrayEnumerable__Fuse_Drawing_Contour*)::uAllocObject(sizeof(ArrayEnumerable__Fuse_Drawing_Contour), ArrayEnumerable__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit(source);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ArrayEnumerable__Fuse_Drawing_PolygonDrawable__uType* ArrayEnumerable__Fuse_Drawing_PolygonDrawable__typeof()
{
    static ::uStaticStrong<ArrayEnumerable__Fuse_Drawing_PolygonDrawable__uType*> type;
    if (type != NULL) return type;

    type = (ArrayEnumerable__Fuse_Drawing_PolygonDrawable__uType*)::uAllocClassType(sizeof(ArrayEnumerable__Fuse_Drawing_PolygonDrawable__uType), "Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Drawing.PolygonDrawable>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))ArrayEnumerable__Fuse_Drawing_PolygonDrawable__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_PolygonDrawable__typeof(), offsetof(ArrayEnumerable__Fuse_Drawing_PolygonDrawable__uType, __interface_0));

    type->SetStrongRefs(
        "_source", offsetof(ArrayEnumerable__Fuse_Drawing_PolygonDrawable, _source));

    return type;
}

void ArrayEnumerable__Fuse_Drawing_PolygonDrawable___ObjInit(ArrayEnumerable__Fuse_Drawing_PolygonDrawable* __this, ::uArray* source)
{
    __this->_source = source;
}

::uObject* ArrayEnumerable__Fuse_Drawing_PolygonDrawable__GetEnumerator(ArrayEnumerable__Fuse_Drawing_PolygonDrawable* __this)
{
    return (::uObject*)::app::Uno::Runtime::Implementation::Internal::ArrayEnumerator__Fuse_Drawing_PolygonDrawable__New_1(NULL, __this->_source);
}

ArrayEnumerable__Fuse_Drawing_PolygonDrawable* ArrayEnumerable__Fuse_Drawing_PolygonDrawable__New_1(::uStatic* __this, ::uArray* source)
{
    ArrayEnumerable__Fuse_Drawing_PolygonDrawable* inst = (ArrayEnumerable__Fuse_Drawing_PolygonDrawable*)::uAllocObject(sizeof(ArrayEnumerable__Fuse_Drawing_PolygonDrawable), ArrayEnumerable__Fuse_Drawing_PolygonDrawable__typeof());
    inst->_ObjInit(source);
    return inst;
}

}}}}}
