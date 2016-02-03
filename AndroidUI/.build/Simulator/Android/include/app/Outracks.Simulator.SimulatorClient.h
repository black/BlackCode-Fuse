// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_SIMULATOR_CLIENT_H__
#define __APP_OUTRACKS_SIMULATOR_SIMULATOR_CLIENT_H__

#include <app/Outracks.Simulator.ISimulatorClient.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct MessageFromClient; } } } }
namespace app { namespace Outracks { namespace Simulator { struct ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient; } } }
namespace app { namespace Outracks { namespace Simulator { struct ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient; } } }
namespace app { namespace Outracks { namespace Simulator { struct Task__Outracks_Simulator_ISimulatorClient; } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }
namespace app { namespace Uno { namespace Net { namespace Sockets { struct NetworkStream; } } } }
namespace app { namespace Uno { namespace Net { namespace Sockets { struct Socket; } } } }
namespace app { namespace Uno { namespace Threading { struct Thread; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct SimulatorClient;

struct SimulatorClient__uType : ::uClassType
{
    ::app::Outracks::Simulator::ISimulatorClient __interface_0;
    ::app::Uno::IDisposable __interface_1;
};

SimulatorClient__uType* SimulatorClient__typeof();

void SimulatorClient___ObjInit(SimulatorClient* __this, ::app::Uno::Net::Sockets::Socket* socket);
::app::Outracks::Simulator::Task__Outracks_Simulator_ISimulatorClient* SimulatorClient__Connect(::uStatic* __this, ::uObject* simulatorEndpoints);
void SimulatorClient__Dispose(SimulatorClient* __this);
::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient* SimulatorClient__get_IncommingMessages(SimulatorClient* __this);
SimulatorClient* SimulatorClient__New_1(::uStatic* __this, ::app::Uno::Net::Sockets::Socket* socket);
::uObject* SimulatorClient__OnNoResult(::uStatic* __this, ::uObject* exceptions);
void SimulatorClient__ReadLoop(SimulatorClient* __this);
void SimulatorClient__Send(SimulatorClient* __this, ::app::Outracks::Simulator::Protocol::MessageFromClient* message);
void SimulatorClient__WriteLoop(SimulatorClient* __this);

struct SimulatorClient : ::uObject
{
    ::uStrong< ::app::Uno::Net::Sockets::Socket*> _socket;
    ::uStrong< ::app::Uno::Net::Sockets::NetworkStream*> _stream;
    ::uStrong< ::app::Uno::IO::BinaryWriter*> _writer;
    ::uStrong< ::app::Uno::IO::BinaryReader*> _reader;
    ::uStrong< ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient*> _messagesFromClient;
    ::uStrong< ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient*> _messagesToClient;
    ::uStrong< ::app::Uno::Threading::Thread*> _readWorker;
    ::uStrong< ::app::Uno::Threading::Thread*> _writeWorker;
    bool _running;

    void _ObjInit(::app::Uno::Net::Sockets::Socket* socket) { SimulatorClient___ObjInit(this, socket); }
    void Dispose() { SimulatorClient__Dispose(this); }
    ::app::Outracks::Simulator::ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient* IncommingMessages() { return SimulatorClient__get_IncommingMessages(this); }
    void ReadLoop() { SimulatorClient__ReadLoop(this); }
    void Send(::app::Outracks::Simulator::Protocol::MessageFromClient* message) { SimulatorClient__Send(this, message); }
    void WriteLoop() { SimulatorClient__WriteLoop(this); }
};

}}}


#endif
