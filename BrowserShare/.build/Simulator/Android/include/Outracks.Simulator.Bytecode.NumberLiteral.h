// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Bytecode.Literal.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct NumberLiteral;}}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class NumberLiteral :1452
// {
uType* NumberLiteral_typeof();
void NumberLiteral__ctor_3_fn(NumberLiteral* __this, int* numberType, double* doubleValue);
void NumberLiteral__New1_fn(int* numberType, double* doubleValue, NumberLiteral** __retval);
void NumberLiteral__Read3_fn(::g::Uno::IO::BinaryReader* reader, NumberLiteral** __retval);
void NumberLiteral__ToString_fn(NumberLiteral* __this, uString** __retval);
void NumberLiteral__Write3_fn(NumberLiteral* l, ::g::Uno::IO::BinaryWriter* writer);

struct NumberLiteral : ::g::Outracks::Simulator::Bytecode::Literal
{
    double DoubleValue;
    int NumberType;

    void ctor_3(int numberType, double doubleValue);
    static NumberLiteral* New1(int numberType, double doubleValue);
    static NumberLiteral* Read3(::g::Uno::IO::BinaryReader* reader);
    static void Write3(NumberLiteral* l, ::g::Uno::IO::BinaryWriter* writer);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
