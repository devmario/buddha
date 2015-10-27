#include <app/Fuse.Resources.FileImageSourceImpl.h>
#include <app/Fuse.Resources.HttpImageSourceImpl.h>
#include <app/Uno.Bool.h>
#include <app/Uno.WeakReference__Fuse_Resources_FileImageSourceImpl.h>
#include <app/Uno.WeakReference__Fuse_Resources_HttpImageSourceImpl.h>

namespace app {
namespace Uno {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WeakReference__Fuse_Resources_FileImageSourceImpl__uType* WeakReference__Fuse_Resources_FileImageSourceImpl__typeof()
{
    static ::uStaticStrong<WeakReference__Fuse_Resources_FileImageSourceImpl__uType*> type;
    if (type != NULL) return type;

    type = (WeakReference__Fuse_Resources_FileImageSourceImpl__uType*)::uAllocClassType(sizeof(WeakReference__Fuse_Resources_FileImageSourceImpl__uType), "Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_target", offsetof(WeakReference__Fuse_Resources_FileImageSourceImpl, _target));

    return type;
}

void WeakReference__Fuse_Resources_FileImageSourceImpl___ObjInit(WeakReference__Fuse_Resources_FileImageSourceImpl* __this, ::app::Fuse::Resources::FileImageSourceImpl* target)
{
    __this->_target = target;
}

WeakReference__Fuse_Resources_FileImageSourceImpl* WeakReference__Fuse_Resources_FileImageSourceImpl__New_1(::uStatic* __this, ::app::Fuse::Resources::FileImageSourceImpl* target)
{
    WeakReference__Fuse_Resources_FileImageSourceImpl* inst = (WeakReference__Fuse_Resources_FileImageSourceImpl*)::uAllocObject(sizeof(WeakReference__Fuse_Resources_FileImageSourceImpl), WeakReference__Fuse_Resources_FileImageSourceImpl__typeof());
    inst->_ObjInit(target);
    return inst;
}

bool WeakReference__Fuse_Resources_FileImageSourceImpl__TryGetTarget(WeakReference__Fuse_Resources_FileImageSourceImpl* __this, ::app::Fuse::Resources::FileImageSourceImpl** target)
{
    ::app::Fuse::Resources::FileImageSourceImpl* result = __this->_target;
    *target = result;
    return result != NULL;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WeakReference__Fuse_Resources_HttpImageSourceImpl__uType* WeakReference__Fuse_Resources_HttpImageSourceImpl__typeof()
{
    static ::uStaticStrong<WeakReference__Fuse_Resources_HttpImageSourceImpl__uType*> type;
    if (type != NULL) return type;

    type = (WeakReference__Fuse_Resources_HttpImageSourceImpl__uType*)::uAllocClassType(sizeof(WeakReference__Fuse_Resources_HttpImageSourceImpl__uType), "Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>", false, 0, 1, 0);

    type->SetStrongRefs(
        "_target", offsetof(WeakReference__Fuse_Resources_HttpImageSourceImpl, _target));

    return type;
}

void WeakReference__Fuse_Resources_HttpImageSourceImpl___ObjInit(WeakReference__Fuse_Resources_HttpImageSourceImpl* __this, ::app::Fuse::Resources::HttpImageSourceImpl* target)
{
    __this->_target = target;
}

WeakReference__Fuse_Resources_HttpImageSourceImpl* WeakReference__Fuse_Resources_HttpImageSourceImpl__New_1(::uStatic* __this, ::app::Fuse::Resources::HttpImageSourceImpl* target)
{
    WeakReference__Fuse_Resources_HttpImageSourceImpl* inst = (WeakReference__Fuse_Resources_HttpImageSourceImpl*)::uAllocObject(sizeof(WeakReference__Fuse_Resources_HttpImageSourceImpl), WeakReference__Fuse_Resources_HttpImageSourceImpl__typeof());
    inst->_ObjInit(target);
    return inst;
}

bool WeakReference__Fuse_Resources_HttpImageSourceImpl__TryGetTarget(WeakReference__Fuse_Resources_HttpImageSourceImpl* __this, ::app::Fuse::Resources::HttpImageSourceImpl** target)
{
    ::app::Fuse::Resources::HttpImageSourceImpl* result = __this->_target;
    *target = result;
    return result != NULL;
}

}}
