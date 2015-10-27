#include <app/OpenGL.GL.h>
#include <app/OpenGL.GLBufferHandle.h>
#include <app/OpenGL.GLBufferTarget.h>
#include <app/OpenGL.GLBufferUsage.h>
#include <app/OpenGL.GLClearBufferMask.h>
#include <app/OpenGL.GLEnableCap.h>
#include <app/OpenGL.GLFramebufferHandle.h>
#include <app/OpenGL.GLFramebufferTarget.h>
#include <app/OpenGL.GLIntegerStateVariable.h>
#include <app/OpenGL.GLRenderbufferHandle.h>
#include <app/OpenGL.GLTextureHandle.h>
#include <app/OpenGL.GLTextureParameterName.h>
#include <app/OpenGL.GLTextureParameterValue.h>
#include <app/OpenGL.GLTextureTarget.h>
#include <app/OpenGL.GLTextureUnit.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Float.h>
#include <app/Uno.FormatException.h>
#include <app/Uno.Graphics.BlendEquation.h>
#include <app/Uno.Graphics.BlendOperand.h>
#include <app/Uno.Graphics.BufferUsage.h>
#include <app/Uno.Graphics.CompareFunc.h>
#include <app/Uno.Graphics.DeviceBuffer.h>
#include <app/Uno.Graphics.Format.h>
#include <app/Uno.Graphics.FormatHelpers.h>
#include <app/Uno.Graphics.Framebuffer.h>
#include <app/Uno.Graphics.FramebufferFlags.h>
#include <app/Uno.Graphics.GraphicsContext.h>
#include <app/Uno.Graphics.IndexBuffer.h>
#include <app/Uno.Graphics.IndexType.h>
#include <app/Uno.Graphics.PolygonFace.h>
#include <app/Uno.Graphics.PolygonWinding.h>
#include <app/Uno.Graphics.PrimitiveType.h>
#include <app/Uno.Graphics.RenderTarget.h>
#include <app/Uno.Graphics.SamplerState.h>
#include <app/Uno.Graphics.Texture2D.h>
#include <app/Uno.Graphics.TextureAddressMode.h>
#include <app/Uno.Graphics.TextureFilter.h>
#include <app/Uno.Graphics.TextureHelpers.h>
#include <app/Uno.Graphics.VertexAttributeInfo.h>
#include <app/Uno.Graphics.VertexAttributeType.h>
#include <app/Uno.Graphics.VertexBuffer.h>
#include <app/Uno.Int.h>
#include <app/Uno.Int2.h>
#include <app/Uno.InvalidOperationException.h>
#include <app/Uno.Math.h>
#include <app/Uno.Object.h>
#include <app/Uno.ObjectDisposedException.h>
#include <app/Uno.Runtime.Implementation.GraphicsContextHandle.h>
#include <app/Uno.Runtime.Implementation.GraphicsContextImpl.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers.h>
#include <app/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLInterop.h>
#include <app/Uno.String.h>
#include <Uno/XliInterop.h>
#include <Xli.h>
#include <XliGL.h>
#include <XliImage.h>
#include <XliPlatform.h>

namespace app {
namespace Uno {
namespace Graphics {

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* BlendEquation__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.BlendEquation", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "Add", 0LL,
        "Subtract", 1LL,
        "ReverseSubtract", 2LL,
        "Min", 3LL,
        "Max", 4LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* BlendOperand__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.BlendOperand", ::app::Uno::Int__typeof(), 10);

    type->SetLiterals(
        "Zero", 0LL,
        "One", 1LL,
        "SrcAlpha", 2LL,
        "OneMinusSrcAlpha", 3LL,
        "SrcColor", 4LL,
        "OneMinusSrcColor", 5LL,
        "DstAlpha", 6LL,
        "OneMinusDstAlpha", 7LL,
        "DstColor", 8LL,
        "OneMinusDstColor", 9LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* BufferUsage__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.BufferUsage", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Immutable", 0LL,
        "Dynamic", 1LL,
        "Stream", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* CompareFunc__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.CompareFunc", ::app::Uno::Int__typeof(), 8);

    type->SetLiterals(
        "Always", 0LL,
        "Less", 1LL,
        "LessOrEqual", 2LL,
        "Equal", 3LL,
        "NotEqual", 4LL,
        "GreaterOrEqual", 5LL,
        "Greater", 6LL,
        "Never", 7LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

DeviceBuffer__uType* DeviceBuffer__typeof()
{
    static ::uStaticStrong<DeviceBuffer__uType*> type;
    if (type != NULL) return type;

    type = (DeviceBuffer__uType*)::uAllocClassType(sizeof(DeviceBuffer__uType), "Uno.Graphics.DeviceBuffer", false, 1, 0, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))DeviceBuffer__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(DeviceBuffer__uType, __interface_0));

    return type;
}

void DeviceBuffer___ObjInit(DeviceBuffer* __this, int usage)
{
    __this->Usage(usage);
}

void DeviceBuffer__Dispose(DeviceBuffer* __this)
{
    if (__this->IsDisposed())
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("DeviceBuffer")));
    }
    else
    {
        ::app::OpenGL::GL__DeleteBuffer(NULL, __this->GLBufferHandle());
    }

