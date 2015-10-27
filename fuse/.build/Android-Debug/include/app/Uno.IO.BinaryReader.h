// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_BINARY_READER_H__
#define __APP_UNO_I_O_BINARY_READER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct Stream; } } }

namespace app {
namespace Uno {
namespace IO {

struct BinaryReader;

struct BinaryReader__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

BinaryReader__uType* BinaryReader__typeof();

void BinaryReader___ObjInit(BinaryReader* __this, ::app::Uno::IO::Stream* stream);
void BinaryReader__Dispose(BinaryReader* __this);
void BinaryReader__FillBuffer(BinaryReader* __this, int byteCount);
bool BinaryReader__get_LittleEndian(BinaryReader* __this);
BinaryReader* BinaryReader__New_1(::uStatic* __this, ::app::Uno::IO::Stream* stream);
int BinaryReader__Read7BitEncodedInt(BinaryReader* __this);
::uByte BinaryReader__ReadByte(BinaryReader* __this);
::uArray* BinaryReader__ReadBytes(BinaryReader* __this, int byteCount);
int BinaryReader__ReadInt(BinaryReader* __this);
::uString* BinaryReader__ReadString(BinaryReader* __this);
void BinaryReader__set_LittleEndian(BinaryReader* __this, bool value);

struct BinaryReader : ::uObject
{
    ::uStrong< ::app::Uno::IO::Stream*> _stream;
    ::uStrong< ::uArray*> _buffer;
    bool _LittleEndian;

    void _ObjInit(::app::Uno::IO::Stream* stream) { BinaryReader___ObjInit(this, stream); }
    void Dispose() { BinaryReader__Dispose(this); }
    void FillBuffer(int byteCount) { BinaryReader__FillBuffer(this, byteCount); }
    bool LittleEndian() { return BinaryReader__get_LittleEndian(this); }
    int Read7BitEncodedInt() { return BinaryReader__Read7BitEncodedInt(this); }
    ::uByte ReadByte() { return BinaryReader__ReadByte(this); }
    ::uArray* ReadBytes(int byteCount) { return BinaryReader__ReadBytes(this, byteCount); }
    int ReadInt() { return BinaryReader__ReadInt(this); }
    ::uString* ReadString() { return BinaryReader__ReadString(this); }
    void LittleEndian(bool value) { BinaryReader__set_LittleEndian(this, value); }
};

}}}


#endif
