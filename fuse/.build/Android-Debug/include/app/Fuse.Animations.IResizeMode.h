// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_I_RESIZE_MODE_H__
#define __APP_FUSE_ANIMATIONS_I_RESIZE_MODE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Animations {

::uInterfaceType* IResizeMode__typeof();

struct IResizeMode
{
    bool(*__fp_GetSizeChange)(void*, ::app::Fuse::Node*, ::app::Uno::Float2*, ::app::Uno::Float2*);

    static bool GetSizeChange(::uObject* __this, ::app::Fuse::Node* nr, ::app::Uno::Float2* oldSize, ::app::Uno::Float2* newSize) { return ((IResizeMode*)uGetInterfacePtr(__this, IResizeMode__typeof()))->__fp_GetSizeChange((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), nr, oldSize, newSize); }
};

}}}


#endif
