// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Elements/0.10.5/Resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_RESOURCES_HTTP_IMAGE_SOURCE_H__
#define __APP_FUSE_RESOURCES_HTTP_IMAGE_SOURCE_H__

#include <app/Fuse.Resources.ImageSource.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Resources { struct MemoryPolicy; } } }
namespace app { namespace Fuse { namespace Resources { struct ProxyImageSource; } } }
namespace app { namespace Uno { namespace Graphics { struct Texture2D; } } }
namespace app { namespace Uno { struct Float2; } }
namespace app { namespace Uno { struct Int2; } }

namespace app {
namespace Fuse {
namespace Resources {

struct HttpImageSource;

struct HttpImageSource__uType : ::app::Fuse::Resources::ImageSource__uType
{
};

HttpImageSource__uType* HttpImageSource__typeof();

float HttpImageSource__get_Density(HttpImageSource* __this);
::app::Uno::Int2 HttpImageSource__get_PixelSize(HttpImageSource* __this);
::app::Uno::Float2 HttpImageSource__get_Size(HttpImageSource* __this);
float HttpImageSource__get_SizeDensity(HttpImageSource* __this);
::uString* HttpImageSource__get_Url(HttpImageSource* __this);
::app::Uno::Graphics::Texture2D* HttpImageSource__GetTexture(HttpImageSource* __this);
void HttpImageSource__OnPinChanged(HttpImageSource* __this);
void HttpImageSource__set_DefaultPolicy(HttpImageSource* __this, ::app::Fuse::Resources::MemoryPolicy* value);
void HttpImageSource__set_Density(HttpImageSource* __this, float value);
void HttpImageSource__set_Url(HttpImageSource* __this, ::uString* value);

struct HttpImageSource : ::app::Fuse::Resources::ImageSource
{
    ::uStrong< ::app::Fuse::Resources::ProxyImageSource*> _proxy;

    float Density() { return HttpImageSource__get_Density(this); }
    ::uString* Url() { return HttpImageSource__get_Url(this); }
    void DefaultPolicy(::app::Fuse::Resources::MemoryPolicy* value) { HttpImageSource__set_DefaultPolicy(this, value); }
    void Density(float value) { HttpImageSource__set_Density(this, value); }
    void Url(::uString* value) { HttpImageSource__set_Url(this, value); }
};

}}}


#endif
