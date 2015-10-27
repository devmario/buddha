// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/IO/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_I_O_TEXT_READER_H__
#define __APP_UNO_I_O_TEXT_READER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace IO {

struct TextReader;

struct TextReader__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
    void(*__fp_Dispose_1)(TextReader*, bool);
};

TextReader__uType* TextReader__typeof();

void TextReader___ObjInit(TextReader* __this);
void TextReader__Dispose(TextReader* __this);
void TextReader__Dispose_1(TextReader* __this, bool disposing);

struct TextReader : ::uObject
{
    void _ObjInit() { TextReader___ObjInit(this); }
    void Dispose() { TextReader__Dispose(this); }
    void Dispose_1(bool disposing) { (((TextReader__uType*)this->__obj_type)->__fp_Dispose_1)(this, disposing); }
};

}}}


#endif
