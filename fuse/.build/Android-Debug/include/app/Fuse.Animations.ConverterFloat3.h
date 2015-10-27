// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Animations/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_CONVERTER_FLOAT3_H__
#define __APP_FUSE_ANIMATIONS_CONVERTER_FLOAT3_H__

#include <app/Fuse.Animations.Converter__float3.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Animations {

struct ConverterFloat3;

extern ::uStaticStrong< ConverterFloat3*> ConverterFloat3__Singleton;

struct ConverterFloat3__uType : ::app::Fuse::Animations::Converter__float3__uType
{
};

ConverterFloat3__uType* ConverterFloat3__typeof();

void ConverterFloat3___ObjInit_1(ConverterFloat3* __this);
void ConverterFloat3___TypeInit(::uStatic* __this);
ConverterFloat3* ConverterFloat3__New_1(::uStatic* __this);

struct ConverterFloat3 : ::app::Fuse::Animations::Converter__float3
{
    void _ObjInit_1() { ConverterFloat3___ObjInit_1(this); }
};

}}}


#endif
