// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Protocol.Uno\0.1.0\Common\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_OUTRACKS_SIMULATOR_BYTECODE_OPTIONAL__OUTRACKS_SIMULATOR_DIALOG_BUTTON_H__
#define __APP_OUTRACKS_SIMULATOR_BYTECODE_OPTIONAL__OUTRACKS_SIMULATOR_DIALOG_BUTTON_H__

#include <app/Outracks.Simulator.IEquatable__Outracks_Simulator_Bytecode_Optional_2.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Optional; } } } }
namespace app { namespace Outracks { namespace Simulator { struct DialogButton; } } }

namespace app {
namespace Outracks {
namespace Simulator {
namespace Bytecode {

struct Optional__Outracks_Simulator_DialogButton;

struct Optional__Outracks_Simulator_DialogButton__uType : ::uStructType
{
    ::app::Outracks::Simulator::IEquatable__Outracks_Simulator_Bytecode_Optional_2 __interface_0;
};

Optional__Outracks_Simulator_DialogButton__uType* Optional__Outracks_Simulator_DialogButton__typeof();

void Optional__Outracks_Simulator_DialogButton___ObjInit(Optional__Outracks_Simulator_DialogButton* __this, bool hasValue, ::app::Outracks::Simulator::DialogButton* value);
bool Optional__Outracks_Simulator_DialogButton__Equals(Optional__Outracks_Simulator_DialogButton* __this, ::uObject* obj);
bool Optional__Outracks_Simulator_DialogButton__Equals_2(Optional__Outracks_Simulator_DialogButton* __this, Optional__Outracks_Simulator_DialogButton other);
bool Optional__Outracks_Simulator_DialogButton__get_HasValue(Optional__Outracks_Simulator_DialogButton* __this);
::app::Outracks::Simulator::DialogButton* Optional__Outracks_Simulator_DialogButton__get_Value(Optional__Outracks_Simulator_DialogButton* __this);
int Optional__Outracks_Simulator_DialogButton__GetHashCode(Optional__Outracks_Simulator_DialogButton* __this);
Optional__Outracks_Simulator_DialogButton Optional__Outracks_Simulator_DialogButton__New_1(::uStatic* __this, bool hasValue, ::app::Outracks::Simulator::DialogButton* value);
bool Optional__Outracks_Simulator_DialogButton__op_Equality(::uStatic* __this, Optional__Outracks_Simulator_DialogButton left, Optional__Outracks_Simulator_DialogButton right);
Optional__Outracks_Simulator_DialogButton Optional__Outracks_Simulator_DialogButton__op_Implicit(::uStatic* __this, ::app::Outracks::Simulator::DialogButton* value);
Optional__Outracks_Simulator_DialogButton Optional__Outracks_Simulator_DialogButton__op_Implicit_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Optional* value);
bool Optional__Outracks_Simulator_DialogButton__op_Inequality(::uStatic* __this, Optional__Outracks_Simulator_DialogButton left, Optional__Outracks_Simulator_DialogButton right);
::uString* Optional__Outracks_Simulator_DialogButton__ToString(Optional__Outracks_Simulator_DialogButton* __this);

struct Optional__Outracks_Simulator_DialogButton
{
    bool _hasValue;
    ::uStrong< ::app::Outracks::Simulator::DialogButton*> _value;

    void _ObjInit(bool hasValue, ::app::Outracks::Simulator::DialogButton* value) { Optional__Outracks_Simulator_DialogButton___ObjInit(this, hasValue, value); }
    bool Equals(::uObject* obj) { return Optional__Outracks_Simulator_DialogButton__Equals(this, obj); }
    bool Equals_2(Optional__Outracks_Simulator_DialogButton other) { return Optional__Outracks_Simulator_DialogButton__Equals_2(this, other); }
    bool HasValue() { return Optional__Outracks_Simulator_DialogButton__get_HasValue(this); }
    ::app::Outracks::Simulator::DialogButton* Value() { return Optional__Outracks_Simulator_DialogButton__get_Value(this); }
    int GetHashCode() { return Optional__Outracks_Simulator_DialogButton__GetHashCode(this); }
    ::uString* ToString() { return Optional__Outracks_Simulator_DialogButton__ToString(this); }
};

}}}}


#endif
