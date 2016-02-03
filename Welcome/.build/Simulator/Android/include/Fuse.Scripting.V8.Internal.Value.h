// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/v8.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Internal{

// internal extern struct Value :1138
// {
uStructType* Value_typeof();
void Value__BooleanValue_fn(::v8::Local< ::v8::Value>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Maybe< bool>* __retval);
void Value__Equals2_fn(::v8::Local< ::v8::Value>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Local< ::v8::Value>* val, ::v8::Maybe< bool>* __retval);
void Value__Int32Value_fn(::v8::Local< ::v8::Value>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Maybe< int>* __retval);
void Value__IntegerValue_fn(::v8::Local< ::v8::Value>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Maybe< int64_t>* __retval);
void Value__IsArray_fn(::v8::Local< ::v8::Value>* __this, bool* __retval);
void Value__IsBoolean_fn(::v8::Local< ::v8::Value>* __this, bool* __retval);
void Value__IsBooleanObject_fn(::v8::Local< ::v8::Value>* __this, bool* __retval);
void Value__IsEmpty_fn(::v8::Local< ::v8::Value>* __this, bool* __retval);
void Value__IsFunction_fn(::v8::Local< ::v8::Value>* __this, bool* __retval);
void Value__IsInt32_fn(::v8::Local< ::v8::Value>* __this, bool* __retval);
void Value__IsNativeError_fn(::v8::Local< ::v8::Value>* __this, bool* __retval);
void Value__IsNull_fn(::v8::Local< ::v8::Value>* __this, bool* __retval);
void Value__IsNumber_fn(::v8::Local< ::v8::Value>* __this, bool* __retval);
void Value__IsNumberObject_fn(::v8::Local< ::v8::Value>* __this, bool* __retval);
void Value__IsObject_fn(::v8::Local< ::v8::Value>* __this, bool* __retval);
void Value__IsString_fn(::v8::Local< ::v8::Value>* __this, bool* __retval);
void Value__IsStringObject_fn(::v8::Local< ::v8::Value>* __this, bool* __retval);
void Value__IsUint32_fn(::v8::Local< ::v8::Value>* __this, bool* __retval);
void Value__IsUndefined_fn(::v8::Local< ::v8::Value>* __this, bool* __retval);
void Value__Null_fn(::v8::Isolate** isolate, ::v8::Local< ::v8::Value>* __retval);
void Value__NumberValue_fn(::v8::Local< ::v8::Value>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Maybe< double>* __retval);
void Value__op_Explicit_fn(uString* str, ::v8::Local< ::v8::Value>* __retval);
void Value__Primitive_fn(::v8::Isolate** isolate, bool* b, ::v8::Local< ::v8::Value>* __retval);
void Value__Primitive1_fn(::v8::Isolate** isolate, double* d, ::v8::Local< ::v8::Value>* __retval);
void Value__Primitive2_fn(::v8::Isolate** isolate, int* n, ::v8::Local< ::v8::Value>* __retval);
void Value__StrictEquals_fn(::v8::Local< ::v8::Value>* __this, ::v8::Local< ::v8::Value>* val, bool* __retval);
void Value__ToObject_fn(::v8::Local< ::v8::Value>* __this, ::v8::Local< ::v8::Context>* context, ::v8::MaybeLocal< ::v8::Object> * __retval);
void Value__ToString_fn(::v8::Local< ::v8::Value>* __this, uType* __type, uString** __retval);
void Value__ToString1_fn(::v8::Local< ::v8::Value>* __this, ::v8::Local< ::v8::Context>* context, ::v8::MaybeLocal< ::v8::String> * __retval);
void Value__Uint32Value_fn(::v8::Local< ::v8::Value>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Maybe< uint32_t>* __retval);

struct Value
{
    static ::v8::Maybe< bool> BooleanValue(::v8::Local< ::v8::Value> __this, ::v8::Local< ::v8::Context> context);
    static ::v8::Maybe< bool> Equals2(::v8::Local< ::v8::Value> __this, ::v8::Local< ::v8::Context> context, ::v8::Local< ::v8::Value> val);
    static ::v8::Maybe< int> Int32Value(::v8::Local< ::v8::Value> __this, ::v8::Local< ::v8::Context> context);
    static ::v8::Maybe< int64_t> IntegerValue(::v8::Local< ::v8::Value> __this, ::v8::Local< ::v8::Context> context);
    static bool IsArray(::v8::Local< ::v8::Value> __this);
    static bool IsBoolean(::v8::Local< ::v8::Value> __this);
    static bool IsBooleanObject(::v8::Local< ::v8::Value> __this);
    static bool IsEmpty(::v8::Local< ::v8::Value> __this);
    static bool IsFunction(::v8::Local< ::v8::Value> __this);
    static bool IsInt32(::v8::Local< ::v8::Value> __this);
    static bool IsNativeError(::v8::Local< ::v8::Value> __this);
    static bool IsNull(::v8::Local< ::v8::Value> __this);
    static bool IsNumber(::v8::Local< ::v8::Value> __this);
    static bool IsNumberObject(::v8::Local< ::v8::Value> __this);
    static bool IsObject(::v8::Local< ::v8::Value> __this);
    static bool IsString(::v8::Local< ::v8::Value> __this);
    static bool IsStringObject(::v8::Local< ::v8::Value> __this);
    static bool IsUint32(::v8::Local< ::v8::Value> __this);
    static bool IsUndefined(::v8::Local< ::v8::Value> __this);
    static ::v8::Maybe< double> NumberValue(::v8::Local< ::v8::Value> __this, ::v8::Local< ::v8::Context> context);
    static bool StrictEquals(::v8::Local< ::v8::Value> __this, ::v8::Local< ::v8::Value> val);
    static ::v8::MaybeLocal< ::v8::Object>  ToObject(::v8::Local< ::v8::Value> __this, ::v8::Local< ::v8::Context> context);
    static uString* ToString(::v8::Local< ::v8::Value> __this, uType* __type) { uString* __retval; return Value__ToString_fn(&__this, __type, &__retval), __retval; }
    static ::v8::MaybeLocal< ::v8::String>  ToString1(::v8::Local< ::v8::Value> __this, ::v8::Local< ::v8::Context> context);
    static ::v8::Maybe< uint32_t> Uint32Value(::v8::Local< ::v8::Value> __this, ::v8::Local< ::v8::Context> context);
    static ::v8::Local< ::v8::Value> Null(::v8::Isolate* isolate);
    static ::v8::Local< ::v8::Value> op_Explicit(uString* str);
    static ::v8::Local< ::v8::Value> Primitive(::v8::Isolate* isolate, bool b);
    static ::v8::Local< ::v8::Value> Primitive1(::v8::Isolate* isolate, double d);
    static ::v8::Local< ::v8::Value> Primitive2(::v8::Isolate* isolate, int n);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
