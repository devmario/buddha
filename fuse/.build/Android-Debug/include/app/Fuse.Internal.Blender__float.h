// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_INTERNAL_BLENDER__FLOAT_H__
#define __APP_FUSE_INTERNAL_BLENDER__FLOAT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Internal {

struct Blender__float;

struct Blender__float__uType : ::uClassType
{
    float(*__fp_Add)(Blender__float*, float, float);
    float(*__fp_get_Zero)(Blender__float*);
    double(*__fp_Length)(Blender__float*, float);
    float(*__fp_Lerp)(Blender__float*, float, float, double);
    float(*__fp_Sub)(Blender__float*, float, float);
    float(*__fp_ToUnit)(Blender__float*, float, double*);
    float(*__fp_Weight)(Blender__float*, float, double);
};

Blender__float__uType* Blender__float__typeof();

void Blender__float___ObjInit(Blender__float* __this);

struct Blender__float : ::uObject
{
    void _ObjInit() { Blender__float___ObjInit(this); }
    float Add(float a, float b) { return (((Blender__float__uType*)this->__obj_type)->__fp_Add)(this, a, b); }
    float Zero() { return (((Blender__float__uType*)this->__obj_type)->__fp_get_Zero)(this); }
    double Length(float a) { return (((Blender__float__uType*)this->__obj_type)->__fp_Length)(this, a); }
    float Lerp(float a, float b, double d) { return (((Blender__float__uType*)this->__obj_type)->__fp_Lerp)(this, a, b, d); }
    float Sub(float a, float b) { return (((Blender__float__uType*)this->__obj_type)->__fp_Sub)(this, a, b); }
    float ToUnit(float a, double* length) { return (((Blender__float__uType*)this->__obj_type)->__fp_ToUnit)(this, a, length); }
    float Weight(float v, double w) { return (((Blender__float__uType*)this->__obj_type)->__fp_Weight)(this, v, w); }
};

}}}


#endif
