// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_DATA_JSON_VALUE_H__
#define __APP_UNO_COLLECTIONS_DICTIONARY__STRING__UNO_DATA_JSON_VALUE_H__

#include <app/Uno.Collections.Dictionary2_Bucket__string__Uno_Data_Json_Value.h>
#include <app/Uno.Collections.IDictionary__string__Uno_Data_Json_Value.h>
#include <app/Uno.Collections.IEnumerable__Uno_Collections_KeyValuePair_strin-5016a80c.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Collections { struct Dictionary2_Enumerator__string__Uno_Data_Json_Value; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_KeyCollection__string__Uno_Data_Json_Value; } } }
namespace app { namespace Uno { namespace Collections { struct Dictionary2_ValueCollection__string__Uno_Data_Json_Value; } } }
namespace app { namespace Uno { namespace Collections { struct KeyValuePair__string__Uno_Data_Json_Value; } } }
namespace app { namespace Uno { namespace Data { namespace Json { struct Value; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct Dictionary__string__Uno_Data_Json_Value;

struct Dictionary__string__Uno_Data_Json_Value__uType : ::uClassType
{
    ::app::Uno::Collections::IDictionary__string__Uno_Data_Json_Value __interface_0;
    ::app::Uno::Collections::IEnumerable__Uno_Collections_KeyValuePair_string_Uno_Data_Json_Value_ __interface_1;
};

Dictionary__string__Uno_Data_Json_Value__uType* Dictionary__string__Uno_Data_Json_Value__typeof();

::uObject* Dictionary__string__Uno_Data_Json_Value__GetEnumerator_boxed(Dictionary__string__Uno_Data_Json_Value* __this);
void Dictionary__string__Uno_Data_Json_Value___ObjInit(Dictionary__string__Uno_Data_Json_Value* __this);
void Dictionary__string__Uno_Data_Json_Value___ObjInit_1(Dictionary__string__Uno_Data_Json_Value* __this, ::uObject* dictionary);
void Dictionary__string__Uno_Data_Json_Value__Add(Dictionary__string__Uno_Data_Json_Value* __this, ::uString* key, ::app::Uno::Data::Json::Value* value);
void Dictionary__string__Uno_Data_Json_Value__Clear(Dictionary__string__Uno_Data_Json_Value* __this);
bool Dictionary__string__Uno_Data_Json_Value__ContainsKey(Dictionary__string__Uno_Data_Json_Value* __this, ::uString* key);
int Dictionary__string__Uno_Data_Json_Value__get_Count(Dictionary__string__Uno_Data_Json_Value* __this);
::app::Uno::Data::Json::Value* Dictionary__string__Uno_Data_Json_Value__get_Item(Dictionary__string__Uno_Data_Json_Value* __this, ::uString* key);
::app::Uno::Collections::Dictionary2_KeyCollection__string__Uno_Data_Json_Value* Dictionary__string__Uno_Data_Json_Value__get_Keys(Dictionary__string__Uno_Data_Json_Value* __this);
::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Data_Json_Value* Dictionary__string__Uno_Data_Json_Value__get_Values(Dictionary__string__Uno_Data_Json_Value* __this);
::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Data_Json_Value Dictionary__string__Uno_Data_Json_Value__GetEnumerator(Dictionary__string__Uno_Data_Json_Value* __this);
Dictionary__string__Uno_Data_Json_Value* Dictionary__string__Uno_Data_Json_Value__New_1(::uStatic* __this);
Dictionary__string__Uno_Data_Json_Value* Dictionary__string__Uno_Data_Json_Value__New_2(::uStatic* __this, ::uObject* dictionary);
void Dictionary__string__Uno_Data_Json_Value__Rehash(Dictionary__string__Uno_Data_Json_Value* __this);
bool Dictionary__string__Uno_Data_Json_Value__Remove(Dictionary__string__Uno_Data_Json_Value* __this, ::uString* key);
void Dictionary__string__Uno_Data_Json_Value__set_Item(Dictionary__string__Uno_Data_Json_Value* __this, ::uString* key, ::app::Uno::Data::Json::Value* value);
bool Dictionary__string__Uno_Data_Json_Value__TryGetValue(Dictionary__string__Uno_Data_Json_Value* __this, ::uString* key, ::app::Uno::Data::Json::Value** value);
void Dictionary__string__Uno_Data_Json_Value__Uno_Collections_ICollection_Add(Dictionary__string__Uno_Data_Json_Value* __this, ::app::Uno::Collections::KeyValuePair__string__Uno_Data_Json_Value item);
bool Dictionary__string__Uno_Data_Json_Value__Uno_Collections_ICollection_Contains(Dictionary__string__Uno_Data_Json_Value* __this, ::app::Uno::Collections::KeyValuePair__string__Uno_Data_Json_Value item);
bool Dictionary__string__Uno_Data_Json_Value__Uno_Collections_ICollection_Remove(Dictionary__string__Uno_Data_Json_Value* __this, ::app::Uno::Collections::KeyValuePair__string__Uno_Data_Json_Value item);

struct Dictionary__string__Uno_Data_Json_Value : ::uObject
{
    int _count;
    int _dummies;
    ::uStrong< ::uArray*> _buckets;
    int _version;

