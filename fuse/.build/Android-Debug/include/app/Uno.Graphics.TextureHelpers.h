// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Graphics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_GRAPHICS_TEXTURE_HELPERS_H__
#define __APP_UNO_GRAPHICS_TEXTURE_HELPERS_H__

#include <Uno.h>
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Uno {
namespace Graphics {

struct TextureHelpers__uType : ::uClassType
{
};

TextureHelpers__uType* TextureHelpers__typeof();

int TextureHelpers__GetMipCount(::uStatic* __this, ::app::Uno::Int2 size);
::app::Uno::Int2 TextureHelpers__GetMipSize(::uStatic* __this, ::app::Uno::Graphics::Texture2D* texture, int mip);

}}}


#endif
