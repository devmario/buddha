#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Android.com.fuse.ExperimentalHttp.HttpRequest.h>
#include <app/Uno.Action.h>
#include <app/Uno.Action__Uno_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Action__Uno_Net_Http_HttpMessageHandlerRequest__int__int__bool.h>
#include <app/Uno.Action__Uno_Net_Http_HttpMessageHandlerRequest__string.h>
#include <app/Uno.ArgumentNullException.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__int__string.h>
#include <app/Uno.Collections.Dictionary__string__int.h>
#include <app/Uno.Collections.IDictionary__int__string.h>
#include <app/Uno.Collections.List__string.h>
#include <app/Uno.Collections.List__Uno_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Collections.List1_Enumerator__string.h>
#include <app/Uno.Collections.List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Exception.h>
#include <app/Uno.GC.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Net.Http.AbsolutePathParser.h>
#include <app/Uno.Net.Http.HashParser.h>
#include <app/Uno.Net.Http.HostInfo.h>
#include <app/Uno.Net.Http.HostInfoParser.h>
#include <app/Uno.Net.Http.HttpDefaultDispatcher.h>
#include <app/Uno.Net.Http.HttpMessageCache.h>
#include <app/Uno.Net.Http.HttpMessageHandler.h>
#include <app/Uno.Net.Http.HttpMessageHandler_StaticData.h>
#include <app/Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <app/Uno.Net.Http.HttpMessageHandlerRequest_DispatchClosure.h>
#include <app/Uno.Net.Http.HttpMessageHandlerRequest_DispatchClosure__string.h>
#include <app/Uno.Net.Http.HttpMessageHandlerRequest_ProgressClosure.h>
#include <app/Uno.Net.Http.HttpRequestState.h>
#include <app/Uno.Net.Http.HttpResponseType.h>
#include <app/Uno.Net.Http.HttpStatusReasonPhrase.h>
#include <app/Uno.Net.Http.Implementation.AndroidHttpRequest.h>
#include <app/Uno.Net.Http.Implementation.IHttpRequest.h>
#include <app/Uno.Net.Http.InvalidResponseTypeException.h>
#include <app/Uno.Net.Http.InvalidStateException.h>
#include <app/Uno.Net.Http.QueryParser.h>
#include <app/Uno.Net.Http.SchemeParser.h>
#include <app/Uno.Net.Http.SchemeParserResult.h>
#include <app/Uno.Net.Http.Uri.h>
#include <app/Uno.Net.Http.UriFormatException.h>
#include <app/Uno.Net.Http.UriScheme.h>
#include <app/Uno.Net.Http.UriSchemeType.h>
#include <app/Uno.Net.Http.UserInfoParser.h>
#include <app/Uno.NotSupportedException.h>
#include <app/Uno.ObjectDisposedException.h>
#include <app/Uno.Platform2.Application.h>
#include <app/Uno.Platform2.ApplicationState.h>
#include <app/Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <app/Uno.String.h>
#include <app/Uno.Threading.IDispatcher.h>

namespace app {
namespace Uno {
namespace Net {
namespace Http {

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/UriParsers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AbsolutePathParser__uType* AbsolutePathParser__typeof()
{
    static ::uStaticStrong<AbsolutePathParser__uType*> type;
    if (type != NULL) return type;

    type = (AbsolutePathParser__uType*)::uAllocClassType(sizeof(AbsolutePathParser__uType), "Uno.Net.Http.AbsolutePathParser", false, 0, 0, 0);

    return type;
}

::uString* AbsolutePathParser__Parse(::uStatic* __this, ::uString* uriString, int idx, int endIdx, int* startPartIdx)
{
    int start = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(uriString), ::uGetConstString("/"), idx);

    if ((start < 0) || (start >= endIdx))
    {
        *startPartIdx = endIdx;
        return ::uGetConstString("/");
    }

    *startPartIdx = start;
    return ::app::Uno::String::Substring(uriString, start, endIdx - start);
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/UriParsers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HashParser__uType* HashParser__typeof()
{
    static ::uStaticStrong<HashParser__uType*> type;
    if (type != NULL) return type;

    type = (HashParser__uType*)::uAllocClassType(sizeof(HashParser__uType), "Uno.Net.Http.HashParser", false, 0, 0, 0);

    return type;
}

::uString* HashParser__Parse(::uStatic* __this, ::uString* uriString, int idx, int* startPartIdx)
{
    if (idx >= ::uPtr< ::uString*>(uriString)->Length())
    {
        return ::app::Uno::String__Empty;
    }

    int start = ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(uriString), '#', idx);

    if (start >= 0)
    {
        *startPartIdx = start;
        return ::app::Uno::String::Substring_1(::uPtr< ::uString*>(uriString), *startPartIdx);
    }

    return ::app::Uno::String__Empty;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/UriParsers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HostInfo__uType* HostInfo__typeof()
{
    static ::uStaticStrong<HostInfo__uType*> type;
    if (type != NULL) return type;

    type = (HostInfo__uType*)::uAllocClassType(sizeof(HostInfo__uType), "Uno.Net.Http.HostInfo", false, 0, 2, 0);

    type->SetStrongRefs(
        "_Authority", offsetof(HostInfo, _Authority),
        "_Host", offsetof(HostInfo, _Host));

    return type;
}

void HostInfo___ObjInit(HostInfo* __this)
{
}

::uString* HostInfo__get_Authority(HostInfo* __this)
{
    return __this->_Authority;
}

::uString* HostInfo__get_Host(HostInfo* __this)
{
    return __this->_Host;
}

int HostInfo__get_Port(HostInfo* __this)
{
    return __this->_Port;
}

HostInfo* HostInfo__New_1(::uStatic* __this)
{
    HostInfo* inst = (HostInfo*)::uAllocObject(sizeof(HostInfo), HostInfo__typeof());
    inst->_ObjInit();
    return inst;
}

void HostInfo__set_Authority(HostInfo* __this, ::uString* value)
{
    __this->_Authority = value;
}

void HostInfo__set_Host(HostInfo* __this, ::uString* value)
{
    __this->_Host = value;
}

void HostInfo__set_Port(HostInfo* __this, int value)
{
    __this->_Port = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/UriParsers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::List__string*> HostInfoParser___invalidChars;

HostInfoParser__uType* HostInfoParser__typeof()
{
    static ::uStaticStrong<HostInfoParser__uType*> type;
    if (type != NULL) return type;

    type = (HostInfoParser__uType*)::uAllocClassType(sizeof(HostInfoParser__uType), "Uno.Net.Http.HostInfoParser", false, 0, 0, 0);

    return type;
}

void HostInfoParser___TypeInit(::uStatic* __this)
{
    ::app::Uno::Collections::List__string* collection_123;
    HostInfoParser___invalidChars = (collection_123 = ::app::Uno::Collections::List__string__New_1(NULL), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("..")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString(",")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("\\")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("|")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("<")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString(">")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("'")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString(";")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString(":")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("[")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("]")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("{")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("}")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("(")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString(")")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("=")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("+")), collection_123);
}

int HostInfoParser__ExtractPort(::uStatic* __this, ::uString* portString, int defaultPort)
{
    int port = 0;

    if (::app::Uno::String__IsNullOrEmpty(NULL, portString))
    {
        port = defaultPort;
    }
    else
    {
        if (!::app::Uno::Int__TryParse(NULL, portString, &port))
        {
            U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("The port number specified in uriString is not valid or cannot be parsed.")));
        }
    }

