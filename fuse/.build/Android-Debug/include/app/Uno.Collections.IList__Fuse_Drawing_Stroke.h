// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_I_LIST__FUSE_DRAWING_STROKE_H__
#define __APP_UNO_COLLECTIONS_I_LIST__FUSE_DRAWING_STROKE_H__

#include <app/Uno.Collections.ICollection__Fuse_Drawing_Stroke.h>
#include <app/Uno.Collections.IEnumerable__Fuse_Drawing_Stroke.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct Stroke; } } }

namespace app {
namespace Uno {
namespace Collections {

::uInterfaceType* IList__Fuse_Drawing_Stroke__typeof();

struct IList__Fuse_Drawing_Stroke
{
    ::app::Fuse::Drawing::Stroke*(*__fp_get_Item)(void*, int);

    static ::app::Fuse::Drawing::Stroke* Item(::uObject* __this, int index) { return ((IList__Fuse_Drawing_Stroke*)uGetInterfacePtr(__this, IList__Fuse_Drawing_Stroke__typeof()))->__fp_get_Item((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), index); }
};

}}}


#endif
