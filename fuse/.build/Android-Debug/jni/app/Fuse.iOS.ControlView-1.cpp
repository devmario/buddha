#include <app/Fuse.iOS.ControlView__Fuse_Controls_TextInput.h>

namespace app {
namespace Fuse {
namespace iOS {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ControlView__Fuse_Controls_TextInput__uType* ControlView__Fuse_Controls_TextInput__typeof()
{
    static ::uStaticStrong<ControlView__Fuse_Controls_TextInput__uType*> type;
    if (type != NULL) return type;

    type = (ControlView__Fuse_Controls_TextInput__uType*)::uAllocClassType(sizeof(ControlView__Fuse_Controls_TextInput__uType), "Fuse.iOS.ControlView<Fuse.Controls.TextInput>", false, 1, 0, 0);

    type->SetBaseType(::app::Fuse::iOS::View__typeof());

    type->SetInterfaces(
        ::app::Fuse::Scripting::INameScope__typeof(), offsetof(ControlView__Fuse_Controls_TextInput__uType, __interface_0));

    return type;
}

void ControlView__Fuse_Controls_TextInput___ObjInit_2(ControlView__Fuse_Controls_TextInput* __this)
{
    ::app::Fuse::iOS::View___ObjInit_1(__this);
}

}}}
