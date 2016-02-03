// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IDispatcher.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.Threading.IDispatcher.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Timer;}}}}
namespace g{namespace Fuse{namespace Reactive{struct CrossThreadExceptionHandler;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class ThreadWorker :2642
// {
struct ThreadWorker_type : uType
{
    ::g::Uno::IDisposable interface0;
    ::g::Fuse::Scripting::IDispatcher interface1;
    ::g::Uno::Threading::IDispatcher interface2;
};

ThreadWorker_type* ThreadWorker_typeof();
void ThreadWorker__ctor__fn(ThreadWorker* __this, ::g::Fuse::Reactive::CrossThreadExceptionHandler* exceptionHandler);
void ThreadWorker__AttemptSuspend_fn(ThreadWorker* __this, bool* __retval);
void ThreadWorker__BeginThread_fn(uDelegate* a);
void ThreadWorker__get_Context_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Context** __retval);
void ThreadWorker__CreateContext_fn(uObject* ownerThread, ::g::Fuse::Scripting::Context** __retval);
void ThreadWorker__Dequeue_fn(ThreadWorker* __this, uDelegate** __retval);
void ThreadWorker__Dispatch_fn(ThreadWorker* __this, int* priority, uDelegate* action);
void ThreadWorker__Dispose_fn(ThreadWorker* __this);
void ThreadWorker__ForceSuspend_fn(ThreadWorker* __this);
void ThreadWorker__get_GlobalObject_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Object** __retval);
void ThreadWorker__InitBrowserPolyfill_fn(ThreadWorker* __this);
void ThreadWorker__InitBuiltInObjects_fn(ThreadWorker* __this);
void ThreadWorker__InitFuseJS_fn(ThreadWorker* __this);
void ThreadWorker__Invoke_fn(ThreadWorker* __this, uDelegate* action);
void ThreadWorker__get_IsOnWorkerThread_fn(ThreadWorker* __this, bool* __retval);
void ThreadWorker__New1_fn(::g::Fuse::Reactive::CrossThreadExceptionHandler* exceptionHandler, ThreadWorker** __retval);
void ThreadWorker__OnClosing_fn(ThreadWorker* __this, uObject* sender, ::g::Uno::EventArgs* args);
void ThreadWorker__Register_fn(uString* moduleId, uObject* module);
void ThreadWorker__Require_fn(ThreadWorker* __this, uArray* args, uObject** __retval);
void ThreadWorker__Resume_fn(ThreadWorker* __this);
void ThreadWorker__Run_fn(ThreadWorker* __this);
void ThreadWorker__get_SubscriberProxy_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Function** __retval);
void ThreadWorker__Unwrap_fn(ThreadWorker* __this, uObject* dc, uObject** __retval);
void ThreadWorker__Wrap_fn(ThreadWorker* __this, uObject* obj, uObject** __retval);

struct ThreadWorker : uObject
{
    static uSStrong< ::g::Fuse::Scripting::Context*> _context_;
    static uSStrong< ::g::Fuse::Scripting::Context*>& _context() { return ThreadWorker_typeof()->Init(), _context_; }
    uStrong< ::g::Fuse::Reactive::CrossThreadExceptionHandler*> _exceptionHandler;
    uStrong< ::g::Uno::Threading::Mutex*> _mutex;
    static uSStrong< ::g::Fuse::Scripting::Function*> _observable_;
    static uSStrong< ::g::Fuse::Scripting::Function*>& _observable() { return ThreadWorker_typeof()->Init(), _observable_; }
    uStrong< ::g::Uno::Collections::List*> _queue;
    static uSStrong< ::g::Fuse::Scripting::Function*> _subscriberProxy_;
    static uSStrong< ::g::Fuse::Scripting::Function*>& _subscriberProxy() { return ThreadWorker_typeof()->Init(), _subscriberProxy_; }
    int _suspendCount;
    uStrong< ::g::Uno::Threading::Mutex*> _suspendMutex;
    bool _terminate;
    static uSStrong< ::g::Fuse::Reactive::FuseJS::Timer*> _timer_;
    static uSStrong< ::g::Fuse::Reactive::FuseJS::Timer*>& _timer() { return ThreadWorker_typeof()->Init(), _timer_; }
    bool _working;

    void ctor_(::g::Fuse::Reactive::CrossThreadExceptionHandler* exceptionHandler);
    bool AttemptSuspend();
    ::g::Fuse::Scripting::Context* Context();
    uDelegate* Dequeue();
    void Dispatch(int priority, uDelegate* action);
    void Dispose();
    void ForceSuspend();
    ::g::Fuse::Scripting::Object* GlobalObject();
    void InitBrowserPolyfill();
    void InitBuiltInObjects();
    void InitFuseJS();
    void Invoke(uDelegate* action);
    bool IsOnWorkerThread();
    void OnClosing(uObject* sender, ::g::Uno::EventArgs* args);
    uObject* Require(uArray* args);
    void Resume();
    void Run();
    ::g::Fuse::Scripting::Function* SubscriberProxy();
    uObject* Unwrap(uObject* dc);
    uObject* Wrap(uObject* obj);
    static void BeginThread(uDelegate* a);
    static ::g::Fuse::Scripting::Context* CreateContext(uObject* ownerThread);
    static ThreadWorker* New1(::g::Fuse::Reactive::CrossThreadExceptionHandler* exceptionHandler);
    static void Register(uString* moduleId, uObject* module);
};
// }

}}} // ::g::Fuse::Reactive
