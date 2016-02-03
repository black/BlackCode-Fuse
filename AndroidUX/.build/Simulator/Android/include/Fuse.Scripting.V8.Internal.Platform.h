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

// internal extern struct Platform :995
// {
uStructType* Platform_typeof();
void Platform__CreateDefaultPlatform_fn(::v8::Platform** __retval);
void Platform__Dispose_fn(::v8::Platform** __this);

struct Platform
{
    static void Dispose(::v8::Platform* __this);
    static ::v8::Platform* CreateDefaultPlatform();
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
