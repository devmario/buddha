// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__FUSE_CONTR_19F1B31C_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__FUSE_CONTR_19F1B31C_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Fuse_Controls_Internal_WrappedLine.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Controls { namespace Internal { struct WrappedLine; } } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerator__Fuse_Controls_Internal_WrappedLine;

struct ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Fuse_Controls_Internal_WrappedLine __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__uType* ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__typeof();

void ArrayEnumerator__Fuse_Controls_Internal_WrappedLine___ObjInit(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine* __this, ::uArray* source);
void ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__Dispose(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine* __this);
::app::Fuse::Controls::Internal::WrappedLine* ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__get_Current(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine* __this);
bool ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__MoveNext(ArrayEnumerator__Fuse_Controls_Internal_WrappedLine* __this);
ArrayEnumerator__Fuse_Controls_Internal_WrappedLine* ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerator__Fuse_Controls_Internal_WrappedLine : ::uObject
{
    ::uStrong< ::uArray*> _source;
    int _iterator;
    ::uStrong< ::app::Fuse::Controls::Internal::WrappedLine*> _current;

    void _ObjInit(::uArray* source) { ArrayEnumerator__Fuse_Controls_Internal_WrappedLine___ObjInit(this, source); }
    void Dispose() { ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__Dispose(this); }
    ::app::Fuse::Controls::Internal::WrappedLine* Current() { return ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__get_Current(this); }
    bool MoveNext() { return ArrayEnumerator__Fuse_Controls_Internal_WrappedLine__MoveNext(this); }
};

}}}}}


#endif
