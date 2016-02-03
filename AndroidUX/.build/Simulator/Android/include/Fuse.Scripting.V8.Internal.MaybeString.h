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

// internal extern struct MaybeString :874
// {
uStructType* MaybeString_typeof();
void MaybeString__FromMaybe_fn(::v8::MaybeLocal< ::v8::String> * __this, ::v8::Local< ::v8::String>* defaultValue, ::v8::Local< ::v8::String>* __retval);
void MaybeString__IsEmpty_fn(::v8::MaybeLocal< ::v8::String> * __this, bool* __retval);
void MaybeString__ToLocalChecked_fn(::v8::MaybeLocal< ::v8::String> * __this, ::v8::Local< ::v8::String>* __retval);

struct MaybeString
{
    static ::v8::Local< ::v8::String> FromMaybe(::v8::MaybeLocal< ::v8::String>  __this, ::v8::Local< ::v8::String> defaultValue);
    static bool IsEmpty(::v8::MaybeLocal< ::v8::String>  __this);
    static ::v8::Local< ::v8::String> ToLocalChecked(::v8::MaybeLocal< ::v8::String>  __this);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
