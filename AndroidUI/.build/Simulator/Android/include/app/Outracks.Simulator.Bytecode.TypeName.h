// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Bytecode\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_TYPE_NAME_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_TYPE_NAME_H__

#include <app/Outracks.Simulator.Bytecode.Optional__Outracks_Simulator_Byteco-8b791f23.h>
#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_TypeName.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { struct ImmutableList__Outracks_Simulator_Bytecode_TypeName; } } }
namespace app { namespace Uno { namespace IO { struct BinaryReader; } } }
namespace app { namespace Uno { namespace IO { struct BinaryWriter; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct TypeName;

extern ::uStaticStrong< ::uDelegate*> TypeName__Read;
extern ::uStaticStrong< ::uDelegate*> TypeName__Write;

struct TypeName__uType : ::uClassType
{
    ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_TypeName __interface_0;
};

TypeName__uType* TypeName__typeof();

void TypeName___ObjInit(TypeName* __this, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName ns, ::uString* surname, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName* genericArguments);
TypeName* TypeName___Read(::uStatic* __this, ::app::Uno::IO::BinaryReader* reader);
void TypeName___TypeInit(::uStatic* __this);
void TypeName___Write(TypeName* __this, ::app::Uno::IO::BinaryWriter* writer);
void TypeName___Write_1(::uStatic* __this, TypeName* name, ::app::Uno::IO::BinaryWriter* writer);
bool TypeName__Equals(TypeName* __this, ::uObject* obj);
bool TypeName__Equals_2(TypeName* __this, TypeName* other);
::uString* TypeName__get_FullBaseName(TypeName* __this);
::uString* TypeName__get_FullName(TypeName* __this);
bool TypeName__get_IsParameterizedGenericType(TypeName* __this);
TypeName* TypeName__get_WithGenericSuffix(TypeName* __this);
::uString* TypeName__get_WithoutNamespace(TypeName* __this);
int TypeName__GetHashCode(TypeName* __this);
TypeName* TypeName__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName ns, ::uString* surname, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName* genericArguments);
bool TypeName__op_Equality(::uStatic* __this, TypeName* a, TypeName* b);
bool TypeName__op_Inequality(::uStatic* __this, TypeName* a, TypeName* b);
TypeName* TypeName__Parameterize(TypeName* __this, ::uArray* methodArgumentTypes);
TypeName* TypeName__Parse(::uStatic* __this, ::uString* name);
::uObject* TypeName__ParseGenericArguments(::uStatic* __this, ::uString* argumentList);
::uString* TypeName__ToString(TypeName* __this);

struct TypeName : ::uObject
{
    ::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName Namespace;
    ::uStrong< ::uString*> Surname;
    ::uStrong< ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName*> GenericArguments;

    void _ObjInit(::app::Outracks::Simulator::Bytecode::Optional__Outracks_Simulator_Bytecode_NamespaceName ns, ::uString* surname, ::app::Outracks::Simulator::ImmutableList__Outracks_Simulator_Bytecode_TypeName* genericArguments) { TypeName___ObjInit(this, ns, surname, genericArguments); }
    void _Write(::app::Uno::IO::BinaryWriter* writer) { TypeName___Write(this, writer); }
    bool Equals_2(TypeName* other) { return TypeName__Equals_2(this, other); }
    ::uString* FullBaseName() { return TypeName__get_FullBaseName(this); }
    ::uString* FullName() { return TypeName__get_FullName(this); }
    bool IsParameterizedGenericType() { return TypeName__get_IsParameterizedGenericType(this); }
    TypeName* WithGenericSuffix() { return TypeName__get_WithGenericSuffix(this); }
    ::uString* WithoutNamespace() { return TypeName__get_WithoutNamespace(this); }
    TypeName* Parameterize(::uArray* methodArgumentTypes) { return TypeName__Parameterize(this, methodArgumentTypes); }
};

}}}}


#endif
