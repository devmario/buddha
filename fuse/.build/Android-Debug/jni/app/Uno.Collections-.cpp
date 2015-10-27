#include <app/Fuse.Animations.Animator.h>
#include <app/Fuse.Behavior.h>
#include <app/Fuse.Controls.Internal.WrappedLine.h>
#include <app/Fuse.Controls.TextEdit.LineCacheLine.h>
#include <app/Fuse.Drawing.Border.h>
#include <app/Fuse.Drawing.Brush.h>
#include <app/Fuse.Drawing.Contour.h>
#include <app/Fuse.Drawing.PolygonDrawable.h>
#include <app/Fuse.Drawing.Stroke.h>
#include <app/Fuse.Drawing.Tesselation.Face.h>
#include <app/Fuse.Drawing.Tesselation.HalfEdge.h>
#include <app/Fuse.Drawing.Tesselation.Vertex.h>
#include <app/Fuse.Effects.Effect.h>
#include <app/Fuse.Entities.Entity.h>
#include <app/Fuse.Input.Capturer.h>
#include <app/Fuse.IViewport.h>
#include <app/Fuse.Layouts.Column.h>
#include <app/Fuse.Layouts.Row.h>
#include <app/Fuse.Navigation.INavigationAnimator.h>
#include <app/Fuse.Node.h>
#include <app/Fuse.Physics.IRule.h>
#include <app/Fuse.Reactive.Case.h>
#include <app/Fuse.RenderTargetEntry.h>
#include <app/Fuse.Resources.ImageSource.h>
#include <app/Fuse.Style.h>
#include <app/Fuse.Transform.h>
#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <app/Fuse.Triggers.State.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Dictionary2_BucketState.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__float2.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Drawing_Border.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.EnumerableExtensions_LinkedList__Fuse_Drawing_P-b96dd3e2.h>
#include <app/Uno.Collections.ICollection__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.ICollection__Fuse_Behavior.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.ICollection__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.ICollection__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.ICollection__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.ICollection__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.ICollection__Fuse_IViewport.h>
#include <app/Uno.Collections.ICollection__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.ICollection__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.ICollection__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Collections.ICollection__Fuse_Node.h>
#include <app/Uno.Collections.ICollection__Fuse_RenderTargetEntry.h>
#include <app/Uno.Collections.ICollection__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.ICollection__Fuse_Style.h>
#include <app/Uno.Collections.ICollection__Fuse_Transform.h>
#include <app/Uno.Collections.ICollection__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.ICollection__Fuse_Triggers_State.h>
#include <app/Uno.Collections.ICollection__Uno_Graphics_PolygonFace.h>
#include <app/Uno.Collections.ICollection__Uno_UX_FileSource.h>
#include <app/Uno.Collections.ICollection__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.ICollection__Uno_UX_Resource.h>
#include <app/Uno.Collections.IDictionary__int__string.h>
#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Controls_Internal_WrappedLine.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Controls_TextEdit_LineCacheLine.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Border.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_PolygonDrawable.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Tesselation_Vertex.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Layouts_DefinitionBase_ParseDataItem.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Physics_IRule.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Reactive_Case.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Style.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Transform.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Triggers_State.h>
#include <app/Uno.Collections.IEnumerable__Uno_UX_IFactory.h>
#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__float2.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Behavior.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Controls_Internal_WrappedLine.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Controls_TextEdit_LineCacheLine.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Border.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Contour.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_PolygonDrawable.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Drawing_Tesselation_Vertex.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Layouts_DefinitionBase_ParseDataItem.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Node.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Physics_IRule.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Reactive_Case.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Style.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Transform.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Triggers_State.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_FileSource.h>
#include <app/Uno.Collections.IEnumerator__Uno_UX_IFactory.h>
#include <app/Uno.Collections.IList__Fuse_Animations_Animator.h>
#include <app/Uno.Collections.IList__Fuse_Behavior.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Brush.h>
#include <app/Uno.Collections.IList__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IList__Fuse_Effects_Effect.h>
#include <app/Uno.Collections.IList__Fuse_Entities_Entity.h>
#include <app/Uno.Collections.IList__Fuse_Input_Capturer.h>
#include <app/Uno.Collections.IList__Fuse_IViewport.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_Column.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_DefinitionBase_ParseDataItem.h>
#include <app/Uno.Collections.IList__Fuse_Layouts_Row.h>
#include <app/Uno.Collections.IList__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Collections.IList__Fuse_Node.h>
#include <app/Uno.Collections.IList__Fuse_Reactive_Case.h>
#include <app/Uno.Collections.IList__Fuse_RenderTargetEntry.h>
#include <app/Uno.Collections.IList__Fuse_Resources_ImageSource.h>
#include <app/Uno.Collections.IList__Fuse_Style.h>
#include <app/Uno.Collections.IList__Fuse_Transform.h>
#include <app/Uno.Collections.IList__Fuse_Triggers_Actions_TriggerAction.h>
#include <app/Uno.Collections.IList__Fuse_Triggers_State.h>
#include <app/Uno.Collections.IList__Uno_Graphics_PolygonFace.h>
#include <app/Uno.Collections.IList__Uno_UX_FileSource.h>
#include <app/Uno.Collections.IList__Uno_UX_IFactory.h>
#include <app/Uno.Collections.IList__Uno_UX_ITemplate.h>
#include <app/Uno.Collections.IList__Uno_UX_Resource.h>
#include <app/Uno.Collections.IListExtensions.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Border__Fuse_Dra-bf93da11.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Contour__Fuse_Dr-f11a55fb.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Tesselation_Face-e7eeb5a4.h>
#include <app/Uno.Collections.SelectEnumerable__Fuse_Drawing_Tesselation_Half-69a0e932.h>
#include <app/Uno.Collections.UnionEnumerable__float2.h>
#include <app/Uno.Collections.WhereEnumerable__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Func__Fuse_Drawing_Border__Fuse_Drawing_Contour.h>
#include <app/Uno.Func__Fuse_Drawing_Contour__Fuse_Drawing_Border.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour.h>
#include <app/Uno.Func__Fuse_Drawing_Tesselation_HalfEdge__float2.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Int.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.Predicate__Fuse_Drawing_Tesselation_Face.h>
#include <app/Uno.Predicate__Fuse_Drawing_Tesselation_HalfEdge.h>
#include <app/Uno.UX.FileSource.h>
#include <app/Uno.UX.IFactory.h>
#include <app/Uno.UX.ITemplate.h>
#include <app/Uno.UX.Resource.h>

