// This file was generated based on '/usr/local/share/uno/Packages/Fuse.iOS/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_I_O_S_PLAIN_TEXT_INPUT_H__
#define __APP_FUSE_I_O_S_PLAIN_TEXT_INPUT_H__

#include <app/Fuse.iOS.TextInput.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace iOS {

struct PlainTextInput;

struct PlainTextInput__uType : ::app::Fuse::iOS::TextInput__uType
{
};

PlainTextInput__uType* PlainTextInput__typeof();

void PlainTextInput___ObjInit_4(PlainTextInput* __this);
PlainTextInput* PlainTextInput__New_2(::uStatic* __this);

struct PlainTextInput : ::app::Fuse::iOS::TextInput
{
    void _ObjInit_4() { PlainTextInput___ObjInit_4(this); }
};

}}}


#endif
