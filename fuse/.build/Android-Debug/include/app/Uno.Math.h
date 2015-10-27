// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_MATH_H__
#define __APP_UNO_MATH_H__

#include <Uno.h>
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Uno {

struct Math__uType : ::uClassType
{
};

Math__uType* Math__typeof();

int Math__Abs_2(::uStatic* __this, int x);
::app::Uno::Float2 Math__Abs_6(::uStatic* __this, ::app::Uno::Float2 a);
double Math__Abs_7(::uStatic* __this, double x);
float Math__Abs_8(::uStatic* __this, float x);
float Math__Acos(::uStatic* __this, float radians_);
float Math__Asin_1(::uStatic* __this, float radians_);
float Math__Atan2_1(::uStatic* __this, float y_, float x_);
double Math__Ceil(::uStatic* __this, double x_);
float Math__Ceil_1(::uStatic* __this, float x_);
::app::Uno::Float2 Math__Ceil_2(::uStatic* __this, ::app::Uno::Float2 v);
::app::Uno::Float2 Math__Clamp_10(::uStatic* __this, ::app::Uno::Float2 x, ::app::Uno::Float2 minimum, ::app::Uno::Float2 maximum);
int Math__Clamp_3(::uStatic* __this, int x, int minimum, int maximum);
double Math__Clamp_7(::uStatic* __this, double x, double minimum, double maximum);
float Math__Clamp_8(::uStatic* __this, float x, float minimum, float maximum);
float Math__Cos_1(::uStatic* __this, float radians_);
float Math__DegreesToRadians_1(::uStatic* __this, float degrees);
float Math__Exp_4(::uStatic* __this, float x);
double Math__Floor(::uStatic* __this, double x_);
float Math__Floor_1(::uStatic* __this, float x_);
::app::Uno::Float2 Math__Floor_2(::uStatic* __this, ::app::Uno::Float2 v);
bool Math__IsPow2(::uStatic* __this, int x);
::app::Uno::Float3 Math__Lerp_3(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b, float t);
::app::Uno::Float2 Math__Lerp_6(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b, float t);
float Math__Log_1(::uStatic* __this, float x_);
::app::Uno::Float4 Math__Max_1(::uStatic* __this, ::app::Uno::Float4 a, ::app::Uno::Float4 b);
::app::Uno::Float2 Math__Max_10(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b);
int Math__Max_2(::uStatic* __this, int a, int b);
::app::Uno::Float3 Math__Max_6(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b);
double Math__Max_7(::uStatic* __this, double a, double b);
float Math__Max_8(::uStatic* __this, float a, float b);
::app::Uno::Float2 Math__Max_9(::uStatic* __this, ::app::Uno::Float2 a, float b);
double Math__Min_10(::uStatic* __this, double a, double b);
float Math__Min_11(::uStatic* __this, float a, float b);
::app::Uno::Float2 Math__Min_13(::uStatic* __this, ::app::Uno::Float2 a, ::app::Uno::Float2 b);
int Math__Min_5(::uStatic* __this, int a, int b);
::app::Uno::Float3 Math__Min_9(::uStatic* __this, ::app::Uno::Float3 a, ::app::Uno::Float3 b);
double Math__Mod_3(::uStatic* __this, double x, double y);
float Math__Mod_4(::uStatic* __this, float x, float y);
int Math__NextPow2(::uStatic* __this, int x);
double Math__Pow(::uStatic* __this, double x_, double y_);
float Math__Pow_1(::uStatic* __this, float x_, float y_);
float Math__RadiansToDegrees_3(::uStatic* __this, float radians);
float Math__Round_3(::uStatic* __this, float x);
::app::Uno::Float2 Math__Round_4(::uStatic* __this, ::app::Uno::Float2 x);
double Math__Round_8(::uStatic* __this, double d, int decimals);
double Math__Round_9(::uStatic* __this, double x);
float Math__Saturate_1(::uStatic* __this, float x);
double Math__Sin(::uStatic* __this, double radians_);
float Math__Sin_1(::uStatic* __this, float radians_);
double Math__Sqrt(::uStatic* __this, double x_);
float Math__Sqrt_1(::uStatic* __this, float x_);
::app::Uno::Float2 Math__Sqrt_2(::uStatic* __this, ::app::Uno::Float2 x);
float Math__Tan_3(::uStatic* __this, float radians_);

}}


#endif
