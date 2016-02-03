// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__OUTRACKS_SIMUL_4C6E2F08_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__OUTRACKS_SIMUL_4C6E2F08_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct ExceptionInfo; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo;

struct EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo__uType : ::uClassType
{
};

EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo__uType* EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo__typeof();

void EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo___ObjInit(EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo* __this, ::app::Outracks::Simulator::Protocol::ExceptionInfo* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo* next);
EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo* EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo__New_1(::uStatic* __this, ::app::Outracks::Simulator::Protocol::ExceptionInfo* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo* next);

struct EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo : ::uObject
{
    ::uStrong< ::app::Outracks::Simulator::Protocol::ExceptionInfo*> Item;
    ::uStrong< EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo*> Next;

    void _ObjInit(::app::Outracks::Simulator::Protocol::ExceptionInfo* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo* next) { EnumerableExtensions_LinkedList__Outracks_Simulator_Protocol_ExceptionInfo___ObjInit(this, item, next); }
};

}}}


#endif
