// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.12.0/Source/Uno/Collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_NET_HTTP_HTTP_MESSAGE_HANDLER_REQUEST_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_NET_HTTP_HTTP_MESSAGE_HANDLER_REQUEST_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest; } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Net_Http_HttpMessageHandlerRequest;

struct List__Uno_Net_Http_HttpMessageHandlerRequest__uType : ::uClassType
{
};

List__Uno_Net_Http_HttpMessageHandlerRequest__uType* List__Uno_Net_Http_HttpMessageHandlerRequest__typeof();

void List__Uno_Net_Http_HttpMessageHandlerRequest___ObjInit(List__Uno_Net_Http_HttpMessageHandlerRequest* __this);
void List__Uno_Net_Http_HttpMessageHandlerRequest__Add(List__Uno_Net_Http_HttpMessageHandlerRequest* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* item);
void List__Uno_Net_Http_HttpMessageHandlerRequest__BoundsCheck(List__Uno_Net_Http_HttpMessageHandlerRequest* __this, int index);
void List__Uno_Net_Http_HttpMessageHandlerRequest__EnsureCapacity(List__Uno_Net_Http_HttpMessageHandlerRequest* __this);
int List__Uno_Net_Http_HttpMessageHandlerRequest__get_Count(List__Uno_Net_Http_HttpMessageHandlerRequest* __this);
::app::Uno::Net::Http::HttpMessageHandlerRequest* List__Uno_Net_Http_HttpMessageHandlerRequest__get_Item(List__Uno_Net_Http_HttpMessageHandlerRequest* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest List__Uno_Net_Http_HttpMessageHandlerRequest__GetEnumerator(List__Uno_Net_Http_HttpMessageHandlerRequest* __this);
List__Uno_Net_Http_HttpMessageHandlerRequest* List__Uno_Net_Http_HttpMessageHandlerRequest__New_1(::uStatic* __this);
void List__Uno_Net_Http_HttpMessageHandlerRequest__set_Item(List__Uno_Net_Http_HttpMessageHandlerRequest* __this, int index, ::app::Uno::Net::Http::HttpMessageHandlerRequest* value);

struct List__Uno_Net_Http_HttpMessageHandlerRequest : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    void _ObjInit() { List__Uno_Net_Http_HttpMessageHandlerRequest___ObjInit(this); }
    void Add(::app::Uno::Net::Http::HttpMessageHandlerRequest* item) { List__Uno_Net_Http_HttpMessageHandlerRequest__Add(this, item); }
    void BoundsCheck(int index) { List__Uno_Net_Http_HttpMessageHandlerRequest__BoundsCheck(this, index); }
    void EnsureCapacity() { List__Uno_Net_Http_HttpMessageHandlerRequest__EnsureCapacity(this); }
    int Count() { return List__Uno_Net_Http_HttpMessageHandlerRequest__get_Count(this); }
    ::app::Uno::Net::Http::HttpMessageHandlerRequest* Item(int index) { return List__Uno_Net_Http_HttpMessageHandlerRequest__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest GetEnumerator();
    void Item(int index, ::app::Uno::Net::Http::HttpMessageHandlerRequest* value) { List__Uno_Net_Http_HttpMessageHandlerRequest__set_Item(this, index, value); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest List__Uno_Net_Http_HttpMessageHandlerRequest::GetEnumerator() { return List__Uno_Net_Http_HttpMessageHandlerRequest__GetEnumerator(this); }

}}}


#endif