    return port;
}

int HostInfoParser__GetDafaultPort(::uStatic* __this, ::uString* scheme)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(::app::Uno::Net::Http::UriScheme__get_DefaultPorts(NULL))->Item(::app::Uno::String::ToLower(::uPtr< ::uString*>(scheme)));
}

bool HostInfoParser__IsHostValid(::uStatic* __this, ::uString* userInfo)
{
    for (::app::Uno::Collections::List1_Enumerator__string enum_125 = ::uPtr< ::app::Uno::Collections::List__string*>(HostInfoParser___invalidChars)->GetEnumerator(); enum_125.MoveNext(); )
    {
        ::uString* chars = enum_125.Current();

        if (::app::Uno::String::IndexOf(::uPtr< ::uString*>(userInfo), chars, 0) >= 0)
        {
            return false;
        }
    }

    return !::app::Uno::String::StartsWith(::uPtr< ::uString*>(userInfo), ::uGetConstString("."));
}

::app::Uno::Net::Http::HostInfo* HostInfoParser__Parse(::uStatic* __this, ::uString* uriString, ::uString* scheme, int endIdx, int* idx)
{
    ::app::Uno::Net::Http::HostInfo* collection_124;

    if (*idx >= endIdx)
    {
        U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("There is an invalid character sequence in uriString.")));
    }

    int end = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(uriString), ::uGetConstString("/"), *idx);

    if ((end < 0) || (end >= endIdx))
    {
        end = endIdx;
    }

    ::uString* hostInfoString = ::app::Uno::String::Substring(uriString, *idx, end - *idx);
    *idx = end;

    if (::app::Uno::String__IsNullOrEmpty(NULL, hostInfoString))
    {
        U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("The host specified in uriString is not valid or cannot be parsed.")));
    }

    int delim = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(hostInfoString), ::uGetConstString(":"), 0);
    collection_124 = ::app::Uno::Net::Http::HostInfo__New_1(NULL);
    ::uPtr< ::app::Uno::Net::Http::HostInfo*>(collection_124)->Authority(hostInfoString);
    ::app::Uno::Net::Http::HostInfo* hostInfo = collection_124;

    if (delim > 0)
    {
        ::uString* portString = ::app::Uno::String::Substring_1(::uPtr< ::uString*>(hostInfoString), delim + 1);
        ::uPtr< ::app::Uno::Net::Http::HostInfo*>(hostInfo)->Host(::app::Uno::String::Substring(hostInfoString, 0, delim));
        hostInfo->Port(HostInfoParser__ExtractPort(NULL, portString, HostInfoParser__GetDafaultPort(NULL, scheme)));
    }
    else
    {
        ::uPtr< ::app::Uno::Net::Http::HostInfo*>(hostInfo)->Host(hostInfoString);
        hostInfo->Port(HostInfoParser__GetDafaultPort(NULL, scheme));
    }

    if (!HostInfoParser__IsHostValid(NULL, hostInfo->Host()))
    {
        U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("The host specified in uriString is not valid or cannot be parsed.")));
    }

    return hostInfo;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HttpDefaultDispatcher__uType* HttpDefaultDispatcher__typeof()
{
    static ::uStaticStrong<HttpDefaultDispatcher__uType*> type;
    if (type != NULL) return type;

    type = (HttpDefaultDispatcher__uType*)::uAllocClassType(sizeof(HttpDefaultDispatcher__uType), "Uno.Net.Http.HttpDefaultDispatcher", false, 1, 0, 0);

    type->__interface_0.__fp_Invoke = (void(*)(void*, ::uDelegate*))HttpDefaultDispatcher__Invoke;

    type->SetInterfaces(
        ::app::Uno::Threading::IDispatcher__typeof(), offsetof(HttpDefaultDispatcher__uType, __interface_0));

    return type;
}

void HttpDefaultDispatcher___ObjInit(HttpDefaultDispatcher* __this)
{
}

void HttpDefaultDispatcher__Invoke(HttpDefaultDispatcher* __this, ::uDelegate* action)
{
    ::uPtr< ::uDelegate*>(action)->InvokeVoid();
}

HttpDefaultDispatcher* HttpDefaultDispatcher__New_1(::uStatic* __this)
{
    HttpDefaultDispatcher* inst = (HttpDefaultDispatcher*)::uAllocObject(sizeof(HttpDefaultDispatcher), HttpDefaultDispatcher__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

bool HttpMessageCache___isCacheDisabled;
bool HttpMessageCache___isInitialized;
::uLong HttpMessageCache___maxCacheSizeInBytes;

HttpMessageCache__uType* HttpMessageCache__typeof()
{
    static ::uStaticStrong<HttpMessageCache__uType*> type;
    if (type != NULL) return type;

    type = (HttpMessageCache__uType*)::uAllocClassType(sizeof(HttpMessageCache__uType), "Uno.Net.Http.HttpMessageCache");

    return type;
}

void HttpMessageCache___TypeInit(::uStatic* __this)
{
    ::app::Uno::Platform2::Application__add_Started(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)HttpMessageCache__OnApplicationStarted));
}

bool HttpMessageCache__get_IsCacheEnabled(::uStatic* __this)
{
    return !HttpMessageCache___isCacheDisabled;
}

void HttpMessageCache__Init(::uStatic* __this)
{
    if (HttpMessageCache___isInitialized)
    {
        return;
    }

    HttpMessageCache___isInitialized = true;
    ::app::Uno::Platform2::Application__remove_Started(NULL, ::uNewDelegateNonVirt(::app::Uno::Platform2::ApplicationStateTransitionHandler__typeof(), (const void*)HttpMessageCache__OnApplicationStarted));
    {
        if (!HttpMessageCache__get_IsCacheEnabled(NULL))
        {
            return;
        }

        ::uLong cacheSize = (HttpMessageCache___maxCacheSizeInBytes != 0ll) ? HttpMessageCache___maxCacheSizeInBytes : 20971520ll;
        ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__InstallCache(NULL, (::uObject*)::app::Android::Base::JNI__GetWrappedActivityObject(NULL), cacheSize);
    }
}

void HttpMessageCache__OnApplicationStarted(::uStatic* __this, int state)
{
    HttpMessageCache__Init(NULL);
}

void HttpMessageCache__set_IsCacheEnabled(::uStatic* __this, bool value)
{
    if (HttpMessageCache___isInitialized)
    {
        ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::uGetConstString("Uno.Net.Http.HttpMessageCache: Changes to IsCacheEnabled are ignored after initialization."), 1, ::uGetConstString("/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/$.uno"), 17);
    }
    else
    {
        HttpMessageCache___isCacheDisabled = !value;
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HttpMessageHandler__uType* HttpMessageHandler__typeof()
{
    static ::uStaticStrong<HttpMessageHandler__uType*> type;
    if (type != NULL) return type;

    type = (HttpMessageHandler__uType*)::uAllocClassType(sizeof(HttpMessageHandler__uType), "Uno.Net.Http.HttpMessageHandler", false, 1, 2, 0);

    type->__interface_0.__fp_Dispose = (void(*)(void*))HttpMessageHandler__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(HttpMessageHandler__uType, __interface_0));

    type->SetStrongRefs(
        "_defaultDispatcher", offsetof(HttpMessageHandler, _defaultDispatcher),
        "_pendingRequests", offsetof(HttpMessageHandler, _pendingRequests));

    return type;
}

void HttpMessageHandler___ObjInit(HttpMessageHandler* __this)
{
    __this->_pendingRequests = ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest__New_1(NULL);
    __this->_defaultDispatcher = (::uObject*)::app::Uno::Net::Http::HttpDefaultDispatcher__New_1(NULL);
}

