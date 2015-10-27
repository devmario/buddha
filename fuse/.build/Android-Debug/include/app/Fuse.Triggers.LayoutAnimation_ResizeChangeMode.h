// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_LAYOUT_ANIMATION_RESIZE_CHANGE_MODE_H__
#define __APP_FUSE_TRIGGERS_LAYOUT_ANIMATION_RESIZE_CHANGE_MODE_H__

#include <app/Fuse.Animations.IResizeMode.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct LayoutAnimation_ResizeChangeMode;

struct LayoutAnimation_ResizeChangeMode__uType : ::uClassType
{
    ::app::Fuse::Animations::IResizeMode __interface_0;
};

LayoutAnimation_ResizeChangeMode__uType* LayoutAnimation_ResizeChangeMode__typeof();

void LayoutAnimation_ResizeChangeMode___ObjInit(LayoutAnimation_ResizeChangeMode* __this);
bool LayoutAnimation_ResizeChangeMode__GetSizeChange(LayoutAnimation_ResizeChangeMode* __this, ::app::Fuse::Node* n, ::app::Uno::Float2* oldSize, ::app::Uno::Float2* newSize);
LayoutAnimation_ResizeChangeMode* LayoutAnimation_ResizeChangeMode__New_1(::uStatic* __this);

struct LayoutAnimation_ResizeChangeMode : ::uObject
{
    void _ObjInit() { LayoutAnimation_ResizeChangeMode___ObjInit(this); }
    bool GetSizeChange(::app::Fuse::Node* n, ::app::Uno::Float2* oldSize, ::app::Uno::Float2* newSize) { return LayoutAnimation_ResizeChangeMode__GetSizeChange(this, n, oldSize, newSize); }
};

}}}


#endif
