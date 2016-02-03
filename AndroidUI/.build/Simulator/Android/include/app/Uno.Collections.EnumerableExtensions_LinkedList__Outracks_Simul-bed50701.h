// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__OUTRACKS_SIMUL_BED50701_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__OUTRACKS_SIMUL_BED50701_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Parameter; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter;

struct EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter__uType : ::uClassType
{
};

EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter__uType* EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter__typeof();

void EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter___ObjInit(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter* __this, ::app::Outracks::Simulator::Bytecode::Parameter* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter* next);
EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter* EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Parameter* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter* next);

struct EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter : ::uObject
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Parameter*> Item;
    ::uStrong< EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter*> Next;

    void _ObjInit(::app::Outracks::Simulator::Bytecode::Parameter* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter* next) { EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Parameter___ObjInit(this, item, next); }
};

}}}


#endif
