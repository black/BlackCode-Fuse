// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_IMMUTABLE_LIST__OUTRACKS_SIMULATOR_BYTECODE_EXPRESSION_H__
#define __APP_OUTRACKS_SIMULATOR_IMMUTABLE_LIST__OUTRACKS_SIMULATOR_BYTECODE_EXPRESSION_H__

#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_Expression.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Expression; } } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct ImmutableList__Outracks_Simulator_Bytecode_Expression;

struct ImmutableList__Outracks_Simulator_Bytecode_Expression__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Expression __interface_0;
};

ImmutableList__Outracks_Simulator_Bytecode_Expression__uType* ImmutableList__Outracks_Simulator_Bytecode_Expression__typeof();

void ImmutableList__Outracks_Simulator_Bytecode_Expression___ObjInit(ImmutableList__Outracks_Simulator_Bytecode_Expression* __this, ::uArray* array);
ImmutableList__Outracks_Simulator_Bytecode_Expression* ImmutableList__Outracks_Simulator_Bytecode_Expression__Add(ImmutableList__Outracks_Simulator_Bytecode_Expression* __this, ::app::Outracks::Simulator::Bytecode::Expression* element);
::app::Outracks::Simulator::Bytecode::Expression* ImmutableList__Outracks_Simulator_Bytecode_Expression__Get(ImmutableList__Outracks_Simulator_Bytecode_Expression* __this, int i);
int ImmutableList__Outracks_Simulator_Bytecode_Expression__get_Count(ImmutableList__Outracks_Simulator_Bytecode_Expression* __this);
ImmutableList__Outracks_Simulator_Bytecode_Expression* ImmutableList__Outracks_Simulator_Bytecode_Expression__get_Empty(::uStatic* __this);
::app::Outracks::Simulator::Bytecode::Expression* ImmutableList__Outracks_Simulator_Bytecode_Expression__get_Item(ImmutableList__Outracks_Simulator_Bytecode_Expression* __this, int i);
::uObject* ImmutableList__Outracks_Simulator_Bytecode_Expression__GetEnumerator(ImmutableList__Outracks_Simulator_Bytecode_Expression* __this);
ImmutableList__Outracks_Simulator_Bytecode_Expression* ImmutableList__Outracks_Simulator_Bytecode_Expression__InsertRange(ImmutableList__Outracks_Simulator_Bytecode_Expression* __this, int index, ::uObject* items);
ImmutableList__Outracks_Simulator_Bytecode_Expression* ImmutableList__Outracks_Simulator_Bytecode_Expression__New_1(::uStatic* __this, ::uArray* array);
ImmutableList__Outracks_Simulator_Bytecode_Expression* ImmutableList__Outracks_Simulator_Bytecode_Expression__Replace(ImmutableList__Outracks_Simulator_Bytecode_Expression* __this, ::app::Outracks::Simulator::Bytecode::Expression* element, ::app::Outracks::Simulator::Bytecode::Expression* replacement);

struct ImmutableList__Outracks_Simulator_Bytecode_Expression : ::uObject
{
    ::uStrong< ::uArray*> _array;

    void _ObjInit(::uArray* array) { ImmutableList__Outracks_Simulator_Bytecode_Expression___ObjInit(this, array); }
    ImmutableList__Outracks_Simulator_Bytecode_Expression* Add(::app::Outracks::Simulator::Bytecode::Expression* element) { return ImmutableList__Outracks_Simulator_Bytecode_Expression__Add(this, element); }
    ::app::Outracks::Simulator::Bytecode::Expression* Get(int i) { return ImmutableList__Outracks_Simulator_Bytecode_Expression__Get(this, i); }
    int Count() { return ImmutableList__Outracks_Simulator_Bytecode_Expression__get_Count(this); }
    ::app::Outracks::Simulator::Bytecode::Expression* Item(int i) { return ImmutableList__Outracks_Simulator_Bytecode_Expression__get_Item(this, i); }
    ::uObject* GetEnumerator() { return ImmutableList__Outracks_Simulator_Bytecode_Expression__GetEnumerator(this); }
    ImmutableList__Outracks_Simulator_Bytecode_Expression* InsertRange(int index, ::uObject* items) { return ImmutableList__Outracks_Simulator_Bytecode_Expression__InsertRange(this, index, items); }
    ImmutableList__Outracks_Simulator_Bytecode_Expression* Replace(::app::Outracks::Simulator::Bytecode::Expression* element, ::app::Outracks::Simulator::Bytecode::Expression* replacement) { return ImmutableList__Outracks_Simulator_Bytecode_Expression__Replace(this, element, replacement); }
};

}}}


#endif
