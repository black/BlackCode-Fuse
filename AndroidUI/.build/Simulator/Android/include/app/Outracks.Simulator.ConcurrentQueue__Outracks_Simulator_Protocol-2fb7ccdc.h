// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_CONCURRENT_QUEUE__OUTRACKS_SIMULATOR_PROTOCOL_2FB7CCDC_H__
#define __APP_OUTRACKS_SIMULATOR_CONCURRENT_QUEUE__OUTRACKS_SIMULATOR_PROTOCOL_2FB7CCDC_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct MessageFromClient; } } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Outracks_Simulator_Protocol_MessageFromClient; } } }
namespace app { namespace Uno { namespace Threading { struct Mutex; } } }

namespace app {
namespace Outracks {
namespace Simulator {

struct ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient;

struct ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__uType : ::uClassType
{
};

ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__uType* ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__typeof();

void ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient___ObjInit(ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient* __this);
void ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__Enqueue(ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient* __this, ::app::Outracks::Simulator::Protocol::MessageFromClient* data);
ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient* ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__New_1(::uStatic* __this);
bool ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__TryDequeue(ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient* __this, ::app::Outracks::Simulator::Protocol::MessageFromClient** data);

struct ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageFromClient*> _queue;
    ::uStrong< ::app::Uno::Threading::Mutex*> _mutex;

    void _ObjInit() { ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient___ObjInit(this); }
    void Enqueue(::app::Outracks::Simulator::Protocol::MessageFromClient* data) { ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__Enqueue(this, data); }
    bool TryDequeue(::app::Outracks::Simulator::Protocol::MessageFromClient** data) { return ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__TryDequeue(this, data); }
};

}}}


#endif
