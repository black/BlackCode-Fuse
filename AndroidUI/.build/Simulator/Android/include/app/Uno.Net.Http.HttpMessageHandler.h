// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_HTTP_MESSAGE_HANDLER_H__
#define __APP_UNO_NET_HTTP_HTTP_MESSAGE_HANDLER_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Net_Http_HttpMessageHandlerRequest; } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct HttpMessageHandler;

struct HttpMessageHandler__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
};

HttpMessageHandler__uType* HttpMessageHandler__typeof();

void HttpMessageHandler___ObjInit(HttpMessageHandler* __this);
void HttpMessageHandler__AbortPendingRequests(HttpMessageHandler* __this);
void HttpMessageHandler__CompleteRequest(HttpMessageHandler* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request);
::app::Uno::Net::Http::HttpMessageHandlerRequest* HttpMessageHandler__CreateRequest(HttpMessageHandler* __this, ::uString* method, ::uString* url);
::app::Uno::Net::Http::HttpMessageHandlerRequest* HttpMessageHandler__CreateRequest_1(HttpMessageHandler* __this, ::uString* method, ::uString* url, ::uObject* dispatcher);
void HttpMessageHandler__Dispose(HttpMessageHandler* __this);
HttpMessageHandler* HttpMessageHandler__New_1(::uStatic* __this);

struct HttpMessageHandler : ::uObject
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*> _pendingRequests;
    ::uStrong< ::uObject*> _defaultDispatcher;

    void _ObjInit() { HttpMessageHandler___ObjInit(this); }
    void AbortPendingRequests() { HttpMessageHandler__AbortPendingRequests(this); }
    void CompleteRequest(::app::Uno::Net::Http::HttpMessageHandlerRequest* request) { HttpMessageHandler__CompleteRequest(this, request); }
    ::app::Uno::Net::Http::HttpMessageHandlerRequest* CreateRequest(::uString* method, ::uString* url) { return HttpMessageHandler__CreateRequest(this, method, url); }
    ::app::Uno::Net::Http::HttpMessageHandlerRequest* CreateRequest_1(::uString* method, ::uString* url, ::uObject* dispatcher) { return HttpMessageHandler__CreateRequest_1(this, method, url, dispatcher); }
    void Dispose() { HttpMessageHandler__Dispose(this); }
};

}}}}


#endif
