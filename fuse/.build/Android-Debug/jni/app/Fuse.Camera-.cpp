#include <app/Android.Base.Types.String.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.com.fuse.Native.Camera.h>
#include <app/Android.com.fuse.Native.CameraTask.h>
#include <app/Fuse.Camera.AndroidCameraImpl.h>
#include <app/Fuse.Camera.AndroidCameraImpl_DispatchTakePicture.h>
#include <app/Fuse.Camera.AndroidCameraImpl_TakePictureTask.h>
#include <app/Fuse.Camera.Camera.h>
#include <app/Fuse.Camera.PictureResult.h>
#include <app/Fuse.Camera.TakePictureOptions.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.Future__Fuse_Camera_PictureResult.h>
#include <app/Uno.Threading.Promise__Fuse_Camera_PictureResult.h>

namespace app {
namespace Fuse {
namespace Camera {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Android::com::fuse::Native::CameraTask*> AndroidCameraImpl___pendingTask;

AndroidCameraImpl__uType* AndroidCameraImpl__typeof()
{
    static ::uStaticStrong<AndroidCameraImpl__uType*> type;
    if (type != NULL) return type;

    type = (AndroidCameraImpl__uType*)::uAllocClassType(sizeof(AndroidCameraImpl__uType), "Fuse.Camera.AndroidCameraImpl");

    return type;
}

void AndroidCameraImpl__TakePicture(::uStatic* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options)
{
    ::app::Fuse::Camera::AndroidCameraImpl_DispatchTakePicture* d = ::app::Fuse::Camera::AndroidCameraImpl_DispatchTakePicture__New_1(NULL, futurePath, options);
    ::uPtr< ::app::Fuse::Camera::AndroidCameraImpl_DispatchTakePicture*>(d)->Fire();
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AndroidCameraImpl_DispatchTakePicture__uType* AndroidCameraImpl_DispatchTakePicture__typeof()
{
    static ::uStaticStrong<AndroidCameraImpl_DispatchTakePicture__uType*> type;
    if (type != NULL) return type;

    type = (AndroidCameraImpl_DispatchTakePicture__uType*)::uAllocClassType(sizeof(AndroidCameraImpl_DispatchTakePicture__uType), "Fuse.Camera.AndroidCameraImpl.DispatchTakePicture", false, 0, 2, 0);

    type->SetStrongRefs(
        "_futurePath", offsetof(AndroidCameraImpl_DispatchTakePicture, _futurePath),
        "_options", offsetof(AndroidCameraImpl_DispatchTakePicture, _options));

    return type;
}

void AndroidCameraImpl_DispatchTakePicture___ObjInit(AndroidCameraImpl_DispatchTakePicture* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options)
{
    __this->_futurePath = futurePath;
    __this->_options = options;
}

void AndroidCameraImpl_DispatchTakePicture__Fire(AndroidCameraImpl_DispatchTakePicture* __this)
{
    ::app::Fuse::Camera::AndroidCameraImpl___pendingTask = (::app::Android::com::fuse::Native::CameraTask*)::app::Fuse::Camera::AndroidCameraImpl_TakePictureTask__New_3(NULL, __this->_futurePath, __this->_options);
    ::app::Android::com::fuse::Native::Camera__TakePicture(NULL, (::uObject*)::app::Fuse::Camera::AndroidCameraImpl___pendingTask);
}

AndroidCameraImpl_DispatchTakePicture* AndroidCameraImpl_DispatchTakePicture__New_1(::uStatic* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options)
{
    AndroidCameraImpl_DispatchTakePicture* inst = (AndroidCameraImpl_DispatchTakePicture*)::uAllocObject(sizeof(AndroidCameraImpl_DispatchTakePicture), AndroidCameraImpl_DispatchTakePicture__typeof());
    inst->_ObjInit(futurePath, options);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AndroidCameraImpl_TakePictureTask__uType* AndroidCameraImpl_TakePictureTask__typeof()
{
    static ::uStaticStrong<AndroidCameraImpl_TakePictureTask__uType*> type;
    if (type != NULL) return type;

    type = (AndroidCameraImpl_TakePictureTask__uType*)::uAllocClassType(sizeof(AndroidCameraImpl_TakePictureTask__uType), "Fuse.Camera.AndroidCameraImpl.TakePictureTask", false, 2, 3, 0);

    type->SetBaseType(::app::Android::com::fuse::Native::CameraTask__typeof());
    type->__fp_OnFailed = (void(*)(::app::Android::com::fuse::Native::CameraTask*, ::uObject*))AndroidCameraImpl_TakePictureTask__OnFailed;
    type->__fp_OnSuccess = (void(*)(::app::Android::com::fuse::Native::CameraTask*, ::uObject*))AndroidCameraImpl_TakePictureTask__OnSuccess;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(AndroidCameraImpl_TakePictureTask__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(AndroidCameraImpl_TakePictureTask__uType, __interface_1));

    type->SetStrongRefs(
        "_futurePath", offsetof(AndroidCameraImpl_TakePictureTask, _futurePath),
        "_options", offsetof(AndroidCameraImpl_TakePictureTask, _options),
        "_payload", offsetof(AndroidCameraImpl_TakePictureTask, _payload));

    return type;
}

void AndroidCameraImpl_TakePictureTask___ObjInit_4(AndroidCameraImpl_TakePictureTask* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options)
{
    ::app::Android::com::fuse::Native::CameraTask___ObjInit_3(__this, ::uPtr< ::app::Fuse::Camera::TakePictureOptions*>(options)->TargetWidth(), ::uPtr< ::app::Fuse::Camera::TakePictureOptions*>(options)->TargetHeight(), ::uPtr< ::app::Fuse::Camera::TakePictureOptions*>(options)->CorrectOrientation());
    __this->_futurePath = futurePath;
    __this->_options = options;
}

void AndroidCameraImpl_TakePictureTask__fireResultCode(AndroidCameraImpl_TakePictureTask* __this)
{
    ::app::Fuse::Camera::AndroidCameraImpl___pendingTask = NULL;

    if (__this->_success)
    {
        ::uPtr< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(__this->_futurePath)->Resolve(::app::Fuse::Camera::PictureResult__New_1(NULL, __this->_payload, 0));
    }
    else
    {
        ::uPtr< ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult*>(__this->_futurePath)->Reject(::app::Uno::Exception__New_2(NULL, __this->_payload));
    }
}

AndroidCameraImpl_TakePictureTask* AndroidCameraImpl_TakePictureTask__New_3(::uStatic* __this, ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath, ::app::Fuse::Camera::TakePictureOptions* options)
{
    AndroidCameraImpl_TakePictureTask* inst = (AndroidCameraImpl_TakePictureTask*)::uAllocObject(sizeof(AndroidCameraImpl_TakePictureTask), AndroidCameraImpl_TakePictureTask__typeof());
    inst->_ObjInit_4(futurePath, options);
    return inst;
}

void AndroidCameraImpl_TakePictureTask__OnFailed(AndroidCameraImpl_TakePictureTask* __this, ::uObject* message)
{
    __this->_payload = ::app::Android::Base::Types::String__JavaToUno(NULL, message);
    __this->_success = false;
    __this->fireResultCode();
}

void AndroidCameraImpl_TakePictureTask__OnSuccess(AndroidCameraImpl_TakePictureTask* __this, ::uObject* path)
{
    __this->_payload = ::app::Android::Base::Types::String__JavaToUno(NULL, path);
    __this->_success = true;
    __this->fireResultCode();
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Camera__uType* Camera__typeof()
{
    static ::uStaticStrong<Camera__uType*> type;
    if (type != NULL) return type;

    type = (Camera__uType*)::uAllocClassType(sizeof(Camera__uType), "Fuse.Camera.Camera");

    return type;
}

::app::Uno::Threading::Future__Fuse_Camera_PictureResult* Camera__TakePicture_1(::uStatic* __this, ::app::Fuse::Camera::TakePictureOptions* options)
{
    {
        ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult* futurePath = ::app::Uno::Threading::Promise__Fuse_Camera_PictureResult__New_4(NULL);
        ::app::Fuse::Camera::AndroidCameraImpl__TakePicture(NULL, futurePath, options);
        return (::app::Uno::Threading::Future__Fuse_Camera_PictureResult*)futurePath;
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

PictureResult__uType* PictureResult__typeof()
{
    static ::uStaticStrong<PictureResult__uType*> type;
    if (type != NULL) return type;

    type = (PictureResult__uType*)::uAllocClassType(sizeof(PictureResult__uType), "Fuse.Camera.PictureResult", false, 0, 1, 0);

    type->SetStrongRefs(
        "_Path", offsetof(PictureResult, _Path));

    return type;
}

void PictureResult___ObjInit(PictureResult* __this, ::uString* path, int rotation)
{
    __this->Path(path);
    __this->Rotation(rotation);
}

::uString* PictureResult__get_Path(PictureResult* __this)
{
    return __this->_Path;
}

int PictureResult__get_Rotation(PictureResult* __this)
{
    return __this->_Rotation;
}

PictureResult* PictureResult__New_1(::uStatic* __this, ::uString* path, int rotation)
{
    PictureResult* inst = (PictureResult*)::uAllocObject(sizeof(PictureResult), PictureResult__typeof());
    inst->_ObjInit(path, rotation);
    return inst;
}

void PictureResult__set_Path(PictureResult* __this, ::uString* value)
{
    __this->_Path = value;
}

void PictureResult__set_Rotation(PictureResult* __this, int value)
{
    __this->_Rotation = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TakePictureOptions__uType* TakePictureOptions__typeof()
{
    static ::uStaticStrong<TakePictureOptions__uType*> type;
    if (type != NULL) return type;

    type = (TakePictureOptions__uType*)::uAllocClassType(sizeof(TakePictureOptions__uType), "Fuse.Camera.TakePictureOptions", false, 0, 0, 0);

    return type;
}

void TakePictureOptions___ObjInit(TakePictureOptions* __this)
{
    __this->_targetWidth = -1;
    __this->_targetHeight = -1;
    __this->_correctOrientation = true;
}

bool TakePictureOptions__get_CorrectOrientation(TakePictureOptions* __this)
{
    return __this->_correctOrientation;
}

int TakePictureOptions__get_TargetHeight(TakePictureOptions* __this)
{
    return __this->_targetHeight;
}

bool TakePictureOptions__get_TargetHeightSet(TakePictureOptions* __this)
{
    return __this->_TargetHeightSet;
}

int TakePictureOptions__get_TargetWidth(TakePictureOptions* __this)
{
    return __this->_targetWidth;
}

bool TakePictureOptions__get_TargetWidthSet(TakePictureOptions* __this)
{
    return __this->_TargetWidthSet;
}

TakePictureOptions* TakePictureOptions__New_1(::uStatic* __this)
{
    TakePictureOptions* inst = (TakePictureOptions*)::uAllocObject(sizeof(TakePictureOptions), TakePictureOptions__typeof());
    inst->_ObjInit();
    return inst;
}

void TakePictureOptions__set_CorrectOrientation(TakePictureOptions* __this, bool value)
{
    __this->_correctOrientation = value;
}

void TakePictureOptions__set_TargetHeight(TakePictureOptions* __this, int value)
{
    if (!__this->TargetHeightSet())
    {
        __this->TargetHeightSet(true);
    }

    __this->_targetHeight = value;
}

void TakePictureOptions__set_TargetHeightSet(TakePictureOptions* __this, bool value)
{
    __this->_TargetHeightSet = value;
}

void TakePictureOptions__set_TargetWidth(TakePictureOptions* __this, int value)
{
    if (!__this->TargetWidthSet())
    {
        __this->TargetWidthSet(true);
    }

    __this->_targetWidth = value;
}

void TakePictureOptions__set_TargetWidthSet(TakePictureOptions* __this, bool value)
{
    __this->_TargetWidthSet = value;
}

}}}
