// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_PLACEHOLDER_H__
#define __APP_FUSE_CONTROLS_PLACEHOLDER_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.ContentControl.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Controls {

struct Placeholder;

struct Placeholder__uType : ::app::Fuse::Controls::ContentControl__uType
{
};

Placeholder__uType* Placeholder__typeof();

void Placeholder__AcquireTarget(Placeholder* __this);
::app::Fuse::Node* Placeholder__get_Target(Placeholder* __this);
void Placeholder__set_Target(Placeholder* __this, ::app::Fuse::Node* value);

struct Placeholder : ::app::Fuse::Controls::ContentControl
{
    ::uStrong< ::app::Fuse::Node*> _Target;

    void AcquireTarget() { Placeholder__AcquireTarget(this); }
    ::app::Fuse::Node* Target() { return Placeholder__get_Target(this); }
    void Target(::app::Fuse::Node* value) { Placeholder__set_Target(this, value); }
};

}}}


#endif
