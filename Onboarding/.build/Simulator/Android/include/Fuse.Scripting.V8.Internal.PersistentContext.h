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

// internal extern struct PersistentContext :1056
// {
uStructType* PersistentContext_typeof();
void PersistentContext__Delete_fn(::v8::Persistent< ::v8::Context>** __this);
void PersistentContext__Get_fn(::v8::Persistent< ::v8::Context>** __this, ::v8::Isolate** isolate, ::v8::Local< ::v8::Context>* __retval);
void PersistentContext__New1_fn(::v8::Isolate** isolate, ::v8::Local< ::v8::Context>* context, ::v8::Persistent< ::v8::Context>** __retval);

struct PersistentContext
{
    static void Delete(::v8::Persistent< ::v8::Context>* __this);
    static ::v8::Local< ::v8::Context> Get(::v8::Persistent< ::v8::Context>* __this, ::v8::Isolate* isolate);
    static ::v8::Persistent< ::v8::Context>* New1(::v8::Isolate* isolate, ::v8::Local< ::v8::Context> context);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
