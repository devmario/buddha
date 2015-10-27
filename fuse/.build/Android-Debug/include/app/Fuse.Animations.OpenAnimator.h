// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_OPEN_ANIMATOR_H__
#define __APP_FUSE_ANIMATIONS_OPEN_ANIMATOR_H__

#include <app/Fuse.Animations.Animator.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Animations {

struct OpenAnimator;

struct OpenAnimator__uType : ::app::Fuse::Animations::Animator__uType
{
};

OpenAnimator__uType* OpenAnimator__typeof();

int OpenAnimator__get_AnimatorVariant(OpenAnimator* __this);
double OpenAnimator__get_Duration(OpenAnimator* __this);
bool OpenAnimator__get_HasDuration(OpenAnimator* __this);
double OpenAnimator__GetDelay(OpenAnimator* __this, int dir, double totalDuration);
double OpenAnimator__GetDurationWithDelay(OpenAnimator* __this, int dir);
void OpenAnimator__set_Duration(OpenAnimator* __this, double value);

struct OpenAnimator : ::app::Fuse::Animations::Animator
{
    double _duration;
    bool _hasDuration;

    double Duration() { return OpenAnimator__get_Duration(this); }
    bool HasDuration() { return OpenAnimator__get_HasDuration(this); }
    double GetDelay(int dir, double totalDuration) { return OpenAnimator__GetDelay(this, dir, totalDuration); }
    void Duration(double value) { OpenAnimator__set_Duration(this, value); }
};

}}}


#endif
