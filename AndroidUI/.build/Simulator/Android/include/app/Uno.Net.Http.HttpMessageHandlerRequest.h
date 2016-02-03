// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
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
void HttpMessageHandlerRequest__Abort(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__add_Aborted(HttpMessageHandlerRequest* __this, ::uDelegate* value);
void HttpMessageHandlerRequest__add_Done(HttpMessageHandlerRequest* __this, ::uDelegate* value);
void HttpMessageHandlerRequest__add_Error(HttpMessageHandlerRequest* __this, ::uDelegate* value);
void HttpMessageHandlerRequest__add_Progress(HttpMessageHandlerRequest* __this, ::uDelegate* value);
void HttpMessageHandlerRequest__add_StateChanged(HttpMessageHandlerRequest* __this, ::uDelegate* value);
void HttpMessageHandlerRequest__add_Timeout(HttpMessageHandlerRequest* __this, ::uDelegate* value);
void HttpMessageHandlerRequest__CheckDisposed(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__CompleteRequest(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__Dispose(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__EnableCache(HttpMessageHandlerRequest* __this, bool enableCache);
void HttpMessageHandlerRequest__FireSetHeadersReceived(HttpMessageHandlerRequest* __this);
int HttpMessageHandlerRequest__get_HttpResponseType(HttpMessageHandlerRequest* __this);
::uString* HttpMessageHandlerRequest__get_Method(HttpMessageHandlerRequest* __this);
int HttpMessageHandlerRequest__get_State(HttpMessageHandlerRequest* __this);
::uString* HttpMessageHandlerRequest__get_Url(HttpMessageHandlerRequest* __this);
::uArray* HttpMessageHandlerRequest__GetResponseContentByteArray(HttpMessageHandlerRequest* __this);
::uString* HttpMessageHandlerRequest__GetResponseContentString(HttpMessageHandlerRequest* __this);
::uString* HttpMessageHandlerRequest__GetResponseHeader(HttpMessageHandlerRequest* __this, ::uString* name);
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
void HttpMessageHandlerRequest__remove_Aborted(HttpMessageHandlerRequest* __this, ::uDelegate* value);
void HttpMessageHandlerRequest__remove_Done(HttpMessageHandlerRequest* __this, ::uDelegate* value);
void HttpMessageHandlerRequest__remove_Error(HttpMessageHandlerRequest* __this, ::uDelegate* value);
void HttpMessageHandlerRequest__remove_Progress(HttpMessageHandlerRequest* __this, ::uDelegate* value);
void HttpMessageHandlerRequest__remove_StateChanged(HttpMessageHandlerRequest* __this, ::uDelegate* value);
void HttpMessageHandlerRequest__remove_Timeout(HttpMessageHandlerRequest* __this, ::uDelegate* value);
void HttpMessageHandlerRequest__SendAsync(HttpMessageHandlerRequest* __this);
void HttpMessageHandlerRequest__SendAsync_1(HttpMessageHandlerRequest* __this, ::uArray* data);
void HttpMessageHandlerRequest__SendAsync_2(HttpMessageHandlerRequest* __this, ::uString* data);
void HttpMessageHandlerRequest__set_HttpResponseType(HttpMessageHandlerRequest* __this, int value);
void HttpMessageHandlerRequest__set_State(HttpMessageHandlerRequest* __this, int value);
void HttpMessageHandlerRequest__SetHeader(HttpMessageHandlerRequest* __this, ::uString* name, ::uString* value);
void HttpMessageHandlerRequest__SetResponseType(HttpMessageHandlerRequest* __this, int responseType);
void HttpMessageHandlerRequest__SetTimeout(HttpMessageHandlerRequest* __this, int timeoutInMilliseconds);

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
    void Abort() { HttpMessageHandlerRequest__Abort(this); }
    void add_Aborted(::uDelegate* value) { HttpMessageHandlerRequest__add_Aborted(this, value); }
    void add_Done(::uDelegate* value) { HttpMessageHandlerRequest__add_Done(this, value); }
    void add_Error(::uDelegate* value) { HttpMessageHandlerRequest__add_Error(this, value); }
    void add_Progress(::uDelegate* value) { HttpMessageHandlerRequest__add_Progress(this, value); }
    void add_StateChanged(::uDelegate* value) { HttpMessageHandlerRequest__add_StateChanged(this, value); }
    void add_Timeout(::uDelegate* value) { HttpMessageHandlerRequest__add_Timeout(this, value); }
    void CheckDisposed() { HttpMessageHandlerRequest__CheckDisposed(this); }
    void CompleteRequest() { HttpMessageHandlerRequest__CompleteRequest(this); }
    void Dispose() { HttpMessageHandlerRequest__Dispose(this); }
    void EnableCache(bool enableCache) { HttpMessageHandlerRequest__EnableCache(this, enableCache); }
    void FireSetHeadersReceived() { HttpMessageHandlerRequest__FireSetHeadersReceived(this); }
    int HttpResponseType() { return HttpMessageHandlerRequest__get_HttpResponseType(this); }
    ::uString* Method() { return HttpMessageHandlerRequest__get_Method(this); }
    int State() { return HttpMessageHandlerRequest__get_State(this); }
    ::uString* Url() { return HttpMessageHandlerRequest__get_Url(this); }
    ::uArray* GetResponseContentByteArray() { return HttpMessageHandlerRequest__GetResponseContentByteArray(this); }
    ::uString* GetResponseContentString() { return HttpMessageHandlerRequest__GetResponseContentString(this); }
    ::uString* GetResponseHeader(::uString* name) { return HttpMessageHandlerRequest__GetResponseHeader(this, name); }
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
    void remove_Aborted(::uDelegate* value) { HttpMessageHandlerRequest__remove_Aborted(this, value); }
    void remove_Done(::uDelegate* value) { HttpMessageHandlerRequest__remove_Done(this, value); }
    void remove_Error(::uDelegate* value) { HttpMessageHandlerRequest__remove_Error(this, value); }
    void remove_Progress(::uDelegate* value) { HttpMessageHandlerRequest__remove_Progress(this, value); }
    void remove_StateChanged(::uDelegate* value) { HttpMessageHandlerRequest__remove_StateChanged(this, value); }
    void remove_Timeout(::uDelegate* value) { HttpMessageHandlerRequest__remove_Timeout(this, value); }
    void SendAsync() { HttpMessageHandlerRequest__SendAsync(this); }
    void SendAsync_1(::uArray* data) { HttpMessageHandlerRequest__SendAsync_1(this, data); }
    void SendAsync_2(::uString* data) { HttpMessageHandlerRequest__SendAsync_2(this, data); }
    void HttpResponseType(int value) { HttpMessageHandlerRequest__set_HttpResponseType(this, value); }
    void State(int value) { HttpMessageHandlerRequest__set_State(this, value); }
    void SetHeader(::uString* name, ::uString* value) { HttpMessageHandlerRequest__SetHeader(this, name, value); }
    void SetResponseType(int responseType) { HttpMessageHandlerRequest__SetResponseType(this, responseType); }
    void SetTimeout(int timeoutInMilliseconds) { HttpMessageHandlerRequest__SetTimeout(this, timeoutInMilliseconds); }
};

}}}}


#endif
