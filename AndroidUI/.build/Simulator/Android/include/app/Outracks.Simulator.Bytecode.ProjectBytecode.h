// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_PROJECT_BYTECODE_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_PROJECT_BYTECODE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Lambda; } } } }
namespace app { namespace Outracks { namespace Simulator { struct ImmutableList__string; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct ProjectBytecode;

struct ProjectBytecode__uType : ::uClassType
{
};

ProjectBytecode__uType* ProjectBytecode__typeof();

void ProjectBytecode___ObjInit(ProjectBytecode* __this, ::app::Outracks::Simulator::Bytecode::Lambda* reify, ::app::Outracks::Simulator::ImmutableList__string* dependencies);
ProjectBytecode* ProjectBytecode__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Lambda* reify, ::app::Outracks::Simulator::ImmutableList__string* dependencies);
::uString* ProjectBytecode__ToString(ProjectBytecode* __this);

struct ProjectBytecode : ::uObject
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Lambda*> Reify;
    ::uStrong< ::app::Outracks::Simulator::ImmutableList__string*> Dependencies;

    void _ObjInit(::app::Outracks::Simulator::Bytecode::Lambda* reify, ::app::Outracks::Simulator::ImmutableList__string* dependencies) { ProjectBytecode___ObjInit(this, reify, dependencies); }
};

}}}}


#endif
