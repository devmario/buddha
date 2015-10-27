// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/UriParsers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_USER_INFO_PARSER_H__
#define __APP_UNO_NET_HTTP_USER_INFO_PARSER_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct UserInfoParser;

struct UserInfoParser__uType : ::uClassType
{
};

UserInfoParser__uType* UserInfoParser__typeof();

bool UserInfoParser__IsValid(::uStatic* __this, ::uString* userInfo);
::uString* UserInfoParser__Parse(::uStatic* __this, ::uString* uriString, int endIdx, int* idx);

struct UserInfoParser : ::uObject
{
};

}}}}


#endif
