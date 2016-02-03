// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_ENUM_LITERAL_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_ENUM_LITERAL_H__

#include <app/Outracks.Simulator.Bytecode.Literal.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct StaticMemberName; } } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct EnumLiteral;

struct EnumLiteral__uType : ::app::Outracks::Simulator::Bytecode::Literal__uType
{
};

EnumLiteral__uType* EnumLiteral__typeof();

void EnumLiteral___ObjInit_3(EnumLiteral* __this, ::app::Outracks::Simulator::Bytecode::StaticMemberName* value);
EnumLiteral* EnumLiteral__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::StaticMemberName* value);
EnumLiteral* EnumLiteral__Read_3(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* EnumLiteral__ToString(EnumLiteral* __this);
void EnumLiteral__Write_3(::uStatic* __this, EnumLiteral* l, ::app::Uno::IO::BinaryWriter* writer);

struct EnumLiteral : ::app::Outracks::Simulator::Bytecode::Literal
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::StaticMemberName*> Value;

    void _ObjInit_3(::app::Outracks::Simulator::Bytecode::StaticMemberName* value) { EnumLiteral___ObjInit_3(this, value); }
};

}}}}


#endif
