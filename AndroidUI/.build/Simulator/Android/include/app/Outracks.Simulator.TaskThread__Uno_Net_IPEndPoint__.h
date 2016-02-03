// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_TASK_THREAD__UNO_NET_I_P_END_POINT___H__
#define __APP_OUTRACKS_SIMULATOR_TASK_THREAD__UNO_NET_I_P_END_POINT___H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct Task__Uno_Net_IPEndPoint__; } } }
namespace app { namespace Uno { namespace Threading { struct Thread; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct TaskThread__Uno_Net_IPEndPoint__;

struct TaskThread__Uno_Net_IPEndPoint____uType : ::uClassType
{
};

TaskThread__Uno_Net_IPEndPoint____uType* TaskThread__Uno_Net_IPEndPoint____typeof();

void TaskThread__Uno_Net_IPEndPoint_____ObjInit(TaskThread__Uno_Net_IPEndPoint__* __this, ::uDelegate* func);
TaskThread__Uno_Net_IPEndPoint__* TaskThread__Uno_Net_IPEndPoint____New_1(::uStatic* __this, ::uDelegate* func);
void TaskThread__Uno_Net_IPEndPoint____Run(TaskThread__Uno_Net_IPEndPoint__* __this);

struct TaskThread__Uno_Net_IPEndPoint__ : ::uObject
{
    ::uStrong< ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__*> Task;
    ::uStrong< ::app::Uno::Threading::Thread*> Thread;
    ::uStrong< ::uDelegate*> _func;

    void _ObjInit(::uDelegate* func) { TaskThread__Uno_Net_IPEndPoint_____ObjInit(this, func); }
    void Run() { TaskThread__Uno_Net_IPEndPoint____Run(this); }
};

}}}


#endif
