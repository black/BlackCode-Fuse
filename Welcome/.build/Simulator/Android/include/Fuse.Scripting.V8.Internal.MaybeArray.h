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

// internal extern struct MaybeArray :901
// {
uStructType* MaybeArray_typeof();
void MaybeArray__FromMaybe_fn(::v8::MaybeLocal< ::v8::Array> * __this, ::v8::Local< ::v8::Array>* defaultValue, ::v8::Local< ::v8::Array>* __retval);
void MaybeArray__IsEmpty_fn(::v8::MaybeLocal< ::v8::Array> * __this, bool* __retval);
void MaybeArray__ToLocalChecked_fn(::v8::MaybeLocal< ::v8::Array> * __this, ::v8::Local< ::v8::Array>* __retval);

struct MaybeArray
{
    static ::v8::Local< ::v8::Array> FromMaybe(::v8::MaybeLocal< ::v8::Array>  __this, ::v8::Local< ::v8::Array> defaultValue);
    static bool IsEmpty(::v8::MaybeLocal< ::v8::Array>  __this);
    static ::v8::Local< ::v8::Array> ToLocalChecked(::v8::MaybeLocal< ::v8::Array>  __this);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
