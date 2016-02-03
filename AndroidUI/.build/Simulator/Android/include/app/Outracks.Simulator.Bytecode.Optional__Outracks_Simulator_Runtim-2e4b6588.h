// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_OPTIONAL__OUTRACKS_SIMULATOR_RUNTIM_2E4B6588_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_OPTIONAL__OUTRACKS_SIMULATOR_RUNTIM_2E4B6588_H__

#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Optional_1.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Optional; } } } }
namespace app { namespace Outracks { namespace Simulator { namespace Runtime { struct Environment; } } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct Optional__Outracks_Simulator_Runtime_Environment;

struct Optional__Outracks_Simulator_Runtime_Environment__uType : ::uStructType
{
    ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_Optional_1 __interface_0;
};

Optional__Outracks_Simulator_Runtime_Environment__uType* Optional__Outracks_Simulator_Runtime_Environment__typeof();

void Optional__Outracks_Simulator_Runtime_Environment___ObjInit(Optional__Outracks_Simulator_Runtime_Environment* __this, bool hasValue, ::app::Outracks::Simulator::Runtime::Environment* value);
bool Optional__Outracks_Simulator_Runtime_Environment__Equals(Optional__Outracks_Simulator_Runtime_Environment* __this, ::uObject* obj);
bool Optional__Outracks_Simulator_Runtime_Environment__Equals_2(Optional__Outracks_Simulator_Runtime_Environment* __this, Optional__Outracks_Simulator_Runtime_Environment other);
bool Optional__Outracks_Simulator_Runtime_Environment__get_HasValue(Optional__Outracks_Simulator_Runtime_Environment* __this);
::app::Outracks::Simulator::Runtime::Environment* Optional__Outracks_Simulator_Runtime_Environment__get_Value(Optional__Outracks_Simulator_Runtime_Environment* __this);
int Optional__Outracks_Simulator_Runtime_Environment__GetHashCode(Optional__Outracks_Simulator_Runtime_Environment* __this);
Optional__Outracks_Simulator_Runtime_Environment Optional__Outracks_Simulator_Runtime_Environment__New_1(::uStatic* __this, bool hasValue, ::app::Outracks::Simulator::Runtime::Environment* value);
bool Optional__Outracks_Simulator_Runtime_Environment__op_Equality(::uStatic* __this, Optional__Outracks_Simulator_Runtime_Environment left, Optional__Outracks_Simulator_Runtime_Environment right);
Optional__Outracks_Simulator_Runtime_Environment Optional__Outracks_Simulator_Runtime_Environment__op_Implicit(::uStatic* __this, ::app::Outracks::Simulator::Runtime::Environment* value);
Optional__Outracks_Simulator_Runtime_Environment Optional__Outracks_Simulator_Runtime_Environment__op_Implicit_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Optional* value);
bool Optional__Outracks_Simulator_Runtime_Environment__op_Inequality(::uStatic* __this, Optional__Outracks_Simulator_Runtime_Environment left, Optional__Outracks_Simulator_Runtime_Environment right);
::uString* Optional__Outracks_Simulator_Runtime_Environment__ToString(Optional__Outracks_Simulator_Runtime_Environment* __this);

struct Optional__Outracks_Simulator_Runtime_Environment
{
    bool _hasValue;
    ::uStrong< ::app::Outracks::Simulator::Runtime::Environment*> _value;

    void _ObjInit(bool hasValue, ::app::Outracks::Simulator::Runtime::Environment* value) { Optional__Outracks_Simulator_Runtime_Environment___ObjInit(this, hasValue, value); }
    bool Equals(::uObject* obj) { return Optional__Outracks_Simulator_Runtime_Environment__Equals(this, obj); }
    bool Equals_2(Optional__Outracks_Simulator_Runtime_Environment other) { return Optional__Outracks_Simulator_Runtime_Environment__Equals_2(this, other); }
    bool HasValue() { return Optional__Outracks_Simulator_Runtime_Environment__get_HasValue(this); }
    ::app::Outracks::Simulator::Runtime::Environment* Value() { return Optional__Outracks_Simulator_Runtime_Environment__get_Value(this); }
    int GetHashCode() { return Optional__Outracks_Simulator_Runtime_Environment__GetHashCode(this); }
    ::uString* ToString() { return Optional__Outracks_Simulator_Runtime_Environment__ToString(this); }
};

}}}}


#endif
