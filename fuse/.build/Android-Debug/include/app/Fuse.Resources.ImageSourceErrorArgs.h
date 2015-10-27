// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_IMAGE_SOURCE_ERROR_ARGS_H__
#define __APP_FUSE_RESOURCES_IMAGE_SOURCE_ERROR_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Fuse {
namespace Resources {

struct ImageSourceErrorArgs;

struct ImageSourceErrorArgs__uType : ::app::Uno::EventArgs__uType
{
};

ImageSourceErrorArgs__uType* ImageSourceErrorArgs__typeof();

void ImageSourceErrorArgs___ObjInit_1(ImageSourceErrorArgs* __this);
ImageSourceErrorArgs* ImageSourceErrorArgs__New_2(::uStatic* __this);

struct ImageSourceErrorArgs : ::app::Uno::EventArgs
{
    ::uStrong< ::uString*> Reason;
    ::uStrong< ::app::Uno::Exception*> ExceptionCause;

    void _ObjInit_1() { ImageSourceErrorArgs___ObjInit_1(this); }
};

}}}


#endif
