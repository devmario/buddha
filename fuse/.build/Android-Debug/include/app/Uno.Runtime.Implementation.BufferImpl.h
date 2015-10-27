// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_BUFFER_IMPL_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_BUFFER_IMPL_H__

#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

struct BufferImpl__uType : ::uClassType
{
};

BufferImpl__uType* BufferImpl__typeof();

int BufferImpl__GetInt(::uStatic* __this, ::uArray* buffer_, int offset_, bool littleEndian_);
void BufferImpl__SetFloat(::uStatic* __this, ::uArray* buffer_, int offset_, float value_, bool littleEndian_);
void BufferImpl__SetInt(::uStatic* __this, ::uArray* buffer_, int offset_, int value_, bool littleEndian_);
void BufferImpl__SetUShort(::uStatic* __this, ::uArray* buffer_, int offset_, ::uUShort value_, bool littleEndian_);

}}}}


#endif
