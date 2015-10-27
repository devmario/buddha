// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__OBJECT__OBJECT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__OBJECT__OBJECT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__object__object;

struct Dictionary2_Bucket__object__object__uType : ::uStructType
{
};

Dictionary2_Bucket__object__object__uType* Dictionary2_Bucket__object__object__typeof();

struct Dictionary2_Bucket__object__object
{
    ::uStrong< ::uObject*> Key;
    ::uStrong< ::uObject*> Value;
    int State;
};

}}}


#endif
