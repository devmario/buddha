// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_SPIN_H__
#define __APP_FUSE_ANIMATIONS_SPIN_H__

#include <app/Fuse.Animations.OpenAnimator.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct AnimatorState; } } }
namespace app { namespace Fuse { namespace Animations { struct CreateStateParams; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Animations {

struct Spin;

struct Spin__uType : ::app::Fuse::Animations::OpenAnimator__uType
{
};

Spin__uType* Spin__typeof();

::app::Fuse::Animations::AnimatorState* Spin__CreateState(Spin* __this, ::app::Fuse::Animations::CreateStateParams* p);
double Spin__get_Frequency(Spin* __this);
::app::Fuse::Node* Spin__get_Target(Spin* __this);
void Spin__set_Frequency(Spin* __this, double value);
void Spin__set_Target(Spin* __this, ::app::Fuse::Node* value);

struct Spin : ::app::Fuse::Animations::OpenAnimator
{
    double _hertz;
    ::uStrong< ::app::Fuse::Node*> _Target;

    double Frequency() { return Spin__get_Frequency(this); }
    ::app::Fuse::Node* Target() { return Spin__get_Target(this); }
    void Frequency(double value) { Spin__set_Frequency(this, value); }
    void Target(::app::Fuse::Node* value) { Spin__set_Target(this, value); }
};

}}}


#endif
