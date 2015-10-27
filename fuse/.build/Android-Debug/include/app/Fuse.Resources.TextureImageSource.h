// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_TEXTURE_IMAGE_SOURCE_H__
#define __APP_FUSE_RESOURCES_TEXTURE_IMAGE_SOURCE_H__

#include <app/Fuse.Resources.ImageSource.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Resources {

struct TextureImageSource;

struct TextureImageSource__uType : ::app::Fuse::Resources::ImageSource__uType
{
};

TextureImageSource__uType* TextureImageSource__typeof();

float TextureImageSource__get_Density(TextureImageSource* __this);
::app::Uno::Int2 TextureImageSource__get_PixelSize(TextureImageSource* __this);
::app::Uno::Float2 TextureImageSource__get_Size(TextureImageSource* __this);
float TextureImageSource__get_SizeDensity(TextureImageSource* __this);
::app::Uno::Graphics::Texture2D* TextureImageSource__GetTexture(TextureImageSource* __this);
void TextureImageSource__set_Density(TextureImageSource* __this, float value);

struct TextureImageSource : ::app::Fuse::Resources::ImageSource
{
    ::uStrong< ::app::Uno::Graphics::Texture2D*> _texture;
    float _density;

    float Density() { return TextureImageSource__get_Density(this); }
    void Density(float value) { TextureImageSource__set_Density(this, value); }
};

}}}


#endif
