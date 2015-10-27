// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_FLOAT3X3_H__
#define __APP_UNO_FLOAT3X3_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {

struct Float3x3;

struct Float3x3__uType : ::uStructType
{
};

Float3x3__uType* Float3x3__typeof();

void Float3x3___ObjInit_1(Float3x3* __this, float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33);
bool Float3x3__Equals(Float3x3* __this, ::uObject* o);
int Float3x3__GetHashCode(Float3x3* __this);
Float3x3 Float3x3__New_2(::uStatic* __this, float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33);
::uString* Float3x3__ToString(Float3x3* __this);

struct Float3x3
{
    float M11;
    float M12;
    float M13;
    float M21;
    float M22;
    float M23;
    float M31;
    float M32;
    float M33;

    void _ObjInit_1(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) { Float3x3___ObjInit_1(this, m11, m12, m13, m21, m22, m23, m31, m32, m33); }
    bool Equals(::uObject* o) { return Float3x3__Equals(this, o); }
    int GetHashCode() { return Float3x3__GetHashCode(this); }
    ::uString* ToString() { return Float3x3__ToString(this); }
};

}}


#endif
