// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Navigation/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_NAVIGATE_TOGGLE_H__
#define __APP_FUSE_NAVIGATION_NAVIGATE_TOGGLE_H__

#include <app/Fuse.Navigation.NavigationTriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct NavigateToggle;

struct NavigateToggle__uType : ::app::Fuse::Navigation::NavigationTriggerAction__uType
{
};

NavigateToggle__uType* NavigateToggle__typeof();

::app::Fuse::Node* NavigateToggle__get_Target(NavigateToggle* __this);
void NavigateToggle__Perform_1(NavigateToggle* __this, ::uObject* ctx, ::app::Fuse::Node* n);
void NavigateToggle__set_Target(NavigateToggle* __this, ::app::Fuse::Node* value);

struct NavigateToggle : ::app::Fuse::Navigation::NavigationTriggerAction
{
    ::uStrong< ::app::Fuse::Node*> _Target;

    ::app::Fuse::Node* Target() { return NavigateToggle__get_Target(this); }
    void Target(::app::Fuse::Node* value) { NavigateToggle__set_Target(this, value); }
};

}}}


#endif
