#include <app/Outracks.Simulator.ISimulatorClient.h>
#include <app/Outracks.Simulator.Task__Outracks_Simulator_ISimulatorClient.h>
#include <app/Outracks.Simulator.Task__Uno_Net_IPEndPoint__.h>
#include <app/Outracks.Simulator.WaitForFirstResult__Outracks_Simulator_ISimu-96796466.h>
#include <app/Outracks.Simulator.WaitForFirstResult__Uno_Net_IPEndPoint__.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Task_Outracks_S-7e052b05.h>
#include <app/Uno.Collections.IEnumerable__Outracks_Simulator_Task_Uno_Net_IP-6362cf5f.h>
#include <app/Uno.Collections.IEnumerable__Uno_Exception.h>
#include <app/Uno.Collections.List__Outracks_Simulator_Task_Outracks_Simulato-ae93148c.h>
#include <app/Uno.Collections.List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___.h>
#include <app/Uno.Collections.List__Uno_Exception.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Func__Uno_Collections_IEnumerable_Uno_Exception___Outracks_-452d3b4a.h>
#include <app/Uno.Func__Uno_Collections_IEnumerable_Uno_Exception___Uno_Net_I-aef2d623.h>
#include <app/Uno.Int.h>
#include <app/Uno.Net.IPEndPoint.h>
#include <app/Uno.Threading.Thread.h>

namespace app {
namespace Outracks {
namespace Simulator {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WaitForFirstResult__Outracks_Simulator_ISimulatorClient__uType* WaitForFirstResult__Outracks_Simulator_ISimulatorClient__typeof()
{
    static ::uStaticStrong<WaitForFirstResult__Outracks_Simulator_ISimulatorClient__uType*> type;
    if (type != NULL) return type;

    type = (WaitForFirstResult__Outracks_Simulator_ISimulatorClient__uType*)::uAllocClassType(sizeof(WaitForFirstResult__Outracks_Simulator_ISimulatorClient__uType), "Outracks.Simulator.WaitForFirstResult<Outracks.Simulator.ISimulatorClient>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_onNoResult", offsetof(WaitForFirstResult__Outracks_Simulator_ISimulatorClient, _onNoResult),
        "_pending", offsetof(WaitForFirstResult__Outracks_Simulator_ISimulatorClient, _pending));

    return type;
}

void WaitForFirstResult__Outracks_Simulator_ISimulatorClient___ObjInit(WaitForFirstResult__Outracks_Simulator_ISimulatorClient* __this, ::uObject* pending, ::uDelegate* onNoResult)
{
    __this->_pending = ::app::Uno::Collections::EnumerableExtensions__ToList__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_(NULL, pending);
    __this->_onNoResult = onNoResult;
}

::uObject* WaitForFirstResult__Outracks_Simulator_ISimulatorClient__Execute(WaitForFirstResult__Outracks_Simulator_ISimulatorClient* __this)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    ::app::Uno::Collections::List__Uno_Exception* exceptions = ::app::Uno::Collections::List__Uno_Exception__New_1(NULL);

