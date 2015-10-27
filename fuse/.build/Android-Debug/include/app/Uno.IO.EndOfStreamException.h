// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_END_OF_STREAM_EXCEPTION_H__
#define __APP_UNO_I_O_END_OF_STREAM_EXCEPTION_H__

#include <app/Uno.IO.IOException.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace IO {

struct EndOfStreamException;

struct EndOfStreamException__uType : ::app::Uno::IO::IOException__uType
{
};

EndOfStreamException__uType* EndOfStreamException__typeof();

void EndOfStreamException___ObjInit_3(EndOfStreamException* __this);
EndOfStreamException* EndOfStreamException__New_4(::uStatic* __this);

struct EndOfStreamException : ::app::Uno::IO::IOException
{
    void _ObjInit_3() { EndOfStreamException___ObjInit_3(this); }
};

}}}


#endif