void HttpMessageHandler__CompleteRequest(HttpMessageHandler* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Count(); ++i)
    {
        if (::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Item(i) == request)
        {
            ::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Item(i, NULL);
            ::app::Uno::Net::Http::HttpMessageHandler_StaticData__DecrementPendingRequests(NULL);
            break;
        }
    }
}

::app::Uno::Net::Http::HttpMessageHandlerRequest* HttpMessageHandler__CreateRequest(HttpMessageHandler* __this, ::uString* method, ::uString* url)
{
    return __this->CreateRequest_1(method, url, __this->_defaultDispatcher);
}

::app::Uno::Net::Http::HttpMessageHandlerRequest* HttpMessageHandler__CreateRequest_1(HttpMessageHandler* __this, ::uString* method, ::uString* url, ::uObject* dispatcher)
{
    ::app::Uno::Net::Http::HttpMessageHandler_StaticData__IncrementPendingRequests(NULL);
    ::app::Uno::Net::Http::HttpMessageHandlerRequest* request = ::app::Uno::Net::Http::HttpMessageHandlerRequest__New_1(NULL, __this, method, url, dispatcher);

    for (int i = 0; i < ::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Count(); ++i)
    {
        if (::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Item(i) == NULL)
        {
            ::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Item(i, request);
            return request;
        }
    }

    ::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->Add(request);
    return request;
}

void HttpMessageHandler__Dispose(HttpMessageHandler* __this)
{
    for (::app::Uno::Collections::List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest enum_123 = ::uPtr< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*>(__this->_pendingRequests)->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Uno::Net::Http::HttpMessageHandlerRequest* request = enum_123.Current();

        if (request != NULL)
        {
            ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(request)->Dispose();
        }
    }

    __this->_pendingRequests = NULL;
}

HttpMessageHandler* HttpMessageHandler__New_1(::uStatic* __this)
{
    HttpMessageHandler* inst = (HttpMessageHandler*)::uAllocObject(sizeof(HttpMessageHandler), HttpMessageHandler__typeof());
    inst->_ObjInit();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HttpMessageHandler_StaticData__uType* HttpMessageHandler_StaticData__typeof()
{
    static ::uStaticStrong<HttpMessageHandler_StaticData__uType*> type;
    if (type != NULL) return type;

    type = (HttpMessageHandler_StaticData__uType*)::uAllocClassType(sizeof(HttpMessageHandler_StaticData__uType), "Uno.Net.Http.HttpMessageHandler.StaticData");

    return type;
}

void HttpMessageHandler_StaticData__DecrementPendingRequests(::uStatic* __this)
{
}

void HttpMessageHandler_StaticData__IncrementPendingRequests(::uStatic* __this)
{
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HttpMessageHandlerRequest__uType* HttpMessageHandlerRequest__typeof()
{
    static ::uStaticStrong<HttpMessageHandlerRequest__uType*> type;
    if (type != NULL) return type;

    type = (HttpMessageHandlerRequest__uType*)::uAllocClassType(sizeof(HttpMessageHandlerRequest__uType), "Uno.Net.Http.HttpMessageHandlerRequest", false, 1, 12, 0);

    type->__fp_Finalize = (void(*)(::uObject*))HttpMessageHandlerRequest__Finalize;
    type->__interface_0.__fp_Dispose = (void(*)(void*))HttpMessageHandlerRequest__Dispose;

    type->SetInterfaces(
        ::app::Uno::IDisposable__typeof(), offsetof(HttpMessageHandlerRequest__uType, __interface_0));

    type->SetStrongRefs(
        "_dispatcher", offsetof(HttpMessageHandlerRequest, _dispatcher),
        "_httpMessageHandler", offsetof(HttpMessageHandlerRequest, _httpMessageHandler),
        "_httpRequest", offsetof(HttpMessageHandlerRequest, _httpRequest),
        "_method", offsetof(HttpMessageHandlerRequest, _method),
        "_optionalPayloadCache", offsetof(HttpMessageHandlerRequest, _optionalPayloadCache),
        "_url", offsetof(HttpMessageHandlerRequest, _url),
        "Aborted", offsetof(HttpMessageHandlerRequest, Aborted),
        "Done", offsetof(HttpMessageHandlerRequest, Done),
        "Error", offsetof(HttpMessageHandlerRequest, Error),
        "Progress", offsetof(HttpMessageHandlerRequest, Progress),
        "StateChanged", offsetof(HttpMessageHandlerRequest, StateChanged),
        "Timeout", offsetof(HttpMessageHandlerRequest, Timeout));

    return type;
}

void HttpMessageHandlerRequest__Finalize(HttpMessageHandlerRequest* __this)
{
    if (__this->_httpRequest == NULL)
    {
        return;
    }

    __this->Dispose();
}

void HttpMessageHandlerRequest___ObjInit(HttpMessageHandlerRequest* __this, ::app::Uno::Net::Http::HttpMessageHandler* handler, ::uString* method, ::uString* url, ::uObject* dispatcher)
{
    if (handler == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("handler")));
    }

    if (::app::Uno::String__op_Equality(NULL, method, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("method")));
    }

    if (::app::Uno::String__op_Equality(NULL, url, NULL))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("url")));
    }

    if (dispatcher == NULL)
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("dispatcher")));
    }

    method = ::app::Uno::String::ToUpper(::uPtr< ::uString*>(method));

    if (((((::app::Uno::String__op_Inequality(NULL, method, ::uGetConstString("DELETE")) && ::app::Uno::String__op_Inequality(NULL, method, ::uGetConstString("GET"))) && ::app::Uno::String__op_Inequality(NULL, method, ::uGetConstString("HEAD"))) && ::app::Uno::String__op_Inequality(NULL, method, ::uGetConstString("POST"))) && ::app::Uno::String__op_Inequality(NULL, method, ::uGetConstString("PUT"))) && ::app::Uno::String__op_Inequality(NULL, method, ::uGetConstString("OPTIONS")))
    {
        U_THROW(::app::Uno::NotSupportedException__New_4(NULL, ::uGetConstString("HTTP method not supported.")));
    }

    __this->_httpRequest = (::uObject*)::app::Uno::Net::Http::Implementation::AndroidHttpRequest__New_3(NULL, __this, method, url);
    __this->_httpMessageHandler = handler;
    __this->_method = method;
    __this->_url = url;
    __this->_dispatcher = dispatcher;
    __this->State(1);
}

void HttpMessageHandlerRequest__add_Aborted(HttpMessageHandlerRequest* __this, ::uDelegate* value)
{
    __this->Aborted = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Aborted, (::uDelegate*)value), ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof());
}

void HttpMessageHandlerRequest__add_Done(HttpMessageHandlerRequest* __this, ::uDelegate* value)
{
    __this->Done = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Done, (::uDelegate*)value), ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof());
}

void HttpMessageHandlerRequest__add_Error(HttpMessageHandlerRequest* __this, ::uDelegate* value)
{
    __this->Error = ::uCast< ::uDelegate*>(::app::Uno::Delegate__Combine(NULL, (::uDelegate*)__this->Error, (::uDelegate*)value), ::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__string__typeof());
}

void HttpMessageHandlerRequest__CheckDisposed(HttpMessageHandlerRequest* __this)
{
    if (__this->_httpRequest == NULL)
    {
        U_THROW(::app::Uno::ObjectDisposedException__New_3(NULL, ::uGetConstString("HttpMessageHandlerRequest")));
    }
}

void HttpMessageHandlerRequest__CompleteRequest(HttpMessageHandlerRequest* __this)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandler*>(__this->_httpMessageHandler)->CompleteRequest(__this);
    __this->_httpMessageHandler = NULL;
}

