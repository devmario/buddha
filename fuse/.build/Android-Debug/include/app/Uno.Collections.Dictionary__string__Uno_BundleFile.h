// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_BUNDLE_FILE_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_BUNDLE_FILE_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_BundleFile.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct BundleFile; } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Uno_BundleFile;

struct Dictionary__string__Uno_BundleFile__uType : ::uClassType
{
};

Dictionary__string__Uno_BundleFile__uType* Dictionary__string__Uno_BundleFile__typeof();

void Dictionary__string__Uno_BundleFile___ObjInit_1(Dictionary__string__Uno_BundleFile* __this);
void Dictionary__string__Uno_BundleFile__Add(Dictionary__string__Uno_BundleFile* __this, ::uString* key, ::app::Uno::BundleFile* value);
::app::Uno::BundleFile* Dictionary__string__Uno_BundleFile__get_Item(Dictionary__string__Uno_BundleFile* __this, ::uString* key);
Dictionary__string__Uno_BundleFile* Dictionary__string__Uno_BundleFile__New_1(::uStatic* __this);
void Dictionary__string__Uno_BundleFile__Rehash(Dictionary__string__Uno_BundleFile* __this);
void Dictionary__string__Uno_BundleFile__set_Item(Dictionary__string__Uno_BundleFile* __this, ::uString* key, ::app::Uno::BundleFile* value);

struct Dictionary__string__Uno_BundleFile : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__string__Uno_BundleFile___ObjInit_1(this); }
    void Add(::uString* key, ::app::Uno::BundleFile* value) { Dictionary__string__Uno_BundleFile__Add(this, key, value); }
    ::app::Uno::BundleFile* Item(::uString* key) { return Dictionary__string__Uno_BundleFile__get_Item(this, key); }
    void Rehash() { Dictionary__string__Uno_BundleFile__Rehash(this); }
    void Item(::uString* key, ::app::Uno::BundleFile* value) { Dictionary__string__Uno_BundleFile__set_Item(this, key, value); }
};

}}}


#endif
