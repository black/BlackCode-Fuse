// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__OUTRACKS_SIMULATOR_BYTECODE_VARIA_7BA73CC1_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__OUTRACKS_SIMULATOR_BYTECODE_VARIA_7BA73CC1_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Variable; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__Outracks_Simulator_Bytecode_Variable__object;

struct KeyValuePair__Outracks_Simulator_Bytecode_Variable__object__uType : ::uStructType
{
};

KeyValuePair__Outracks_Simulator_Bytecode_Variable__object__uType* KeyValuePair__Outracks_Simulator_Bytecode_Variable__object__typeof();

void KeyValuePair__Outracks_Simulator_Bytecode_Variable__object___ObjInit(KeyValuePair__Outracks_Simulator_Bytecode_Variable__object* __this, ::app::Outracks::Simulator::Bytecode::Variable* key, ::uObject* value);
::app::Outracks::Simulator::Bytecode::Variable* KeyValuePair__Outracks_Simulator_Bytecode_Variable__object__get_Key(KeyValuePair__Outracks_Simulator_Bytecode_Variable__object* __this);
::uObject* KeyValuePair__Outracks_Simulator_Bytecode_Variable__object__get_Value(KeyValuePair__Outracks_Simulator_Bytecode_Variable__object* __this);
KeyValuePair__Outracks_Simulator_Bytecode_Variable__object KeyValuePair__Outracks_Simulator_Bytecode_Variable__object__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::Variable* key, ::uObject* value);

struct KeyValuePair__Outracks_Simulator_Bytecode_Variable__object
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::Variable*> _key;
    ::uStrong< ::uObject*> _value;

    void _ObjInit(::app::Outracks::Simulator::Bytecode::Variable* key, ::uObject* value) { KeyValuePair__Outracks_Simulator_Bytecode_Variable__object___ObjInit(this, key, value); }
    ::app::Outracks::Simulator::Bytecode::Variable* Key() { return KeyValuePair__Outracks_Simulator_Bytecode_Variable__object__get_Key(this); }
    ::uObject* Value() { return KeyValuePair__Outracks_Simulator_Bytecode_Variable__object__get_Value(this); }
};

}}}


#endif
