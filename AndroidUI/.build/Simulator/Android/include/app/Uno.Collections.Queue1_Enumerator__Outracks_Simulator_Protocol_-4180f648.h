// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_QUEUE1_ENUMERATOR__OUTRACKS_SIMULATOR_PROTOCOL__4180F648_H__
#define __APP_UNO_COLLECTIONS_QUEUE1_ENUMERATOR__OUTRACKS_SIMULATOR_PROTOCOL__4180F648_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct MessageToClient; } } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Outracks_Simulator_Protocol_MessageToClient; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient;

struct Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__uType* Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__typeof();

void Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient___ObjInit(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient* __this, ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageToClient* source);
void Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__Dispose(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient* __this);
bool Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__MoveNext(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient* __this);
Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__New_1(::uStatic* __this, ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageToClient* source);
void Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__Uno_Collections_IEnumerator_Reset(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient* __this);

struct Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient
{
    ::uStrong< ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageToClient*> _source;
    int _version;
    int _index;
    ::uStrong< ::app::Outracks::Simulator::Protocol::MessageToClient*> _current;

    void _ObjInit(::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageToClient* source) { Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient___ObjInit(this, source); }
    void Dispose() { Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__Dispose(this); }
    bool MoveNext() { return Queue1_Enumerator__Outracks_Simulator_Protocol_MessageToClient__MoveNext(this); }
};

}}}


#endif
