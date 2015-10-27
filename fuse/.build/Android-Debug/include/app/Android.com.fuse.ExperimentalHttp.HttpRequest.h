// This file was generated based on '/usr/local/share/uno/Packages/Uno.Net.Http/0.12.0/Implementation/Android/ExperimentalHttp/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_ANDROID_COM_FUSE_EXPERIMENTAL_HTTP_HTTP_REQUEST_H__
#define __APP_ANDROID_COM_FUSE_EXPERIMENTAL_HTTP_HTTP_REQUEST_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.Base.Wrappers.JWrapper.h>
#include <app/Uno.IDisposable.h>
#include <jni.h>
#include <Uno.h>

namespace app {
namespace Android {
namespace com {
namespace fuse {
namespace ExperimentalHttp {

struct HttpRequest;

extern jclass HttpRequest___javaClass_1;
extern jclass HttpRequest___javaProxyClass_1;
extern jmethodID HttpRequest__GetResponseHeaders_44308_ID;
extern jmethodID HttpRequest__GetResponseStatus_44306_ID;
extern jmethodID HttpRequest__GetResponseString_44297_ID;
extern jmethodID HttpRequest__HttpRequest_44284_ID_c;
extern jmethodID HttpRequest__HttpRequest_44284_ID_c_prox;
extern jmethodID HttpRequest__InstallCache_44279_ID;
extern jmethodID HttpRequest__SendAsync_44299_ID;
extern jmethodID HttpRequest__SendAsyncStr_44301_ID;
extern jmethodID HttpRequest__SetHeader_44293_ID;
extern jmethodID HttpRequest__SetResponseType_44292_ID;

struct HttpRequest__uType : ::app::Android::Base::Wrappers::JWrapper__uType
{
    void(*__fp_OnAborted)(HttpRequest*);
    void(*__fp_OnDataReceived)(HttpRequest*, ::uObject*, int);
    void(*__fp_OnDone)(HttpRequest*);
    void(*__fp_OnError)(HttpRequest*, ::uObject*);
    void(*__fp_OnHeadersReceived)(HttpRequest*);
    void(*__fp_OnProgress)(HttpRequest*, int, int, bool);
    void(*__fp_OnTimeout)(HttpRequest*);
};

HttpRequest__uType* HttpRequest__typeof();

void HttpRequest___Init_1(::uStatic* __this);
void HttpRequest___InitProxy_1(::uStatic* __this);
bool HttpRequest___IsThisType_1(::uStatic* __this, ::uObject* obj_);
void HttpRequest___ObjInit_3(HttpRequest* __this, ::uObject* arg0, ::uObject* arg1, ::uObject* arg2);
::uObject* HttpRequest__GetResponseHeaders(HttpRequest* __this);
::uObject* HttpRequest__GetResponseHeaders_IMPL_44308(::uStatic* __this, bool arg0_, jobject arg1_);
int HttpRequest__GetResponseStatus(HttpRequest* __this);
int HttpRequest__GetResponseStatus_IMPL_44306(::uStatic* __this, bool arg0_, jobject arg1_);
::uObject* HttpRequest__GetResponseString(HttpRequest* __this);
::uObject* HttpRequest__GetResponseString_IMPL_44297(::uStatic* __this, bool arg0_, jobject arg1_);
jobject HttpRequest__HttpRequest_IMPL_44284(::uStatic* __this, ::uObject* arg0_, ::uObject* arg1_, ::uObject* arg2_, ::uObject* arg3_);
bool HttpRequest__InstallCache(::uStatic* __this, ::uObject* arg0, ::uLong arg1);
bool HttpRequest__InstallCache_IMPL_44279(::uStatic* __this, ::uObject* arg0_, ::uLong arg1_);
void HttpRequest__SendAsync(HttpRequest* __this);
void HttpRequest__SendAsync_IMPL_44299(::uStatic* __this, bool arg0_, jobject arg1_);
void HttpRequest__SendAsyncStr(HttpRequest* __this, ::uObject* arg0);
void HttpRequest__SendAsyncStr_IMPL_44301(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_);
void HttpRequest__SetHeader(HttpRequest* __this, ::uObject* arg0, ::uObject* arg1);
void HttpRequest__SetHeader_IMPL_44293(::uStatic* __this, bool arg0_, jobject arg1_, ::uObject* arg2_, ::uObject* arg3_);
void HttpRequest__SetResponseType(HttpRequest* __this, int arg0);
void HttpRequest__SetResponseType_IMPL_44292(::uStatic* __this, bool arg0_, jobject arg1_, int arg2_);

struct HttpRequest : ::app::Android::Base::Wrappers::JWrapper
{
    void _ObjInit_3(::uObject* arg0, ::uObject* arg1, ::uObject* arg2) { HttpRequest___ObjInit_3(this, arg0, arg1, arg2); }
    ::uObject* GetResponseHeaders() { return HttpRequest__GetResponseHeaders(this); }
    int GetResponseStatus() { return HttpRequest__GetResponseStatus(this); }
    ::uObject* GetResponseString() { return HttpRequest__GetResponseString(this); }
    void OnAborted() { (((HttpRequest__uType*)this->__obj_type)->__fp_OnAborted)(this); }
    void OnDataReceived(::uObject* arg0, int arg1) { (((HttpRequest__uType*)this->__obj_type)->__fp_OnDataReceived)(this, arg0, arg1); }
    void OnDone() { (((HttpRequest__uType*)this->__obj_type)->__fp_OnDone)(this); }
    void OnError(::uObject* arg0) { (((HttpRequest__uType*)this->__obj_type)->__fp_OnError)(this, arg0); }
    void OnHeadersReceived() { (((HttpRequest__uType*)this->__obj_type)->__fp_OnHeadersReceived)(this); }
    void OnProgress(int arg0, int arg1, bool arg2) { (((HttpRequest__uType*)this->__obj_type)->__fp_OnProgress)(this, arg0, arg1, arg2); }
    void OnTimeout() { (((HttpRequest__uType*)this->__obj_type)->__fp_OnTimeout)(this); }
    void SendAsync() { HttpRequest__SendAsync(this); }
    void SendAsyncStr(::uObject* arg0) { HttpRequest__SendAsyncStr(this, arg0); }
    void SetHeader(::uObject* arg0, ::uObject* arg1) { HttpRequest__SetHeader(this, arg0, arg1); }
    void SetResponseType(int arg0) { HttpRequest__SetResponseType(this, arg0); }
};

}}}}}


#endif
