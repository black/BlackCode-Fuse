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

// internal extern struct Function :1331
// {
uStructType* Function_typeof();
void Function__Call_fn(::v8::Local< ::v8::Function>* __this, ::v8::Local< ::v8::Context>* context_, ::v8::Local< ::v8::Value>* receiver_, uArray* args_, ::v8::MaybeLocal< ::v8::Value> * __retval);
void Function__FromDelegate_fn(::v8::Isolate** isolate_, uDelegate* callback_, ::v8::Local< ::v8::Function>* __retval);
void Function__NewInstance_fn(::v8::Local< ::v8::Function>* __this, ::v8::Local< ::v8::Context>* context_, uArray* args_, ::v8::MaybeLocal< ::v8::Object> * __retval);
void Function__op_Explicit_fn(::v8::Local< ::v8::Function>* fun, ::v8::Local< ::v8::Object>* __retval);
void Function__op_Explicit1_fn(::v8::Local< ::v8::Function>* fun, ::v8::Local< ::v8::Value>* __retval);

struct Function
{
    static ::v8::MaybeLocal< ::v8::Value>  Call(::v8::Local< ::v8::Function> __this, ::v8::Local< ::v8::Context> context_, ::v8::Local< ::v8::Value> receiver_, uArray* args_);
    static ::v8::MaybeLocal< ::v8::Object>  NewInstance(::v8::Local< ::v8::Function> __this, ::v8::Local< ::v8::Context> context_, uArray* args_);
    static ::v8::Local< ::v8::Function> FromDelegate(::v8::Isolate* isolate_, uDelegate* callback_);
    static ::v8::Local< ::v8::Object> op_Explicit(::v8::Local< ::v8::Function> fun);
    static ::v8::Local< ::v8::Value> op_Explicit1(::v8::Local< ::v8::Function> fun);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
