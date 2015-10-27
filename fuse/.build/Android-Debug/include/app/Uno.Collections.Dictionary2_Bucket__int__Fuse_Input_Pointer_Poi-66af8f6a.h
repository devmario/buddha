// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__INT__FUSE_INPUT_POINTER_POI_66AF8F6A_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__INT__FUSE_INPUT_POINTER_POI_66AF8F6A_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Input { struct Pointer_PointerRecord; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord;

struct Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord__uType : ::uStructType
{
};

Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord__uType* Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord__typeof();

struct Dictionary2_Bucket__int__Fuse_Input_Pointer_PointerRecord
{
    int Key;
    ::uStrong< ::app::Fuse::Input::Pointer_PointerRecord*> Value;
    int State;
};

}}}


#endif
