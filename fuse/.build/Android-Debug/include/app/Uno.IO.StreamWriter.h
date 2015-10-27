// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_STREAM_WRITER_H__
#define __APP_UNO_I_O_STREAM_WRITER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.IO.TextWriter.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct Stream; } } }

namespace app {
namespace Uno {
namespace IO {

struct StreamWriter;

struct StreamWriter__uType : ::app::Uno::IO::TextWriter__uType
{
};

StreamWriter__uType* StreamWriter__typeof();

void StreamWriter___ObjInit_1(StreamWriter* __this, ::app::Uno::IO::Stream* stream);
void StreamWriter__Dispose_1(StreamWriter* __this, bool disposing);
void StreamWriter__Flush(StreamWriter* __this);
StreamWriter* StreamWriter__New_1(::uStatic* __this, ::app::Uno::IO::Stream* stream);
void StreamWriter__Write_13(StreamWriter* __this, ::uArray* array, int index, int count);
void StreamWriter__Write_7(StreamWriter* __this, ::uString* value);

struct StreamWriter : ::app::Uno::IO::TextWriter
{
    ::uStrong< ::app::Uno::IO::Stream*> _stream;
    ::uStrong< ::uArray*> _buffer;
    int _index;

    void _ObjInit_1(::app::Uno::IO::Stream* stream) { StreamWriter___ObjInit_1(this, stream); }
    void Flush() { StreamWriter__Flush(this); }
    void Write_13(::uArray* array, int index, int count) { StreamWriter__Write_13(this, array, index, count); }
    void Write_7(::uString* value) { StreamWriter__Write_7(this, value); }
};

}}}


#endif
