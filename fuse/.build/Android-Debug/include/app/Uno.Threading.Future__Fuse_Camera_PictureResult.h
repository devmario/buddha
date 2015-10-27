// This file was generated based on '/usr/local/share/uno/Packages/Uno.Threading/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_FUTURE__FUSE_CAMERA_PICTURE_RESULT_H__
#define __APP_UNO_THREADING_FUTURE__FUSE_CAMERA_PICTURE_RESULT_H__

#include <app/Uno.Threading.Future.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Camera { struct PictureResult; } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Action_Fuse_Camera_PictureResult_; } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Action_Uno_Exception_; } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_; } } }
namespace app { namespace Uno { namespace Threading { struct Mutex; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Uno {
namespace Threading {

struct Future__Fuse_Camera_PictureResult;

struct Future__Fuse_Camera_PictureResult__uType : ::app::Uno::Threading::Future__uType
{
};

Future__Fuse_Camera_PictureResult__uType* Future__Fuse_Camera_PictureResult__typeof();

void Future__Fuse_Camera_PictureResult___ObjInit_1(Future__Fuse_Camera_PictureResult* __this, ::uObject* dispatcher);
void Future__Fuse_Camera_PictureResult___ObjInit_2(Future__Fuse_Camera_PictureResult* __this);
void Future__Fuse_Camera_PictureResult__InternalReject(Future__Fuse_Camera_PictureResult* __this, ::app::Uno::Exception* reason);
void Future__Fuse_Camera_PictureResult__InternalResolve(Future__Fuse_Camera_PictureResult* __this, ::app::Fuse::Camera::PictureResult* result);
void Future__Fuse_Camera_PictureResult__Invoke__Fuse_Camera_PictureResult(Future__Fuse_Camera_PictureResult* __this, ::uDelegate* action, ::app::Fuse::Camera::PictureResult* arg);
void Future__Fuse_Camera_PictureResult__Invoke__Uno_Exception(Future__Fuse_Camera_PictureResult* __this, ::uDelegate* action, ::app::Uno::Exception* arg);
Future__Fuse_Camera_PictureResult* Future__Fuse_Camera_PictureResult__Then(Future__Fuse_Camera_PictureResult* __this, ::uDelegate* fulfilled, ::uDelegate* rejected);

struct Future__Fuse_Camera_PictureResult : ::app::Uno::Threading::Future
{
    ::uStrong< ::app::Fuse::Camera::PictureResult*> Result;
    ::uStrong< ::app::Uno::Exception*> Reason;
    ::uStrong< ::uObject*> _dispatcher;
    ::uStrong< ::app::Uno::Threading::Mutex*> _mutex;
    ::uStrong< ::app::Uno::Collections::Queue__Uno_Action_Uno_Exception_*> _catchables;
    ::uStrong< ::app::Uno::Collections::Queue__Uno_Action_Fuse_Camera_PictureResult_*> _thenables;
    ::uStrong< ::app::Uno::Collections::Queue__Uno_Threading_Promise_Fuse_Camera_PictureResult_*> _chainables;

    void _ObjInit_1(::uObject* dispatcher) { Future__Fuse_Camera_PictureResult___ObjInit_1(this, dispatcher); }
    void _ObjInit_2() { Future__Fuse_Camera_PictureResult___ObjInit_2(this); }
    void InternalReject(::app::Uno::Exception* reason) { Future__Fuse_Camera_PictureResult__InternalReject(this, reason); }
    void InternalResolve(::app::Fuse::Camera::PictureResult* result) { Future__Fuse_Camera_PictureResult__InternalResolve(this, result); }
    void Invoke__Fuse_Camera_PictureResult(::uDelegate* action, ::app::Fuse::Camera::PictureResult* arg) { Future__Fuse_Camera_PictureResult__Invoke__Fuse_Camera_PictureResult(this, action, arg); }
    void Invoke__Uno_Exception(::uDelegate* action, ::app::Uno::Exception* arg) { Future__Fuse_Camera_PictureResult__Invoke__Uno_Exception(this, action, arg); }
    Future__Fuse_Camera_PictureResult* Then(::uDelegate* fulfilled, ::uDelegate* rejected) { return Future__Fuse_Camera_PictureResult__Then(this, fulfilled, rejected); }
};

}}}


#endif
