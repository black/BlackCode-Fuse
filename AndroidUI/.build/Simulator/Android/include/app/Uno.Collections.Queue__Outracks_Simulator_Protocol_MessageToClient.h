// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_QUEUE__OUTRACKS_SIMULATOR_PROTOCOL_MESSAGE_TO_CLIENT_H__
#define __APP_UNO_COLLECTIONS_QUEUE__OUTRACKS_SIMULATOR_PROTOCOL_MESSAGE_TO_CLIENT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct MessageToClient; } } } }
namespace app { namespace Uno { namespace Collections { struct Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Queue__Outracks_Simulator_Protocol_MessageToClient;

struct Queue__Outracks_Simulator_Protocol_MessageToClient__uType : ::uClassType
{
};

Queue__Outracks_Simulator_Protocol_MessageToClient__uType* Queue__Outracks_Simulator_Protocol_MessageToClient__typeof();

void Queue__Outracks_Simulator_Protocol_MessageToClient___ObjInit(Queue__Outracks_Simulator_Protocol_MessageToClient* __this);
void Queue__Outracks_Simulator_Protocol_MessageToClient___ObjInit_1(Queue__Outracks_Simulator_Protocol_MessageToClient* __this, int capacity);
void Queue__Outracks_Simulator_Protocol_MessageToClient__Clear(Queue__Outracks_Simulator_Protocol_MessageToClient* __this);
bool Queue__Outracks_Simulator_Protocol_MessageToClient__Contains(Queue__Outracks_Simulator_Protocol_MessageToClient* __this, ::app::Outracks::Simulator::Protocol::MessageToClient* item);
::app::Outracks::Simulator::Protocol::MessageToClient* Queue__Outracks_Simulator_Protocol_MessageToClient__Dequeue(Queue__Outracks_Simulator_Protocol_MessageToClient* __this);
::app::Outracks::Simulator::Protocol::MessageToClient* Queue__Outracks_Simulator_Protocol_MessageToClient__ElementAt(Queue__Outracks_Simulator_Protocol_MessageToClient* __this, int index);
void Queue__Outracks_Simulator_Protocol_MessageToClient__Enqueue(Queue__Outracks_Simulator_Protocol_MessageToClient* __this, ::app::Outracks::Simulator::Protocol::MessageToClient* item);
void Queue__Outracks_Simulator_Protocol_MessageToClient__EnsureCapacity(Queue__Outracks_Simulator_Protocol_MessageToClient* __this);
int Queue__Outracks_Simulator_Protocol_MessageToClient__get_Count(Queue__Outracks_Simulator_Protocol_MessageToClient* __this);
::app::Uno::Collections::Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient Queue__Outracks_Simulator_Protocol_MessageToClient__GetEnumerator(Queue__Outracks_Simulator_Protocol_MessageToClient* __this);
Queue__Outracks_Simulator_Protocol_MessageToClient* Queue__Outracks_Simulator_Protocol_MessageToClient__New_1(::uStatic* __this);
Queue__Outracks_Simulator_Protocol_MessageToClient* Queue__Outracks_Simulator_Protocol_MessageToClient__New_2(::uStatic* __this, int capacity);
::app::Outracks::Simulator::Protocol::MessageToClient* Queue__Outracks_Simulator_Protocol_MessageToClient__Peek(Queue__Outracks_Simulator_Protocol_MessageToClient* __this);

struct Queue__Outracks_Simulator_Protocol_MessageToClient : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _head;
    int _tail;
    int _size;
    int _version;

    void _ObjInit() { Queue__Outracks_Simulator_Protocol_MessageToClient___ObjInit(this); }
    void _ObjInit_1(int capacity) { Queue__Outracks_Simulator_Protocol_MessageToClient___ObjInit_1(this, capacity); }
    void Clear() { Queue__Outracks_Simulator_Protocol_MessageToClient__Clear(this); }
    bool Contains(::app::Outracks::Simulator::Protocol::MessageToClient* item) { return Queue__Outracks_Simulator_Protocol_MessageToClient__Contains(this, item); }
    ::app::Outracks::Simulator::Protocol::MessageToClient* Dequeue() { return Queue__Outracks_Simulator_Protocol_MessageToClient__Dequeue(this); }
    ::app::Outracks::Simulator::Protocol::MessageToClient* ElementAt(int index) { return Queue__Outracks_Simulator_Protocol_MessageToClient__ElementAt(this, index); }
    void Enqueue(::app::Outracks::Simulator::Protocol::MessageToClient* item) { Queue__Outracks_Simulator_Protocol_MessageToClient__Enqueue(this, item); }
    void EnsureCapacity() { Queue__Outracks_Simulator_Protocol_MessageToClient__EnsureCapacity(this); }
    int Count() { return Queue__Outracks_Simulator_Protocol_MessageToClient__get_Count(this); }
    ::app::Uno::Collections::Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient GetEnumerator();
    ::app::Outracks::Simulator::Protocol::MessageToClient* Peek() { return Queue__Outracks_Simulator_Protocol_MessageToClient__Peek(this); }
};

}}}

#include <app/Uno.Collections.Queue1_Enumerator__Outracks_Simulator_Protocol_-4180f648.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient Queue__Outracks_Simulator_Protocol_MessageToClient::GetEnumerator() { return Queue__Outracks_Simulator_Protocol_MessageToClient__GetEnumerator(this); }

}}}


#endif
