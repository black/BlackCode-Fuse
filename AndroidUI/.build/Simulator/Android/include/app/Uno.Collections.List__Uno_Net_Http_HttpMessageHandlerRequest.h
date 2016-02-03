// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST__UNO_NET_HTTP_HTTP_MESSAGE_HANDLER_REQUEST_H__
#define __APP_UNO_COLLECTIONS_LIST__UNO_NET_HTTP_HTTP_MESSAGE_HANDLER_REQUEST_H__

#include <app/Uno.Collections.IEnumerable__Uno_Net_Http_HttpMessageHandlerRequest.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest; } } }
namespace app { namespace Uno { namespace Net { namespace Http { struct HttpMessageHandlerRequest; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct List__Uno_Net_Http_HttpMessageHandlerRequest;

struct List__Uno_Net_Http_HttpMessageHandlerRequest__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Uno_Net_Http_HttpMessageHandlerRequest __interface_0;
};

List__Uno_Net_Http_HttpMessageHandlerRequest__uType* List__Uno_Net_Http_HttpMessageHandlerRequest__typeof();

::uObject* List__Uno_Net_Http_HttpMessageHandlerRequest__GetEnumerator_boxed(List__Uno_Net_Http_HttpMessageHandlerRequest* __this);
void List__Uno_Net_Http_HttpMessageHandlerRequest___ObjInit(List__Uno_Net_Http_HttpMessageHandlerRequest* __this);
void List__Uno_Net_Http_HttpMessageHandlerRequest___ObjInit_1(List__Uno_Net_Http_HttpMessageHandlerRequest* __this, int capacity);
void List__Uno_Net_Http_HttpMessageHandlerRequest__Add(List__Uno_Net_Http_HttpMessageHandlerRequest* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* item);
void List__Uno_Net_Http_HttpMessageHandlerRequest__AddRange(List__Uno_Net_Http_HttpMessageHandlerRequest* __this, ::uObject* items);
void List__Uno_Net_Http_HttpMessageHandlerRequest__BoundsCheck(List__Uno_Net_Http_HttpMessageHandlerRequest* __this, int index);
void List__Uno_Net_Http_HttpMessageHandlerRequest__Clear(List__Uno_Net_Http_HttpMessageHandlerRequest* __this);
bool List__Uno_Net_Http_HttpMessageHandlerRequest__Contains(List__Uno_Net_Http_HttpMessageHandlerRequest* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* item);
void List__Uno_Net_Http_HttpMessageHandlerRequest__EnsureCapacity(List__Uno_Net_Http_HttpMessageHandlerRequest* __this);
int List__Uno_Net_Http_HttpMessageHandlerRequest__get_Count(List__Uno_Net_Http_HttpMessageHandlerRequest* __this);
::app::Uno::Net::Http::HttpMessageHandlerRequest* List__Uno_Net_Http_HttpMessageHandlerRequest__get_Item(List__Uno_Net_Http_HttpMessageHandlerRequest* __this, int index);
::app::Uno::Collections::List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest List__Uno_Net_Http_HttpMessageHandlerRequest__GetEnumerator(List__Uno_Net_Http_HttpMessageHandlerRequest* __this);
int List__Uno_Net_Http_HttpMessageHandlerRequest__IndexOf(List__Uno_Net_Http_HttpMessageHandlerRequest* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* item);
void List__Uno_Net_Http_HttpMessageHandlerRequest__Insert(List__Uno_Net_Http_HttpMessageHandlerRequest* __this, int index, ::app::Uno::Net::Http::HttpMessageHandlerRequest* item);
List__Uno_Net_Http_HttpMessageHandlerRequest* List__Uno_Net_Http_HttpMessageHandlerRequest__New_1(::uStatic* __this);
List__Uno_Net_Http_HttpMessageHandlerRequest* List__Uno_Net_Http_HttpMessageHandlerRequest__New_2(::uStatic* __this, int capacity);
bool List__Uno_Net_Http_HttpMessageHandlerRequest__Remove(List__Uno_Net_Http_HttpMessageHandlerRequest* __this, ::app::Uno::Net::Http::HttpMessageHandlerRequest* item);
void List__Uno_Net_Http_HttpMessageHandlerRequest__RemoveAt(List__Uno_Net_Http_HttpMessageHandlerRequest* __this, int index);
void List__Uno_Net_Http_HttpMessageHandlerRequest__set_Item(List__Uno_Net_Http_HttpMessageHandlerRequest* __this, int index, ::app::Uno::Net::Http::HttpMessageHandlerRequest* value);
void List__Uno_Net_Http_HttpMessageHandlerRequest__Sort(List__Uno_Net_Http_HttpMessageHandlerRequest* __this, ::uDelegate* comparer);
::uArray* List__Uno_Net_Http_HttpMessageHandlerRequest__ToArray(List__Uno_Net_Http_HttpMessageHandlerRequest* __this);

struct List__Uno_Net_Http_HttpMessageHandlerRequest : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _used;
    int _version;

