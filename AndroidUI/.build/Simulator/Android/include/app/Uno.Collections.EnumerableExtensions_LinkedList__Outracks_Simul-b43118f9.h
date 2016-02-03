// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Collections\0.13.2\Extensions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__OUTRACKS_SIMUL_B43118F9_H__
#define __APP_UNO_COLLECTIONS_ENUMERABLE_EXTENSIONS_LINKED_LIST__OUTRACKS_SIMUL_B43118F9_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName;

struct EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName__uType : ::uClassType
{
};

EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName__uType* EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName__typeof();

void EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName___ObjInit(EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Outracks::Simulator::Bytecode::TypeName* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName* next);
EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName* EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName* next);

struct EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName : ::uObject
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeName*> Item;
    ::uStrong< EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName*> Next;

    void _ObjInit(::app::Outracks::Simulator::Bytecode::TypeName* item, EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName* next) { EnumerableExtensions_LinkedList__Outracks_Simulator_Bytecode_TypeName___ObjInit(this, item, next); }
};

}}}


#endif
