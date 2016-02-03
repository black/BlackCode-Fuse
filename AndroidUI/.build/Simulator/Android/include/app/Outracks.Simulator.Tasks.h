// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_TASKS_H__
#define __APP_OUTRACKS_SIMULATOR_TASKS_H__

#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct Task__Outracks_Simulator_ISimulatorClient; } } }
namespace app { namespace Outracks { namespace Simulator { struct Task__Uno_Net_IPEndPoint__; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct Tasks__uType : ::uClassType
{
};

Tasks__uType* Tasks__typeof();

::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* Tasks__Run__Outracks_Simulator_ISimulatorClient(::uStatic* __this, ::uDelegate* method);
::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* Tasks__Run__Uno_Net_IPEndPoint__(::uStatic* __this, ::uDelegate* method);
::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* Tasks__WaitForFirstResult__Outracks_Simulator_ISimulatorClient(::uStatic* __this, ::uObject* tasks, ::uDelegate* onNoResult);
::app::Outracks::Simulator::Task__Uno_Net_IPEndPoint__* Tasks__WaitForFirstResult__Uno_Net_IPEndPoint__(::uStatic* __this, ::uObject* tasks, ::uDelegate* onNoResult);

}}}


#endif
