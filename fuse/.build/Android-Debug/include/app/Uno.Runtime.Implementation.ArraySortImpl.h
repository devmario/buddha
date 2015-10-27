// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Runtime/Implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_ARRAY_SORT_IMPL_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_ARRAY_SORT_IMPL_H__

#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {

struct ArraySortImpl__uType : ::uClassType
{
};

ArraySortImpl__uType* ArraySortImpl__typeof();

void ArraySortImpl__QuickSortInternal__Fuse_Node(::uStatic* __this, ::uArray* data, ::uDelegate* comparison, int left, int right);
void ArraySortImpl__ShellSortInternal__Fuse_Node(::uStatic* __this, ::uArray* data, ::uDelegate* comparison, int left, int right);
void ArraySortImpl__Sort__Fuse_Node(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);
void ArraySortImpl__SwapInternal__Fuse_Node(::uStatic* __this, ::uArray* data, int a, int b);
void ArraySortImpl__ValidateArguments__Fuse_Node(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);

}}}}


#endif
