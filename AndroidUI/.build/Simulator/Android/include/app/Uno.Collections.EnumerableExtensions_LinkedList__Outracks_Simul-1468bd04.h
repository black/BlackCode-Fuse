// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__OUTRACKS_SIMUL_1468BD04_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__OUTRACKS_SIMUL_1468BD04_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Statement; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement;

struct EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement__uType : ::uClassType
{
};

EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement__uType* EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement__typeof();

void EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement___ObjInit(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement* __this, ::app::Outracks::Simulator::Bytecode::Statement* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement* next);
EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement* EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Statement* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement* next);

struct EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement : ::uObject
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Statement*> Item;
    ::uStrong< EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement*> Next;

    void _ObjInit(::app::Outracks::Simulator::Bytecode::Statement* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement* next) { EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Statement___ObjInit(this, item, next); }
};

}}}


#endif
