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

// internal extern struct MaybeDouble :940
// {
uStructType* MaybeDouble_typeof();
void MaybeDouble__FromJust_fn(::v8::Maybe< double>* __this, double* __retval);
void MaybeDouble__FromMaybe_fn(::v8::Maybe< double>* __this, double* defaultValue, double* __retval);
void MaybeDouble__IsJust_fn(::v8::Maybe< double>* __this, bool* __retval);
void MaybeDouble__IsNothing_fn(::v8::Maybe< double>* __this, bool* __retval);

struct MaybeDouble
{
    static double FromJust(::v8::Maybe< double> __this);
    static double FromMaybe(::v8::Maybe< double> __this, double defaultValue);
    static bool IsJust(::v8::Maybe< double> __this);
    static bool IsNothing(::v8::Maybe< double> __this);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
