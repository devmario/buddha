#ifndef __UNO_GRAPHICS_CONTEXT_H__
#define __UNO_GRAPHICS_CONTEXT_H__

#include <XliGL.h>
#include <Uno/XliInterop.h>

extern ::Xli::GLContext *uXliGLContextPtr;

struct uGraphicsContext
{
    static uGraphicsContext GetInstance()
    {
        return uGraphicsContext(uXliGLContextPtr);
    }

    uGraphicsContext()
    {
        this->context = NULL;
    }

    GLuint GetBackbufferGLHandle()
    {
#if XLI_PLATFORM_IOS
        return 1;
#else
        return 0;
#endif
    }

    ::app::Uno::Int2 GetBackbufferSize()
    {
        return ::uInt2FromXliVector2i(context->GetDrawableSize());
    }

private:
    uGraphicsContext(Xli::GLContext *context)
    {
        this->context = context;
    }

    ::Xli::GLContext *context;
};

#endif