    __this->IsDisposed(true);
}

::uUInt DeviceBuffer__get_GLBufferHandle(DeviceBuffer* __this)
{
    return __this->_GLBufferHandle;
}

int DeviceBuffer__get_GLBufferTarget(DeviceBuffer* __this)
{
    return __this->_GLBufferTarget;
}

bool DeviceBuffer__get_IsDisposed(DeviceBuffer* __this)
{
    return __this->_IsDisposed;
}

int DeviceBuffer__get_SizeInBytes(DeviceBuffer* __this)
{
    return __this->_SizeInBytes;
}

int DeviceBuffer__get_Usage(DeviceBuffer* __this)
{
    return __this->_Usage;
}

void DeviceBuffer__GLInit(DeviceBuffer* __this, int target)
{
    __this->GLBufferTarget(target);
    __this->GLBufferHandle(::app::OpenGL::GL__CreateBuffer(NULL));
}

void DeviceBuffer__GLInit_2(DeviceBuffer* __this, int target, ::app::Uno::Buffer* data)
{
    __this->GLBufferTarget(target);
    __this->GLBufferHandle(::app::OpenGL::GL__CreateBuffer(NULL));
    __this->SizeInBytes(::uPtr< ::app::Uno::Buffer*>(data)->SizeInBytes());
    ::app::OpenGL::GL__BindBuffer(NULL, __this->GLBufferTarget(), __this->GLBufferHandle());
    ::app::OpenGL::GL__BufferData_1(NULL, __this->GLBufferTarget(), data, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLBufferUsage(NULL, __this->Usage()));
    ::app::OpenGL::GL__BindBuffer(NULL, __this->GLBufferTarget(), ::app::OpenGL::GLBufferHandle__Zero);
}

void DeviceBuffer__set_GLBufferHandle(DeviceBuffer* __this, ::uUInt value)
{
    __this->_GLBufferHandle = value;
}

void DeviceBuffer__set_GLBufferTarget(DeviceBuffer* __this, int value)
{
    __this->_GLBufferTarget = value;
}

void DeviceBuffer__set_IsDisposed(DeviceBuffer* __this, bool value)
{
    __this->_IsDisposed = value;
}

void DeviceBuffer__set_SizeInBytes(DeviceBuffer* __this, int value)
{
    __this->_SizeInBytes = value;
}

void DeviceBuffer__set_Usage(DeviceBuffer* __this, int value)
{
    __this->_Usage = value;
}

void DeviceBuffer__Update(DeviceBuffer* __this, ::app::Uno::Buffer* data)
{
    if (__this->IsDisposed())
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("DeviceBuffer")));
    }
    else
    {
        ::app::OpenGL::GL__BindBuffer(NULL, __this->GLBufferTarget(), __this->GLBufferHandle());

        if (::uPtr< ::app::Uno::Buffer*>(data)->SizeInBytes() <= __this->SizeInBytes())
        {
            ::app::OpenGL::GL__BufferSubData(NULL, __this->GLBufferTarget(), 0, data);
        }
        else
        {
            ::app::OpenGL::GL__BufferData_1(NULL, __this->GLBufferTarget(), data, ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop__ToGLBufferUsage(NULL, __this->Usage()));
            __this->SizeInBytes(::uPtr< ::app::Uno::Buffer*>(data)->SizeInBytes());
        }

        ::app::OpenGL::GL__BindBuffer(NULL, __this->GLBufferTarget(), ::app::OpenGL::GLBufferHandle__Zero);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* Format__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.Format", ::app::Uno::Int__typeof(), 7);

    type->SetLiterals(
        "Unknown", 0LL,
        "L8", 1LL,
        "LA88", 2LL,
        "RGBA8888", 3LL,
        "RGBA4444", 4LL,
        "RGBA5551", 5LL,
        "RGB565", 6LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

FormatHelpers__uType* FormatHelpers__typeof()
{
    static ::uStaticStrong<FormatHelpers__uType*> type;
    if (type != NULL) return type;

    type = (FormatHelpers__uType*)::uAllocClassType(sizeof(FormatHelpers__uType), "Uno.Graphics.FormatHelpers");

    return type;
}

int FormatHelpers__GetStrideInBytes(::uStatic* __this, int format)
{
    switch (format)
    {
        case 1:
        {
            return 1;
        }
        case 2:
        {
            return 2;
        }
        case 3:
        {
            return 4;
        }
        case 4:
        {
            return 2;
        }
        case 5:
        {
            return 2;
        }
        case 6:
        {
            return 2;
        }
    }

    U_THROW(::app::Uno::FormatException__New_3(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition(NULL, ::uGetConstString("Invalid format <"), ::uBox< int>(::app::Uno::Graphics::Format__typeof(), format)), ::uGetConstString(">"))));
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Framebuffer__uType* Framebuffer__typeof()
{
    static ::uStaticStrong<Framebuffer__uType*> type;
    if (type != NULL) return type;

    type = (Framebuffer__uType*)::uAllocClassType(sizeof(Framebuffer__uType), "framebuffer", false, 1, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))Framebuffer__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Framebuffer__uType, __interface_0));

    type->SetStrongRefs(
        "_ColorBuffer", offsetof(Framebuffer, _ColorBuffer),
        "_RenderTarget", offsetof(Framebuffer, _RenderTarget));

    return type;
}

