// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_LOADING_H__
#define __APP_FUSE_TRIGGERS_WHILE_LOADING_H__

#include <app/Fuse.Triggers.WhileTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileLoading;

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> WhileLoading___whileLoadingProp;

struct WhileLoading__uType : ::app::Fuse::Triggers::WhileTrigger__uType
{
};

WhileLoading__uType* WhileLoading__typeof();

void WhileLoading___TypeInit(::uStatic* __this);
bool WhileLoading__IsLoading(::uStatic* __this, ::app::Fuse::Node* n);
void WhileLoading__OnRooted(WhileLoading* __this, ::app::Fuse::Node* n);

struct WhileLoading : ::app::Fuse::Triggers::WhileTrigger
{
};

}}}


#endif
