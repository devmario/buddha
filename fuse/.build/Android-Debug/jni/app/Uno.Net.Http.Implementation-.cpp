#include <app/Android.Base.JNI.h>
#include <app/Android.Base.Primitives.ujobject.h>
#include <app/Android.Base.Types.Arrays.h>
#include <app/Android.Base.Types.String.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Uno.Array.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Byte.h>
#include <app/Uno.Collections.List__byte__.h>
#include <app/Uno.Collections.List1_Enumerator__byte__.h>
#include <app/Uno.Int.h>
#include <app/Uno.Long.h>
#include <app/Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <app/Uno.Net.Http.HttpResponseType.h>
#include <app/Uno.Net.Http.Implementation.AndroidHttpRequest.h>
#include <app/Uno.Net.Http.Implementation.IHttpRequest.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Net {
namespace Http {
namespace Implementation {

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/Implementation/Android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

AndroidHttpRequest__uType* AndroidHttpRequest__typeof()
{
    static ::uStaticStrong<AndroidHttpRequest__uType*> type;
    if (type != NULL) return type;

    type = (AndroidHttpRequest__uType*)::uAllocClassType(sizeof(AndroidHttpRequest__uType), "Uno.Net.Http.Implementation.AndroidHttpRequest", false, 3, 3, 0);

    type->SetBaseType(::app::Android::com::fuse::ExperimentalHttp::HttpRequest__typeof());
    type->__fp_OnAborted = (void(*)(::app::Android::com::fuse::ExperimentalHttp::HttpRequest*))AndroidHttpRequest__OnAborted;
    type->__fp_OnDataReceived = (void(*)(::app::Android::com::fuse::ExperimentalHttp::HttpRequest*, ::uObject*, int))AndroidHttpRequest__OnDataReceived;
    type->__fp_OnDone = (void(*)(::app::Android::com::fuse::ExperimentalHttp::HttpRequest*))AndroidHttpRequest__OnDone;
    type->__fp_OnError = (void(*)(::app::Android::com::fuse::ExperimentalHttp::HttpRequest*, ::uObject*))AndroidHttpRequest__OnError;
    type->__fp_OnHeadersReceived = (void(*)(::app::Android::com::fuse::ExperimentalHttp::HttpRequest*))AndroidHttpRequest__OnHeadersReceived;
    type->__fp_OnProgress = (void(*)(::app::Android::com::fuse::ExperimentalHttp::HttpRequest*, int, int, bool))AndroidHttpRequest__OnProgress;
    type->__fp_OnTimeout = (void(*)(::app::Android::com::fuse::ExperimentalHttp::HttpRequest*))AndroidHttpRequest__OnTimeout;
    type->__interface_2.__fp_SetHeader = (void(*)(void*, ::uString*, ::uString*))AndroidHttpRequest__SetHeader_1;
    type->__interface_2.__fp_SendAsync_1 = (void(*)(void*, ::uString*))AndroidHttpRequest__SendAsync_2;
    type->__interface_2.__fp_SendAsync = (void(*)(void*))::app::Android::com::fuse::ExperimentalHttp::HttpRequest__SendAsync;
    type->__interface_2.__fp_GetResponseStatus = (int(*)(void*))::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseStatus;
    type->__interface_2.__fp_GetResponseHeaders = (::uString*(*)(void*))AndroidHttpRequest__GetResponseHeaders_1;
    type->__interface_2.__fp_GetResponseContentString = (::uString*(*)(void*))AndroidHttpRequest__GetResponseContentString;
    type->__interface_2.__fp_GetResponseContentByteArray = (::uArray*(*)(void*))AndroidHttpRequest__GetResponseContentByteArray;
    type->__interface_1.__fp_Dispose = (void(*)(void*))AndroidHttpRequest__Dispose_1;

    type->SetInterfaces(
        ::app::Android::Base::Wrappers::IJWrapper__typeof(), offsetof(AndroidHttpRequest__uType, __interface_0),
        ::app::Uno::IDisposable__typeof(), offsetof(AndroidHttpRequest__uType, __interface_1),
        ::app::Uno::Net::Http::Implementation::IHttpRequest__typeof(), offsetof(AndroidHttpRequest__uType, __interface_2));

    type->SetStrongRefs(
        "_request", offsetof(AndroidHttpRequest, _request),
        "_responseData", offsetof(AndroidHttpRequest, _responseData),
        "_result", offsetof(AndroidHttpRequest, _result));

    return type;
}

void AndroidHttpRequest___ObjInit_4(AndroidHttpRequest* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request, ::uString* method, ::uString* url)
{
    ::app::Android::com::fuse::ExperimentalHttp::HttpRequest___ObjInit_3(__this, (::uObject*)::app::Android::Base::JNI__GetWrappedActivityObject(NULL), (::uObject*)::app::Android::Base::Wrappers::JWrapper__Wrap(NULL, ::app::Android::Base::Types::String__UnoToJava(NULL, url), false, false), (::uObject*)::app::Android::Base::Wrappers::JWrapper__Wrap(NULL, ::app::Android::Base::Types::String__UnoToJava(NULL, method), false, false));
    __this->_request = request;
    __this->_responseData = ::app::Uno::Collections::List__byte____New_1(NULL);
    __this->_responseLength = 0;
    __this->_result = ::uNewArray(::app::Uno::Byte__typeof(), 0);
}

void AndroidHttpRequest__Dispose_1(AndroidHttpRequest* __this)
{
}

::uArray* AndroidHttpRequest__GetResponseContentByteArray(AndroidHttpRequest* __this)
{
    return __this->_result;
}

::uString* AndroidHttpRequest__GetResponseContentString(AndroidHttpRequest* __this)
{
    return ::app::Android::Base::Types::String__JavaToUno(NULL, __this->GetResponseString());
}

::uString* AndroidHttpRequest__GetResponseHeaders_1(AndroidHttpRequest* __this)
{
    return ::app::Android::Base::Types::String__JavaToUno(NULL, ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseHeaders(__this));
}

AndroidHttpRequest* AndroidHttpRequest__New_3(::uStatic* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request, ::uString* method, ::uString* url)
{
    AndroidHttpRequest* inst = (AndroidHttpRequest*)::uAllocObject(sizeof(AndroidHttpRequest), AndroidHttpRequest__typeof());
    inst->_ObjInit_4(request, method, url);
    return inst;
}

void AndroidHttpRequest__OnAborted(AndroidHttpRequest* __this)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->OnAborted();
}

void AndroidHttpRequest__OnDataReceived(AndroidHttpRequest* __this, ::uObject* arg0, int arg1)
{
    if (arg1 == -1)
    {
        if (__this->_responseLength == 0)
        {
            return;
        }

        __this->_result = ::uNewArray(::app::Uno::Byte__typeof(), __this->_responseLength);
        int pos = 0;

        for (::app::Uno::Collections::List1_Enumerator__byte__ enum_123 = ::uPtr< ::app::Uno::Collections::List__byte__*>(__this->_responseData)->GetEnumerator(); enum_123.MoveNext(); )
        {
            ::uArray* chunk = enum_123.Current();
            int chunkLength = ::uPtr< ::uArray*>(chunk)->Length();
            ::app::Uno::Array__Copy__byte_1(NULL, chunk, 0, __this->_result, pos, chunkLength);
            pos = pos + chunkLength;
        }
    }
    else
    {
        ::uPtr< ::app::Uno::Collections::List__byte__*>(__this->_responseData)->Add(::app::Android::Base::Types::Arrays__JavaToUnoByteArray(NULL, ::app::Android::Base::Wrappers::IJWrapper::_GetJavaObject(::uPtr< ::uObject*>(arg0)), (::uLong)arg1));
        __this->_responseLength = __this->_responseLength + arg1;
    }
}

void AndroidHttpRequest__OnDone(AndroidHttpRequest* __this)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->OnDone();
}

