// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_HTTP_MESSAGE_HANDLER_REQUEST_DISPATCH_CLOSURE__STRING_H__
#define __APP_UNO_NET_HTTP_HTTP_MESSAGE_HANDLER_REQUEST_DISPATCH_CLOSURE__STRING_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct HttpMessageHandlerRequest_DispatchClosure__string;

struct HttpMessageHandlerRequest_DispatchClosure__string__uType : ::uClassType
{
};

HttpMessageHandlerRequest_DispatchClosure__string__uType* HttpMessageHandlerRequest_DispatchClosure__string__typeof();

void HttpMessageHandlerRequest_DispatchClosure__string___ObjInit(HttpMessageHandlerRequest_DispatchClosure__string* __this, int state, ::uDelegate* action, ::app::Uno::Net::Http::HttpMessageHandlerRequest* arg0, ::uString* arg1);
HttpMessageHandlerRequest_DispatchClosure__string* HttpMessageHandlerRequest_DispatchClosure__string__New_1(::uStatic* __this, int state, ::uDelegate* action, ::app::Uno::Net::Http::HttpMessageHandlerRequest* arg0, ::uString* arg1);
void HttpMessageHandlerRequest_DispatchClosure__string__Run(HttpMessageHandlerRequest_DispatchClosure__string* __this);

struct HttpMessageHandlerRequest_DispatchClosure__string : ::uObject
{
    ::uStrong< ::uDelegate*> _action;
    ::uStrong< ::app::Uno::Net::Http::HttpMessageHandlerRequest*> _arg0;
    ::uStrong< ::uString*> _arg1;
    int _state;

    void _ObjInit(int state, ::uDelegate* action, ::app::Uno::Net::Http::HttpMessageHandlerRequest* arg0, ::uString* arg1) { HttpMessageHandlerRequest_DispatchClosure__string___ObjInit(this, state, action, arg0, arg1); }
    void Run() { HttpMessageHandlerRequest_DispatchClosure__string__Run(this); }
};

}}}}


#endif
