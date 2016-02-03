// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Runtime\Implementation\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__OUTRACKS_S_E693FDB9_H__
#define __APP_UNO_RUNTIME_IMPLEMENTATION_INTERNAL_ARRAY_ENUMERATOR__OUTRACKS_S_E693FDB9_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Task_Outracks_S-51bc72a7.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct Task__Outracks_Simulator_ISimulatorClient; } } }

namespace app {
namespace Uno {
namespace Runtime {
namespace Implementation {
namespace Internal {

struct ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_;

struct ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType : ::uClassType
{
    ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType* ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof();

void ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient____ObjInit(ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this, ::uArray* source);
void ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Dispose(ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this);
::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___get_Current(ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this);
bool ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___MoveNext(ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this);
ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___New_1(::uStatic* __this, ::uArray* source);
void ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Reset(ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this);

struct ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_ : ::uObject
{
    ::uStrong< ::uArray*> _source;
    int _iterator;
    ::uStrong< ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient*> _current;

    void _ObjInit(::uArray* source) { ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient____ObjInit(this, source); }
    void Dispose() { ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Dispose(this); }
    ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* Current() { return ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___get_Current(this); }
    bool MoveNext() { return ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___MoveNext(this); }
    void Reset() { ArrayEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Reset(this); }
};

}}}}}


#endif
