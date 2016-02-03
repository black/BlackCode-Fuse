// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_OPTIONAL__OUTRACKS_SIMULATOR_PROTOCOL_REIFY_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_OPTIONAL__OUTRACKS_SIMULATOR_PROTOCOL_REIFY_H__

#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Optional.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Optional; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Protocol { struct Reify; } } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct Optional__Outracks_Simulator_Protocol_Reify;

struct Optional__Outracks_Simulator_Protocol_Reify__uType : ::uStructType
{
    ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_Optional __interface_0;
};

Optional__Outracks_Simulator_Protocol_Reify__uType* Optional__Outracks_Simulator_Protocol_Reify__typeof();

void Optional__Outracks_Simulator_Protocol_Reify___ObjInit(Optional__Outracks_Simulator_Protocol_Reify* __this, bool hasValue, ::app::Outracks::Simulator::Protocol::Reify* value);
bool Optional__Outracks_Simulator_Protocol_Reify__Equals(Optional__Outracks_Simulator_Protocol_Reify* __this, ::uObject* obj);
bool Optional__Outracks_Simulator_Protocol_Reify__Equals_2(Optional__Outracks_Simulator_Protocol_Reify* __this, Optional__Outracks_Simulator_Protocol_Reify other);
bool Optional__Outracks_Simulator_Protocol_Reify__get_HasValue(Optional__Outracks_Simulator_Protocol_Reify* __this);
::app::Outracks::Simulator::Protocol::Reify* Optional__Outracks_Simulator_Protocol_Reify__get_Value(Optional__Outracks_Simulator_Protocol_Reify* __this);
int Optional__Outracks_Simulator_Protocol_Reify__GetHashCode(Optional__Outracks_Simulator_Protocol_Reify* __this);
Optional__Outracks_Simulator_Protocol_Reify Optional__Outracks_Simulator_Protocol_Reify__New_1(::uStatic* __this, bool hasValue, ::app::Outracks::Simulator::Protocol::Reify* value);
bool Optional__Outracks_Simulator_Protocol_Reify__op_Equality(::uStatic* __this, Optional__Outracks_Simulator_Protocol_Reify left, Optional__Outracks_Simulator_Protocol_Reify right);
Optional__Outracks_Simulator_Protocol_Reify Optional__Outracks_Simulator_Protocol_Reify__op_Implicit(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Optional* value);
Optional__Outracks_Simulator_Protocol_Reify Optional__Outracks_Simulator_Protocol_Reify__op_Implicit_1(::uStatic* __this, ::app::Outracks::Simulator::Protocol::Reify* value);
bool Optional__Outracks_Simulator_Protocol_Reify__op_Inequality(::uStatic* __this, Optional__Outracks_Simulator_Protocol_Reify left, Optional__Outracks_Simulator_Protocol_Reify right);
::uString* Optional__Outracks_Simulator_Protocol_Reify__ToString(Optional__Outracks_Simulator_Protocol_Reify* __this);

struct Optional__Outracks_Simulator_Protocol_Reify
{
    bool _hasValue;
    ::uStrong< ::app::Outracks::Simulator::Protocol::Reify*> _value;

    void _ObjInit(bool hasValue, ::app::Outracks::Simulator::Protocol::Reify* value) { Optional__Outracks_Simulator_Protocol_Reify___ObjInit(this, hasValue, value); }
    bool Equals(::uObject* obj) { return Optional__Outracks_Simulator_Protocol_Reify__Equals(this, obj); }
    bool Equals_2(Optional__Outracks_Simulator_Protocol_Reify other) { return Optional__Outracks_Simulator_Protocol_Reify__Equals_2(this, other); }
    bool HasValue() { return Optional__Outracks_Simulator_Protocol_Reify__get_HasValue(this); }
    ::app::Outracks::Simulator::Protocol::Reify* Value() { return Optional__Outracks_Simulator_Protocol_Reify__get_Value(this); }
    int GetHashCode() { return Optional__Outracks_Simulator_Protocol_Reify__GetHashCode(this); }
    ::uString* ToString() { return Optional__Outracks_Simulator_Protocol_Reify__ToString(this); }
};

}}}}


#endif
