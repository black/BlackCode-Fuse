// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_HTTP_MESSAGE_HANDLER_STATIC_DATA_H__
#define __APP_UNO_NET_HTTP_HTTP_MESSAGE_HANDLER_STATIC_DATA_H__

#include <Uno.h>
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Uno {
namespace Net {
namespace Http {

struct HttpMessageHandler_StaticData__uType : ::uClassType
{
};

HttpMessageHandler_StaticData__uType* HttpMessageHandler_StaticData__typeof();

void HttpMessageHandler_StaticData__DecrementPendingRequests(::uStatic* __this);
void HttpMessageHandler_StaticData__IncrementPendingRequests(::uStatic* __this);
void HttpMessageHandler_StaticData__ProcessEvents(::uStatic* __this, ::uObject* sender, ::app::Uno::EventArgs* args);

}}}}


#endif
