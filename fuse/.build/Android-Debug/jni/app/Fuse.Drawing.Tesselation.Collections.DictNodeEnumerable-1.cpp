#include <app/Fuse.Drawing.Tesselation.Collections.DictNode__Fuse_Drawing_Tes-22834fbc.h>
#include <app/Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable__Fuse_D-1740f594.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Tesselation {
namespace Collections {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing.Polygons/0.10.5/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion__uType* DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion__typeof()
{
    static ::uStaticStrong<DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion__uType*> type;
    if (type != NULL) return type;

    type = (DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion__uType*)::uAllocClassType(sizeof(DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion__uType), "Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable<Fuse.Drawing.Tesselation.ActiveRegion>", false, 0, 1, 0);

    type->SetBaseType(::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion___typeof());

    type->SetStrongRefs(
        "_head", offsetof(DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion, _head));

    return type;
}

void DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion___ObjInit_1(DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion* __this, ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* head)
{
    ::app::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable__Fuse_Drawing_Tesselation_Collections_DictNode_Fuse_Drawing_Tesselation_ActiveRegion____ObjInit(__this, ::uPtr< ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion*>(head)->Next());
    __this->_head = head;
}

DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion* DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion__New_1(::uStatic* __this, ::app::Fuse::Drawing::Tesselation::Collections::DictNode__Fuse_Drawing_Tesselation_ActiveRegion* head)
{
    DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion* inst = (DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion*)::uAllocObject(sizeof(DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion), DictNodeEnumerable__Fuse_Drawing_Tesselation_ActiveRegion__typeof());
    inst->_ObjInit_1(head);
    return inst;
}

}}}}}
