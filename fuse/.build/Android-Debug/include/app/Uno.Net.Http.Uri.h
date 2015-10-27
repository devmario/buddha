// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_URI_H__
#define __APP_UNO_NET_HTTP_URI_H__

#include <app/Uno.Object.h>
#include <Uno.h>

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct Uri;

struct Uri__uType : ::uClassType
{
};

Uri__uType* Uri__typeof();

void Uri___ObjInit(Uri* __this, ::uString* uriString);
void Uri__CreateThis(Uri* __this, ::uString* uriString);
::uString* Uri__get_AbsolutePath(Uri* __this);
::uString* Uri__get_AbsoluteUri(Uri* __this);
::uString* Uri__get_Authority(Uri* __this);
::uString* Uri__get_Hash(Uri* __this);
::uString* Uri__get_Host(Uri* __this);
::uString* Uri__get_OriginalString(Uri* __this);
::uString* Uri__get_PathAndQuery(Uri* __this);
int Uri__get_Port(Uri* __this);
::uString* Uri__get_Query(Uri* __this);
::uString* Uri__get_Scheme(Uri* __this);
::uString* Uri__get_UserInfo(Uri* __this);
Uri* Uri__New_1(::uStatic* __this, ::uString* uriString);
void Uri__set_AbsolutePath(Uri* __this, ::uString* value);
void Uri__set_AbsoluteUri(Uri* __this, ::uString* value);
void Uri__set_Authority(Uri* __this, ::uString* value);
void Uri__set_Hash(Uri* __this, ::uString* value);
void Uri__set_Host(Uri* __this, ::uString* value);
void Uri__set_OriginalString(Uri* __this, ::uString* value);
void Uri__set_PathAndQuery(Uri* __this, ::uString* value);
void Uri__set_Port(Uri* __this, int value);
void Uri__set_Query(Uri* __this, ::uString* value);
void Uri__set_Scheme(Uri* __this, ::uString* value);
void Uri__set_UserInfo(Uri* __this, ::uString* value);

struct Uri : ::uObject
{
    ::uStrong< ::uString*> _AbsolutePath;
    ::uStrong< ::uString*> _Scheme;
    ::uStrong< ::uString*> _Hash;
    ::uStrong< ::uString*> _Query;
    int _Port;
    ::uStrong< ::uString*> _PathAndQuery;
    ::uStrong< ::uString*> _OriginalString;
    ::uStrong< ::uString*> _Host;
    ::uStrong< ::uString*> _Authority;
    ::uStrong< ::uString*> _AbsoluteUri;
    ::uStrong< ::uString*> _UserInfo;

    void _ObjInit(::uString* uriString) { Uri___ObjInit(this, uriString); }
    void CreateThis(::uString* uriString) { Uri__CreateThis(this, uriString); }
    ::uString* AbsolutePath() { return Uri__get_AbsolutePath(this); }
    ::uString* AbsoluteUri() { return Uri__get_AbsoluteUri(this); }
    ::uString* Authority() { return Uri__get_Authority(this); }
    ::uString* Hash() { return Uri__get_Hash(this); }
    ::uString* Host() { return Uri__get_Host(this); }
    ::uString* OriginalString() { return Uri__get_OriginalString(this); }
    ::uString* PathAndQuery() { return Uri__get_PathAndQuery(this); }
    int Port() { return Uri__get_Port(this); }
    ::uString* Query() { return Uri__get_Query(this); }
    ::uString* Scheme() { return Uri__get_Scheme(this); }
    ::uString* UserInfo() { return Uri__get_UserInfo(this); }
    void AbsolutePath(::uString* value) { Uri__set_AbsolutePath(this, value); }
    void AbsoluteUri(::uString* value) { Uri__set_AbsoluteUri(this, value); }
    void Authority(::uString* value) { Uri__set_Authority(this, value); }
    void Hash(::uString* value) { Uri__set_Hash(this, value); }
    void Host(::uString* value) { Uri__set_Host(this, value); }
    void OriginalString(::uString* value) { Uri__set_OriginalString(this, value); }
    void PathAndQuery(::uString* value) { Uri__set_PathAndQuery(this, value); }
    void Port(int value) { Uri__set_Port(this, value); }
    void Query(::uString* value) { Uri__set_Query(this, value); }
    void Scheme(::uString* value) { Uri__set_Scheme(this, value); }
    void UserInfo(::uString* value) { Uri__set_UserInfo(this, value); }
};

}}}}


#endif
