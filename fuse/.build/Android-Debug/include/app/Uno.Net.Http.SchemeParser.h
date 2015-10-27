// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/UriParsers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_SCHEME_PARSER_H__
#define __APP_UNO_NET_HTTP_SCHEME_PARSER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Net { namespace Http { struct SchemeParserResult; } } } }

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct SchemeParser;

struct SchemeParser__uType : ::uClassType
{
};

SchemeParser__uType* SchemeParser__typeof();

::app::Uno::Net::Http::SchemeParserResult SchemeParser__Parse(::uStatic* __this, ::uString* uriString, int* idx);

struct SchemeParser : ::uObject
{
};

}}}}


#endif
