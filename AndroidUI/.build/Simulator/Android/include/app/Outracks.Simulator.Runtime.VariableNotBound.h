// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Runtime\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_VARIABLE_NOT_BOUND_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_VARIABLE_NOT_BOUND_H__

#include <app/Uno.Exception.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Variable; } } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct VariableNotBound;

struct VariableNotBound__uType : ::app::Uno::Exception__uType
{
};

VariableNotBound__uType* VariableNotBound__typeof();

void VariableNotBound___ObjInit_2(VariableNotBound* __this, ::app::Outracks::Simulator::Bytecode::Variable* variable);
VariableNotBound* VariableNotBound__New_3(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Variable* variable);

struct VariableNotBound : ::app::Uno::Exception
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Variable*> Variable;

    void _ObjInit_2(::app::Outracks::Simulator::Bytecode::Variable* variable) { VariableNotBound___ObjInit_2(this, variable); }
};

}}}}


#endif
