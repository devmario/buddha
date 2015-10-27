// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_COLLECTION__UNO_U_X_I_TEMPLATE_H__
#define __APP_UNO_COLLECTIONS_I_COLLECTION__UNO_U_X_I_TEMPLATE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* ICollection__Uno_UX_ITemplate__typeof();

struct ICollection__Uno_UX_ITemplate
{
    void(*__fp_Add)(void*, ::uObject*);
    int(*__fp_get_Count)(void*);

    static void Add(::uObject* __this, ::uObject* item) { ((ICollection__Uno_UX_ITemplate*)uGetInterfacePtr(__this, ICollection__Uno_UX_ITemplate__typeof()))->__fp_Add((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), item); }
    static int Count(::uObject* __this) { return ((ICollection__Uno_UX_ITemplate*)uGetInterfacePtr(__this, ICollection__Uno_UX_ITemplate__typeof()))->__fp_get_Count((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
};

}}}


#endif
