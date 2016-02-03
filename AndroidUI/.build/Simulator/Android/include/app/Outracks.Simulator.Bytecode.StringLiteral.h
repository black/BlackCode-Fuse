// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_STRING_LITERAL_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_STRING_LITERAL_H__

#include <app/Outracks.Simulator.Bytecode.Literal.h>
#include <Uno.h>
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct StringLiteral;

struct StringLiteral__uType : ::app::Outracks::Simulator::Bytecode::Literal__uType
{
};

StringLiteral__uType* StringLiteral__typeof();

void StringLiteral___ObjInit_3(StringLiteral* __this, ::uString* stringValue);
StringLiteral* StringLiteral__New_1(::uStatic* __this, ::uString* stringValue);
StringLiteral* StringLiteral__Read_3(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* StringLiteral__ToString(StringLiteral* __this);
void StringLiteral__Write_3(::uStatic* __this, StringLiteral* l, ::app::Uno::IO::BinaryWriter* writer);

struct StringLiteral : ::app::Outracks::Simulator::Bytecode::Literal
{
    ::uStrong< ::uString*> StringValue;

    void _ObjInit_3(::uString* stringValue) { StringLiteral___ObjInit_3(this, stringValue); }
};

}}}}


#endif
