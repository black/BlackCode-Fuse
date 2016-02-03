// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Internal{struct V8;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Internal{

// internal static extern class V8 :965
// {
uClassType* V8_typeof();
void V8__Dispose_fn(bool* __retval);
void V8__Initialize_fn();
void V8__InitializeICU_fn(bool* __retval);
void V8__InitializePlatform_fn(::v8::Platform** platform);
void V8__ShutdownPlatform_fn();

struct V8 : uObject
{
    static bool Dispose();
    static void Initialize();
    static bool InitializeICU();
    static void InitializePlatform(::v8::Platform* platform);
    static void ShutdownPlatform();
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Internal
