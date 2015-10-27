// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_RESIZE_H__
#define __APP_FUSE_ANIMATIONS_RESIZE_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Resize;

struct Resize__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Resize__uType* Resize__typeof();

::app::Fuse::Animations::AnimatorState* Resize__CreateState(Resize* __this, ::app::Fuse::Animations::CreateStateParams* p);
::uObject* Resize__get_RelativeTo(Resize* __this);
::app::Fuse::Node* Resize__get_Target(Resize* __this);
void Resize__set_RelativeTo(Resize* __this, ::uObject* value);
void Resize__set_Target(Resize* __this, ::app::Fuse::Node* value);

struct Resize : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::uObject*> _resizeMode;
    ::uStrong< ::app::Fuse::Node*> _Target;

    ::uObject* RelativeTo() { return Resize__get_RelativeTo(this); }
    ::app::Fuse::Node* Target() { return Resize__get_Target(this); }
    void RelativeTo(::uObject* value) { Resize__set_RelativeTo(this, value); }
    void Target(::app::Fuse::Node* value) { Resize__set_Target(this, value); }
};

}}}


#endif
