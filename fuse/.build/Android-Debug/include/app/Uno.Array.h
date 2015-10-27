// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_ARRAY_H__
#define __APP_UNO_ARRAY_H__

#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Uno {

struct Array__uType : ::uClassType
{
};

Array__uType* Array__typeof();

void Array__Copy__byte(::uStatic* __this, ::uArray* sourceArray, ::uArray* destinationArray, int length);
void Array__Copy__byte_1(::uStatic* __this, ::uArray* sourceArray, int sourceIndex, ::uArray* destinationArray, int destinationIndex, int length);
void Array__Sort__Fuse_Node(::uStatic* __this, ::uArray* elements, int index, int length, ::uDelegate* comparison);

}}


#endif
