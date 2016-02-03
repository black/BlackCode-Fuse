// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_BLOB_LITERAL_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_BLOB_LITERAL_H__

#include <app/Outracks.Simulator.Bytecode.Literal.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct BlobLiteral;

struct BlobLiteral__uType : ::app::Outracks::Simulator::Bytecode::Literal__uType
{
};

BlobLiteral__uType* BlobLiteral__typeof();

void BlobLiteral___ObjInit_3(BlobLiteral* __this, ::uArray* bytes);
BlobLiteral* BlobLiteral__New_1(::uStatic* __this, ::uArray* bytes);
BlobLiteral* BlobLiteral__Read_3(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* BlobLiteral__ToString(BlobLiteral* __this);
void BlobLiteral__Write_3(::uStatic* __this, BlobLiteral* blob, ::app::Uno::IO::BinaryWriter* writer);

struct BlobLiteral : ::app::Outracks::Simulator::Bytecode::Literal
{
    ::uStrong< ::uArray*> Bytes;

    void _ObjInit_3(::uArray* bytes) { BlobLiteral___ObjInit_3(this, bytes); }
};

}}}}


#endif
