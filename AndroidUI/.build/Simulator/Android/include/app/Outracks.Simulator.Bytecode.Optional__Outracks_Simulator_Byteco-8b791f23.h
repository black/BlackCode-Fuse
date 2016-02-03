// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_OPTIONAL__OUTRACKS_SIMULATOR_BYTECO_8B791F23_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_OPTIONAL__OUTRACKS_SIMULATOR_BYTECO_8B791F23_H__

#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Optional_3.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct NamespaceName; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Optional; } } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct Optional__Outracks_Simulator_Bytecode_NamespaceName;

struct Optional__Outracks_Simulator_Bytecode_NamespaceName__uType : ::uStructType
{
    ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_Optional_3 __interface_0;
};

Optional__Outracks_Simulator_Bytecode_NamespaceName__uType* Optional__Outracks_Simulator_Bytecode_NamespaceName__typeof();

void Optional__Outracks_Simulator_Bytecode_NamespaceName___ObjInit(Optional__Outracks_Simulator_Bytecode_NamespaceName* __this, bool hasValue, ::app::Outracks::Simulator::Bytecode::NamespaceName* value);
bool Optional__Outracks_Simulator_Bytecode_NamespaceName__Equals(Optional__Outracks_Simulator_Bytecode_NamespaceName* __this, ::uObject* obj);
bool Optional__Outracks_Simulator_Bytecode_NamespaceName__Equals_2(Optional__Outracks_Simulator_Bytecode_NamespaceName* __this, Optional__Outracks_Simulator_Bytecode_NamespaceName other);
bool Optional__Outracks_Simulator_Bytecode_NamespaceName__get_HasValue(Optional__Outracks_Simulator_Bytecode_NamespaceName* __this);
::app::Outracks::Simulator::Bytecode::NamespaceName* Optional__Outracks_Simulator_Bytecode_NamespaceName__get_Value(Optional__Outracks_Simulator_Bytecode_NamespaceName* __this);
int Optional__Outracks_Simulator_Bytecode_NamespaceName__GetHashCode(Optional__Outracks_Simulator_Bytecode_NamespaceName* __this);
Optional__Outracks_Simulator_Bytecode_NamespaceName Optional__Outracks_Simulator_Bytecode_NamespaceName__New_1(::uStatic* __this, bool hasValue, ::app::Outracks::Simulator::Bytecode::NamespaceName* value);
bool Optional__Outracks_Simulator_Bytecode_NamespaceName__op_Equality(::uStatic* __this, Optional__Outracks_Simulator_Bytecode_NamespaceName left, Optional__Outracks_Simulator_Bytecode_NamespaceName right);
Optional__Outracks_Simulator_Bytecode_NamespaceName Optional__Outracks_Simulator_Bytecode_NamespaceName__op_Implicit(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::NamespaceName* value);
Optional__Outracks_Simulator_Bytecode_NamespaceName Optional__Outracks_Simulator_Bytecode_NamespaceName__op_Implicit_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Optional* value);
bool Optional__Outracks_Simulator_Bytecode_NamespaceName__op_Inequality(::uStatic* __this, Optional__Outracks_Simulator_Bytecode_NamespaceName left, Optional__Outracks_Simulator_Bytecode_NamespaceName right);
::uString* Optional__Outracks_Simulator_Bytecode_NamespaceName__ToString(Optional__Outracks_Simulator_Bytecode_NamespaceName* __this);

struct Optional__Outracks_Simulator_Bytecode_NamespaceName
{
    bool _hasValue;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::NamespaceName*> _value;

    void _ObjInit(bool hasValue, ::app::Outracks::Simulator::Bytecode::NamespaceName* value) { Optional__Outracks_Simulator_Bytecode_NamespaceName___ObjInit(this, hasValue, value); }
    bool Equals(::uObject* obj) { return Optional__Outracks_Simulator_Bytecode_NamespaceName__Equals(this, obj); }
    bool Equals_2(Optional__Outracks_Simulator_Bytecode_NamespaceName other) { return Optional__Outracks_Simulator_Bytecode_NamespaceName__Equals_2(this, other); }
    bool HasValue() { return Optional__Outracks_Simulator_Bytecode_NamespaceName__get_HasValue(this); }
    ::app::Outracks::Simulator::Bytecode::NamespaceName* Value() { return Optional__Outracks_Simulator_Bytecode_NamespaceName__get_Value(this); }
    int GetHashCode() { return Optional__Outracks_Simulator_Bytecode_NamespaceName__GetHashCode(this); }
    ::uString* ToString() { return Optional__Outracks_Simulator_Bytecode_NamespaceName__ToString(this); }
};

}}}}


#endif