void Framebuffer___ObjInit(Framebuffer* __this, ::app::Uno::Int2 size, int format, int flags)
{
    __this->ColorBuffer(::app::Uno::Graphics::Texture2D__New_2(NULL, size, format, (flags & 2) == 2));
    __this->RenderTarget(::app::Uno::Graphics::RenderTarget__CreateFromTexture2D(NULL, __this->ColorBuffer(), 0, (flags & 1) == 1));
}

void Framebuffer__Dispose(Framebuffer* __this)
{
    ::uPtr< ::app::Uno::Graphics::Texture2D*>(__this->ColorBuffer())->Dispose();
    ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->RenderTarget())->Dispose();
}

::app::Uno::Graphics::Texture2D* Framebuffer__get_ColorBuffer(Framebuffer* __this)
{
    return __this->_ColorBuffer;
}

int Framebuffer__get_Format(Framebuffer* __this)
{
    return ::uPtr< ::app::Uno::Graphics::Texture2D*>(__this->ColorBuffer())->Format();
}

bool Framebuffer__get_HasDepth(Framebuffer* __this)
{
    return ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->RenderTarget())->HasDepth();
}

::app::Uno::Graphics::RenderTarget* Framebuffer__get_RenderTarget(Framebuffer* __this)
{
    return __this->_RenderTarget;
}

::app::Uno::Int2 Framebuffer__get_Size(Framebuffer* __this)
{
    return ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->RenderTarget())->Size();
}

bool Framebuffer__get_SupportsMipmap(Framebuffer* __this)
{
    return ::uPtr< ::app::Uno::Graphics::Texture2D*>(__this->ColorBuffer())->SupportsMipmap();
}

Framebuffer* Framebuffer__New_1(::uStatic* __this, ::app::Uno::Int2 size, int format, int flags)
{
    Framebuffer* inst = (Framebuffer*)::uAllocObject(sizeof(Framebuffer), Framebuffer__typeof());
    inst->_ObjInit(size, format, flags);
    return inst;
}

void Framebuffer__set_ColorBuffer(Framebuffer* __this, ::app::Uno::Graphics::Texture2D* value)
{
    __this->_ColorBuffer = value;
}

