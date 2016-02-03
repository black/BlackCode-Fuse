// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_BIND_VARIABLE_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_BIND_VARIABLE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Expression; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Variable; } } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct BindVariable;

extern ::uStaticStrong< ::uDelegate*> BindVariable__Read;
extern ::uStaticStrong< ::uDelegate*> BindVariable__Write;

struct BindVariable__uType : ::uClassType
{
};

BindVariable__uType* BindVariable__typeof();

void BindVariable___ObjInit(BindVariable* __this, ::app::Outracks::Simulator::Bytecode::Variable* variable, ::app::Outracks::Simulator::Bytecode::Expression* expression);
BindVariable* BindVariable___Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
void BindVariable___TypeInit(::uStatic* __this);
void BindVariable___Write(::uStatic* __this, BindVariable* s, ::app::Uno::IO::BinaryWriter* writer);
BindVariable* BindVariable__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Variable* variable, ::app::Outracks::Simulator::Bytecode::Expression* expression);
::uString* BindVariable__ToString(BindVariable* __this);

struct BindVariable : ::uObject
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Variable*> Variable;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Expression*> Expression;

    void _ObjInit(::app::Outracks::Simulator::Bytecode::Variable* variable, ::app::Outracks::Simulator::Bytecode::Expression* expression) { BindVariable___ObjInit(this, variable, expression); }
};

}}}}


#endif
