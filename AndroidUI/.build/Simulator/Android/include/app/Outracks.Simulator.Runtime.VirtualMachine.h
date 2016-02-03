// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\Runtime\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_RUNTIME_VIRTUAL_MACHINE_H__
#define __APP_OUTRACKS_SIMULATOR_RUNTIME_VIRTUAL_MACHINE_H__

#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Lambda; } } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Runtime {

struct VirtualMachine__uType : ::uClassType
{
};

VirtualMachine__uType* VirtualMachine__typeof();

::uObject* VirtualMachine__Execute(::uStatic* __this, ::uObject* reflection, ::app::Outracks::Simulator::Bytecode::Lambda* lambda, ::uArray* arguments);
::uObject* VirtualMachine__Execute_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Lambda* lambda, ::uArray* arguments);

}}}}


#endif
