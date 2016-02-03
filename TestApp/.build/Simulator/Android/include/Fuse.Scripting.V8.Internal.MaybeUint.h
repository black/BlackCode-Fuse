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

// internal extern struct MaybeUint :950
// {
uStructType* MaybeUint_typeof();
void MaybeUint__FromJust_fn(::v8::Maybe< uint32_t>* __this, uint32_t* __retval);
void MaybeUint__FromMaybe_fn(::v8::Maybe< uint32_t>* __this, uint32_t* defaultValue, uint32_t* __retval);
void MaybeUint__IsJust_fn(::v8::Maybe< uint32_t>* __this, bool* __retval);
void MaybeUint__IsNothing_fn(::v8::Maybe< uint32_t>* __this, bool* __retval);

struct MaybeUint
{
    static uint32_t FromJust(::v8::Maybe< uint32_t> __this);
    static uint32_t FromMaybe(::v8::Maybe< uint32_t> __this, uint32_t defaultValue);
    static bool IsJust(::v8::Maybe< uint32_t> __this);
    static bool IsNothing(::v8::Maybe< uint32_t> __this);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
