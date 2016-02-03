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

// internal extern struct PersistentFunction :1356
// {
uStructType* PersistentFunction_typeof();
void PersistentFunction__Delete_fn(::v8::Persistent< ::v8::Function>** __this);
void PersistentFunction__Get_fn(::v8::Persistent< ::v8::Function>** __this, ::v8::Isolate** isolate, ::v8::Local< ::v8::Function>* __retval);
void PersistentFunction__New1_fn(::v8::Isolate** isolate, ::v8::Local< ::v8::Function>* function, ::v8::Persistent< ::v8::Function>** __retval);

struct PersistentFunction
{
    static void Delete(::v8::Persistent< ::v8::Function>* __this);
    static ::v8::Local< ::v8::Function> Get(::v8::Persistent< ::v8::Function>* __this, ::v8::Isolate* isolate);
    static ::v8::Persistent< ::v8::Function>* New1(::v8::Isolate* isolate, ::v8::Local< ::v8::Function> function);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
