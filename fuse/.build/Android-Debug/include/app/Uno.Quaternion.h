// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_QUATERNION_H__
#define __APP_UNO_QUATERNION_H__

#include <Uno.h>
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float3x3; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Uno {

struct Quaternion__uType : ::uClassType
{
};

Quaternion__uType* Quaternion__typeof();

::app::Uno::Float4 Quaternion__FromEulerAngle(::uStatic* __this, float pitch, float yaw, float roll);
::app::Uno::Float4 Quaternion__FromEulerAngle_1(::uStatic* __this, ::app::Uno::Float3 v);
::app::Uno::Float4 Quaternion__FromEulerAngleDegrees(::uStatic* __this, ::app::Uno::Float3 v);
::app::Uno::Float4 Quaternion__FromEulerAngleDegrees_1(::uStatic* __this, float pitch, float yaw, float roll);
::app::Uno::Float4 Quaternion__Mul(::uStatic* __this, ::app::Uno::Float4 left, ::app::Uno::Float4 right);
float Quaternion__NormalizeAngleDegrees(::uStatic* __this, float angle);
::app::Uno::Float3 Quaternion__NormalizeAnglesDegrees(::uStatic* __this, ::app::Uno::Float3 angles);
::app::Uno::Float4 Quaternion__RotationAxis(::uStatic* __this, ::app::Uno::Float3 axisNormalized, float angleRadians);
::app::Uno::Float4 Quaternion__RotationMatrix(::uStatic* __this, ::app::Uno::Float3x3 matrix);
::app::Uno::Float3 Quaternion__ToEulerAngle(::uStatic* __this, ::app::Uno::Float4 q1);
::app::Uno::Float3 Quaternion__ToEulerAngleDegrees(::uStatic* __this, ::app::Uno::Float4 q1);

}}


#endif
