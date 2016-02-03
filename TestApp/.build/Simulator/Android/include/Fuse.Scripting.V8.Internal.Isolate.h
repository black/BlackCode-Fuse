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

// internal extern struct Isolate :1010
// {
uStructType* Isolate_typeof();
void Isolate__Dispose_fn(::v8::Isolate** __this);
void Isolate__Enter_fn(::v8::Isolate** __this);
void Isolate__Exit_fn(::v8::Isolate** __this);
void Isolate__GetCurrent_fn(::v8::Isolate** __retval);
void Isolate__GetCurrentContext_fn(::v8::Isolate** __this, ::v8::Local< ::v8::Context>* __retval);
void Isolate__New1_fn(::v8::Isolate** __retval);

struct Isolate
{
    static void Dispose(::v8::Isolate* __this);
    static void Enter(::v8::Isolate* __this);
    static void Exit(::v8::Isolate* __this);
    static ::v8::Local< ::v8::Context> GetCurrentContext(::v8::Isolate* __this);
    static ::v8::Isolate* GetCurrent();
    static ::v8::Isolate* New1();
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
