// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GRAPHICS_INDEX_BUFFER_H__
#define __APP_UNO_GRAPHICS_INDEX_BUFFER_H__

#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.IDisposable.h>
#include <Uno.h>
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Uno {
namespace Graphics {

struct IndexBuffer;

struct IndexBuffer__uType : ::app::Uno::Graphics::DeviceBuffer__uType
{
};

IndexBuffer__uType* IndexBuffer__typeof();

void IndexBuffer___ObjInit_3(IndexBuffer* __this, ::app::Uno::Buffer* data, int usage);
IndexBuffer* IndexBuffer__New_3(::uStatic* __this, ::app::Uno::Buffer* data, int usage);

struct IndexBuffer : ::app::Uno::Graphics::DeviceBuffer
{
    void _ObjInit_3(::app::Uno::Buffer* data, int usage) { IndexBuffer___ObjInit_3(this, data, usage); }
};

}}}


#endif
