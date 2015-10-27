// This file was generated based on '/usr/local/share/uno/Packages/Experimental.TextureLoader/0.12.1/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_TEXTURE_LOADER_TEXTURE_LOADER_IMPL_H__
#define __APP_EXPERIMENTAL_TEXTURE_LOADER_TEXTURE_LOADER_IMPL_H__

#include <Uno.h>
namespace app { namespace Experimental { namespace TextureLoader { struct Callback; } } }
namespace app { namespace Uno { struct Buffer; } }

namespace app {
namespace Experimental {
namespace TextureLoader {

struct TextureLoaderImpl__uType : ::uClassType
{
};

TextureLoaderImpl__uType* TextureLoaderImpl__typeof();

void TextureLoaderImpl__JpegByteArrayToTexture2D(::uStatic* __this, ::app::Uno::Buffer* arr_, ::app::Experimental::TextureLoader::Callback* callback_);
void TextureLoaderImpl__PngByteArrayToTexture2D(::uStatic* __this, ::app::Uno::Buffer* arr_, ::app::Experimental::TextureLoader::Callback* callback_);

}}}


#endif
