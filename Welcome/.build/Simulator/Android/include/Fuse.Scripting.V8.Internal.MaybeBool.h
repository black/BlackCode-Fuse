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

// internal extern struct MaybeBool :910
// {
uStructType* MaybeBool_typeof();
void MaybeBool__FromJust_fn(::v8::Maybe< bool>* __this, bool* __retval);
void MaybeBool__FromMaybe_fn(::v8::Maybe< bool>* __this, bool* defaultValue, bool* __retval);
void MaybeBool__IsJust_fn(::v8::Maybe< bool>* __this, bool* __retval);
void MaybeBool__IsNothing_fn(::v8::Maybe< bool>* __this, bool* __retval);

struct MaybeBool
{
    static bool FromJust(::v8::Maybe< bool> __this);
    static bool FromMaybe(::v8::Maybe< bool> __this, bool defaultValue);
    static bool IsJust(::v8::Maybe< bool> __this);
    static bool IsNothing(::v8::Maybe< bool> __this);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
