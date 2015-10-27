#include <app/Fuse.Drawing.Tesselation.Collections.DictNode__Fuse_Drawing_Tes-22834fbc.h>
#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable__Fuse-30a04dff.h>
#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable__Fuse-38f31ac6.h>
#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable__Fuse-5610cd78.h>
#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable__Fuse-fcca422b.h>
#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator__Fuse-64709fc.h>
#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator__Fuse-ac397983.h>
#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator__Fuse-f6c69caf.h>
#include <app/Fuse.Drawing.Tesselation.Face.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Fuse.Drawing.Tesselation.Vertex.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Vertex.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.10.5/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LinkedListEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___uType* LinkedListEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___typeof()
{
    static ::uStaticStrong<LinkedListEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___uType*> type;
    if (type != NULL) return type;

    type = (LinkedListEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___uType*)::uAllocClassType(sizeof(LinkedListEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___uType), "Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable<Fuse.Drawing.Tesselation.Collections.DictNode<Fuse.Drawing.Tesselation.ActiveRegion>>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_first", offsetof(LinkedListEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion_, _first));

    return type;
}

void LinkedListEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion____ObjInit(LinkedListEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion_* __this, ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* first)
{
    __this->_first = first;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.10.5/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LinkedListEnumerable__Fuse_Drawing_Tesselation_Face__uType* LinkedListEnumerable__Fuse_Drawing_Tesselation_Face__typeof()
{
    static ::uStaticStrong<LinkedListEnumerable__Fuse_Drawing_Tesselation_Face__uType*> type;
    if (type != NULL) return type;

    type = (LinkedListEnumerable__Fuse_Drawing_Tesselation_Face__uType*)::uAllocClassType(sizeof(LinkedListEnumerable__Fuse_Drawing_Tesselation_Face__uType), "Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable<Fuse.Drawing.Tesselation.Face>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))LinkedListEnumerable__Fuse_Drawing_Tesselation_Face__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face__typeof(), offsetof(LinkedListEnumerable__Fuse_Drawing_Tesselation_Face__uType, __interface_0));

    type->SetStrongRefs(
        "_first", offsetof(LinkedListEnumerable__Fuse_Drawing_Tesselation_Face, _first));

    return type;
}

void LinkedListEnumerable__Fuse_Drawing_Tesselation_Face___ObjInit(LinkedListEnumerable__Fuse_Drawing_Tesselation_Face* __this, ::app::Fuse::Drawing::Tesselation::Face* first)
{
    __this->_first = first;
}

::uObject* LinkedListEnumerable__Fuse_Drawing_Tesselation_Face__GetEnumerator(LinkedListEnumerable__Fuse_Drawing_Tesselation_Face* __this)
{
    return (::uObject*)::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__New_1(NULL, __this->_first, __this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.10.5/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__uType* LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof()
{
    static ::uStaticStrong<LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__uType*> type;
    if (type != NULL) return type;

    type = (LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__uType*)::uAllocClassType(sizeof(LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__uType), "Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable<Fuse.Drawing.Tesselation.HalfEdge>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof(), offsetof(LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__uType, __interface_0));

    type->SetStrongRefs(
        "_first", offsetof(LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge, _first));

    return type;
}

void LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge___ObjInit(LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* first)
{
    __this->_first = first;
}

::uObject* LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge__GetEnumerator(LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge* __this)
{
    return (::uObject*)::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__New_1(NULL, __this->_first, __this);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.10.5/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__uType* LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__typeof()
{
    static ::uStaticStrong<LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__uType*> type;
    if (type != NULL) return type;

    type = (LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__uType*)::uAllocClassType(sizeof(LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__uType), "Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable<Fuse.Drawing.Tesselation.Vertex>", false, 1, 1, 0);

    type->__interface_0.__fp_GetEnumerator = (::uObject*(*)(void*))LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__GetEnumerator;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Vertex__typeof(), offsetof(LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__uType, __interface_0));

    type->SetStrongRefs(
        "_first", offsetof(LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex, _first));

    return type;
}

void LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex___ObjInit(LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex* __this, ::app::Fuse::Drawing::Tesselation::Vertex* first)
{
    __this->_first = first;
}

::uObject* LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex__GetEnumerator(LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex* __this)
{
    return (::uObject*)::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__New_1(NULL, __this->_first, __this);
}

}}}}}
