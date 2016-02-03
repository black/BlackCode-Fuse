#include <app/Outracks.Simulator.ConcurrentQueue__Outracks_Simulator_Protocol-2fb7ccdc.h>
#include <app/Outracks.Simulator.ConcurrentQueue__Outracks_Simulator_Protocol-53fe6996.h>
#include <app/Outracks.Simulator.Protocol.MessageFromClient.h>
#include <app/Outracks.Simulator.Protocol.MessageToClient.h>
#include <app/Uno.Bool.h>
#include <app/Uno.Collections.Queue__Outracks_Simulator_Protocol_MessageFromClient.h>
#include <app/Uno.Collections.Queue__Outracks_Simulator_Protocol_MessageToClient.h>
#include <app/Uno.Int.h>
#include <app/Uno.Threading.Mutex.h>

namespace app {
namespace Outracks {
namespace Simulator {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__uType* ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__typeof()
{
    static ::uStaticStrong<ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__uType*> type;
    if (type != NULL) return type;

    type = (ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__uType*)::uAllocClassType(sizeof(ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__uType), "Outracks.Simulator.ConcurrentQueue<Outracks.Simulator.Protocol.MessageFromClient>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_mutex", offsetof(ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient, _mutex),
        "_queue", offsetof(ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient, _queue));

    type->SetFields(2,
        ::uNewField("_mutex", NULL, offsetof(ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient, _mutex), ::app::Uno::Threading::Mutex__typeof()),
        ::uNewField("_queue", NULL, offsetof(ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient, _queue), ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageFromClient__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Enqueue", ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__Enqueue, 0, false, ::app::Outracks::Simulator::Protocol::MessageFromClient__typeof()),
        ::uNewFunction(".ctor", ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__New_1, 0, true, ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__typeof()),
        ::uNewFunction("TryDequeue", ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__TryDequeue, 0, false, ::app::Uno::Bool__typeof(), ::app::Outracks::Simulator::Protocol::MessageFromClient__typeof()));

    ::uRegisterType(type);
    return type;
}

void ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient___ObjInit(ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient* __this)
{
    __this->_queue = ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageFromClient__New_1(NULL);
    __this->_mutex = ::app::Uno::Threading::Mutex__Create(NULL);
}

void ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__Enqueue(ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient* __this, ::app::Outracks::Simulator::Protocol::MessageFromClient* data)
{
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Lock();
    ::uPtr< ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageFromClient*>(__this->_queue)->Enqueue(data);
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
}

ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient* ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__New_1(::uStatic* __this)
{
    ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient* inst = (ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient*)::uAllocObject(sizeof(ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient), ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__typeof());
    inst->_ObjInit();
    return inst;
}

bool ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient__TryDequeue(ConcurrentQueue__Outracks_Simulator_Protocol_MessageFromClient* __this, ::app::Outracks::Simulator::Protocol::MessageFromClient** data)
{
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Lock();
    bool result = false;

    if (::uPtr< ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageFromClient*>(__this->_queue)->Count() != 0)
    {
        *data = ::uPtr< ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageFromClient*>(__this->_queue)->Dequeue();
        result = true;
    }
    else
    {
        *data = NULL;
    }

    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
    return result;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Concurrency\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__uType* ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__typeof()
{
    static ::uStaticStrong<ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__uType*> type;
    if (type != NULL) return type;

    type = (ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__uType*)::uAllocClassType(sizeof(ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__uType), "Outracks.Simulator.ConcurrentQueue<Outracks.Simulator.Protocol.MessageToClient>", false, 0, 2, 0);

    type->SetStrongRefs(
        "_mutex", offsetof(ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient, _mutex),
        "_queue", offsetof(ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient, _queue));

    type->SetFields(2,
        ::uNewField("_mutex", NULL, offsetof(ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient, _mutex), ::app::Uno::Threading::Mutex__typeof()),
        ::uNewField("_queue", NULL, offsetof(ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient, _queue), ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageToClient__typeof()));

    type->SetFunctions(3,
        ::uNewFunctionVoid("Enqueue", ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__Enqueue, 0, false, ::app::Outracks::Simulator::Protocol::MessageToClient__typeof()),
        ::uNewFunction(".ctor", ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__New_1, 0, true, ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__typeof()),
        ::uNewFunction("TryDequeue", ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__TryDequeue, 0, false, ::app::Uno::Bool__typeof(), ::app::Outracks::Simulator::Protocol::MessageToClient__typeof()));

    ::uRegisterType(type);
    return type;
}

void ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient___ObjInit(ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient* __this)
{
    __this->_queue = ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageToClient__New_1(NULL);
    __this->_mutex = ::app::Uno::Threading::Mutex__Create(NULL);
}

void ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__Enqueue(ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient* __this, ::app::Outracks::Simulator::Protocol::MessageToClient* data)
{
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Lock();
    ::uPtr< ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageToClient*>(__this->_queue)->Enqueue(data);
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
}

ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient* ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__New_1(::uStatic* __this)
{
    ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient* inst = (ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient*)::uAllocObject(sizeof(ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient), ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__typeof());
    inst->_ObjInit();
    return inst;
}

bool ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient__TryDequeue(ConcurrentQueue__Outracks_Simulator_Protocol_MessageToClient* __this, ::app::Outracks::Simulator::Protocol::MessageToClient** data)
{
    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Lock();
    bool result = false;

    if (::uPtr< ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageToClient*>(__this->_queue)->Count() != 0)
    {
        *data = ::uPtr< ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageToClient*>(__this->_queue)->Dequeue();
        result = true;
    }
    else
    {
        *data = NULL;
    }

    ::uPtr< ::app::Uno::Threading::Mutex*>(__this->_mutex)->Unlock();
    return result;
}

}}}
