// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_SKEW_H__
#define __APP_FUSE_ANIMATIONS_SKEW_H__

#include <app/Fuse.Animations.TransformAnimator__Fuse_Shear.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct Shear; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Skew;

struct Skew__uType : ::app::Fuse::Animations::TransformAnimator__Fuse_Shear__uType
{
};

Skew__uType* Skew__typeof();

void Skew__Update(Skew* __this, ::app::Fuse::Node* elm, ::app::Fuse::Shear* t, ::app::Uno::Float4 value);

struct Skew : ::app::Fuse::Animations::TransformAnimator__Fuse_Shear
{
};

}}}


#endif
