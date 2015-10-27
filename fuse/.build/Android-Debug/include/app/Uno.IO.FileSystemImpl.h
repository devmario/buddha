// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_FILE_SYSTEM_IMPL_H__
#define __APP_UNO_I_O_FILE_SYSTEM_IMPL_H__

#include <Uno.h>
namespace Xli { class Stream; }

namespace app {
namespace Uno {
namespace IO {

struct FileSystemImpl__uType : ::uClassType
{
};

FileSystemImpl__uType* FileSystemImpl__typeof();

::Xli::Stream* FileSystemImpl__CppXliOpen(::uStatic* __this, ::uString* filename_, int filemode_);
::Xli::Stream* FileSystemImpl__CppXliOpenRead(::uStatic* __this, ::uString* filename_);
void FileSystemImpl__DeleteFile(::uStatic* __this, ::uString* filename_);
::uString* FileSystemImpl__GetUserDirectory(::uStatic* __this, int dir_);
bool FileSystemImpl__IsFile(::uStatic* __this, ::uString* filename_);
::uArray* FileSystemImpl__ReadAllBytes(::uStatic* __this, ::uString* filename_);
::uString* FileSystemImpl__ReadAllText(::uStatic* __this, ::uString* filename_);
void FileSystemImpl__WriteAllBytes(::uStatic* __this, ::uString* filename_, ::uArray* bytes_);
void FileSystemImpl__WriteAllText(::uStatic* __this, ::uString* filename_, ::uString* text_);

}}}


#endif
