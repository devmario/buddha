// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/UriParsers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_HOST_INFO_PARSER_H__
#define __APP_UNO_NET_HTTP_HOST_INFO_PARSER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__string; } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct HostInfo; } } } }

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct HostInfoParser;

extern ::uStaticStrong< ::app::Uno::Collections::List__string*> HostInfoParser___invalidChars;

struct HostInfoParser__uType : ::uClassType
{
};

HostInfoParser__uType* HostInfoParser__typeof();

void HostInfoParser___TypeInit(::uStatic* __this);
int HostInfoParser__ExtractPort(::uStatic* __this, ::uString* portString, int defaultPort);
int HostInfoParser__GetDafaultPort(::uStatic* __this, ::uString* scheme);
bool HostInfoParser__IsHostValid(::uStatic* __this, ::uString* userInfo);
::app::Uno::Net::Http::HostInfo* HostInfoParser__Parse(::uStatic* __this, ::uString* uriString, ::uString* scheme, int endIdx, int* idx);

struct HostInfoParser : ::uObject
{
};

}}}}


#endif
