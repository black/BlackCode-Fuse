// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_READ_VARIABLE_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_READ_VARIABLE_H__

#include <app/Outracks.Simulator.Bytecode.Expression.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Variable; } } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct ReadVariable;

struct ReadVariable__uType : ::app::Outracks::Simulator::Bytecode::Expression__uType
{
};

ReadVariable__uType* ReadVariable__typeof();

void ReadVariable___ObjInit_2(ReadVariable* __this, ::app::Outracks::Simulator::Bytecode::Variable* variable);
ReadVariable* ReadVariable__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Variable* variable);
ReadVariable* ReadVariable__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* ReadVariable__ToString(ReadVariable* __this);
void ReadVariable__Write_2(ReadVariable* __this, ::app::Uno::IO::BinaryWriter* writer);
void ReadVariable__Write_3(::uStatic* __this, ReadVariable* o, ::app::Uno::IO::BinaryWriter* writer);

struct ReadVariable : ::app::Outracks::Simulator::Bytecode::Expression
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Variable*> Variable;

    void _ObjInit_2(::app::Outracks::Simulator::Bytecode::Variable* variable) { ReadVariable___ObjInit_2(this, variable); }
    void Write_2(::app::Uno::IO::BinaryWriter* writer) { ReadVariable__Write_2(this, writer); }
};

}}}}


#endif
