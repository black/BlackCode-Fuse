// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_TASK__OUTRACKS_SIMULATOR_I_SIMULATOR_CLIENT_H__
#define __APP_OUTRACKS_SIMULATOR_TASK__OUTRACKS_SIMULATOR_I_SIMULATOR_CLIENT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Threading { struct Mutex; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Outracks {
namespace Simulator {

struct Task__Outracks_Simulator_ISimulatorClient;

struct Task__Outracks_Simulator_ISimulatorClient__uType : ::uClassType
{
};

Task__Outracks_Simulator_ISimulatorClient__uType* Task__Outracks_Simulator_ISimulatorClient__typeof();

void Task__Outracks_Simulator_ISimulatorClient___ObjInit(Task__Outracks_Simulator_ISimulatorClient* __this, ::uDelegate* wait);
::app::Uno::Exception* Task__Outracks_Simulator_ISimulatorClient__get_Exception(Task__Outracks_Simulator_ISimulatorClient* __this);
bool Task__Outracks_Simulator_ISimulatorClient__get_IsCompleted(Task__Outracks_Simulator_ISimulatorClient* __this);
bool Task__Outracks_Simulator_ISimulatorClient__get_IsFaulted(Task__Outracks_Simulator_ISimulatorClient* __this);
::uObject* Task__Outracks_Simulator_ISimulatorClient__get_Result(Task__Outracks_Simulator_ISimulatorClient* __this);
Task__Outracks_Simulator_ISimulatorClient* Task__Outracks_Simulator_ISimulatorClient__New_1(::uStatic* __this, ::uDelegate* wait);
void Task__Outracks_Simulator_ISimulatorClient__set_Exception(Task__Outracks_Simulator_ISimulatorClient* __this, ::app::Uno::Exception* value);
void Task__Outracks_Simulator_ISimulatorClient__set_IsCompleted(Task__Outracks_Simulator_ISimulatorClient* __this, bool value);
void Task__Outracks_Simulator_ISimulatorClient__set_IsFaulted(Task__Outracks_Simulator_ISimulatorClient* __this, bool value);
void Task__Outracks_Simulator_ISimulatorClient__set_Result(Task__Outracks_Simulator_ISimulatorClient* __this, ::uObject* value);

struct Task__Outracks_Simulator_ISimulatorClient : ::uObject
{
    ::uStrong< ::app::Uno::Threading::Mutex*> Mutex;
    ::uStrong< ::uDelegate*> _wait;
    ::uStrong< ::uObject*> _result;
    bool _IsCompleted;
    bool _IsFaulted;
    ::uStrong< ::app::Uno::Exception*> _Exception;

    void _ObjInit(::uDelegate* wait) { Task__Outracks_Simulator_ISimulatorClient___ObjInit(this, wait); }
    ::app::Uno::Exception* Exception() { return Task__Outracks_Simulator_ISimulatorClient__get_Exception(this); }
    bool IsCompleted() { return Task__Outracks_Simulator_ISimulatorClient__get_IsCompleted(this); }
    bool IsFaulted() { return Task__Outracks_Simulator_ISimulatorClient__get_IsFaulted(this); }
    ::uObject* Result() { return Task__Outracks_Simulator_ISimulatorClient__get_Result(this); }
    void Exception(::app::Uno::Exception* value) { Task__Outracks_Simulator_ISimulatorClient__set_Exception(this, value); }
    void IsCompleted(bool value) { Task__Outracks_Simulator_ISimulatorClient__set_IsCompleted(this, value); }
    void IsFaulted(bool value) { Task__Outracks_Simulator_ISimulatorClient__set_IsFaulted(this, value); }
    void Result(::uObject* value) { Task__Outracks_Simulator_ISimulatorClient__set_Result(this, value); }
};

}}}


#endif
