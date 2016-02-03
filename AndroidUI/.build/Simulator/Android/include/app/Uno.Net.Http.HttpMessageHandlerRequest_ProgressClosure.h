// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_HTTP_MESSAGE_HANDLER_REQUEST_PROGRESS_CLOSURE_H__
#define __APP_UNO_NET_HTTP_HTTP_MESSAGE_HANDLER_REQUEST_PROGRESS_CLOSURE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct HttpMessageHandlerRequest_ProgressClosure;

struct HttpMessageHandlerRequest_ProgressClosure__uType : ::uClassType
{
};

HttpMessageHandlerRequest_ProgressClosure__uType* HttpMessageHandlerRequest_ProgressClosure__typeof();

void HttpMessageHandlerRequest_ProgressClosure___ObjInit(HttpMessageHandlerRequest_ProgressClosure* __this, int state, ::uDelegate* action, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request, int current, int total, bool hasTotal);
HttpMessageHandlerRequest_ProgressClosure* HttpMessageHandlerRequest_ProgressClosure__New_1(::uStatic* __this, int state, ::uDelegate* action, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request, int current, int total, bool hasTotal);
void HttpMessageHandlerRequest_ProgressClosure__Run(HttpMessageHandlerRequest_ProgressClosure* __this);

struct HttpMessageHandlerRequest_ProgressClosure : ::uObject
{
    ::uStrong< ::uDelegate*> _action;
    ::uStrong< ::app::Uno::Net::Http::HttpMessageHandlerRequest*> _request;
    int _current;
    int _total;
    bool _hasTotal;
    int _state;

    void _ObjInit(int state, ::uDelegate* action, ::app::Uno::Net::Http::HttpMessageHandlerRequest* request, int current, int total, bool hasTotal) { HttpMessageHandlerRequest_ProgressClosure___ObjInit(this, state, action, request, current, total, hasTotal); }
    void Run() { HttpMessageHandlerRequest_ProgressClosure__Run(this); }
};

}}}}


#endif
