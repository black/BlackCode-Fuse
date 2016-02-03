// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Optional-1.h>
#include <Outracks.Simulator.Bytecode.Statement.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct NoOperation;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class NoOperation :1758
// {
uType* NoOperation_typeof();
void NoOperation__ctor_1_fn(NoOperation* __this, ::g::Outracks::Simulator::Bytecode::Optional1<uStrong<uString*> >* description);
void NoOperation__New1_fn(::g::Outracks::Simulator::Bytecode::Optional1<uStrong<uString*> >* description, NoOperation** __retval);
void NoOperation__Read1_fn(::g::Uno::IO::BinaryReader* reader, NoOperation** __retval);
void NoOperation__ToString_fn(NoOperation* __this, uString** __retval);
void NoOperation__Write1_fn(NoOperation* s, ::g::Uno::IO::BinaryWriter* writer);
void NoOperation__Write2_fn(NoOperation* __this, ::g::Uno::IO::BinaryWriter* writer);

struct NoOperation : ::g::Outracks::Simulator::Bytecode::Statement
{
    uTField Description() { return __type->Field(this, 0); }

    void ctor_1(::g::Outracks::Simulator::Bytecode::Optional1<uStrong<uString*> > description);
    void Write2(::g::Uno::IO::BinaryWriter* writer);
    static NoOperation* New1(::g::Outracks::Simulator::Bytecode::Optional1<uStrong<uString*> > description);
    static NoOperation* Read1(::g::Uno::IO::BinaryReader* reader);
    static void Write1(NoOperation* s, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