namespace app {
namespace Uno {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Dictionary2_BucketState__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Collections.Dictionary<,>.BucketState", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Empty", 0LL,
        "Used", 1LL,
        "Dummy", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/Extensions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

EnumerableExtensions__uType* EnumerableExtensions__typeof()
{
    static ::uStaticStrong<EnumerableExtensions__uType*> type;
    if (type != NULL) return type;

    type = (EnumerableExtensions__uType*)::uAllocClassType(sizeof(EnumerableExtensions__uType), "Uno.Collections.EnumerableExtensions");

    return type;
}

int EnumerableExtensions__Count__Fuse_Drawing_Tesselation_Face(::uStatic* __this, ::uObject* self)
{
    int c = 0;
    ::uObject* enumerator = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_Face::GetEnumerator(::uPtr< ::uObject*>(self));

    while (::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enumerator)))
    {
        c++;
    }

    return c;
}

::app::Fuse::Controls::TextEdit::LineCacheLine* EnumerableExtensions__First__Fuse_Controls_TextEdit_LineCacheLine(::uStatic* __this, ::uObject* self)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Controls_TextEdit_LineCacheLine::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Controls::TextEdit::LineCacheLine* item = ::app::Uno::Collections::IEnumerator__Fuse_Controls_TextEdit_LineCacheLine::Current(::uPtr< ::uObject*>(enum_123));
        return item;
    }

    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

