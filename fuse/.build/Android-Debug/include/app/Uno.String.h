// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_STRING_H__
#define __APP_UNO_STRING_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

extern ::uStaticStrong< ::uString*> String__Empty;

struct String__uType : ::uClassType
{
};

String__uType* String__typeof();

void String___TypeInit(::uStatic* __this);
::uString* String__Concat(::uStatic* __this, ::uObject* a, ::uObject* b);
::uString* String__Concat_1(::uStatic* __this, ::uString* a, ::uString* b);
bool String__EndsWith(::uString* __this, ::uString* value);
bool String__Equals(::uString* __this, ::uObject* other_);
bool String__Equals_2(::uStatic* __this, ::uString* left, ::uString* right);
::uString* String__Format(::uStatic* __this, ::uString* str, ::uArray* objs);
int String__GetHashCode(::uString* __this);
int String__IndexOf(::uString* __this, ::uString* str, int startIndex);
int String__IndexOf_1(::uString* __this, ::uChar c, int startIndex);
int String__IndexOfFirstNotInSet(::uString* __this, ::uArray* charSet);
int String__IndexOfFirstNotWhiteSpace(::uString* __this);
int String__IndexOfLastNotInSet(::uString* __this, ::uArray* charSet);
int String__IndexOfLastNotWhiteSpace(::uString* __this);
::uString* String__Insert(::uString* __this, int pos, ::uString* str);
bool String__InSet(::uString* __this, ::uChar c, ::uArray* charSet);
bool String__IsNullOrEmpty(::uStatic* __this, ::uString* s);
::uString* String__Join(::uStatic* __this, ::uString* separator, ::uArray* value);
bool String__MatchesAt(::uString* __this, ::uString* str, int pos);
::uString* String__op_Addition(::uStatic* __this, ::uString* a, ::uObject* b);
::uString* String__op_Addition_1(::uStatic* __this, ::uString* a, ::uString* b);
::uString* String__op_Addition_2(::uStatic* __this, ::uObject* a, ::uString* b);
bool String__op_Equality(::uStatic* __this, ::uString* left, ::uString* right);
bool String__op_Inequality(::uStatic* __this, ::uString* left, ::uString* right);
::uString* String__Replace_1(::uString* __this, ::uString* oldValue, ::uString* newValue);
::uArray* String__Split(::uString* __this, ::uArray* splitChars);
bool String__StartsWith(::uString* __this, ::uString* value);
::uArray* String__SubCharArray(::uString* __this, int start, int len);
::uString* String__Substring(::uString* __this, int start, int len);
::uString* String__Substring_1(::uString* __this, int start);
::uArray* String__ToCharArray(::uString* __this);
::uArray* String__ToCharArray_1(::uString* __this, int start, int length);
::uString* String__ToLower(::uString* __this);
::uString* String__ToString(::uString* __this);
::uString* String__ToUpper(::uString* __this);
::uString* String__Trim(::uString* __this);
::uString* String__Trim_1(::uString* __this, ::uArray* trimChars);

struct String
{
    static bool EndsWith(::uString* __this, ::uString* value) { return String__EndsWith(__this, value); }
    static int IndexOf(::uString* __this, ::uString* str, int startIndex) { return String__IndexOf(__this, str, startIndex); }
    static int IndexOf_1(::uString* __this, ::uChar c, int startIndex) { return String__IndexOf_1(__this, c, startIndex); }
    static int IndexOfFirstNotInSet(::uString* __this, ::uArray* charSet) { return String__IndexOfFirstNotInSet(__this, charSet); }
    static int IndexOfFirstNotWhiteSpace(::uString* __this) { return String__IndexOfFirstNotWhiteSpace(__this); }
    static int IndexOfLastNotInSet(::uString* __this, ::uArray* charSet) { return String__IndexOfLastNotInSet(__this, charSet); }
    static int IndexOfLastNotWhiteSpace(::uString* __this) { return String__IndexOfLastNotWhiteSpace(__this); }
    static ::uString* Insert(::uString* __this, int pos, ::uString* str) { return String__Insert(__this, pos, str); }
    static bool InSet(::uString* __this, ::uChar c, ::uArray* charSet) { return String__InSet(__this, c, charSet); }
    static bool MatchesAt(::uString* __this, ::uString* str, int pos) { return String__MatchesAt(__this, str, pos); }
    static ::uString* Replace_1(::uString* __this, ::uString* oldValue, ::uString* newValue) { return String__Replace_1(__this, oldValue, newValue); }
    static ::uArray* Split(::uString* __this, ::uArray* splitChars) { return String__Split(__this, splitChars); }
    static bool StartsWith(::uString* __this, ::uString* value) { return String__StartsWith(__this, value); }
    static ::uArray* SubCharArray(::uString* __this, int start, int len) { return String__SubCharArray(__this, start, len); }
    static ::uString* Substring(::uString* __this, int start, int len) { return String__Substring(__this, start, len); }
    static ::uString* Substring_1(::uString* __this, int start) { return String__Substring_1(__this, start); }
    static ::uArray* ToCharArray(::uString* __this) { return String__ToCharArray(__this); }
    static ::uArray* ToCharArray_1(::uString* __this, int start, int length) { return String__ToCharArray_1(__this, start, length); }
    static ::uString* ToLower(::uString* __this) { return String__ToLower(__this); }
    static ::uString* ToUpper(::uString* __this) { return String__ToUpper(__this); }
    static ::uString* Trim(::uString* __this) { return String__Trim(__this); }
    static ::uString* Trim_1(::uString* __this, ::uArray* trimChars) { return String__Trim_1(__this, trimChars); }
};

}}


#endif
