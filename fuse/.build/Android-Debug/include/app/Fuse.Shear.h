// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SHEAR_H__
#define __APP_FUSE_SHEAR_H__

#include <app/Fuse.Transform.h>
#include <app/Uno.Float2.h>
#include <Uno.h>
namespace app { namespace Fuse { struct FastMatrix; } }

namespace app {
namespace Fuse {

struct Shear;

struct Shear__uType : ::app::Fuse::Transform__uType
{
};

Shear__uType* Shear__typeof();

void Shear___ObjInit_1(Shear* __this);
void Shear__AppendTo(Shear* __this, ::app::Fuse::FastMatrix* m, float weight);
bool Shear__get_IsFlat(Shear* __this);
::app::Uno::Float2 Shear__get_Vector(Shear* __this);
Shear* Shear__New_1(::uStatic* __this);
void Shear__PrependTo(Shear* __this, ::app::Fuse::FastMatrix* m);
void Shear__set_Vector(Shear* __this, ::app::Uno::Float2 value);

struct Shear : ::app::Fuse::Transform
{
    ::app::Uno::Float2 _vector;

    void _ObjInit_1() { Shear___ObjInit_1(this); }
    ::app::Uno::Float2 Vector() { return Shear__get_Vector(this); }
    void Vector(::app::Uno::Float2 value) { Shear__set_Vector(this, value); }
};

}}


#endif
