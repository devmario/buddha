// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_WEAK_REFERENCE__FUSE_RESOURCES_FILE_IMAGE_SOURCE_IMPL_H__
#define __APP_UNO_WEAK_REFERENCE__FUSE_RESOURCES_FILE_IMAGE_SOURCE_IMPL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct FileImageSourceImpl; } } }

namespace app {
namespace Uno {

struct WeakReference__Fuse_Resources_FileImageSourceImpl;

struct WeakReference__Fuse_Resources_FileImageSourceImpl__uType : ::uClassType
{
};

WeakReference__Fuse_Resources_FileImageSourceImpl__uType* WeakReference__Fuse_Resources_FileImageSourceImpl__typeof();

void WeakReference__Fuse_Resources_FileImageSourceImpl___ObjInit(WeakReference__Fuse_Resources_FileImageSourceImpl* __this, ::app::Fuse::Resources::FileImageSourceImpl* target);
WeakReference__Fuse_Resources_FileImageSourceImpl* WeakReference__Fuse_Resources_FileImageSourceImpl__New_1(::uStatic* __this, ::app::Fuse::Resources::FileImageSourceImpl* target);
bool WeakReference__Fuse_Resources_FileImageSourceImpl__TryGetTarget(WeakReference__Fuse_Resources_FileImageSourceImpl* __this, ::app::Fuse::Resources::FileImageSourceImpl** target);

struct WeakReference__Fuse_Resources_FileImageSourceImpl : ::uObject
{
    ::uStrong< ::app::Fuse::Resources::FileImageSourceImpl*> _target;

    void _ObjInit(::app::Fuse::Resources::FileImageSourceImpl* target) { WeakReference__Fuse_Resources_FileImageSourceImpl___ObjInit(this, target); }
    bool TryGetTarget(::app::Fuse::Resources::FileImageSourceImpl** target) { return WeakReference__Fuse_Resources_FileImageSourceImpl__TryGetTarget(this, target); }
};

}}


#endif