void Framebuffer__set_RenderTarget(Framebuffer* __this, ::app::Uno::Graphics::RenderTarget* value)
{
    __this->_RenderTarget = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* FramebufferFlags__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.FramebufferFlags", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "None", 0LL,
        "DepthBuffer", 1LL,
        "Mipmap", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

GraphicsContext__uType* GraphicsContext__typeof()
{
    static ::uStaticStrong<GraphicsContext__uType*> type;
    if (type != NULL) return type;

    type = (GraphicsContext__uType*)::uAllocClassType(sizeof(GraphicsContext__uType), "Uno.Graphics.GraphicsContext", false, 0, 2, 0);

    type->SetStrongRefs(
        "_backbuffer", offsetof(GraphicsContext, _backbuffer),
        "_renderTarget", offsetof(GraphicsContext, _renderTarget));

    return type;
}

void GraphicsContext___ObjInit(GraphicsContext* __this)
{
    __this->_handle = ::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetInstance(NULL);
    __this->_renderTarget = __this->_backbuffer = ::app::Uno::Graphics::RenderTarget__New_1(NULL);
    __this->UpdateBackbuffer();
}

void GraphicsContext__Clear(GraphicsContext* __this, ::app::Uno::Float4 color, float depth)
{
    {
        ::app::OpenGL::GL__ClearDepth(NULL, depth);
        ::app::OpenGL::GL__ClearColor(NULL, color.X, color.Y, color.Z, color.W);
        ::app::OpenGL::GL__Clear(NULL, 17664);
    }
}

void GraphicsContext__ForceResetState(GraphicsContext* __this)
{
    __this->_handle = ::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetInstance(NULL);
    __this->_renderTarget = __this->_backbuffer = ::app::Uno::Graphics::RenderTarget__New_1(NULL);
    __this->UpdateBackbuffer();
    __this->Viewport(__this->_viewport);
    ::app::OpenGL::GL__Enable(NULL, 3089);
    __this->_scissorEnabled = true;
    __this->SetRenderTarget(__this->_backbuffer);
}

::app::Uno::Graphics::RenderTarget* GraphicsContext__get_Backbuffer(GraphicsContext* __this)
{
    return __this->_backbuffer;
}

::app::Uno::Graphics::RenderTarget* GraphicsContext__get_RenderTarget(GraphicsContext* __this)
{
    return __this->_renderTarget;
}

::app::Uno::Recti GraphicsContext__get_Scissor(GraphicsContext* __this)
{
    return __this->_scissor;
}

::app::Uno::Recti GraphicsContext__get_Viewport(GraphicsContext* __this)
{
    return __this->_viewport;
}

GraphicsContext* GraphicsContext__New_1(::uStatic* __this)
{
    GraphicsContext* inst = (GraphicsContext*)::uAllocObject(sizeof(GraphicsContext), GraphicsContext__typeof());
    inst->_ObjInit();
    return inst;
}

void GraphicsContext__set_Scissor(GraphicsContext* __this, ::app::Uno::Recti value)
{
    {
        if (!__this->_scissorEnabled)
        {
            ::app::OpenGL::GL__Enable(NULL, 3089);
            __this->_scissorEnabled = true;
        }

        __this->_scissor = value;

        if (__this->_renderTarget == __this->_backbuffer)
        {
            ::app::Uno::Int2 offset = ::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetBackbufferOffset(NULL, __this->_handle);
            int realFbHeight = ::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetRealBackbufferHeight(NULL, __this->_handle);
            ::app::Uno::Recti offsetScissor = ::app::Uno::Recti__New_2(NULL, ::app::Uno::Int2__op_Addition_1(NULL, __this->_scissor.Position(), offset), __this->_scissor.Size());
            ::app::Uno::Recti currentScissor = ::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetBackbufferScissor(NULL, __this->_handle);
            ::app::Uno::Recti clippedScissor = ::app::Uno::Recti__New_1(NULL, ::app::Uno::Math__Max_2(NULL, offsetScissor.Left, currentScissor.Left), ::app::Uno::Math__Max_2(NULL, offsetScissor.Top, currentScissor.Top), ::app::Uno::Math__Min_5(NULL, offsetScissor.Right, currentScissor.Right), ::app::Uno::Math__Min_5(NULL, offsetScissor.Bottom, currentScissor.Bottom));
            ::app::OpenGL::GL__Scissor(NULL, clippedScissor.Left, realFbHeight - clippedScissor.Bottom, ::app::Uno::Math__Max_2(NULL, 0, clippedScissor.Size().X), ::app::Uno::Math__Max_2(NULL, 0, clippedScissor.Size().Y));
        }
        else
        {
            ::app::OpenGL::GL__Scissor(NULL, __this->_scissor.Left, ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->_renderTarget)->Size().Y - __this->_scissor.Bottom, ::app::Uno::Math__Max_2(NULL, 0, __this->_scissor.Size().X), ::app::Uno::Math__Max_2(NULL, 0, __this->_scissor.Size().Y));
        }
    }
}

void GraphicsContext__set_Viewport(GraphicsContext* __this, ::app::Uno::Recti value)
{
    {
        __this->_viewport = value;

        if (__this->_renderTarget == __this->_backbuffer)
        {
            ::app::Uno::Int2 offset = ::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetBackbufferOffset(NULL, __this->_handle);
            int realFbHeight = ::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetRealBackbufferHeight(NULL, __this->_handle);
            ::app::Uno::Recti offsetViewport = ::app::Uno::Recti__New_2(NULL, ::app::Uno::Int2__op_Addition_1(NULL, __this->_viewport.Position(), offset), __this->_viewport.Size());
            ::app::OpenGL::GL__Viewport(NULL, offsetViewport.Left, realFbHeight - offsetViewport.Bottom, ::app::Uno::Math__Max_2(NULL, 0, offsetViewport.Size().X), ::app::Uno::Math__Max_2(NULL, 0, offsetViewport.Size().Y));
        }
        else
        {
            ::app::OpenGL::GL__Viewport(NULL, __this->_viewport.Left, ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->_renderTarget)->Size().Y - __this->_viewport.Bottom, ::app::Uno::Math__Max_2(NULL, 0, __this->_viewport.Size().X), ::app::Uno::Math__Max_2(NULL, 0, __this->_viewport.Size().Y));
        }
    }
}