void AndroidHttpRequest__OnError(AndroidHttpRequest* __this, ::uObject* arg0)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->OnError(::app::Android::Base::Types::String__JavaToUno(NULL, arg0));
}

void AndroidHttpRequest__OnHeadersReceived(AndroidHttpRequest* __this)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->OnHeadersReceived();
}

void AndroidHttpRequest__OnProgress(AndroidHttpRequest* __this, int current, int total, bool hasTotal)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->OnProgress(current, total, hasTotal);
}

void AndroidHttpRequest__OnTimeout(AndroidHttpRequest* __this)
{
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_request)->OnTimeout();
}

void AndroidHttpRequest__SendAsync_2(AndroidHttpRequest* __this, ::uString* data)
{
    ::app::Android::Base::Wrappers::JWrapper* jData = ::app::Android::Base::Wrappers::JWrapper__Wrap(NULL, ::app::Android::Base::Types::String__UnoToJava(NULL, data), false, false);
    __this->SendAsyncStr((::uObject*)jData);
}

void AndroidHttpRequest__SetHeader_1(AndroidHttpRequest* __this, ::uString* name, ::uString* value)
{
    ::app::Android::Base::Wrappers::JWrapper* jName = ::app::Android::Base::Wrappers::JWrapper__Wrap(NULL, ::app::Android::Base::Types::String__UnoToJava(NULL, name), false, false);
    ::app::Android::Base::Wrappers::JWrapper* jValue = ::app::Android::Base::Wrappers::JWrapper__Wrap(NULL, ::app::Android::Base::Types::String__UnoToJava(NULL, value), false, false);
    __this->SetHeader((::uObject*)jName, (::uObject*)jValue);
}

void AndroidHttpRequest__SetResponseType_1(AndroidHttpRequest* __this, int responseType)
{
    __this->SetResponseType(responseType);
}

// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/Implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uInterfaceType* IHttpRequest__typeof()
{
    static ::uStaticStrong< ::uInterfaceType*> type;
    if (type != NULL) return type;

    type = ::uAllocInterfaceType("Uno.Net.Http.Implementation.IHttpRequest");

    return type;
}

}}}}}