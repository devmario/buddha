// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CHANGE__BOOL_H__
#define __APP_FUSE_ANIMATIONS_CHANGE__BOOL_H__

#include <app/Fuse.Animations.TrackAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct Converter__bool; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Uno { namespace UX { struct Property__bool; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct Change__bool;

struct Change__bool__uType : ::app::Fuse::Animations::TrackAnimator__uType
{
};

Change__bool__uType* Change__bool__typeof();

::app::Fuse::Animations::AnimatorState* Change__bool__CreateState(Change__bool* __this, ::app::Fuse::Animations::CreateStateParams* p);
bool Change__bool__get_IsContinuous(Change__bool* __this);
::app::Uno::UX::Property__bool* Change__bool__get_Target(Change__bool* __this);
void Change__bool__set_Target(Change__bool* __this, ::app::Uno::UX::Property__bool* value);

struct Change__bool : ::app::Fuse::Animations::TrackAnimator
{
    ::uStrong< ::app::Fuse::Animations::Converter__bool*> ContinuousConverter;
    ::uStrong< ::app::Uno::UX::Property__bool*> _Target;

    bool IsContinuous() { return Change__bool__get_IsContinuous(this); }
    ::app::Uno::UX::Property__bool* Target() { return Change__bool__get_Target(this); }
    void Target(::app::Uno::UX::Property__bool* value) { Change__bool__set_Target(this, value); }
};

}}}


#endif
