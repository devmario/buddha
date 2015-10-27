// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/Gestures/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_SCROLLABLE_GOTO_H__
#define __APP_FUSE_GESTURES_SCROLLABLE_GOTO_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct ScrollView; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct ScrollableGoto;

struct ScrollableGoto__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

ScrollableGoto__uType* ScrollableGoto__typeof();

::app::Fuse::Controls::ScrollView* ScrollableGoto__get_Target(ScrollableGoto* __this);
void ScrollableGoto__Perform(ScrollableGoto* __this, ::app::Fuse::Node* target);
void ScrollableGoto__set_Target(ScrollableGoto* __this, ::app::Fuse::Controls::ScrollView* value);

struct ScrollableGoto : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::app::Uno::Float2 _position;
    bool _hasPosition;
    ::app::Uno::Float2 _relativePosition;
    bool _hasRelativePosition;
    ::uStrong< ::app::Fuse::Controls::ScrollView*> _Target;

    ::app::Fuse::Controls::ScrollView* Target() { return ScrollableGoto__get_Target(this); }
    void Target(::app::Fuse::Controls::ScrollView* value) { ScrollableGoto__set_Target(this, value); }
};

}}}


#endif
