#include <app/Uno.Action__Uno_Net_Http_HttpMessageHandlerRequest__string.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <app/Uno.Net.Http.HttpMessageHandlerRequest_DispatchClosure__string.h>
#include <app/Uno.Net.Http.HttpRequestState.h>
#include <app/Uno.Net.Http.InvalidStateException.h>
#include <app/Uno.String.h>

namespace app {
namespace Uno {
namespace Net {
namespace Http {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

HttpMessageHandlerRequest_DispatchClosure__string__uType* HttpMessageHandlerRequest_DispatchClosure__string__typeof()
{
    static ::uStaticStrong<HttpMessageHandlerRequest_DispatchClosure__string__uType*> type;
    if (type != NULL) return type;

    type = (HttpMessageHandlerRequest_DispatchClosure__string__uType*)::uAllocClassType(sizeof(HttpMessageHandlerRequest_DispatchClosure__string__uType), "Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure<string>", false, 0, 3, 0);

    type->SetStrongRefs(
        "_action", offsetof(HttpMessageHandlerRequest_DispatchClosure__string, _action),
        "_arg0", offsetof(HttpMessageHandlerRequest_DispatchClosure__string, _arg0),
        "_arg1", offsetof(HttpMessageHandlerRequest_DispatchClosure__string, _arg1));

    return type;
}

void HttpMessageHandlerRequest_DispatchClosure__string___ObjInit(HttpMessageHandlerRequest_DispatchClosure__string* __this, int state, ::uDelegate* action, ::app::Uno::Net::Http::HttpMessageHandlerRequest* arg0, ::uString* arg1)
{
    __this->_action = action;
    __this->_arg0 = arg0;
    __this->_arg1 = arg1;
    __this->_state = state;
}

HttpMessageHandlerRequest_DispatchClosure__string* HttpMessageHandlerRequest_DispatchClosure__string__New_1(::uStatic* __this, int state, ::uDelegate* action, ::app::Uno::Net::Http::HttpMessageHandlerRequest* arg0, ::uString* arg1)
{
    HttpMessageHandlerRequest_DispatchClosure__string* inst = (HttpMessageHandlerRequest_DispatchClosure__string*)::uAllocObject(sizeof(HttpMessageHandlerRequest_DispatchClosure__string), HttpMessageHandlerRequest_DispatchClosure__string__typeof());
    inst->_ObjInit(state, action, arg0, arg1);
    return inst;
}

void HttpMessageHandlerRequest_DispatchClosure__string__Run(HttpMessageHandlerRequest_DispatchClosure__string* __this)
{
    if (::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_arg0)->IsComplete())
    {
        U_THROW(::app::Uno::Net::Http::InvalidStateException__New_4(NULL, ::uGetConstString("Invalid state: The request has already completed.")));
    }

    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_arg0)->State(__this->_state);
    ::uPtr< ::uDelegate*>(__this->_action)->InvokeVoid< ::app::Uno::Net::Http::HttpMessageHandlerRequest*, ::uString*>(__this->_arg0, __this->_arg1);
    ::uPtr< ::app::Uno::Net::Http::HttpMessageHandlerRequest*>(__this->_arg0)->CompleteRequest();
}

}}}}
