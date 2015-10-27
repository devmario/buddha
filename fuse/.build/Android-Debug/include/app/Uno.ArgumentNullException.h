// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Exceptions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_ARGUMENT_NULL_EXCEPTION_H__
#define __APP_UNO_ARGUMENT_NULL_EXCEPTION_H__

#include <app/Uno.ArgumentException.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct ArgumentNullException;

struct ArgumentNullException__uType : ::app::Uno::ArgumentException__uType
{
};

ArgumentNullException__uType* ArgumentNullException__typeof();

void ArgumentNullException___ObjInit_4(ArgumentNullException* __this, ::uString* paramName);
ArgumentNullException* ArgumentNullException__New_5(::uStatic* __this, ::uString* paramName);

struct ArgumentNullException : ::app::Uno::ArgumentException
{
    void _ObjInit_4(::uString* paramName) { ArgumentNullException___ObjInit_4(this, paramName); }
};

}}


#endif
