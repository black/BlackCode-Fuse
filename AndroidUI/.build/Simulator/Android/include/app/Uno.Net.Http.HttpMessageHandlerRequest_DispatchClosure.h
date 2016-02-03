// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_HTTP_MESSAGE_HANDLER_REQUEST_DISPATCH_CLOSURE_H__
#define __APP_UNO_NET_HTTP_HTTP_MESSAGE_HANDLER_REQUEST_DISPATCH_CLOSURE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct HttpMessageHandlerRequest_DispatchClosure;

struct HttpMessageHandlerRequest_DispatchClosure__uType : ::uClassType
{
};

HttpMessageHandlerRequest_DispatchClosure__uType* HttpMessageHandlerRequest_DispatchClosure__typeof();

void HttpMessageHandlerRequest_DispatchClosure___ObjInit(HttpMessageHandlerRequest_DispatchClosure* __this, int state, ::uDelegate* action, ::app::Uno::Net::Http::HttpMessageHandlerRequest* arg);
HttpMessageHandlerRequest_DispatchClosure* HttpMessageHandlerRequest_DispatchClosure__New_1(::uStatic* __this, int state, ::uDelegate* action, ::app::Uno::Net::Http::HttpMessageHandlerRequest* arg);
void HttpMessageHandlerRequest_DispatchClosure__Run(HttpMessageHandlerRequest_DispatchClosure* __this);

struct HttpMessageHandlerRequest_DispatchClosure : ::uObject
{
    ::uStrong< ::uDelegate*> _action;
    ::uStrong< ::app::Uno::Net::Http::HttpMessageHandlerRequest*> _arg;
    int _state;

    void _ObjInit(int state, ::uDelegate* action, ::app::Uno::Net::Http::HttpMessageHandlerRequest* arg) { HttpMessageHandlerRequest_DispatchClosure___ObjInit(this, state, action, arg); }
    void Run() { HttpMessageHandlerRequest_DispatchClosure__Run(this); }
};

}}}}


#endif