void HttpMessageHandlerRequest__Dispose(HttpMessageHandlerRequest* __this)
{
    ::app::Uno::IDisposable::Dispose(::uPtr< ::uObject*>(__this->_httpRequest));
    __this->_httpRequest = NULL;
    __this->_optionalPayloadCache = NULL;
    ::app::Uno::GC__SuppressFinalize(NULL, (::uObject*)__this);
}

void HttpMessageHandlerRequest__FireSetHeadersReceived(HttpMessageHandlerRequest* __this)
{
    __this->State(3);
}

int HttpMessageHandlerRequest__get_HttpResponseType(HttpMessageHandlerRequest* __this)
{
    return __this->_responseType;
}

::uString* HttpMessageHandlerRequest__get_Method(HttpMessageHandlerRequest* __this)
{
    return __this->_method;
}

int HttpMessageHandlerRequest__get_State(HttpMessageHandlerRequest* __this)
{
    return __this->_state;
}

::uArray* HttpMessageHandlerRequest__GetResponseContentByteArray(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();

    if (__this->HttpResponseType() != 1)
    {
        U_THROW(::app::Uno::Net::Http::InvalidResponseTypeException__New_3(NULL));
    }

    if ((__this->State() < 4) || (__this->State() > 5))
    {
        return ::uNewArray(::app::Uno::Byte__typeof(), 0);
    }

    ::uArray* ind_124 = ::app::Uno::Net::Http::Implementation::IHttpRequest::GetResponseContentByteArray(::uPtr< ::uObject*>(__this->_httpRequest));
    return (ind_124 != NULL) ? ind_124 : ::uNewArray(::app::Uno::Byte__typeof(), 0);
}

::uString* HttpMessageHandlerRequest__GetResponseContentString(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();

    if (__this->HttpResponseType() != 0)
    {
        U_THROW(::app::Uno::Net::Http::InvalidResponseTypeException__New_3(NULL));
    }

    if ((__this->State() < 4) || (__this->State() > 5))
    {
        return ::uGetConstString("");
    }

    ::uString* ind_123 = ::app::Uno::Net::Http::Implementation::IHttpRequest::GetResponseContentString(::uPtr< ::uObject*>(__this->_httpRequest));
    return (ind_123 != NULL) ? ind_123 : ::uGetConstString("");
}

::uString* HttpMessageHandlerRequest__GetResponseHeaders(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();

    if ((__this->State() < 3) || (__this->State() > 5))
    {
        return ::uGetConstString("");
    }

    return ::app::Uno::Net::Http::Implementation::IHttpRequest::GetResponseHeaders(::uPtr< ::uObject*>(__this->_httpRequest));
}

int HttpMessageHandlerRequest__GetResponseStatus(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();

    if ((__this->State() < 3) || (__this->State() > 5))
    {
        return 0;
    }

    return ::app::Uno::Net::Http::Implementation::IHttpRequest::GetResponseStatus(::uPtr< ::uObject*>(__this->_httpRequest));
}

bool HttpMessageHandlerRequest__IsComplete(HttpMessageHandlerRequest* __this)
{
    return __this->State() >= 5;
}

bool HttpMessageHandlerRequest__IsHeaderValid(::uStatic* __this, ::uString* name, ::uString* value)
{
    return true;
}

HttpMessageHandlerRequest* HttpMessageHandlerRequest__New_1(::uStatic* __this, ::app::Uno::Net::Http::HttpMessageHandler* handler, ::uString* method, ::uString* url, ::uObject* dispatcher)
{
    HttpMessageHandlerRequest* inst = (HttpMessageHandlerRequest*)::uAllocObject(sizeof(HttpMessageHandlerRequest), HttpMessageHandlerRequest__typeof());
    inst->_ObjInit(handler, method, url, dispatcher);
    return inst;
}

void HttpMessageHandlerRequest__OnAborted(HttpMessageHandlerRequest* __this)
{
    ::uDelegate* handler = __this->Aborted;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::app::Uno::Threading::IDispatcher::Invoke(::uPtr< ::uObject*>(__this->_dispatcher), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Uno::Net::Http::HttpMessageHandlerRequest_DispatchClosure__Run, ::app::Uno::Net::Http::HttpMessageHandlerRequest_DispatchClosure__New_1(NULL, 6, handler, __this)));
    }
}

void HttpMessageHandlerRequest__OnDone(HttpMessageHandlerRequest* __this)
{
    ::uDelegate* handler = __this->Done;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::app::Uno::Threading::IDispatcher::Invoke(::uPtr< ::uObject*>(__this->_dispatcher), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Uno::Net::Http::HttpMessageHandlerRequest_DispatchClosure__Run, ::app::Uno::Net::Http::HttpMessageHandlerRequest_DispatchClosure__New_1(NULL, 5, handler, __this)));
    }
}

void HttpMessageHandlerRequest__OnError(HttpMessageHandlerRequest* __this, ::uString* platformspesificErrorMessage)
{
    ::uDelegate* handler = __this->Error;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::app::Uno::Threading::IDispatcher::Invoke(::uPtr< ::uObject*>(__this->_dispatcher), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Uno::Net::Http::HttpMessageHandlerRequest_DispatchClosure__string__Run, ::app::Uno::Net::Http::HttpMessageHandlerRequest_DispatchClosure__string__New_1(NULL, 7, handler, __this, platformspesificErrorMessage)));
    }
}

void HttpMessageHandlerRequest__OnHeadersReceived(HttpMessageHandlerRequest* __this)
{
    ::app::Uno::Threading::IDispatcher::Invoke(::uPtr< ::uObject*>(__this->_dispatcher), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)HttpMessageHandlerRequest__FireSetHeadersReceived, __this));
}

void HttpMessageHandlerRequest__OnProgress(HttpMessageHandlerRequest* __this, int current, int total, bool hasTotal)
{
    ::uDelegate* handler = __this->Progress;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::app::Uno::Threading::IDispatcher::Invoke(::uPtr< ::uObject*>(__this->_dispatcher), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Uno::Net::Http::HttpMessageHandlerRequest_ProgressClosure__Run, ::app::Uno::Net::Http::HttpMessageHandlerRequest_ProgressClosure__New_1(NULL, 4, handler, __this, current, total, hasTotal)));
    }
}

void HttpMessageHandlerRequest__OnStateChanged(HttpMessageHandlerRequest* __this)
{
    if (__this->State() > 5)
    {
        return;
    }

    ::uDelegate* handler = __this->StateChanged;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::uPtr< ::uDelegate*>(handler)->InvokeVoid< HttpMessageHandlerRequest*>(__this);
    }
}

void HttpMessageHandlerRequest__OnTimeout(HttpMessageHandlerRequest* __this)
{
    ::uDelegate* handler = __this->Timeout;

    if (::app::Uno::Delegate__op_Inequality(NULL, (::uDelegate*)handler, NULL))
    {
        ::app::Uno::Threading::IDispatcher::Invoke(::uPtr< ::uObject*>(__this->_dispatcher), ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)::app::Uno::Net::Http::HttpMessageHandlerRequest_DispatchClosure__Run, ::app::Uno::Net::Http::HttpMessageHandlerRequest_DispatchClosure__New_1(NULL, 8, handler, __this)));
    }
}

void HttpMessageHandlerRequest__SendAsync(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();

    if (__this->State() != 1)
    {
        U_THROW(::app::Uno::Net::Http::InvalidStateException__New_3(NULL));
    }

    __this->_state = 2;
    ::app::Uno::Net::Http::Implementation::IHttpRequest::SendAsync(::uPtr< ::uObject*>(__this->_httpRequest));
    __this->OnStateChanged();
}

