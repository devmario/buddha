#include <app/Fuse.Drawing.Internal.Float2Buffer.h>
#include <app/Fuse.Drawing.Internal.FloatBuffer.h>
#include <app/Fuse.Drawing.Internal.TypedBuffer.h>
#include <app/Fuse.Drawing.Internal.UShortBuffer.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Double.h>
#include <app/Uno.Float.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.UShort.h>

namespace app {
namespace Fuse {
namespace Drawing {
namespace Internal {

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Float2Buffer__uType* Float2Buffer__typeof()
{
    static ::uStaticStrong<Float2Buffer__uType*> type;
    if (type != NULL) return type;

    type = (Float2Buffer__uType*)::uAllocClassType(sizeof(Float2Buffer__uType), "Fuse.Drawing.Internal.Float2Buffer", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Internal::TypedBuffer__typeof());

    return type;
}

void Float2Buffer___ObjInit_2(Float2Buffer* __this)
{
    ::app::Fuse::Drawing::Internal::TypedBuffer___ObjInit_1(__this, 8, 32);
}

void Float2Buffer__Append(Float2Buffer* __this, ::app::Uno::Float2 value)
{
    __this->CheckGrow();
    __this->Set(__this->size++, value);
}

void Float2Buffer__Append_1(Float2Buffer* __this, double x, double y)
{
    __this->Append(::app::Uno::Float2__New_2(NULL, (float)x, (float)y));
}

Float2Buffer* Float2Buffer__New_3(::uStatic* __this)
{
    Float2Buffer* inst = (Float2Buffer*)::uAllocObject(sizeof(Float2Buffer), Float2Buffer__typeof());
    inst->_ObjInit_2();
    return inst;
}

void Float2Buffer__Set(Float2Buffer* __this, int offset, ::app::Uno::Float2 value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->back)->SetFloat2(offset * __this->typeSize, value, true);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FloatBuffer__uType* FloatBuffer__typeof()
{
    static ::uStaticStrong<FloatBuffer__uType*> type;
    if (type != NULL) return type;

    type = (FloatBuffer__uType*)::uAllocClassType(sizeof(FloatBuffer__uType), "Fuse.Drawing.Internal.FloatBuffer", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Internal::TypedBuffer__typeof());

    return type;
}

void FloatBuffer___ObjInit_2(FloatBuffer* __this)
{
    ::app::Fuse::Drawing::Internal::TypedBuffer___ObjInit_1(__this, 4, 32);
}

void FloatBuffer__Append(FloatBuffer* __this, float value)
{
    __this->CheckGrow();
    __this->Set(__this->size++, value);
}

FloatBuffer* FloatBuffer__New_3(::uStatic* __this)
{
    FloatBuffer* inst = (FloatBuffer*)::uAllocObject(sizeof(FloatBuffer), FloatBuffer__typeof());
    inst->_ObjInit_2();
    return inst;
}

void FloatBuffer__Set(FloatBuffer* __this, int offset, float value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->back)->SetFloat(offset * __this->typeSize, value, true);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TypedBuffer__uType* TypedBuffer__typeof()
{
    static ::uStaticStrong<TypedBuffer__uType*> type;
    if (type != NULL) return type;

    type = (TypedBuffer__uType*)::uAllocClassType(sizeof(TypedBuffer__uType), "Fuse.Drawing.Internal.TypedBuffer", false, 0, 3, 0);

    type->SetStrongRefs(
        "back", offsetof(TypedBuffer, back),
        "deviceIndex", offsetof(TypedBuffer, deviceIndex),
        "deviceVertex", offsetof(TypedBuffer, deviceVertex));

    return type;
}

void TypedBuffer___ObjInit_1(TypedBuffer* __this, int typeSize, int initSize)
{
    __this->typeSize = typeSize;
    __this->size = 0;
    __this->Init(initSize);
}

void TypedBuffer__CheckGrow(TypedBuffer* __this)
{
    if (__this->size < __this->capacity)
    {
        return;
    }

    int newCap = __this->capacity * 2;
    ::app::Uno::Buffer* newBuf = ::app::Uno::Buffer__New_3(NULL, __this->typeSize * newCap);

    for (int i = 0; i < ::uPtr< ::app::Uno::Buffer*>(__this->back)->SizeInBytes(); ++i)
    {
        ::uPtr< ::app::Uno::Buffer*>(newBuf)->SetByte(i, ::uPtr< ::app::Uno::Buffer*>(__this->back)->Item(i));
    }

    __this->back = newBuf;
    __this->capacity = newCap;
}

int TypedBuffer__Count(TypedBuffer* __this)
{
    return __this->size;
}

::app::Uno::Graphics::IndexBuffer* TypedBuffer__GetDeviceIndex(TypedBuffer* __this)
{
    return __this->deviceIndex;
}

::app::Uno::Graphics::VertexBuffer* TypedBuffer__GetDeviceVertex(TypedBuffer* __this)
{
    return __this->deviceVertex;
}

void TypedBuffer__Init(TypedBuffer* __this, int initSize)
{
    __this->capacity = initSize;
    __this->back = ::app::Uno::Buffer__New_3(NULL, __this->typeSize * initSize);
}

void TypedBuffer__InitDeviceIndex(TypedBuffer* __this, int bu)
{
    __this->deviceIndex = ::app::Uno::Graphics::IndexBuffer__New_3(NULL, __this->back, bu);
}

void TypedBuffer__InitDeviceVertex(TypedBuffer* __this, int bu)
{
    __this->deviceVertex = ::app::Uno::Graphics::VertexBuffer__New_3(NULL, __this->back, bu);
}

// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Drawing/0.10.5/Internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UShortBuffer__uType* UShortBuffer__typeof()
{
    static ::uStaticStrong<UShortBuffer__uType*> type;
    if (type != NULL) return type;

    type = (UShortBuffer__uType*)::uAllocClassType(sizeof(UShortBuffer__uType), "Fuse.Drawing.Internal.UShortBuffer", false, 0, 0, 0);

    type->SetBaseType(::app::Fuse::Drawing::Internal::TypedBuffer__typeof());

    return type;
}

void UShortBuffer___ObjInit_2(UShortBuffer* __this)
{
    ::app::Fuse::Drawing::Internal::TypedBuffer___ObjInit_1(__this, 2, 32);
}

void UShortBuffer__Append_1(UShortBuffer* __this, int value)
{
    __this->CheckGrow();
    __this->Set(__this->size++, (::uUShort)value);
}

UShortBuffer* UShortBuffer__New_3(::uStatic* __this)
{
    UShortBuffer* inst = (UShortBuffer*)::uAllocObject(sizeof(UShortBuffer), UShortBuffer__typeof());
    inst->_ObjInit_2();
    return inst;
}

void UShortBuffer__Set(UShortBuffer* __this, int offset, ::uUShort value)
{
    ::uPtr< ::app::Uno::Buffer*>(__this->back)->SetUShort(offset * __this->typeSize, value, true);
}

}}}}
