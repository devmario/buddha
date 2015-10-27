// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_ROTATE_H__
#define __APP_FUSE_ANIMATIONS_ROTATE_H__

#include <app/Fuse.Animations.TransformAnimator__Fuse_Rotation.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct Rotation; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Rotate;

struct Rotate__uType : ::app::Fuse::Animations::TransformAnimator__Fuse_Rotation__uType
{
};

Rotate__uType* Rotate__typeof();

void Rotate__Update(Rotate* __this, ::app::Fuse::Node* elm, ::app::Fuse::Rotation* t, ::app::Uno::Float4 value);

struct Rotate : ::app::Fuse::Animations::TransformAnimator__Fuse_Rotation
{
};

}}}


#endif