void HttpMessageHandlerRequest__SendAsync_1(HttpMessageHandlerRequest* __this, ::uString* data)
{
    __this->CheckDisposed();

    if (__this->State() != 1)
    {
        U_THROW(::app::Uno::Net::Http::InvalidStateException__New_3(NULL));
    }

    __this->_state = 2;

    if (((::app::Uno::String__op_Equality(NULL, __this->Method(), ::uGetConstString("GET")) || ::app::Uno::String__op_Equality(NULL, __this->Method(), ::uGetConstString("HEAD"))) || ::app::Uno::String__op_Equality(NULL, data, NULL)) || ::app::Uno::String__op_Equality(NULL, data, ::uGetConstString("")))
    {
        ::app::Uno::Net::Http::Implementation::IHttpRequest::SendAsync(::uPtr< ::uObject*>(__this->_httpRequest));
    }
    else
    {
        ::app::Uno::Net::Http::Implementation::IHttpRequest::SendAsync_1(::uPtr< ::uObject*>(__this->_httpRequest), data);
    }

    __this->OnStateChanged();
}

void HttpMessageHandlerRequest__set_HttpResponseType(HttpMessageHandlerRequest* __this, int value)
{
    __this->SetResponseType(value);
}

void HttpMessageHandlerRequest__set_State(HttpMessageHandlerRequest* __this, int value)
{
    if (__this->_state == value)
    {
        return;
    }

    __this->_state = value;
    __this->OnStateChanged();
}

void HttpMessageHandlerRequest__SetHeader(HttpMessageHandlerRequest* __this, ::uString* name, ::uString* value)
{
    __this->CheckDisposed();

    if (__this->State() != 1)
    {
        U_THROW(::app::Uno::Net::Http::InvalidStateException__New_3(NULL));
    }

    if (!HttpMessageHandlerRequest__IsHeaderValid(NULL, name, value))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Not allowed to set header \""), name), ::uGetConstString("\" on this target."))));
    }

    ::app::Uno::Net::Http::Implementation::IHttpRequest::SetHeader(::uPtr< ::uObject*>(__this->_httpRequest), name, value);
}

void HttpMessageHandlerRequest__SetResponseType(HttpMessageHandlerRequest* __this, int responseType)
{
    __this->CheckDisposed();

    if (__this->State() >= 4)
    {
        U_THROW(::app::Uno::Net::Http::InvalidStateException__New_3(NULL));
    }

    __this->_responseType = responseType;
    ::uPtr< ::app::Uno::Net::Http::Implementation::AndroidHttpRequest*>(::uAs< ::app::Uno::Net::Http::Implementation::AndroidHttpRequest*>(__this->_httpRequest, ::app::Uno::Net::Http::Implementation::AndroidHttpRequest__typeof()))->SetResponseType_1(responseType);
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HttpMessageHandlerRequest_DispatchClosure__uType* HttpMessageHandlerRequest_DispatchClosure__typeof()
{
    static ::uStaticStrong<HttpMessageHandlerRequest_DispatchClosure__uType*> type;
    if (type != NULL) return type;

    type = (HttpMessageHandlerRequest_DispatchClosure__uType*)::uAllocClassType(sizeof(HttpMessageHandlerRequest_DispatchClosure__uType), "Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(HttpMessageHandlerRequest_DispatchClosure, _action),
        "_arg", offsetof(HttpMessageHandlerRequest_DispatchClosure, _arg));

    return type;
}

void HttpMessageHandlerRequest_DispatchClosure___ObjInit(HttpMessageHandlerRequest_DispatchClosure* __this, int state, ::uDelegate* action, ::app::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    __this->_action = action;
    __this->_arg = arg;
    __this->_state = state;
}

HttpMessageHandlerRequest_DispatchClosure* HttpMessageHandlerRequest_DispatchClosure__New_1(::uStatic* __this, int state, ::uDelegate* action, ::app::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    HttpMessageHandlerRequest_DispatchClosure* inst = (HttpMessageHandlerRequest_DispatchClosure*)::uAllocObject(sizeof(HttpMessageHandlerRequest_DispatchClosure), HttpMessageHandlerRequest_DispatchClosure__typeof());
    inst->_ObjInit(state, action, arg);
    return inst;
}

void HttpMessageHandlerRequest_DispatchClosure__Run(HttpMessageHandlerRequest_DispatchClosure* __this)
{
    if (::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_arg)->IsComplete())
    {
        U_THROW(::app::Uno::Net::Http::InvalidStateException__New_4(NULL, ::uGetConstString("Invalid state: The request has already completed.")));
    }

    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_arg)->State(__this->_state);
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_arg);
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_arg)->CompleteRequest();
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HttpMessageHandlerRequest_ProgressClosure__uType* HttpMessageHandlerRequest_ProgressClosure__typeof()
{
    static ::uStaticStrong<HttpMessageHandlerRequest_ProgressClosure__uType*> type;
    if (type != NULL) return type;

    type = (HttpMessageHandlerRequest_ProgressClosure__uType*)::uAllocClassType(sizeof(HttpMessageHandlerRequest_ProgressClosure__uType), "Uno.Net.Http.HttpMessageHandlerRequest.ProgressClosure", false, 0, 2, 0);

    type->SetStrongRefs(
        "_action", offsetof(HttpMessageHandlerRequest_ProgressClosure, _action),
        "_request", offsetof(HttpMessageHandlerRequest_ProgressClosure, _request));

    return type;
}

void HttpMessageHandlerRequest_ProgressClosure___ObjInit(HttpMessageHandlerRequest_ProgressClosure* __this, int state, ::uDelegate* action, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request, int current, int total, bool hasTotal)
{
    __this->_action = action;
    __this->_request = request;
    __this->_current = current;
    __this->_total = total;
    __this->_hasTotal = hasTotal;
    __this->_state = state;
}

HttpMessageHandlerRequest_ProgressClosure* HttpMessageHandlerRequest_ProgressClosure__New_1(::uStatic* __this, int state, ::uDelegate* action, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request, int current, int total, bool hasTotal)
{
    HttpMessageHandlerRequest_ProgressClosure* inst = (HttpMessageHandlerRequest_ProgressClosure*)::uAllocObject(sizeof(HttpMessageHandlerRequest_ProgressClosure), HttpMessageHandlerRequest_ProgressClosure__typeof());
    inst->_ObjInit(state, action, request, current, total, hasTotal);
    return inst;
}

