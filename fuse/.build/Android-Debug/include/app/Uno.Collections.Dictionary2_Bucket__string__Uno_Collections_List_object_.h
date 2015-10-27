// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__UNO_COLLECTIONS_LIST_OBJECT__H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__UNO_COLLECTIONS_LIST_OBJECT__H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__object; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__string__Uno_Collections_List_object_;

struct Dictionary2_Bucket__string__Uno_Collections_List_object___uType : ::uStructType
{
};

Dictionary2_Bucket__string__Uno_Collections_List_object___uType* Dictionary2_Bucket__string__Uno_Collections_List_object___typeof();

struct Dictionary2_Bucket__string__Uno_Collections_List_object_
{
    ::uStrong< ::uString*> Key;
    ::uStrong< ::app::Uno::Collections::List__object*> Value;
    int State;
};

}}}


#endif
