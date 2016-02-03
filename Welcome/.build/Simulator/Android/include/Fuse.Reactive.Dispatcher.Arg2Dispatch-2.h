// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Dispatcher__Arg2Dispatch;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Dispatcher.Arg2Dispatch<T1, T2> :860
// {
uType* Dispatcher__Arg2Dispatch_typeof();
void Dispatcher__Arg2Dispatch__ctor__fn(Dispatcher__Arg2Dispatch* __this, uDelegate* action, void* arg1, void* arg2);
void Dispatcher__Arg2Dispatch__New1_fn(uType* __type, uDelegate* action, void* arg1, void* arg2, Dispatcher__Arg2Dispatch** __retval);
void Dispatcher__Arg2Dispatch__Run_fn(Dispatcher__Arg2Dispatch* __this);

struct Dispatcher__Arg2Dispatch : uObject
{
    uStrong<uDelegate*> _action;
    uTField _arg1() { return __type->Field(this, 1); }
    uTField _arg2() { return __type->Field(this, 2); }

    template<class T1, class T2>
    void ctor_(uDelegate* action, T1 arg1, T2 arg2) { Dispatcher__Arg2Dispatch__ctor__fn(this, action, uConstrain(__type->T(0), arg1), uConstrain(__type->T(1), arg2)); }
    void Run();
    template<class T1, class T2>
    static Dispatcher__Arg2Dispatch* New1(uType* __type, uDelegate* action, T1 arg1, T2 arg2) { Dispatcher__Arg2Dispatch* __retval; return Dispatcher__Arg2Dispatch__New1_fn(__type, action, uConstrain(__type->T(0), arg1), uConstrain(__type->T(1), arg2), &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