void HttpMessageHandlerRequest_ProgressClosure__Run(HttpMessageHandlerRequest_ProgressClosure* __this)
{
    if (::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->IsComplete())
    {
        U_THROW(::app::Uno::Net::Http::InvalidStateException__New_4(NULL, ::uGetConstString("Invalid state: The request has already completed.")));
    }

    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->State(__this->_state);
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Uno::Net::Http::HttpMessageHandlerRequest*, int, int, bool>(__this->_request, __this->_current, __this->_total, __this->_hasTotal);
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* HttpRequestState__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Net.Http.HttpRequestState", ::app::Uno::Int__typeof(), 10);

    type->SetLiterals(
        "Uninitialized", 0LL,
        "Opened", 1LL,
        "Sent", 2LL,
        "HeadersReceived", 3LL,
        "Loading", 4LL,
        "Done", 5LL,
        "Aborted", 6LL,
        "Errored", 7LL,
        "TimedOut", 8LL,
        "Unsent", 0LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* HttpResponseType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Net.Http.HttpResponseType", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "None", -1LL,
        "String", 0LL,
        "ByteArray", 1LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uObject*> HttpStatusReasonPhrase__ClientErrors;
::uStaticStrong< ::uObject*> HttpStatusReasonPhrase__Informational;
::uStaticStrong< ::uObject*> HttpStatusReasonPhrase__Redirection;
::uStaticStrong< ::uObject*> HttpStatusReasonPhrase__ServerErrors;
::uStaticStrong< ::uObject*> HttpStatusReasonPhrase__Success;

HttpStatusReasonPhrase__uType* HttpStatusReasonPhrase__typeof()
{
    static ::uStaticStrong<HttpStatusReasonPhrase__uType*> type;
    if (type != NULL) return type;

    type = (HttpStatusReasonPhrase__uType*)::uAllocClassType(sizeof(HttpStatusReasonPhrase__uType), "Uno.Net.Http.HttpStatusReasonPhrase");

    return type;
}

void HttpStatusReasonPhrase___TypeInit(::uStatic* __this)
{
    ::app::Uno::Collections::Dictionary__int__string* collection_127;
    ::app::Uno::Collections::Dictionary__int__string* collection_126;
    ::app::Uno::Collections::Dictionary__int__string* collection_125;
    ::app::Uno::Collections::Dictionary__int__string* collection_124;
    ::app::Uno::Collections::Dictionary__int__string* collection_123;
    HttpStatusReasonPhrase__Informational = (::uObject*)(collection_127 = ::app::Uno::Collections::Dictionary__int__string__New_1(NULL), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_127)->Add(100, ::uGetConstString("Continue")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_127)->Add(101, ::uGetConstString("Switching Protocols")), collection_127);
    HttpStatusReasonPhrase__Success = (::uObject*)(collection_126 = ::app::Uno::Collections::Dictionary__int__string__New_1(NULL), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_126)->Add(200, ::uGetConstString("OK")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_126)->Add(201, ::uGetConstString("Created")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_126)->Add(202, ::uGetConstString("Accepted")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_126)->Add(203, ::uGetConstString("Non-Authoritative Information")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_126)->Add(204, ::uGetConstString("No Content")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_126)->Add(205, ::uGetConstString("Reset Content")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_126)->Add(206, ::uGetConstString("Partial Content")), collection_126);
    HttpStatusReasonPhrase__Redirection = (::uObject*)(collection_125 = ::app::Uno::Collections::Dictionary__int__string__New_1(NULL), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_125)->Add(300, ::uGetConstString("Multiple Choices")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_125)->Add(301, ::uGetConstString("Moved Permanently")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_125)->Add(302, ::uGetConstString("Found")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_125)->Add(303, ::uGetConstString("See Other")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_125)->Add(304, ::uGetConstString("Not Modified")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_125)->Add(305, ::uGetConstString("Use Proxy")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_125)->Add(307, ::uGetConstString("Temporary Redirect")), collection_125);
    HttpStatusReasonPhrase__ClientErrors = (::uObject*)(collection_124 = ::app::Uno::Collections::Dictionary__int__string__New_1(NULL), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(400, ::uGetConstString("Bad Request")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(401, ::uGetConstString("Unauthorized")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(402, ::uGetConstString("Payment Required")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(403, ::uGetConstString("Forbidden")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(404, ::uGetConstString("Not Found")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(405, ::uGetConstString("Method Not Allowed")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(406, ::uGetConstString("Not Acceptable")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(407, ::uGetConstString("Proxy Authentication Required")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(408, ::uGetConstString("Request Time-out")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(409, ::uGetConstString("Conflict")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(410, ::uGetConstString("Gone")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(411, ::uGetConstString("Length Required")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(412, ::uGetConstString("Precondition Failed")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(413, ::uGetConstString("Request Entity Too Large")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(414, ::uGetConstString("Request-URI Too Large")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(415, ::uGetConstString("Unsupported Media Type")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(416, ::uGetConstString("Requested range not satisfiable")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_124)->Add(417, ::uGetConstString("Expectation Failed")), collection_124);
    HttpStatusReasonPhrase__ServerErrors = (::uObject*)(collection_123 = ::app::Uno::Collections::Dictionary__int__string__New_1(NULL), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_123)->Add(500, ::uGetConstString("Internal Server Error")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_123)->Add(501, ::uGetConstString("Not Implemented")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_123)->Add(502, ::uGetConstString("Bad Gateway")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_123)->Add(503, ::uGetConstString("Service Unavailable")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_123)->Add(504, ::uGetConstString("Gateway Time-out")), ::uPtr< ::app::Uno::Collections::Dictionary__int__string*>(collection_123)->Add(505, ::uGetConstString("HTTP Version not supported")), collection_123);
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

InvalidResponseTypeException__uType* InvalidResponseTypeException__typeof()
{
    static ::uStaticStrong<InvalidResponseTypeException__uType*> type;
    if (type != NULL) return type;

    type = (InvalidResponseTypeException__uType*)::uAllocClassType(sizeof(InvalidResponseTypeException__uType), "Uno.Net.Http.InvalidResponseTypeException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    return type;
}

void InvalidResponseTypeException___ObjInit_2(InvalidResponseTypeException* __this)
{
    ::app::Uno::Exception___ObjInit_1(__this, ::uGetConstString("Response type is invalid."));
}

InvalidResponseTypeException* InvalidResponseTypeException__New_3(::uStatic* __this)
{
    InvalidResponseTypeException* inst = (InvalidResponseTypeException*)::uAllocObject(sizeof(InvalidResponseTypeException), InvalidResponseTypeException__typeof());
    inst->_ObjInit_2();
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

InvalidStateException__uType* InvalidStateException__typeof()
{
    static ::uStaticStrong<InvalidStateException__uType*> type;
    if (type != NULL) return type;

    type = (InvalidStateException__uType*)::uAllocClassType(sizeof(InvalidStateException__uType), "Uno.Net.Http.InvalidStateException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    return type;
}

void InvalidStateException___ObjInit_2(InvalidStateException* __this)
{
    ::app::Uno::Exception___ObjInit_1(__this, ::uGetConstString("The object is in an invalid state."));
}

void InvalidStateException___ObjInit_3(InvalidStateException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit_1(__this, message);
}

InvalidStateException* InvalidStateException__New_3(::uStatic* __this)
{
    InvalidStateException* inst = (InvalidStateException*)::uAllocObject(sizeof(InvalidStateException), InvalidStateException__typeof());
    inst->_ObjInit_2();
    return inst;
}

InvalidStateException* InvalidStateException__New_4(::uStatic* __this, ::uString* message)
{
    InvalidStateException* inst = (InvalidStateException*)::uAllocObject(sizeof(InvalidStateException), InvalidStateException__typeof());
    inst->_ObjInit_3(message);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/UriParsers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

QueryParser__uType* QueryParser__typeof()
{
    static ::uStaticStrong<QueryParser__uType*> type;
    if (type != NULL) return type;

    type = (QueryParser__uType*)::uAllocClassType(sizeof(QueryParser__uType), "Uno.Net.Http.QueryParser", false, 0, 0, 0);

    return type;
}

::uString* QueryParser__Parse(::uStatic* __this, ::uString* uriString, ::uString* scheme, int idx, int* startPartIdx)
{
    if ((idx >= ::uPtr< ::uString*>(uriString)->Length()) || !::app::Uno::Net::Http::UriScheme__IsHttpScheme(NULL, scheme))
    {
        return ::app::Uno::String__Empty;
    }

    int startQuery = ::app::Uno::String::IndexOf_1(::uPtr< ::uString*>(uriString), '?', idx);
    int startHash = ::app::Uno::String::IndexOf_1(uriString, '#', idx);

    if (startHash < 0)
    {
        startHash = ::uPtr< ::uString*>(uriString)->Length();
    }

    if ((startQuery >= 0) && (startQuery < startHash))
    {
        *startPartIdx = startQuery;
        return ::app::Uno::String::Substring(::uPtr< ::uString*>(uriString), *startPartIdx, startHash - *startPartIdx);
    }

    return ::app::Uno::String__Empty;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/UriParsers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SchemeParser__uType* SchemeParser__typeof()
{
    static ::uStaticStrong<SchemeParser__uType*> type;
    if (type != NULL) return type;

    type = (SchemeParser__uType*)::uAllocClassType(sizeof(SchemeParser__uType), "Uno.Net.Http.SchemeParser", false, 0, 0, 0);

    return type;
}

::app::Uno::Net::Http::SchemeParserResult SchemeParser__Parse(::uStatic* __this, ::uString* uriString, int* idx)
{
    ::app::Uno::Net::Http::SchemeParserResult result = ::app::Uno::Net::Http::SchemeParserResult();
    int end = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(uriString), ::uGetConstString(":"), *idx);

    if (end < 0)
    {
        U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("The scheme isn't specified in uriString.")));
    }

    if (((*idx + 2) >= uriString->Length()) || (end == *idx))
    {
        U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("The scheme specified in uriString is not correctly formed.")));
    }

    if ((end - *idx) > 1023)
    {
        U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("The length of the scheme specified in uriString exceeds 1023 characters.")));
    }

    result.Scheme = ::app::Uno::String::Substring(uriString, *idx, end - *idx);
    result.Type = ::app::Uno::Net::Http::UriScheme__GetSchemeType(NULL, result.Scheme);

    if (result.Type == 2)
    {
        return result;
    }

    *idx = end + 1;

    if (result.Type == 0)
    {
        if ((((*idx + 1) >= ::uPtr< ::uString*>(uriString)->Length()) || (::uPtr< ::uString*>(uriString)->Item(*idx) != '/')) || (::uPtr< ::uString*>(uriString)->Item(*idx + 1) != '/'))
        {
            U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("There is an invalid character sequence in uriString.")));
        }

        *idx = *idx + 2;
    }

    return result;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/UriParsers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

SchemeParserResult__uType* SchemeParserResult__typeof()
{
    static ::uStaticStrong<SchemeParserResult__uType*> type;
    if (type != NULL) return type;

    type = (SchemeParserResult__uType*)::uAllocStructType(sizeof(SchemeParserResult__uType), "Uno.Net.Http.SchemeParserResult", sizeof(SchemeParserResult), 0, 1, 0);

    type->SetStrongRefs(
        "Scheme", offsetof(SchemeParserResult, Scheme));

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Uri__uType* Uri__typeof()
{
    static ::uStaticStrong<Uri__uType*> type;
    if (type != NULL) return type;

    type = (Uri__uType*)::uAllocClassType(sizeof(Uri__uType), "Uno.Net.Http.Uri", false, 0, 10, 0);

    type->SetStrongRefs(
        "_AbsolutePath", offsetof(Uri, _AbsolutePath),
        "_AbsoluteUri", offsetof(Uri, _AbsoluteUri),
        "_Authority", offsetof(Uri, _Authority),
        "_Hash", offsetof(Uri, _Hash),
        "_Host", offsetof(Uri, _Host),
        "_OriginalString", offsetof(Uri, _OriginalString),
        "_PathAndQuery", offsetof(Uri, _PathAndQuery),
        "_Query", offsetof(Uri, _Query),
        "_Scheme", offsetof(Uri, _Scheme),
        "_UserInfo", offsetof(Uri, _UserInfo));

    return type;
}

void Uri___ObjInit(Uri* __this, ::uString* uriString)
{
    if (::app::Uno::String__IsNullOrEmpty(NULL, uriString))
    {
        U_THROW(::app::Uno::ArgumentNullException__New_5(NULL, ::uGetConstString("uriString")));
    }

    uriString = ::app::Uno::String::Trim(::uPtr< ::uString*>(uriString));

    if (uriString->Length() > 65519)
    {
        U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("The length of uriString exceeds 65519 characters.")));
    }

    __this->CreateThis(uriString);
}

void Uri__CreateThis(Uri* __this, ::uString* uriString)
{
    int idx = 0;
    __this->OriginalString((__this->AbsoluteUri(uriString), uriString));
    ::app::Uno::Net::Http::SchemeParserResult schemeResult = ::app::Uno::Net::Http::SchemeParser__Parse(NULL, uriString, &idx);
    __this->Scheme(schemeResult.Scheme);
    int queryOrHashPartIdx = ::uPtr< ::uString*>(uriString)->Length();
    int partStartIdx = uriString->Length();
    int absolutePathPartIdx = 0;

    if (schemeResult.Type == 2)
    {
        return;
    }

    __this->Query(::app::Uno::Net::Http::QueryParser__Parse(NULL, uriString, __this->Scheme(), idx, &partStartIdx));
    queryOrHashPartIdx = (partStartIdx < queryOrHashPartIdx) ? partStartIdx : queryOrHashPartIdx;
    __this->Hash(::app::Uno::Net::Http::HashParser__Parse(NULL, uriString, idx, &partStartIdx));
    queryOrHashPartIdx = (partStartIdx < queryOrHashPartIdx) ? partStartIdx : queryOrHashPartIdx;
    __this->AbsolutePath(::app::Uno::Net::Http::AbsolutePathParser__Parse(NULL, uriString, idx, queryOrHashPartIdx, &absolutePathPartIdx));
    __this->PathAndQuery(::app::Uno::String__op_Addition_1(NULL, __this->AbsolutePath(), __this->Query()));
    __this->UserInfo(::app::Uno::Net::Http::UserInfoParser__Parse(NULL, uriString, absolutePathPartIdx, &idx));
    ::app::Uno::Net::Http::HostInfo* hostInfo = ::app::Uno::Net::Http::HostInfoParser__Parse(NULL, uriString, __this->Scheme(), absolutePathPartIdx, &idx);
    __this->Host(::uPtr< ::app::Uno::Net::Http::HostInfo*>(hostInfo)->Host());
    __this->Port(hostInfo->Port());
    __this->Authority(hostInfo->Authority());
}

::uString* Uri__get_AbsolutePath(Uri* __this)
{
    return __this->_AbsolutePath;
}

::uString* Uri__get_AbsoluteUri(Uri* __this)
{
    return __this->_AbsoluteUri;
}

::uString* Uri__get_Authority(Uri* __this)
{
    return __this->_Authority;
}

::uString* Uri__get_Hash(Uri* __this)
{
    return __this->_Hash;
}

::uString* Uri__get_Host(Uri* __this)
{
    return __this->_Host;
}

::uString* Uri__get_OriginalString(Uri* __this)
{
    return __this->_OriginalString;
}

::uString* Uri__get_PathAndQuery(Uri* __this)
{
    return __this->_PathAndQuery;
}

int Uri__get_Port(Uri* __this)
{
    return __this->_Port;
}

::uString* Uri__get_Query(Uri* __this)
{
    return __this->_Query;
}

::uString* Uri__get_Scheme(Uri* __this)
{
    return __this->_Scheme;
}

::uString* Uri__get_UserInfo(Uri* __this)
{
    return __this->_UserInfo;
}

Uri* Uri__New_1(::uStatic* __this, ::uString* uriString)
{
    Uri* inst = (Uri*)::uAllocObject(sizeof(Uri), Uri__typeof());
    inst->_ObjInit(uriString);
    return inst;
}

void Uri__set_AbsolutePath(Uri* __this, ::uString* value)
{
    __this->_AbsolutePath = value;
}

void Uri__set_AbsoluteUri(Uri* __this, ::uString* value)
{
    __this->_AbsoluteUri = value;
}

void Uri__set_Authority(Uri* __this, ::uString* value)
{
    __this->_Authority = value;
}

void Uri__set_Hash(Uri* __this, ::uString* value)
{
    __this->_Hash = value;
}

void Uri__set_Host(Uri* __this, ::uString* value)
{
    __this->_Host = value;
}

void Uri__set_OriginalString(Uri* __this, ::uString* value)
{
    __this->_OriginalString = value;
}

void Uri__set_PathAndQuery(Uri* __this, ::uString* value)
{
    __this->_PathAndQuery = value;
}

void Uri__set_Port(Uri* __this, int value)
{
    __this->_Port = value;
}

void Uri__set_Query(Uri* __this, ::uString* value)
{
    __this->_Query = value;
}

void Uri__set_Scheme(Uri* __this, ::uString* value)
{
    __this->_Scheme = value;
}

void Uri__set_UserInfo(Uri* __this, ::uString* value)
{
    __this->_UserInfo = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UriFormatException__uType* UriFormatException__typeof()
{
    static ::uStaticStrong<UriFormatException__uType*> type;
    if (type != NULL) return type;

    type = (UriFormatException__uType*)::uAllocClassType(sizeof(UriFormatException__uType), "Uno.Net.Http.UriFormatException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    return type;
}

void UriFormatException___ObjInit_2(UriFormatException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit_1(__this, message);
}

UriFormatException* UriFormatException__New_3(::uStatic* __this, ::uString* message)
{
    UriFormatException* inst = (UriFormatException*)::uAllocObject(sizeof(UriFormatException), UriFormatException__typeof());
    inst->_ObjInit_2(message);
    return inst;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Collections::Dictionary__string__int*> UriScheme___defaultPorts;
::uStaticStrong< ::app::Uno::Collections::List__string*> UriScheme__KnownInternetSchemes;
::uStaticStrong< ::app::Uno::Collections::List__string*> UriScheme__KnownNonInternetSchemes;

UriScheme__uType* UriScheme__typeof()
{
    static ::uStaticStrong<UriScheme__uType*> type;
    if (type != NULL) return type;

    type = (UriScheme__uType*)::uAllocClassType(sizeof(UriScheme__uType), "Uno.Net.Http.UriScheme", false, 0, 0, 0);

    return type;
}

void UriScheme___TypeInit(::uStatic* __this)
{
    ::app::Uno::Collections::List__string* collection_124;
    ::app::Uno::Collections::List__string* collection_123;
    UriScheme__KnownInternetSchemes = (collection_124 = ::app::Uno::Collections::List__string__New_1(NULL), ::uPtr< ::app::Uno::Collections::List__string*>(collection_124)->Add(::uGetConstString("http")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_124)->Add(::uGetConstString("https")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_124)->Add(::uGetConstString("ftp")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_124)->Add(::uGetConstString("gopher")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_124)->Add(::uGetConstString("nntp")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_124)->Add(::uGetConstString("telnet")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_124)->Add(::uGetConstString("wais")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_124)->Add(::uGetConstString("file")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_124)->Add(::uGetConstString("prospero")), collection_124);
    UriScheme__KnownNonInternetSchemes = (collection_123 = ::app::Uno::Collections::List__string__New_1(NULL), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("mailto")), ::uPtr< ::app::Uno::Collections::List__string*>(collection_123)->Add(::uGetConstString("news")), collection_123);
}

::app::Uno::Collections::Dictionary__string__int* UriScheme__get_DefaultPorts(::uStatic* __this)
{
    if (UriScheme___defaultPorts == NULL)
    {
        UriScheme___defaultPorts = ::app::Uno::Collections::Dictionary__string__int__New_1(NULL);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(UriScheme___defaultPorts)->Add(::uGetConstString("http"), 80);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(UriScheme___defaultPorts)->Add(::uGetConstString("https"), 443);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(UriScheme___defaultPorts)->Add(::uGetConstString("ftp"), 21);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(UriScheme___defaultPorts)->Add(::uGetConstString("gopher"), 70);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(UriScheme___defaultPorts)->Add(::uGetConstString("telnet"), 119);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(UriScheme___defaultPorts)->Add(::uGetConstString("wais"), -1);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(UriScheme___defaultPorts)->Add(::uGetConstString("file"), -1);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(UriScheme___defaultPorts)->Add(::uGetConstString("prospero"), -1);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(UriScheme___defaultPorts)->Add(::uGetConstString("mailto"), 25);
        ::uPtr< ::app::Uno::Collections::Dictionary__string__int*>(UriScheme___defaultPorts)->Add(::uGetConstString("news"), -1);
    }

    return UriScheme___defaultPorts;
}

int UriScheme__GetSchemeType(::uStatic* __this, ::uString* scheme)
{
    ::uString* s = ::app::Uno::String::ToLower(::uPtr< ::uString*>(scheme));

    if (::uPtr< ::app::Uno::Collections::List__string*>(UriScheme__KnownInternetSchemes)->Contains(s))
    {
        return 0;
    }

    if (::uPtr< ::app::Uno::Collections::List__string*>(UriScheme__KnownNonInternetSchemes)->Contains(s))
    {
        return 1;
    }

    return 2;
}

bool UriScheme__IsHttpScheme(::uStatic* __this, ::uString* scheme)
{
    ::uString* s = ::app::Uno::String::ToLower(::uPtr< ::uString*>(scheme));
    return ::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("http")) || ::app::Uno::String__op_Equality(NULL, s, ::uGetConstString("https"));
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* UriSchemeType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Net.Http.UriSchemeType", ::app::Uno::Int__typeof(), 3);

    type->SetLiterals(
        "Internet", 0LL,
        "NonInternet", 1LL,
        "Unknown", 2LL);

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/UriParsers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

UserInfoParser__uType* UserInfoParser__typeof()
{
    static ::uStaticStrong<UserInfoParser__uType*> type;
    if (type != NULL) return type;

    type = (UserInfoParser__uType*)::uAllocClassType(sizeof(UserInfoParser__uType), "Uno.Net.Http.UserInfoParser", false, 0, 0, 0);

    return type;
}

bool UserInfoParser__IsValid(::uStatic* __this, ::uString* userInfo)
{
    return (((::app::Uno::String::IndexOf(::uPtr< ::uString*>(userInfo), ::uGetConstString("\\"), 0) < 0) && !::app::Uno::String::EndsWith(::uPtr< ::uString*>(userInfo), ::uGetConstString(":"))) && !::app::Uno::String::StartsWith(::uPtr< ::uString*>(userInfo), ::uGetConstString(":"))) && !::app::Uno::String__IsNullOrEmpty(NULL, userInfo);
}

::uString* UserInfoParser__Parse(::uStatic* __this, ::uString* uriString, int endIdx, int* idx)
{
    if (*idx >= endIdx)
    {
        U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("There is an invalid character sequence in uriString.")));
    }

    int end = ::app::Uno::String::IndexOf(::uPtr< ::uString*>(uriString), ::uGetConstString("@"), *idx);

    if ((end < 0) || (end >= endIdx))
    {
        return ::app::Uno::String__Empty;
    }

    ::uString* userInfo = ::app::Uno::String::Substring(uriString, *idx, end - *idx);

    if (!UserInfoParser__IsValid(NULL, userInfo))
    {
        U_THROW(::app::Uno::Net::Http::UriFormatException__New_3(NULL, ::uGetConstString("The user name or password specified in uriString is not valid.")));
    }

    *idx = end + 1;
    return userInfo;
}

}}}}
