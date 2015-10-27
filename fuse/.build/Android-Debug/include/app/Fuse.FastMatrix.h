// This file was generated based on '/usr/local/share/uno/Packages/FuseCore/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_FAST_MATRIX_H__
#define __APP_FUSE_FAST_MATRIX_H__

#include <app/Uno.Float4x4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { struct Float3; } }
namespace app { namespace Uno { struct Float4; } }

namespace app {
namespace Fuse {

struct FastMatrix;

struct FastMatrix__uType : ::uClassType
{
};

FastMatrix__uType* FastMatrix__typeof();

void FastMatrix___ObjInit_1(FastMatrix* __this);
void FastMatrix__AppendFastMatrix(FastMatrix* __this, FastMatrix* fm);
void FastMatrix__AppendRotationQuaternion(FastMatrix* __this, ::app::Uno::Float4 q);
void FastMatrix__AppendScale(FastMatrix* __this, ::app::Uno::Float3 scale);
void FastMatrix__AppendShear(FastMatrix* __this, float xRadians, float yRadians);
void FastMatrix__AppendTranslation(FastMatrix* __this, ::app::Uno::Float3 offset);
void FastMatrix__AppendTranslation_1(FastMatrix* __this, float x, float y, float z);
FastMatrix* FastMatrix__FromFloat4x4(::uStatic* __this, ::app::Uno::Float4x4 m);
::app::Uno::Float4x4 FastMatrix__get_Matrix(FastMatrix* __this);
FastMatrix* FastMatrix__Identity(::uStatic* __this);
void FastMatrix__Invert(FastMatrix* __this);
FastMatrix* FastMatrix__Mul(FastMatrix* __this, FastMatrix* m);
FastMatrix* FastMatrix__New_1(::uStatic* __this);
void FastMatrix__PrependFastMatrix(FastMatrix* __this, FastMatrix* fm);
void FastMatrix__PrependRotationQuaternion(FastMatrix* __this, ::app::Uno::Float4 q);
void FastMatrix__PrependScale(FastMatrix* __this, ::app::Uno::Float3 scale);
void FastMatrix__PrependShear(FastMatrix* __this, float xRadians, float yRadians);
void FastMatrix__PrependTranslation(FastMatrix* __this, ::app::Uno::Float3 offset);
void FastMatrix__PrependTranslation_1(FastMatrix* __this, float x, float y, float z);
void FastMatrix__ResetIdentity(FastMatrix* __this);
void FastMatrix__SimpleTranslation(FastMatrix* __this, float x, float y, float z);

struct FastMatrix : ::uObject
{
    ::app::Uno::Float4x4 _matrix;
    bool _hasNonTranslation;

    void _ObjInit_1() { FastMatrix___ObjInit_1(this); }
    void AppendFastMatrix(FastMatrix* fm) { FastMatrix__AppendFastMatrix(this, fm); }
    void AppendRotationQuaternion(::app::Uno::Float4 q);
    void AppendScale(::app::Uno::Float3 scale);
    void AppendShear(float xRadians, float yRadians) { FastMatrix__AppendShear(this, xRadians, yRadians); }
    void AppendTranslation(::app::Uno::Float3 offset);
    void AppendTranslation_1(float x, float y, float z) { FastMatrix__AppendTranslation_1(this, x, y, z); }
    ::app::Uno::Float4x4 Matrix();
    void Invert() { FastMatrix__Invert(this); }
    FastMatrix* Mul(FastMatrix* m) { return FastMatrix__Mul(this, m); }
    void PrependFastMatrix(FastMatrix* fm) { FastMatrix__PrependFastMatrix(this, fm); }
    void PrependRotationQuaternion(::app::Uno::Float4 q);
    void PrependScale(::app::Uno::Float3 scale);
    void PrependShear(float xRadians, float yRadians) { FastMatrix__PrependShear(this, xRadians, yRadians); }
    void PrependTranslation(::app::Uno::Float3 offset);
    void PrependTranslation_1(float x, float y, float z) { FastMatrix__PrependTranslation_1(this, x, y, z); }
    void ResetIdentity() { FastMatrix__ResetIdentity(this); }
    void SimpleTranslation(float x, float y, float z) { FastMatrix__SimpleTranslation(this, x, y, z); }
};

}}

#include <app/Uno.Float3.h>
#include <app/Uno.Float4.h>

namespace app {
namespace Fuse {

inline void FastMatrix::AppendRotationQuaternion(::app::Uno::Float4 q) { FastMatrix__AppendRotationQuaternion(this, q); }
inline void FastMatrix::AppendScale(::app::Uno::Float3 scale) { FastMatrix__AppendScale(this, scale); }
inline void FastMatrix::AppendTranslation(::app::Uno::Float3 offset) { FastMatrix__AppendTranslation(this, offset); }
inline ::app::Uno::Float4x4 FastMatrix::Matrix() { return FastMatrix__get_Matrix(this); }
inline void FastMatrix::PrependRotationQuaternion(::app::Uno::Float4 q) { FastMatrix__PrependRotationQuaternion(this, q); }
inline void FastMatrix::PrependScale(::app::Uno::Float3 scale) { FastMatrix__PrependScale(this, scale); }
inline void FastMatrix::PrependTranslation(::app::Uno::Float3 offset) { FastMatrix__PrependTranslation(this, offset); }

}}


#endif
