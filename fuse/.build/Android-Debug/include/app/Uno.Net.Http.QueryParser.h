// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/UriParsers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_QUERY_PARSER_H__
#define __APP_UNO_NET_HTTP_QUERY_PARSER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct QueryParser;

struct QueryParser__uType : ::uClassType
{
};

QueryParser__uType* QueryParser__typeof();

::uString* QueryParser__Parse(::uStatic* __this, ::uString* uriString, ::uString* scheme, int idx, int* startPartIdx);

struct QueryParser : ::uObject
{
};

}}}}


#endif
