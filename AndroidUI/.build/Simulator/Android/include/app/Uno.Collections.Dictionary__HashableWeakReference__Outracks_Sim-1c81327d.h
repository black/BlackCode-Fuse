// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__HASHABLE_WEAK_REFERENCE__OUTRACKS_SIM_1C81327D_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__HASHABLE_WEAK_REFERENCE__OUTRACKS_SIM_1C81327D_H__

#include <app/Uno.Collections.Dictionary2_Bucket__HashableWeakReference__Outr-bfe8f4c9.h>
#include <app/Uno.Collections.IDictionary__HashableWeakReference__Outracks_Si-aacd5b32.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Hasha-e238d1dc.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName; } } }
namespace app { struct HashableWeakReference; }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName;

struct Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_HashableWeakReference_Outracks_Simulator_Bytecode_TypeName_ __interface_1;
};

Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__uType* Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__typeof();

::uObject* Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__GetEnumerator_boxed(Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this);
void Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName___ObjInit(Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this);
void Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName___ObjInit_1(Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this, ::uObject* dictionary);
void Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Add(Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this, ::app::HashableWeakReference* key, ::app::Outracks::Simulator::Bytecode::TypeName* value);
void Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Clear(Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this);
bool Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__ContainsKey(Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this, ::app::HashableWeakReference* key);
int Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__get_Count(Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this);
::app::Outracks::Simulator::Bytecode::TypeName* Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__get_Item(Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this, ::app::HashableWeakReference* key);
::app::Uno::Collections::Dictionary2_KeyCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__get_Keys(Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__get_Values(Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this);
::app::Uno::Collections::Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__GetEnumerator(Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this);
Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__New_1(::uStatic* __this);
Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Rehash(Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this);
bool Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Remove(Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this, ::app::HashableWeakReference* key);
void Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__set_Item(Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this, ::app::HashableWeakReference* key, ::app::Outracks::Simulator::Bytecode::TypeName* value);
bool Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__TryGetValue(Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this, ::app::HashableWeakReference* key, ::app::Outracks::Simulator::Bytecode::TypeName** value);
void Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Uno_Collections_ICollection_Add(Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Uno::Collections::KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName item);
bool Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Uno_Collections_ICollection_Contains(Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Uno::Collections::KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName item);
bool Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Uno_Collections_ICollection_Remove(Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* __this, ::app::Uno::Collections::KeyValuePair__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName item);

struct Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName___ObjInit_1(this, dictionary); }
    void Add(::app::HashableWeakReference* key, ::app::Outracks::Simulator::Bytecode::TypeName* value) { Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Add(this, key, value); }
    void Clear() { Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Clear(this); }
    bool ContainsKey(::app::HashableWeakReference* key) { return Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__ContainsKey(this, key); }
    int Count() { return Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__get_Count(this); }
    ::app::Outracks::Simulator::Bytecode::TypeName* Item(::app::HashableWeakReference* key) { return Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* Keys() { return Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName* Values() { return Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName GetEnumerator();
    void Rehash() { Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Rehash(this); }
    bool Remove(::app::HashableWeakReference* key) { return Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__Remove(this, key); }
    void Item(::app::HashableWeakReference* key, ::app::Outracks::Simulator::Bytecode::TypeName* value) { Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__set_Item(this, key, value); }
    bool TryGetValue(::app::HashableWeakReference* key, ::app::Outracks::Simulator::Bytecode::TypeName** value) { return Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__HashableWeakReference__-5d4821ef.h>
#include <app/Uno.Collections.KeyValuePair__HashableWeakReference__Outracks_S-355124a0.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName::GetEnumerator() { return Dictionary__HashableWeakReference__Outracks_Simulator_Bytecode_TypeName__GetEnumerator(this); }

}}}


#endif
