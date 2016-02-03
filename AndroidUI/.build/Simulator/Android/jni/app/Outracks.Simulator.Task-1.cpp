#include <app/Outracks.Simulator.ISimulatorClient.h>
#include <app/Outracks.Simulator.Task__Outracks_Simulator_ISimulatorClient.h>
#include <app/Outracks.Simulator.Task__Uno_Net_IPEndPoint__.h>
#include <app/Uno.Action.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Net.IPEndPoint.h>
#include <app/Uno.Threading.Mutex.h>

namespace app {
namespace Outracks {
namespace Simulator {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Task__Outracks_Simulator_ISimulatorClient__uType* Task__Outracks_Simulator_ISimulatorClient__typeof()
{
    static ::uStaticStrong<Task__Outracks_Simulator_ISimulatorClient__uType*> type;
    if (type != NULL) return type;

    type = (Task__Outracks_Simulator_ISimulatorClient__uType*)::uAllocClassType(sizeof(Task__Outracks_Simulator_ISimulatorClient__uType), "Outracks.Simulator.Task<Outracks.Simulator.ISimulatorClient>", false, 0, 4, 0);

    type->SetStrongRefs(
        "_Exception", offsetof(Task__Outracks_Simulator_ISimulatorClient, _Exception),
        "_result", offsetof(Task__Outracks_Simulator_ISimulatorClient, _result),
        "_wait", offsetof(Task__Outracks_Simulator_ISimulatorClient, _wait),
        "Mutex", offsetof(Task__Outracks_Simulator_ISimulatorClient, Mutex));

    type->SetFields(3,
        ::uNewField("_result", NULL, offsetof(Task__Outracks_Simulator_ISimulatorClient, _result), ::app::Outracks::Simulator::ISimulatorClient__typeof()),
        ::uNewField("_wait", NULL, offsetof(Task__Outracks_Simulator_ISimulatorClient, _wait), ::app::Uno::Action__typeof()),
        ::uNewField("Mutex", NULL, offsetof(Task__Outracks_Simulator_ISimulatorClient, Mutex), ::app::Uno::Threading::Mutex__typeof()));

    type->SetFunctions(8,
        ::uNewFunction("get_Exception", Task__Outracks_Simulator_ISimulatorClient__get_Exception, 0, false, ::app::Uno::Exception__typeof()),
        ::uNewFunction("get_IsCompleted", Task__Outracks_Simulator_ISimulatorClient__get_IsCompleted, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsFaulted", Task__Outracks_Simulator_ISimulatorClient__get_IsFaulted, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Result", Task__Outracks_Simulator_ISimulatorClient__get_Result, 0, false, ::app::Outracks::Simulator::ISimulatorClient__typeof()),
        ::uNewFunctionVoid("set_Exception", Task__Outracks_Simulator_ISimulatorClient__set_Exception, 0, false, ::app::Uno::Exception__typeof()),
        ::uNewFunctionVoid("set_IsCompleted", Task__Outracks_Simulator_ISimulatorClient__set_IsCompleted, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_IsFaulted", Task__Outracks_Simulator_ISimulatorClient__set_IsFaulted, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Result", Task__Outracks_Simulator_ISimulatorClient__set_Result, 0, false, ::app::Outracks::Simulator::ISimulatorClient__typeof()));

