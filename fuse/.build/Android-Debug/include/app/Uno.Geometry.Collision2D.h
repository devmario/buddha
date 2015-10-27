// This file was generated based on '/usr/local/share/uno/Packages/Uno.Geometry/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GEOMETRY_COLLISION2_D_H__
#define __APP_UNO_GEOMETRY_COLLISION2_D_H__

#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Uno {
namespace Geometry {

struct Collision2D__uType : ::uClassType
{
};

Collision2D__uType* Collision2D__typeof();

float Collision2D__AngleBetween(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b);
::app::Uno::Float2 Collision2D__LineIntersectionPointVector(::uStatic* __this, ::app::Uno::Float2 ps1, ::app::Uno::Float2 v1, ::app::Uno::Float2 ps2, ::app::Uno::Float2 v2);
bool Collision2D__TriangleContainsPoint(::uStatic* __this, ::app::Uno::Float2 A, ::app::Uno::Float2 B, ::app::Uno::Float2 C, ::app::Uno::Float2 P);

}}}


#endif
