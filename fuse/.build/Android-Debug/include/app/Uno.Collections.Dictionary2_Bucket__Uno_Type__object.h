// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__UNO_TYPE__OBJECT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__UNO_TYPE__OBJECT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__Uno_Type__object;

struct Dictionary2_Bucket__Uno_Type__object__uType : ::uStructType
{
};

Dictionary2_Bucket__Uno_Type__object__uType* Dictionary2_Bucket__Uno_Type__object__typeof();

struct Dictionary2_Bucket__Uno_Type__object
{
    ::uStrong< ::uType*> Key;
    ::uStrong< ::uObject*> Value;
    int State;
};

}}}


#endif
