// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Http/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_EXPERIMENTAL_HTTP_TEXT_LOADER_H__
#define __APP_EXPERIMENTAL_HTTP_TEXT_LOADER_H__

#include <app/Experimental.Http.Loader.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }

namespace app {
namespace Experimental {
namespace Http {

struct TextLoader;

struct TextLoader__uType : ::app::Experimental::Http::Loader__uType
{
};

TextLoader__uType* TextLoader__typeof();

void TextLoader__CompleteLoading(TextLoader* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* resp);
void TextLoader__LoadCacheData(TextLoader* __this);
bool TextLoader__LoadCacheRaw(TextLoader* __this, ::uObject* record);
void TextLoader__OnBufferLoaded(TextLoader* __this, ::uString* data);
void TextLoader__PrepareRequest(TextLoader* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request);

struct TextLoader : ::app::Experimental::Http::Loader
{
    ::uStrong< ::uDelegate*> Callback;
    ::uStrong< ::uString*> _loadedCache;

    void OnBufferLoaded(::uString* data) { TextLoader__OnBufferLoaded(this, data); }
};

}}}


#endif
