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

// internal extern struct Context :1041
// {
uStructType* Context_typeof();
void Context__Enter_fn(::v8::Local< ::v8::Context>* __this);
void Context__Exit_fn(::v8::Local< ::v8::Context>* __this);
void Context__GetIsolate_fn(::v8::Local< ::v8::Context>* __this, ::v8::Isolate** __retval);
void Context__Global_fn(::v8::Local< ::v8::Context>* __this, ::v8::Local< ::v8::Object>* __retval);
void Context__New1_fn(::v8::Isolate** isolate, ::v8::Local< ::v8::Context>* __retval);

struct Context
{
    static void Enter(::v8::Local< ::v8::Context> __this);
    static void Exit(::v8::Local< ::v8::Context> __this);
    static ::v8::Isolate* GetIsolate(::v8::Local< ::v8::Context> __this);
    static ::v8::Local< ::v8::Object> Global(::v8::Local< ::v8::Context> __this);
    static ::v8::Local< ::v8::Context> New1(::v8::Isolate* isolate);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
