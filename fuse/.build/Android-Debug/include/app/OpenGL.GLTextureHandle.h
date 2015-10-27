// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/OpenGL/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OPEN_G_L_G_L_TEXTURE_HANDLE_H__
#define __APP_OPEN_G_L_G_L_TEXTURE_HANDLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace OpenGL {

extern ::uUInt GLTextureHandle__Zero;

struct GLTextureHandle__uType : ::uStructType
{
};

GLTextureHandle__uType* GLTextureHandle__typeof();

bool GLTextureHandle__Equals(::uUInt* __this, ::uObject* obj);
int GLTextureHandle__GetHashCode(::uUInt* __this);
bool GLTextureHandle__op_Equality(::uStatic* __this, ::uUInt left, ::uUInt right);

struct GLTextureHandle
{
    static bool Equals(::uUInt __this, ::uObject* obj) { return GLTextureHandle__Equals(&__this, obj); }
    static int GetHashCode(::uUInt __this) { return GLTextureHandle__GetHashCode(&__this); }
};

}}


#endif