    ::uObject* GetEnumerator_boxed() { return List__Uno_Net_Http_HttpMessageHandlerRequest__GetEnumerator_boxed(this); }
    void _ObjInit() { List__Uno_Net_Http_HttpMessageHandlerRequest___ObjInit(this); }
    void _ObjInit_1(int capacity) { List__Uno_Net_Http_HttpMessageHandlerRequest___ObjInit_1(this, capacity); }
    void Add(::app::Uno::Net::Http::HttpMessageHandlerRequest* item) { List__Uno_Net_Http_HttpMessageHandlerRequest__Add(this, item); }
    void AddRange(::uObject* items) { List__Uno_Net_Http_HttpMessageHandlerRequest__AddRange(this, items); }
    void BoundsCheck(int index) { List__Uno_Net_Http_HttpMessageHandlerRequest__BoundsCheck(this, index); }
    void Clear() { List__Uno_Net_Http_HttpMessageHandlerRequest__Clear(this); }
    bool Contains(::app::Uno::Net::Http::HttpMessageHandlerRequest* item) { return List__Uno_Net_Http_HttpMessageHandlerRequest__Contains(this, item); }
    void EnsureCapacity() { List__Uno_Net_Http_HttpMessageHandlerRequest__EnsureCapacity(this); }
    int Count() { return List__Uno_Net_Http_HttpMessageHandlerRequest__get_Count(this); }
    ::app::Uno::Net::Http::HttpMessageHandlerRequest* Item(int index) { return List__Uno_Net_Http_HttpMessageHandlerRequest__get_Item(this, index); }
    ::app::Uno::Collections::List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest GetEnumerator();
    int IndexOf(::app::Uno::Net::Http::HttpMessageHandlerRequest* item) { return List__Uno_Net_Http_HttpMessageHandlerRequest__IndexOf(this, item); }
    void Insert(int index, ::app::Uno::Net::Http::HttpMessageHandlerRequest* item) { List__Uno_Net_Http_HttpMessageHandlerRequest__Insert(this, index, item); }
    bool Remove(::app::Uno::Net::Http::HttpMessageHandlerRequest* item) { return List__Uno_Net_Http_HttpMessageHandlerRequest__Remove(this, item); }
    void RemoveAt(int index) { List__Uno_Net_Http_HttpMessageHandlerRequest__RemoveAt(this, index); }
    void Item(int index, ::app::Uno::Net::Http::HttpMessageHandlerRequest* value) { List__Uno_Net_Http_HttpMessageHandlerRequest__set_Item(this, index, value); }
    void Sort(::uDelegate* comparer) { List__Uno_Net_Http_HttpMessageHandlerRequest__Sort(this, comparer); }
    ::uArray* ToArray() { return List__Uno_Net_Http_HttpMessageHandlerRequest__ToArray(this); }
};

}}}

#include <app/Uno.Collections.List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::List1_Enumerator__Uno_Net_Http_HttpMessageHandlerRequest List__Uno_Net_Http_HttpMessageHandlerRequest::GetEnumerator() { return List__Uno_Net_Http_HttpMessageHandlerRequest__GetEnumerator(this); }

}}}


#endif
