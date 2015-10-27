#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable__Fuse-30a04dff.h>
#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable__Fuse-5610cd78.h>
#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable__Fuse-fcca422b.h>
#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator__Fuse-64709fc.h>
#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator__Fuse-ac397983.h>
#include <app/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator__Fuse-f6c69caf.h>
#include <app/Fuse.Drawing.Tesselation.Face.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Fuse.Drawing.Tesselation.Vertex.h>
#include <app/Uno.Bool.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.10.5/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__uType* LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__typeof()
{
    static ::uStaticStrong<LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__uType*> type;
    if (type != NULL) return type;

    type = (LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__uType*)::uAllocClassType(sizeof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__uType), "Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator<Fuse.Drawing.Tesselation.Face>", false, 3, 3, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Tesselation::Face*(*)(void*))LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Face__typeof(), offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face, _current),
        "_enumerable", offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face, _enumerable),
        "_next", offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face, _next));

    return type;
}

void LinkedListEnumerator__Fuse_Drawing_Tesselation_Face___ObjInit(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face* __this, ::app::Fuse::Drawing::Tesselation::Face* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Face* enumerable)
{
    __this->_enumerable = enumerable;
    __this->_current = NULL;
    __this->_next = first;
}

void LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__Dispose(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face* __this)
{
}

::app::Fuse::Drawing::Tesselation::Face* LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__get_Current(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face* __this)
{
    return __this->_current;
}

bool LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__MoveNext(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face* __this)
{
    if ((::uObject*)__this->_next == NULL)
    {
        return false;
    }

    __this->_current = __this->_next;
    __this->_next = ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Face*>(__this->_enumerable)->GetNext(__this->_current);
    return true;
}

LinkedListEnumerator__Fuse_Drawing_Tesselation_Face* LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Face* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Face* enumerable)
{
    LinkedListEnumerator__Fuse_Drawing_Tesselation_Face* inst = (LinkedListEnumerator__Fuse_Drawing_Tesselation_Face*)::uAllocObject(sizeof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Face), LinkedListEnumerator__Fuse_Drawing_Tesselation_Face__typeof());
    inst->_ObjInit(first, enumerable);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.10.5/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__uType* LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__typeof()
{
    static ::uStaticStrong<LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__uType*> type;
    if (type != NULL) return type;

    type = (LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__uType*)::uAllocClassType(sizeof(LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__uType), "Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator<Fuse.Drawing.Tesselation.HalfEdge>", false, 3, 3, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Tesselation::HalfEdge*(*)(void*))LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_HalfEdge__typeof(), offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge, _current),
        "_enumerable", offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge, _enumerable),
        "_next", offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge, _next));

    return type;
}

void LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge___ObjInit(LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge* enumerable)
{
    __this->_enumerable = enumerable;
    __this->_current = NULL;
    __this->_next = first;
}

void LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__Dispose(LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge* __this)
{
}

::app::Fuse::Drawing::Tesselation::HalfEdge* LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__get_Current(LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge* __this)
{
    return __this->_current;
}

bool LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__MoveNext(LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge* __this)
{
    if ((::uObject*)__this->_next == NULL)
    {
        return false;
    }

    __this->_current = __this->_next;
    __this->_next = ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge*>(__this->_enumerable)->GetNext(__this->_current);
    return true;
}

LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge* LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::HalfEdge* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_HalfEdge* enumerable)
{
    LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge* inst = (LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge*)::uAllocObject(sizeof(LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge), LinkedListEnumerator__Fuse_Drawing_Tesselation_HalfEdge__typeof());
    inst->_ObjInit(first, enumerable);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.10.5/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__uType* LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__typeof()
{
    static ::uStaticStrong<LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__uType*> type;
    if (type != NULL) return type;

    type = (LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__uType*)::uAllocClassType(sizeof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__uType), "Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator<Fuse.Drawing.Tesselation.Vertex>", false, 3, 3, 0);

    type->__interface_0.__fp_get_Current = (::app::Fuse::Drawing::Tesselation::Vertex*(*)(void*))LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__get_Current;
    type->__interface_1.__fp_Dispose = (void(*)(void*))LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__Dispose;
    type->__interface_2.__fp_MoveNext = (bool(*)(void*))LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__MoveNext;

    type->SetInterfaces(
        ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_Vertex__typeof(), offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__uType, __interface_1),
        ::app::Uno::Collections::IEnumerator__typeof(), offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__uType, __interface_2));

    type->SetStrongRefs(
        "_current", offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex, _current),
        "_enumerable", offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex, _enumerable),
        "_next", offsetof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex, _next));

    return type;
}

void LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex___ObjInit(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex* __this, ::app::Fuse::Drawing::Tesselation::Vertex* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex* enumerable)
{
    __this->_enumerable = enumerable;
    __this->_current = NULL;
    __this->_next = first;
}

void LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__Dispose(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex* __this)
{
}

::app::Fuse::Drawing::Tesselation::Vertex* LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__get_Current(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex* __this)
{
    return __this->_current;
}

bool LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__MoveNext(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex* __this)
{
    if ((::uObject*)__this->_next == NULL)
    {
        return false;
    }

    __this->_current = __this->_next;
    __this->_next = ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex*>(__this->_enumerable)->GetNext(__this->_current);
    return true;
}

LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex* LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Vertex* first, ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Vertex* enumerable)
{
    LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex* inst = (LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex*)::uAllocObject(sizeof(LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex), LinkedListEnumerator__Fuse_Drawing_Tesselation_Vertex__typeof());
    inst->_ObjInit(first, enumerable);
    return inst;
}

}}}}}
