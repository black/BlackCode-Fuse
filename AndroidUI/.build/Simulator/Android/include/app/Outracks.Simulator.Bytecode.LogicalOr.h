// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_LOGICAL_OR_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_LOGICAL_OR_H__

#include <app/Outracks.Simulator.Bytecode.Expression.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct LogicalOr;

struct LogicalOr__uType : ::app::Outracks::Simulator::Bytecode::Expression__uType
{
};

LogicalOr__uType* LogicalOr__typeof();

void LogicalOr___ObjInit_2(LogicalOr* __this, ::app::Outracks::Simulator::Bytecode::Expression* left, ::app::Outracks::Simulator::Bytecode::Expression* right);
LogicalOr* LogicalOr__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* left, ::app::Outracks::Simulator::Bytecode::Expression* right);
LogicalOr* LogicalOr__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* LogicalOr__ToString(LogicalOr* __this);
void LogicalOr__Write_2(LogicalOr* __this, ::app::Uno::IO::BinaryWriter* writer);
void LogicalOr__Write_3(::uStatic* __this, LogicalOr* o, ::app::Uno::IO::BinaryWriter* writer);

struct LogicalOr : ::app::Outracks::Simulator::Bytecode::Expression
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Expression*> Left;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Expression*> Right;

    void _ObjInit_2(::app::Outracks::Simulator::Bytecode::Expression* left, ::app::Outracks::Simulator::Bytecode::Expression* right) { LogicalOr___ObjInit_2(this, left, right); }
    void Write_2(::app::Uno::IO::BinaryWriter* writer) { LogicalOr__Write_2(this, writer); }
};

}}}}


#endif
