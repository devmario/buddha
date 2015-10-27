// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__UNO_BUNDLE_FILE_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY2_BUCKET__STRING__UNO_BUNDLE_FILE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct BundleFile; } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary2_Bucket__string__Uno_BundleFile;

struct Dictionary2_Bucket__string__Uno_BundleFile__uType : ::uStructType
{
};

Dictionary2_Bucket__string__Uno_BundleFile__uType* Dictionary2_Bucket__string__Uno_BundleFile__typeof();

struct Dictionary2_Bucket__string__Uno_BundleFile
{
    ::uStrong< ::uString*> Key;
    ::uStrong< ::app::Uno::BundleFile*> Value;
    int State;
};

}}}


#endif
