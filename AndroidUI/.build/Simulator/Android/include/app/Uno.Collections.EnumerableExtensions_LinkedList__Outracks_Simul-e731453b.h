// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__OUTRACKS_SIMUL_E731453B_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__OUTRACKS_SIMUL_E731453B_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct BindVariable; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable;

struct EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable__uType : ::uClassType
{
};

EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable__uType* EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable__typeof();

void EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable___ObjInit(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable* __this, ::app::Outracks::Simulator::Bytecode::BindVariable* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable* next);
EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable* EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::BindVariable* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable* next);

struct EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable : ::uObject
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::BindVariable*> Item;
    ::uStrong< EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable*> Next;

    void _ObjInit(::app::Outracks::Simulator::Bytecode::BindVariable* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable* next) { EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_BindVariable___ObjInit(this, item, next); }
};

}}}


#endif
