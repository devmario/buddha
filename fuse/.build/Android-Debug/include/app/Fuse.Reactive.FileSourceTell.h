// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_FILE_SOURCE_TELL_H__
#define __APP_FUSE_REACTIVE_FILE_SOURCE_TELL_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Reactive {

struct FileSourceTell;

struct FileSourceTell__uType : ::uClassType
{
};

FileSourceTell__uType* FileSourceTell__typeof();

void FileSourceTell___ObjInit(FileSourceTell* __this, ::uObject* ao, ::uDelegate* callback);
FileSourceTell* FileSourceTell__New_1(::uStatic* __this, ::uObject* ao, ::uDelegate* callback);
void FileSourceTell__OnPath(FileSourceTell* __this, ::uObject* res);

struct FileSourceTell : ::uObject
{
    ::uStrong< ::uDelegate*> _callback;

    void _ObjInit(::uObject* ao, ::uDelegate* callback) { FileSourceTell___ObjInit(this, ao, callback); }
    void OnPath(::uObject* res) { FileSourceTell__OnPath(this, res); }
};

}}}


#endif
