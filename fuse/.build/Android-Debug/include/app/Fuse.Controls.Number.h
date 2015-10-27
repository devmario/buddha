// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_NUMBER_H__
#define __APP_FUSE_CONTROLS_NUMBER_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { struct TextControl; } } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Number__float; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Number__string; } }

namespace app {
namespace Fuse {
namespace Controls {

struct Number;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Number__string*> Number__FormatProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Number__float*> Number__ValueProperty;

struct Number__uType : ::app::Fuse::Controls::Panel__uType
{
};

Number__uType* Number__typeof();

void Number___TypeInit_4(::uStatic* __this);
void Number__FormatChanged(::uStatic* __this, Number* n);
::uString* Number__get_Format(Number* __this);
float Number__get_Value(Number* __this);
void Number__OnRooted(Number* __this);
void Number__OnValueChanged(Number* __this, float n, ::uObject* origin);
void Number__set_Format(Number* __this, ::uString* value);
void Number__set_Value(Number* __this, float value);
void Number__StaticValueChanged(::uStatic* __this, Number* n);
void Number__UpdateValue(Number* __this);

struct Number : ::app::Fuse::Controls::Panel
{
    ::uStrong< ::app::Fuse::Controls::TextControl*> _text;
    ::uStrong< ::uDelegate*> ValueChanged;

    ::uString* Format() { return Number__get_Format(this); }
    float Value() { return Number__get_Value(this); }
    void OnValueChanged(float n, ::uObject* origin) { Number__OnValueChanged(this, n, origin); }
    void Format(::uString* value) { Number__set_Format(this, value); }
    void Value(float value) { Number__set_Value(this, value); }
    void UpdateValue() { Number__UpdateValue(this); }
};

}}}


#endif
