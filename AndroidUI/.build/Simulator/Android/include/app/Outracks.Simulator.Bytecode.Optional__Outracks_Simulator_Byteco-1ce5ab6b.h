// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_OPTIONAL__OUTRACKS_SIMULATOR_BYTECO_1CE5AB6B_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_OPTIONAL__OUTRACKS_SIMULATOR_BYTECO_1CE5AB6B_H__

#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Optional_4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Optional; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct Optional__Outracks_Simulator_Bytecode_TypeName;

struct Optional__Outracks_Simulator_Bytecode_TypeName__uType : ::uStructType
{
    ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_Optional_4 __interface_0;
};

Optional__Outracks_Simulator_Bytecode_TypeName__uType* Optional__Outracks_Simulator_Bytecode_TypeName__typeof();

void Optional__Outracks_Simulator_Bytecode_TypeName___ObjInit(Optional__Outracks_Simulator_Bytecode_TypeName* __this, bool hasValue, ::app::Outracks::Simulator::Bytecode::TypeName* value);
bool Optional__Outracks_Simulator_Bytecode_TypeName__Equals(Optional__Outracks_Simulator_Bytecode_TypeName* __this, ::uObject* obj);
bool Optional__Outracks_Simulator_Bytecode_TypeName__Equals_2(Optional__Outracks_Simulator_Bytecode_TypeName* __this, Optional__Outracks_Simulator_Bytecode_TypeName other);
bool Optional__Outracks_Simulator_Bytecode_TypeName__get_HasValue(Optional__Outracks_Simulator_Bytecode_TypeName* __this);
::app::Outracks::Simulator::Bytecode::TypeName* Optional__Outracks_Simulator_Bytecode_TypeName__get_Value(Optional__Outracks_Simulator_Bytecode_TypeName* __this);
int Optional__Outracks_Simulator_Bytecode_TypeName__GetHashCode(Optional__Outracks_Simulator_Bytecode_TypeName* __this);
Optional__Outracks_Simulator_Bytecode_TypeName Optional__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this, bool hasValue, ::app::Outracks::Simulator::Bytecode::TypeName* value);
bool Optional__Outracks_Simulator_Bytecode_TypeName__op_Equality(::uStatic* __this, Optional__Outracks_Simulator_Bytecode_TypeName left, Optional__Outracks_Simulator_Bytecode_TypeName right);
Optional__Outracks_Simulator_Bytecode_TypeName Optional__Outracks_Simulator_Bytecode_TypeName__op_Implicit(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Optional* value);
Optional__Outracks_Simulator_Bytecode_TypeName Optional__Outracks_Simulator_Bytecode_TypeName__op_Implicit_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* value);
bool Optional__Outracks_Simulator_Bytecode_TypeName__op_Inequality(::uStatic* __this, Optional__Outracks_Simulator_Bytecode_TypeName left, Optional__Outracks_Simulator_Bytecode_TypeName right);
::uString* Optional__Outracks_Simulator_Bytecode_TypeName__ToString(Optional__Outracks_Simulator_Bytecode_TypeName* __this);

struct Optional__Outracks_Simulator_Bytecode_TypeName
{
    bool _hasValue;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeName*> _value;

    void _ObjInit(bool hasValue, ::app::Outracks::Simulator::Bytecode::TypeName* value) { Optional__Outracks_Simulator_Bytecode_TypeName___ObjInit(this, hasValue, value); }
    bool Equals(::uObject* obj) { return Optional__Outracks_Simulator_Bytecode_TypeName__Equals(this, obj); }
    bool Equals_2(Optional__Outracks_Simulator_Bytecode_TypeName other) { return Optional__Outracks_Simulator_Bytecode_TypeName__Equals_2(this, other); }
    bool HasValue() { return Optional__Outracks_Simulator_Bytecode_TypeName__get_HasValue(this); }
    ::app::Outracks::Simulator::Bytecode::TypeName* Value() { return Optional__Outracks_Simulator_Bytecode_TypeName__get_Value(this); }
    int GetHashCode() { return Optional__Outracks_Simulator_Bytecode_TypeName__GetHashCode(this); }
    ::uString* ToString() { return Optional__Outracks_Simulator_Bytecode_TypeName__ToString(this); }
};

}}}}


#endif
