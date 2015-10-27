// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__UNO_U_X_FILE_SOURCE__UNO_WEAK_REFERENC_F005E285_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__UNO_U_X_FILE_SOURCE__UNO_WEAK_REFERENC_F005E285_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Uno_UX_FileSource__Uno_Weak-44ffd17c.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace UX { struct FileSource; } } }
namespace app { namespace Uno { struct WeakReference__Fuse_Resources_FileImageSourceImpl; } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_;

struct Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType : ::uClassType
{
};

Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___uType* Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___typeof();

void Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl____ObjInit_1(Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this);
void Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___Add(Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this, ::app::Uno::UX::FileSource* key, ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl* value);
Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___New_1(::uStatic* __this);
void Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___Rehash(Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this);
bool Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___Remove(Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this, ::app::Uno::UX::FileSource* key);
bool Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___TryGetValue(Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_* __this, ::app::Uno::UX::FileSource* key, ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl** value);

struct Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl_ : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    void _ObjInit_1() { Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl____ObjInit_1(this); }
    void Add(::app::Uno::UX::FileSource* key, ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl* value) { Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___Add(this, key, value); }
    void Rehash() { Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___Rehash(this); }
    bool Remove(::app::Uno::UX::FileSource* key) { return Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___Remove(this, key); }
    bool TryGetValue(::app::Uno::UX::FileSource* key, ::app::Uno::WeakReference__Fuse_Resources_FileImageSourceImpl** value) { return Dictionary__Uno_UX_FileSource__Uno_WeakReference_Fuse_Resources_FileImageSourceImpl___TryGetValue(this, key, value); }
};

}}}


#endif
