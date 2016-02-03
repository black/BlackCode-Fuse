// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/v8.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Internal{

// internal extern struct Object :1239
// {
uStructType* Object_typeof();
void Object__CreateDataProperty_fn(::v8::Local< ::v8::Object>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Local< ::v8::String>* key, ::v8::Local< ::v8::Value>* value, ::v8::Maybe< bool>* __retval);
void Object__CreateDataProperty1_fn(::v8::Local< ::v8::Object>* __this, ::v8::Local< ::v8::Context>* context, uint32_t* index, ::v8::Local< ::v8::Value>* value, ::v8::Maybe< bool>* __retval);
void Object__Get_fn(::v8::Local< ::v8::Object>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Local< ::v8::Value>* key, ::v8::MaybeLocal< ::v8::Value> * __retval);
void Object__Get1_fn(::v8::Local< ::v8::Object>* __this, ::v8::Local< ::v8::Context>* context, uint32_t* index, ::v8::MaybeLocal< ::v8::Value> * __retval);
void Object__GetPropertyNames_fn(::v8::Local< ::v8::Object>* __this, ::v8::Local< ::v8::Context>* context, ::v8::MaybeLocal< ::v8::Array> * __retval);
void Object__GetPrototype_fn(::v8::Local< ::v8::Object>* __this, ::v8::Local< ::v8::Value>* __retval);
void Object__Has_fn(::v8::Local< ::v8::Object>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Local< ::v8::Value>* key, ::v8::Maybe< bool>* __retval);
void Object__Has1_fn(::v8::Local< ::v8::Object>* __this, ::v8::Local< ::v8::Context>* context, uint32_t* key, ::v8::Maybe< bool>* __retval);
void Object__op_Explicit_fn(::v8::Local< ::v8::Object>* obj, ::v8::Local< ::v8::Value>* __retval);
void Object__op_Explicit1_fn(::v8::Local< ::v8::Object>* obj, ::v8::Local< ::v8::Function>* __retval);
void Object__op_Explicit2_fn(::v8::Local< ::v8::Object>* obj, ::v8::Local< ::v8::Array>* __retval);
void Object__Set_fn(::v8::Local< ::v8::Object>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Local< ::v8::Value>* key, ::v8::Local< ::v8::Value>* value, ::v8::Maybe< bool>* __retval);
void Object__Set1_fn(::v8::Local< ::v8::Object>* __this, ::v8::Local< ::v8::Context>* context, uint32_t* index, ::v8::Local< ::v8::Value>* value, ::v8::Maybe< bool>* __retval);

struct Object
{
    static ::v8::Maybe< bool> CreateDataProperty(::v8::Local< ::v8::Object> __this, ::v8::Local< ::v8::Context> context, ::v8::Local< ::v8::String> key, ::v8::Local< ::v8::Value> value);
    static ::v8::Maybe< bool> CreateDataProperty1(::v8::Local< ::v8::Object> __this, ::v8::Local< ::v8::Context> context, uint32_t index, ::v8::Local< ::v8::Value> value);
    static ::v8::MaybeLocal< ::v8::Value>  Get(::v8::Local< ::v8::Object> __this, ::v8::Local< ::v8::Context> context, ::v8::Local< ::v8::Value> key);
    static ::v8::MaybeLocal< ::v8::Value>  Get1(::v8::Local< ::v8::Object> __this, ::v8::Local< ::v8::Context> context, uint32_t index);
    static ::v8::MaybeLocal< ::v8::Array>  GetPropertyNames(::v8::Local< ::v8::Object> __this, ::v8::Local< ::v8::Context> context);
    static ::v8::Local< ::v8::Value> GetPrototype(::v8::Local< ::v8::Object> __this);
    static ::v8::Maybe< bool> Has(::v8::Local< ::v8::Object> __this, ::v8::Local< ::v8::Context> context, ::v8::Local< ::v8::Value> key);
    static ::v8::Maybe< bool> Has1(::v8::Local< ::v8::Object> __this, ::v8::Local< ::v8::Context> context, uint32_t key);
    static ::v8::Maybe< bool> Set(::v8::Local< ::v8::Object> __this, ::v8::Local< ::v8::Context> context, ::v8::Local< ::v8::Value> key, ::v8::Local< ::v8::Value> value);
    static ::v8::Maybe< bool> Set1(::v8::Local< ::v8::Object> __this, ::v8::Local< ::v8::Context> context, uint32_t index, ::v8::Local< ::v8::Value> value);
    static ::v8::Local< ::v8::Value> op_Explicit(::v8::Local< ::v8::Object> obj);
    static ::v8::Local< ::v8::Function> op_Explicit1(::v8::Local< ::v8::Object> obj);
    static ::v8::Local< ::v8::Array> op_Explicit2(::v8::Local< ::v8::Object> obj);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
