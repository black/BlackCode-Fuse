// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_THREAD_WORKER_H__
#define __APP_FUSE_REACTIVE_THREAD_WORKER_H__

#include <app/Fuse.Scripting.IDispatcher.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <app/Uno.Threading.IDispatcher.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { namespace FuseJS { struct Timer; } } } }
namespace app { namespace Fuse { namespace Reactive { struct CrossThreadExceptionHandler; } } }
namespace app { namespace Fuse { namespace Reactive { struct ScriptEventArgs; } } }
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }
namespace app { namespace Fuse { namespace Scripting { struct Function; } } }
namespace app { namespace Fuse { namespace Scripting { struct Object; } } }
namespace app { namespace Uno { namespace Collections { struct List__Uno_Action; } } }
namespace app { namespace Uno { namespace Threading { struct Mutex; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Reactive {

struct ThreadWorker;

extern ::uStaticStrong< ::app::Fuse::Scripting::Context*> ThreadWorker___context;
extern ::uStaticStrong< ::app::Fuse::Scripting::Function*> ThreadWorker___observable;
extern ::uStaticStrong< ::app::Fuse::Scripting::Function*> ThreadWorker___subscriberProxy;
extern ::uStaticStrong< ::app::Fuse::Reactive::FuseJS::Timer*> ThreadWorker___timer;

struct ThreadWorker__uType : ::uClassType
{
    ::app::Uno::IDisposable __interface_0;
    ::app::Fuse::Scripting::IDispatcher __interface_1;
    ::app::Uno::Threading::IDispatcher __interface_2;
};

ThreadWorker__uType* ThreadWorker__typeof();

void ThreadWorker___ObjInit(ThreadWorker* __this, ::app::Fuse::Reactive::CrossThreadExceptionHandler* exceptionHandler);
void ThreadWorker___TypeInit(::uStatic* __this);
bool ThreadWorker__AttemptSuspend(ThreadWorker* __this);
void ThreadWorker__BeginThread(::uStatic* __this, ::uDelegate* a);
void ThreadWorker__Call(ThreadWorker* __this, ::uString* function, ::app::Fuse::Reactive::ScriptEventArgs* args);
::app::Fuse::Scripting::Context* ThreadWorker__CreateContext(::uStatic* __this, ::uObject* ownerThread);
::uDelegate* ThreadWorker__Dequeue(ThreadWorker* __this);
void ThreadWorker__Dispatch(ThreadWorker* __this, int priority, ::uDelegate* action);
void ThreadWorker__Dispose(ThreadWorker* __this);
void ThreadWorker__DummyAction(ThreadWorker* __this);
void ThreadWorker__ForceSuspend(ThreadWorker* __this);
::app::Fuse::Scripting::Context* ThreadWorker__get_Context(ThreadWorker* __this);
::app::Fuse::Scripting::Object* ThreadWorker__get_GlobalObject(ThreadWorker* __this);
bool ThreadWorker__get_IsOnWorkerThread(ThreadWorker* __this);
::app::Fuse::Scripting::Function* ThreadWorker__get_SubscriberProxy(ThreadWorker* __this);
void ThreadWorker__InitBrowserPolyfill(ThreadWorker* __this);
void ThreadWorker__InitBuiltInObjects(ThreadWorker* __this);
void ThreadWorker__InitFuseJS(ThreadWorker* __this);
::uObject* ThreadWorker__Instantiate(ThreadWorker* __this, ::uString* classFunc, ::uObject* arg);
void ThreadWorker__Invoke(ThreadWorker* __this, ::uDelegate* action);
ThreadWorker* ThreadWorker__New_1(::uStatic* __this, ::app::Fuse::Reactive::CrossThreadExceptionHandler* exceptionHandler);
void ThreadWorker__OnClosing(ThreadWorker* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void ThreadWorker__Register(::uStatic* __this, ::uString* moduleId, ::uObject* module);
::uObject* ThreadWorker__Require(ThreadWorker* __this, ::uArray* args);
void ThreadWorker__Resume(ThreadWorker* __this);
void ThreadWorker__Run(ThreadWorker* __this);
void ThreadWorker__Sleep(::uStatic* __this, int ms);
::uObject* ThreadWorker__Unwrap(ThreadWorker* __this, ::uObject* dc);
::uObject* ThreadWorker__Wrap(ThreadWorker* __this, ::uObject* obj);

struct ThreadWorker : ::uObject
{
    ::uStrong< ::app::Fuse::Reactive::CrossThreadExceptionHandler*> _exceptionHandler;
    ::uStrong< ::app::Uno::Threading::Mutex*> _suspendMutex;
    bool _working;
    int _suspendCount;
    bool _terminate;
    ::uStrong< ::app::Uno::Threading::Mutex*> _mutex;
    ::uStrong< ::app::Uno::Collections::List__Uno_Action*> _queue;

    void _ObjInit(::app::Fuse::Reactive::CrossThreadExceptionHandler* exceptionHandler) { ThreadWorker___ObjInit(this, exceptionHandler); }
    bool AttemptSuspend() { return ThreadWorker__AttemptSuspend(this); }
    void Call(::uString* function, ::app::Fuse::Reactive::ScriptEventArgs* args) { ThreadWorker__Call(this, function, args); }
    ::uDelegate* Dequeue() { return ThreadWorker__Dequeue(this); }
    void Dispatch(int priority, ::uDelegate* action) { ThreadWorker__Dispatch(this, priority, action); }
    void Dispose() { ThreadWorker__Dispose(this); }
    void DummyAction() { ThreadWorker__DummyAction(this); }
    void ForceSuspend() { ThreadWorker__ForceSuspend(this); }
    ::app::Fuse::Scripting::Context* Context() { return ThreadWorker__get_Context(this); }
    ::app::Fuse::Scripting::Object* GlobalObject() { return ThreadWorker__get_GlobalObject(this); }
    bool IsOnWorkerThread() { return ThreadWorker__get_IsOnWorkerThread(this); }
    ::app::Fuse::Scripting::Function* SubscriberProxy() { return ThreadWorker__get_SubscriberProxy(this); }
    void InitBrowserPolyfill() { ThreadWorker__InitBrowserPolyfill(this); }
    void InitBuiltInObjects() { ThreadWorker__InitBuiltInObjects(this); }
    void InitFuseJS() { ThreadWorker__InitFuseJS(this); }
    ::uObject* Instantiate(::uString* classFunc, ::uObject* arg) { return ThreadWorker__Instantiate(this, classFunc, arg); }
    void Invoke(::uDelegate* action) { ThreadWorker__Invoke(this, action); }
    void OnClosing(::uObject* sender, ::app::Uno::EventArgs* args) { ThreadWorker__OnClosing(this, sender, args); }
    ::uObject* Require(::uArray* args) { return ThreadWorker__Require(this, args); }
    void Resume() { ThreadWorker__Resume(this); }
    void Run() { ThreadWorker__Run(this); }
    ::uObject* Unwrap(::uObject* dc) { return ThreadWorker__Unwrap(this, dc); }
    ::uObject* Wrap(::uObject* obj) { return ThreadWorker__Wrap(this, obj); }
};

}}}


#endif
