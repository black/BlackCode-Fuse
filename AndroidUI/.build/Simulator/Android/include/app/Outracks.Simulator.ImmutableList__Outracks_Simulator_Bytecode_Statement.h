// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_IMMUTABLE_LIST__OUTRACKS_SIMULATOR_BYTECODE_STATEMENT_H__
#define __APP_OUTRACKS_SIMULATOR_IMMUTABLE_LIST__OUTRACKS_SIMULATOR_BYTECODE_STATEMENT_H__

#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_Statement.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Statement; } } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct ImmutableList__Outracks_Simulator_Bytecode_Statement;

struct ImmutableList__Outracks_Simulator_Bytecode_Statement__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Statement __interface_0;
};

ImmutableList__Outracks_Simulator_Bytecode_Statement__uType* ImmutableList__Outracks_Simulator_Bytecode_Statement__typeof();

void ImmutableList__Outracks_Simulator_Bytecode_Statement___ObjInit(ImmutableList__Outracks_Simulator_Bytecode_Statement* __this, ::uArray* array);
ImmutableList__Outracks_Simulator_Bytecode_Statement* ImmutableList__Outracks_Simulator_Bytecode_Statement__Add(ImmutableList__Outracks_Simulator_Bytecode_Statement* __this, ::app::Outracks::Simulator::Bytecode::Statement* element);
::app::Outracks::Simulator::Bytecode::Statement* ImmutableList__Outracks_Simulator_Bytecode_Statement__Get(ImmutableList__Outracks_Simulator_Bytecode_Statement* __this, int i);
int ImmutableList__Outracks_Simulator_Bytecode_Statement__get_Count(ImmutableList__Outracks_Simulator_Bytecode_Statement* __this);
ImmutableList__Outracks_Simulator_Bytecode_Statement* ImmutableList__Outracks_Simulator_Bytecode_Statement__get_Empty(::uStatic* __this);
::app::Outracks::Simulator::Bytecode::Statement* ImmutableList__Outracks_Simulator_Bytecode_Statement__get_Item(ImmutableList__Outracks_Simulator_Bytecode_Statement* __this, int i);
::uObject* ImmutableList__Outracks_Simulator_Bytecode_Statement__GetEnumerator(ImmutableList__Outracks_Simulator_Bytecode_Statement* __this);
ImmutableList__Outracks_Simulator_Bytecode_Statement* ImmutableList__Outracks_Simulator_Bytecode_Statement__InsertRange(ImmutableList__Outracks_Simulator_Bytecode_Statement* __this, int index, ::uObject* items);
ImmutableList__Outracks_Simulator_Bytecode_Statement* ImmutableList__Outracks_Simulator_Bytecode_Statement__New_1(::uStatic* __this, ::uArray* array);
ImmutableList__Outracks_Simulator_Bytecode_Statement* ImmutableList__Outracks_Simulator_Bytecode_Statement__Replace(ImmutableList__Outracks_Simulator_Bytecode_Statement* __this, ::app::Outracks::Simulator::Bytecode::Statement* element, ::app::Outracks::Simulator::Bytecode::Statement* replacement);

struct ImmutableList__Outracks_Simulator_Bytecode_Statement : ::uObject
{
    ::uStrong< ::uArray*> _array;

    void _ObjInit(::uArray* array) { ImmutableList__Outracks_Simulator_Bytecode_Statement___ObjInit(this, array); }
    ImmutableList__Outracks_Simulator_Bytecode_Statement* Add(::app::Outracks::Simulator::Bytecode::Statement* element) { return ImmutableList__Outracks_Simulator_Bytecode_Statement__Add(this, element); }
    ::app::Outracks::Simulator::Bytecode::Statement* Get(int i) { return ImmutableList__Outracks_Simulator_Bytecode_Statement__Get(this, i); }
    int Count() { return ImmutableList__Outracks_Simulator_Bytecode_Statement__get_Count(this); }
    ::app::Outracks::Simulator::Bytecode::Statement* Item(int i) { return ImmutableList__Outracks_Simulator_Bytecode_Statement__get_Item(this, i); }
    ::uObject* GetEnumerator() { return ImmutableList__Outracks_Simulator_Bytecode_Statement__GetEnumerator(this); }
    ImmutableList__Outracks_Simulator_Bytecode_Statement* InsertRange(int index, ::uObject* items) { return ImmutableList__Outracks_Simulator_Bytecode_Statement__InsertRange(this, index, items); }
    ImmutableList__Outracks_Simulator_Bytecode_Statement* Replace(::app::Outracks::Simulator::Bytecode::Statement* element, ::app::Outracks::Simulator::Bytecode::Statement* replacement) { return ImmutableList__Outracks_Simulator_Bytecode_Statement__Replace(this, element, replacement); }
};

}}}


#endif
