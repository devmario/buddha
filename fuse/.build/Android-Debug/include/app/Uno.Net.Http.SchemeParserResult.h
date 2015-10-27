// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/UriParsers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_SCHEME_PARSER_RESULT_H__
#define __APP_UNO_NET_HTTP_SCHEME_PARSER_RESULT_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct SchemeParserResult;

struct SchemeParserResult__uType : ::uStructType
{
};

SchemeParserResult__uType* SchemeParserResult__typeof();

struct SchemeParserResult
{
    int Type;
    ::uStrong< ::uString*> Scheme;
};

}}}}


#endif
