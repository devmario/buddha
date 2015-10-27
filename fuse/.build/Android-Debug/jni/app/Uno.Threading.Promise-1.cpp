#include <app/Fuse.Camera.PictureResult.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.Promise__bool.h>
#include <app/Uno.Threading.Promise__Fuse_Camera_PictureResult.h>
#include <app/Uno.Threading.Promise__string.h>

namespace app {
namespace Uno {
namespace Threading {

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Threading/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Promise__bool__uType* Promise__bool__typeof()
{
    static ::uStaticStrong<Promise__bool__uType*> type;
    if (type != NULL) return type;

    type = (Promise__bool__uType*)::uAllocClassType(sizeof(Promise__bool__uType), "Uno.Threading.Promise<bool>", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Threading::Future__bool__typeof());

    return type;
}

void Promise__bool___ObjInit_3(Promise__bool* __this)
{
    ::app::Uno::Threading::Future__bool___ObjInit_2(__this);
}

Promise__bool* Promise__bool__New_4(::uStatic* __this)
{
    Promise__bool* inst = (Promise__bool*)::uAllocObject(sizeof(Promise__bool), Promise__bool__typeof());
    inst->_ObjInit_3();
    return inst;
}

void Promise__bool__Reject(Promise__bool* __this, ::app::Uno::Exception* reason)
{
    __this->InternalReject(reason);
}

void Promise__bool__Resolve(Promise__bool* __this, bool result)
{
    __this->InternalResolve(result);
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Threading/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Promise__Fuse_Camera_PictureResult__uType* Promise__Fuse_Camera_PictureResult__typeof()
{
    static ::uStaticStrong<Promise__Fuse_Camera_PictureResult__uType*> type;
    if (type != NULL) return type;

    type = (Promise__Fuse_Camera_PictureResult__uType*)::uAllocClassType(sizeof(Promise__Fuse_Camera_PictureResult__uType), "Uno.Threading.Promise<Fuse.Camera.PictureResult>", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Threading::Future__Fuse_Camera_PictureResult__typeof());

    return type;
}

void Promise__Fuse_Camera_PictureResult___ObjInit_3(Promise__Fuse_Camera_PictureResult* __this)
{
    ::app::Uno::Threading::Future__Fuse_Camera_PictureResult___ObjInit_2(__this);
}

Promise__Fuse_Camera_PictureResult* Promise__Fuse_Camera_PictureResult__New_4(::uStatic* __this)
{
    Promise__Fuse_Camera_PictureResult* inst = (Promise__Fuse_Camera_PictureResult*)::uAllocObject(sizeof(Promise__Fuse_Camera_PictureResult), Promise__Fuse_Camera_PictureResult__typeof());
    inst->_ObjInit_3();
    return inst;
}

void Promise__Fuse_Camera_PictureResult__Reject(Promise__Fuse_Camera_PictureResult* __this, ::app::Uno::Exception* reason)
{
    __this->InternalReject(reason);
}

void Promise__Fuse_Camera_PictureResult__Resolve(Promise__Fuse_Camera_PictureResult* __this, ::app::Fuse::Camera::PictureResult* result)
{
    __this->InternalResolve(result);
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Threading/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Promise__string__uType* Promise__string__typeof()
{
    static ::uStaticStrong<Promise__string__uType*> type;
    if (type != NULL) return type;

    type = (Promise__string__uType*)::uAllocClassType(sizeof(Promise__string__uType), "Uno.Threading.Promise<string>", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Threading::Future__string__typeof());

    return type;
}

void Promise__string___ObjInit_3(Promise__string* __this)
{
    ::app::Uno::Threading::Future__string___ObjInit_2(__this);
}

Promise__string* Promise__string__New_4(::uStatic* __this)
{
    Promise__string* inst = (Promise__string*)::uAllocObject(sizeof(Promise__string), Promise__string__typeof());
    inst->_ObjInit_3();
    return inst;
}

void Promise__string__Reject(Promise__string* __this, ::app::Uno::Exception* reason)
{
    __this->InternalReject(reason);
}

void Promise__string__Resolve(Promise__string* __this, ::uString* result)
{
    __this->InternalResolve(result);
}

}}}
