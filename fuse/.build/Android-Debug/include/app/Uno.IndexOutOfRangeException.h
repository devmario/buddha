// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Exceptions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_INDEX_OUT_OF_RANGE_EXCEPTION_H__
#define __APP_UNO_INDEX_OUT_OF_RANGE_EXCEPTION_H__

#include <app/Uno.Exception.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct IndexOutOfRangeException;

struct IndexOutOfRangeException__uType : ::app::Uno::Exception__uType
{
};

IndexOutOfRangeException__uType* IndexOutOfRangeException__typeof();

void IndexOutOfRangeException___ObjInit_2(IndexOutOfRangeException* __this);
IndexOutOfRangeException* IndexOutOfRangeException__New_3(::uStatic* __this);

struct IndexOutOfRangeException : ::app::Uno::Exception
{
    void _ObjInit_2() { IndexOutOfRangeException___ObjInit_2(this); }
};

}}


#endif
