// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_FLOAT2X2_H__
#define __APP_UNO_FLOAT2X2_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Uno {

struct Float2x2;

struct Float2x2__uType : ::uStructType
{
};

Float2x2__uType* Float2x2__typeof();

void Float2x2___ObjInit(Float2x2* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b);
void Float2x2___ObjInit_1(Float2x2* __this, float m11, float m12, float m21, float m22);
bool Float2x2__Equals(Float2x2* __this, ::uObject* o);
int Float2x2__GetHashCode(Float2x2* __this);
Float2x2 Float2x2__New_1(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b);
Float2x2 Float2x2__New_2(::uStatic* __this, float m11, float m12, float m21, float m22);
::uString* Float2x2__ToString(Float2x2* __this);

struct Float2x2
{
    float M11;
    float M12;
    float M21;
    float M22;

    void _ObjInit(::app::Uno::Float2 a, ::app::Uno::Float2 b);
    void _ObjInit_1(float m11, float m12, float m21, float m22) { Float2x2___ObjInit_1(this, m11, m12, m21, m22); }
    bool Equals(::uObject* o) { return Float2x2__Equals(this, o); }
    int GetHashCode() { return Float2x2__GetHashCode(this); }
    ::uString* ToString() { return Float2x2__ToString(this); }
};

}}

#include <app/Uno.Float2.h>

namespace app {
namespace Uno {

inline void Float2x2::_ObjInit(::app::Uno::Float2 a, ::app::Uno::Float2 b) { Float2x2___ObjInit(this, a, b); }

}}


#endif