void GraphicsContext__SetRenderTarget(GraphicsContext* __this, ::app::Uno::Graphics::RenderTarget* renderTarget)
{
    if (renderTarget == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("renderTarget")));
    }

    ::app::Uno::Recti full = ::app::Uno::Recti__New_2(NULL, ::app::Uno::Int2__New_1(NULL, 0), ::uPtr< ::app::Uno::Graphics::RenderTarget*>(renderTarget)->Size());
    __this->SetRenderTarget_1(renderTarget, full, full);
}

void GraphicsContext__SetRenderTarget_1(GraphicsContext* __this, ::app::Uno::Graphics::RenderTarget* renderTarget, ::app::Uno::Recti viewport, ::app::Uno::Recti scissor)
{
    if (renderTarget == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("renderTarget")));
    }

    __this->_renderTarget = renderTarget;
    ::app::OpenGL::GL__BindFramebuffer(NULL, 36160, ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->_renderTarget)->GLFramebufferHandle());
    __this->Viewport(viewport);
    __this->Scissor(scissor);
}

void GraphicsContext__UpdateBackbuffer(GraphicsContext* __this)
{
    ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->_backbuffer)->GLFramebufferHandle(::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetBackbufferGLHandle(NULL, __this->_handle));
    ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->_backbuffer)->Size(::app::Uno::Runtime::Implementation::GraphicsContextImpl__GetBackbufferSize(NULL, __this->_handle));
    ::uPtr< ::app::Uno::Graphics::RenderTarget*>(__this->_backbuffer)->HasDepth(true);
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

IndexBuffer__uType* IndexBuffer__typeof()
{
    static ::uStaticStrong<IndexBuffer__uType*> type;
    if (type != NULL) return type;

    type = (IndexBuffer__uType*)::uAllocClassType(sizeof(IndexBuffer__uType), "Uno.Graphics.IndexBuffer", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Graphics::DeviceBuffer__typeof());

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(IndexBuffer__uType, __interface_0));

    return type;
}

void IndexBuffer___ObjInit_3(IndexBuffer* __this, ::app::Uno::Buffer* data, int usage)
{
    ::app::Uno::Graphics::DeviceBuffer___ObjInit(__this, usage);
    __this->GLInit_2(34963, data);
}

IndexBuffer* IndexBuffer__New_3(::uStatic* __this, ::app::Uno::Buffer* data, int usage)
{
    IndexBuffer* inst = (IndexBuffer*)::uAllocObject(sizeof(IndexBuffer), IndexBuffer__typeof());
    inst->_ObjInit_3(data, usage);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* IndexType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.IndexType", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "Undefined", 0LL,
        "Byte", 1LL,
        "UShort", 2LL,
        "UInt", 4LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* PolygonFace__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.PolygonFace", ::app::Uno::Int__typeof(), 4);

    type->SetLiterals(
        "None", 0LL,
        "Front", 1LL,
        "Back", 2LL,
        "Both", 3LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* PolygonWinding__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.PolygonWinding", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Clockwise", 0LL,
        "CounterClockwise", 1LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* PrimitiveType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.PrimitiveType", ::app::Uno::Int__typeof(), 5);

    type->SetLiterals(
        "Triangles", 1LL,
        "Lines", 2LL,
        "Points", 3LL,
        "TriangleStrip", 4LL,
        "LineStrip", 5LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

RenderTarget__uType* RenderTarget__typeof()
{
    static ::uStaticStrong<RenderTarget__uType*> type;
    if (type != NULL) return type;

    type = (RenderTarget__uType*)::uAllocClassType(sizeof(RenderTarget__uType), "Uno.Graphics.RenderTarget", false, 1, 0, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))RenderTarget__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(RenderTarget__uType, __interface_0));

    return type;
}

void RenderTarget___ObjInit(RenderTarget* __this)
{
}

RenderTarget* RenderTarget__CreateFromTexture2D(::uStatic* __this, ::app::Uno::Graphics::Texture2D* texture, int mip, bool depth)
{
    return ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers__CreateRenderTarget_1(NULL, 3553, ::uPtr< ::app::Uno::Graphics::Texture2D*>(texture)->GLTextureHandle(), mip, ::app::Uno::Graphics::TextureHelpers__GetMipSize(NULL, texture, mip), depth);
}

void RenderTarget__Dispose(RenderTarget* __this)
{
    if (__this->IsDisposed())
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("RenderTarget")));
    }
    else
    {
        if (__this->OwnsGLDepthBufferHandle() && ::app::OpenGL::GLRenderbufferHandle__op_Inequality(NULL, __this->GLDepthBufferHandle(), ::app::OpenGL::GLRenderbufferHandle__Zero))
        {
            ::app::OpenGL::GL__DeleteRenderbuffer(NULL, __this->GLDepthBufferHandle());
        }

        if (__this->OwnsGLFramebufferHandle() && ::app::OpenGL::GLFramebufferHandle__op_Inequality(NULL, __this->GLFramebufferHandle(), ::app::OpenGL::GLFramebufferHandle__Zero))
        {
            ::app::OpenGL::GL__DeleteFramebuffer(NULL, __this->GLFramebufferHandle());
        }
    }

    __this->IsDisposed(true);
}

