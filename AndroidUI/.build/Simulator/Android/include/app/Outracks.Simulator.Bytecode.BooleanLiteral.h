// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_BOOLEAN_LITERAL_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_BOOLEAN_LITERAL_H__

#include <app/Outracks.Simulator.Bytecode.Literal.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct BooleanLiteral;

struct BooleanLiteral__uType : ::app::Outracks::Simulator::Bytecode::Literal__uType
{
};

BooleanLiteral__uType* BooleanLiteral__typeof();

void BooleanLiteral___ObjInit_3(BooleanLiteral* __this, bool booleanValue);
BooleanLiteral* BooleanLiteral__New_1(::uStatic* __this, bool booleanValue);
BooleanLiteral* BooleanLiteral__Read_3(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* BooleanLiteral__ToString(BooleanLiteral* __this);
void BooleanLiteral__Write_3(::uStatic* __this, BooleanLiteral* l, ::app::Uno::IO::BinaryWriter* writer);

struct BooleanLiteral : ::app::Outracks::Simulator::Bytecode::Literal
{
    bool BooleanValue;

    void _ObjInit_3(bool booleanValue) { BooleanLiteral___ObjInit_3(this, booleanValue); }
};

}}}}


#endif
