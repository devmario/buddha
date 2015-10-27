// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_STREAM_READER_H__
#define __APP_UNO_I_O_STREAM_READER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.IO.TextReader.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct Stream; } } }

namespace app {
namespace Uno {
namespace IO {

struct StreamReader;

struct StreamReader__uType : ::app::Uno::IO::TextReader__uType
{
};

StreamReader__uType* StreamReader__typeof();

void StreamReader___ObjInit_1(StreamReader* __this, ::app::Uno::IO::Stream* stream);
void StreamReader__Dispose_1(StreamReader* __this, bool disposing);
StreamReader* StreamReader__New_1(::uStatic* __this, ::app::Uno::IO::Stream* stream);
void StreamReader__ReadBuffer(StreamReader* __this);
::uString* StreamReader__ReadToEnd(StreamReader* __this);

struct StreamReader : ::app::Uno::IO::TextReader
{
    ::uStrong< ::app::Uno::IO::Stream*> _stream;
    ::uStrong< ::uArray*> _buffer;
    int _index;
    int _length;

    void _ObjInit_1(::app::Uno::IO::Stream* stream) { StreamReader___ObjInit_1(this, stream); }
    void ReadBuffer() { StreamReader__ReadBuffer(this); }
    ::uString* ReadToEnd() { return StreamReader__ReadToEnd(this); }
};

}}}


#endif
