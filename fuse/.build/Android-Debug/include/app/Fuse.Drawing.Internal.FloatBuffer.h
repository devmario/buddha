// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_INTERNAL_FLOAT_BUFFER_H__
#define __APP_FUSE_DRAWING_INTERNAL_FLOAT_BUFFER_H__

#include <app/Fuse.Drawing.Internal.TypedBuffer.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Internal {

struct FloatBuffer;

struct FloatBuffer__uType : ::app::Fuse::Drawing::Internal::TypedBuffer__uType
{
};

FloatBuffer__uType* FloatBuffer__typeof();

void FloatBuffer___ObjInit_2(FloatBuffer* __this);
void FloatBuffer__Append(FloatBuffer* __this, float value);
FloatBuffer* FloatBuffer__New_3(::uStatic* __this);
void FloatBuffer__Set(FloatBuffer* __this, int offset, float value);

struct FloatBuffer : ::app::Fuse::Drawing::Internal::TypedBuffer
{
    void _ObjInit_2() { FloatBuffer___ObjInit_2(this); }
    void Append(float value) { FloatBuffer__Append(this, value); }
    void Set(int offset, float value) { FloatBuffer__Set(this, offset, value); }
};

}}}}


#endif
