// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_IMMUTABLE_LIST__OUTRACKS_SIMULATOR_BYTECODE_TYPE_NAME_H__
#define __APP_OUTRACKS_SIMULATOR_IMMUTABLE_LIST__OUTRACKS_SIMULATOR_BYTECODE_TYPE_NAME_H__

#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct ImmutableList__Outracks_Simulator_Bytecode_TypeName;

struct ImmutableList__Outracks_Simulator_Bytecode_TypeName__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Bytecode_TypeName __interface_0;
};

ImmutableList__Outracks_Simulator_Bytecode_TypeName__uType* ImmutableList__Outracks_Simulator_Bytecode_TypeName__typeof();

void ImmutableList__Outracks_Simulator_Bytecode_TypeName___ObjInit(ImmutableList__Outracks_Simulator_Bytecode_TypeName* __this, ::uArray* array);
ImmutableList__Outracks_Simulator_Bytecode_TypeName* ImmutableList__Outracks_Simulator_Bytecode_TypeName__Add(ImmutableList__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Outracks::Simulator::Bytecode::TypeName* element);
::app::Outracks::Simulator::Bytecode::TypeName* ImmutableList__Outracks_Simulator_Bytecode_TypeName__Get(ImmutableList__Outracks_Simulator_Bytecode_TypeName* __this, int i);
int ImmutableList__Outracks_Simulator_Bytecode_TypeName__get_Count(ImmutableList__Outracks_Simulator_Bytecode_TypeName* __this);
ImmutableList__Outracks_Simulator_Bytecode_TypeName* ImmutableList__Outracks_Simulator_Bytecode_TypeName__get_Empty(::uStatic* __this);
::app::Outracks::Simulator::Bytecode::TypeName* ImmutableList__Outracks_Simulator_Bytecode_TypeName__get_Item(ImmutableList__Outracks_Simulator_Bytecode_TypeName* __this, int i);
::uObject* ImmutableList__Outracks_Simulator_Bytecode_TypeName__GetEnumerator(ImmutableList__Outracks_Simulator_Bytecode_TypeName* __this);
ImmutableList__Outracks_Simulator_Bytecode_TypeName* ImmutableList__Outracks_Simulator_Bytecode_TypeName__InsertRange(ImmutableList__Outracks_Simulator_Bytecode_TypeName* __this, int index, ::uObject* items);
ImmutableList__Outracks_Simulator_Bytecode_TypeName* ImmutableList__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this, ::uArray* array);
ImmutableList__Outracks_Simulator_Bytecode_TypeName* ImmutableList__Outracks_Simulator_Bytecode_TypeName__Replace(ImmutableList__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Outracks::Simulator::Bytecode::TypeName* element, ::app::Outracks::Simulator::Bytecode::TypeName* replacement);

struct ImmutableList__Outracks_Simulator_Bytecode_TypeName : ::uObject
{
    ::uStrong< ::uArray*> _array;

    void _ObjInit(::uArray* array) { ImmutableList__Outracks_Simulator_Bytecode_TypeName___ObjInit(this, array); }
    ImmutableList__Outracks_Simulator_Bytecode_TypeName* Add(::app::Outracks::Simulator::Bytecode::TypeName* element) { return ImmutableList__Outracks_Simulator_Bytecode_TypeName__Add(this, element); }
    ::app::Outracks::Simulator::Bytecode::TypeName* Get(int i) { return ImmutableList__Outracks_Simulator_Bytecode_TypeName__Get(this, i); }
    int Count() { return ImmutableList__Outracks_Simulator_Bytecode_TypeName__get_Count(this); }
    ::app::Outracks::Simulator::Bytecode::TypeName* Item(int i) { return ImmutableList__Outracks_Simulator_Bytecode_TypeName__get_Item(this, i); }
    ::uObject* GetEnumerator() { return ImmutableList__Outracks_Simulator_Bytecode_TypeName__GetEnumerator(this); }
    ImmutableList__Outracks_Simulator_Bytecode_TypeName* InsertRange(int index, ::uObject* items) { return ImmutableList__Outracks_Simulator_Bytecode_TypeName__InsertRange(this, index, items); }
    ImmutableList__Outracks_Simulator_Bytecode_TypeName* Replace(::app::Outracks::Simulator::Bytecode::TypeName* element, ::app::Outracks::Simulator::Bytecode::TypeName* replacement) { return ImmutableList__Outracks_Simulator_Bytecode_TypeName__Replace(this, element, replacement); }
};

}}}


#endif
