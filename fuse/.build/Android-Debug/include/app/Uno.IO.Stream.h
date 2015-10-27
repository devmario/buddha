// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_STREAM_H__
#define __APP_UNO_I_O_STREAM_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace IO {

struct Stream;

struct Stream__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
    void(*__fp_Close)(Stream*);
    void(*__fp_Dispose_1)(Stream*, bool);
    void(*__fp_Flush)(Stream*);
    ::uLong(*__fp_get_Length)(Stream*);
    ::uLong(*__fp_get_Position)(Stream*);
    int(*__fp_Read)(Stream*, ::uArray*, int, int);
    void(*__fp_set_Position)(Stream*, ::uLong);
    void(*__fp_Write)(Stream*, ::uArray*, int, int);
};

Stream__uType* Stream__typeof();

void Stream___ObjInit(Stream* __this);
void Stream__Close(Stream* __this);
void Stream__Dispose(Stream* __this);
void Stream__Dispose_1(Stream* __this, bool disposing);

struct Stream : ::uObject
{
    void _ObjInit() { Stream___ObjInit(this); }
    void Close() { (((Stream__uType*)this->__obj_type)->__fp_Close)(this); }
    void Dispose() { Stream__Dispose(this); }
    void Dispose_1(bool disposing) { (((Stream__uType*)this->__obj_type)->__fp_Dispose_1)(this, disposing); }
    void Flush() { (((Stream__uType*)this->__obj_type)->__fp_Flush)(this); }
    ::uLong Length() { return (((Stream__uType*)this->__obj_type)->__fp_get_Length)(this); }
    ::uLong Position() { return (((Stream__uType*)this->__obj_type)->__fp_get_Position)(this); }
    int Read(::uArray* dst, int byteOffset, int byteCount) { return (((Stream__uType*)this->__obj_type)->__fp_Read)(this, dst, byteOffset, byteCount); }
    void Position(::uLong value) { (((Stream__uType*)this->__obj_type)->__fp_set_Position)(this, value); }
    void Write(::uArray* src, int byteOffset, int byteCount) { (((Stream__uType*)this->__obj_type)->__fp_Write)(this, src, byteOffset, byteCount); }
};

}}}


#endif
