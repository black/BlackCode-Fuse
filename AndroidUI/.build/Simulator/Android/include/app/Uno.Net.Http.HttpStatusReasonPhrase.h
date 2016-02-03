// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Net.Http\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_NET_HTTP_HTTP_STATUS_REASON_PHRASE_H__
#define __APP_UNO_NET_HTTP_HTTP_STATUS_REASON_PHRASE_H__

#include <Uno.h>

namespace app {
namespace Uno {
namespace Net {
namespace Http {

extern ::uStaticStrong< ::uObject*> HttpStatusReasonPhrase__ClientErrors;
extern ::uStaticStrong< ::uObject*> HttpStatusReasonPhrase__Informational;
extern ::uStaticStrong< ::uObject*> HttpStatusReasonPhrase__Redirection;
extern ::uStaticStrong< ::uObject*> HttpStatusReasonPhrase__ServerErrors;
extern ::uStaticStrong< ::uObject*> HttpStatusReasonPhrase__Success;

struct HttpStatusReasonPhrase__uType : ::uClassType
{
};

HttpStatusReasonPhrase__uType* HttpStatusReasonPhrase__typeof();

void HttpStatusReasonPhrase___TypeInit(::uStatic* __this);
::uString* HttpStatusReasonPhrase__GetFromStatusCode(::uStatic* __this, int statusCode);

}}}}


#endif
