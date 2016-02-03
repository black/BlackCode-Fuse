// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_NET_HTTP_HTTP_MESSAGE_HANDLER_REQUEST_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__UNO_NET_HTTP_HTTP_MESSAGE_HANDLER_REQUEST_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Uno_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List__Uno_Net_Http_HttpMessageHandlerRequest; } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest;

struct List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Uno_Net_Http_HttpMessageHandlerRequest __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__uType* List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__typeof();

void List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest___ObjInit(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest* __this, ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest* source);
void List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__Dispose(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest* __this);
::app::Uno::Net::Http::HttpMessageHandlerRequest* List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__get_Current(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest* __this);
bool List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__MoveNext(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest* __this);
List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__New_1(::uStatic* __this, ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest* source);
void List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__Uno_Collections_IEnumerator_Reset(List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest* __this);

struct List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest
{
    ::uStrong< ::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Uno::Net::Http::HttpMessageHandlerRequest*> _current;

    void _ObjInit(::app::Uno::Collections::List__Uno_Net_Http_HttpMessageHandlerRequest* source) { List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest___ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__Dispose(this); }
    ::app::Uno::Net::Http::HttpMessageHandlerRequest* Current() { return List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest__MoveNext(this); }
};

}}}


#endif
