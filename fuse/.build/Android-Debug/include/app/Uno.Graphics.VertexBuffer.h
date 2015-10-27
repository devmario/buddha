// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GRAPHICS_VERTEX_BUFFER_H__
#define __APP_UNO_GRAPHICS_VERTEX_BUFFER_H__

#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.IDisposable.h>
#include <Uno.h>
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Uno {
namespace Graphics {

struct VertexBuffer;

struct VertexBuffer__uType : ::app::Uno::Graphics::DeviceBuffer__uType
{
};

VertexBuffer__uType* VertexBuffer__typeof();

void VertexBuffer___ObjInit_1(VertexBuffer* __this, int usage);
void VertexBuffer___ObjInit_3(VertexBuffer* __this, ::app::Uno::Buffer* data, int usage);
VertexBuffer* VertexBuffer__New_1(::uStatic* __this, int usage);
VertexBuffer* VertexBuffer__New_3(::uStatic* __this, ::app::Uno::Buffer* data, int usage);

struct VertexBuffer : ::app::Uno::Graphics::DeviceBuffer
{
    void _ObjInit_1(int usage) { VertexBuffer___ObjInit_1(this, usage); }
    void _ObjInit_3(::app::Uno::Buffer* data, int usage) { VertexBuffer___ObjInit_3(this, data, usage); }
};

}}}


#endif