    while (::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_*>(__this->_pending)->Count() != 0)
    {
        for (array_123 = ::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_*>(__this->_pending)->ToArray(), index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
        {
            ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* task = ::uPtr< ::uArray*>(array_123)->Item< ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient*>(index_124);

            if (::uPtr< ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient*>(task)->IsCompleted())
            {
                if (::uPtr< ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient*>(task)->IsFaulted())
                {
                    ::uPtr< ::app::Uno::Collections::List__Uno_Exception*>(exceptions)->Add(::uPtr< ::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient*>(task)->Exception());
                }
                else
                {
                    return task->Result();
                }

                ::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Task_Outracks_Simulator_ISimulatorClient_*>(__this->_pending)->Remove(task);
            }

            ::app::Uno::Threading::Thread__Sleep(NULL, 10);
        }
    }

    return ::uPtr< ::uDelegate*>(__this->_onNoResult)->Invoke< ::uObject*, ::uObject*>((::uObject*)exceptions);
}

WaitForFirstResult__Outracks_Simulator_ISimulatorClient* WaitForFirstResult__Outracks_Simulator_ISimulatorClient__New_1(::uStatic* __this, ::uObject* pending, ::uDelegate* onNoResult)
{
    WaitForFirstResult__Outracks_Simulator_ISimulatorClient* inst = (WaitForFirstResult__Outracks_Simulator_ISimulatorClient*)::uAllocObject(sizeof(WaitForFirstResult__Outracks_Simulator_ISimulatorClient), WaitForFirstResult__Outracks_Simulator_ISimulatorClient__typeof());
    inst->_ObjInit(pending, onNoResult);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

WaitForFirstResult__Uno_Net_IPEndPoint____uType* WaitForFirstResult__Uno_Net_IPEndPoint____typeof()
{
    static ::uStaticStrong<WaitForFirstResult__Uno_Net_IPEndPoint____uType*> type;
    if (type != NULL) return type;

    type = (WaitForFirstResult__Uno_Net_IPEndPoint____uType*)::uAllocClassType(sizeof(WaitForFirstResult__Uno_Net_IPEndPoint____uType), "Outracks.Simulator.WaitForFirstResult<Uno.Net.IPEndPoint[]>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_onNoResult", offsetof(WaitForFirstResult__Uno_Net_IPEndPoint__, _onNoResult),
        "_pending", offsetof(WaitForFirstResult__Uno_Net_IPEndPoint__, _pending));

    return type;
}

void WaitForFirstResult__Uno_Net_IPEndPoint_____ObjInit(WaitForFirstResult__Uno_Net_IPEndPoint__* __this, ::uObject* pending, ::uDelegate* onNoResult)
{
    __this->_pending = ::app::Uno::Collections::EnumerableExtensions__ToList__Outracks_Simulator_Task_Uno_Net_IPEndPoint___(NULL, pending);
    __this->_onNoResult = onNoResult;
}

::uArray* WaitForFirstResult__Uno_Net_IPEndPoint____Execute(WaitForFirstResult__Uno_Net_IPEndPoint__* __this)
{
    ::uArray* array_123;
    int index_124 = int();
    int length_125 = int();
    ::app::Uno::Collections::List__Uno_Exception* exceptions = ::app::Uno::Collections::List__Uno_Exception__New_1(NULL);

    while (::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___*>(__this->_pending)->Count() != 0)
    {
        for (array_123 = ::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___*>(__this->_pending)->ToArray(), index_124 = 0, length_125 = ::uPtr< ::uArray*>(array_123)->Length(); index_124 < length_125; ++index_124)
        {
            ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* task = ::uPtr< ::uArray*>(array_123)->Item< ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__*>(index_124);

            if (::uPtr< ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__*>(task)->IsCompleted())
            {
                if (::uPtr< ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__*>(task)->IsFaulted())
                {
                    ::uPtr< ::app::Uno::Collections::List__Uno_Exception*>(exceptions)->Add(::uPtr< ::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__*>(task)->Exception());
                }
                else
                {
                    return task->Result();
                }

                ::uPtr< ::app::Uno::Collections::List__Outracks_Simulator_Task_Uno_Net_IPEndPoint___*>(__this->_pending)->Remove(task);
            }

            ::app::Uno::Threading::Thread__Sleep(NULL, 10);
        }
    }

    return ::uPtr< ::uDelegate*>(__this->_onNoResult)->Invoke< ::uArray*, ::uObject*>((::uObject*)exceptions);
}

WaitForFirstResult__Uno_Net_IPEndPoint__* WaitForFirstResult__Uno_Net_IPEndPoint____New_1(::uStatic* __this, ::uObject* pending, ::uDelegate* onNoResult)
{
    WaitForFirstResult__Uno_Net_IPEndPoint__* inst = (WaitForFirstResult__Uno_Net_IPEndPoint__*)::uAllocObject(sizeof(WaitForFirstResult__Uno_Net_IPEndPoint__), WaitForFirstResult__Uno_Net_IPEndPoint____typeof());
    inst->_ObjInit(pending, onNoResult);
    return inst;
}

}}}
