// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_READ_PROPERTY_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_READ_PROPERTY_H__

#include <app/Outracks.Simulator.Bytecode.Expression.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeMemberName; } } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct ReadProperty;

struct ReadProperty__uType : ::app::Outracks::Simulator::Bytecode::Expression__uType
{
};

ReadProperty__uType* ReadProperty__typeof();

void ReadProperty___ObjInit_2(ReadProperty* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* property);
ReadProperty* ReadProperty__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* property);
ReadProperty* ReadProperty__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* ReadProperty__ToString(ReadProperty* __this);
void ReadProperty__Write_2(ReadProperty* __this, ::app::Uno::IO::BinaryWriter* writer);
void ReadProperty__Write_3(::uStatic* __this, ReadProperty* o, ::app::Uno::IO::BinaryWriter* writer);

struct ReadProperty : ::app::Outracks::Simulator::Bytecode::Expression
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Expression*> Object;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeMemberName*> Property;

    void _ObjInit_2(::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* property) { ReadProperty___ObjInit_2(this, o, property); }
    void Write_2(::app::Uno::IO::BinaryWriter* writer) { ReadProperty__Write_2(this, writer); }
};

}}}}


#endif
