// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_OFFLINE_SIMULATOR_CLIENT_H__
#define __APP_OUTRACKS_SIMULATOR_OFFLINE_SIMULATOR_CLIENT_H__

#include <app/Outracks.Simulator.ISimulatorClient.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct MessageFromClient; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct MessageToClient; } } } }
namespace app { namespace Outracks { namespace Simulator { struct ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient; } } }
namespace app { namespace Outracks { namespace Simulator { struct ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct OfflineSimulatorClient;

struct OfflineSimulatorClient__uType : ::uClassType
{
    ::app::Outracks::Simulator::ISimulatorClient __interface_0;
    ::app::Uno::IDisposable __interface_1;
};

OfflineSimulatorClient__uType* OfflineSimulatorClient__typeof();

void OfflineSimulatorClient___ObjInit(OfflineSimulatorClient* __this, ::uArray* initialMessages);
void OfflineSimulatorClient__Dispose(OfflineSimulatorClient* __this);
::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient* OfflineSimulatorClient__get_IncommingMessages(OfflineSimulatorClient* __this);
OfflineSimulatorClient* OfflineSimulatorClient__New_1(::uStatic* __this, ::uArray* initialMessages);
void OfflineSimulatorClient__Send(OfflineSimulatorClient* __this, ::app::Outracks::Simulator::Protocol::MessageFromClient* message);

struct OfflineSimulatorClient : ::uObject
{
    ::uStrong< ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient*> _messagesFromClient;
    ::uStrong< ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient*> _messagesToClient;

    void _ObjInit(::uArray* initialMessages) { OfflineSimulatorClient___ObjInit(this, initialMessages); }
    void Dispose() { OfflineSimulatorClient__Dispose(this); }
    ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient* IncommingMessages() { return OfflineSimulatorClient__get_IncommingMessages(this); }
    void Send(::app::Outracks::Simulator::Protocol::MessageFromClient* message) { OfflineSimulatorClient__Send(this, message); }
};

}}}


#endif
