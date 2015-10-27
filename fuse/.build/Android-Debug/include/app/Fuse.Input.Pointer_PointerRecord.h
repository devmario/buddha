// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INPUT_POINTER_POINTER_RECORD_H__
#define __APP_FUSE_INPUT_POINTER_POINTER_RECORD_H__

#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Input {

struct Pointer_PointerRecord;

struct Pointer_PointerRecord__uType : ::uClassType
{
};

Pointer_PointerRecord__uType* Pointer_PointerRecord__typeof();

void Pointer_PointerRecord___ObjInit(Pointer_PointerRecord* __this);
Pointer_PointerRecord* Pointer_PointerRecord__New_1(::uStatic* __this);

struct Pointer_PointerRecord : ::uObject
{
    ::app::Uno::Float2 WindowPoint;
    bool WasHandled;
    float DistanceMoved;
    double TimeAppeared;

    void _ObjInit() { Pointer_PointerRecord___ObjInit(this); }
};

}}}


#endif
