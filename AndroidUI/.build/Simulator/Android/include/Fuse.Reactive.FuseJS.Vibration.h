// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Vibration;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// internal static class Vibration :373
// {
uClassType* Vibration_typeof();
void Vibration__CreateModule_fn(uObject** __retval);
void Vibration__Vibrate_fn(::g::Fuse::Scripting::Context* context, uArray* args, uArray** __retval);

struct Vibration : uObject
{
    static uObject* CreateModule();
    static uArray* Vibrate(::g::Fuse::Scripting::Context* context, uArray* args);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
