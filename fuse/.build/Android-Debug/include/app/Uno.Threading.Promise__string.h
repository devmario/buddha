// This file was generated based on '/usr/local/share/uno/Packages/Uno.Threading/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_PROMISE__STRING_H__
#define __APP_UNO_THREADING_PROMISE__STRING_H__

#include <app/Uno.Threading.Future__string.h>
#include <Uno.h>
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Threading {

struct Promise__string;

struct Promise__string__uType : ::app::Uno::Threading::Future__string__uType
{
};

Promise__string__uType* Promise__string__typeof();

void Promise__string___ObjInit_3(Promise__string* __this);
Promise__string* Promise__string__New_4(::uStatic* __this);
void Promise__string__Reject(Promise__string* __this, ::app::Uno::Exception* reason);
void Promise__string__Resolve(Promise__string* __this, ::uString* result);

struct Promise__string : ::app::Uno::Threading::Future__string
{
    void _ObjInit_3() { Promise__string___ObjInit_3(this); }
    void Reject(::app::Uno::Exception* reason) { Promise__string__Reject(this, reason); }
    void Resolve(::uString* result) { Promise__string__Resolve(this, result); }
};

}}}


#endif
