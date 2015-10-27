// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Launcher/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_LAUNCH_URI_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_LAUNCH_URI_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct LaunchUri;

struct LaunchUri__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

LaunchUri__uType* LaunchUri__typeof();

::uString* LaunchUri__get_Uri(LaunchUri* __this);
void LaunchUri__Perform(LaunchUri* __this, ::app::Fuse::Node* target);
void LaunchUri__set_Uri(LaunchUri* __this, ::uString* value);

struct LaunchUri : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::uString*> _Uri;

    ::uString* Uri() { return LaunchUri__get_Uri(this); }
    void Uri(::uString* value) { LaunchUri__set_Uri(this, value); }
};

}}}}


#endif
