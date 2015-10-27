// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_FALSE_H__
#define __APP_FUSE_TRIGGERS_WHILE_FALSE_H__

#include <app/Fuse.Triggers.IValue__bool.h>
#include <app/Fuse.Triggers.WhileBool.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileFalse;

struct WhileFalse__uType : ::app::Fuse::Triggers::WhileBool__uType
{
};

WhileFalse__uType* WhileFalse__typeof();

bool WhileFalse__get_IsOn(WhileFalse* __this);

struct WhileFalse : ::app::Fuse::Triggers::WhileBool
{
};

}}}


#endif
