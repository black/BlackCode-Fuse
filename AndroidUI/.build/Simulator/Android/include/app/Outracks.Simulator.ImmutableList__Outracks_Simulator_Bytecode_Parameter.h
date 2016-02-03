// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_IMMUTABLE_LIST__OUTRACKS_SIMULATOR_BYTECODE_PARAMETER_H__
#define __APP_OUTRACKS_SIMULATOR_IMMUTABLE_LIST__OUTRACKS_SIMULATOR_BYTECODE_PARAMETER_H__

#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_Parameter.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Parameter; } } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct ImmutableList__Outracks_Simulator_Bytecode_Parameter;

struct ImmutableList__Outracks_Simulator_Bytecode_Parameter__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_Parameter __interface_0;
};

ImmutableList__Outracks_Simulator_Bytecode_Parameter__uType* ImmutableList__Outracks_Simulator_Bytecode_Parameter__typeof();

void ImmutableList__Outracks_Simulator_Bytecode_Parameter___ObjInit(ImmutableList__Outracks_Simulator_Bytecode_Parameter* __this, ::uArray* array);
ImmutableList__Outracks_Simulator_Bytecode_Parameter* ImmutableList__Outracks_Simulator_Bytecode_Parameter__Add(ImmutableList__Outracks_Simulator_Bytecode_Parameter* __this, ::app::Outracks::Simulator::Bytecode::Parameter* element);
::app::Outracks::Simulator::Bytecode::Parameter* ImmutableList__Outracks_Simulator_Bytecode_Parameter__Get(ImmutableList__Outracks_Simulator_Bytecode_Parameter* __this, int i);
int ImmutableList__Outracks_Simulator_Bytecode_Parameter__get_Count(ImmutableList__Outracks_Simulator_Bytecode_Parameter* __this);
ImmutableList__Outracks_Simulator_Bytecode_Parameter* ImmutableList__Outracks_Simulator_Bytecode_Parameter__get_Empty(::uStatic* __this);
::app::Outracks::Simulator::Bytecode::Parameter* ImmutableList__Outracks_Simulator_Bytecode_Parameter__get_Item(ImmutableList__Outracks_Simulator_Bytecode_Parameter* __this, int i);
::uObject* ImmutableList__Outracks_Simulator_Bytecode_Parameter__GetEnumerator(ImmutableList__Outracks_Simulator_Bytecode_Parameter* __this);
ImmutableList__Outracks_Simulator_Bytecode_Parameter* ImmutableList__Outracks_Simulator_Bytecode_Parameter__InsertRange(ImmutableList__Outracks_Simulator_Bytecode_Parameter* __this, int index, ::uObject* items);
ImmutableList__Outracks_Simulator_Bytecode_Parameter* ImmutableList__Outracks_Simulator_Bytecode_Parameter__New_1(::uStatic* __this, ::uArray* array);
ImmutableList__Outracks_Simulator_Bytecode_Parameter* ImmutableList__Outracks_Simulator_Bytecode_Parameter__Replace(ImmutableList__Outracks_Simulator_Bytecode_Parameter* __this, ::app::Outracks::Simulator::Bytecode::Parameter* element, ::app::Outracks::Simulator::Bytecode::Parameter* replacement);

struct ImmutableList__Outracks_Simulator_Bytecode_Parameter : ::uObject
{
    ::uStrong< ::uArray*> _array;

    void _ObjInit(::uArray* array) { ImmutableList__Outracks_Simulator_Bytecode_Parameter___ObjInit(this, array); }
    ImmutableList__Outracks_Simulator_Bytecode_Parameter* Add(::app::Outracks::Simulator::Bytecode::Parameter* element) { return ImmutableList__Outracks_Simulator_Bytecode_Parameter__Add(this, element); }
    ::app::Outracks::Simulator::Bytecode::Parameter* Get(int i) { return ImmutableList__Outracks_Simulator_Bytecode_Parameter__Get(this, i); }
    int Count() { return ImmutableList__Outracks_Simulator_Bytecode_Parameter__get_Count(this); }
    ::app::Outracks::Simulator::Bytecode::Parameter* Item(int i) { return ImmutableList__Outracks_Simulator_Bytecode_Parameter__get_Item(this, i); }
    ::uObject* GetEnumerator() { return ImmutableList__Outracks_Simulator_Bytecode_Parameter__GetEnumerator(this); }
    ImmutableList__Outracks_Simulator_Bytecode_Parameter* InsertRange(int index, ::uObject* items) { return ImmutableList__Outracks_Simulator_Bytecode_Parameter__InsertRange(this, index, items); }
    ImmutableList__Outracks_Simulator_Bytecode_Parameter* Replace(::app::Outracks::Simulator::Bytecode::Parameter* element, ::app::Outracks::Simulator::Bytecode::Parameter* replacement) { return ImmutableList__Outracks_Simulator_Bytecode_Parameter__Replace(this, element, replacement); }
};

}}}


#endif
