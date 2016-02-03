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

// internal extern struct MaybeObject :892
// {
uStructType* MaybeObject_typeof();
void MaybeObject__FromMaybe_fn(::v8::MaybeLocal< ::v8::Object> * __this, ::v8::Local< ::v8::Object>* defaultValue, ::v8::Local< ::v8::Object>* __retval);
void MaybeObject__IsEmpty_fn(::v8::MaybeLocal< ::v8::Object> * __this, bool* __retval);
void MaybeObject__ToLocalChecked_fn(::v8::MaybeLocal< ::v8::Object> * __this, ::v8::Local< ::v8::Object>* __retval);

struct MaybeObject
{
    static ::v8::Local< ::v8::Object> FromMaybe(::v8::MaybeLocal< ::v8::Object>  __this, ::v8::Local< ::v8::Object> defaultValue);
    static bool IsEmpty(::v8::MaybeLocal< ::v8::Object>  __this);
    static ::v8::Local< ::v8::Object> ToLocalChecked(::v8::MaybeLocal< ::v8::Object>  __this);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
