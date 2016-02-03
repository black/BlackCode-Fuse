// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Dispatcher__ArgDispatch;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Dispatcher.ArgDispatch<T> :848
// {
uType* Dispatcher__ArgDispatch_typeof();
void Dispatcher__ArgDispatch__ctor__fn(Dispatcher__ArgDispatch* __this, uDelegate* action, void* arg);
void Dispatcher__ArgDispatch__New1_fn(uType* __type, uDelegate* action, void* arg, Dispatcher__ArgDispatch** __retval);
void Dispatcher__ArgDispatch__Run_fn(Dispatcher__ArgDispatch* __this);

struct Dispatcher__ArgDispatch : uObject
{
    uStrong<uDelegate*> _action;
    uTField _arg() { return __type->Field(this, 1); }

    template<class T>
    void ctor_(uDelegate* action, T arg) { Dispatcher__ArgDispatch__ctor__fn(this, action, uConstrain(__type->T(0), arg)); }
    void Run();
    template<class T>
    static Dispatcher__ArgDispatch* New1(uType* __type, uDelegate* action, T arg) { Dispatcher__ArgDispatch* __retval; return Dispatcher__ArgDispatch__New1_fn(__type, action, uConstrain(__type->T(0), arg), &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
