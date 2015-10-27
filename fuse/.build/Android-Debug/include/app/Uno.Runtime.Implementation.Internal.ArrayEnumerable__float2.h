// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__FLOAT2_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__FLOAT2_H__

#include <app/Uno.Collections.IEnumerable__float2.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerable__float2;

struct ArrayEnumerable__float2__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__float2 __interface_0;
};

ArrayEnumerable__float2__uType* ArrayEnumerable__float2__typeof();

void ArrayEnumerable__float2___ObjInit(ArrayEnumerable__float2* __this, ::uArray* source);
::uObject* ArrayEnumerable__float2__GetEnumerator(ArrayEnumerable__float2* __this);
ArrayEnumerable__float2* ArrayEnumerable__float2__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerable__float2 : ::uObject
{
    ::uStrong< ::uArray*> _source;

    void _ObjInit(::uArray* source) { ArrayEnumerable__float2___ObjInit(this, source); }
    ::uObject* GetEnumerator() { return ArrayEnumerable__float2__GetEnumerator(this); }
};

}}}}}


#endif
