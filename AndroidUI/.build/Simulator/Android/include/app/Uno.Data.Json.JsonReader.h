// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_DATA_JSON_JSON_READER_H__
#define __APP_UNO_DATA_JSON_JSON_READER_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Uno { namespace Data { namespace Json { struct JsonReaderHandle; } } } }

namespace app {
namespace Uno {
namespace Data {
namespace Json {

struct JsonReader;

struct JsonReader__uType : ::uClassType
{
};

JsonReader__uType* JsonReader__typeof();

void JsonReader___ObjInit(JsonReader* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle);
void JsonReader___ObjInit_1(JsonReader* __this, ::uString* json);
bool JsonReader__AsBool(JsonReader* __this);
bool JsonReader__AsBoolOrDefault(JsonReader* __this);
double JsonReader__AsDouble(JsonReader* __this);
double JsonReader__AsDoubleOrDefault(JsonReader* __this);
float JsonReader__AsFloat(JsonReader* __this);
float JsonReader__AsFloatOrDefault(JsonReader* __this);
int JsonReader__AsInteger(JsonReader* __this);
int JsonReader__AsIntegerOrDefault(JsonReader* __this);
::uString* JsonReader__AsString(JsonReader* __this);
::uString* JsonReader__AsStringOrDefault(JsonReader* __this);
int JsonReader__get_Count(JsonReader* __this);
JsonReader* JsonReader__get_Item(JsonReader* __this, int index);
JsonReader* JsonReader__get_Item_1(JsonReader* __this, ::uString* key);
int JsonReader__get_JsonDataType(JsonReader* __this);
::uArray* JsonReader__get_Keys(JsonReader* __this);
bool JsonReader__HasKey(JsonReader* __this, ::uString* key);
JsonReader* JsonReader__New_1(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle);
JsonReader* JsonReader__New_2(::uStatic* __this, ::uString* json);
float JsonReader__op_Explicit(::uStatic* __this, JsonReader* value);
::uString* JsonReader__op_Explicit_1(::uStatic* __this, JsonReader* value);
int JsonReader__op_Explicit_2(::uStatic* __this, JsonReader* value);
bool JsonReader__op_Explicit_3(::uStatic* __this, JsonReader* value);
JsonReader* JsonReader__Parse(::uStatic* __this, ::uString* json);

struct JsonReader : ::uObject
{
    ::uStrong< ::app::Uno::Data::Json::JsonReaderHandle*> _handle;

    void _ObjInit(::app::Uno::Data::Json::JsonReaderHandle* handle) { JsonReader___ObjInit(this, handle); }
    void _ObjInit_1(::uString* json) { JsonReader___ObjInit_1(this, json); }
    bool AsBool() { return JsonReader__AsBool(this); }
    bool AsBoolOrDefault() { return JsonReader__AsBoolOrDefault(this); }
    double AsDouble() { return JsonReader__AsDouble(this); }
    double AsDoubleOrDefault() { return JsonReader__AsDoubleOrDefault(this); }
    float AsFloat() { return JsonReader__AsFloat(this); }
    float AsFloatOrDefault() { return JsonReader__AsFloatOrDefault(this); }
    int AsInteger() { return JsonReader__AsInteger(this); }
    int AsIntegerOrDefault() { return JsonReader__AsIntegerOrDefault(this); }
    ::uString* AsString() { return JsonReader__AsString(this); }
    ::uString* AsStringOrDefault() { return JsonReader__AsStringOrDefault(this); }
    int Count() { return JsonReader__get_Count(this); }
    JsonReader* Item(int index) { return JsonReader__get_Item(this, index); }
    JsonReader* Item_1(::uString* key) { return JsonReader__get_Item_1(this, key); }
    int JsonDataType() { return JsonReader__get_JsonDataType(this); }
    ::uArray* Keys() { return JsonReader__get_Keys(this); }
    bool HasKey(::uString* key) { return JsonReader__HasKey(this, key); }
};

}}}}


#endif
