// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_BUTTON_H__
#define __APP_FUSE_I_O_S_BUTTON_H__

#include <app/Fuse.iOS.View.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Fuse { struct StyleProperty__Fuse_iOS_Button__float4; } }

namespace app {
namespace Fuse {
namespace iOS {

struct Button;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Button__float4*> Button__DisabledColorProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Button__float4*> Button__HighlightedColorProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Button__float4*> Button__NormalColorProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_iOS_Button__float4*> Button__SelectedColorProperty;

struct Button__uType : ::app::Fuse::iOS::View__uType
{
};

Button__uType* Button__typeof();

void Button___TypeInit_1(::uStatic* __this);
void Button__OnButtonPropertyChanged(::uStatic* __this, Button* t);

struct Button : ::app::Fuse::iOS::View
{
};

}}}


#endif
