#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Border.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Border.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Border__Fuse_Dra-bf93da11.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Contour__Fuse_Dr-f11a55fb.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Tesselation_Face-e7eeb5a4.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Tesselation_Half-69a0e932.h>
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

SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType* SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong<SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType), "Uno.Collections.SelectEnumerable<Fuse.Drawing.Border,Fuse.Drawing.Contour>", false, 1, 2, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof(), offsetof(SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__uType, __interface_0));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour, _select),
        "_source", offsetof(SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour, _source));

    return type;
}

void SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour___ObjInit(SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

::uObject* SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__GetEnumerator(SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour* __this)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Border__Fuse_Drawing_Contour__New_1(NULL, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Border::GetEnumerator(::uPtr< ::uObject*>(__this->_source)), __this->_select);
}

SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour* SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour* inst = (SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour*)::uAllocObject(sizeof(SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour), SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/Extensions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType* SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__typeof()
{
    static ::uStaticStrong<SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType*)::uAllocClassType(sizeof(SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType), "Uno.Collections.SelectEnumerable<Fuse.Drawing.Contour,Fuse.Drawing.Border>", false, 1, 2, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Border__typeof(), offsetof(SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__uType, __interface_0));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border, _select),
        "_source", offsetof(SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border, _source));

    return type;
}

void SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border___ObjInit(SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

::uObject* SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__GetEnumerator(SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border* __this)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Contour__Fuse_Drawing_Border__New_1(NULL, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour::GetEnumerator(::uPtr< ::uObject*>(__this->_source)), __this->_select);
}

SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border* SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border* inst = (SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border*)::uAllocObject(sizeof(SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border), SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/Extensions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType* SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong<SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType*)::uAllocClassType(sizeof(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType), "Uno.Collections.SelectEnumerable<Fuse.Drawing.Tesselation.Face,Fuse.Drawing.Contour>", false, 1, 2, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour__typeof(), offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__uType, __interface_0));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour, _select),
        "_source", offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour, _source));

    return type;
}

void SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour___ObjInit(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

::uObject* SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__GetEnumerator(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* __this)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__New_1(NULL, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face::GetEnumerator(::uPtr< ::uObject*>(__this->_source)), __this->_select);
}

SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour* inst = (SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour*)::uAllocObject(sizeof(SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour), SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/Extensions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__uType* SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof()
{
    static ::uStaticStrong<SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__uType*> type;
    if (type != NULL) return type;

    type = (SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__uType*)::uAllocClassType(sizeof(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__uType), "Uno.Collections.SelectEnumerable<Fuse.Drawing.Tesselation.HalfEdge,float2>", false, 1, 2, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__float2__typeof(), offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__uType, __interface_0));

    type->SetStrongRefs(
        "_select", offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2, _select),
        "_source", offsetof(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2, _source));

    return type;
}

void SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2___ObjInit(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2* __this, ::uObject* source, ::uDelegate* select)
{
    __this->_source = source;
    __this->_select = select;
}

::uObject* SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__GetEnumerator(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2* __this)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerator__Fuse_Drawing_Tesselation_HalfEdge__float2__New_1(NULL, ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge::GetEnumerator(::uPtr< ::uObject*>(__this->_source)), __this->_select);
}

SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2* SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select)
{
    SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2* inst = (SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2*)::uAllocObject(sizeof(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2), SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof());
    inst->_ObjInit(source, select);
    return inst;
}

}}}
