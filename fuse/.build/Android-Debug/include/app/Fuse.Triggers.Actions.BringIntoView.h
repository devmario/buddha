// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Triggers/Actions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_BRING_INTO_VIEW_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_BRING_INTO_VIEW_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct BringIntoView;

struct BringIntoView__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

BringIntoView__uType* BringIntoView__typeof();

void BringIntoView__Perform(BringIntoView* __this, ::app::Fuse::Node* target);

struct BringIntoView : ::app::Fuse::Triggers::Actions::TriggerAction
{
};

}}}}


#endif
