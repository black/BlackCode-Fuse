// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_I_SIMULATOR_CLIENT_H__
#define __APP_OUTRACKS_SIMULATOR_I_SIMULATOR_CLIENT_H__

#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct MessageFromClient; } } } }
namespace app { namespace Outracks { namespace Simulator { struct ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient; } } }

namespace app {
namespace Outracks {
namespace Simulator {

::uInterfaceType* ISimulatorClient__typeof();

struct ISimulatorClient
{
    ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient*(*__fp_get_IncommingMessages)(void*);
    void(*__fp_Send)(void*, ::app::Outracks::Simulator::Protocol::MessageFromClient*);

    static ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient* IncommingMessages(::uObject* __this) { return ((ISimulatorClient*)uGetInterfacePtr(__this, ISimulatorClient__typeof()))->__fp_get_IncommingMessages((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0)); }
    static void Send(::uObject* __this, ::app::Outracks::Simulator::Protocol::MessageFromClient* message) { ((ISimulatorClient*)uGetInterfacePtr(__this, ISimulatorClient__typeof()))->__fp_Send((::uByte*)__this + (__this->__obj_type->TypeType == uTypeTypeStruct ? sizeof(::uObject) : 0), message); }
};

}}}


#endif
