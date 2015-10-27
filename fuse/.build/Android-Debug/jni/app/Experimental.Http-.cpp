#include <app/Experimental.Cache.CacheLoaded.h>
#include <app/Experimental.Cache.ICache.h>
#include <app/Experimental.Cache.ICacheReader.h>
#include <app/Experimental.Cache.ICacheWriter.h>
#include <app/Experimental.Http.BinaryLoader.h>
#include <app/Experimental.Http.HttpLoader.h>
#include <app/Experimental.Http.HttpResponseHeader.h>
#include <app/Experimental.Http.Internal.DateUtil.h>
#include <app/Experimental.Http.Loader.h>
#include <app/Experimental.Http.LoaderConst.h>
#include <app/Experimental.Http.TextLoader.h>
#include <app/Uno.Action__Experimental_Http_HttpResponseHeader__string.h>
#include <app/Uno.Action__Experimental_Http_HttpResponseHeader__Uno_Buffer.h>
#include <app/Uno.Action__string.h>
#include <app/Uno.Action__Uno_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Action__Uno_Net_Http_HttpMessageHandlerRequest__string.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Buffer.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__string__string.h>
#include <app/Uno.Collections.Dictionary2_Enumerator__string__string.h>
#include <app/Uno.Collections.KeyValuePair__string__string.h>
#include <app/Uno.Delegate.h>
#include <app/Uno.Diagnostics.Debug.h>
#include <app/Uno.Diagnostics.DebugMessageType.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Int.h>
#include <app/Uno.IO.BinaryReader.h>
#include <app/Uno.IO.BinaryWriter.h>
#include <app/Uno.IO.Stream.h>
#include <app/Uno.IO.StreamReader.h>
#include <app/Uno.IO.StreamWriter.h>
#include <app/Uno.Long.h>
#include <app/Uno.Net.Http.HttpMessageHandler.h>
#include <app/Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <app/Uno.Net.Http.HttpResponseType.h>
#include <app/Uno.String.h>

