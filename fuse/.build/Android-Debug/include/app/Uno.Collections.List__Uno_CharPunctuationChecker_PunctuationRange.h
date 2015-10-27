// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_CHAR_PUNCTUATION_CHECKER_PUNCTUATION_RANGE_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_CHAR_PUNCTUATION_CHECKER_PUNCTUATION_RANGE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct CharPunctuationChecker_PunctuationRange; } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_CharPunctuationChecker_PunctuationRange;

struct List__Uno_CharPunctuationChecker_PunctuationRange__uType : ::uClassType
{
};

List__Uno_CharPunctuationChecker_PunctuationRange__uType* List__Uno_CharPunctuationChecker_PunctuationRange__typeof();

void List__Uno_CharPunctuationChecker_PunctuationRange___ObjInit(List__Uno_CharPunctuationChecker_PunctuationRange* __this);
void List__Uno_CharPunctuationChecker_PunctuationRange__Add(List__Uno_CharPunctuationChecker_PunctuationRange* __this, ::app::Uno::CharPunctuationChecker_PunctuationRange* item);
void List__Uno_CharPunctuationChecker_PunctuationRange__EnsureCapacity(List__Uno_CharPunctuationChecker_PunctuationRange* __this);
List__Uno_CharPunctuationChecker_PunctuationRange* List__Uno_CharPunctuationChecker_PunctuationRange__New_1(::uStatic* __this);

struct List__Uno_CharPunctuationChecker_PunctuationRange : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Uno_CharPunctuationChecker_PunctuationRange___ObjInit(this); }
    void Add(::app::Uno::CharPunctuationChecker_PunctuationRange* item) { List__Uno_CharPunctuationChecker_PunctuationRange__Add(this, item); }
    void EnsureCapacity() { List__Uno_CharPunctuationChecker_PunctuationRange__EnsureCapacity(this); }
};

}}}


#endif
