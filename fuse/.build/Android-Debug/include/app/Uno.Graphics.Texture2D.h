// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GRAPHICS_TEXTURE2_D_H__
#define __APP_UNO_GRAPHICS_TEXTURE2_D_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Uno {
namespace Graphics {

struct Texture2D;

extern int Texture2D___maxSize;

struct Texture2D__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

Texture2D__uType* Texture2D__typeof();

void Texture2D___ObjInit(Texture2D* __this, ::app::Uno::Int2 size, int format, bool mipmap);
void Texture2D___ObjInit_1(Texture2D* __this, ::uUInt handle, ::app::Uno::Int2 size, int mipCount, int format);
void Texture2D__Dispose(Texture2D* __this);
void Texture2D__GenerateMipmap(Texture2D* __this);
int Texture2D__get_Format(Texture2D* __this);
::uUInt Texture2D__get_GLTextureHandle(Texture2D* __this);
bool Texture2D__get_IsDisposed(Texture2D* __this);
int Texture2D__get_MaxSize(::uStatic* __this);
int Texture2D__get_MipCount(Texture2D* __this);
::app::Uno::Int2 Texture2D__get_Size(Texture2D* __this);
bool Texture2D__get_SupportsMipmap(Texture2D* __this);
Texture2D* Texture2D__New_1(::uStatic* __this, ::uUInt handle, ::app::Uno::Int2 size, int mipCount, int format);
Texture2D* Texture2D__New_2(::uStatic* __this, ::app::Uno::Int2 size, int format, bool mipmap);
void Texture2D__set_Format(Texture2D* __this, int value);
void Texture2D__set_GLTextureHandle(Texture2D* __this, ::uUInt value);
void Texture2D__set_IsDisposed(Texture2D* __this, bool value);
void Texture2D__set_MipCount(Texture2D* __this, int value);
void Texture2D__set_Size(Texture2D* __this, ::app::Uno::Int2 value);
void Texture2D__Update_1(Texture2D* __this, ::app::Uno::Buffer* mip0);

struct Texture2D : ::uObject
{
    ::app::Uno::Int2 _Size;
    bool _IsDisposed;
    ::uUInt _GLTextureHandle;
    int _Format;
    int _MipCount;

    void _ObjInit(::app::Uno::Int2 size, int format, bool mipmap) { Texture2D___ObjInit(this, size, format, mipmap); }
    void _ObjInit_1(::uUInt handle, ::app::Uno::Int2 size, int mipCount, int format) { Texture2D___ObjInit_1(this, handle, size, mipCount, format); }
    void Dispose() { Texture2D__Dispose(this); }
    void GenerateMipmap() { Texture2D__GenerateMipmap(this); }
    int Format() { return Texture2D__get_Format(this); }
    ::uUInt GLTextureHandle() { return Texture2D__get_GLTextureHandle(this); }
    bool IsDisposed() { return Texture2D__get_IsDisposed(this); }
    int MipCount() { return Texture2D__get_MipCount(this); }
    ::app::Uno::Int2 Size() { return Texture2D__get_Size(this); }
    bool SupportsMipmap() { return Texture2D__get_SupportsMipmap(this); }
    void Format(int value) { Texture2D__set_Format(this, value); }
    void GLTextureHandle(::uUInt value) { Texture2D__set_GLTextureHandle(this, value); }
    void IsDisposed(bool value) { Texture2D__set_IsDisposed(this, value); }
    void MipCount(int value) { Texture2D__set_MipCount(this, value); }
    void Size(::app::Uno::Int2 value) { Texture2D__set_Size(this, value); }
    void Update_1(::app::Uno::Buffer* mip0) { Texture2D__Update_1(this, mip0); }
};

}}}


#endif
