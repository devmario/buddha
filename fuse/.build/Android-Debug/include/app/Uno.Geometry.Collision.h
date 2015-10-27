// This file was generated based on '/usr/local/share/uno/Packages/Uno.Geometry/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GEOMETRY_COLLISION_H__
#define __APP_UNO_GEOMETRY_COLLISION_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Geometry { struct Box; } } }
namespace app { namespace Uno { namespace Geometry { struct Ray; } } }

namespace app {
namespace Uno {
namespace Geometry {

struct Collision__uType : ::uClassType
{
};

Collision__uType* Collision__typeof();

bool Collision__RayIntersectsBox_1(::uStatic* __this, ::app::Uno::Geometry::Ray ray, ::app::Uno::Geometry::Box box, float* distance);

}}}


#endif
