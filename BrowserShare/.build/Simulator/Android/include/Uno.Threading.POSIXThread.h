// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.20.1\Implementation\Cpp\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Threading.Thread.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Threading{struct POSIXThread;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal sealed extern class POSIXThread :250
// {
::g::Uno::Threading::Thread_type* POSIXThread_typeof();
void POSIXThread__ctor_1_fn(POSIXThread* __this, uDelegate* callback);
void POSIXThread__Join_fn(POSIXThread* __this);
void POSIXThread__JoinImpl_fn(POSIXThread* __this, uint64_t* handle);
void POSIXThread__New1_fn(uDelegate* callback, POSIXThread** __retval);
void POSIXThread__Sleep1_fn(int* millis);
void POSIXThread__SleepImpl_fn(uint64_t* microSeconds);
void POSIXThread__Start_fn(POSIXThread* __this);
void POSIXThread__StartImpl_fn(POSIXThread* __this, uint64_t* handle, uDelegate* callback);

struct POSIXThread : ::g::Uno::Threading::Thread
{
    static uSStrong< ::g::Uno::Collections::List*> _callbacks_;
    static uSStrong< ::g::Uno::Collections::List*>& _callbacks() { return POSIXThread_typeof()->Init(), _callbacks_; }
    uint64_t _posixHandle;

    void ctor_1(uDelegate* callback);
    void JoinImpl(uint64_t handle);
    void StartImpl(uint64_t* handle, uDelegate* callback);
    static POSIXThread* New1(uDelegate* callback);
    static void Sleep1(int millis);
    static void SleepImpl(uint64_t microSeconds);
};
// }

}}} // ::g::Uno::Threading
