// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Messages\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_PROTOCOL_UNHANDLED_EXCEPTION_H__
#define __APP_OUTRACKS_SIMULATOR_PROTOCOL_UNHANDLED_EXCEPTION_H__

#include <app/Outracks.Simulator.Protocol.MessageFromClient.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Protocol {

struct UnhandledException;

struct UnhandledException__uType : ::app::Outracks::Simulator::Protocol::MessageFromClient__uType
{
};

UnhandledException__uType* UnhandledException__typeof();

void UnhandledException___ObjInit_1(UnhandledException* __this, ::uString* clientId, ::uString* clientName, ::uString* message, ::uString* stackTrace, ::uString* type);
UnhandledException* UnhandledException__New_1(::uStatic* __this, ::uString* clientId, ::uString* clientName, ::uString* message, ::uString* stackTrace, ::uString* type);
UnhandledException* UnhandledException__Read_1(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
void UnhandledException__Write_1(::uStatic* __this, UnhandledException* message, ::app::Uno::IO::BinaryWriter* writer);

struct UnhandledException : ::app::Outracks::Simulator::Protocol::MessageFromClient
{
    ::uStrong< ::uString*> ClientId;
    ::uStrong< ::uString*> ClientName;
    ::uStrong< ::uString*> Message;
    ::uStrong< ::uString*> StackTrace;
    ::uStrong< ::uString*> Type;

    void _ObjInit_1(::uString* clientId, ::uString* clientName, ::uString* message, ::uString* stackTrace, ::uString* type) { UnhandledException___ObjInit_1(this, clientId, clientName, message, stackTrace, type); }
};

}}}}


#endif
