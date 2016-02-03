// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.ISimulatorClient.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct MessageFromClient;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct MessageToClient;}}}}
namespace g{namespace Outracks{namespace Simulator{struct ConcurrentQueue;}}}
namespace g{namespace Outracks{namespace Simulator{struct SimulatorClient;}}}
namespace g{namespace Outracks{namespace Simulator{struct Task;}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{struct NetworkStream;}}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}
namespace g{namespace Uno{namespace Net{struct IPEndPoint;}}}
namespace g{namespace Uno{namespace Threading{struct Thread;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class SimulatorClient :1256
// {
struct SimulatorClient_type : uType
{
    ::g::Outracks::Simulator::ISimulatorClient interface0;
    ::g::Uno::IDisposable interface1;
};

SimulatorClient_type* SimulatorClient_typeof();
void SimulatorClient__ctor__fn(SimulatorClient* __this, ::g::Uno::Net::Sockets::Socket* socket);
void SimulatorClient__Connect_fn(uObject* simulatorEndpoints, ::g::Outracks::Simulator::Task** __retval);
void SimulatorClient__Dispose_fn(SimulatorClient* __this);
void SimulatorClient__get_IncommingMessages_fn(SimulatorClient* __this, ::g::Outracks::Simulator::ConcurrentQueue** __retval);
void SimulatorClient__get_IsOnline_fn(SimulatorClient* __this, bool* __retval);
void SimulatorClient__New1_fn(::g::Uno::Net::Sockets::Socket* socket, SimulatorClient** __retval);
void SimulatorClient__OnNoResult_fn(uObject* exceptions, uObject** __retval);
void SimulatorClient__ReadLoop_fn(SimulatorClient* __this);
void SimulatorClient__Send_fn(SimulatorClient* __this, ::g::Outracks::Simulator::Protocol::MessageFromClient* message);
void SimulatorClient__WriteLoop_fn(SimulatorClient* __this);

struct SimulatorClient : uObject
{
    uStrong< ::g::Outracks::Simulator::ConcurrentQueue*> _messagesFromClient;
    uStrong< ::g::Outracks::Simulator::ConcurrentQueue*> _messagesToClient;
    uStrong< ::g::Uno::IO::BinaryReader*> _reader;
    uStrong< ::g::Uno::Threading::Thread*> _readWorker;
    bool _running;
    uStrong< ::g::Uno::Net::Sockets::Socket*> _socket;
    uStrong< ::g::Uno::Net::Sockets::NetworkStream*> _stream;
    uStrong< ::g::Uno::IO::BinaryWriter*> _writer;
    uStrong< ::g::Uno::Threading::Thread*> _writeWorker;

    void ctor_(::g::Uno::Net::Sockets::Socket* socket);
    void Dispose();
    ::g::Outracks::Simulator::ConcurrentQueue* IncommingMessages();
    bool IsOnline();
    void ReadLoop();
    void Send(::g::Outracks::Simulator::Protocol::MessageFromClient* message);
    void WriteLoop();
    static ::g::Outracks::Simulator::Task* Connect(uObject* simulatorEndpoints);
    static SimulatorClient* New1(::g::Uno::Net::Sockets::Socket* socket);
    static uObject* OnNoResult(uObject* exceptions);
};
// }

}}} // ::g::Outracks::Simulator
