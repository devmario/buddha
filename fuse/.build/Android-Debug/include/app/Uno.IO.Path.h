// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_PATH_H__
#define __APP_UNO_I_O_PATH_H__

#include <Uno.h>

namespace app {
namespace Uno {
namespace IO {

struct Path__uType : ::uClassType
{
};

Path__uType* Path__typeof();

::uString* Path__Combine(::uStatic* __this, ::uString* a, ::uString* b);
::uChar Path__get_DirectorySeparatorChar(::uStatic* __this);
::uString* Path__GetFileName(::uStatic* __this, ::uString* filename);
bool Path__IsPathRooted(::uStatic* __this, ::uString* filename);

}}}


#endif
