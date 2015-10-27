// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_HTTP_MESSAGE_CACHE_H__
#define __APP_UNO_NET_HTTP_HTTP_MESSAGE_CACHE_H__

#include <Uno.h>

namespace app {
namespace Uno {
namespace Net {
namespace Http {

extern bool HttpMessageCache___isCacheDisabled;
extern bool HttpMessageCache___isInitialized;
extern ::uLong HttpMessageCache___maxCacheSizeInBytes;

struct HttpMessageCache__uType : ::uClassType
{
};

HttpMessageCache__uType* HttpMessageCache__typeof();

void HttpMessageCache___TypeInit(::uStatic* __this);
bool HttpMessageCache__get_IsCacheEnabled(::uStatic* __this);
void HttpMessageCache__Init(::uStatic* __this);
void HttpMessageCache__OnApplicationStarted(::uStatic* __this, int state);
void HttpMessageCache__set_IsCacheEnabled(::uStatic* __this, bool value);

}}}}


#endif
