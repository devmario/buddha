// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_FILE_H__
#define __APP_UNO_I_O_FILE_H__

#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct Stream; } } }

namespace app {
namespace Uno {
namespace IO {

struct File__uType : ::uClassType
{
};

File__uType* File__typeof();

void File__Delete(::uStatic* __this, ::uString* filename);
bool File__Exists(::uStatic* __this, ::uString* filename);
::app::Uno::IO::Stream* File__Open(::uStatic* __this, ::uString* filename, int filemode);
::app::Uno::IO::Stream* File__OpenRead(::uStatic* __this, ::uString* filename);
::uArray* File__ReadAllBytes(::uStatic* __this, ::uString* filename);
::uString* File__ReadAllText(::uStatic* __this, ::uString* filename);
void File__WriteAllBytes(::uStatic* __this, ::uString* filename, ::uArray* bytes);
void File__WriteAllText(::uStatic* __this, ::uString* filename, ::uString* text);

}}}


#endif
