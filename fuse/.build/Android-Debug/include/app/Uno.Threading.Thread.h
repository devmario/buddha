// This file was generated based on '/usr/local/share/uno/Packages/Uno.Threading/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_THREAD_H__
#define __APP_UNO_THREADING_THREAD_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Threading {

struct Thread;

struct Thread__uType : ::uClassType
{
    void(*__fp_Start)(Thread*);
};

Thread__uType* Thread__typeof();

void Thread___ObjInit(Thread* __this, ::uDelegate* callback);
Thread* Thread__Create(::uStatic* __this, ::uDelegate* callback);
void Thread__Sleep(::uStatic* __this, int millis);

struct Thread : ::uObject
{
    ::uStrong< ::uDelegate*> _callback;

    void _ObjInit(::uDelegate* callback) { Thread___ObjInit(this, callback); }
    void Start() { (((Thread__uType*)this->__obj_type)->__fp_Start)(this); }
};

}}}


#endif
