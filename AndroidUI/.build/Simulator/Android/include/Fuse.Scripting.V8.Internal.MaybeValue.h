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

// internal extern struct MaybeValue :883
// {
uStructType* MaybeValue_typeof();
void MaybeValue__FromMaybe_fn(::v8::MaybeLocal< ::v8::Value> * __this, ::v8::Local< ::v8::Value>* defaultValue, ::v8::Local< ::v8::Value>* __retval);
void MaybeValue__IsEmpty_fn(::v8::MaybeLocal< ::v8::Value> * __this, bool* __retval);
void MaybeValue__ToLocalChecked_fn(::v8::MaybeLocal< ::v8::Value> * __this, ::v8::Local< ::v8::Value>* __retval);

struct MaybeValue
{
    static ::v8::Local< ::v8::Value> FromMaybe(::v8::MaybeLocal< ::v8::Value>  __this, ::v8::Local< ::v8::Value> defaultValue);
    static bool IsEmpty(::v8::MaybeLocal< ::v8::Value>  __this);
    static ::v8::Local< ::v8::Value> ToLocalChecked(::v8::MaybeLocal< ::v8::Value>  __this);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
