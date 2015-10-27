// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DELEGATE_H__
#define __APP_UNO_DELEGATE_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct Delegate__uType : ::uClassType
{
};

Delegate__uType* Delegate__typeof();

::uDelegate* Delegate__Combine(::uStatic* __this, ::uDelegate* source_, ::uDelegate* value_);
bool Delegate__Equals(::uDelegate* __this, ::uObject* other);
bool Delegate__EqualsImpl(::uStatic* __this, ::uDelegate* left_, ::uDelegate* right_);
int Delegate__GetHashCode(::uDelegate* __this);
bool Delegate__op_Equality(::uStatic* __this, ::uDelegate* left, ::uDelegate* right);
bool Delegate__op_Inequality(::uStatic* __this, ::uDelegate* left, ::uDelegate* right);
::uDelegate* Delegate__Remove(::uStatic* __this, ::uDelegate* source_, ::uDelegate* value_);

struct Delegate
{
};

}}


#endif
