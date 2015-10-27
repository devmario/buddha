// This file was generated based on '/usr/local/share/uno/Packages/Uno.Threading/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_PROMISE__FUSE_CAMERA_PICTURE_RESULT_H__
#define __APP_UNO_THREADING_PROMISE__FUSE_CAMERA_PICTURE_RESULT_H__

#include <app/Uno.Threading.Future__Fuse_Camera_PictureResult.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Camera { struct PictureResult; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Threading {

struct Promise__Fuse_Camera_PictureResult;

struct Promise__Fuse_Camera_PictureResult__uType : ::app::Uno::Threading::Future__Fuse_Camera_PictureResult__uType
{
};

Promise__Fuse_Camera_PictureResult__uType* Promise__Fuse_Camera_PictureResult__typeof();

void Promise__Fuse_Camera_PictureResult___ObjInit_3(Promise__Fuse_Camera_PictureResult* __this);
Promise__Fuse_Camera_PictureResult* Promise__Fuse_Camera_PictureResult__New_4(::uStatic* __this);
void Promise__Fuse_Camera_PictureResult__Reject(Promise__Fuse_Camera_PictureResult* __this, ::app::Uno::Exception* reason);
void Promise__Fuse_Camera_PictureResult__Resolve(Promise__Fuse_Camera_PictureResult* __this, ::app::Fuse::Camera::PictureResult* result);

struct Promise__Fuse_Camera_PictureResult : ::app::Uno::Threading::Future__Fuse_Camera_PictureResult
{
    void _ObjInit_3() { Promise__Fuse_Camera_PictureResult___ObjInit_3(this); }
    void Reject(::app::Uno::Exception* reason) { Promise__Fuse_Camera_PictureResult__Reject(this, reason); }
    void Resolve(::app::Fuse::Camera::PictureResult* result) { Promise__Fuse_Camera_PictureResult__Resolve(this, result); }
};

}}}


#endif
