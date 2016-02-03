// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_OPTIONAL__STRING_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_OPTIONAL__STRING_H__

#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Optional_5.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Optional; } } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct Optional__string;

struct Optional__string__uType : ::uStructType
{
    ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_Optional_5 __interface_0;
};

Optional__string__uType* Optional__string__typeof();

void Optional__string___ObjInit(Optional__string* __this, bool hasValue, ::uString* value);
bool Optional__string__Equals(Optional__string* __this, ::uObject* obj);
bool Optional__string__Equals_2(Optional__string* __this, Optional__string other);
bool Optional__string__get_HasValue(Optional__string* __this);
::uString* Optional__string__get_Value(Optional__string* __this);
int Optional__string__GetHashCode(Optional__string* __this);
Optional__string Optional__string__New_1(::uStatic* __this, bool hasValue, ::uString* value);
bool Optional__string__op_Equality(::uStatic* __this, Optional__string left, Optional__string right);
Optional__string Optional__string__op_Implicit(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Optional* value);
Optional__string Optional__string__op_Implicit_1(::uStatic* __this, ::uString* value);
bool Optional__string__op_Inequality(::uStatic* __this, Optional__string left, Optional__string right);
::uString* Optional__string__ToString(Optional__string* __this);

struct Optional__string
{
    bool _hasValue;
    ::uStrong< ::uString*> _value;

    void _ObjInit(bool hasValue, ::uString* value) { Optional__string___ObjInit(this, hasValue, value); }
    bool Equals(::uObject* obj) { return Optional__string__Equals(this, obj); }
    bool Equals_2(Optional__string other) { return Optional__string__Equals_2(this, other); }
    bool HasValue() { return Optional__string__get_HasValue(this); }
    ::uString* Value() { return Optional__string__get_Value(this); }
    int GetHashCode() { return Optional__string__GetHashCode(this); }
    ::uString* ToString() { return Optional__string__ToString(this); }
};

}}}}


#endif