::uUInt RenderTarget__get_GLDepthBufferHandle(RenderTarget* __this)
{
    return __this->_GLDepthBufferHandle;
}

::uUInt RenderTarget__get_GLFramebufferHandle(RenderTarget* __this)
{
    return __this->_GLFramebufferHandle;
}

bool RenderTarget__get_HasDepth(RenderTarget* __this)
{
    return __this->_HasDepth;
}

bool RenderTarget__get_IsDisposed(RenderTarget* __this)
{
    return __this->_IsDisposed;
}

bool RenderTarget__get_OwnsGLDepthBufferHandle(RenderTarget* __this)
{
    return __this->_OwnsGLDepthBufferHandle;
}

bool RenderTarget__get_OwnsGLFramebufferHandle(RenderTarget* __this)
{
    return __this->_OwnsGLFramebufferHandle;
}

::app::Uno::Int2 RenderTarget__get_Size(RenderTarget* __this)
{
    return __this->_Size;
}

RenderTarget* RenderTarget__New_1(::uStatic* __this)
{
    RenderTarget* inst = (RenderTarget*)::uAllocObject(sizeof(RenderTarget), RenderTarget__typeof());
    inst->_ObjInit();
    return inst;
}

void RenderTarget__set_GLDepthBufferHandle(RenderTarget* __this, ::uUInt value)
{
    __this->_GLDepthBufferHandle = value;
}

void RenderTarget__set_GLFramebufferHandle(RenderTarget* __this, ::uUInt value)
{
    __this->_GLFramebufferHandle = value;
}

void RenderTarget__set_HasDepth(RenderTarget* __this, bool value)
{
    __this->_HasDepth = value;
}

void RenderTarget__set_IsDisposed(RenderTarget* __this, bool value)
{
    __this->_IsDisposed = value;
}

void RenderTarget__set_OwnsGLDepthBufferHandle(RenderTarget* __this, bool value)
{
    __this->_OwnsGLDepthBufferHandle = value;
}

void RenderTarget__set_OwnsGLFramebufferHandle(RenderTarget* __this, bool value)
{
    __this->_OwnsGLFramebufferHandle = value;
}

void RenderTarget__set_Size(RenderTarget* __this, ::app::Uno::Int2 value)
{
    __this->_Size = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SamplerState__uType* SamplerState__typeof()
{
    static ::uStaticStrong<SamplerState__uType*> type;
    if (type != NULL) return type;

    type = (SamplerState__uType*)::uAllocStructType(sizeof(SamplerState__uType), "Uno.Graphics.SamplerState", sizeof(SamplerState), 0, 0, 0);

    return type;
}

void SamplerState___ObjInit(SamplerState* __this, int minFilter, int magFilter, int addressMode)
{
    __this->MinFilter = minFilter;
    __this->MagFilter = magFilter;
    __this->AddressU = addressMode;
    __this->AddressV = addressMode;
    __this->AddressW = addressMode;
}

SamplerState SamplerState__get_LinearClamp(::uStatic* __this)
{
    return SamplerState__New_1(NULL, 9729, 9729, 33071);
}

int SamplerState__get_MinFilterNoMipmap(SamplerState* __this)
{
    switch (__this->MinFilter)
    {
        case 9984:
        case 9985:
        {
            return 9728;
        }
        case 9986:
        case 9987:
        {
            return 9729;
        }
        default:
        {
            return __this->MinFilter;
        }
    }
}

SamplerState SamplerState__get_TrilinearClamp(::uStatic* __this)
{
    return SamplerState__New_1(NULL, 9987, 9729, 33071);
}

SamplerState SamplerState__New_1(::uStatic* __this, int minFilter, int magFilter, int addressMode)
{
    SamplerState inst = ::uDefault< SamplerState>();
    inst._ObjInit(minFilter, magFilter, addressMode);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

int Texture2D___maxSize;

Texture2D__uType* Texture2D__typeof()
{
    static ::uStaticStrong<Texture2D__uType*> type;
    if (type != NULL) return type;

    type = (Texture2D__uType*)::uAllocClassType(sizeof(Texture2D__uType), "Uno.Graphics.Texture2D", false, 1, 0, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))Texture2D__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(Texture2D__uType, __interface_0));

    return type;
}

void Texture2D___ObjInit(Texture2D* __this, ::app::Uno::Int2 size, int format, bool mipmap)
{
    __this->GLTextureHandle(::app::OpenGL::GL__CreateTexture(NULL));
    __this->Size(size);
    __this->Format(format);
    __this->MipCount(mipmap ? ::app::Uno::Graphics::TextureHelpers__GetMipCount(NULL, size) : 1);
    __this->Update_1(NULL);
}

