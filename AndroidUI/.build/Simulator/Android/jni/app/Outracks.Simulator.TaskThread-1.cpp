#include <app/Outracks.Simulator.ISimulatorClient.h>
#include <app/Outracks.Simulator.Task__Outracks_Simulator_ISimulatorClient.h>
#include <app/Outracks.Simulator.Task__Uno_Net_IPEndPoint__.h>
#include <app/Outracks.Simulator.TaskThread__Outracks_Simulator_ISimulatorClient.h>
#include <app/Outracks.Simulator.TaskThread__Uno_Net_IPEndPoint__.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Func__Outracks_Simulator_ISimulatorClient.h>
#include <app/Uno.Func__Uno_Net_IPEndPoint__.h>
#include <app/Uno.Net.IPEndPoint.h>
#include <app/Uno.Threading.Thread.h>

namespace app {
namespace Outracks {
namespace Simulator {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TaskThread__Outracks_Simulator_ISimulatorClient__uType* TaskThread__Outracks_Simulator_ISimulatorClient__typeof()
{
    static ::uStaticStrong<TaskThread__Outracks_Simulator_ISimulatorClient__uType*> type;
    if (type != NULL) return type;

    type = (TaskThread__Outracks_Simulator_ISimulatorClient__uType*)::uAllocClassType(sizeof(TaskThread__Outracks_Simulator_ISimulatorClient__uType), "Outracks.Simulator.TaskThread<Outracks.Simulator.ISimulatorClient>", false, 0, 3, 0);

    type->SetStrongRefs(
        "_func", offsetof(TaskThread__Outracks_Simulator_ISimulatorClient, _func),
        "Task", offsetof(TaskThread__Outracks_Simulator_ISimulatorClient, Task),
        "Thread", offsetof(TaskThread__Outracks_Simulator_ISimulatorClient, Thread));

    return type;
}

void TaskThread__Outracks_Simulator_ISimulatorClient___ObjInit(TaskThread__Outracks_Simulator_ISimulatorClient* __this, ::uDelegate* func)
{
    __this->_func = func;
    __this->Thread = ::app::Uno::Threading::Thread__Create(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)TaskThread__Outracks_Simulator_ISimulatorClient__Run, __this));
    __this->Task = ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient__New_1(NULL, ::uNewDelegateVirt(::app::Uno::Action__typeof(), __this->Thread, offsetof(::app::Uno::Threading::Thread__uType, __fp_Join)));
}

TaskThread__Outracks_Simulator_ISimulatorClient* TaskThread__Outracks_Simulator_ISimulatorClient__New_1(::uStatic* __this, ::uDelegate* func)
{
    TaskThread__Outracks_Simulator_ISimulatorClient* inst = (TaskThread__Outracks_Simulator_ISimulatorClient*)::uAllocObject(sizeof(TaskThread__Outracks_Simulator_ISimulatorClient), TaskThread__Outracks_Simulator_ISimulatorClient__typeof());
    inst->_ObjInit(func);
    return inst;
}

void TaskThread__Outracks_Simulator_ISimulatorClient__Run(TaskThread__Outracks_Simulator_ISimulatorClient* __this)
{
    try
    {
        ::uPtr< ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient*>(__this->Task)->Result(::uPtr< ::uDelegate*>(__this->_func)->Invoke< ::uObject*>());
        ::uPtr< ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient*>(__this->Task)->IsCompleted(true);
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::uPtr< ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient*>(__this->Task)->Exception(e);
            ::uPtr< ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient*>(__this->Task)->IsFaulted(true);
            ::uPtr< ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient*>(__this->Task)->IsCompleted(true);
        }
        else
        {
            throw __t;
        }
    }
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

TaskThread__Uno_Net_IPEndPoint____uType* TaskThread__Uno_Net_IPEndPoint____typeof()
{
    static ::uStaticStrong<TaskThread__Uno_Net_IPEndPoint____uType*> type;
    if (type != NULL) return type;

    type = (TaskThread__Uno_Net_IPEndPoint____uType*)::uAllocClassType(sizeof(TaskThread__Uno_Net_IPEndPoint____uType), "Outracks.Simulator.TaskThread<Uno.Net.IPEndPoint[]>", false, 0, 3, 0);

    type->SetStrongRefs(
        "_func", offsetof(TaskThread__Uno_Net_IPEndPoint__, _func),
        "Task", offsetof(TaskThread__Uno_Net_IPEndPoint__, Task),
        "Thread", offsetof(TaskThread__Uno_Net_IPEndPoint__, Thread));

    return type;
}

void TaskThread__Uno_Net_IPEndPoint_____ObjInit(TaskThread__Uno_Net_IPEndPoint__* __this, ::uDelegate* func)
{
    __this->_func = func;
    __this->Thread = ::app::Uno::Threading::Thread__Create(NULL, ::uNewDelegateNonVirt(::app::Uno::Action__typeof(), (const void*)TaskThread__Uno_Net_IPEndPoint____Run, __this));
    __this->Task = ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint____New_1(NULL, ::uNewDelegateVirt(::app::Uno::Action__typeof(), __this->Thread, offsetof(::app::Uno::Threading::Thread__uType, __fp_Join)));
}

TaskThread__Uno_Net_IPEndPoint__* TaskThread__Uno_Net_IPEndPoint____New_1(::uStatic* __this, ::uDelegate* func)
{
    TaskThread__Uno_Net_IPEndPoint__* inst = (TaskThread__Uno_Net_IPEndPoint__*)::uAllocObject(sizeof(TaskThread__Uno_Net_IPEndPoint__), TaskThread__Uno_Net_IPEndPoint____typeof());
    inst->_ObjInit(func);
    return inst;
}

void TaskThread__Uno_Net_IPEndPoint____Run(TaskThread__Uno_Net_IPEndPoint__* __this)
{
    try
    {
        ::uPtr< ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__*>(__this->Task)->Result(::uPtr< ::uDelegate*>(__this->_func)->Invoke< ::uArray*>());
        ::uPtr< ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__*>(__this->Task)->IsCompleted(true);
    }
    catch (const ::uThrowable& __t)
    {
        if (::uIs(__t.Exception, ::app::Uno::Exception__typeof()))
        {
            ::app::Uno::Exception* e = (::app::Uno::Exception*)__t.Exception;
            ::uPtr< ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__*>(__this->Task)->Exception(e);
            ::uPtr< ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__*>(__this->Task)->IsFaulted(true);
            ::uPtr< ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__*>(__this->Task)->IsCompleted(true);
        }
        else
        {
            throw __t;
        }
    }
}

}}}
