// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_I_ASYNC_ARRAY_H__
#define __APP_FUSE_REACTIVE_I_ASYNC_ARRAY_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct Dispatcher; } } }

namespace app {
namespace Fuse {
namespace Reactive {

::uInterfaceType* IAsyncArray__typeof();

struct IAsyncArray
{
    void(*__fp_Enum)(void*, ::app::Fuse::Reactive::Dispatcher*, ::uDelegate*);

    static void Enum(::uObject* __this, ::app::Fuse::Reactive::Dispatcher* thread, ::uDelegate* callback) { ((IAsyncArray*)uGetInterfacePtr(__this, IAsyncArray__typeof()))->__fp_Enum((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), thread, callback); }
};

}}}


#endif
