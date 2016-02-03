// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_LAMBDA_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_LAMBDA_H__

#include <app/Outracks.Simulator.Bytecode.Expression.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Signature; } } } }
namespace app { namespace Outracks { namespace Simulator { struct ImmutableList__Outracks_Simulator_Bytecode_BindVariable; } } }
namespace app { namespace Outracks { namespace Simulator { struct ImmutableList__Outracks_Simulator_Bytecode_Statement; } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct Lambda;

struct Lambda__uType : ::app::Outracks::Simulator::Bytecode::Expression__uType
{
};

Lambda__uType* Lambda__typeof();

void Lambda___ObjInit_2(Lambda* __this, ::app::Outracks::Simulator::Bytecode::Signature* signature, ::uObject* localVariables, ::uObject* statements);
void Lambda___ObjInit_3(Lambda* __this, ::app::Outracks::Simulator::Bytecode::Signature* signature, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable* localVariables, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement* statements);
::uString* Lambda__AddStatementSeparator(::uStatic* __this, ::uObject* s);
Lambda* Lambda__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Signature* signature, ::uObject* localVariables, ::uObject* statements);
Lambda* Lambda__New_2(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Signature* signature, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable* localVariables, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement* statements);
Lambda* Lambda__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* Lambda__ToString(Lambda* __this);
void Lambda__Write_2(::uStatic* __this, Lambda* l, ::app::Uno::IO::BinaryWriter* writer);

struct Lambda : ::app::Outracks::Simulator::Bytecode::Expression
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Signature*> Signature;
    ::uStrong< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable*> LocalVariables;
    ::uStrong< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement*> Statements;

    void _ObjInit_2(::app::Outracks::Simulator::Bytecode::Signature* signature, ::uObject* localVariables, ::uObject* statements) { Lambda___ObjInit_2(this, signature, localVariables, statements); }
    void _ObjInit_3(::app::Outracks::Simulator::Bytecode::Signature* signature, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_BindVariable* localVariables, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Statement* statements) { Lambda___ObjInit_3(this, signature, localVariables, statements); }
};

}}}}


#endif
