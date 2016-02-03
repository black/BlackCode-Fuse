// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__OUTRACKS_SIMUL_5223F174_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__OUTRACKS_SIMUL_5223F174_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Expression; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression;

struct EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression__uType : ::uClassType
{
};

EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression__uType* EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression__typeof();

void EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression___ObjInit(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression* __this, ::app::Outracks::Simulator::Bytecode::Expression* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression* next);
EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression* EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression* next);

struct EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression : ::uObject
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Expression*> Item;
    ::uStrong< EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression*> Next;

    void _ObjInit(::app::Outracks::Simulator::Bytecode::Expression* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression* next) { EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_Expression___ObjInit(this, item, next); }
};

}}}


#endif
