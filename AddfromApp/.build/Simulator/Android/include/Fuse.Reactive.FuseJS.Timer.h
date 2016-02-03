// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\FuseJS\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModule.h>
#include <Fuse.Scripting.NativeModule.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Timer;}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Timer__Time;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// internal sealed class Timer :399
// {
::g::Fuse::Scripting::NativeModule_type* Timer_typeof();
void Timer__ctor_1_fn(Timer* __this);
void Timer__AddTimer_fn(Timer* __this, double* ms, uDelegate* callback, bool* repeat, int* __retval);
void Timer__Create_fn(Timer* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Timer__Delete_fn(Timer* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Timer__New2_fn(Timer** __retval);
void Timer__Process_fn(Timer* __this);
void Timer__RemoveTimer_fn(Timer* __this, int* id, bool* __retval);

struct Timer : ::g::Fuse::Scripting::NativeModule
{
    uStrong< ::g::Uno::Collections::List*> _timers;

    void ctor_1();
    int AddTimer(double ms, uDelegate* callback, bool repeat);
    uObject* Create(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* Delete(::g::Fuse::Scripting::Context* context, uArray* args);
    void Process();
    bool RemoveTimer(int id);
    static Timer* New2();
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