namespace app {
namespace Experimental {
namespace Http {

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Http/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

BinaryLoader__uType* BinaryLoader__typeof()
{
    static ::uStaticStrong<BinaryLoader__uType*> type;
    if (type != NULL) return type;

    type = (BinaryLoader__uType*)::uAllocClassType(sizeof(BinaryLoader__uType), "Experimental.Http.BinaryLoader", false, 0, 2, 0);

    type->SetBaseType(::app::Experimental::Http::Loader__typeof());
    type->__fp_CompleteLoading = (void(*)(::app::Experimental::Http::Loader*, ::app::Uno::Net::Http::HttpMessageHandlerRequest*))BinaryLoader__CompleteLoading;
    type->__fp_LoadCacheData = (void(*)(::app::Experimental::Http::Loader*))BinaryLoader__LoadCacheData;
    type->__fp_LoadCacheRaw = (bool(*)(::app::Experimental::Http::Loader*, ::uObject*))BinaryLoader__LoadCacheRaw;
    type->__fp_PrepareRequest = (void(*)(::app::Experimental::Http::Loader*, ::app::Uno::Net::Http::HttpMessageHandlerRequest*))BinaryLoader__PrepareRequest;

    type->SetStrongRefs(
        "_loadedCache", offsetof(BinaryLoader, _loadedCache),
        "Callback", offsetof(BinaryLoader, Callback));

    return type;
}

void BinaryLoader___ObjInit_1(BinaryLoader* __this)
{
    ::app::Experimental::Http::Loader___ObjInit(__this);
}

void BinaryLoader__CompleteLoading(BinaryLoader* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* resp)
{
    __this->OnBufferLoaded(::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(resp)->GetResponseContentByteArray());
}

void BinaryLoader__LoadCacheData(BinaryLoader* __this)
{
    ::uPtr< ::uDelegate*>(__this->Callback)->InvokeVoid< ::app::Experimental::Http::HttpResponseHeader*, ::app::Uno::Buffer*>(__this->Header(), __this->_loadedCache);
}

bool BinaryLoader__LoadCacheRaw(BinaryLoader* __this, ::uObject* record)
{
    int len = (int)(::uPtr< ::app::Uno::IO::Stream*>(::app::Experimental::Cache::ICacheReader::Stream(::uPtr< ::uObject*>(record)))->Length() - ::uPtr< ::app::Uno::IO::Stream*>(::app::Experimental::Cache::ICacheReader::Stream(::uPtr< ::uObject*>(record)))->Position());
    ::uArray* b = ::uNewArray(::app::Uno::Byte__typeof(), len);
    ::uPtr< ::app::Uno::IO::Stream*>(::app::Experimental::Cache::ICacheReader::Stream(record))->Read(b, 0, len);
    __this->_loadedCache = ::app::Uno::Buffer__New_2(NULL, b);
    return true;
}

BinaryLoader* BinaryLoader__New_1(::uStatic* __this)
{
    BinaryLoader* inst = (BinaryLoader*)::uAllocObject(sizeof(BinaryLoader), BinaryLoader__typeof());
    inst->_ObjInit_1();
    return inst;
}

void BinaryLoader__OnBufferLoaded(BinaryLoader* __this, ::uArray* data)
{
    ::uObject* record = __this->OpenRecord();

    if (record != NULL)
    {
        ::uPtr< ::app::Uno::IO::Stream*>(::app::Experimental::Cache::ICacheWriter::Stream(::uPtr< ::uObject*>(record)))->Write(data, 0, ::uPtr< ::uArray*>(data)->Length());
        __this->CloseRecord(record);
    }

    ::uPtr< ::uDelegate*>(__this->Callback)->InvokeVoid< ::app::Experimental::Http::HttpResponseHeader*, ::app::Uno::Buffer*>(__this->Header(), ::app::Uno::Buffer__New_2(NULL, data));
}

void BinaryLoader__PrepareRequest(BinaryLoader* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(request)->SetResponseType(1);
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Http/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::uObject*> HttpLoader___cache;
int HttpLoader___maxAge;

HttpLoader__uType* HttpLoader__typeof()
{
    static ::uStaticStrong<HttpLoader__uType*> type;
    if (type != NULL) return type;

    type = (HttpLoader__uType*)::uAllocClassType(sizeof(HttpLoader__uType), "Experimental.Http.HttpLoader");

    return type;
}

void HttpLoader___TypeInit(::uStatic* __this)
{
    HttpLoader___maxAge = 86400;
}

void HttpLoader__Discard(::uStatic* __this, ::uString* requestUri)
{
    if (HttpLoader___cache != NULL)
    {
        ::app::Experimental::Cache::ICache::DeleteRecord(::uPtr< ::uObject*>(HttpLoader___cache), ::app::Experimental::Http::Loader__ConstructRecordId(NULL, ::uGetConstString("GET"), requestUri));
    }
}

int HttpLoader__get_CacheMaxAge(::uStatic* __this)
{
    return HttpLoader___maxAge;
}

void HttpLoader__LoadBinary(::uStatic* __this, ::uString* requestUri, ::uDelegate* callback, ::uDelegate* error)
{
    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)callback, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("LoadBinary requires callback action")));
    }

    if (::app::Uno::Delegate__op_Equality(NULL, (::uDelegate*)error, NULL))
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("LoadBinary requires error action")));
    }

    ::app::Experimental::Http::BinaryLoader* bl = ::app::Experimental::Http::BinaryLoader__New_1(NULL);
    ::uPtr< ::app::Experimental::Http::BinaryLoader*>(bl)->Uri = requestUri;
    bl->Method = ::uGetConstString("GET");
    bl->Callback = callback;
    bl->ErrorCallback = error;
    bl->Cache = HttpLoader___cache;
    bl->Initiate();
}

