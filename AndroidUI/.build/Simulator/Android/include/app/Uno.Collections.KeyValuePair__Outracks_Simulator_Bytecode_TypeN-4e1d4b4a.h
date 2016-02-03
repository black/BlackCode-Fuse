// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__OUTRACKS_SIMULATOR_BYTECODE_TYPE_N_4E1D4B4A_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__OUTRACKS_SIMULATOR_BYTECODE_TYPE_N_4E1D4B4A_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type;

struct KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType : ::uStructType
{
};

KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType* KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type__typeof();

void KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type___ObjInit(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::app::Outracks::Simulator::Bytecode::TypeName* key, ::uType* value);
::app::Outracks::Simulator::Bytecode::TypeName* KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Key(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this);
::uType* KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Value(KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this);
KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type__New_1(::uStatic* __this, ::app::Outracks::Simulator::Bytecode::TypeName* key, ::uType* value);

struct KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type
{
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeName*> _key;
    ::uStrong< ::uType*> _value;

    void _ObjInit(::app::Outracks::Simulator::Bytecode::TypeName* key, ::uType* value) { KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type___ObjInit(this, key, value); }
    ::app::Outracks::Simulator::Bytecode::TypeName* Key() { return KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Key(this); }
    ::uType* Value() { return KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Value(this); }
};

}}}


#endif
