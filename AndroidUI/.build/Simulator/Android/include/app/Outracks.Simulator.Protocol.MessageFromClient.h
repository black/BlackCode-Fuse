// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Messages\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_PROTOCOL_MESSAGE_FROM_CLIENT_H__
#define __APP_OUTRACKS_SIMULATOR_PROTOCOL_MESSAGE_FROM_CLIENT_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Protocol {

struct MessageFromClient;

struct MessageFromClient__uType : ::uClassType
{
};

MessageFromClient__uType* MessageFromClient__typeof();

void MessageFromClient___ObjInit(MessageFromClient* __this);
void MessageFromClient__Match(MessageFromClient* __this, ::uDelegate* a0, ::uDelegate* a1, ::uDelegate* a2);
::uChar MessageFromClient__Match__char(MessageFromClient* __this, ::uDelegate* a0, ::uDelegate* a1, ::uDelegate* a2);
MessageFromClient* MessageFromClient__Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
void MessageFromClient__Write(::uStatic* __this, MessageFromClient* message, ::app::Uno::IO::BinaryWriter* writer);

struct MessageFromClient : ::uObject
{
    void _ObjInit() { MessageFromClient___ObjInit(this); }
    void Match(::uDelegate* a0, ::uDelegate* a1, ::uDelegate* a2) { MessageFromClient__Match(this, a0, a1, a2); }
    ::uChar Match__char(::uDelegate* a0, ::uDelegate* a1, ::uDelegate* a2) { return MessageFromClient__Match__char(this, a0, a1, a2); }
};

}}}}


#endif