void HttpLoader__set_CacheMaxAge(::uStatic* __this, int value)
{
    HttpLoader___maxAge = value;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Http/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HttpResponseHeader__uType* HttpResponseHeader__typeof()
{
    static ::uStaticStrong<HttpResponseHeader__uType*> type;
    if (type != NULL) return type;

    type = (HttpResponseHeader__uType*)::uAllocClassType(sizeof(HttpResponseHeader__uType), "Experimental.Http.HttpResponseHeader", false, 0, 2, 0);

    type->SetStrongRefs(
        "_Headers", offsetof(HttpResponseHeader, _Headers),
        "_ReasonPhrase", offsetof(HttpResponseHeader, _ReasonPhrase));

    return type;
}

void HttpResponseHeader___ObjInit(HttpResponseHeader* __this)
{
}

::app::Uno::Collections::Dictionary__string__string* HttpResponseHeader__get_Headers(HttpResponseHeader* __this)
{
    return __this->_Headers;
}

::uString* HttpResponseHeader__get_ReasonPhrase(HttpResponseHeader* __this)
{
    return __this->_ReasonPhrase;
}

int HttpResponseHeader__get_StatusCode(HttpResponseHeader* __this)
{
    return __this->_StatusCode;
}

HttpResponseHeader* HttpResponseHeader__New_1(::uStatic* __this)
{
    HttpResponseHeader* inst = (HttpResponseHeader*)::uAllocObject(sizeof(HttpResponseHeader), HttpResponseHeader__typeof());
    inst->_ObjInit();
    return inst;
}

HttpResponseHeader* HttpResponseHeader__Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* r)
{
    HttpResponseHeader* h = HttpResponseHeader__New_1(NULL);
    ::uPtr< HttpResponseHeader*>(h)->StatusCode(::uPtr< ::app::Uno::IO::BinaryReader*>(r)->ReadInt());
    h->ReasonPhrase(r->ReadString());
    int c = r->ReadInt();
    h->Headers(::app::Uno::Collections::Dictionary__string__string__New_1(NULL));

    for (int i = 0; i < c; ++i)
    {
        ::uString* k = ::uPtr< ::app::Uno::IO::BinaryReader*>(r)->ReadString();
        ::uString* v = r->ReadString();
        ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(::uPtr< HttpResponseHeader*>(h)->Headers())->Item(k, v);
    }

    return h;
}

void HttpResponseHeader__set_Headers(HttpResponseHeader* __this, ::app::Uno::Collections::Dictionary__string__string* value)
{
    __this->_Headers = value;
}

void HttpResponseHeader__set_ReasonPhrase(HttpResponseHeader* __this, ::uString* value)
{
    __this->_ReasonPhrase = value;
}

void HttpResponseHeader__set_StatusCode(HttpResponseHeader* __this, int value)
{
    __this->_StatusCode = value;
}

void HttpResponseHeader__Write(HttpResponseHeader* __this, ::app::Uno::IO::BinaryWriter* w)
{
    ::uPtr< ::app::Uno::IO::BinaryWriter*>(w)->Write_21(__this->StatusCode());
    __this->WriteSafe(w, __this->ReasonPhrase());
    int c = ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->Headers())->Count();
    w->Write_21(c);

    for (::app::Uno::Collections::Dictionary2_Enumerator__string__string enum_123 = ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(__this->Headers())->GetEnumerator(); enum_123.MoveNext(); )
    {
        ::app::Uno::Collections::KeyValuePair__string__string h = enum_123.Current();
        __this->WriteSafe(w, h.Key());
        __this->WriteSafe(w, h.Value());
    }
}

void HttpResponseHeader__WriteSafe(HttpResponseHeader* __this, ::app::Uno::IO::BinaryWriter* w, ::uString* s)
{
    if (::app::Uno::String__op_Equality(NULL, s, NULL) || (::uPtr< ::uString*>(s)->Length() == 0))
    {
        ::uPtr< ::app::Uno::IO::BinaryWriter*>(w)->Write_8(::uGetConstString("!"));
    }
    else
    {
        w->Write_8(s);
    }
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Http/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Loader__uType* Loader__typeof()
{
    static ::uStaticStrong<Loader__uType*> type;
    if (type != NULL) return type;

    type = (Loader__uType*)::uAllocClassType(sizeof(Loader__uType), "Experimental.Http.Loader", false, 0, 6, 0);

    type->SetStrongRefs(
        "_cacheRecord", offsetof(Loader, _cacheRecord),
        "_header", offsetof(Loader, _header),
        "Cache", offsetof(Loader, Cache),
        "ErrorCallback", offsetof(Loader, ErrorCallback),
        "Method", offsetof(Loader, Method),
        "Uri", offsetof(Loader, Uri));

    return type;
}

void Loader___ObjInit(Loader* __this)
{
}

void Loader__CloseRecord(Loader* __this, ::uObject* record)
{
    ::app::Experimental::Cache::ICacheWriter::AddMeta(::uPtr< ::uObject*>(record), ::uGetConstString("updated"), ::app::Uno::String__op_Addition(NULL, ::uGetConstString(""), ::uBox< int>(::app::Uno::Int__typeof(), ::app::Experimental::Http::Internal::DateUtil__get_TimestampNow(NULL))));

    if (::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(__this->_header)->Headers())->ContainsKey(::uGetConstString("etag")))
    {
        ::app::Experimental::Cache::ICacheWriter::AddMeta(record, ::uGetConstString("etag"), ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(__this->_header)->Headers())->Item(::uGetConstString("etag")));
    }

    ::app::Experimental::Cache::ICacheWriter::Close(record);
}

