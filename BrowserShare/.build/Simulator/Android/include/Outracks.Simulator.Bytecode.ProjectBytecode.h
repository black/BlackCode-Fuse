// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Lambda;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct ProjectBytecode;}}}}
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class ProjectBytecode :1733
// {
uType* ProjectBytecode_typeof();
void ProjectBytecode__ctor__fn(ProjectBytecode* __this, ::g::Outracks::Simulator::Bytecode::Lambda* reify, ::g::Outracks::Simulator::ImmutableList* dependencies);
void ProjectBytecode__New1_fn(::g::Outracks::Simulator::Bytecode::Lambda* reify, ::g::Outracks::Simulator::ImmutableList* dependencies, ProjectBytecode** __retval);
void ProjectBytecode__ToString_fn(ProjectBytecode* __this, uString** __retval);

struct ProjectBytecode : uObject
{
    uStrong< ::g::Outracks::Simulator::ImmutableList*> Dependencies;
    uStrong< ::g::Outracks::Simulator::Bytecode::Lambda*> Reify;

    void ctor_(::g::Outracks::Simulator::Bytecode::Lambda* reify, ::g::Outracks::Simulator::ImmutableList* dependencies);
    static ProjectBytecode* New1(::g::Outracks::Simulator::Bytecode::Lambda* reify, ::g::Outracks::Simulator::ImmutableList* dependencies);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
