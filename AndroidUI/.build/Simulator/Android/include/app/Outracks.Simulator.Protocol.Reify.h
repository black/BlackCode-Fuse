// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Messages\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_PROTOCOL_REIFY_H__
#define __APP_OUTRACKS_SIMULATOR_PROTOCOL_REIFY_H__

#include <app/Outracks.Simulator.Protocol.MessageToClient.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Lambda; } } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Protocol {

struct Reify;

struct Reify__uType : ::app::Outracks::Simulator::Protocol::MessageToClient__uType
{
};

Reify__uType* Reify__typeof();

void Reify___ObjInit_1(Reify* __this, ::app::Outracks::Simulator::Bytecode::Lambda* appMutator);
::uString* Reify__get_BinaryFormat(::uStatic* __this);
Reify* Reify__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Lambda* appMutator);
Reify* Reify__Read_1(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* Reify__ToString(Reify* __this);
void Reify__Write_1(::uStatic* __this, Reify* message, ::app::Uno::IO::BinaryWriter* writer);

struct Reify : ::app::Outracks::Simulator::Protocol::MessageToClient
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Lambda*> AppMutator;

    void _ObjInit_1(::app::Outracks::Simulator::Bytecode::Lambda* appMutator) { Reify___ObjInit_1(this, appMutator); }
};

}}}}


#endif
