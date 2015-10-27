// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_MEMORY_STREAM_H__
#define __APP_UNO_I_O_MEMORY_STREAM_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.IO.Stream.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace IO {

struct MemoryStream;

struct MemoryStream__uType : ::app::Uno::IO::Stream__uType
{
};

MemoryStream__uType* MemoryStream__typeof();

void MemoryStream___ObjInit_1(MemoryStream* __this);
void MemoryStream__EnsureCapacity(MemoryStream* __this, int byteCount);
void MemoryStream__Flush(MemoryStream* __this);
int MemoryStream__get_Capacity(MemoryStream* __this);
::uLong MemoryStream__get_Length(MemoryStream* __this);
::uLong MemoryStream__get_Position(MemoryStream* __this);
::uArray* MemoryStream__GetBuffer(MemoryStream* __this);
MemoryStream* MemoryStream__New_1(::uStatic* __this);
int MemoryStream__Read(MemoryStream* __this, ::uArray* dst, int byteOffset, int byteCount);
void MemoryStream__ResizeTo(MemoryStream* __this, int newSize);
void MemoryStream__set_Position(MemoryStream* __this, ::uLong value);
void MemoryStream__Write(MemoryStream* __this, ::uArray* src, int byteOffset, int byteCount);

struct MemoryStream : ::app::Uno::IO::Stream
{
    ::uStrong< ::uArray*> _buffer;
    int _nextIncrease;
    ::uLong _length;
    ::uLong _Position;

    void _ObjInit_1() { MemoryStream___ObjInit_1(this); }
    void EnsureCapacity(int byteCount) { MemoryStream__EnsureCapacity(this, byteCount); }
    int Capacity() { return MemoryStream__get_Capacity(this); }
    ::uArray* GetBuffer() { return MemoryStream__GetBuffer(this); }
    void ResizeTo(int newSize) { MemoryStream__ResizeTo(this, newSize); }
};

}}}


#endif
