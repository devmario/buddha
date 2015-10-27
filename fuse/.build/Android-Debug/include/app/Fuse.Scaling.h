// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCALING_H__
#define __APP_FUSE_SCALING_H__

#include <app/Fuse.Transform.h>
#include <app/Uno.Float3.h>
#include <Uno.h>
namespace app { namespace Fuse { struct FastMatrix; } }

namespace app {
namespace Fuse {

struct Scaling;

struct Scaling__uType : ::app::Fuse::Transform__uType
{
};

Scaling__uType* Scaling__typeof();

void Scaling___ObjInit_1(Scaling* __this);
void Scaling__AppendTo(Scaling* __this, ::app::Fuse::FastMatrix* m, float weight);
bool Scaling__get_IsFlat(Scaling* __this);
bool Scaling__get_IsIdentity(Scaling* __this);
::app::Uno::Float3 Scaling__get_Vector(Scaling* __this);
Scaling* Scaling__New_1(::uStatic* __this);
void Scaling__PrependTo(Scaling* __this, ::app::Fuse::FastMatrix* m);
void Scaling__set_Vector(Scaling* __this, ::app::Uno::Float3 value);

struct Scaling : ::app::Fuse::Transform
{
    ::app::Uno::Float3 _vector;

    void _ObjInit_1() { Scaling___ObjInit_1(this); }
    bool IsIdentity() { return Scaling__get_IsIdentity(this); }
    ::app::Uno::Float3 Vector() { return Scaling__get_Vector(this); }
    void Vector(::app::Uno::Float3 value) { Scaling__set_Vector(this, value); }
};

}}


#endif
