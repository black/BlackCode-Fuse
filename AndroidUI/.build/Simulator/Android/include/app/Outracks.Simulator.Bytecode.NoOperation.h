// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_NO_OPERATION_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_NO_OPERATION_H__

#include <app/Outracks.Simulator.Bytecode.Optional__string.h>
#include <app/Outracks.Simulator.Bytecode.Statement.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct NoOperation;

struct NoOperation__uType : ::app::Outracks::Simulator::Bytecode::Statement__uType
{
};

NoOperation__uType* NoOperation__typeof();

void NoOperation___ObjInit_1(NoOperation* __this, ::app::Outracks::Simulator::Bytecode::Optional__string description);
NoOperation* NoOperation__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Optional__string description);
NoOperation* NoOperation__Read_1(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* NoOperation__ToString(NoOperation* __this);
void NoOperation__Write_1(NoOperation* __this, ::app::Uno::IO::BinaryWriter* writer);
void NoOperation__Write_2(::uStatic* __this, NoOperation* s, ::app::Uno::IO::BinaryWriter* writer);

struct NoOperation : ::app::Outracks::Simulator::Bytecode::Statement
{
    ::app::Outracks::Simulator::Bytecode::Optional__string Description;

    void _ObjInit_1(::app::Outracks::Simulator::Bytecode::Optional__string description) { NoOperation___ObjInit_1(this, description); }
    void Write_1(::app::Uno::IO::BinaryWriter* writer) { NoOperation__Write_1(this, writer); }
};

}}}}


#endif