    ::uRegisterType(type);
    return type;
}

void Task__Outracks_Simulator_ISimulatorClient___ObjInit(Task__Outracks_Simulator_ISimulatorClient* __this, ::uDelegate* wait)
{
    __this->Mutex = ::app::Uno::Threading::Mutex__Create(NULL);
    __this->_wait = wait;
}

::app::Uno::Exception* Task__Outracks_Simulator_ISimulatorClient__get_Exception(Task__Outracks_Simulator_ISimulatorClient* __this)
{
    return __this->_Exception;
}

bool Task__Outracks_Simulator_ISimulatorClient__get_IsCompleted(Task__Outracks_Simulator_ISimulatorClient* __this)
{
    return __this->_IsCompleted;
}

bool Task__Outracks_Simulator_ISimulatorClient__get_IsFaulted(Task__Outracks_Simulator_ISimulatorClient* __this)
{
    return __this->_IsFaulted;
}

::uObject* Task__Outracks_Simulator_ISimulatorClient__get_Result(Task__Outracks_Simulator_ISimulatorClient* __this)
{
    ::uPtr< ::uDelegate*>(__this->_wait)->InvokeVoid();

    if (__this->IsFaulted())
    {
        U_THROW(__this->Exception());
    }

    return __this->_result;
}

Task__Outracks_Simulator_ISimulatorClient* Task__Outracks_Simulator_ISimulatorClient__New_1(::uStatic* __this, ::uDelegate* wait)
{
    Task__Outracks_Simulator_ISimulatorClient* inst = (Task__Outracks_Simulator_ISimulatorClient*)::uAllocObject(sizeof(Task__Outracks_Simulator_ISimulatorClient), Task__Outracks_Simulator_ISimulatorClient__typeof());
    inst->_ObjInit(wait);
    return inst;
}

void Task__Outracks_Simulator_ISimulatorClient__set_Exception(Task__Outracks_Simulator_ISimulatorClient* __this, ::app::Uno::Exception* value)
{
    __this->_Exception = value;
}

void Task__Outracks_Simulator_ISimulatorClient__set_IsCompleted(Task__Outracks_Simulator_ISimulatorClient* __this, bool value)
{
    __this->_IsCompleted = value;
}

void Task__Outracks_Simulator_ISimulatorClient__set_IsFaulted(Task__Outracks_Simulator_ISimulatorClient* __this, bool value)
{
    __this->_IsFaulted = value;
}

void Task__Outracks_Simulator_ISimulatorClient__set_Result(Task__Outracks_Simulator_ISimulatorClient* __this, ::uObject* value)
{
    __this->_result = value;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Task__Uno_Net_IPEndPoint____uType* Task__Uno_Net_IPEndPoint____typeof()
{
    static ::uStaticStrong<Task__Uno_Net_IPEndPoint____uType*> type;
    if (type != NULL) return type;

    type = (Task__Uno_Net_IPEndPoint____uType*)::uAllocClassType(sizeof(Task__Uno_Net_IPEndPoint____uType), "Outracks.Simulator.Task<Uno.Net.IPEndPoint[]>", false, 0, 4, 0);

    type->SetStrongRefs(
        "_Exception", offsetof(Task__Uno_Net_IPEndPoint__, _Exception),
        "_result", offsetof(Task__Uno_Net_IPEndPoint__, _result),
        "_wait", offsetof(Task__Uno_Net_IPEndPoint__, _wait),
        "Mutex", offsetof(Task__Uno_Net_IPEndPoint__, Mutex));

    type->SetFields(3,
        ::uNewField("_result", NULL, offsetof(Task__Uno_Net_IPEndPoint__, _result), ::uGetArrayType(::app::Uno::Net::IPEndPoint__typeof())),
        ::uNewField("_wait", NULL, offsetof(Task__Uno_Net_IPEndPoint__, _wait), ::app::Uno::Action__typeof()),
        ::uNewField("Mutex", NULL, offsetof(Task__Uno_Net_IPEndPoint__, Mutex), ::app::Uno::Threading::Mutex__typeof()));

    type->SetFunctions(8,
        ::uNewFunction("get_Exception", Task__Uno_Net_IPEndPoint____get_Exception, 0, false, ::app::Uno::Exception__typeof()),
        ::uNewFunction("get_IsCompleted", Task__Uno_Net_IPEndPoint____get_IsCompleted, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_IsFaulted", Task__Uno_Net_IPEndPoint____get_IsFaulted, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("get_Result", Task__Uno_Net_IPEndPoint____get_Result, 0, false, ::uGetArrayType(::app::Uno::Net::IPEndPoint__typeof())),
        ::uNewFunctionVoid("set_Exception", Task__Uno_Net_IPEndPoint____set_Exception, 0, false, ::app::Uno::Exception__typeof()),
        ::uNewFunctionVoid("set_IsCompleted", Task__Uno_Net_IPEndPoint____set_IsCompleted, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_IsFaulted", Task__Uno_Net_IPEndPoint____set_IsFaulted, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunctionVoid("set_Result", Task__Uno_Net_IPEndPoint____set_Result, 0, false, ::uGetArrayType(::app::Uno::Net::IPEndPoint__typeof())));

    ::uRegisterType(type);
    return type;
}

void Task__Uno_Net_IPEndPoint_____ObjInit(Task__Uno_Net_IPEndPoint__* __this, ::uDelegate* wait)
{
    __this->Mutex = ::app::Uno::Threading::Mutex__Create(NULL);
    __this->_wait = wait;
}

::app::Uno::Exception* Task__Uno_Net_IPEndPoint____get_Exception(Task__Uno_Net_IPEndPoint__* __this)
{
    return __this->_Exception;
}

bool Task__Uno_Net_IPEndPoint____get_IsCompleted(Task__Uno_Net_IPEndPoint__* __this)
{
    return __this->_IsCompleted;
}

bool Task__Uno_Net_IPEndPoint____get_IsFaulted(Task__Uno_Net_IPEndPoint__* __this)
{
    return __this->_IsFaulted;
}

::uArray* Task__Uno_Net_IPEndPoint____get_Result(Task__Uno_Net_IPEndPoint__* __this)
{
    ::uPtr< ::uDelegate*>(__this->_wait)->InvokeVoid();

    if (__this->IsFaulted())
    {
        U_THROW(__this->Exception());
    }

    return __this->_result;
}

Task__Uno_Net_IPEndPoint__* Task__Uno_Net_IPEndPoint____New_1(::uStatic* __this, ::uDelegate* wait)
{
    Task__Uno_Net_IPEndPoint__* inst = (Task__Uno_Net_IPEndPoint__*)::uAllocObject(sizeof(Task__Uno_Net_IPEndPoint__), Task__Uno_Net_IPEndPoint____typeof());
    inst->_ObjInit(wait);
    return inst;
}

void Task__Uno_Net_IPEndPoint____set_Exception(Task__Uno_Net_IPEndPoint__* __this, ::app::Uno::Exception* value)
{
    __this->_Exception = value;
}

void Task__Uno_Net_IPEndPoint____set_IsCompleted(Task__Uno_Net_IPEndPoint__* __this, bool value)
{
    __this->_IsCompleted = value;
}

void Task__Uno_Net_IPEndPoint____set_IsFaulted(Task__Uno_Net_IPEndPoint__* __this, bool value)
{
    __this->_IsFaulted = value;
}

void Task__Uno_Net_IPEndPoint____set_Result(Task__Uno_Net_IPEndPoint__* __this, ::uArray* value)
{
    __this->_result = value;
}

}}}
