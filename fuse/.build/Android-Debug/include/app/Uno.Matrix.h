// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_MATRIX_H__
#define __APP_UNO_MATRIX_H__

#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }
namespace app { namespace Uno { struct Float4x4; } }

namespace app {
namespace Uno {

struct Matrix__uType : ::uClassType
{
};

Matrix__uType* Matrix__typeof();

bool Matrix__Decompose(::uStatic* __this, ::app::Uno::Float4x4 value, ::app::Uno::Float3* scale, ::app::Uno::Float4* rotationQuaternion, ::app::Uno::Float3* translation);
::app::Uno::Float4x4 Matrix__Invert_2(::uStatic* __this, ::app::Uno::Float4x4 value);
::app::Uno::Float4x4 Matrix__Mul_10(::uStatic* __this, ::app::Uno::Float4x4 left, ::app::Uno::Float4x4 right);
::app::Uno::Float4x4 Matrix__Mul_2(::uStatic* __this, ::app::Uno::Float4x4 a, ::app::Uno::Float4x4 b, ::app::Uno::Float4x4 c);
::app::Uno::Float4x4 Matrix__Mul_3(::uStatic* __this, ::app::Uno::Float4x4 a, ::app::Uno::Float4x4 b, ::app::Uno::Float4x4 c, ::app::Uno::Float4x4 d);
::app::Uno::Float4x4 Matrix__RotationAxis(::uStatic* __this, ::app::Uno::Float3 axisNormalized, float angleRadians);
::app::Uno::Float4x4 Matrix__RotationQuaternion(::uStatic* __this, ::app::Uno::Float4 rotation);
::app::Uno::Float4x4 Matrix__RotationZ(::uStatic* __this, float angleRadians);
::app::Uno::Float4x4 Matrix__Scaling(::uStatic* __this, float scale);
::app::Uno::Float4x4 Matrix__Scaling_1(::uStatic* __this, float x, float y, float z);
::app::Uno::Float4x4 Matrix__Scaling_2(::uStatic* __this, ::app::Uno::Float3 scale);
::app::Uno::Float4x4 Matrix__Shear(::uStatic* __this, ::app::Uno::Float2 angle);
::app::Uno::Float4x4 Matrix__Translation(::uStatic* __this, float x, float y, float z);
::app::Uno::Float4x4 Matrix__Translation_1(::uStatic* __this, ::app::Uno::Float3 offset);

}}


#endif