::uString* Loader__ConstructRecordId(::uStatic* __this, ::uString* method, ::uString* uri)
{
    return ::app::Uno::String__op_Addition_1(NULL, ::app::Uno::String__op_Addition_1(NULL, method, ::uGetConstString(" ")), uri);
}

::app::Uno::Collections::Dictionary__string__string* Loader__ExtractHeaders(Loader* __this, ::uString* headers)
{
    ::uArray* array_126;
    ::uArray* array_127;
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    ::app::Uno::Collections::Dictionary__string__string* res = ::app::Uno::Collections::Dictionary__string__string__New_1(NULL);

    for (array_123 = ::app::Uno::String::Split(::uPtr< ::uString*>(headers), (array_126 = ::uNewArray(::app::Uno::Char__typeof(), 1), ::uPtr< ::uArray*>(array_126)->Item< ::uChar>(0) = 10, array_126)), index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
    {
        ::uString* header = ::uPtr< ::uArray*>(array_123)->Item< ::uString*>(index_124);

        if (!::app::Uno::String__IsNullOrEmpty(NULL, ::app::Uno::String::Trim(::uPtr< ::uString*>(header))))
        {
            ::uArray* arr = ::app::Uno::String::Split(::uPtr< ::uString*>(header), (array_127 = ::uNewArray(::app::Uno::Char__typeof(), 1), ::uPtr< ::uArray*>(array_127)->Item< ::uChar>(0) = ':', array_127));
            ::uString* actualValue = (::uPtr< ::uArray*>(arr)->Length() > 1) ? ::app::Uno::String::Trim(::uPtr< ::uString*>(::app::Uno::String::Substring_1(header, ::app::Uno::String::IndexOf(header, ::uGetConstString(":"), 0) + 1))) : ::app::Uno::String__Empty;
            ::uPtr< ::app::Uno::Collections::Dictionary__string__string*>(res)->Add(::app::Uno::String::ToLower(::uPtr< ::uString*>(::app::Uno::String::Trim(::uPtr< ::uString*>(arr->Item< ::uString*>(0))))), actualValue);
        }
    }

    return res;
}

::app::Experimental::Http::HttpResponseHeader* Loader__get_Header(Loader* __this)
{
    return __this->_header;
}

void Loader__Initiate(Loader* __this)
{
    if (__this->Cache != NULL)
    {
        bool has = ::app::Experimental::Cache::ICache::LoadRecord(::uPtr< ::uObject*>(__this->Cache), Loader__ConstructRecordId(NULL, __this->Method, __this->Uri), ::uNewDelegateNonVirt(::app::Experimental::Cache::CacheLoaded__typeof(), (const void*)Loader__OnCacheReady, __this));

        if (!has)
        {
            __this->MakeRequest();
        }
    }
    else
    {
        __this->MakeRequest();
    }
}

bool Loader__IsExpired(Loader* __this, ::uObject* record)
{
    try
    {
        ::uString* updatedStr = ::app::Experimental::Cache::ICacheReader::GetMeta(::uPtr< ::uObject*>(record), ::uGetConstString("updated"));

        if (::app::Uno::String__op_Equality(NULL, updatedStr, NULL))
        {
            return true;
        }

        int updated = ::app::Uno::Int__Parse(NULL, updatedStr);
        int age = ::app::Experimental::Http::Internal::DateUtil__get_TimestampNow(NULL) - updated;

        if (age > ::app::Experimental::Http::HttpLoader__get_CacheMaxAge(NULL))
        {
            return true;
        }

        return false;
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            return true;
        }
        else
        {
            throw __t;
        }
    }
}

