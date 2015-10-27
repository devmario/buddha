// This file was generated based on '/usr/local/share/uno/Packages/Uno.Threading/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_FUTURE_H__
#define __APP_UNO_THREADING_FUTURE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Threading {

struct Future;

struct Future__uType : ::uClassType
{
};

Future__uType* Future__typeof();

void Future___ObjInit(Future* __this);
int Future__get_State(Future* __this);
void Future__set_State(Future* __this, int value);

struct Future : ::uObject
{
    int _State;

    void _ObjInit() { Future___ObjInit(this); }
    int State() { return Future__get_State(this); }
    void State(int value) { Future__set_State(this, value); }
};

}}}


#endif