void Texture2D___ObjInit_1(Texture2D* __this, ::uUInt handle, ::app::Uno::Int2 size, int mipCount, int format)
{
    __this->GLTextureHandle(handle);
    __this->Size(size);
    __this->MipCount(mipCount);
    __this->Format(format);
}

void Texture2D__Dispose(Texture2D* __this)
{
    if (__this->IsDisposed())
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("Texture2D")));
    }
    else
    {
        ::app::OpenGL::GL__DeleteTexture(NULL, __this->GLTextureHandle());
    }

    __this->IsDisposed(true);
}

void Texture2D__GenerateMipmap(Texture2D* __this)
{
    if (!__this->SupportsMipmap())
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Texture does not support mipmap")));
    }
    else
    {
        ::app::OpenGL::GL__BindTexture(NULL, 3553, __this->GLTextureHandle());
        ::app::OpenGL::GL__GenerateMipmap(NULL, 3553);
        ::app::OpenGL::GL__BindTexture(NULL, 3553, ::app::OpenGL::GLTextureHandle__Zero);
    }
}

int Texture2D__get_Format(Texture2D* __this)
{
    return __this->_Format;
}

::uUInt Texture2D__get_GLTextureHandle(Texture2D* __this)
{
    return __this->_GLTextureHandle;
}

bool Texture2D__get_IsDisposed(Texture2D* __this)
{
    return __this->_IsDisposed;
}

int Texture2D__get_MaxSize(::uStatic* __this)
{
    if (Texture2D___maxSize == 0)
    {
        Texture2D___maxSize = ::app::OpenGL::GL__GetInteger(NULL, 3379);
    }

    return Texture2D___maxSize;
}

int Texture2D__get_MipCount(Texture2D* __this)
{
    return __this->_MipCount;
}

::app::Uno::Int2 Texture2D__get_Size(Texture2D* __this)
{
    return __this->_Size;
}

bool Texture2D__get_SupportsMipmap(Texture2D* __this)
{
    return ((__this->MipCount() > 1) && ::app::Uno::Math__IsPow2(NULL, __this->Size().X)) && ::app::Uno::Math__IsPow2(NULL, __this->Size().Y);
}

Texture2D* Texture2D__New_1(::uStatic* __this, ::uUInt handle, ::app::Uno::Int2 size, int mipCount, int format)
{
    Texture2D* inst = (Texture2D*)::uAllocObject(sizeof(Texture2D), Texture2D__typeof());
    inst->_ObjInit_1(handle, size, mipCount, format);
    return inst;
}

Texture2D* Texture2D__New_2(::uStatic* __this, ::app::Uno::Int2 size, int format, bool mipmap)
{
    Texture2D* inst = (Texture2D*)::uAllocObject(sizeof(Texture2D), Texture2D__typeof());
    inst->_ObjInit(size, format, mipmap);
    return inst;
}

void Texture2D__set_Format(Texture2D* __this, int value)
{
    __this->_Format = value;
}

void Texture2D__set_GLTextureHandle(Texture2D* __this, ::uUInt value)
{
    __this->_GLTextureHandle = value;
}

void Texture2D__set_IsDisposed(Texture2D* __this, bool value)
{
    __this->_IsDisposed = value;
}

void Texture2D__set_MipCount(Texture2D* __this, int value)
{
    __this->_MipCount = value;
}

void Texture2D__set_Size(Texture2D* __this, ::app::Uno::Int2 value)
{
    __this->_Size = value;
}

