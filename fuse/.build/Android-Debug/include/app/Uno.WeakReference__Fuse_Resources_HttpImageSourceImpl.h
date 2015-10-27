// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_WEAK_REFERENCE__FUSE_RESOURCES_HTTP_IMAGE_SOURCE_IMPL_H__
#define __APP_UNO_WEAK_REFERENCE__FUSE_RESOURCES_HTTP_IMAGE_SOURCE_IMPL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct HttpImageSourceImpl; } } }

namespace app {
namespace Uno {

struct WeakReference__Fuse_Resources_HttpImageSourceImpl;

struct WeakReference__Fuse_Resources_HttpImageSourceImpl__uType : ::uClassType
{
};

WeakReference__Fuse_Resources_HttpImageSourceImpl__uType* WeakReference__Fuse_Resources_HttpImageSourceImpl__typeof();

void WeakReference__Fuse_Resources_HttpImageSourceImpl___ObjInit(WeakReference__Fuse_Resources_HttpImageSourceImpl* __this, ::app::Fuse::Resources::HttpImageSourceImpl* target);
WeakReference__Fuse_Resources_HttpImageSourceImpl* WeakReference__Fuse_Resources_HttpImageSourceImpl__New_1(::uStatic* __this, ::app::Fuse::Resources::HttpImageSourceImpl* target);
bool WeakReference__Fuse_Resources_HttpImageSourceImpl__TryGetTarget(WeakReference__Fuse_Resources_HttpImageSourceImpl* __this, ::app::Fuse::Resources::HttpImageSourceImpl** target);

struct WeakReference__Fuse_Resources_HttpImageSourceImpl : ::uObject
{
    ::uStrong< ::app::Fuse::Resources::HttpImageSourceImpl*> _target;

    void _ObjInit(::app::Fuse::Resources::HttpImageSourceImpl* target) { WeakReference__Fuse_Resources_HttpImageSourceImpl___ObjInit(this, target); }
    bool TryGetTarget(::app::Fuse::Resources::HttpImageSourceImpl** target) { return WeakReference__Fuse_Resources_HttpImageSourceImpl__TryGetTarget(this, target); }
};

}}


#endif
