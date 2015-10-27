// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_BEGIN_REMOVE_ARGS_H__
#define __APP_FUSE_BEGIN_REMOVE_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>

namespace app {
namespace Fuse {

struct BeginRemoveArgs;

struct BeginRemoveArgs__uType : ::app::Uno::EventArgs__uType
{
};

BeginRemoveArgs__uType* BeginRemoveArgs__typeof();

void BeginRemoveArgs___ObjInit_1(BeginRemoveArgs* __this);
bool BeginRemoveArgs__get_HasSubscribers(BeginRemoveArgs* __this);

struct BeginRemoveArgs : ::app::Uno::EventArgs
{
    int subscribers;

    void _ObjInit_1() { BeginRemoveArgs___ObjInit_1(this); }
    bool HasSubscribers() { return BeginRemoveArgs__get_HasSubscribers(this); }
};

}}


#endif
