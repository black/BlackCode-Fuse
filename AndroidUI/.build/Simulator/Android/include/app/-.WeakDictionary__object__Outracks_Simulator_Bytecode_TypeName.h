// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___WEAK_DICTIONARY__OBJECT__OUTRACKS_SIMULATOR_BYTECODE_TYPE_NAME_H__
#define __APP___WEAK_DICTIONARY__OBJECT__OUTRACKS_SIMULATOR_BYTECODE_TYPE_NAME_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName; } } }
namespace app { struct HashableWeakReference; }

namespace app {

struct WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName;

struct WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__uType : ::uClassType
{
};

WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__uType* WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__typeof();

void WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName___ObjInit(WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName* __this);
::uObject* WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__AsEnumerable(WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName* __this);
void WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__Clear(WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName* __this);
::app::Outracks::Simulator::Bytecode::TypeName* WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__get_Item(WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName* __this, ::uObject* key);
::app::HashableWeakReference* WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__GetKey(::uStatic* __this, ::uObject* obj);
WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName* WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this);
void WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__set_Item(WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName* __this, ::uObject* key, ::app::Outracks::Simulator::Bytecode::TypeName* value);
bool WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__TryGetValue(WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName* __this, ::uObject* key, ::app::Outracks::Simulator::Bytecode::TypeName** value);

struct WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName : ::uObject
{
    ::uStrong< ::app::Uno::Collections::Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName*> _dictionary;

    void _ObjInit() { WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName___ObjInit(this); }
    ::uObject* AsEnumerable() { return WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__AsEnumerable(this); }
    void Clear() { WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__Clear(this); }
    ::app::Outracks::Simulator::Bytecode::TypeName* Item(::uObject* key) { return WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__get_Item(this, key); }
    void Item(::uObject* key, ::app::Outracks::Simulator::Bytecode::TypeName* value) { WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__set_Item(this, key, value); }
    bool TryGetValue(::uObject* key, ::app::Outracks::Simulator::Bytecode::TypeName** value) { return WeakDictionary__object__Outracks_Simulator_Bytecode_TypeName__TryGetValue(this, key, value); }
};

}


#endif
