// This file was generated based on '/usr/local/share/uno/Packages/Uno.Threading/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_FUTURE__STRING_H__
#define __APP_UNO_THREADING_FUTURE__STRING_H__

#include <app/Uno.Threading.Future.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Action_string_; } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Action_Uno_Exception_; } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Threading_Promise_string_; } } }
namespace app { namespace Uno { namespace Threading { struct Mutex; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Threading {

struct Future__string;

struct Future__string__uType : ::app::Uno::Threading::Future__uType
{
};

Future__string__uType* Future__string__typeof();

void Future__string___ObjInit_1(Future__string* __this, ::uObject* dispatcher);
void Future__string___ObjInit_2(Future__string* __this);
void Future__string__InternalReject(Future__string* __this, ::app::Uno::Exception* reason);
void Future__string__InternalResolve(Future__string* __this, ::uString* result);
void Future__string__Invoke__string(Future__string* __this, ::uDelegate* action, ::uString* arg);
void Future__string__Invoke__Uno_Exception(Future__string* __this, ::uDelegate* action, ::app::Uno::Exception* arg);
Future__string* Future__string__Then(Future__string* __this, ::uDelegate* fulfilled, ::uDelegate* rejected);

struct Future__string : ::app::Uno::Threading::Future
{
    ::uStrong< ::uString*> Result;
    ::uStrong< ::app::Uno::Exception*> Reason;
    ::uStrong< ::uObject*> _dispatcher;
    ::uStrong< ::app::Uno::Threading::Mutex*> _mutex;
    ::uStrong< ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception_*> _catchables;
    ::uStrong< ::app::Uno::Collections::Queue__Uno_Action_string_*> _thenables;
    ::uStrong< ::app::Uno::Collections::Queue__Uno_Threading_Promise_string_*> _chainables;

    void _ObjInit_1(::uObject* dispatcher) { Future__string___ObjInit_1(this, dispatcher); }
    void _ObjInit_2() { Future__string___ObjInit_2(this); }
    void InternalReject(::app::Uno::Exception* reason) { Future__string__InternalReject(this, reason); }
    void InternalResolve(::uString* result) { Future__string__InternalResolve(this, result); }
    void Invoke__string(::uDelegate* action, ::uString* arg) { Future__string__Invoke__string(this, action, arg); }
    void Invoke__Uno_Exception(::uDelegate* action, ::app::Uno::Exception* arg) { Future__string__Invoke__Uno_Exception(this, action, arg); }
    Future__string* Then(::uDelegate* fulfilled, ::uDelegate* rejected) { return Future__string__Then(this, fulfilled, rejected); }
};

}}}


#endif
