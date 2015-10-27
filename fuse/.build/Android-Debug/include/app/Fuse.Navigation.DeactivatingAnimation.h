// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_DEACTIVATING_ANIMATION_H__
#define __APP_FUSE_NAVIGATION_DEACTIVATING_ANIMATION_H__

#include <app/Fuse.Navigation.NavigationAnimation.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Navigation { struct NavigationArgs; } } }

namespace app {
namespace Fuse {
namespace Navigation {

struct DeactivatingAnimation;

struct DeactivatingAnimation__uType : ::app::Fuse::Navigation::NavigationAnimation__uType
{
};

DeactivatingAnimation__uType* DeactivatingAnimation__typeof();

void DeactivatingAnimation__ForceUpdate(DeactivatingAnimation* __this);
void DeactivatingAnimation__OnNavigationStateChanged(DeactivatingAnimation* __this, ::uObject* sender, ::app::Fuse::Navigation::NavigationArgs* state);

struct DeactivatingAnimation : ::app::Fuse::Navigation::NavigationAnimation
{
};

}}}


#endif
