// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Vibration/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_VIBRATION_VIBRATE_H__
#define __APP_FUSE_VIBRATION_VIBRATE_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Vibration {

struct Vibrate;

struct Vibrate__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Vibrate__uType* Vibrate__typeof();

double Vibrate__get_Duration(Vibrate* __this);
void Vibrate__Perform(Vibrate* __this, ::app::Fuse::Node* target);
void Vibrate__set_Duration(Vibrate* __this, double value);

struct Vibrate : ::app::Fuse::Triggers::Actions::TriggerAction
{
    double _Duration;

    double Duration() { return Vibrate__get_Duration(this); }
    void Duration(double value) { Vibrate__set_Duration(this, value); }
};

}}}


#endif
