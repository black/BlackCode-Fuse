// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.19.6\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct Thread;}}}

namespace g{
namespace Uno{
namespace Threading{

// public abstract class Thread :305
// {
struct Thread_type : uType
{
    void(*fp_Join)(::g::Uno::Threading::Thread*);
    void(*fp_Start)(::g::Uno::Threading::Thread*);
};

Thread_type* Thread_typeof();
void Thread__ctor__fn(Thread* __this, uDelegate* callback);
void Thread__Create_fn(uDelegate* callback, Thread** __retval);
void Thread__Sleep_fn(int* millis);

struct Thread : uObject
{
    uStrong<uDelegate*> _callback;

    void ctor_(uDelegate* callback);
    void Join() { (((Thread_type*)__type)->fp_Join)(this); }
    void Start() { (((Thread_type*)__type)->fp_Start)(this); }
    static Thread* Create(uDelegate* callback);
    static void Sleep(int millis);
};
// }

}}} // ::g::Uno::Threading
