// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_HTTP_MESSAGE_HANDLER_REQUEST_H__
#define __APP_UNO_NET_HTTP_HTTP_MESSAGE_HANDLER_REQUEST_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandler; } } } }

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct HttpMessageHandlerRequest;

struct HttpMessageHandlerRequest__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

HttpMessageHandlerRequest__uType* HttpMessageHandlerRequest__typeof();

void HttpMessageHandlerRequest__Finalize(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest___ObjInit(HttpMessageHandlerRequest* __this, ::app::Uno::Net::Http::HttpMessageHandler* handler, ::uString* method, ::uString* url, ::uObject* dispatcher);
void HttpMessageHandlerRequest__add_Aborted(HttpMessageHandlerRequest* __this, ::uDelegate* value);
void HttpMessageHandlerRequest__add_Done(HttpMessageHandlerRequest* __this, ::uDelegate* value);
void HttpMessageHandlerRequest__add_Error(HttpMessageHandlerRequest* __this, ::uDelegate* value);
void HttpMessageHandlerRequest__CheckDisposed(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__CompleteRequest(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__Dispose(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__FireSetHeadersReceived(HttpMessageHandlerRequest* __this);
int HttpMessageHandlerRequest__get_HttpResponseType(HttpMessageHandlerRequest* __this);
::uString* HttpMessageHandlerRequest__get_Method(HttpMessageHandlerRequest* __this);
int HttpMessageHandlerRequest__get_State(HttpMessageHandlerRequest* __this);
::uArray* HttpMessageHandlerRequest__GetResponseContentByteArray(HttpMessageHandlerRequest* __this);
::uString* HttpMessageHandlerRequest__GetResponseContentString(HttpMessageHandlerRequest* __this);
::uString* HttpMessageHandlerRequest__GetResponseHeaders(HttpMessageHandlerRequest* __this);
int HttpMessageHandlerRequest__GetResponseStatus(HttpMessageHandlerRequest* __this);
bool HttpMessageHandlerRequest__IsComplete(HttpMessageHandlerRequest* __this);
bool HttpMessageHandlerRequest__IsHeaderValid(::uStatic* __this, ::uString* name, ::uString* value);
HttpMessageHandlerRequest* HttpMessageHandlerRequest__New_1(::uStatic* __this, ::app::Uno::Net::Http::HttpMessageHandler* handler, ::uString* method, ::uString* url, ::uObject* dispatcher);
void HttpMessageHandlerRequest__OnAborted(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__OnDone(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__OnError(HttpMessageHandlerRequest* __this, ::uString* platformspesificErrorMessage);
void HttpMessageHandlerRequest__OnHeadersReceived(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__OnProgress(HttpMessageHandlerRequest* __this, int current, int total, bool hasTotal);
void HttpMessageHandlerRequest__OnStateChanged(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__OnTimeout(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__SendAsync(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__SendAsync_1(HttpMessageHandlerRequest* __this, ::uString* data);
void HttpMessageHandlerRequest__set_HttpResponseType(HttpMessageHandlerRequest* __this, int value);
void HttpMessageHandlerRequest__set_State(HttpMessageHandlerRequest* __this, int value);
void HttpMessageHandlerRequest__SetHeader(HttpMessageHandlerRequest* __this, ::uString* name, ::uString* value);
void HttpMessageHandlerRequest__SetResponseType(HttpMessageHandlerRequest* __this, int responseType);

struct HttpMessageHandlerRequest : ::uObject
{
    ::uStrong< ::app::Uno::Net::Http::HttpMessageHandler*> _httpMessageHandler;
    ::uStrong< ::uObject*> _httpRequest;
    ::uStrong< ::uObject*> _dispatcher;
    ::uStrong< ::uString*> _method;
    ::uStrong< ::uString*> _url;
    int _state;
    int _responseType;
    ::uStrong< ::uArray*> _optionalPayloadCache;
    ::uStrong< ::uDelegate*> Aborted;
    ::uStrong< ::uDelegate*> Error;
    ::uStrong< ::uDelegate*> Timeout;
    ::uStrong< ::uDelegate*> Done;
    ::uStrong< ::uDelegate*> StateChanged;
    ::uStrong< ::uDelegate*> Progress;

    void _ObjInit(::app::Uno::Net::Http::HttpMessageHandler* handler, ::uString* method, ::uString* url, ::uObject* dispatcher) { HttpMessageHandlerRequest___ObjInit(this, handler, method, url, dispatcher); }
    void add_Aborted(::uDelegate* value) { HttpMessageHandlerRequest__add_Aborted(this, value); }
    void add_Done(::uDelegate* value) { HttpMessageHandlerRequest__add_Done(this, value); }
    void add_Error(::uDelegate* value) { HttpMessageHandlerRequest__add_Error(this, value); }
    void CheckDisposed() { HttpMessageHandlerRequest__CheckDisposed(this); }
    void CompleteRequest() { HttpMessageHandlerRequest__CompleteRequest(this); }
    void Dispose() { HttpMessageHandlerRequest__Dispose(this); }
    void FireSetHeadersReceived() { HttpMessageHandlerRequest__FireSetHeadersReceived(this); }
    int HttpResponseType() { return HttpMessageHandlerRequest__get_HttpResponseType(this); }
    ::uString* Method() { return HttpMessageHandlerRequest__get_Method(this); }
    int State() { return HttpMessageHandlerRequest__get_State(this); }
    ::uArray* GetResponseContentByteArray() { return HttpMessageHandlerRequest__GetResponseContentByteArray(this); }
    ::uString* GetResponseContentString() { return HttpMessageHandlerRequest__GetResponseContentString(this); }
    ::uString* GetResponseHeaders() { return HttpMessageHandlerRequest__GetResponseHeaders(this); }
    int GetResponseStatus() { return HttpMessageHandlerRequest__GetResponseStatus(this); }
    bool IsComplete() { return HttpMessageHandlerRequest__IsComplete(this); }
    void OnAborted() { HttpMessageHandlerRequest__OnAborted(this); }
    void OnDone() { HttpMessageHandlerRequest__OnDone(this); }
    void OnError(::uString* platformspesificErrorMessage) { HttpMessageHandlerRequest__OnError(this, platformspesificErrorMessage); }
    void OnHeadersReceived() { HttpMessageHandlerRequest__OnHeadersReceived(this); }
    void OnProgress(int current, int total, bool hasTotal) { HttpMessageHandlerRequest__OnProgress(this, current, total, hasTotal); }
    void OnStateChanged() { HttpMessageHandlerRequest__OnStateChanged(this); }
    void OnTimeout() { HttpMessageHandlerRequest__OnTimeout(this); }
    void SendAsync() { HttpMessageHandlerRequest__SendAsync(this); }
    void SendAsync_1(::uString* data) { HttpMessageHandlerRequest__SendAsync_1(this, data); }
    void HttpResponseType(int value) { HttpMessageHandlerRequest__set_HttpResponseType(this, value); }
    void State(int value) { HttpMessageHandlerRequest__set_State(this, value); }
    void SetHeader(::uString* name, ::uString* value) { HttpMessageHandlerRequest__SetHeader(this, name, value); }
    void SetResponseType(int responseType) { HttpMessageHandlerRequest__SetResponseType(this, responseType); }
};

}}}}


#endif
