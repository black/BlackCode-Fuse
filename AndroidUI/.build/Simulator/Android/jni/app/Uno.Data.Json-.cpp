#include <app/Uno.Bool.h>
#include <app/Uno.Char.h>
#include <app/Uno.Collections.Dictionary__string__Uno_Data_Json_Value.h>
#include <app/Uno.Collections.Dictionary2_KeyCollection__string__Uno_Data_Json_Value.h>
#include <app/Uno.Collections.EnumerableExtensions.h>
#include <app/Uno.Collections.IEnumerable__string.h>
#include <app/Uno.Collections.List__Uno_Data_Json_Value.h>
#include <app/Uno.Data.Json.Array.h>
#include <app/Uno.Data.Json.AtomicValue__bool.h>
#include <app/Uno.Data.Json.AtomicValue__double.h>
#include <app/Uno.Data.Json.AtomicValue__string.h>
#include <app/Uno.Data.Json.Boolean.h>
#include <app/Uno.Data.Json.JsonDataType.h>
#include <app/Uno.Data.Json.JsonException.h>
#include <app/Uno.Data.Json.JsonReader.h>
#include <app/Uno.Data.Json.JsonReaderHandle.h>
#include <app/Uno.Data.Json.JsonReaderImpl.h>
#include <app/Uno.Data.Json.Null.h>
#include <app/Uno.Data.Json.Number.h>
#include <app/Uno.Data.Json.Object.h>
#include <app/Uno.Data.Json.Parser.h>
#include <app/Uno.Data.Json.String.h>
#include <app/Uno.Data.Json.Value.h>
#include <app/Uno.Double.h>
#include <app/Uno.Exception.h>
#include <app/Uno.Float.h>
#include <app/Uno.Int.h>
#include <app/Uno.Object.h>
#include <app/Uno.String.h>
#include <app/Uno.UInt.h>

