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

// internal extern struct Message :1415
// {
uStructType* Message_typeof();
void Message__Get_fn(::v8::Local< ::v8::Message>* __this, ::v8::Local< ::v8::String>* __retval);
void Message__GetEndColumn_fn(::v8::Local< ::v8::Message>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Maybe< int>* __retval);
void Message__GetLineNumber_fn(::v8::Local< ::v8::Message>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Maybe< int>* __retval);
void Message__GetScriptOriginResourceName_fn(::v8::Local< ::v8::Message>* __this, ::v8::Local< ::v8::Value>* __retval);
void Message__GetStartColumn_fn(::v8::Local< ::v8::Message>* __this, ::v8::Local< ::v8::Context>* context, ::v8::Maybe< int>* __retval);

struct Message
{
    static ::v8::Local< ::v8::String> Get(::v8::Local< ::v8::Message> __this);
    static ::v8::Maybe< int> GetEndColumn(::v8::Local< ::v8::Message> __this, ::v8::Local< ::v8::Context> context);
    static ::v8::Maybe< int> GetLineNumber(::v8::Local< ::v8::Message> __this, ::v8::Local< ::v8::Context> context);
    static ::v8::Local< ::v8::Value> GetScriptOriginResourceName(::v8::Local< ::v8::Message> __this);
    static ::v8::Maybe< int> GetStartColumn(::v8::Local< ::v8::Message> __this, ::v8::Local< ::v8::Context> context);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
