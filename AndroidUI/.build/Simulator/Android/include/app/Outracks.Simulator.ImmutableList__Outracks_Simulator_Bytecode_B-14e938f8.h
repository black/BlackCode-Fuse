// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_IMMUTABLE_LIST__OUTRACKS_SIMULATOR_BYTECODE_B_14E938F8_H__
#define __APP_OUTRACKS_SIMULATOR_IMMUTABLE_LIST__OUTRACKS_SIMULATOR_BYTECODE_B_14E938F8_H__

#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_BindVariable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct BindVariable; } } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct ImmutableList__Outracks_Simulator_Bytecode_BindVariable;

struct ImmutableList__Outracks_Simulator_Bytecode_BindVariable__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_BindVariable __interface_0;
};

ImmutableList__Outracks_Simulator_Bytecode_BindVariable__uType* ImmutableList__Outracks_Simulator_Bytecode_BindVariable__typeof();

void ImmutableList__Outracks_Simulator_Bytecode_BindVariable___ObjInit(ImmutableList__Outracks_Simulator_Bytecode_BindVariable* __this, ::uArray* array);
ImmutableList__Outracks_Simulator_Bytecode_BindVariable* ImmutableList__Outracks_Simulator_Bytecode_BindVariable__Add(ImmutableList__Outracks_Simulator_Bytecode_BindVariable* __this, ::app::Outracks::Simulator::Bytecode::BindVariable* element);
::app::Outracks::Simulator::Bytecode::BindVariable* ImmutableList__Outracks_Simulator_Bytecode_BindVariable__Get(ImmutableList__Outracks_Simulator_Bytecode_BindVariable* __this, int i);
int ImmutableList__Outracks_Simulator_Bytecode_BindVariable__get_Count(ImmutableList__Outracks_Simulator_Bytecode_BindVariable* __this);
ImmutableList__Outracks_Simulator_Bytecode_BindVariable* ImmutableList__Outracks_Simulator_Bytecode_BindVariable__get_Empty(::uStatic* __this);
::app::Outracks::Simulator::Bytecode::BindVariable* ImmutableList__Outracks_Simulator_Bytecode_BindVariable__get_Item(ImmutableList__Outracks_Simulator_Bytecode_BindVariable* __this, int i);
::uObject* ImmutableList__Outracks_Simulator_Bytecode_BindVariable__GetEnumerator(ImmutableList__Outracks_Simulator_Bytecode_BindVariable* __this);
ImmutableList__Outracks_Simulator_Bytecode_BindVariable* ImmutableList__Outracks_Simulator_Bytecode_BindVariable__InsertRange(ImmutableList__Outracks_Simulator_Bytecode_BindVariable* __this, int index, ::uObject* items);
ImmutableList__Outracks_Simulator_Bytecode_BindVariable* ImmutableList__Outracks_Simulator_Bytecode_BindVariable__New_1(::uStatic* __this, ::uArray* array);
ImmutableList__Outracks_Simulator_Bytecode_BindVariable* ImmutableList__Outracks_Simulator_Bytecode_BindVariable__Replace(ImmutableList__Outracks_Simulator_Bytecode_BindVariable* __this, ::app::Outracks::Simulator::Bytecode::BindVariable* element, ::app::Outracks::Simulator::Bytecode::BindVariable* replacement);

struct ImmutableList__Outracks_Simulator_Bytecode_BindVariable : ::uObject
{
    ::uStrong< ::uArray*> _array;

    void _ObjInit(::uArray* array) { ImmutableList__Outracks_Simulator_Bytecode_BindVariable___ObjInit(this, array); }
    ImmutableList__Outracks_Simulator_Bytecode_BindVariable* Add(::app::Outracks::Simulator::Bytecode::BindVariable* element) { return ImmutableList__Outracks_Simulator_Bytecode_BindVariable__Add(this, element); }
    ::app::Outracks::Simulator::Bytecode::BindVariable* Get(int i) { return ImmutableList__Outracks_Simulator_Bytecode_BindVariable__Get(this, i); }
    int Count() { return ImmutableList__Outracks_Simulator_Bytecode_BindVariable__get_Count(this); }
    ::app::Outracks::Simulator::Bytecode::BindVariable* Item(int i) { return ImmutableList__Outracks_Simulator_Bytecode_BindVariable__get_Item(this, i); }
    ::uObject* GetEnumerator() { return ImmutableList__Outracks_Simulator_Bytecode_BindVariable__GetEnumerator(this); }
    ImmutableList__Outracks_Simulator_Bytecode_BindVariable* InsertRange(int index, ::uObject* items) { return ImmutableList__Outracks_Simulator_Bytecode_BindVariable__InsertRange(this, index, items); }
    ImmutableList__Outracks_Simulator_Bytecode_BindVariable* Replace(::app::Outracks::Simulator::Bytecode::BindVariable* element, ::app::Outracks::Simulator::Bytecode::BindVariable* replacement) { return ImmutableList__Outracks_Simulator_Bytecode_BindVariable__Replace(this, element, replacement); }
};

}}}


#endif