namespace app {
namespace Uno {
namespace Data {
namespace Json {

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Array__uType* Array__typeof()
{
    static ::uStaticStrong<Array__uType*> type;
    if (type != NULL) return type;

    type = (Array__uType*)::uAllocClassType(sizeof(Array__uType), "Uno.Data.Json.Array", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Data::Json::Value__typeof());

    type->SetStrongRefs(
        "_values", offsetof(Array, _values));

    type->SetFields(1,
        ::uNewField("_values", NULL, offsetof(Array, _values), ::app::Uno::Collections::List__Uno_Data_Json_Value__typeof()));

    type->SetFunctions(4,
        ::uNewFunctionVoid("Add", Array__Add, 0, false, ::app::Uno::Data::Json::Value__typeof()),
        ::uNewFunction("get_Count", Array__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", Array__get_Item, 0, false, ::app::Uno::Data::Json::Value__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction(".ctor", Array__New_1, 0, true, Array__typeof()));

    ::uRegisterType(type);
    return type;
}

void Array___ObjInit_1(Array* __this)
{
    __this->_values = ::app::Uno::Collections::List__Uno_Data_Json_Value__New_1(NULL);
    ::app::Uno::Data::Json::Value___ObjInit(__this);
}

void Array__Add(Array* __this, ::app::Uno::Data::Json::Value* v)
{
    ::uPtr< ::app::Uno::Collections::List__Uno_Data_Json_Value*>(__this->_values)->Add(v);
}

int Array__get_Count(Array* __this)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Data_Json_Value*>(__this->_values)->Count();
}

::app::Uno::Data::Json::Value* Array__get_Item(Array* __this, int index)
{
    return ::uPtr< ::app::Uno::Collections::List__Uno_Data_Json_Value*>(__this->_values)->Item(index);
}

Array* Array__New_1(::uStatic* __this)
{
    Array* inst = (Array*)::uAllocObject(sizeof(Array), Array__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Boolean*> Boolean___false;
::uStaticStrong< Boolean*> Boolean___true;

Boolean__uType* Boolean__typeof()
{
    static ::uStaticStrong<Boolean__uType*> type;
    if (type != NULL) return type;

    type = (Boolean__uType*)::uAllocClassType(sizeof(Boolean__uType), "Uno.Data.Json.Boolean", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Data::Json::AtomicValue__bool__typeof());

    type->SetFields(2,
        ::uNewField("_false", &Boolean___false, 0, Boolean__typeof()),
        ::uNewField("_true", &Boolean___true, 0, Boolean__typeof()));

    type->SetFunctions(2,
        ::uNewFunction("get_False", Boolean__get_False, 0, true, Boolean__typeof()),
        ::uNewFunction("get_True", Boolean__get_True, 0, true, Boolean__typeof()));

    ::uRegisterType(type);
    return type;
}

void Boolean___ObjInit_2(Boolean* __this, bool b)
{
    ::app::Uno::Data::Json::AtomicValue__bool___ObjInit_1(__this, b);
}

void Boolean___TypeInit(::uStatic* __this)
{
    Boolean___true = Boolean__New_1(NULL, true);
    Boolean___false = Boolean__New_1(NULL, false);
}

Boolean* Boolean__get_False(::uStatic* __this)
{
    return Boolean___false;
}

Boolean* Boolean__get_True(::uStatic* __this)
{
    return Boolean___true;
}

Boolean* Boolean__New_1(::uStatic* __this, bool b)
{
    Boolean* inst = (Boolean*)::uAllocObject(sizeof(Boolean), Boolean__typeof());
    inst->_ObjInit_2(b);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uEnumType* JsonDataType__typeof()
{
    static ::uStaticStrong< ::uEnumType*> type;
    if (type != NULL) return type;

    type = ::uAllocEnumType("Uno.Data.Json.JsonDataType", ::app::Uno::Int__typeof(), 7);

    type->SetLiterals(
        "Error", -1LL,
        "Null", 0LL,
        "Number", 1LL,
        "String", 2LL,
        "Boolean", 3LL,
        "Array", 4LL,
        "Object", 5LL);

    ::uRegisterType(type);
    return type;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

JsonException__uType* JsonException__typeof()
{
    static ::uStaticStrong<JsonException__uType*> type;
    if (type != NULL) return type;

    type = (JsonException__uType*)::uAllocClassType(sizeof(JsonException__uType), "Uno.Data.Json.JsonException", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Exception__typeof());

    ::uRegisterType(type);
    return type;
}

void JsonException___ObjInit_2(JsonException* __this, ::uString* message)
{
    ::app::Uno::Exception___ObjInit_1(__this, message);
}

JsonException* JsonException__New_3(::uStatic* __this, ::uString* message)
{
    JsonException* inst = (JsonException*)::uAllocObject(sizeof(JsonException), JsonException__typeof());
    inst->_ObjInit_2(message);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

JsonReader__uType* JsonReader__typeof()
{
    static ::uStaticStrong<JsonReader__uType*> type;
    if (type != NULL) return type;

    type = (JsonReader__uType*)::uAllocClassType(sizeof(JsonReader__uType), "Uno.Data.Json.JsonReader", false, 0, 1, 0);

    type->SetStrongRefs(
        "_handle", offsetof(JsonReader, _handle));

    type->SetFields(1,
        ::uNewField("_handle", NULL, offsetof(JsonReader, _handle), ::app::Uno::Data::Json::JsonReaderHandle__typeof()));

    type->SetFunctions(17,
        ::uNewFunction("AsBool", JsonReader__AsBool, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("AsBoolOrDefault", JsonReader__AsBoolOrDefault, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("AsDouble", JsonReader__AsDouble, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("AsDoubleOrDefault", JsonReader__AsDoubleOrDefault, 0, false, ::app::Uno::Double__typeof()),
        ::uNewFunction("AsFloat", JsonReader__AsFloat, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("AsFloatOrDefault", JsonReader__AsFloatOrDefault, 0, false, ::app::Uno::Float__typeof()),
        ::uNewFunction("AsInteger", JsonReader__AsInteger, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("AsIntegerOrDefault", JsonReader__AsIntegerOrDefault, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("AsString", JsonReader__AsString, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("AsStringOrDefault", JsonReader__AsStringOrDefault, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("get_Count", JsonReader__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", JsonReader__get_Item, 0, false, JsonReader__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", JsonReader__get_Item_1, 0, false, JsonReader__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("get_JsonDataType", JsonReader__get_JsonDataType, 0, false, ::app::Uno::Data::Json::JsonDataType__typeof()),
        ::uNewFunction("get_Keys", JsonReader__get_Keys, 0, false, ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewFunction("HasKey", JsonReader__HasKey, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("Parse", JsonReader__Parse, 0, true, JsonReader__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void JsonReader___ObjInit(JsonReader* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle)
{
    __this->_handle = handle;
}

void JsonReader___ObjInit_1(JsonReader* __this, ::uString* json)
{
    __this->_handle = ::app::Uno::Data::Json::JsonReaderImpl__Parse(NULL, json);
}

bool JsonReader__AsBool(JsonReader* __this)
{
    return ::app::Uno::Data::Json::JsonReaderImpl__GetValueAsBoolOrThrow(NULL, __this->_handle);
}

bool JsonReader__AsBoolOrDefault(JsonReader* __this)
{
    return ::app::Uno::Data::Json::JsonReaderImpl__GetValueAsBool(NULL, __this->_handle);
}

double JsonReader__AsDouble(JsonReader* __this)
{
    return ::app::Uno::Data::Json::JsonReaderImpl__GetValueAsDoubleOrThrow(NULL, __this->_handle);
}

double JsonReader__AsDoubleOrDefault(JsonReader* __this)
{
    return ::app::Uno::Data::Json::JsonReaderImpl__GetValueAsDouble(NULL, __this->_handle);
}

float JsonReader__AsFloat(JsonReader* __this)
{
    return ::app::Uno::Data::Json::JsonReaderImpl__GetValueAsFloatOrThrow(NULL, __this->_handle);
}

float JsonReader__AsFloatOrDefault(JsonReader* __this)
{
    return ::app::Uno::Data::Json::JsonReaderImpl__GetValueAsFloat(NULL, __this->_handle);
}

int JsonReader__AsInteger(JsonReader* __this)
{
    return ::app::Uno::Data::Json::JsonReaderImpl__GetValueAsIntegerOrThrow(NULL, __this->_handle);
}

int JsonReader__AsIntegerOrDefault(JsonReader* __this)
{
    return ::app::Uno::Data::Json::JsonReaderImpl__GetValueAsInteger(NULL, __this->_handle);
}

::uString* JsonReader__AsString(JsonReader* __this)
{
    return ::app::Uno::Data::Json::JsonReaderImpl__GetValueAsStringOrThrow(NULL, __this->_handle);
}

::uString* JsonReader__AsStringOrDefault(JsonReader* __this)
{
    return ::app::Uno::Data::Json::JsonReaderImpl__GetValueAsString(NULL, __this->_handle);
}

int JsonReader__get_Count(JsonReader* __this)
{
    return ::app::Uno::Data::Json::JsonReaderImpl__GetCount(NULL, __this->_handle);
}

JsonReader* JsonReader__get_Item(JsonReader* __this, int index)
{
    ::app::Uno::Data::Json::JsonReaderHandle* handle = ::app::Uno::Data::Json::JsonReaderImpl__GetItemByIndex(NULL, __this->_handle, index);
    return (handle == NULL) ? (JsonReader*)NULL : JsonReader__New_1(NULL, handle);
}

JsonReader* JsonReader__get_Item_1(JsonReader* __this, ::uString* key)
{
    ::app::Uno::Data::Json::JsonReaderHandle* handle = ::app::Uno::Data::Json::JsonReaderImpl__GetItemByKey(NULL, __this->_handle, key);
    return (handle == NULL) ? (JsonReader*)NULL : JsonReader__New_1(NULL, handle);
}

int JsonReader__get_JsonDataType(JsonReader* __this)
{
    ::uString* type = ::app::Uno::Data::Json::JsonReaderImpl__GetJsonDataType(NULL, __this->_handle);

    if (::app::Uno::String__op_Equality(NULL, type, ::uGetConstString("number")))
    {
        return 1;
    }

    if (::app::Uno::String__op_Equality(NULL, type, ::uGetConstString("boolean")))
    {
        return 3;
    }

    if (::app::Uno::String__op_Equality(NULL, type, ::uGetConstString("string")))
    {
        return 2;
    }

    if (::app::Uno::String__op_Equality(NULL, type, ::uGetConstString("array")))
    {
        return 4;
    }

    if (::app::Uno::String__op_Equality(NULL, type, ::uGetConstString("object")))
    {
        return 5;
    }

    if (::app::Uno::String__op_Equality(NULL, type, ::uGetConstString("null")))
    {
        return 0;
    }

    return -1;
}

::uArray* JsonReader__get_Keys(JsonReader* __this)
{
    return ::app::Uno::Data::Json::JsonReaderImpl__GetKeys(NULL, __this->_handle);
}

bool JsonReader__HasKey(JsonReader* __this, ::uString* key)
{
    return ::app::Uno::Data::Json::JsonReaderImpl__GetHasKey(NULL, __this->_handle, key);
}

JsonReader* JsonReader__New_1(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle)
{
    JsonReader* inst = (JsonReader*)::uAllocObject(sizeof(JsonReader), JsonReader__typeof());
    inst->_ObjInit(handle);
    return inst;
}

JsonReader* JsonReader__New_2(::uStatic* __this, ::uString* json)
{
    JsonReader* inst = (JsonReader*)::uAllocObject(sizeof(JsonReader), JsonReader__typeof());
    inst->_ObjInit_1(json);
    return inst;
}

float JsonReader__op_Explicit(::uStatic* __this, JsonReader* value)
{
    return ::uPtr< JsonReader*>(value)->AsFloat();
}

::uString* JsonReader__op_Explicit_1(::uStatic* __this, JsonReader* value)
{
    return ::uPtr< JsonReader*>(value)->AsString();
}

int JsonReader__op_Explicit_2(::uStatic* __this, JsonReader* value)
{
    return ::uPtr< JsonReader*>(value)->AsInteger();
}

bool JsonReader__op_Explicit_3(::uStatic* __this, JsonReader* value)
{
    return ::uPtr< JsonReader*>(value)->AsBool();
}

JsonReader* JsonReader__Parse(::uStatic* __this, ::uString* json)
{
    return JsonReader__New_2(NULL, json);
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

JsonReaderHandle__uType* JsonReaderHandle__typeof()
{
    static ::uStaticStrong<JsonReaderHandle__uType*> type;
    if (type != NULL) return type;

    type = (JsonReaderHandle__uType*)::uAllocClassType(sizeof(JsonReaderHandle__uType), "Uno.Data.Json.JsonReaderHandle", false, 0, 1, 0);

    type->SetStrongRefs(
        "_handle", offsetof(JsonReaderHandle, _handle));

    type->SetFields(1,
        ::uNewField("_handle", NULL, offsetof(JsonReaderHandle, _handle), ::app::Uno::Data::Json::Value__typeof()));

    type->SetFunctions(1,
        ::uNewFunction(".ctor", JsonReaderHandle__New_1, 0, true, JsonReaderHandle__typeof(), ::app::Uno::Data::Json::Value__typeof()));

    ::uRegisterType(type);
    return type;
}

void JsonReaderHandle___ObjInit(JsonReaderHandle* __this, ::app::Uno::Data::Json::Value* handle)
{
    __this->_handle = handle;
}

JsonReaderHandle* JsonReaderHandle__New_1(::uStatic* __this, ::app::Uno::Data::Json::Value* handle)
{
    JsonReaderHandle* inst = (JsonReaderHandle*)::uAllocObject(sizeof(JsonReaderHandle), JsonReaderHandle__typeof());
    inst->_ObjInit(handle);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\Implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

JsonReaderImpl__uType* JsonReaderImpl__typeof()
{
    static ::uStaticStrong<JsonReaderImpl__uType*> type;
    if (type != NULL) return type;

    type = (JsonReaderImpl__uType*)::uAllocClassType(sizeof(JsonReaderImpl__uType), "Uno.Data.Json.JsonReaderImpl");

    type->SetFunctions(19,
        ::uNewFunction("GetCount", JsonReaderImpl__GetCount, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Data::Json::JsonReaderHandle__typeof()),
        ::uNewFunction("GetHasKey", JsonReaderImpl__GetHasKey, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Data::Json::JsonReaderHandle__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("GetItemByIndex", JsonReaderImpl__GetItemByIndex, 0, true, ::app::Uno::Data::Json::JsonReaderHandle__typeof(), ::app::Uno::Data::Json::JsonReaderHandle__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("GetItemByKey", JsonReaderImpl__GetItemByKey, 0, true, ::app::Uno::Data::Json::JsonReaderHandle__typeof(), ::app::Uno::Data::Json::JsonReaderHandle__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("GetJsonDataType", JsonReaderImpl__GetJsonDataType, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Data::Json::JsonReaderHandle__typeof()),
        ::uNewFunction("GetKeys", JsonReaderImpl__GetKeys, 0, true, ::uGetArrayType(::app::Uno::String__typeof()), ::app::Uno::Data::Json::JsonReaderHandle__typeof()),
        ::uNewFunction("GetValueAsBool", JsonReaderImpl__GetValueAsBool, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Data::Json::JsonReaderHandle__typeof()),
        ::uNewFunction("GetValueAsBoolOrThrow", JsonReaderImpl__GetValueAsBoolOrThrow, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Data::Json::JsonReaderHandle__typeof()),
        ::uNewFunction("GetValueAsDouble", JsonReaderImpl__GetValueAsDouble, 0, true, ::app::Uno::Double__typeof(), ::app::Uno::Data::Json::JsonReaderHandle__typeof()),
        ::uNewFunction("GetValueAsDoubleOrThrow", JsonReaderImpl__GetValueAsDoubleOrThrow, 0, true, ::app::Uno::Double__typeof(), ::app::Uno::Data::Json::JsonReaderHandle__typeof()),
        ::uNewFunction("GetValueAsFloat", JsonReaderImpl__GetValueAsFloat, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Data::Json::JsonReaderHandle__typeof()),
        ::uNewFunction("GetValueAsFloatOrThrow", JsonReaderImpl__GetValueAsFloatOrThrow, 0, true, ::app::Uno::Float__typeof(), ::app::Uno::Data::Json::JsonReaderHandle__typeof()),
        ::uNewFunction("GetValueAsInteger", JsonReaderImpl__GetValueAsInteger, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Data::Json::JsonReaderHandle__typeof()),
        ::uNewFunction("GetValueAsIntegerOrThrow", JsonReaderImpl__GetValueAsIntegerOrThrow, 0, true, ::app::Uno::Int__typeof(), ::app::Uno::Data::Json::JsonReaderHandle__typeof()),
        ::uNewFunction("GetValueAsString", JsonReaderImpl__GetValueAsString, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Data::Json::JsonReaderHandle__typeof()),
        ::uNewFunction("GetValueAsStringOrThrow", JsonReaderImpl__GetValueAsStringOrThrow, 0, true, ::app::Uno::String__typeof(), ::app::Uno::Data::Json::JsonReaderHandle__typeof()),
        ::uNewFunction("IsEqual", JsonReaderImpl__IsEqual, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Data::Json::JsonReaderHandle__typeof(), ::app::Uno::Data::Json::JsonReaderHandle__typeof()),
        ::uNewFunction("IsEqual", JsonReaderImpl__IsEqual_1, 0, true, ::app::Uno::Bool__typeof(), ::app::Uno::Data::Json::JsonReaderHandle__typeof(), ::uObject__typeof()),
        ::uNewFunction("Parse", JsonReaderImpl__Parse, 0, true, ::app::Uno::Data::Json::JsonReaderHandle__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

int JsonReaderImpl__GetCount(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle)
{
    ::app::Uno::Data::Json::Object* obj = ::uAs< ::app::Uno::Data::Json::Object*>(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::Object__typeof());

    if (obj != NULL)
    {
        return ::uPtr< ::app::Uno::Data::Json::Object*>(obj)->Count();
    }

    ::app::Uno::Data::Json::Array* a = ::uAs< ::app::Uno::Data::Json::Array*>(handle->_handle, ::app::Uno::Data::Json::Array__typeof());

    if (a != NULL)
    {
        return ::uPtr< ::app::Uno::Data::Json::Array*>(a)->Count();
    }

    return 0;
}

bool JsonReaderImpl__GetHasKey(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle, ::uString* key)
{
    ::app::Uno::Data::Json::Object* obj = ::uAs< ::app::Uno::Data::Json::Object*>(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::Object__typeof());

    if (obj == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Uno::Data::Json::Object*>(obj)->ContainsKey(key);
}

::app::Uno::Data::Json::JsonReaderHandle* JsonReaderImpl__GetItemByIndex(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle, int index)
{
    ::app::Uno::Data::Json::Array* v = ::uAs< ::app::Uno::Data::Json::Array*>(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::Array__typeof());

    if (v == NULL)
    {
        U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Json node is not an array")));
    }

    return ::app::Uno::Data::Json::JsonReaderHandle__New_1(NULL, ::uPtr< ::app::Uno::Data::Json::Array*>(v)->Item(index));
}

::app::Uno::Data::Json::JsonReaderHandle* JsonReaderImpl__GetItemByKey(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle, ::uString* key)
{
    ::app::Uno::Data::Json::Object* v = ::uAs< ::app::Uno::Data::Json::Object*>(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::Object__typeof());

    if (v == NULL)
    {
        return NULL;
    }

    if (!::uPtr< ::app::Uno::Data::Json::Object*>(v)->ContainsKey(key))
    {
        return NULL;
    }

    return ::app::Uno::Data::Json::JsonReaderHandle__New_1(NULL, ::uPtr< ::app::Uno::Data::Json::Object*>(v)->Item(key));
}

::uString* JsonReaderImpl__GetJsonDataType(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle)
{
    if (::uIs(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::Number__typeof()))
    {
        return ::uGetConstString("number");
    }

    if (::uIs(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::Boolean__typeof()))
    {
        return ::uGetConstString("boolean");
    }

    if (::uIs(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::String__typeof()))
    {
        return ::uGetConstString("string");
    }

    if (::uIs(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::Array__typeof()))
    {
        return ::uGetConstString("array");
    }

    if (::uIs(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::Object__typeof()))
    {
        return ::uGetConstString("object");
    }

    if (::uIs(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::Null__typeof()))
    {
        return ::uGetConstString("null");
    }

    return ::uGetConstString("error");
}

::uArray* JsonReaderImpl__GetKeys(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle)
{
    ::app::Uno::Data::Json::Object* v = ::uAs< ::app::Uno::Data::Json::Object*>(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::Object__typeof());

    if (v == NULL)
    {
        return ::uNewArray(::app::Uno::String__typeof(), 0);
    }

    return ::uPtr< ::app::Uno::Data::Json::Object*>(v)->Keys();
}

bool JsonReaderImpl__GetValueAsBool(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle)
{
    bool b = false;
    ::app::Uno::Data::Json::String* s = ::uAs< ::app::Uno::Data::Json::String*>(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::String__typeof());

    if ((s != NULL) && ::app::Uno::Bool__TryParse(NULL, ::uPtr< ::app::Uno::Data::Json::String*>(s)->Value(), &b))
    {
        return b;
    }

    ::app::Uno::Data::Json::Boolean* v = ::uAs< ::app::Uno::Data::Json::Boolean*>(handle->_handle, ::app::Uno::Data::Json::Boolean__typeof());

    if (v == NULL)
    {
        return false;
    }

    return ::uPtr< ::app::Uno::Data::Json::Boolean*>(v)->Value();
}

bool JsonReaderImpl__GetValueAsBoolOrThrow(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle)
{
    ::app::Uno::Data::Json::String* s = ::uAs< ::app::Uno::Data::Json::String*>(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::String__typeof());

    if (s != NULL)
    {
        return ::app::Uno::Bool__Parse(NULL, ::uPtr< ::app::Uno::Data::Json::String*>(s)->Value());
    }

    ::app::Uno::Data::Json::Boolean* v = ::uAs< ::app::Uno::Data::Json::Boolean*>(handle->_handle, ::app::Uno::Data::Json::Boolean__typeof());

    if (v == NULL)
    {
        U_THROW(::app::Uno::Data::Json::JsonException__New_3(NULL, ::uGetConstString("Json node is not a boolean")));
    }

    return ::uPtr< ::app::Uno::Data::Json::Boolean*>(v)->Value();
}

double JsonReaderImpl__GetValueAsDouble(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle)
{
    double d = 0.0;
    ::app::Uno::Data::Json::String* s = ::uAs< ::app::Uno::Data::Json::String*>(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::String__typeof());

    if ((s != NULL) && ::app::Uno::Double__TryParse(NULL, ::uPtr< ::app::Uno::Data::Json::String*>(s)->Value(), &d))
    {
        return d;
    }

    ::app::Uno::Data::Json::Number* v = ::uAs< ::app::Uno::Data::Json::Number*>(handle->_handle, ::app::Uno::Data::Json::Number__typeof());

    if (v == NULL)
    {
        return 0.0;
    }

    return ::uPtr< ::app::Uno::Data::Json::Number*>(v)->Value();
}

double JsonReaderImpl__GetValueAsDoubleOrThrow(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle)
{
    ::app::Uno::Data::Json::String* s = ::uAs< ::app::Uno::Data::Json::String*>(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::String__typeof());

    if (s != NULL)
    {
        return ::app::Uno::Double__Parse(NULL, ::uPtr< ::app::Uno::Data::Json::String*>(s)->Value());
    }

    ::app::Uno::Data::Json::Number* v = ::uAs< ::app::Uno::Data::Json::Number*>(handle->_handle, ::app::Uno::Data::Json::Number__typeof());

    if (v == NULL)
    {
        U_THROW(::app::Uno::Data::Json::JsonException__New_3(NULL, ::uGetConstString("Json node is not a double")));
    }

    return ::uPtr< ::app::Uno::Data::Json::Number*>(v)->Value();
}

float JsonReaderImpl__GetValueAsFloat(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle)
{
    float f = 0.0f;
    ::app::Uno::Data::Json::String* s = ::uAs< ::app::Uno::Data::Json::String*>(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::String__typeof());

    if ((s != NULL) && ::app::Uno::Float__TryParse(NULL, ::uPtr< ::app::Uno::Data::Json::String*>(s)->Value(), &f))
    {
        return f;
    }

    ::app::Uno::Data::Json::Number* v = ::uAs< ::app::Uno::Data::Json::Number*>(handle->_handle, ::app::Uno::Data::Json::Number__typeof());

    if (v == NULL)
    {
        return 0.0f;
    }

    return (float)::uPtr< ::app::Uno::Data::Json::Number*>(v)->Value();
}

float JsonReaderImpl__GetValueAsFloatOrThrow(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle)
{
    ::app::Uno::Data::Json::String* s = ::uAs< ::app::Uno::Data::Json::String*>(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::String__typeof());

    if (s != NULL)
    {
        return ::app::Uno::Float__Parse(NULL, ::uPtr< ::app::Uno::Data::Json::String*>(s)->Value());
    }

    ::app::Uno::Data::Json::Number* v = ::uAs< ::app::Uno::Data::Json::Number*>(handle->_handle, ::app::Uno::Data::Json::Number__typeof());

    if (v == NULL)
    {
        U_THROW(::app::Uno::Data::Json::JsonException__New_3(NULL, ::uGetConstString("Json node is not a float")));
    }

    return (float)::uPtr< ::app::Uno::Data::Json::Number*>(v)->Value();
}

int JsonReaderImpl__GetValueAsInteger(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle)
{
    int i = 0;
    ::app::Uno::Data::Json::String* s = ::uAs< ::app::Uno::Data::Json::String*>(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::String__typeof());

    if ((s != NULL) && ::app::Uno::Int__TryParse(NULL, ::uPtr< ::app::Uno::Data::Json::String*>(s)->Value(), &i))
    {
        return i;
    }

    ::app::Uno::Data::Json::Number* v = ::uAs< ::app::Uno::Data::Json::Number*>(handle->_handle, ::app::Uno::Data::Json::Number__typeof());

    if (v == NULL)
    {
        return 0;
    }

    return (int)::uPtr< ::app::Uno::Data::Json::Number*>(v)->Value();
}

int JsonReaderImpl__GetValueAsIntegerOrThrow(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle)
{
    ::app::Uno::Data::Json::String* s = ::uAs< ::app::Uno::Data::Json::String*>(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::String__typeof());

    if (s != NULL)
    {
        return ::app::Uno::Int__Parse(NULL, ::uPtr< ::app::Uno::Data::Json::String*>(s)->Value());
    }

    ::app::Uno::Data::Json::Number* v = ::uAs< ::app::Uno::Data::Json::Number*>(handle->_handle, ::app::Uno::Data::Json::Number__typeof());

    if (v == NULL)
    {
        U_THROW(::app::Uno::Data::Json::JsonException__New_3(NULL, ::uGetConstString("Json node is not an integer")));
    }

    return (int)::uPtr< ::app::Uno::Data::Json::Number*>(v)->Value();
}

::uString* JsonReaderImpl__GetValueAsString(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle)
{
    if (::uIs(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::Null__typeof()))
    {
        return NULL;
    }

    ::app::Uno::Data::Json::Object* obj = ::uAs< ::app::Uno::Data::Json::Object*>(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::Object__typeof());

    if (obj != NULL)
    {
        return NULL;
    }

    return ::app::Uno::Object::ToString(::uPtr< ::app::Uno::Data::Json::Value*>(handle->_handle));
}

::uString* JsonReaderImpl__GetValueAsStringOrThrow(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle)
{
    if (::uIs(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::Null__typeof()))
    {
        return NULL;
    }

    ::app::Uno::Data::Json::Object* obj = ::uAs< ::app::Uno::Data::Json::Object*>(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle, ::app::Uno::Data::Json::Object__typeof());

    if (obj != NULL)
    {
        U_THROW(::app::Uno::Data::Json::JsonException__New_3(NULL, ::uGetConstString("Json node is not a string")));
    }

    return ::app::Uno::Object::ToString(::uPtr< ::app::Uno::Data::Json::Value*>(handle->_handle));
}

bool JsonReaderImpl__IsEqual(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* h1, ::app::Uno::Data::Json::JsonReaderHandle* h2)
{
    return ::app::Uno::Object::Equals(::uPtr< ::app::Uno::Data::Json::Value*>(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(h1)->_handle), (::uObject*)::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(h2)->_handle);
}

bool JsonReaderImpl__IsEqual_1(::uStatic* __this, ::app::Uno::Data::Json::JsonReaderHandle* handle, ::uObject* obj)
{
    return ::app::Uno::Object::Equals(::uPtr< ::app::Uno::Data::Json::Value*>(::uPtr< ::app::Uno::Data::Json::JsonReaderHandle*>(handle)->_handle), obj);
}

::app::Uno::Data::Json::JsonReaderHandle* JsonReaderImpl__Parse(::uStatic* __this, ::uString* json)
{
    return ::app::Uno::Data::Json::JsonReaderHandle__New_1(NULL, ::app::Uno::Data::Json::Parser__Parse(NULL, json));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

::uStaticStrong< Null*> Null___singleton;

Null__uType* Null__typeof()
{
    static ::uStaticStrong<Null__uType*> type;
    if (type != NULL) return type;

    type = (Null__uType*)::uAllocClassType(sizeof(Null__uType), "Uno.Data.Json.Null", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Data::Json::Value__typeof());

    type->SetFields(1,
        ::uNewField("_singleton", &Null___singleton, 0, Null__typeof()));

    type->SetFunctions(1,
        ::uNewFunction("get_Singleton", Null__get_Singleton, 0, true, Null__typeof()));

    ::uRegisterType(type);
    return type;
}

void Null___ObjInit_1(Null* __this)
{
    ::app::Uno::Data::Json::Value___ObjInit(__this);
}

void Null___TypeInit(::uStatic* __this)
{
    Null___singleton = Null__New_1(NULL);
}

Null* Null__get_Singleton(::uStatic* __this)
{
    return Null___singleton;
}

Null* Null__New_1(::uStatic* __this)
{
    Null* inst = (Null*)::uAllocObject(sizeof(Null), Null__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Number__uType* Number__typeof()
{
    static ::uStaticStrong<Number__uType*> type;
    if (type != NULL) return type;

    type = (Number__uType*)::uAllocClassType(sizeof(Number__uType), "Uno.Data.Json.Number", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Data::Json::AtomicValue__double__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", Number__New_1, 0, true, Number__typeof(), ::app::Uno::Double__typeof()));

    ::uRegisterType(type);
    return type;
}

void Number___ObjInit_2(Number* __this, double d)
{
    ::app::Uno::Data::Json::AtomicValue__double___ObjInit_1(__this, d);
}

Number* Number__New_1(::uStatic* __this, double d)
{
    Number* inst = (Number*)::uAllocObject(sizeof(Number), Number__typeof());
    inst->_ObjInit_2(d);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Object__uType* Object__typeof()
{
    static ::uStaticStrong<Object__uType*> type;
    if (type != NULL) return type;

    type = (Object__uType*)::uAllocClassType(sizeof(Object__uType), "Uno.Data.Json.Object", false, 0, 1, 0);

    type->SetBaseType(::app::Uno::Data::Json::Value__typeof());

    type->SetStrongRefs(
        "_values", offsetof(Object, _values));

    type->SetFields(1,
        ::uNewField("_values", NULL, offsetof(Object, _values), ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value__typeof()));

    type->SetFunctions(6,
        ::uNewFunctionVoid("Add", Object__Add, 0, false, ::app::Uno::String__typeof(), ::app::Uno::Data::Json::Value__typeof()),
        ::uNewFunction("ContainsKey", Object__ContainsKey, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("get_Count", Object__get_Count, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("get_Item", Object__get_Item, 0, false, ::app::Uno::Data::Json::Value__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("get_Keys", Object__get_Keys, 0, false, ::uGetArrayType(::app::Uno::String__typeof())),
        ::uNewFunction(".ctor", Object__New_1, 0, true, Object__typeof()));

    ::uRegisterType(type);
    return type;
}

void Object___ObjInit_1(Object* __this)
{
    __this->_values = ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value__New_1(NULL);
    ::app::Uno::Data::Json::Value___ObjInit(__this);
}

void Object__Add(Object* __this, ::uString* key, ::app::Uno::Data::Json::Value* val)
{
    ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value*>(__this->_values)->Add(key, val);
}

bool Object__ContainsKey(Object* __this, ::uString* key)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value*>(__this->_values)->ContainsKey(key);
}

int Object__get_Count(Object* __this)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value*>(__this->_values)->Count();
}

::app::Uno::Data::Json::Value* Object__get_Item(Object* __this, ::uString* key)
{
    return ::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value*>(__this->_values)->Item(key);
}

::uArray* Object__get_Keys(Object* __this)
{
    return ::app::Uno::Collections::EnumerableExtensions__ToArray__string(NULL, (::uObject*)::uPtr< ::app::Uno::Collections::Dictionary__string__Uno_Data_Json_Value*>(__this->_values)->Keys());
}

Object* Object__New_1(::uStatic* __this)
{
    Object* inst = (Object*)::uAllocObject(sizeof(Object), Object__typeof());
    inst->_ObjInit_1();
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Parser__uType* Parser__typeof()
{
    static ::uStaticStrong<Parser__uType*> type;
    if (type != NULL) return type;

    type = (Parser__uType*)::uAllocClassType(sizeof(Parser__uType), "Uno.Data.Json.Parser", false, 0, 1, 0);

    type->SetStrongRefs(
        "_json", offsetof(Parser, _json));

    type->SetFields(2,
        ::uNewField("_json", NULL, offsetof(Parser, _json), ::app::Uno::String__typeof()),
        ::uNewField("_pos", NULL, offsetof(Parser, _pos), ::app::Uno::Int__typeof()));

    type->SetFunctions(20,
        ::uNewFunction("Advance", Parser__Advance, 0, false, ::app::Uno::Int__typeof()),
        ::uNewFunction("Eof", Parser__Eof, 0, false, ::app::Uno::Bool__typeof()),
        ::uNewFunction("GetHexValue", Parser__GetHexValue, 0, true, ::app::Uno::UInt__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("IsNumericChar", Parser__IsNumericChar, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("IsNumericStartChar", Parser__IsNumericStartChar, 0, false, ::app::Uno::Bool__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("Parse", Parser__Parse, 0, true, ::app::Uno::Data::Json::Value__typeof(), ::app::Uno::String__typeof()),
        ::uNewFunction("ParseArray", Parser__ParseArray, 0, false, ::app::Uno::Data::Json::Array__typeof()),
        ::uNewFunction("ParseFalse", Parser__ParseFalse, 0, false, ::app::Uno::Data::Json::Boolean__typeof()),
        ::uNewFunction("ParseNull", Parser__ParseNull, 0, false, ::app::Uno::Data::Json::Null__typeof()),
        ::uNewFunction("ParseNumber", Parser__ParseNumber, 0, false, ::app::Uno::Data::Json::Number__typeof()),
        ::uNewFunction("ParseObject", Parser__ParseObject, 0, false, ::app::Uno::Data::Json::Object__typeof()),
        ::uNewFunction("ParseRawString", Parser__ParseRawString, 0, false, ::app::Uno::String__typeof()),
        ::uNewFunction("ParseString", Parser__ParseString, 0, false, ::app::Uno::Data::Json::String__typeof()),
        ::uNewFunction("ParseTrue", Parser__ParseTrue, 0, false, ::app::Uno::Data::Json::Boolean__typeof()),
        ::uNewFunction("ParseValue", Parser__ParseValue, 0, false, ::app::Uno::Data::Json::Value__typeof()),
        ::uNewFunction("Peek", Parser__Peek, 0, false, ::app::Uno::Char__typeof()),
        ::uNewFunctionVoid("SkipWhiteSpace", Parser__SkipWhiteSpace, 0, false),
        ::uNewFunction("Unescape", Parser__Unescape, 0, false, ::app::Uno::String__typeof(), ::app::Uno::Int__typeof(), ::app::Uno::Int__typeof()),
        ::uNewFunction("UnexpectedCharacter", Parser__UnexpectedCharacter, 0, true, ::app::Uno::Data::Json::JsonException__typeof(), ::app::Uno::Char__typeof()),
        ::uNewFunction("UnexpectedEndOfFile", Parser__UnexpectedEndOfFile, 0, true, ::app::Uno::Data::Json::JsonException__typeof()));

    ::uRegisterType(type);
    return type;
}

void Parser___ObjInit(Parser* __this, ::uString* json)
{
    __this->_json = json;
}

int Parser__Advance(Parser* __this)
{
    return __this->_pos++;
}

bool Parser__Eof(Parser* __this)
{
    return __this->_pos == ::uPtr< ::uString*>(__this->_json)->Length();
}

::uUInt Parser__GetHexValue(::uStatic* __this, ::uChar hexChar)
{
    if ((::uUInt)hexChar >= 65u)
    {
        return (::uUInt)hexChar - 55u;
    }
    else
    {
        return (::uUInt)hexChar - 48u;
    }
}

bool Parser__IsNumericChar(Parser* __this, ::uChar c)
{
    return (__this->IsNumericStartChar(c) || (c == 'e')) || (c == 'E');
}

bool Parser__IsNumericStartChar(Parser* __this, ::uChar c)
{
    if ((c >= '0') && (c <= '9'))
    {
        return true;
    }

    return ((c == '.') || (c == '+')) || (c == '-');
}

Parser* Parser__New_1(::uStatic* __this, ::uString* json)
{
    Parser* inst = (Parser*)::uAllocObject(sizeof(Parser), Parser__typeof());
    inst->_ObjInit(json);
    return inst;
}

::app::Uno::Data::Json::Value* Parser__Parse(::uStatic* __this, ::uString* json)
{
    Parser* p = Parser__New_1(NULL, json);
    ::app::Uno::Data::Json::Value* v = ::uPtr< Parser*>(p)->ParseValue();
    p->SkipWhiteSpace();

    if (!p->Eof())
    {
        U_THROW(::app::Uno::Data::Json::JsonException__New_3(NULL, ::uGetConstString("Expected end of file")));
    }

    return v;
}

::app::Uno::Data::Json::Array* Parser__ParseArray(Parser* __this)
{
    __this->Advance();
    ::app::Uno::Data::Json::Array* a = ::app::Uno::Data::Json::Array__New_1(NULL);

    while (!__this->Eof())
    {
        __this->SkipWhiteSpace();
        ::uChar c = __this->Peek();

        if (c == ']')
        {
            __this->Advance();
            return a;
        }

        ::app::Uno::Data::Json::Value* v = __this->ParseValue();
        ::uPtr< ::app::Uno::Data::Json::Array*>(a)->Add(v);
        __this->SkipWhiteSpace();
        c = __this->Peek();

        if (c == ',')
        {
            __this->Advance();
            continue;
        }
        else if (c == ']')
        {
            __this->Advance();
            return a;
        }
        else
        {
            U_THROW(Parser__UnexpectedCharacter(NULL, c));
        }
    }

    U_THROW(Parser__UnexpectedEndOfFile(NULL));
}

::app::Uno::Data::Json::Boolean* Parser__ParseFalse(Parser* __this)
{
    if (((((::uPtr< ::uString*>(__this->_json)->Item(__this->_pos) != 'f') || (::uPtr< ::uString*>(__this->_json)->Item(__this->_pos + 1) != 'a')) || (::uPtr< ::uString*>(__this->_json)->Item(__this->_pos + 2) != 'l')) || (::uPtr< ::uString*>(__this->_json)->Item(__this->_pos + 3) != 's')) || (::uPtr< ::uString*>(__this->_json)->Item(__this->_pos + 4) != 'e'))
    {
        U_THROW(Parser__UnexpectedCharacter(NULL, ::uPtr< ::uString*>(__this->_json)->Item(0)));
    }

    __this->_pos = __this->_pos + 5;
    return ::app::Uno::Data::Json::Boolean__get_False(NULL);
}

::app::Uno::Data::Json::Null* Parser__ParseNull(Parser* __this)
{
    if ((((::uPtr< ::uString*>(__this->_json)->Item(__this->_pos) != 'n') || (::uPtr< ::uString*>(__this->_json)->Item(__this->_pos + 1) != 'u')) || (::uPtr< ::uString*>(__this->_json)->Item(__this->_pos + 2) != 'l')) || (::uPtr< ::uString*>(__this->_json)->Item(__this->_pos + 3) != 'l'))
    {
        U_THROW(Parser__UnexpectedCharacter(NULL, ::uPtr< ::uString*>(__this->_json)->Item(0)));
    }

    __this->_pos = __this->_pos + 4;
    return ::app::Uno::Data::Json::Null__get_Singleton(NULL);
}

::app::Uno::Data::Json::Number* Parser__ParseNumber(Parser* __this)
{
    int start = __this->Advance();

    while (__this->IsNumericChar(__this->Peek()))
    {
        __this->_pos++;
    }

    int length = __this->_pos - start;
    ::uString* val = ::app::Uno::String::Substring_1(::uPtr< ::uString*>(__this->_json), start, length);
    return ::app::Uno::Data::Json::Number__New_1(NULL, ::app::Uno::Double__Parse(NULL, val));
}

::app::Uno::Data::Json::Object* Parser__ParseObject(Parser* __this)
{
    __this->Advance();
    ::app::Uno::Data::Json::Object* obj = ::app::Uno::Data::Json::Object__New_1(NULL);

    while (!__this->Eof())
    {
        __this->SkipWhiteSpace();
        ::uChar c = __this->Peek();

        if (c == '}')
        {
            __this->Advance();
            return obj;
        }

        ::uString* key = __this->ParseRawString();
        __this->SkipWhiteSpace();
        c = __this->Peek();

        if (c != ':')
        {
            U_THROW(::app::Uno::Exception__New_2(NULL, ::uGetConstString("Expected ':'")));
        }

        __this->Advance();
        ::app::Uno::Data::Json::Value* val = __this->ParseValue();
        ::uPtr< ::app::Uno::Data::Json::Object*>(obj)->Add(key, val);
        __this->SkipWhiteSpace();
        c = __this->Peek();

        if (c == ',')
        {
            __this->Advance();
            continue;
        }
        else if (c == '}')
        {
            __this->Advance();
            return obj;
        }
        else
        {
            U_THROW(Parser__UnexpectedCharacter(NULL, c));
        }
    }

    U_THROW(Parser__UnexpectedEndOfFile(NULL));
}

::uString* Parser__ParseRawString(Parser* __this)
{
    ::uChar quote = __this->Peek();
    __this->Advance();
    int start = __this->_pos;
    ::uChar lastChar = quote;

    while (!__this->Eof())
    {
        ::uChar c = __this->Peek();

        if ((c == quote) && !(lastChar == '\\'))
        {
            int length = __this->_pos - start;
            __this->Advance();
            return __this->Unescape(start, length);
        }

        lastChar = c;
        __this->Advance();
    }

    U_THROW(Parser__UnexpectedEndOfFile(NULL));
}

::app::Uno::Data::Json::String* Parser__ParseString(Parser* __this)
{
    return ::app::Uno::Data::Json::String__New_1(NULL, __this->ParseRawString());
}

::app::Uno::Data::Json::Boolean* Parser__ParseTrue(Parser* __this)
{
    if ((((::uPtr< ::uString*>(__this->_json)->Item(__this->_pos) != 't') || (::uPtr< ::uString*>(__this->_json)->Item(__this->_pos + 1) != 'r')) || (::uPtr< ::uString*>(__this->_json)->Item(__this->_pos + 2) != 'u')) || (::uPtr< ::uString*>(__this->_json)->Item(__this->_pos + 3) != 'e'))
    {
        U_THROW(Parser__UnexpectedCharacter(NULL, ::uPtr< ::uString*>(__this->_json)->Item(0)));
    }

    __this->_pos = __this->_pos + 4;
    return ::app::Uno::Data::Json::Boolean__get_True(NULL);
}

::app::Uno::Data::Json::Value* Parser__ParseValue(Parser* __this)
{
    if (__this->Eof())
    {
        return (::app::Uno::Data::Json::Value*)::app::Uno::Data::Json::Null__get_Singleton(NULL);
    }

    __this->SkipWhiteSpace();
    ::uChar c = __this->Peek();

    switch (c)
    {
        case '"':
        {
            return (::app::Uno::Data::Json::Value*)__this->ParseString();
        }
        case '{':
        {
            return (::app::Uno::Data::Json::Value*)__this->ParseObject();
        }
        case '[':
        {
            return (::app::Uno::Data::Json::Value*)__this->ParseArray();
        }
        case 'f':
        {
            return (::app::Uno::Data::Json::Value*)__this->ParseFalse();
        }
        case 't':
        {
            return (::app::Uno::Data::Json::Value*)__this->ParseTrue();
        }
        case 'n':
        {
            return (::app::Uno::Data::Json::Value*)__this->ParseNull();
        }
        default:
        {
            return (::app::Uno::Data::Json::Value*)__this->ParseNumber();
        }
    }
}

::uChar Parser__Peek(Parser* __this)
{
    if (__this->_pos == ::uPtr< ::uString*>(__this->_json)->Length())
    {
        U_THROW(Parser__UnexpectedEndOfFile(NULL));
    }

    return ::uPtr< ::uString*>(__this->_json)->Item(__this->_pos);
}

void Parser__SkipWhiteSpace(Parser* __this)
{
    while (__this->_pos < ::uPtr< ::uString*>(__this->_json)->Length())
    {
        ::uChar c = __this->Peek();

        switch (c)
        {
            case ' ':
            case 9:
            case 10:
            case 13:
            {
                __this->_pos++;
                continue;
            }
        }

        break;
    }
}

::uString* Parser__Unescape(Parser* __this, int start, int length)
{
    if (length == 0)
    {
        return ::uGetConstString("");
    }

    ::uArray* res = ::uNewArray(::app::Uno::Char__typeof(), length);
    int p = 0;
    int end = start + length;

    for (int i = start; i < end; i++)
    {
        ::uChar c = ::uPtr< ::uString*>(__this->_json)->Item(i);

        if ((c == '\\') && (i < (end - 1)))
        {
            i++;
            c = ::uPtr< ::uString*>(__this->_json)->Item(i);

            switch (c)
            {
                case '\\':
                {
                    ::uPtr< ::uArray*>(res)->Item< ::uChar>(p++) = '\\';
                    break;
                }
                case '"':
                {
                    ::uPtr< ::uArray*>(res)->Item< ::uChar>(p++) = '"';
                    break;
                }
                case 'n':
                {
                    ::uPtr< ::uArray*>(res)->Item< ::uChar>(p++) = 10;
                    break;
                }
                case 'r':
                {
                    ::uPtr< ::uArray*>(res)->Item< ::uChar>(p++) = 13;
                    break;
                }
                case 't':
                {
                    ::uPtr< ::uArray*>(res)->Item< ::uChar>(p++) = 9;
                    break;
                }
                case 'b':
                {
                    ::uPtr< ::uArray*>(res)->Item< ::uChar>(p++) = 8;
                    break;
                }
                case 'f':
                {
                    ::uPtr< ::uArray*>(res)->Item< ::uChar>(p++) = 12;
                    break;
                }
                case 'u':
                {
                    {
                        if (!(i < (end - 4)))
                        {
                            U_THROW(Parser__UnexpectedEndOfFile(NULL));
                        }

                        ::uUInt v = (((Parser__GetHexValue(NULL, ::uPtr< ::uString*>(__this->_json)->Item(i + 1)) << 12) | (Parser__GetHexValue(NULL, ::uPtr< ::uString*>(__this->_json)->Item(i + 2)) << 8)) | (Parser__GetHexValue(NULL, ::uPtr< ::uString*>(__this->_json)->Item(i + 3)) << 4)) | Parser__GetHexValue(NULL, ::uPtr< ::uString*>(__this->_json)->Item(i + 4));
                        i = i + 4;
                        ::uPtr< ::uArray*>(res)->Item< ::uChar>(p++) = (::uChar)v;
                    }

                    break;
                }
                default:
                {
                    ::uPtr< ::uArray*>(res)->Item< ::uChar>(p++) = c;
                    break;
                }
            }
        }
        else
        {
            ::uPtr< ::uArray*>(res)->Item< ::uChar>(p++) = c;
        }
    }

    if (p != res->Length())
    {
        ::uArray* k = ::uNewArray(::app::Uno::Char__typeof(), p);

        for (int i = 0; i < p; i++)
        {
            k->Item< ::uChar>(i) = ::uPtr< ::uArray*>(res)->Item< ::uChar>(i);
        }

        res = k;
    }

    return ::uNewStringFromArray(res);
}

::app::Uno::Data::Json::JsonException* Parser__UnexpectedCharacter(::uStatic* __this, ::uChar c)
{
    return ::app::Uno::Data::Json::JsonException__New_3(NULL, ::app::Uno::String__op_Addition_1(NULL, ::uGetConstString("Unexpected character: "), ::uBox< ::uChar>(::app::Uno::Char__typeof(), c)));
}

::app::Uno::Data::Json::JsonException* Parser__UnexpectedEndOfFile(::uStatic* __this)
{
    return ::app::Uno::Data::Json::JsonException__New_3(NULL, ::uGetConstString("Unexpected end of file"));
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

String__uType* String__typeof()
{
    static ::uStaticStrong<String__uType*> type;
    if (type != NULL) return type;

    type = (String__uType*)::uAllocClassType(sizeof(String__uType), "Uno.Data.Json.String", false, 0, 0, 0);

    type->SetBaseType(::app::Uno::Data::Json::AtomicValue__string__typeof());

    type->SetFunctions(1,
        ::uNewFunction(".ctor", String__New_1, 0, true, String__typeof(), ::app::Uno::String__typeof()));

    ::uRegisterType(type);
    return type;
}

void String___ObjInit_2(String* __this, ::uString* d)
{
    ::app::Uno::Data::Json::AtomicValue__string___ObjInit_1(__this, d);
}

String* String__New_1(::uStatic* __this, ::uString* d)
{
    String* inst = (String*)::uAllocObject(sizeof(String), String__typeof());
    inst->_ObjInit_2(d);
    return inst;
}

// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Data.Json\0.13.2\Source\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

Value__uType* Value__typeof()
{
    static ::uStaticStrong<Value__uType*> type;
    if (type != NULL) return type;

    type = (Value__uType*)::uAllocClassType(sizeof(Value__uType), "Uno.Data.Json.Value", false, 0, 0, 0);

    ::uRegisterType(type);
    return type;
}

void Value___ObjInit(Value* __this)
{
}

}}}}
