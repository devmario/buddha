// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_FLOAT3_BLENDER_H__
#define __APP_FUSE_INTERNAL_FLOAT3_BLENDER_H__

#include <app/Fuse.Internal.Blender__float3.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct Float3Blender;

struct Float3Blender__uType : ::app::Fuse::Internal::Blender__float3__uType
{
};

Float3Blender__uType* Float3Blender__typeof();

void Float3Blender___ObjInit_1(Float3Blender* __this);
Float3Blender* Float3Blender__New_1(::uStatic* __this);

struct Float3Blender : ::app::Fuse::Internal::Blender__float3
{
    void _ObjInit_1() { Float3Blender___ObjInit_1(this); }
};

}}}


#endif
