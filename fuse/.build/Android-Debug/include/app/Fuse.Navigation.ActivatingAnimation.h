// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_ACTIVATING_ANIMATION_H__
#define __APP_FUSE_NAVIGATION_ACTIVATING_ANIMATION_H__

#include <app/Fuse.Navigation.NavigationAnimation.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct NavigationArgs; } } }

namespace app {
namespace Fuse {
namespace Navigation {

struct ActivatingAnimation;

struct ActivatingAnimation__uType : ::app::Fuse::Navigation::NavigationAnimation__uType
{
};

ActivatingAnimation__uType* ActivatingAnimation__typeof();

void ActivatingAnimation__ForceUpdate(ActivatingAnimation* __this);
double ActivatingAnimation__InvertProgress(ActivatingAnimation* __this, double p);
void ActivatingAnimation__OnNavigationStateChanged(ActivatingAnimation* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state);

struct ActivatingAnimation : ::app::Fuse::Navigation::NavigationAnimation
{
    double InvertProgress(double p) { return ActivatingAnimation__InvertProgress(this, p); }
};

}}}


#endif
