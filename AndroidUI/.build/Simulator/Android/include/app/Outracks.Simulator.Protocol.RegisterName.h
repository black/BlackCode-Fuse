// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Messages\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_PROTOCOL_REGISTER_NAME_H__
#define __APP_OUTRACKS_SIMULATOR_PROTOCOL_REGISTER_NAME_H__

#include <app/Outracks.Simulator.Protocol.MessageFromClient.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Protocol {

struct RegisterName;

struct RegisterName__uType : ::app::Outracks::Simulator::Protocol::MessageFromClient__uType
{
};

RegisterName__uType* RegisterName__typeof();

void RegisterName___ObjInit_1(RegisterName* __this, ::uString* clientId, ::uString* clientName);
RegisterName* RegisterName__New_1(::uStatic* __this, ::uString* clientId, ::uString* clientName);
RegisterName* RegisterName__Read_1(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
void RegisterName__Write_1(::uStatic* __this, RegisterName* message, ::app::Uno::IO::BinaryWriter* writer);

struct RegisterName : ::app::Outracks::Simulator::Protocol::MessageFromClient
{
    ::uStrong< ::uString*> ClientId;
    ::uStrong< ::uString*> ClientName;

    void _ObjInit_1(::uString* clientId, ::uString* clientName) { RegisterName___ObjInit_1(this, clientId, clientName); }
};

}}}}


#endif
