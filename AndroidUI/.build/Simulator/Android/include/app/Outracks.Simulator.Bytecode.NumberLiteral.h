// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_NUMBER_LITERAL_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_NUMBER_LITERAL_H__

#include <app/Outracks.Simulator.Bytecode.Literal.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct NumberLiteral;

struct NumberLiteral__uType : ::app::Outracks::Simulator::Bytecode::Literal__uType
{
};

NumberLiteral__uType* NumberLiteral__typeof();

void NumberLiteral___ObjInit_3(NumberLiteral* __this, int numberType, double doubleValue);
NumberLiteral* NumberLiteral__New_1(::uStatic* __this, int numberType, double doubleValue);
NumberLiteral* NumberLiteral__Read_3(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* NumberLiteral__ToString(NumberLiteral* __this);
void NumberLiteral__Write_3(::uStatic* __this, NumberLiteral* l, ::app::Uno::IO::BinaryWriter* writer);

struct NumberLiteral : ::app::Outracks::Simulator::Bytecode::Literal
{
    int NumberType;
    double DoubleValue;

    void _ObjInit_3(int numberType, double doubleValue) { NumberLiteral___ObjInit_3(this, numberType, doubleValue); }
};

}}}}


#endif
