// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\Implementation\Cil\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_IMPLEMENTATION_HTTP_MESSAGE_HANDLER_REQUEST_CALLBACKS_H__
#define __APP_UNO_NET_HTTP_IMPLEMENTATION_HTTP_MESSAGE_HANDLER_REQUEST_CALLBACKS_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }

namespace app {
namespace Uno {
namespace Net {
namespace Http {
namespace Implementation {

struct HttpMessageHandlerRequestCallbacks;

struct HttpMessageHandlerRequestCallbacks__uType : ::uClassType
{
};

HttpMessageHandlerRequestCallbacks__uType* HttpMessageHandlerRequestCallbacks__typeof();

void HttpMessageHandlerRequestCallbacks___ObjInit(HttpMessageHandlerRequestCallbacks* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request);
HttpMessageHandlerRequestCallbacks* HttpMessageHandlerRequestCallbacks__New_1(::uStatic* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request);
void HttpMessageHandlerRequestCallbacks__OnAborted(HttpMessageHandlerRequestCallbacks* __this);
void HttpMessageHandlerRequestCallbacks__OnDone(HttpMessageHandlerRequestCallbacks* __this);
void HttpMessageHandlerRequestCallbacks__OnError(HttpMessageHandlerRequestCallbacks* __this, ::uString* errorMessage);
void HttpMessageHandlerRequestCallbacks__OnHeadersReceived(HttpMessageHandlerRequestCallbacks* __this);
void HttpMessageHandlerRequestCallbacks__OnProgress(HttpMessageHandlerRequestCallbacks* __this, int current, int total, bool hasTotal);
void HttpMessageHandlerRequestCallbacks__OnTimeout(HttpMessageHandlerRequestCallbacks* __this);

struct HttpMessageHandlerRequestCallbacks : ::uObject
{
    ::uStrong< ::app::Uno::Net::Http::HttpMessageHandlerRequest*> _request;

    void _ObjInit(::app::Uno::Net::Http::HttpMessageHandlerRequest* request) { HttpMessageHandlerRequestCallbacks___ObjInit(this, request); }
    void OnAborted() { HttpMessageHandlerRequestCallbacks__OnAborted(this); }
    void OnDone() { HttpMessageHandlerRequestCallbacks__OnDone(this); }
    void OnError(::uString* errorMessage) { HttpMessageHandlerRequestCallbacks__OnError(this, errorMessage); }
    void OnHeadersReceived() { HttpMessageHandlerRequestCallbacks__OnHeadersReceived(this); }
    void OnProgress(int current, int total, bool hasTotal) { HttpMessageHandlerRequestCallbacks__OnProgress(this, current, total, hasTotal); }
    void OnTimeout() { HttpMessageHandlerRequestCallbacks__OnTimeout(this); }
};

}}}}}


#endif
