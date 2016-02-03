// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\Implementation\Android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_IMPLEMENTATION_ANDROID_HTTP_REQUEST_H__
#define __APP_UNO_NET_HTTP_IMPLEMENTATION_ANDROID_HTTP_REQUEST_H__

#include <app/Android.Base.Wrappers.IJWrapper.h>
#include <app/Android.com.fuse.ExperimentalHttp.HttpRequest.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Net.Http.Implementation.IHttpRequest.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__byte__; } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }

namespace app {
namespace Uno {
namespace Net {
namespace Http {
namespace Implementation {

struct AndroidHttpRequest;

struct AndroidHttpRequest__uType : ::app::Android::com::fuse::ExperimentalHttp::HttpRequest__uType
{
    ::app::Uno::Net::Http::Implementation::IHttpRequest __interface_2;
};

AndroidHttpRequest__uType* AndroidHttpRequest__typeof();

void AndroidHttpRequest___ObjInit_4(AndroidHttpRequest* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request, ::uString* method, ::uString* url);
void AndroidHttpRequest__Dispose_1(AndroidHttpRequest* __this);
void AndroidHttpRequest__EnableCache(AndroidHttpRequest* __this, bool enableCache);
::uArray* AndroidHttpRequest__GetResponseContentByteArray(AndroidHttpRequest* __this);
::uString* AndroidHttpRequest__GetResponseContentString(AndroidHttpRequest* __this);
::uString* AndroidHttpRequest__GetResponseHeader_1(AndroidHttpRequest* __this, ::uString* name);
::uString* AndroidHttpRequest__GetResponseHeaders_1(AndroidHttpRequest* __this);
AndroidHttpRequest* AndroidHttpRequest__New_3(::uStatic* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request, ::uString* method, ::uString* url);
void AndroidHttpRequest__OnAborted(AndroidHttpRequest* __this);
void AndroidHttpRequest__OnDataReceived(AndroidHttpRequest* __this, ::uObject* arg0, int arg1);
void AndroidHttpRequest__OnDone(AndroidHttpRequest* __this);
void AndroidHttpRequest__OnError(AndroidHttpRequest* __this, ::uObject* arg0);
void AndroidHttpRequest__OnHeadersReceived(AndroidHttpRequest* __this);
void AndroidHttpRequest__OnProgress(AndroidHttpRequest* __this, int current, int total, bool hasTotal);
void AndroidHttpRequest__OnTimeout(AndroidHttpRequest* __this);
void AndroidHttpRequest__SendAsync_1(AndroidHttpRequest* __this, ::uArray* data);
void AndroidHttpRequest__SendAsync_2(AndroidHttpRequest* __this, ::uString* data);
void AndroidHttpRequest__SetHeader_1(AndroidHttpRequest* __this, ::uString* name, ::uString* value);
void AndroidHttpRequest__SetResponseType_1(AndroidHttpRequest* __this, int responseType);

struct AndroidHttpRequest : ::app::Android::com::fuse::ExperimentalHttp::HttpRequest
{
    ::uStrong< ::app::Uno::Net::Http::HttpMessageHandlerRequest*> _request;
    ::uStrong< ::app::Uno::Collections::List__byte__*> _responseData;
    ::uStrong< ::uArray*> _result;
    int _responseLength;

    void _ObjInit_4(::app::Uno::Net::Http::HttpMessageHandlerRequest* request, ::uString* method, ::uString* url) { AndroidHttpRequest___ObjInit_4(this, request, method, url); }
    void Dispose_1() { AndroidHttpRequest__Dispose_1(this); }
    void EnableCache(bool enableCache) { AndroidHttpRequest__EnableCache(this, enableCache); }
    ::uArray* GetResponseContentByteArray() { return AndroidHttpRequest__GetResponseContentByteArray(this); }
    ::uString* GetResponseContentString() { return AndroidHttpRequest__GetResponseContentString(this); }
    ::uString* GetResponseHeader_1(::uString* name) { return AndroidHttpRequest__GetResponseHeader_1(this, name); }
    ::uString* GetResponseHeaders_1() { return AndroidHttpRequest__GetResponseHeaders_1(this); }
    void SendAsync_1(::uArray* data) { AndroidHttpRequest__SendAsync_1(this, data); }
    void SendAsync_2(::uString* data) { AndroidHttpRequest__SendAsync_2(this, data); }
    void SetHeader_1(::uString* name, ::uString* value) { AndroidHttpRequest__SetHeader_1(this, name, value); }
    void SetResponseType_1(int responseType) { AndroidHttpRequest__SetResponseType_1(this, responseType); }
};

}}}}}


#endif
