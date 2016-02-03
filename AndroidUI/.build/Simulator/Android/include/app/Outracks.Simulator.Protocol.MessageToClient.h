// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Messages\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_PROTOCOL_MESSAGE_TO_CLIENT_H__
#define __APP_OUTRACKS_SIMULATOR_PROTOCOL_MESSAGE_TO_CLIENT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct State; } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Protocol {

struct MessageToClient;

struct MessageToClient__uType : ::uClassType
{
};

MessageToClient__uType* MessageToClient__typeof();

void MessageToClient___ObjInit(MessageToClient* __this);
void MessageToClient__Match(MessageToClient* __this, ::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3);
::uChar MessageToClient__Match__char(MessageToClient* __this, ::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3);
::app::Outracks::Simulator::State* MessageToClient__Match__Outracks_Simulator_State(MessageToClient* __this, ::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3);
MessageToClient* MessageToClient__Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
void MessageToClient__Write(::uStatic* __this, MessageToClient* message, ::app::Uno::IO::BinaryWriter* writer);

struct MessageToClient : ::uObject
{
    void _ObjInit() { MessageToClient___ObjInit(this); }
    void Match(::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3) { MessageToClient__Match(this, a1, a2, a3); }
    ::uChar Match__char(::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3) { return MessageToClient__Match__char(this, a1, a2, a3); }
    ::app::Outracks::Simulator::State* Match__Outracks_Simulator_State(::uDelegate* a1, ::uDelegate* a2, ::uDelegate* a3) { return MessageToClient__Match__Outracks_Simulator_State(this, a1, a2, a3); }
};

}}}}


#endif
