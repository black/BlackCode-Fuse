// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Timer__Closure;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// private sealed class Timer.Closure :438
// {
uType* Timer__Closure_typeof();
void Timer__Closure__ctor__fn(Timer__Closure* __this, ::g::Fuse::Scripting::Function* func, uArray* args);
void Timer__Closure__Callback_fn(Timer__Closure* __this);
void Timer__Closure__New1_fn(::g::Fuse::Scripting::Function* func, uArray* args, Timer__Closure** __retval);

struct Timer__Closure : uObject
{
    uStrong<uArray*> _args;
    uStrong< ::g::Fuse::Scripting::Function*> _func;

    void ctor_(::g::Fuse::Scripting::Function* func, uArray* args);
    void Callback();
    static Timer__Closure* New1(::g::Fuse::Scripting::Function* func, uArray* args);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
