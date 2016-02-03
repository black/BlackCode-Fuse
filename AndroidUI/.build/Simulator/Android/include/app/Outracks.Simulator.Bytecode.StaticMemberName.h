// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_STATIC_MEMBER_NAME_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_STATIC_MEMBER_NAME_H__

#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Stat-eec89080.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeMemberName; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct StaticMemberName;

struct StaticMemberName__uType : ::uClassType
{
    ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_StaticMemberName __interface_0;
};

StaticMemberName__uType* StaticMemberName__typeof();

void StaticMemberName___ObjInit(StaticMemberName* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName, ::app::Outracks::Simulator::Bytecode::TypeMemberName* memberName);
bool StaticMemberName__Equals(StaticMemberName* __this, ::uObject* obj);
bool StaticMemberName__Equals_2(StaticMemberName* __this, StaticMemberName* other);
int StaticMemberName__GetHashCode(StaticMemberName* __this);
StaticMemberName* StaticMemberName__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* typeName, ::app::Outracks::Simulator::Bytecode::TypeMemberName* memberName);
bool StaticMemberName__op_Equality(::uStatic* __this, StaticMemberName* left, StaticMemberName* right);
bool StaticMemberName__op_Inequality(::uStatic* __this, StaticMemberName* left, StaticMemberName* right);
StaticMemberName* StaticMemberName__Parse(::uStatic* __this, ::uString* value);
StaticMemberName* StaticMemberName__Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
::uString* StaticMemberName__ToString(StaticMemberName* __this);
void StaticMemberName__Write(::uStatic* __this, StaticMemberName* m, ::app::Uno::IO::BinaryWriter* writer);

struct StaticMemberName : ::uObject
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeName*> TypeName;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeMemberName*> MemberName;

    void _ObjInit(::app::Outracks::Simulator::Bytecode::TypeName* typeName, ::app::Outracks::Simulator::Bytecode::TypeMemberName* memberName) { StaticMemberName___ObjInit(this, typeName, memberName); }
    bool Equals_2(StaticMemberName* other) { return StaticMemberName__Equals_2(this, other); }
};

}}}}


#endif
