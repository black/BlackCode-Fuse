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

// internal extern struct MaybeInt :920
// {
uStructType* MaybeInt_typeof();
void MaybeInt__FromJust_fn(::v8::Maybe< int>* __this, int* __retval);
void MaybeInt__FromMaybe_fn(::v8::Maybe< int>* __this, int* defaultValue, int* __retval);
void MaybeInt__IsJust_fn(::v8::Maybe< int>* __this, bool* __retval);
void MaybeInt__IsNothing_fn(::v8::Maybe< int>* __this, bool* __retval);

struct MaybeInt
{
    static int FromJust(::v8::Maybe< int> __this);
    static int FromMaybe(::v8::Maybe< int> __this, int defaultValue);
    static bool IsJust(::v8::Maybe< int> __this);
    static bool IsNothing(::v8::Maybe< int> __this);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
