// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Dispatcher;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class Dispatcher :833
// {
struct Dispatcher_type : uType
{
    void(*fp_Dispatch)(::g::Fuse::Reactive::Dispatcher*, uDelegate*);
};

Dispatcher_type* Dispatcher_typeof();
void Dispatcher__ctor__fn(Dispatcher* __this);
void Dispatcher__Dispatch1_fn(Dispatcher* __this, uType* __type, uDelegate* action, void* arg);
void Dispatcher__Dispatch2_fn(Dispatcher* __this, uType* __type, uDelegate* action, void* arg1, void* arg2);
void Dispatcher__get_UIThread_fn(Dispatcher** __retval);

struct Dispatcher : uObject
{
    static uSStrong<Dispatcher*> _uiThread_;
    static uSStrong<Dispatcher*>& _uiThread() { return _uiThread_; }

    void ctor_();
    void Dispatch(uDelegate* action) { (((Dispatcher_type*)__type)->fp_Dispatch)(this, action); }
    template<class T>
    void Dispatch1(uType* __type, uDelegate* action, T arg) { Dispatcher__Dispatch1_fn(this, __type, action, uConstrain(__type->U(0), arg)); }
    template<class T1, class T2>
    void Dispatch2(uType* __type, uDelegate* action, T1 arg1, T2 arg2) { Dispatcher__Dispatch2_fn(this, __type, action, uConstrain(__type->U(0), arg1), uConstrain(__type->U(1), arg2)); }
    static Dispatcher* UIThread();
};
// }

}}} // ::g::Fuse::Reactive
