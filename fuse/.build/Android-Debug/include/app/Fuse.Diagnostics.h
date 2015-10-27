// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DIAGNOSTICS_H__
#define __APP_FUSE_DIAGNOSTICS_H__

#include <Uno.h>

namespace app {
namespace Fuse {

struct Diagnostics__uType : ::uClassType
{
};

Diagnostics__uType* Diagnostics__typeof();

void Diagnostics__Deprecated(::uStatic* __this, ::uString* msg, ::uObject* obj, ::uString* filePath, int lineNumber, ::uString* memberName);
void Diagnostics__Unsupported(::uStatic* __this, ::uString* msg, ::uObject* obj, ::uString* filePath, int lineNumber, ::uString* memberName);

}}


#endif
