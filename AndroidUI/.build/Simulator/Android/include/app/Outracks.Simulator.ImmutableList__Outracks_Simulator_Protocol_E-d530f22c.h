// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_IMMUTABLE_LIST__OUTRACKS_SIMULATOR_PROTOCOL_E_D530F22C_H__
#define __APP_OUTRACKS_SIMULATOR_IMMUTABLE_LIST__OUTRACKS_SIMULATOR_PROTOCOL_E_D530F22C_H__

#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Protocol_ExceptionInfo.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct ExceptionInfo; } } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo;

struct ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Protocol_ExceptionInfo __interface_0;
};

ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__uType* ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__typeof();

void ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo___ObjInit(ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* __this, ::uArray* array);
ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__Add(ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* __this, ::app::Outracks::Simulator::Protocol::ExceptionInfo* element);
::app::Outracks::Simulator::Protocol::ExceptionInfo* ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__Get(ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* __this, int i);
int ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__get_Count(ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* __this);
ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__get_Empty(::uStatic* __this);
::app::Outracks::Simulator::Protocol::ExceptionInfo* ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__get_Item(ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* __this, int i);
::uObject* ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__GetEnumerator(ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* __this);
ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__InsertRange(ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* __this, int index, ::uObject* items);
ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__New_1(::uStatic* __this, ::uArray* array);
ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__Replace(ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* __this, ::app::Outracks::Simulator::Protocol::ExceptionInfo* element, ::app::Outracks::Simulator::Protocol::ExceptionInfo* replacement);

struct ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo : ::uObject
{
    ::uStrong< ::uArray*> _array;

    void _ObjInit(::uArray* array) { ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo___ObjInit(this, array); }
    ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* Add(::app::Outracks::Simulator::Protocol::ExceptionInfo* element) { return ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__Add(this, element); }
    ::app::Outracks::Simulator::Protocol::ExceptionInfo* Get(int i) { return ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__Get(this, i); }
    int Count() { return ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__get_Count(this); }
    ::app::Outracks::Simulator::Protocol::ExceptionInfo* Item(int i) { return ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__get_Item(this, i); }
    ::uObject* GetEnumerator() { return ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__GetEnumerator(this); }
    ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* InsertRange(int index, ::uObject* items) { return ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__InsertRange(this, index, items); }
    ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo* Replace(::app::Outracks::Simulator::Protocol::ExceptionInfo* element, ::app::Outracks::Simulator::Protocol::ExceptionInfo* replacement) { return ImmutableList__Outracks_Simulator_Protocol_ExceptionInfo__Replace(this, element, replacement); }
};

}}}


#endif
