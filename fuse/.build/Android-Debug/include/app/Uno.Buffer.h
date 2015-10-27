// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_BUFFER_H__
#define __APP_UNO_BUFFER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Byte4; } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Uno {

struct Buffer;

struct Buffer__uType : ::uClassType
{
};

Buffer__uType* Buffer__typeof();

void Buffer___ObjInit(Buffer* __this, ::uArray* data, int offset, int sizeInBytes, bool isReadOnly);
void Buffer___ObjInit_1(Buffer* __this, ::uArray* data);
void Buffer___ObjInit_2(Buffer* __this, int sizeInBytes);
::uArray* Buffer__get_GetHandle(Buffer* __this);
::uByte Buffer__get_Item(Buffer* __this, int offset);
::uArray* Buffer__get_SetHandle(Buffer* __this);
int Buffer__get_SizeInBytes(Buffer* __this);
::uByte Buffer__GetByte(Buffer* __this, int offset);
Buffer* Buffer__New_1(::uStatic* __this, ::uArray* data, int offset, int sizeInBytes, bool isReadOnly);
Buffer* Buffer__New_2(::uStatic* __this, ::uArray* data);
Buffer* Buffer__New_3(::uStatic* __this, int sizeInBytes);
void Buffer__set_Item(Buffer* __this, int offset, ::uByte value);
void Buffer__SetByte(Buffer* __this, int offset, ::uByte value);
void Buffer__SetByte4(Buffer* __this, int offset, ::app::Uno::Byte4 value);
void Buffer__SetFloat(Buffer* __this, int offset, float value, bool littleEndian);
void Buffer__SetFloat2(Buffer* __this, int offset, ::app::Uno::Float2 value, bool littleEndian);
void Buffer__SetFloat3(Buffer* __this, int offset, ::app::Uno::Float3 value, bool littleEndian);
void Buffer__SetFloat4(Buffer* __this, int offset, ::app::Uno::Float4 value, bool littleEndian);
void Buffer__SetUShort(Buffer* __this, int offset, ::uUShort value, bool littleEndian);

struct Buffer : ::uObject
{
    int _offset;
    int _sizeInBytes;
    bool _isReadOnly;
    ::uStrong< ::uArray*> _data;

    void _ObjInit(::uArray* data, int offset, int sizeInBytes, bool isReadOnly) { Buffer___ObjInit(this, data, offset, sizeInBytes, isReadOnly); }
    void _ObjInit_1(::uArray* data) { Buffer___ObjInit_1(this, data); }
    void _ObjInit_2(int sizeInBytes) { Buffer___ObjInit_2(this, sizeInBytes); }
    ::uArray* GetHandle() { return Buffer__get_GetHandle(this); }
    ::uByte Item(int offset) { return Buffer__get_Item(this, offset); }
    ::uArray* SetHandle() { return Buffer__get_SetHandle(this); }
    int SizeInBytes() { return Buffer__get_SizeInBytes(this); }
    ::uByte GetByte(int offset) { return Buffer__GetByte(this, offset); }
    void Item(int offset, ::uByte value) { Buffer__set_Item(this, offset, value); }
    void SetByte(int offset, ::uByte value) { Buffer__SetByte(this, offset, value); }
    void SetByte4(int offset, ::app::Uno::Byte4 value);
    void SetFloat(int offset, float value, bool littleEndian) { Buffer__SetFloat(this, offset, value, littleEndian); }
    void SetFloat2(int offset, ::app::Uno::Float2 value, bool littleEndian);
    void SetFloat3(int offset, ::app::Uno::Float3 value, bool littleEndian);
    void SetFloat4(int offset, ::app::Uno::Float4 value, bool littleEndian);
    void SetUShort(int offset, ::uUShort value, bool littleEndian) { Buffer__SetUShort(this, offset, value, littleEndian); }
};

}}

#include <app/Uno.Byte4.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Uno {

inline void Buffer::SetByte4(int offset, ::app::Uno::Byte4 value) { Buffer__SetByte4(this, offset, value); }
inline void Buffer::SetFloat2(int offset, ::app::Uno::Float2 value, bool littleEndian) { Buffer__SetFloat2(this, offset, value, littleEndian); }
inline void Buffer::SetFloat3(int offset, ::app::Uno::Float3 value, bool littleEndian) { Buffer__SetFloat3(this, offset, value, littleEndian); }
inline void Buffer::SetFloat4(int offset, ::app::Uno::Float4 value, bool littleEndian) { Buffer__SetFloat4(this, offset, value, littleEndian); }

}}


#endif
