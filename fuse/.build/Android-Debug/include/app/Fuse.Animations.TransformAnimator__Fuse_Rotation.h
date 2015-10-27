// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_TRANSFORM_ANIMATOR__FUSE_ROTATION_H__
#define __APP_FUSE_ANIMATIONS_TRANSFORM_ANIMATOR__FUSE_ROTATION_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct Rotation; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Animations {

struct TransformAnimator__Fuse_Rotation;

struct TransformAnimator__Fuse_Rotation__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
    void(*__fp_Update)(TransformAnimator__Fuse_Rotation*, ::app::Fuse::Node*, ::app::Fuse::Rotation*, ::app::Uno::Float4);
};

TransformAnimator__Fuse_Rotation__uType* TransformAnimator__Fuse_Rotation__typeof();

::app::Fuse::Animations::AnimatorState* TransformAnimator__Fuse_Rotation__CreateState(TransformAnimator__Fuse_Rotation* __this, ::app::Fuse::Animations::CreateStateParams* p);
int TransformAnimator__Fuse_Rotation__get_Priority(TransformAnimator__Fuse_Rotation* __this);
::app::Fuse::Node* TransformAnimator__Fuse_Rotation__get_Target(TransformAnimator__Fuse_Rotation* __this);
void TransformAnimator__Fuse_Rotation__set_Priority(TransformAnimator__Fuse_Rotation* __this, int value);
void TransformAnimator__Fuse_Rotation__set_Target(TransformAnimator__Fuse_Rotation* __this, ::app::Fuse::Node* value);

struct TransformAnimator__Fuse_Rotation : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Node*> _Target;
    int _Priority;

    int Priority() { return TransformAnimator__Fuse_Rotation__get_Priority(this); }
    ::app::Fuse::Node* Target() { return TransformAnimator__Fuse_Rotation__get_Target(this); }
    void Priority(int value) { TransformAnimator__Fuse_Rotation__set_Priority(this, value); }
    void Target(::app::Fuse::Node* value) { TransformAnimator__Fuse_Rotation__set_Target(this, value); }
    void Update(::app::Fuse::Node* elm, ::app::Fuse::Rotation* transform, ::app::Uno::Float4 value);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Animations {

inline void TransformAnimator__Fuse_Rotation::Update(::app::Fuse::Node* elm, ::app::Fuse::Rotation* transform, ::app::Uno::Float4 value) { (((TransformAnimator__Fuse_Rotation__uType*)this->__obj_type)->__fp_Update)(this, elm, transform, value); }

}}}


#endif
