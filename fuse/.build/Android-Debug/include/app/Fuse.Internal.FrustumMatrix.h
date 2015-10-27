// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_FRUSTUM_MATRIX_H__
#define __APP_FUSE_INTERNAL_FRUSTUM_MATRIX_H__

#include <Uno.h>
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Fuse {
namespace Internal {

struct FrustumMatrix__uType : ::uClassType
{
};

FrustumMatrix__uType* FrustumMatrix__typeof();

::app::Uno::Float4x4 FrustumMatrix__OrthoLH(::uStatic* __this, float width, float height, float near, float far);
::app::Uno::Float4x4 FrustumMatrix__OrthoLHInverse(::uStatic* __this, float width, float height, float near, float far);
::app::Uno::Float4x4 FrustumMatrix__OrthoRH(::uStatic* __this, float width, float height, float zNear, float zFar);
::app::Uno::Float4x4 FrustumMatrix__OrthoRHInverse(::uStatic* __this, float width, float height, float zNear, float zFar);

}}}


#endif
