// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_LIST__FUSE_NAVIGATION_I_NAVIGATION_ANIMATOR_H__
#define __APP_UNO_COLLECTIONS_I_LIST__FUSE_NAVIGATION_I_NAVIGATION_ANIMATOR_H__

#include <app/Uno.Collections.ICollection__Fuse_Navigation_INavigationAnimator.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IList__Fuse_Navigation_INavigationAnimator__typeof();

struct IList__Fuse_Navigation_INavigationAnimator
{
    ::uObject*(*__fp_get_Item)(void*, int);

    static ::uObject* Item(::uObject* __this, int index) { return ((IList__Fuse_Navigation_INavigationAnimator*)uGetInterfacePtr(__this, IList__Fuse_Navigation_INavigationAnimator__typeof()))->__fp_get_Item((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index); }
};

}}}


#endif
