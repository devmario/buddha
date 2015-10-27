// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__FUSE_CONTR_D462BD20_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__FUSE_CONTR_D462BD20_H__

#include <app/Uno.Collections.IEnumerable__Fuse_Controls_Internal_WrappedLine.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WrappedLine; } } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerable__Fuse_Controls_Internal_WrappedLine;

struct ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Fuse_Controls_Internal_WrappedLine __interface_0;
};

ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__uType* ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__typeof();

void ArrayEnumerable__Fuse_Controls_Internal_WrappedLine___ObjInit(ArrayEnumerable__Fuse_Controls_Internal_WrappedLine* __this, ::uArray* source);
::uObject* ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__GetEnumerator(ArrayEnumerable__Fuse_Controls_Internal_WrappedLine* __this);
ArrayEnumerable__Fuse_Controls_Internal_WrappedLine* ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerable__Fuse_Controls_Internal_WrappedLine : ::uObject
{
    ::uStrong< ::uArray*> _source;

    void _ObjInit(::uArray* source) { ArrayEnumerable__Fuse_Controls_Internal_WrappedLine___ObjInit(this, source); }
    ::uObject* GetEnumerator() { return ArrayEnumerable__Fuse_Controls_Internal_WrappedLine__GetEnumerator(this); }
};

}}}}}


#endif
