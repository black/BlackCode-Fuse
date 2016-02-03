// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_WRITE_PROPERTY_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_WRITE_PROPERTY_H__

#include <app/Outracks.Simulator.Bytecode.Expression.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeMemberName; } } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct WriteProperty;

struct WriteProperty__uType : ::app::Outracks::Simulator::Bytecode::Expression__uType
{
};

WriteProperty__uType* WriteProperty__typeof();

void WriteProperty___ObjInit_2(WriteProperty* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* property, ::app::Outracks::Simulator::Bytecode::Expression* value);
WriteProperty* WriteProperty__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* property, ::app::Outracks::Simulator::Bytecode::Expression* value);
WriteProperty* WriteProperty__Read_2(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* WriteProperty__ToString(WriteProperty* __this);
void WriteProperty__Write_2(WriteProperty* __this, ::app::Uno::IO::BinaryWriter* writer);
void WriteProperty__Write_3(::uStatic* __this, WriteProperty* o, ::app::Uno::IO::BinaryWriter* writer);

struct WriteProperty : ::app::Outracks::Simulator::Bytecode::Expression
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Expression*> Object;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeMemberName*> Property;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Expression*> Value;

    void _ObjInit_2(::app::Outracks::Simulator::Bytecode::Expression* o, ::app::Outracks::Simulator::Bytecode::TypeMemberName* property, ::app::Outracks::Simulator::Bytecode::Expression* value) { WriteProperty___ObjInit_2(this, o, property, value); }
    void Write_2(::app::Uno::IO::BinaryWriter* writer) { WriteProperty__Write_2(this, writer); }
};

}}}}


#endif
