// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_RETURN_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_RETURN_H__

#include <app/Outracks.Simulator.Bytecode.Statement.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Expression; } } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct Return;

struct Return__uType : ::app::Outracks::Simulator::Bytecode::Statement__uType
{
};

Return__uType* Return__typeof();

void Return___ObjInit_1(Return* __this, ::app::Outracks::Simulator::Bytecode::Expression* value);
Return* Return__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* value);
Return* Return__Read_1(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* Return__ToString(Return* __this);
void Return__Write_1(Return* __this, ::app::Uno::IO::BinaryWriter* writer);
void Return__Write_2(::uStatic* __this, Return* s, ::app::Uno::IO::BinaryWriter* writer);

struct Return : ::app::Outracks::Simulator::Bytecode::Statement
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Expression*> Value;

    void _ObjInit_1(::app::Outracks::Simulator::Bytecode::Expression* value) { Return___ObjInit_1(this, value); }
    void Write_1(::app::Uno::IO::BinaryWriter* writer) { Return__Write_1(this, writer); }
};

}}}}


#endif
