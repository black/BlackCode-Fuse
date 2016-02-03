// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__OUTRACKS_SIMULATOR_BYTECODE_TYPE_NAM_95C49E9B_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__OUTRACKS_SIMULATOR_BYTECODE_TYPE_NAM_95C49E9B_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Outracks_Simulator_Bytecode-5f21ef5b.h>
#include <app/Uno.Collections.IDictionary__Outracks_Simulator_Bytecode_TypeNa-24898923.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Outra-b898683d.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct TypeName; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type;

struct Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_Outracks_Simulator_Bytecode_TypeName_Uno_Type_ __interface_1;
};

Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__uType* Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__typeof();

::uObject* Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__GetEnumerator_boxed(Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this);
void Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type___ObjInit(Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this);
void Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type___ObjInit_1(Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::uObject* dictionary);
void Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Add(Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::app::Outracks::Simulator::Bytecode::TypeName* key, ::uType* value);
void Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Clear(Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this);
bool Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__ContainsKey(Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::app::Outracks::Simulator::Bytecode::TypeName* key);
int Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Count(Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this);
::uType* Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Item(Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::app::Outracks::Simulator::Bytecode::TypeName* key);
::app::Uno::Collections::Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Keys(Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Values(Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this);
::app::Uno::Collections::Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__GetEnumerator(Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this);
Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__New_1(::uStatic* __this);
Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Rehash(Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this);
bool Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Remove(Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::app::Outracks::Simulator::Bytecode::TypeName* key);
void Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__set_Item(Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::app::Outracks::Simulator::Bytecode::TypeName* key, ::uType* value);
bool Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__TryGetValue(Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::app::Outracks::Simulator::Bytecode::TypeName* key, ::uType** value);
void Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Uno_Collections_ICollection_Add(Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::app::Uno::Collections::KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type item);
bool Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Uno_Collections_ICollection_Contains(Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::app::Uno::Collections::KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type item);
bool Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Uno_Collections_ICollection_Remove(Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type* __this, ::app::Uno::Collections::KeyValuePair__Outracks_Simulator_Bytecode_TypeName__Uno_Type item);

struct Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type___ObjInit_1(this, dictionary); }
    void Add(::app::Outracks::Simulator::Bytecode::TypeName* key, ::uType* value) { Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Add(this, key, value); }
    void Clear() { Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Clear(this); }
    bool ContainsKey(::app::Outracks::Simulator::Bytecode::TypeName* key) { return Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__ContainsKey(this, key); }
    int Count() { return Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Count(this); }
    ::uType* Item(::app::Outracks::Simulator::Bytecode::TypeName* key) { return Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* Keys() { return Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_TypeName__Uno_Type* Values() { return Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type GetEnumerator();
    void Rehash() { Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Rehash(this); }
    bool Remove(::app::Outracks::Simulator::Bytecode::TypeName* key) { return Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__Remove(this, key); }
    void Item(::app::Outracks::Simulator::Bytecode::TypeName* key, ::uType* value) { Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__set_Item(this, key, value); }
    bool TryGetValue(::app::Outracks::Simulator::Bytecode::TypeName* key, ::uType** value) { return Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__Outracks_Simulator_Byte-87907749.h>
#include <app/Uno.Collections.KeyValuePair__Outracks_Simulator_Bytecode_TypeN-4e1d4b4a.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__Outracks_Simulator_Bytecode_TypeName__Uno_Type Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type::GetEnumerator() { return Dictionary__Outracks_Simulator_Bytecode_TypeName__Uno_Type__GetEnumerator(this); }

}}}


#endif
