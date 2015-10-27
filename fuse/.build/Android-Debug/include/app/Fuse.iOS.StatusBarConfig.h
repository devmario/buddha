// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_STATUS_BAR_CONFIG_H__
#define __APP_FUSE_I_O_S_STATUS_BAR_CONFIG_H__

#include <app/Fuse.Behavior.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { namespace Collections { struct List__Fuse_iOS_StatusBarConfig; } } }

namespace app {
namespace Fuse {
namespace iOS {

struct StatusBarConfig;

extern ::uStaticStrong< ::app::Uno::Collections::List__Fuse_iOS_StatusBarConfig*> StatusBarConfig___stack;

struct StatusBarConfig__uType : ::app::Fuse::Behavior__uType
{
};

StatusBarConfig__uType* StatusBarConfig__typeof();

void StatusBarConfig___ObjInit_1(StatusBarConfig* __this);
void StatusBarConfig___TypeInit(::uStatic* __this);
void StatusBarConfig__Apply(::uStatic* __this);
bool StatusBarConfig__get_IsVisible(StatusBarConfig* __this);
StatusBarConfig* StatusBarConfig__New_1(::uStatic* __this);
void StatusBarConfig__OnRooted(StatusBarConfig* __this, ::app::Fuse::Node* n);
void StatusBarConfig__OnUnrooted(StatusBarConfig* __this, ::app::Fuse::Node* n);
void StatusBarConfig__set_IsVisible(StatusBarConfig* __this, bool value);

struct StatusBarConfig : ::app::Fuse::Behavior
{
    bool _isVisible;
    bool _hasIsVisible;

    void _ObjInit_1() { StatusBarConfig___ObjInit_1(this); }
    bool IsVisible() { return StatusBarConfig__get_IsVisible(this); }
    void IsVisible(bool value) { StatusBarConfig__set_IsVisible(this, value); }
};

}}}


#endif