    ::uObject* GetEnumerator_boxed() { return Dictionary__string__Uno_Data_Json_Value__GetEnumerator_boxed(this); }
    void _ObjInit() { Dictionary__string__Uno_Data_Json_Value___ObjInit(this); }
    void _ObjInit_1(::uObject* dictionary) { Dictionary__string__Uno_Data_Json_Value___ObjInit_1(this, dictionary); }
    void Add(::uString* key, ::app::Uno::Data::Json::Value* value) { Dictionary__string__Uno_Data_Json_Value__Add(this, key, value); }
    void Clear() { Dictionary__string__Uno_Data_Json_Value__Clear(this); }
    bool ContainsKey(::uString* key) { return Dictionary__string__Uno_Data_Json_Value__ContainsKey(this, key); }
    int Count() { return Dictionary__string__Uno_Data_Json_Value__get_Count(this); }
    ::app::Uno::Data::Json::Value* Item(::uString* key) { return Dictionary__string__Uno_Data_Json_Value__get_Item(this, key); }
    ::app::Uno::Collections::Dictionary2_KeyCollection__string__Uno_Data_Json_Value* Keys() { return Dictionary__string__Uno_Data_Json_Value__get_Keys(this); }
    ::app::Uno::Collections::Dictionary2_ValueCollection__string__Uno_Data_Json_Value* Values() { return Dictionary__string__Uno_Data_Json_Value__get_Values(this); }
    ::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Data_Json_Value GetEnumerator();
    void Rehash() { Dictionary__string__Uno_Data_Json_Value__Rehash(this); }
    bool Remove(::uString* key) { return Dictionary__string__Uno_Data_Json_Value__Remove(this, key); }
    void Item(::uString* key, ::app::Uno::Data::Json::Value* value) { Dictionary__string__Uno_Data_Json_Value__set_Item(this, key, value); }
    bool TryGetValue(::uString* key, ::app::Uno::Data::Json::Value** value) { return Dictionary__string__Uno_Data_Json_Value__TryGetValue(this, key, value); }
};

}}}

#include <app/Uno.Collections.Dictionary2_Enumerator__string__Uno_Data_Json_Value.h>
#include <app/Uno.Collections.KeyValuePair__string__Uno_Data_Json_Value.h>

namespace app {
namespace Uno {
namespace Collections {

inline ::app::Uno::Collections::Dictionary2_Enumerator__string__Uno_Data_Json_Value Dictionary__string__Uno_Data_Json_Value::GetEnumerator() { return Dictionary__string__Uno_Data_Json_Value__GetEnumerator(this); }

}}}


#endif
