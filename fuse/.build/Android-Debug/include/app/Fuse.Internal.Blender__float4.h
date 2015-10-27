// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__FLOAT4_H__
#define __APP_FUSE_INTERNAL_BLENDER__FLOAT4_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__float4;

struct Blender__float4__uType : ::uClassType
{
    ::app::Uno::Float4(*__fp_Add)(Blender__float4*, ::app::Uno::Float4, ::app::Uno::Float4);
    ::app::Uno::Float4(*__fp_Weight)(Blender__float4*, ::app::Uno::Float4, double);
};

Blender__float4__uType* Blender__float4__typeof();

void Blender__float4___ObjInit(Blender__float4* __this);

struct Blender__float4 : ::uObject
{
    void _ObjInit() { Blender__float4___ObjInit(this); }
    ::app::Uno::Float4 Add(::app::Uno::Float4 a, ::app::Uno::Float4 b);
    ::app::Uno::Float4 Weight(::app::Uno::Float4 v, double w);
};

}}}

#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {
namespace Internal {

inline ::app::Uno::Float4 Blender__float4::Add(::app::Uno::Float4 a, ::app::Uno::Float4 b) { return (((Blender__float4__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
inline ::app::Uno::Float4 Blender__float4::Weight(::app::Uno::Float4 v, double w) { return (((Blender__float4__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }

}}}


#endif
