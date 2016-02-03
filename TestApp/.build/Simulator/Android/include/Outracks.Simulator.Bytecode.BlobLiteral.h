// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Literal.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct BlobLiteral;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class BlobLiteral :1347
// {
uType* BlobLiteral_typeof();
void BlobLiteral__ctor_3_fn(BlobLiteral* __this, uArray* bytes);
void BlobLiteral__New1_fn(uArray* bytes, BlobLiteral** __retval);
void BlobLiteral__Read3_fn(::g::Uno::IO::BinaryReader* reader, BlobLiteral** __retval);
void BlobLiteral__ToString_fn(BlobLiteral* __this, uString** __retval);
void BlobLiteral__Write3_fn(BlobLiteral* blob, ::g::Uno::IO::BinaryWriter* writer);

struct BlobLiteral : ::g::Outracks::Simulator::Bytecode::Literal
{
    uStrong<uArray*> Bytes;

    void ctor_3(uArray* bytes);
    static BlobLiteral* New1(uArray* bytes);
    static BlobLiteral* Read3(::g::Uno::IO::BinaryReader* reader);
    static void Write3(BlobLiteral* blob, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
