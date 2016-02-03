// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__OUTRACKS_S_657438DA_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERABLE__OUTRACKS_S_657438DA_H__

#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Task_Outracks_S-7e052b05.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct Task__Outracks_Simulator_ISimulatorClient; } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_;

struct ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_ __interface_0;
};

ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType* ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof();

void ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient____ObjInit(ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this, ::uArray* source);
::uObject* ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___GetEnumerator(ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this);
ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___New_1(::uStatic* __this, ::uArray* source);

struct ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_ : ::uObject
{
    ::uStrong< ::uArray*> _source;

    void _ObjInit(::uArray* source) { ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient____ObjInit(this, source); }
    ::uObject* GetEnumerator() { return ArrayEnumerable__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___GetEnumerator(this); }
};

}}}}}


#endif
