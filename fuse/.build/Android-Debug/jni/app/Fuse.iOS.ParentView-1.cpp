#include <app/Fuse.iOS.ParentView__Fuse_Controls_NativeViewHost.h>

namespace app {
namespace Fuse {
namespace iOS {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ParentView__Fuse_Controls_NativeViewHost__uType* ParentView__Fuse_Controls_NativeViewHost__typeof()
{
    static ::uStaticStrong<ParentView__Fuse_Controls_NativeViewHost__uType*> type;
    if (type != NULL) return type;

    type = (ParentView__Fuse_Controls_NativeViewHost__uType*)::uAllocClassType(sizeof(ParentView__Fuse_Controls_NativeViewHost__uType), "Fuse.iOS.ParentView<Fuse.Controls.NativeViewHost>", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::NativeView__typeof());

    return type;
}

void ParentView__Fuse_Controls_NativeViewHost___ObjInit_2(ParentView__Fuse_Controls_NativeViewHost* __this)
{
    ::app::Fuse::iOS::NativeView___ObjInit_1(__this);
}

}}}
