// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_I_MIXER_H__
#define __APP_FUSE_ANIMATIONS_I_MIXER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace UX { struct Property__bool; } } }
namespace app { namespace Uno { namespace UX { struct Property__float; } } }
namespace app { namespace Uno { namespace UX { struct Property__float4; } } }
namespace app { namespace Uno { namespace UX { struct Property__Fuse_Elements_Visibility; } } }

namespace app {
namespace Fuse {
namespace Animations {

::uInterfaceType* IMixer__typeof();

struct IMixer
{
    ::uObject*(*__fp_Register__bool)(void*, ::app::Uno::UX::Property__bool*, int);
    ::uObject*(*__fp_Register__float)(void*, ::app::Uno::UX::Property__float*, int);
    ::uObject*(*__fp_Register__float4)(void*, ::app::Uno::UX::Property__float4*, int);
    ::uObject*(*__fp_Register__Fuse_Elements_Visibility)(void*, ::app::Uno::UX::Property__Fuse_Elements_Visibility*, int);
    ::uObject*(*__fp_RegisterTransform)(void*, ::app::Fuse::Node*, int, int);

    static ::uObject* Register__bool(::uObject* __this, ::app::Uno::UX::Property__bool* property, int mode) { return ((IMixer*)uGetInterfacePtr(__this, IMixer__typeof()))->__fp_Register__bool((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), property, mode); }
    static ::uObject* Register__float(::uObject* __this, ::app::Uno::UX::Property__float* property, int mode) { return ((IMixer*)uGetInterfacePtr(__this, IMixer__typeof()))->__fp_Register__float((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), property, mode); }
    static ::uObject* Register__float4(::uObject* __this, ::app::Uno::UX::Property__float4* property, int mode) { return ((IMixer*)uGetInterfacePtr(__this, IMixer__typeof()))->__fp_Register__float4((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), property, mode); }
    static ::uObject* Register__Fuse_Elements_Visibility(::uObject* __this, ::app::Uno::UX::Property__Fuse_Elements_Visibility* property, int mode) { return ((IMixer*)uGetInterfacePtr(__this, IMixer__typeof()))->__fp_Register__Fuse_Elements_Visibility((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), property, mode); }
    static ::uObject* RegisterTransform(::uObject* __this, ::app::Fuse::Node* element, int mode, int priority) { return ((IMixer*)uGetInterfacePtr(__this, IMixer__typeof()))->__fp_RegisterTransform((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), element, mode, priority); }
};

}}}


#endif
