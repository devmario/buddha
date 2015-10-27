// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_FRUSTUM_H__
#define __APP_FUSE_I_FRUSTUM_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {

::uInterfaceType* IFrustum__typeof();

struct IFrustum
{
    ::app::Uno::Float4x4(*__fp_GetProjectionTransform)(void*, ::uObject*);
    ::app::Uno::Float4x4(*__fp_GetProjectionTransformInverse)(void*, ::uObject*);
    ::app::Uno::Float4x4(*__fp_GetViewTransform)(void*, ::uObject*);
    ::app::Uno::Float4x4(*__fp_GetViewTransformInverse)(void*, ::uObject*);

    static ::app::Uno::Float4x4 GetProjectionTransform(::uObject* __this, ::uObject* viewport);
    static ::app::Uno::Float4x4 GetProjectionTransformInverse(::uObject* __this, ::uObject* viewport);
    static ::app::Uno::Float4x4 GetViewTransform(::uObject* __this, ::uObject* viewport);
    static ::app::Uno::Float4x4 GetViewTransformInverse(::uObject* __this, ::uObject* viewport);
};

}}

#include <app/Uno.Float4x4.h>

namespace app {
namespace Fuse {

inline ::app::Uno::Float4x4 IFrustum::GetProjectionTransform(::uObject* __this, ::uObject* viewport) { return ((IFrustum*)uGetInterfacePtr(__this, IFrustum__typeof()))->__fp_GetProjectionTransform((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), viewport); }
inline ::app::Uno::Float4x4 IFrustum::GetProjectionTransformInverse(::uObject* __this, ::uObject* viewport) { return ((IFrustum*)uGetInterfacePtr(__this, IFrustum__typeof()))->__fp_GetProjectionTransformInverse((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), viewport); }
inline ::app::Uno::Float4x4 IFrustum::GetViewTransform(::uObject* __this, ::uObject* viewport) { return ((IFrustum*)uGetInterfacePtr(__this, IFrustum__typeof()))->__fp_GetViewTransform((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), viewport); }
inline ::app::Uno::Float4x4 IFrustum::GetViewTransformInverse(::uObject* __this, ::uObject* viewport) { return ((IFrustum*)uGetInterfacePtr(__this, IFrustum__typeof()))->__fp_GetViewTransformInverse((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), viewport); }

}}


#endif
