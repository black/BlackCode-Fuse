// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Messages\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_PROTOCOL_EXECUTE_H__
#define __APP_OUTRACKS_SIMULATOR_PROTOCOL_EXECUTE_H__

#include <app/Outracks.Simulator.Protocol.MessageToClient.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Lambda; } } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Protocol {

struct Execute;

struct Execute__uType : ::app::Outracks::Simulator::Protocol::MessageToClient__uType
{
};

Execute__uType* Execute__typeof();

void Execute___ObjInit_1(Execute* __this, ::app::Outracks::Simulator::Bytecode::Lambda* function);
Execute* Execute__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Lambda* function);
Execute* Execute__Read_1(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* Execute__ToString(Execute* __this);
void Execute__Write_1(::uStatic* __this, Execute* message, ::app::Uno::IO::BinaryWriter* writer);

struct Execute : ::app::Outracks::Simulator::Protocol::MessageToClient
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Lambda*> Function;

    void _ObjInit_1(::app::Outracks::Simulator::Bytecode::Lambda* function) { Execute___ObjInit_1(this, function); }
};

}}}}


#endif
