// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_BINARY_WRITER_H__
#define __APP_UNO_I_O_BINARY_WRITER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct Stream; } } }

namespace app {
namespace Uno {
namespace IO {

struct BinaryWriter;

struct BinaryWriter__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

BinaryWriter__uType* BinaryWriter__typeof();

void BinaryWriter___ObjInit(BinaryWriter* __this, ::app::Uno::IO::Stream* stream);
void BinaryWriter__Dispose(BinaryWriter* __this);
bool BinaryWriter__get_LittleEndian(BinaryWriter* __this);
BinaryWriter* BinaryWriter__New_1(::uStatic* __this, ::app::Uno::IO::Stream* stream);
void BinaryWriter__set_LittleEndian(BinaryWriter* __this, bool value);
void BinaryWriter__Write_17(BinaryWriter* __this, ::uByte value);
void BinaryWriter__Write_19(BinaryWriter* __this, ::uArray* value);
void BinaryWriter__Write_21(BinaryWriter* __this, int value);
void BinaryWriter__Write_8(BinaryWriter* __this, ::uString* value);
void BinaryWriter__Write7BitEncodedInt(BinaryWriter* __this, int value);

struct BinaryWriter : ::uObject
{
    ::uStrong< ::app::Uno::IO::Stream*> _stream;
    ::uStrong< ::uArray*> _buffer;
    bool _LittleEndian;

    void _ObjInit(::app::Uno::IO::Stream* stream) { BinaryWriter___ObjInit(this, stream); }
    void Dispose() { BinaryWriter__Dispose(this); }
    bool LittleEndian() { return BinaryWriter__get_LittleEndian(this); }
    void LittleEndian(bool value) { BinaryWriter__set_LittleEndian(this, value); }
    void Write_17(::uByte value) { BinaryWriter__Write_17(this, value); }
    void Write_19(::uArray* value) { BinaryWriter__Write_19(this, value); }
    void Write_21(int value) { BinaryWriter__Write_21(this, value); }
    void Write_8(::uString* value) { BinaryWriter__Write_8(this, value); }
    void Write7BitEncodedInt(int value) { BinaryWriter__Write7BitEncodedInt(this, value); }
};

}}}


#endif
