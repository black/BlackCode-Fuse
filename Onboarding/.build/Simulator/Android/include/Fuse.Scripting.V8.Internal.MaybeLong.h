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

// internal extern struct MaybeLong :930
// {
uStructType* MaybeLong_typeof();
void MaybeLong__FromJust_fn(::v8::Maybe< int64_t>* __this, int64_t* __retval);
void MaybeLong__FromMaybe_fn(::v8::Maybe< int64_t>* __this, int64_t* defaultValue, int64_t* __retval);
void MaybeLong__IsJust_fn(::v8::Maybe< int64_t>* __this, bool* __retval);
void MaybeLong__IsNothing_fn(::v8::Maybe< int64_t>* __this, bool* __retval);

struct MaybeLong
{
    static int64_t FromJust(::v8::Maybe< int64_t> __this);
    static int64_t FromMaybe(::v8::Maybe< int64_t> __this, int64_t defaultValue);
    static bool IsJust(::v8::Maybe< int64_t> __this);
    static bool IsNothing(::v8::Maybe< int64_t> __this);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