bool Loader__LoadCache(Loader* __this, ::uObject* record)
{
    ::app::Uno::IO::Stream* stream = ::app::Experimental::Cache::ICacheReader::Stream(::uPtr< ::uObject*>(record));
    ::app::Uno::IO::BinaryReader* reader = ::app::Uno::IO::BinaryReader__New_1(NULL, stream);

    try
    {
        __this->_header = ::app::Experimental::Http::HttpResponseHeader__Read(NULL, reader);

        if (!__this->LoadCacheRaw(record))
        {
            return false;
        }
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::app::Uno::Diagnostics::Debug__Log_2(NULL, (::uObject*)e, 1, ::uGetConstString("/usr/local/share/uno/Packages/Experimental.Http/0.10.5/$.uno"), 848);
            ::app::Uno::Diagnostics::Debug__Log_1(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Failed loading caching: "), __this->Uri), 1, ::uGetConstString("/usr/local/share/uno/Packages/Experimental.Http/0.10.5/$.uno"), 849);
            ::app::Experimental::Cache::ICacheReader::Delete(::uPtr< ::uObject*>(record));
            return false;
        }
        else
        {
            throw __t;
        }
    }

    __this->LoadCacheData();
    return true;
}

void Loader__MakeRequest(Loader* __this)
{
    if (::app::Experimental::Http::LoaderConst__Handler == NULL)
    {
        ::app::Experimental::Http::LoaderConst__Handler = ::app::Uno::Net::Http::HttpMessageHandler__New_1(NULL);
    }

    ::app::Uno::Net::Http::HttpMessageHandlerRequest* request = ::uPtr< ::app::Uno::Net::Http::HttpMessageHandler*>(::app::Experimental::Http::LoaderConst__Handler)->CreateRequest(__this->Method, __this->Uri);
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(request)->add_Error(::uNewDelegateNonVirt(::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__string__typeof(), (const void*)Loader__OnError, __this));
    request->add_Done(::uNewDelegateNonVirt(::app::Uno::Action__Uno_Net_Http_HttpMessageHandlerRequest__typeof(), (const void*)Loader__OnLoaded, __this));

    if (__this->_cacheRecord != NULL)
    {
        ::uString* etag = ::app::Experimental::Cache::ICacheReader::GetMeta(::uPtr< ::uObject*>(__this->_cacheRecord), ::uGetConstString("etag"));

        if (::app::Uno::String__op_Inequality(NULL, etag, NULL))
        {
            ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(request)->SetHeader(::uGetConstString("If-None-Match"), etag);
        }
    }

    __this->PrepareRequest(request);
    request->SendAsync();
}

void Loader__OnCacheReady(Loader* __this, ::uObject* record)
{
    __this->_cacheRecord = record;

    if (__this->IsExpired(record))
    {
        __this->MakeRequest();
        return;
    }

    if (!__this->LoadCache(record))
    {
        __this->_cacheRecord = NULL;
        __this->MakeRequest();
    }
}

void Loader__OnError(Loader* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* msg, ::uString* reason)
{
    ::uPtr< ::uDelegate*>(__this->ErrorCallback)->InvokeVoid< ::uString*>(reason);
}

void Loader__OnLoaded(Loader* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* resp)
{
    if ((__this->_cacheRecord != NULL) && (::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(resp)->GetResponseStatus() == 304))
    {
        if (__this->LoadCache(__this->_cacheRecord))
        {
            return;
        }
    }

    __this->_header = ::app::Experimental::Http::HttpResponseHeader__New_1(NULL);
    ::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(__this->_header)->StatusCode(::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(resp)->GetResponseStatus());
    ::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(__this->_header)->Headers(__this->ExtractHeaders(resp->GetResponseHeaders()));
    __this->CompleteLoading(resp);
}

