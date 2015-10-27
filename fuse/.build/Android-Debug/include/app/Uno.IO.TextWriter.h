// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_TEXT_WRITER_H__
#define __APP_UNO_I_O_TEXT_WRITER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace IO {

struct TextWriter;

struct TextWriter__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
    void(*__fp_Dispose_1)(TextWriter*, bool);
};

TextWriter__uType* TextWriter__typeof();

void TextWriter___ObjInit(TextWriter* __this);
void TextWriter__Dispose(TextWriter* __this);
void TextWriter__Dispose_1(TextWriter* __this, bool disposing);

struct TextWriter : ::uObject
{
    void _ObjInit() { TextWriter___ObjInit(this); }
    void Dispose() { TextWriter__Dispose(this); }
    void Dispose_1(bool disposing) { (((TextWriter__uType*)this->__obj_type)->__fp_Dispose_1)(this, disposing); }
};

}}}


#endif
