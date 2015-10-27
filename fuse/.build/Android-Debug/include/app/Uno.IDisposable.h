// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_DISPOSABLE_H__
#define __APP_UNO_I_DISPOSABLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

::uInterfaceType* IDisposable__typeof();

struct IDisposable
{
    void(*__fp_Dispose)(void*);

    static void Dispose(::uObject* __this) { ((IDisposable*)uGetInterfacePtr(__this, IDisposable__typeof()))->__fp_Dispose((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}


#endif
