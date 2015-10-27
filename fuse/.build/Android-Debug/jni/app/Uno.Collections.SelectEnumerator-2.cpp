#include <app/Fuse.Drawing.Border.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.Tesselation.Face.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Border.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Border__Fuse_Dra-7fdf7095.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Contour__Fuse_Dr-b165ec7f.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Tesselation_Face-cd22f728.h>
#include <app/Uno.Collections.SelectEnumerator__Fuse_Drawing_Tesselation_Half-29ec7fb6.h>
#include <app/Uno.Func__Fuse_Drawing_Border__Fuse_Drawing_Contour.h>
#include <app/Uno.Func__Fuse_Drawing_Contour__Fuse_Drawing_Border.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_HalfEdge__float2.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/Extensions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType* SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong<SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType), "Uno.Collections.SelectEnumerator<Fuse.Drawing.Border,Fuse.Drawing.Contour>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Contour*(*)(void*))SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType, __interface_2));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour, _select),
        "_source", offsetof(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour, _source));

    return type;
}

void SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour___ObjInit(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

void SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__Dispose(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this)
{
}

::app::Fuse::Drawing::Contour* SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__get_Current(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this)
{
    return ::uPtr< ::uDelegate*>(__this->_select)->Invoke< ::app::Fuse::Drawing::Contour*, ::app::Fuse::Drawing::Border*>(::app::Uno::Collections::IEnumerator__Fuse_Drawing_Border::Current(::uPtr< ::uObject*>(__this->_source)));
}

bool SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__MoveNext(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this)
{
    return ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source));
}

SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour* inst = (SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour*)::uAllocObject(sizeof(SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour), SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/Extensions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType* SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__typeof()
{
    static ::uStaticStrong<SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType*)::uAllocClassType(sizeof(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType), "Uno.Collections.SelectEnumerator<Fuse.Drawing.Contour,Fuse.Drawing.Border>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Border*(*)(void*))SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Border__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType, __interface_2));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border, _select),
        "_source", offsetof(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border, _source));

    return type;
}

void SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border___ObjInit(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

void SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__Dispose(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this)
{
}

::app::Fuse::Drawing::Border* SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__get_Current(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this)
{
    return ::uPtr< ::uDelegate*>(__this->_select)->Invoke< ::app::Fuse::Drawing::Border*, ::app::Fuse::Drawing::Contour*>(::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour::Current(::uPtr< ::uObject*>(__this->_source)));
}

bool SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__MoveNext(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this)
{
    return ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source));
}

SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border* inst = (SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border*)::uAllocObject(sizeof(SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border), SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/Extensions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType* SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong<SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType), "Uno.Collections.SelectEnumerator<Fuse.Drawing.Tesselation.Face,Fuse.Drawing.Contour>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Contour*(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType, __interface_2));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour, _select),
        "_source", offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour, _source));

    return type;
}

void SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour___ObjInit(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

void SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__Dispose(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* __this)
{
}

::app::Fuse::Drawing::Contour* SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__get_Current(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* __this)
{
    return ::uPtr< ::uDelegate*>(__this->_select)->Invoke< ::app::Fuse::Drawing::Contour*, ::app::Fuse::Drawing::Tesselation::Face*>(::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face::Current(::uPtr< ::uObject*>(__this->_source)));
}

bool SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__MoveNext(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* __this)
{
    return ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source));
}

SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* inst = (SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour*)::uAllocObject(sizeof(SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour), SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/Extensions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType* SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof()
{
    static ::uStaticStrong<SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType*)::uAllocClassType(sizeof(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType), "Uno.Collections.SelectEnumerator<Fuse.Drawing.Tesselation.HalfEdge,float2>", false, 3, 2, 0);

    type->__interface_0.__fp_get_Current = (::app::Uno::Float2(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__float2__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__uType, __interface_2));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2, _select),
        "_source", offsetof(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2, _source));

    return type;
}

void SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2___ObjInit(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

void SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__Dispose(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* __this)
{
}

::app::Uno::Float2 SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__get_Current(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* __this)
{
    return ::uPtr< ::uDelegate*>(__this->_select)->Invoke< ::app::Uno::Float2, ::app::Fuse::Drawing::Tesselation::HalfEdge*>(::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_HalfEdge::Current(::uPtr< ::uObject*>(__this->_source)));
}

bool SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__MoveNext(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* __this)
{
    return ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(__this->_source));
}

SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2* inst = (SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2*)::uAllocObject(sizeof(SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2), SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

}}}
