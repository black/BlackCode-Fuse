// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Messages\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Protocol.MessageFromClient.h>
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{struct DebugLog;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// public sealed class DebugLog :122
// {
uType* DebugLog_typeof();
void DebugLog__ctor_1_fn(DebugLog* __this, uString* clientId, uString* clientName, uString* message);
void DebugLog__New1_fn(uString* clientId, uString* clientName, uString* message, DebugLog** __retval);
void DebugLog__Read1_fn(::g::Uno::IO::BinaryReader* reader, DebugLog** __retval);
void DebugLog__Write1_fn(DebugLog* message, ::g::Uno::IO::BinaryWriter* writer);

struct DebugLog : ::g::Outracks::Simulator::Protocol::MessageFromClient
{
    uStrong<uString*> ClientId;
    uStrong<uString*> ClientName;
    uStrong<uString*> Message;

    void ctor_1(uString* clientId, uString* clientName, uString* message);
    static DebugLog* New1(uString* clientId, uString* clientName, uString* message);
    static DebugLog* Read1(::g::Uno::IO::BinaryReader* reader);
    static void Write1(DebugLog* message, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Protocol
