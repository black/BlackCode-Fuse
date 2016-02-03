// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_TYPE_MEMBER_NAME_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_TYPE_MEMBER_NAME_H__

#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Type-e09114c.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct StaticMemberName; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct TypeMemberName;

struct TypeMemberName__uType : ::uClassType
{
    ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_TypeMemberName __interface_0;
};

TypeMemberName__uType* TypeMemberName__typeof();

void TypeMemberName___ObjInit(TypeMemberName* __this, ::uString* name);
bool TypeMemberName__Equals(TypeMemberName* __this, ::uObject* obj);
bool TypeMemberName__Equals_2(TypeMemberName* __this, TypeMemberName* other);
int TypeMemberName__GetHashCode(TypeMemberName* __this);
TypeMemberName* TypeMemberName__New_1(::uStatic* __this, ::uString* name);
::app::Outracks::Simulator::Bytecode::StaticMemberName* TypeMemberName__op_Addition(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName, TypeMemberName* memberName);
TypeMemberName* TypeMemberName__Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* TypeMemberName__ToString(TypeMemberName* __this);
void TypeMemberName__Write(TypeMemberName* __this, ::app::Uno::IO::BinaryWriter* writer);
void TypeMemberName__Write_1(::uStatic* __this, TypeMemberName* name, ::app::Uno::IO::BinaryWriter* writer);

struct TypeMemberName : ::uObject
{
    ::uStrong< ::uString*> Name;

    void _ObjInit(::uString* name) { TypeMemberName___ObjInit(this, name); }
    bool Equals_2(TypeMemberName* other) { return TypeMemberName__Equals_2(this, other); }
    void Write(::app::Uno::IO::BinaryWriter* writer) { TypeMemberName__Write(this, writer); }
};

}}}}


#endif
