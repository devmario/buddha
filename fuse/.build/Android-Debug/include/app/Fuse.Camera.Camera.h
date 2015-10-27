// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Camera/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CAMERA_CAMERA_H__
#define __APP_FUSE_CAMERA_CAMERA_H__

#include <Uno.h>
namespace app { namespace Fuse { namespace Camera { struct TakePictureOptions; } } }
namespace app { namespace Uno { namespace Threading { struct Future__Fuse_Camera_PictureResult; } } }

namespace app {
namespace Fuse {
namespace Camera {

struct Camera__uType : ::uClassType
{
};

Camera__uType* Camera__typeof();

::app::Uno::Threading::Future__Fuse_Camera_PictureResult* Camera__TakePicture_1(::uStatic* __this, ::app::Fuse::Camera::TakePictureOptions* options);

}}}


#endif
