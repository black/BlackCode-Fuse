// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_CONCURRENT_QUEUE__OUTRACKS_SIMULATOR_PROTOCOL_53FE6996_H__
#define __APP_OUTRACKS_SIMULATOR_CONCURRENT_QUEUE__OUTRACKS_SIMULATOR_PROTOCOL_53FE6996_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct MessageToClient; } } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Outracks_Simulator_Protocol_MessageToClient; } } }
namespace app { namespace Uno { namespace Threading { struct Mutex; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient;

struct ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__uType : ::uClassType
{
};

ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__uType* ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__typeof();

void ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient___ObjInit(ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient* __this);
void ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__Enqueue(ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient* __this, ::app::Outracks::Simulator::Protocol::MessageToClient* data);
ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient* ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__New_1(::uStatic* __this);
bool ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__TryDequeue(ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient* __this, ::app::Outracks::Simulator::Protocol::MessageToClient** data);

struct ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageToClient*> _queue;
    ::uStrong< ::app::Uno::Threading::Mutex*> _mutex;

    void _ObjInit() { ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient___ObjInit(this); }
    void Enqueue(::app::Outracks::Simulator::Protocol::MessageToClient* data) { ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__Enqueue(this, data); }
    bool TryDequeue(::app::Outracks::Simulator::Protocol::MessageToClient** data) { return ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__TryDequeue(this, data); }
};

}}}


#endif
