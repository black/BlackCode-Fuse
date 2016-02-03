// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_QUEUE__OUTRACKS_SIMULATOR_PROTOCOL_MESSAGE_FROM_CLIENT_H__
#define __APP_UNO_COLLECTIONS_QUEUE__OUTRACKS_SIMULATOR_PROTOCOL_MESSAGE_FROM_CLIENT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct MessageFromClient; } } } }
namespace app { namespace Uno { namespace Collections { struct Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Queue__Outracks_Simulator_Protocol_MessageFromClient;

struct Queue__Outracks_Simulator_Protocol_MessageFromClient__uType : ::uClassType
{
};

Queue__Outracks_Simulator_Protocol_MessageFromClient__uType* Queue__Outracks_Simulator_Protocol_MessageFromClient__typeof();

void Queue__Outracks_Simulator_Protocol_MessageFromClient___ObjInit(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this);
void Queue__Outracks_Simulator_Protocol_MessageFromClient___ObjInit_1(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this, int capacity);
void Queue__Outracks_Simulator_Protocol_MessageFromClient__Clear(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this);
bool Queue__Outracks_Simulator_Protocol_MessageFromClient__Contains(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this, ::app::Outracks::Simulator::Protocol::MessageFromClient* item);
::app::Outracks::Simulator::Protocol::MessageFromClient* Queue__Outracks_Simulator_Protocol_MessageFromClient__Dequeue(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this);
::app::Outracks::Simulator::Protocol::MessageFromClient* Queue__Outracks_Simulator_Protocol_MessageFromClient__ElementAt(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this, int index);
void Queue__Outracks_Simulator_Protocol_MessageFromClient__Enqueue(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this, ::app::Outracks::Simulator::Protocol::MessageFromClient* item);
void Queue__Outracks_Simulator_Protocol_MessageFromClient__EnsureCapacity(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this);
int Queue__Outracks_Simulator_Protocol_MessageFromClient__get_Count(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this);
::app::Uno::Collections::Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient Queue__Outracks_Simulator_Protocol_MessageFromClient__GetEnumerator(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this);
Queue__Outracks_Simulator_Protocol_MessageFromClient* Queue__Outracks_Simulator_Protocol_MessageFromClient__New_1(::uStatic* __this);
Queue__Outracks_Simulator_Protocol_MessageFromClient* Queue__Outracks_Simulator_Protocol_MessageFromClient__New_2(::uStatic* __this, int capacity);
::app::Outracks::Simulator::Protocol::MessageFromClient* Queue__Outracks_Simulator_Protocol_MessageFromClient__Peek(Queue__Outracks_Simulator_Protocol_MessageFromClient* __this);

struct Queue__Outracks_Simulator_Protocol_MessageFromClient : ::uObject
{
    ::uStrong< ::uArray*> _data;
    int _head;
    int _tail;
    int _size;
    int _version;

    void _ObjInit() { Queue__Outracks_Simulator_Protocol_MessageFromClient___ObjInit(this); }
    void _ObjInit_1(int capacity) { Queue__Outracks_Simulator_Protocol_MessageFromClient___ObjInit_1(this, capacity); }
    void Clear() { Queue__Outracks_Simulator_Protocol_MessageFromClient__Clear(this); }
    bool Contains(::app::Outracks::Simulator::Protocol::MessageFromClient* item) { return Queue__Outracks_Simulator_Protocol_MessageFromClient__Contains(this, item); }
    ::app::Outracks::Simulator::Protocol::MessageFromClient* Dequeue() { return Queue__Outracks_Simulator_Protocol_MessageFromClient__Dequeue(this); }
    ::app::Outracks::Simulator::Protocol::MessageFromClient* ElementAt(int index) { return Queue__Outracks_Simulator_Protocol_MessageFromClient__ElementAt(this, index); }
    void Enqueue(::app::Outracks::Simulator::Protocol::MessageFromClient* item) { Queue__Outracks_Simulator_Protocol_MessageFromClient__Enqueue(this, item); }
    void EnsureCapacity() { Queue__Outracks_Simulator_Protocol_MessageFromClient__EnsureCapacity(this); }
    int Count() { return Queue__Outracks_Simulator_Protocol_MessageFromClient__get_Count(this); }
    ::app::Uno::Collections::Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient GetEnumerator();
    ::app::Outracks::Simulator::Protocol::MessageFromClient* Peek() { return Queue__Outracks_Simulator_Protocol_MessageFromClient__Peek(this); }
};

}}}

#include <app/Uno.Collections.Queue1_Enumerator__Outracks_Simulator_Protocol_-b3d9bc71.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient Queue__Outracks_Simulator_Protocol_MessageFromClient::GetEnumerator() { return Queue__Outracks_Simulator_Protocol_MessageFromClient__GetEnumerator(this); }

}}}


#endif
