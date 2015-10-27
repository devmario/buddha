// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_TEXT_ENTERED_H__
#define __APP_FUSE_INPUT_TEXT_ENTERED_H__

#include <app/Fuse.NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextE-c9c5bffc.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Input {

struct TextEntered;

struct TextEntered__uType : ::app::Fuse::NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs__uType
{
};

TextEntered__uType* TextEntered__typeof();

void TextEntered___ObjInit_1(TextEntered* __this);
TextEntered* TextEntered__New_1(::uStatic* __this);

struct TextEntered : ::app::Fuse::NodeEvent__Fuse_Input_TextEnteredHandler__Fuse_Input_TextEnteredArgs
{
    void _ObjInit_1() { TextEntered___ObjInit_1(this); }
};

}}}


#endif
