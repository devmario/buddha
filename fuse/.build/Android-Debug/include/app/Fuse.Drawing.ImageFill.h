// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Drawing/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_DRAWING_IMAGE_FILL_H__
#define __APP_FUSE_DRAWING_IMAGE_FILL_H__

#include <app/Fuse.Drawing.DynamicBrush.h>
#include <app/Fuse.Internal.IImageContainerOwner.h>
#include <app/Uno.Float4.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Drawing { struct ImageFill_DrawParams; } } }
namespace app { namespace Fuse { namespace Internal { struct ImageContainer; } } }
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }
namespace app { namespace Fuse { struct DrawContext; } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { struct Float2; } }

namespace app {
namespace Fuse {
namespace Drawing {

struct ImageFill;

struct ImageFill__uType : ::app::Fuse::Drawing::DynamicBrush__uType
{
    ::app::Fuse::Internal::IImageContainerOwner __interface_0;
};

ImageFill__uType* ImageFill__typeof();

void ImageFill__Fuse_Internal_IImageContainerOwner_OnParamChanged(ImageFill* __this);
void ImageFill__Fuse_Internal_IImageContainerOwner_OnSizingChanged(ImageFill* __this);
void ImageFill__Fuse_Internal_IImageContainerOwner_OnSourceChanged(ImageFill* __this);
::app::Uno::Float4 ImageFill__get_Color(ImageFill* __this);
::app::Fuse::Resources::ImageSource* ImageFill__get_Source(ImageFill* __this);
::app::Fuse::Drawing::ImageFill_DrawParams ImageFill__GetDrawParams(ImageFill* __this, ::app::Fuse::DrawContext* dc, ::app::Uno::Float2 size);
::app::Uno::Float2 ImageFill__GetSize(ImageFill* __this);
::app::Uno::Graphics::Texture2D* ImageFill__GetTexture(ImageFill* __this);
void ImageFill__OnPinned(ImageFill* __this);
void ImageFill__OnUnpinned(ImageFill* __this);
void ImageFill__set_Color(ImageFill* __this, ::app::Uno::Float4 value);
void ImageFill__set_Source(ImageFill* __this, ::app::Fuse::Resources::ImageSource* value);

struct ImageFill : ::app::Fuse::Drawing::DynamicBrush
{
    ::app::Uno::Float4 _color;
    ::uStrong< ::app::Fuse::Internal::ImageContainer*> _container;

    ::app::Uno::Float4 Color();
    ::app::Fuse::Resources::ImageSource* Source() { return ImageFill__get_Source(this); }
    ::app::Fuse::Drawing::ImageFill_DrawParams GetDrawParams(::app::Fuse::DrawContext* dc, ::app::Uno::Float2 size);
    ::app::Uno::Float2 GetSize();
    ::app::Uno::Graphics::Texture2D* GetTexture() { return ImageFill__GetTexture(this); }
    void Color(::app::Uno::Float4 value);
    void Source(::app::Fuse::Resources::ImageSource* value) { ImageFill__set_Source(this, value); }
};

}}}

#include <app/Fuse.Drawing.ImageFill_DrawParams.h>
#include <app/Uno.Float2.h>

namespace app {
namespace Fuse {
namespace Drawing {

inline ::app::Uno::Float4 ImageFill::Color() { return ImageFill__get_Color(this); }
inline ::app::Fuse::Drawing::ImageFill_DrawParams ImageFill::GetDrawParams(::app::Fuse::DrawContext* dc, ::app::Uno::Float2 size) { return ImageFill__GetDrawParams(this, dc, size); }
inline ::app::Uno::Float2 ImageFill::GetSize() { return ImageFill__GetSize(this); }
inline void ImageFill::Color(::app::Uno::Float4 value) { ImageFill__set_Color(this, value); }

}}}


#endif
