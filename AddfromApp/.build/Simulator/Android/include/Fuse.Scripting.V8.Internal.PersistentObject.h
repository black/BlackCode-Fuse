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

// internal extern struct PersistentObject :1311
// {
uStructType* PersistentObject_typeof();
void PersistentObject__Delete_fn(::v8::Persistent< ::v8::Object>** __this);
void PersistentObject__Get_fn(::v8::Persistent< ::v8::Object>** __this, ::v8::Isolate** isolate, ::v8::Local< ::v8::Object>* __retval);
void PersistentObject__New1_fn(::v8::Isolate** isolate, ::v8::Local< ::v8::Object>* obj, ::v8::Persistent< ::v8::Object>** __retval);

struct PersistentObject
{
    static void Delete(::v8::Persistent< ::v8::Object>* __this);
    static ::v8::Local< ::v8::Object> Get(::v8::Persistent< ::v8::Object>* __this, ::v8::Isolate* isolate);
    static ::v8::Persistent< ::v8::Object>* New1(::v8::Isolate* isolate, ::v8::Local< ::v8::Object> obj);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
