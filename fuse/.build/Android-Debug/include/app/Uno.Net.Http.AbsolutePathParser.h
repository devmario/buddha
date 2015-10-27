// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/UriParsers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_ABSOLUTE_PATH_PARSER_H__
#define __APP_UNO_NET_HTTP_ABSOLUTE_PATH_PARSER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct AbsolutePathParser;

struct AbsolutePathParser__uType : ::uClassType
{
};

AbsolutePathParser__uType* AbsolutePathParser__typeof();

::uString* AbsolutePathParser__Parse(::uStatic* __this, ::uString* uriString, int idx, int endIdx, int* startPartIdx);

struct AbsolutePathParser : ::uObject
{
};

}}}}


#endif
