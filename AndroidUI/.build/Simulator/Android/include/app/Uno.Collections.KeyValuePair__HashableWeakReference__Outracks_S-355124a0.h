// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__HASHABLE_WEAK_REFERENCE__OUTRACKS_S_355124A0_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__HASHABLE_WEAK_REFERENCE__OUTRACKS_S_355124A0_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { struct HashableWeakReference; }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName;

struct KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType : ::uStructType
{
};

KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType* KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__typeof();

void KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName___ObjInit(KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this, ::app::HashableWeakReference* key, ::app::Outracks::Simulator::Bytecode::TypeName* value);
::app::HashableWeakReference* KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__get_Key(KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this);
::app::Outracks::Simulator::Bytecode::TypeName* KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__get_Value(KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this);
KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this, ::app::HashableWeakReference* key, ::app::Outracks::Simulator::Bytecode::TypeName* value);

struct KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName
{
    ::uStrong< ::app::HashableWeakReference*> _key;
    ::uStrong< ::app::Outracks::Simulator::Bytecode::TypeName*> _value;

    void _ObjInit(::app::HashableWeakReference* key, ::app::Outracks::Simulator::Bytecode::TypeName* value) { KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName___ObjInit(this, key, value); }
    ::app::HashableWeakReference* Key() { return KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__get_Key(this); }
    ::app::Outracks::Simulator::Bytecode::TypeName* Value() { return KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__get_Value(this); }
};

}}}


#endif