::app::Fuse::Input::Capturer* EnumerableExtensions__First__Fuse_Input_Capturer(::uStatic* __this, ::uObject* self)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Input_Capturer::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Input::Capturer* item = ::app::Uno::Collections::IEnumerator__Fuse_Input_Capturer::Current(::uPtr< ::uObject*>(enum_123));
        return item;
    }

    U_THROW(::app::Uno::InvalidOperationException__New_3(NULL));
}

::app::Fuse::Drawing::Brush* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Brush_1(::uStatic* __this, ::uObject* self)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Brush::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Brush* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Brush::Current(::uPtr< ::uObject*>(enum_123));
        return item;
    }

    return NULL;
}

::app::Fuse::Drawing::Tesselation::HalfEdge* EnumerableExtensions__FirstOrDefault__Fuse_Drawing_Tesselation_HalfEdge_1(::uStatic* __this, ::uObject* self, ::uDelegate* where)
{
    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Tesselation_HalfEdge::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Tesselation::HalfEdge* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Tesselation_HalfEdge::Current(::uPtr< ::uObject*>(enum_123));

        if (::uPtr< ::uDelegate*>(where)->Invoke< bool, ::app::Fuse::Drawing::Tesselation::HalfEdge*>(item))
        {
            return item;
        }
    }

    return NULL;
}

::uObject* EnumerableExtensions__Select__Fuse_Drawing_Border__Fuse_Drawing_Contour(::uStatic* __this, ::uObject* self, ::uDelegate* func)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Border__Fuse_Drawing_Contour__New_1(NULL, self, func);
}

::uObject* EnumerableExtensions__Select__Fuse_Drawing_Contour__Fuse_Drawing_Border(::uStatic* __this, ::uObject* self, ::uDelegate* func)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Contour__Fuse_Drawing_Border__New_1(NULL, self, func);
}

::uObject* EnumerableExtensions__Select__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour(::uStatic* __this, ::uObject* self, ::uDelegate* func)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Tesselation_Face__Fuse_Drawing_Contour__New_1(NULL, self, func);
}

::uObject* EnumerableExtensions__Select__Fuse_Drawing_Tesselation_HalfEdge__float2(::uStatic* __this, ::uObject* self, ::uDelegate* func)
{
    return (::uObject*)::app::Uno::Collections::SelectEnumerable__Fuse_Drawing_Tesselation_HalfEdge__float2__New_1(NULL, self, func);
}