void Texture2D__Update_1(Texture2D* __this, ::app::Uno::Buffer* mip0)
{
    if (__this->Format() == 0)
    {
        U_THROW(::app::Uno::InvalidOperationException__New_4(NULL, ::uGetConstString("Texture is immutable and cannot be updated")));
    }
    else
    {
        ::app::OpenGL::GL__ActiveTexture(NULL, 33984);
        ::app::OpenGL::GL__BindTexture(NULL, 3553, __this->GLTextureHandle());
        ::app::OpenGL::GL__TexParameteri(NULL, 3553, 10240, 9729);
        ::app::OpenGL::GL__TexParameteri(NULL, 3553, 10241, 9729);
        ::app::OpenGL::GL__TexParameteri(NULL, 3553, 10242, 33071);
        ::app::OpenGL::GL__TexParameteri(NULL, 3553, 10243, 33071);
        ::app::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers__TexImage2DFromBuffer(NULL, 3553, __this->Size().X, __this->Size().Y, 0, __this->Format(), mip0);
        ::app::OpenGL::GL__BindTexture(NULL, 3553, ::app::OpenGL::GLTextureHandle__Zero);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* TextureAddressMode__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.TextureAddressMode", ::app::Uno::Int__typeof(), 2);

    type->SetLiterals(
        "Wrap", 10497LL,
        "Clamp", 33071LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* TextureFilter__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.TextureFilter", ::app::Uno::Int__typeof(), 6);

    type->SetLiterals(
        "Nearest", 9728LL,
        "Linear", 9729LL,
        "NearestMipmapNearest", 9984LL,
        "LinearMipmapNearest", 9985LL,
        "NearestMipmapLinear", 9986LL,
        "LinearMipmapLinear", 9987LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextureHelpers__uType* TextureHelpers__typeof()
{
    static ::uStaticStrong<TextureHelpers__uType*> type;
    if (type != NULL) return type;

    type = (TextureHelpers__uType*)::uAllocClassType(sizeof(TextureHelpers__uType), "Uno.Graphics.TextureHelpers");

    return type;
}

int TextureHelpers__GetMipCount(::uStatic* __this, ::app::Uno::Int2 size)
{
    int result = 0;

    do
    {
        result++;
        size.X = size.X >> 1;
        size.Y = size.Y >> 1;
    }
    while ((size.X > 0) && (size.Y > 0));

    return result;
}

::app::Uno::Int2 TextureHelpers__GetMipSize(::uStatic* __this, ::app::Uno::Graphics::Texture2D* texture, int mip)
{
    ::app::Uno::Int2 size = ::uPtr< ::app::Uno::Graphics::Texture2D*>(texture)->Size();

    if (mip > 0)
    {
        size.X = size.X >> mip;
        size.Y = size.Y >> mip;

        if (size.X < 0)
        {
            size.X = 1;
        }

        if (size.Y < 0)
        {
            size.Y = 1;
        }
    }

    return size;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

VertexAttributeInfo__uType* VertexAttributeInfo__typeof()
{
    static ::uStaticStrong<VertexAttributeInfo__uType*> type;
    if (type != NULL) return type;

    type = (VertexAttributeInfo__uType*)::uAllocStructType(sizeof(VertexAttributeInfo__uType), "Uno.Graphics.VertexAttributeInfo", sizeof(VertexAttributeInfo), 0, 1, 0);

    type->SetStrongRefs(
        "Buffer", offsetof(VertexAttributeInfo, Buffer));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* VertexAttributeType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Graphics.VertexAttributeType", ::app::Uno::Int__typeof(), 21);

    type->SetLiterals(
        "Undefined", 0LL,
        "Float", 1LL,
        "Float2", 2LL,
        "Float3", 3LL,
        "Float4", 4LL,
        "Short", 5LL,
        "ShortNormalized", 6LL,
        "Short2", 7LL,
        "Short2Normalized", 8LL,
        "Short4", 9LL,
        "Short4Normalized", 10LL,
        "UShort", 11LL,
        "UShortNormalized", 12LL,
        "UShort2", 13LL,
        "UShort2Normalized", 14LL,
        "UShort4", 15LL,
        "UShort4Normalized", 16LL,
        "SByte4", 17LL,
        "SByte4Normalized", 18LL,
        "Byte4", 19LL,
        "Byte4Normalized", 20LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

VertexBuffer__uType* VertexBuffer__typeof()
{
    static ::uStaticStrong<VertexBuffer__uType*> type;
    if (type != NULL) return type;

    type = (VertexBuffer__uType*)::uAllocClassType(sizeof(VertexBuffer__uType), "Uno.Graphics.VertexBuffer", false, 1, 0, 0);

    type->SetBaseType(::app::Uno::Graphics::DeviceBuffer__typeof());

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(VertexBuffer__uType, __interface_0));

    return type;
}

void VertexBuffer___ObjInit_1(VertexBuffer* __this, int usage)
{
    ::app::Uno::Graphics::DeviceBuffer___ObjInit(__this, usage);
    __this->GLInit(34962);
}

void VertexBuffer___ObjInit_3(VertexBuffer* __this, ::app::Uno::Buffer* data, int usage)
{
    ::app::Uno::Graphics::DeviceBuffer___ObjInit(__this, usage);
    __this->GLInit_2(34962, data);
}

VertexBuffer* VertexBuffer__New_1(::uStatic* __this, int usage)
{
    VertexBuffer* inst = (VertexBuffer*)::uAllocObject(sizeof(VertexBuffer), VertexBuffer__typeof());
    inst->_ObjInit_1(usage);
    return inst;
}

VertexBuffer* VertexBuffer__New_3(::uStatic* __this, ::app::Uno::Buffer* data, int usage)
{
    VertexBuffer* inst = (VertexBuffer*)::uAllocObject(sizeof(VertexBuffer), VertexBuffer__typeof());
    inst->_ObjInit_3(data, usage);
    return inst;
}

}}}
