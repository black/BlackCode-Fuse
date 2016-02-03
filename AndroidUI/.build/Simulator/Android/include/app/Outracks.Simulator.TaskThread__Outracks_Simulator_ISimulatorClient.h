// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_TASK_THREAD__OUTRACKS_SIMULATOR_I_SIMULATOR_CLIENT_H__
#define __APP_OUTRACKS_SIMULATOR_TASK_THREAD__OUTRACKS_SIMULATOR_I_SIMULATOR_CLIENT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct Task__Outracks_Simulator_ISimulatorClient; } } }
namespace app { namespace Uno { namespace Threading { struct Thread; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct TaskThread__Outracks_Simulator_ISimulatorClient;

struct TaskThread__Outracks_Simulator_ISimulatorClient__uType : ::uClassType
{
};

TaskThread__Outracks_Simulator_ISimulatorClient__uType* TaskThread__Outracks_Simulator_ISimulatorClient__typeof();

void TaskThread__Outracks_Simulator_ISimulatorClient___ObjInit(TaskThread__Outracks_Simulator_ISimulatorClient* __this, ::uDelegate* func);
TaskThread__Outracks_Simulator_ISimulatorClient* TaskThread__Outracks_Simulator_ISimulatorClient__New_1(::uStatic* __this, ::uDelegate* func);
void TaskThread__Outracks_Simulator_ISimulatorClient__Run(TaskThread__Outracks_Simulator_ISimulatorClient* __this);

struct TaskThread__Outracks_Simulator_ISimulatorClient : ::uObject
{
    ::uStrong< ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient*> Task;
    ::uStrong< ::app::Uno::Threading::Thread*> Thread;
    ::uStrong< ::uDelegate*> _func;

    void _ObjInit(::uDelegate* func) { TaskThread__Outracks_Simulator_ISimulatorClient___ObjInit(this, func); }
    void Run() { TaskThread__Outracks_Simulator_ISimulatorClient__Run(this); }
};

}}}


#endif
