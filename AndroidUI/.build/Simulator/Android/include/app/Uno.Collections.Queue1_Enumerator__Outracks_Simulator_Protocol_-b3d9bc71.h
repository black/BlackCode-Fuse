// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_QUEUE1_ENUMERATOR__OUTRACKS_SIMULATOR_PROTOCOL__B3D9BC71_H__
#define __APP_UNO_COLLECTIONS_QUEUE1_ENUMERATOR__OUTRACKS_SIMULATOR_PROTOCOL__B3D9BC71_H__

#include <app/Uno.Collections.IEnumerator.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct MessageFromClient; } } } }
namespace app { namespace Uno { namespace Collections { struct Queue__Outracks_Simulator_Protocol_MessageFromClient; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient;

struct Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__uType : ::uStructType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Uno::Collections::IEnumerator __interface_1;
};

Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__uType* Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__typeof();

void Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient___ObjInit(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient* __this, ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageFromClient* source);
void Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__Dispose(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient* __this);
bool Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__MoveNext(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient* __this);
Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__New_1(::uStatic* __this, ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageFromClient* source);
void Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__Uno_Collections_IEnumerator_Reset(Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient* __this);

struct Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient
{
    ::uStrong< ::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageFromClient*> _source;
    int _version;
    int _index;
    ::uStrong< ::app::Outracks::Simulator::Protocol::MessageFromClient*> _current;

    void _ObjInit(::app::Uno::Collections::Queue__Outracks_Simulator_Protocol_MessageFromClient* source) { Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient___ObjInit(this, source); }
    void Dispose() { Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__Dispose(this); }
    bool MoveNext() { return Queue1_Enumerator__Outracks_Simulator_Protocol_MessageFromClient__MoveNext(this); }
};

}}}


#endif
