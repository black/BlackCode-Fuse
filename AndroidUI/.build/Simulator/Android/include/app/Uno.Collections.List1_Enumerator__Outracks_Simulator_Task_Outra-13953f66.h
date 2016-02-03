// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__OUTRACKS_SIMULATOR_TASK_OUTRA_13953F66_H__
#define __APP_UNO_COLLECTIONS_LIST1_ENUMERATOR__OUTRACKS_SIMULATOR_TASK_OUTRA_13953F66_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.Collections.IEnumerator__Outracks_Simulator_Task_Outracks_S-51bc72a7.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct Task__Outracks_Simulator_ISimulatorClient; } } }
namespace app { namespace Uno { namespace Collections { struct List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_; } } }

namespace app {
namespace Uno {
namespace Collections {

struct List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_;

struct List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType : ::uStructType
{
    ::app::Uno::Collections::IEnumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_ __interface_0;
    ::app::Uno::IDisposable __interface_1;
    ::app::Uno::Collections::IEnumerator __interface_2;
};

List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___uType* List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___typeof();

void List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient____ObjInit(List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this, ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* source);
void List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Dispose(List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this);
::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___get_Current(List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this);
bool List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___MoveNext(List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this);
List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_ List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___New_1(::uStatic* __this, ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* source);
void List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Uno_Collections_IEnumerator_Reset(List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* __this);

struct List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_
{
    ::uStrong< ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_*> _source;
    int _version;
    int _iterator;
    ::uStrong< ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient*> _current;

    void _ObjInit(::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_* source) { List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient____ObjInit(this, source); }
    void Dispose() { List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___Dispose(this); }
    ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* Current() { return List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___get_Current(this); }
    bool MoveNext() { return List1_Enumerator__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient___MoveNext(this); }
};

}}}


#endif