::uArray* EnumerableExtensions__ToArray__float2(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__float2* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__float2::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Uno::Float2 item = ::app::Uno::Collections::IEnumerator__float2::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__float2__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Uno::Float2__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__float2* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__float2*>(current)->Next)
    {
        res->Item< ::app::Uno::Float2>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__float2*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Fuse_Drawing_Border(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Border* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Border::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Border* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Border::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Border__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Fuse::Drawing::Border__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Border* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Border*>(current)->Next)
    {
        res->ItemStrong< ::app::Fuse::Drawing::Border*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Border*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Fuse_Drawing_Contour(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Contour* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_Contour::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::Contour* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_Contour::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Contour__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Fuse::Drawing::Contour__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Contour* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Contour*>(current)->Next)
    {
        res->ItemStrong< ::app::Fuse::Drawing::Contour*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_Contour*>(current)->Item;
    }

    return res;
}

::uArray* EnumerableExtensions__ToArray__Fuse_Drawing_PolygonDrawable(::uStatic* __this, ::uObject* self)
{
    ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable* head = NULL;
    int count = 0;

    for (::uObject* enum_123 = ::app::Uno::Collections::IEnumerable__Fuse_Drawing_PolygonDrawable::GetEnumerator(::uPtr< ::uObject*>(self)); ::app::Uno::Collections::IEnumerator::MoveNext(::uPtr< ::uObject*>(enum_123)); )
    {
        ::app::Fuse::Drawing::PolygonDrawable* item = ::app::Uno::Collections::IEnumerator__Fuse_Drawing_PolygonDrawable::Current(::uPtr< ::uObject*>(enum_123));
        head = ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable__New_1(NULL, item, head);
        count++;
    }

    ::uArray* res = ::uNewArray(::app::Fuse::Drawing::PolygonDrawable__typeof(), count);

    for (::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable* current = head; current != NULL; current = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable*>(current)->Next)
    {
        res->ItemStrong< ::app::Fuse::Drawing::PolygonDrawable*>(--count) = ::uPtr< ::app::Uno::Collections::EnumerableExtensions_LinkedList__Fuse_Drawing_PolygonDrawable*>(current)->Item;
    }

    return res;
}

::uObject* EnumerableExtensions__Union__float2(::uStatic* __this, ::uObject* self, ::uObject* other)
{
    return (::uObject*)::app::Uno::Collections::UnionEnumerable__float2__New_1(NULL, self, other);
}

::uObject* EnumerableExtensions__Where__Fuse_Drawing_Tesselation_Face(::uStatic* __this, ::uObject* self, ::uDelegate* predicate)
{
    return (::uObject*)::app::Uno::Collections::WhereEnumerable__Fuse_Drawing_Tesselation_Face__New_1(NULL, self, predicate);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Animations_Animator__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Animations.Animator>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Behavior__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Behavior>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Drawing.Brush>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Drawing.Stroke>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Effects_Effect__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Effects.Effect>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Entities_Entity__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Entities.Entity>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Input_Capturer__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Input.Capturer>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_IViewport__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.IViewport>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Layouts_Column__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Layouts.Column>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Layouts_Row__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Layouts.Row>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Navigation_INavigationAnimator__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Navigation.INavigationAnimator>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Node>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_RenderTargetEntry__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.RenderTargetEntry>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Resources.ImageSource>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Style__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Style>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Transform__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Transform>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Triggers_Actions_TriggerAction__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Fuse.Triggers.State>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Uno_Graphics_PolygonFace__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Uno.Graphics.PolygonFace>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Uno.UX.FileSource>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Uno_UX_ITemplate__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Uno.UX.ITemplate>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* ICollection__Uno_UX_Resource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.ICollection<Uno.UX.Resource>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IDictionary__int__string__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IDictionary<int,string>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__float2__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<float2>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Behavior__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Behavior>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Controls_Internal_WrappedLine__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Controls.Internal.WrappedLine>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Controls_TextEdit_LineCacheLine__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Controls.TextEdit.LineCacheLine>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_Border__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.Border>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.Brush>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.Contour>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_PolygonDrawable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.PolygonDrawable>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.Stroke>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_Tesselation_Face__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.Face>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_Tesselation_HalfEdge__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.HalfEdge>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Drawing_Tesselation_Vertex__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Drawing.Tesselation.Vertex>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Effects_Effect__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Effects.Effect>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Input_Capturer__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Input.Capturer>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Layouts.DefinitionBase_ParseDataItem>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Node>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Physics_IRule__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Physics.IRule>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Reactive_Case__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Reactive.Case>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Resources.ImageSource>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Style__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Style>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Transform__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Transform>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Fuse.Triggers.State>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerable__Uno_UX_IFactory__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerable<Uno.UX.IFactory>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__float2__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<float2>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Behavior__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Behavior>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Controls_Internal_WrappedLine__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Controls.Internal.WrappedLine>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Controls_TextEdit_LineCacheLine__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Controls.TextEdit.LineCacheLine>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_Border__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.Border>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.Brush>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_Contour__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.Contour>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_PolygonDrawable__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.PolygonDrawable>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.Stroke>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_Tesselation_Face__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.Face>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_Tesselation_HalfEdge__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.HalfEdge>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Drawing_Tesselation_Vertex__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Drawing.Tesselation.Vertex>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Effects_Effect__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Effects.Effect>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Input_Capturer__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Input.Capturer>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Layouts.DefinitionBase_ParseDataItem>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Node>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Physics_IRule__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Physics.IRule>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Reactive_Case__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Reactive.Case>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Resources.ImageSource>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Style__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Style>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Transform__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Transform>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Fuse.Triggers.State>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.UX.FileSource>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IEnumerator__Uno_UX_IFactory__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IEnumerator<Uno.UX.IFactory>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Animations_Animator__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Animations.Animator>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Behavior__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Behavior>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Drawing_Brush__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Drawing.Brush>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Drawing_Stroke__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Drawing.Stroke>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Effects_Effect__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Effects.Effect>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Entities_Entity__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Entities.Entity>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Input_Capturer__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Input.Capturer>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_IViewport__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.IViewport>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Layouts_Column__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Layouts.Column>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Layouts_DefinitionBase_ParseDataItem__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Layouts.DefinitionBase_ParseDataItem>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Layouts_Row__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Layouts.Row>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Navigation_INavigationAnimator__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Navigation.INavigationAnimator>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Node__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Node>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Reactive_Case__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Reactive.Case>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_RenderTargetEntry__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.RenderTargetEntry>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Resources_ImageSource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Resources.ImageSource>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Style__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Style>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Transform__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Transform>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Triggers_Actions_TriggerAction__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Triggers.Actions.TriggerAction>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Fuse_Triggers_State__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Fuse.Triggers.State>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Uno_Graphics_PolygonFace__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Uno.Graphics.PolygonFace>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Uno_UX_FileSource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Uno.UX.FileSource>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Uno_UX_IFactory__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Uno.UX.IFactory>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Uno_UX_ITemplate__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Uno.UX.ITemplate>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IList__Uno_UX_Resource__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Collections.IList<Uno.UX.Resource>");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Collections/0.12.1/Extensions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IListExtensions__uType* IListExtensions__typeof()
{
    static ::uStaticStrong<IListExtensions__uType*> type;
    if (type != NULL) return type;

    type = (IListExtensions__uType*)::uAllocClassType(sizeof(IListExtensions__uType), "Uno.Collections.IListExtensions");

    return type;
}

::uObject* IListExtensions__RemoveLast__Fuse_IViewport(::uStatic* __this, ::uObject* self)
{
    int i = ::app::Uno::Collections::ICollection__Fuse_IViewport::Count(::uPtr< ::uObject*>(self)) - 1;
    ::uObject* t = ::app::Uno::Collections::IList__Fuse_IViewport::Item(self, i);
    ::app::Uno::Collections::IList__Fuse_IViewport::RemoveAt(self, i);
    return t;
}

::app::Fuse::RenderTargetEntry* IListExtensions__RemoveLast__Fuse_RenderTargetEntry(::uStatic* __this, ::uObject* self)
{
    int i = ::app::Uno::Collections::ICollection__Fuse_RenderTargetEntry::Count(::uPtr< ::uObject*>(self)) - 1;
    ::app::Fuse::RenderTargetEntry* t = ::app::Uno::Collections::IList__Fuse_RenderTargetEntry::Item(self, i);
    ::app::Uno::Collections::IList__Fuse_RenderTargetEntry::RemoveAt(self, i);
    return t;
}

int IListExtensions__RemoveLast__Uno_Graphics_PolygonFace(::uStatic* __this, ::uObject* self)
{
    int i = ::app::Uno::Collections::ICollection__Uno_Graphics_PolygonFace::Count(::uPtr< ::uObject*>(self)) - 1;
    int t = ::app::Uno::Collections::IList__Uno_Graphics_PolygonFace::Item(self, i);
    ::app::Uno::Collections::IList__Uno_Graphics_PolygonFace::RemoveAt(self, i);
    return t;
}

}}}
