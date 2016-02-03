// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Runtime\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_ENVIRONMENT_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_ENVIRONMENT_H__

#include <app/Outracks.Simulator.Bytecode.Optional__Outracks_Simulator_Runtim-2e4b6588.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Variable; } } } }
namespace app { namespace Outracks { namespace Simulator { struct ImmutableList__Outracks_Simulator_Bytecode_Parameter; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__Outracks_Simulator_Bytecode_Variable__object; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct Environment;

struct Environment__uType : ::uClassType
{
};

Environment__uType* Environment__typeof();

void Environment___ObjInit(Environment* __this, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Runtime_Environment parent);
void Environment__Bind(Environment* __this, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter* parameters, ::uArray* arguments);
void Environment__Bind_1(Environment* __this, ::app::Outracks::Simulator::Bytecode::Variable* variable, ::uObject* value);
::uObject* Environment__GetValue(Environment* __this, ::app::Outracks::Simulator::Bytecode::Variable* variable);
Environment* Environment__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Runtime_Environment parent);

struct Environment : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__Outracks_Simulator_Bytecode_Variable__object*> _variableBindings;
    ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Runtime_Environment _parent;

    void _ObjInit(::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Runtime_Environment parent) { Environment___ObjInit(this, parent); }
    void Bind(::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_Parameter* parameters, ::uArray* arguments) { Environment__Bind(this, parameters, arguments); }
    void Bind_1(::app::Outracks::Simulator::Bytecode::Variable* variable, ::uObject* value) { Environment__Bind_1(this, variable, value); }
    ::uObject* GetValue(::app::Outracks::Simulator::Bytecode::Variable* variable) { return Environment__GetValue(this, variable); }
};

}}}}


#endif
