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

// internal extern struct PersistentArray :1395
// {
uStructType* PersistentArray_typeof();
void PersistentArray__Delete_fn(::v8::Persistent< ::v8::Array>** __this);
void PersistentArray__Get_fn(::v8::Persistent< ::v8::Array>** __this, ::v8::Isolate** isolate, ::v8::Local< ::v8::Array>* __retval);
void PersistentArray__New1_fn(::v8::Isolate** isolate, ::v8::Local< ::v8::Array>* array, ::v8::Persistent< ::v8::Array>** __retval);

struct PersistentArray
{
    static void Delete(::v8::Persistent< ::v8::Array>* __this);
    static ::v8::Local< ::v8::Array> Get(::v8::Persistent< ::v8::Array>* __this, ::v8::Isolate* isolate);
    static ::v8::Persistent< ::v8::Array>* New1(::v8::Isolate* isolate, ::v8::Local< ::v8::Array> array);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
