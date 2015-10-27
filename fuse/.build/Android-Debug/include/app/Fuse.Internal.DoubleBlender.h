// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_DOUBLE_BLENDER_H__
#define __APP_FUSE_INTERNAL_DOUBLE_BLENDER_H__

#include <app/Fuse.Internal.Blender__double.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct DoubleBlender;

struct DoubleBlender__uType : ::app::Fuse::Internal::Blender__double__uType
{
};

DoubleBlender__uType* DoubleBlender__typeof();

void DoubleBlender___ObjInit_1(DoubleBlender* __this);
DoubleBlender* DoubleBlender__New_1(::uStatic* __this);

struct DoubleBlender : ::app::Fuse::Internal::Blender__double
{
    void _ObjInit_1() { DoubleBlender___ObjInit_1(this); }
};

}}}


#endif
