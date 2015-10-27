// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/Extensions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_SELECT_ENUMERABLE__FUSE_DRAWING_TESSELATION_HALF_69A0E932_H__
#define __APP_UNO_COLLECTIONS_SELECT_ENUMERABLE__FUSE_DRAWING_TESSELATION_HALF_69A0E932_H__

#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2;

struct SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__float2 __interface_0;
};

SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__uType* SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__typeof();

void SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2___ObjInit(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2* __this, ::uObject* source, ::uDelegate* select);
::uObject* SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__GetEnumerator(SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2* __this);
SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2* SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__New_1(::uStatic* __this, ::uObject* source, ::uDelegate* select);

struct SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2 : ::uObject
{
    ::uStrong< ::uObject*> _source;
    ::uStrong< ::uDelegate*> _select;

    void _ObjInit(::uObject* source, ::uDelegate* select) { SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2___ObjInit(this, source, select); }
    ::uObject* GetEnumerator() { return SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__GetEnumerator(this); }
};

}}}


#endif