::uObject* Loader__OpenRecord(Loader* __this)
{
    if ((__this->Cache == NULL) || ::app::Uno::String__op_Inequality(NULL, __this->Method, ::uGetConstString("GET")))
    {
        return NULL;
    }

    ::uObject* record = ::app::Experimental::Cache::ICache::CreateRecord(::uPtr< ::uObject*>(__this->Cache), Loader__ConstructRecordId(NULL, __this->Method, __this->Uri));
    ::app::Uno::IO::Stream* stream = ::app::Experimental::Cache::ICacheWriter::Stream(::uPtr< ::uObject*>(record));
    ::app::Uno::IO::BinaryWriter* writer = ::app::Uno::IO::BinaryWriter__New_1(NULL, stream);
    ::uPtr< ::app::Experimental::Http::HttpResponseHeader*>(__this->_header)->Write(writer);
    return record;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Http/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< ::app::Uno::Net::Http::HttpMessageHandler*> LoaderConst__Handler;

LoaderConst__uType* LoaderConst__typeof()
{
    static ::uStaticStrong<LoaderConst__uType*> type;
    if (type != NULL) return type;

    type = (LoaderConst__uType*)::uAllocClassType(sizeof(LoaderConst__uType), "Experimental.Http.LoaderConst");

    return type;
}

// This file was generated based on '/usr/local/share/uno/Packages/Experimental.Http/0.10.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TextLoader__uType* TextLoader__typeof()
{
    static ::uStaticStrong<TextLoader__uType*> type;
    if (type != NULL) return type;

    type = (TextLoader__uType*)::uAllocClassType(sizeof(TextLoader__uType), "Experimental.Http.TextLoader", false, 0, 2, 0);

    type->SetBaseType(::app::Experimental::Http::Loader__typeof());
    type->__fp_CompleteLoading = (void(*)(::app::Experimental::Http::Loader*, ::app::Uno::Net::Http::HttpMessageHandlerRequest*))TextLoader__CompleteLoading;
    type->__fp_LoadCacheData = (void(*)(::app::Experimental::Http::Loader*))TextLoader__LoadCacheData;
    type->__fp_LoadCacheRaw = (bool(*)(::app::Experimental::Http::Loader*, ::uObject*))TextLoader__LoadCacheRaw;
    type->__fp_PrepareRequest = (void(*)(::app::Experimental::Http::Loader*, ::app::Uno::Net::Http::HttpMessageHandlerRequest*))TextLoader__PrepareRequest;

    type->SetStrongRefs(
        "_loadedCache", offsetof(TextLoader, _loadedCache),
        "Callback", offsetof(TextLoader, Callback));

    return type;
}

void TextLoader__CompleteLoading(TextLoader* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* resp)
{
    __this->OnBufferLoaded(::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(resp)->GetResponseContentString());
}

void TextLoader__LoadCacheData(TextLoader* __this)
{
    ::uPtr< ::uDelegate*>(__this->Callback)->InvokeVoid< ::app::Experimental::Http::HttpResponseHeader*, ::uString*>(__this->Header(), __this->_loadedCache);
}

bool TextLoader__LoadCacheRaw(TextLoader* __this, ::uObject* record)
{
    ::app::Uno::IO::StreamReader* reader = ::app::Uno::IO::StreamReader__New_1(NULL, ::app::Experimental::Cache::ICacheReader::Stream(::uPtr< ::uObject*>(record)));
    __this->_loadedCache = ::uPtr< ::app::Uno::IO::StreamReader*>(reader)->ReadToEnd();
    return true;
}

void TextLoader__OnBufferLoaded(TextLoader* __this, ::uString* data)
{
    ::uObject* record = __this->OpenRecord();

    if (record != NULL)
    {
        ::app::Uno::IO::StreamWriter* textWriter = ::app::Uno::IO::StreamWriter__New_1(NULL, ::app::Experimental::Cache::ICacheWriter::Stream(::uPtr< ::uObject*>(record)));
        ::uPtr< ::app::Uno::IO::StreamWriter*>(textWriter)->Write_7(data);
        __this->CloseRecord(record);
    }

    ::uPtr< ::uDelegate*>(__this->Callback)->InvokeVoid< ::app::Experimental::Http::HttpResponseHeader*, ::uString*>(__this->Header(), data);
}

void TextLoader__PrepareRequest(TextLoader* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(request)->SetResponseType(0);
}

}}}
