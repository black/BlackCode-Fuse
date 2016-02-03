// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Messages\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_PROTOCOL_DEBUG_LOG_H__
#define __APP_OUTRACKS_SIMULATOR_PROTOCOL_DEBUG_LOG_H__

#include <app/Outracks.Simulator.Protocol.MessageFromClient.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Protocol {

struct DebugLog;

struct DebugLog__uType : ::app::Outracks::Simulator::Protocol::MessageFromClient__uType
{
};

DebugLog__uType* DebugLog__typeof();

void DebugLog___ObjInit_1(DebugLog* __this, ::uString* clientId, ::uString* clientName, ::uString* message);
DebugLog* DebugLog__New_1(::uStatic* __this, ::uString* clientId, ::uString* clientName, ::uString* message);
DebugLog* DebugLog__Read_1(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
void DebugLog__Write_1(::uStatic* __this, DebugLog* message, ::app::Uno::IO::BinaryWriter* writer);

struct DebugLog : ::app::Outracks::Simulator::Protocol::MessageFromClient
{
    ::uStrong< ::uString*> ClientId;
    ::uStrong< ::uString*> ClientName;
    ::uStrong< ::uString*> Message;

    void _ObjInit_1(::uString* clientId, ::uString* clientName, ::uString* message) { DebugLog___ObjInit_1(this, clientId, clientName, message); }
};

}}}}


#endif
