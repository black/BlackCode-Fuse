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

// internal extern struct String :1096
// {
uStructType* String_typeof();
void String__op_Explicit_fn(::v8::Local< ::v8::String>* str, ::v8::Local< ::v8::Value>* __retval);
void String__op_Explicit1_fn(uString* str, ::v8::Local< ::v8::String>* __retval);
void String__ToString_fn(::v8::Local< ::v8::String>* __this, uType* __type, uString** __retval);

struct String
{
    static uString* ToString(::v8::Local< ::v8::String> __this, uType* __type) { uString* __retval; return String__ToString_fn(&__this, __type, &__retval), __retval; }
    static ::v8::Local< ::v8::Value> op_Explicit(::v8::Local< ::v8::String> str);
    static ::v8::Local< ::v8::String> op_Explicit1(uString* str);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
