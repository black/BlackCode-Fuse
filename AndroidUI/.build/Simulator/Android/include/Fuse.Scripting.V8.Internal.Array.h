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

// internal extern struct Array :1376
// {
uStructType* Array_typeof();
void Array__Length_fn(::v8::Local< ::v8::Array>* __this, uint32_t* __retval);
void Array__op_Explicit_fn(::v8::Local< ::v8::Array>* arr, ::v8::Local< ::v8::Object>* __retval);
void Array__op_Explicit1_fn(::v8::Local< ::v8::Array>* arr, ::v8::Local< ::v8::Value>* __retval);

struct Array
{
    static uint32_t Length(::v8::Local< ::v8::Array> __this);
    static ::v8::Local< ::v8::Object> op_Explicit(::v8::Local< ::v8::Array> arr);
    static ::v8::Local< ::v8::Value> op_Explicit1(::v8::Local< ::v8::Array> arr);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
