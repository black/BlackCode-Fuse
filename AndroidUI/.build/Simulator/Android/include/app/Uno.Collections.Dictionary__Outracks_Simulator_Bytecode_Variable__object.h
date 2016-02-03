// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__OUTRACKS_SIMULATOR_BYTECODE_VARIABLE__OBJECT_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__OUTRACKS_SIMULATOR_BYTECODE_VARIABLE__OBJECT_H__

#include <app/Uno.Collections.Dictionary2_Bucket__Outracks_Simulator_Bytecode-25fa6d37.h>
#include <app/Uno.Collections.IDictionary__Outracks_Simulator_Bytecode_Variab-26dfce29.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_Outra-2bf9f909.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Outracks { namespace Simulator { namespace Bytecode { struct Variable; } } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_Variable__object; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__Outracks_Simulator_Bytecode_Variable__object; } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__Outracks_Simulator_Bytecode_Variable__object;

struct Dictionary__Outracks_Simulator_Bytecode_Variable__object__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__Outracks_Simulator_Bytecode_Variable__object __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_Outracks_Simulator_Bytecode_Variable_object_ __interface_1;
};

Dictionary__Outracks_Simulator_Bytecode_Variable__object__uType* Dictionary__Outracks_Simulator_Bytecode_Variable__object__typeof();

