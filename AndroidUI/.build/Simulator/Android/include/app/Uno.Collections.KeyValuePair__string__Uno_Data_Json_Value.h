// This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.13.2\Source\Uno\Collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__UNO_DATA_JSON_VALUE_H__
#define __APP_UNO_COLLECTIONS_KEY_VALUE_PAIR__STRING__UNO_DATA_JSON_VALUE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Data { namespace Json { struct Value; } } } }

namespace app {
namespace Uno {
namespace Collections {

struct KeyValuePair__string__Uno_Data_Json_Value;

struct KeyValuePair__string__Uno_Data_Json_Value__uType : ::uStructType
{
};

KeyValuePair__string__Uno_Data_Json_Value__uType* KeyValuePair__string__Uno_Data_Json_Value__typeof();

void KeyValuePair__string__Uno_Data_Json_Value___ObjInit(KeyValuePair__string__Uno_Data_Json_Value* __this, ::uString* key, ::app::Uno::Data::Json::Value* value);
::uString* KeyValuePair__string__Uno_Data_Json_Value__get_Key(KeyValuePair__string__Uno_Data_Json_Value* __this);
::app::Uno::Data::Json::Value* KeyValuePair__string__Uno_Data_Json_Value__get_Value(KeyValuePair__string__Uno_Data_Json_Value* __this);
KeyValuePair__string__Uno_Data_Json_Value KeyValuePair__string__Uno_Data_Json_Value__New_1(::uStatic* __this, ::uString* key, ::app::Uno::Data::Json::Value* value);

struct KeyValuePair__string__Uno_Data_Json_Value
{
    ::uStrong< ::uString*> _key;
    ::uStrong< ::app::Uno::Data::Json::Value*> _value;

    void _ObjInit(::uString* key, ::app::Uno::Data::Json::Value* value) { KeyValuePair__string__Uno_Data_Json_Value___ObjInit(this, key, value); }
    ::uString* Key() { return KeyValuePair__string__Uno_Data_Json_Value__get_Key(this); }
    ::app::Uno::Data::Json::Value* Value() { return KeyValuePair__string__Uno_Data_Json_Value__get_Value(this); }
};

}}}


#endif
