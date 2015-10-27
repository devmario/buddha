// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Platform/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_PLATFORM_TEXT_INPUT_EVENT_ARGS_H__
#define __APP_UNO_PLATFORM_TEXT_INPUT_EVENT_ARGS_H__

#include <app/Uno.EventArgs.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Platform {

struct TextInputEventArgs;

struct TextInputEventArgs__uType : ::app::Uno::EventArgs__uType
{
};

TextInputEventArgs__uType* TextInputEventArgs__typeof();

void TextInputEventArgs___ObjInit_1(TextInputEventArgs* __this, ::uString* text, int modifiers);
bool TextInputEventArgs__get_Handled(TextInputEventArgs* __this);
int TextInputEventArgs__get_Modifiers(TextInputEventArgs* __this);
::uString* TextInputEventArgs__get_Text(TextInputEventArgs* __this);
TextInputEventArgs* TextInputEventArgs__New_2(::uStatic* __this, ::uString* text, int modifiers);
void TextInputEventArgs__set_Handled(TextInputEventArgs* __this, bool value);
void TextInputEventArgs__set_Modifiers(TextInputEventArgs* __this, int value);
void TextInputEventArgs__set_Text(TextInputEventArgs* __this, ::uString* value);

struct TextInputEventArgs : ::app::Uno::EventArgs
{
    bool _Handled;
    ::uStrong< ::uString*> _Text;
    int _Modifiers;

    void _ObjInit_1(::uString* text, int modifiers) { TextInputEventArgs___ObjInit_1(this, text, modifiers); }
    bool Handled() { return TextInputEventArgs__get_Handled(this); }
    int Modifiers() { return TextInputEventArgs__get_Modifiers(this); }
    ::uString* Text() { return TextInputEventArgs__get_Text(this); }
    void Handled(bool value) { TextInputEventArgs__set_Handled(this, value); }
    void Modifiers(int value) { TextInputEventArgs__set_Modifiers(this, value); }
    void Text(::uString* value) { TextInputEventArgs__set_Text(this, value); }
};

}}}


#endif
