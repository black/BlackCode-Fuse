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

// internal extern struct Script :1118
// {
uStructType* Script_typeof();
void Script__Compile_fn(::v8::Local< ::v8::String>* src, ::v8::Local< ::v8::String>* fileName, ::v8::Local< ::v8::Script>* __retval);
void Script__Compile1_fn(uString* src, uString* fileName, ::v8::Local< ::v8::Script>* __retval);
void Script__Run_fn(::v8::Local< ::v8::Script>* __this, ::v8::MaybeLocal< ::v8::Value> * __retval);

struct Script
{
    static ::v8::MaybeLocal< ::v8::Value>  Run(::v8::Local< ::v8::Script> __this);
    static ::v8::Local< ::v8::Script> Compile(::v8::Local< ::v8::String> src, ::v8::Local< ::v8::String> fileName);
    static ::v8::Local< ::v8::Script> Compile1(uString* src, uString* fileName);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
