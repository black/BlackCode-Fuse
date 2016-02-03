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

// internal extern struct TryCatch :1076
// {
uStructType* TryCatch_typeof();
void TryCatch__Exception_fn(::v8::TryCatch** __this, ::v8::Local< ::v8::Value>* __retval);
void TryCatch__Message_fn(::v8::TryCatch** __this, ::v8::Local< ::v8::Message>* __retval);
void TryCatch__StackTrace_fn(::v8::TryCatch** __this, ::v8::Local< ::v8::Context>* context, ::v8::MaybeLocal< ::v8::Value> * __retval);

struct TryCatch
{
    static ::v8::Local< ::v8::Value> Exception(::v8::TryCatch* __this);
    static ::v8::Local< ::v8::Message> Message(::v8::TryCatch* __this);
    static ::v8::MaybeLocal< ::v8::Value>  StackTrace(::v8::TryCatch* __this, ::v8::Local< ::v8::Context> context);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