::uObject* Dictionary__Outracks_Simulator_Bytecode_Variable__object__GetEnumerator_boxed(Dictionary__Outracks_Simulator_Bytecode_Variable__object* __this);
void Dictionary__Outracks_Simulator_Bytecode_Variable__object___ObjInit(Dictionary__Outracks_Simulator_Bytecode_Variable__object* __this);
void Dictionary__Outracks_Simulator_Bytecode_Variable__object___ObjInit_1(Dictionary__Outracks_Simulator_Bytecode_Variable__object* __this, ::uObject* dictionary);
void Dictionary__Outracks_Simulator_Bytecode_Variable__object__Add(Dictionary__Outracks_Simulator_Bytecode_Variable__object* __this, ::app::Outracks::Simulator::Bytecode::Variable* key, ::uObject* value);
void Dictionary__Outracks_Simulator_Bytecode_Variable__object__Clear(Dictionary__Outracks_Simulator_Bytecode_Variable__object* __this);
bool Dictionary__Outracks_Simulator_Bytecode_Variable__object__ContainsKey(Dictionary__Outracks_Simulator_Bytecode_Variable__object* __this, ::app::Outracks::Simulator::Bytecode::Variable* key);
int Dictionary__Outracks_Simulator_Bytecode_Variable__object__get_Count(Dictionary__Outracks_Simulator_Bytecode_Variable__object* __this);
::uObject* Dictionary__Outracks_Simulator_Bytecode_Variable__object__get_Item(Dictionary__Outracks_Simulator_Bytecode_Variable__object* __this, ::app::Outracks::Simulator::Bytecode::Variable* key);
::app::Uno::Collections::Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_Variable__object* Dictionary__Outracks_Simulator_Bytecode_Variable__object__get_Keys(Dictionary__Outracks_Simulator_Bytecode_Variable__object* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object* Dictionary__Outracks_Simulator_Bytecode_Variable__object__get_Values(Dictionary__Outracks_Simulator_Bytecode_Variable__object* __this);
::app::Uno::Collections::Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object Dictionary__Outracks_Simulator_Bytecode_Variable__object__GetEnumerator(Dictionary__Outracks_Simulator_Bytecode_Variable__object* __this);
Dictionary__Outracks_Simulator_Bytecode_Variable__object* Dictionary__Outracks_Simulator_Bytecode_Variable__object__New_1(::uStatic* __this);
Dictionary__Outracks_Simulator_Bytecode_Variable__object* Dictionary__Outracks_Simulator_Bytecode_Variable__object__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__Outracks_Simulator_Bytecode_Variable__object__Rehash(Dictionary__Outracks_Simulator_Bytecode_Variable__object* __this);
bool Dictionary__Outracks_Simulator_Bytecode_Variable__object__Remove(Dictionary__Outracks_Simulator_Bytecode_Variable__object* __this, ::app::Outracks::Simulator::Bytecode::Variable* key);
void Dictionary__Outracks_Simulator_Bytecode_Variable__object__set_Item(Dictionary__Outracks_Simulator_Bytecode_Variable__object* __this, ::app::Outracks::Simulator::Bytecode::Variable* key, ::uObject* value);
bool Dictionary__Outracks_Simulator_Bytecode_Variable__object__TryGetValue(Dictionary__Outracks_Simulator_Bytecode_Variable__object* __this, ::app::Outracks::Simulator::Bytecode::Variable* key, ::uObject** value);
void Dictionary__Outracks_Simulator_Bytecode_Variable__object__Uno_Collections_ICollection_Add(Dictionary__Outracks_Simulator_Bytecode_Variable__object* __this, ::app::Uno::Collections::KeyValuePair__Outracks_Simulator_Bytecode_Variable__object item);
bool Dictionary__Outracks_Simulator_Bytecode_Variable__object__Uno_Collections_ICollection_Contains(Dictionary__Outracks_Simulator_Bytecode_Variable__object* __this, ::app::Uno::Collections::KeyValuePair__Outracks_Simulator_Bytecode_Variable__object item);
bool Dictionary__Outracks_Simulator_Bytecode_Variable__object__Uno_Collections_ICollection_Remove(Dictionary__Outracks_Simulator_Bytecode_Variable__object* __this, ::app::Uno::Collections::KeyValuePair__Outracks_Simulator_Bytecode_Variable__object item);

struct Dictionary__Outracks_Simulator_Bytecode_Variable__object : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__Outracks_Simulator_Bytecode_Variable__object__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__Outracks_Simulator_Bytecode_Variable__object___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__Outracks_Simulator_Bytecode_Variable__object___ObjInit_1(this, dictionary); }
    void Add(::app::Outracks::Simulator::Bytecode::Variable* key, ::uObject* value) { Dictionary__Outracks_Simulator_Bytecode_Variable__object__Add(this, key, value); }
    void Clear() { Dictionary__Outracks_Simulator_Bytecode_Variable__object__Clear(this); }
    bool ContainsKey(::app::Outracks::Simulator::Bytecode::Variable* key) { return Dictionary__Outracks_Simulator_Bytecode_Variable__object__ContainsKey(this, key); }
    int Count() { return Dictionary__Outracks_Simulator_Bytecode_Variable__object__get_Count(this); }
    ::uObject* Item(::app::Outracks::Simulator::Bytecode::Variable* key) { return Dictionary__Outracks_Simulator_Bytecode_Variable__object__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__Outracks_Simulator_Bytecode_Variable__object* Keys() { return Dictionary__Outracks_Simulator_Bytecode_Variable__object__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__Outracks_Simulator_Bytecode_Variable__object* Values() { return Dictionary__Outracks_Simulator_Bytecode_Variable__object__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object GetEnumerator();
    void Rehash() { Dictionary__Outracks_Simulator_Bytecode_Variable__object__Rehash(this); }
    bool Remove(::app::Outracks::Simulator::Bytecode::Variable* key) { return Dictionary__Outracks_Simulator_Bytecode_Variable__object__Remove(this, key); }
    void Item(::app::Outracks::Simulator::Bytecode::Variable* key, ::uObject* value) { Dictionary__Outracks_Simulator_Bytecode_Variable__object__set_Item(this, key, value); }
    bool TryGetValue(::app::Outracks::Simulator::Bytecode::Variable* key, ::uObject** value) { return Dictionary__Outracks_Simulator_Bytecode_Variable__object__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__Outracks_Simulator_Byte-bc968003.h>
#include <app/Uno.Collections.KeyValuePair__Outracks_Simulator_Bytecode_Varia-7ba73cc1.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__Outracks_Simulator_Bytecode_Variable__object Dictionary__Outracks_Simulator_Bytecode_Variable__object::GetEnumerator() { return Dictionary__Outracks_Simulator_Bytecode_Variable__object__GetEnumerator(this); }

}}}


#endif
