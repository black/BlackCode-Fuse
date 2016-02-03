// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_CALL_LAMBDA_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_CALL_LAMBDA_H__

#include <app/Outracks.Simulator.Bytecode.Expression.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct ImmutableList__Outracks_Simulator_Bytecode_Expression; } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct CallLambda;

struct CallLambda__uType : ::app::Outracks::Simulator::Bytecode::Expression__uType
{
};

CallLambda__uType* CallLambda__typeof();

void CallLambda___ObjInit_2(CallLambda* __this, ::app::Outracks::Simulator::Bytecode::Expression* lambda, ::uArray* arguments);
void CallLambda___ObjInit_3(CallLambda* __this, ::app::Outracks::Simulator::Bytecode::Expression* lanbda, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments);
CallLambda* CallLambda__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* lambda, ::uArray* arguments);
CallLambda* CallLambda__New_2(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* lanbda, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments);
CallLambda* CallLambda__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* CallLambda__ToString(CallLambda* __this);
void CallLambda__Write_2(::uStatic* __this, CallLambda* o, ::app::Uno::IO::BinaryWriter* writer);

struct CallLambda : ::app::Outracks::Simulator::Bytecode::Expression
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Expression*> Lambda;
    ::uStrong< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression*> Arguments;

    void _ObjInit_2(::app::Outracks::Simulator::Bytecode::Expression* lambda, ::uArray* arguments) { CallLambda___ObjInit_2(this, lambda, arguments); }
    void _ObjInit_3(::app::Outracks::Simulator::Bytecode::Expression* lanbda, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Expression* arguments) { CallLambda___ObjInit_3(this, lanbda, arguments); }
};

}}}}


#endif
