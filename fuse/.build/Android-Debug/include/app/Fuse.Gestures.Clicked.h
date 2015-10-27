// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Gestures/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_CLICKED_H__
#define __APP_FUSE_GESTURES_CLICKED_H__

#include <app/Fuse.Gestures.ClickerTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct PointerEventArgs; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct Clicked;

struct Clicked__uType : ::app::Fuse::Gestures::ClickerTrigger__uType
{
};

Clicked__uType* Clicked__typeof();

void Clicked___ObjInit_3(Clicked* __this);
Clicked* Clicked__New_1(::uStatic* __this);
void Clicked__OnClicked(Clicked* __this, ::app::Fuse::Input::PointerEventArgs* args, int clickCount);
void Clicked__OnRooted(Clicked* __this, ::app::Fuse::Node* elm);
void Clicked__OnUnrooted(Clicked* __this, ::app::Fuse::Node* elm);

struct Clicked : ::app::Fuse::Gestures::ClickerTrigger
{
    ::uStrong< ::uDelegate*> Handler;

    void _ObjInit_3() { Clicked___ObjInit_3(this); }
    void OnClicked(::app::Fuse::Input::PointerEventArgs* args, int clickCount) { Clicked__OnClicked(this, args, clickCount); }
};

}}}


#endif
