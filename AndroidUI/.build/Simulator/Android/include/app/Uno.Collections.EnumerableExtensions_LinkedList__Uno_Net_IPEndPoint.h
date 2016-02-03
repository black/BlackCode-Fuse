// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__UNO_NET_I_P_END_POINT_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__UNO_NET_I_P_END_POINT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Net { struct IPEndPoint; } } }

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint;

struct EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint__uType : ::uClassType
{
};

EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint__uType* EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint__typeof();

void EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint___ObjInit(EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint* __this, ::app::Uno::Net::IPEndPoint* item, EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint* next);
EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint* EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint__New_1(::uStatic* __this, ::app::Uno::Net::IPEndPoint* item, EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint* next);

struct EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint : ::uObject
{
    ::uStrong< ::app::Uno::Net::IPEndPoint*> Item;
    ::uStrong< EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint*> Next;

    void _ObjInit(::app::Uno::Net::IPEndPoint* item, EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint* next) { EnumerableExtensions_LinkedList__Uno_Net_IPEndPoint___ObjInit(this, item, next); }
};

}}}


#endif
