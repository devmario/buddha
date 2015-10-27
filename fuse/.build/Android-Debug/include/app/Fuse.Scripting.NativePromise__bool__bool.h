// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Scripting/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_NATIVE_PROMISE__BOOL__BOOL_H__
#define __APP_FUSE_SCRIPTING_NATIVE_PROMISE__BOOL__BOOL_H__

#include <app/Fuse.Scripting.NativeMember.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }

namespace app {
namespace Fuse {
namespace Scripting {

struct NativePromise__bool__bool;

struct NativePromise__bool__bool__uType : ::app::Fuse::Scripting::NativeMember__uType
{
};

NativePromise__bool__bool__uType* NativePromise__bool__bool__typeof();

void NativePromise__bool__bool___ObjInit_2(NativePromise__bool__bool* __this, ::uString* name, ::uDelegate* futureFactory, ::uDelegate* resultConverter);
::uObject* NativePromise__bool__bool__CreateObject(NativePromise__bool__bool* __this, ::app::Fuse::Scripting::Context* c);
NativePromise__bool__bool* NativePromise__bool__bool__New_2(::uStatic* __this, ::uString* name, ::uDelegate* futureFactory, ::uDelegate* resultConverter);

struct NativePromise__bool__bool : ::app::Fuse::Scripting::NativeMember
{
    ::uStrong< ::uDelegate*> _futureFactory;
    ::uStrong< ::uDelegate*> _resultConverter;

    void _ObjInit_2(::uString* name, ::uDelegate* futureFactory, ::uDelegate* resultConverter) { NativePromise__bool__bool___ObjInit_2(this, name, futureFactory, resultConverter); }
};

}}}


#endif
