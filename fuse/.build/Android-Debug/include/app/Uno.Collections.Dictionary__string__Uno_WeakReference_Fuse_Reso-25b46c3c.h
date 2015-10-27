// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_WEAK_REFERENCE_FUSE_RESO_25B46C3C_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_WEAK_REFERENCE_FUSE_RESO_25B46C3C_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_WeakReference_F-a7ba31a5.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct WeakReference__Fuse_Resources_HttpImageSourceImpl; } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_;

struct Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType : ::uClassType
{
};

Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___uType* Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___typeof();

void Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl____ObjInit_1(Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this);
void Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Add(Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this, ::uString* key, ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl* value);
Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___New_1(::uStatic* __this);
void Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Rehash(Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this);
bool Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Remove(Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this, ::uString* key);
bool Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___TryGetValue(Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_* __this, ::uString* key, ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl** value);

struct Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl_ : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl____ObjInit_1(this); }
    void Add(::uString* key, ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl* value) { Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Add(this, key, value); }
    void Rehash() { Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Rehash(this); }
    bool Remove(::uString* key) { return Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___Remove(this, key); }
    bool TryGetValue(::uString* key, ::app::Uno::WeakReference__Fuse_Resources_HttpImageSourceImpl** value) { return Dictionary__string__Uno_WeakReference_Fuse_Resources_HttpImageSourceImpl___TryGetValue(this, key, value); }
};

}}}


#endif
