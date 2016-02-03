// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__OUTRACKS_SIMULATOR_BYTECODE_TYPE_N_1F80EAB4_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__OUTRACKS_SIMULATOR_BYTECODE_TYPE_N_1F80EAB4_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName;

struct KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType : ::uStructType
{
};

KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__uType* KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__typeof();

void KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName___ObjInit(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Outracks::Simulator::Bytecode::TypeName* key, ::app::Outracks::Simulator::Bytecode::TypeName* value);
::app::Outracks::Simulator::Bytecode::TypeName* KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__get_Key(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this);
::app::Outracks::Simulator::Bytecode::TypeName* KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__get_Value(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName* __this);
KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* key, ::app::Outracks::Simulator::Bytecode::TypeName* value);

struct KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeName*> _key;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeName*> _value;

    void _ObjInit(::app::Outracks::Simulator::Bytecode::TypeName* key, ::app::Outracks::Simulator::Bytecode::TypeName* value) { KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName___ObjInit(this, key, value); }
    ::app::Outracks::Simulator::Bytecode::TypeName* Key() { return KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__get_Key(this); }
    ::app::Outracks::Simulator::Bytecode::TypeName* Value() { return KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Outracks_Simulator_Bytecode_TypeName__get_Value(this); }
};

}}}


#endif
