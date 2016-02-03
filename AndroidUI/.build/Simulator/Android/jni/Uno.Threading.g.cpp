// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <posix_mutex.h>
#include <posix_thread.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Delegate.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.Threading.Future.h>
#include <Uno.Threading.Future-1.Closure-1.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.FutureState.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.LockGuard.h>
#include <Uno.Threading.Mutex.h>
#include <Uno.Threading.POSIXMutex.h>
#include <Uno.Threading.POSIXThread.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Threading.SyncDispatcher.h>
#include <Uno.Threading.Thread.h>
#include <Uno.ULong.h>
static uString* STRINGS[6];
static uType* TYPES[16];

namespace g{
namespace Uno{
namespace Threading{

// C:\ProgramData\Uno\Packages\Uno.Threading\0.19.6\$.uno(159)
// -----------------------------------------------------------

// private sealed class Future<T>.Closure<T> :159
// {
uType* Future1__Closure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Future1__Closure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.Future`1.Closure`1", options);
    ::TYPES[0] = ::g::Uno::Action1_typeof();
    type->SetPrecalc(
        ::TYPES[0/*Uno.Action`1*/]->MakeType(type->T(1)));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(1)), offsetof(::g::Uno::Threading::Future1__Closure, _action), 0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
    return type;
}

// public Closure(Uno.Action<T> action, T result) :164
void Future1__Closure__ctor__fn(Future1__Closure* __this, uDelegate* action, void* result)
{
    uType* __types[] = {
        __this->__type->T(1),
    };
    __this->_action = action;
    __this->_result() = result;
}

// public Closure New(Uno.Action<T> action, T result) :164
void Future1__Closure__New1_fn(uType* __type, uDelegate* action, void* result, Future1__Closure** __retval)
{
    uType* __types[] = {
        __type->T(1),
    };
    Future1__Closure* obj1 = (Future1__Closure*)uNew(__type);
    Future1__Closure__ctor__fn(obj1, action, result);
    return *__retval = obj1, void();
}

// public void Run() :170
void Future1__Closure__Run_fn(Future1__Closure* __this)
{
    __this->Run();
}

// public void Run() [instance] :170
void Future1__Closure::Run()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Action<T>*/),
        __type->T(1),
    };
    uPtr(_action)->InvokeVoid(_result());
}
// }

// C:\ProgramData\Uno\Packages\Uno.Threading\0.19.6\$.uno(541)
// -----------------------------------------------------------

// public sealed class ConcurrentQueue<T> :541
// {
ConcurrentQueue_type* ConcurrentQueue_typeof()
{
    static uSStrong<ConcurrentQueue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ConcurrentQueue);
    options.TypeSize = sizeof(ConcurrentQueue_type);
    type = (ConcurrentQueue_type*)uClassType::New("Uno.Threading.ConcurrentQueue`1", options);
    type->fp_ctor_ = (void*)ConcurrentQueue__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ConcurrentQueue__Dispose_fn;
    ::TYPES[1] = ::g::Uno::Collections::Queue_typeof();
    type->SetPrecalc(
        ::TYPES[1/*Uno.Collections.Queue`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ConcurrentQueue_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Uno::Threading::ConcurrentQueue, _mutex), 0,
        ::g::Uno::Collections::Queue_typeof()->MakeType(type->T(0)), offsetof(::g::Uno::Threading::ConcurrentQueue, _queue), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("get_Count", NULL, (void*)ConcurrentQueue__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("Dispose", NULL, (void*)ConcurrentQueue__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Enqueue", NULL, (void*)ConcurrentQueue__Enqueue_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("get_IsEmpty", NULL, (void*)ConcurrentQueue__get_IsEmpty_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", type, (void*)ConcurrentQueue__New1_fn, 0, true, type, 0),
        new uFunction("TryDequeue", NULL, (void*)ConcurrentQueue__TryDequeue_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)->ByRef()));
    return type;
}

// public ConcurrentQueue() :546
void ConcurrentQueue__ctor__fn(ConcurrentQueue* __this)
{
    __this->ctor_();
}

// public int get_Count() :577
void ConcurrentQueue__get_Count_fn(ConcurrentQueue* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public void Dispose() :592
void ConcurrentQueue__Dispose_fn(ConcurrentQueue* __this)
{
    __this->Dispose();
}

// public void Enqueue(T item) :552
void ConcurrentQueue__Enqueue_fn(ConcurrentQueue* __this, void* item)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    try
    {
        ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(__this->_queue), item);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[11/*Uno.IDisposable*/]));
        throw __t;
    }
    // finally
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[11/*Uno.IDisposable*/]));
}

// public bool get_IsEmpty() :589
void ConcurrentQueue__get_IsEmpty_fn(ConcurrentQueue* __this, bool* __retval)
{
    *__retval = __this->IsEmpty();
}

// public ConcurrentQueue New() :546
void ConcurrentQueue__New1_fn(uType* __type, ConcurrentQueue** __retval)
{
    *__retval = ConcurrentQueue::New1(__type);
}

// public bool TryDequeue(T& item) :558
void ConcurrentQueue__TryDequeue_fn(ConcurrentQueue* __this, uTRef item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->T(0),
        __this->__type->Precalced(0/*Uno.Collections.Queue<T>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ;
    bool ret = false;
    item.Default(__types[0]);
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    try
    {
        if (uPtr(__this->_queue)->Count() > 0)
        {
            item.Store((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_queue), &ret2), ret2));
            ret = true;
        }
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[11/*Uno.IDisposable*/]));
        throw __t;
    }
    // finally
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[11/*Uno.IDisposable*/]));
    return *__retval = ret, void();
}

// public ConcurrentQueue() [instance] :546
void ConcurrentQueue::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Queue<T>*/),
        __type->T(0),
    };
    _queue = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[0]));
    _mutex = ::g::Uno::Threading::Mutex::Create();
}

// public int get_Count() [instance] :577
int ConcurrentQueue::Count()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Queue<T>*/),
        __type->T(0),
    };
    int count = 0;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_mutex);

    try
    {
        count = uPtr(_queue)->Count();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[11/*Uno.IDisposable*/]));
        throw __t;
    }
    // finally
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[11/*Uno.IDisposable*/]));
    return count;
}

// public void Dispose() [instance] :592
void ConcurrentQueue::Dispose()
{
    uPtr(_mutex)->Dispose();
}

// public bool get_IsEmpty() [instance] :589
bool ConcurrentQueue::IsEmpty()
{
    return Count() == 0;
}

// public ConcurrentQueue New() [static] :546
ConcurrentQueue* ConcurrentQueue::New1(uType* __type)
{
    ConcurrentQueue* obj1 = (ConcurrentQueue*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Threading\0.19.6\$.uno(9)
// ---------------------------------------------------------

// public abstract class Future :9
// {
Future_type* Future_typeof()
{
    static uSStrong<Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Future);
    options.TypeSize = sizeof(Future_type);
    type = (Future_type*)uClassType::New("Uno.Threading.Future", options);
    type->SetFields(0,
        ::g::Uno::Threading::FutureState_typeof(), offsetof(::g::Uno::Threading::Future, _State), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("Cancel", NULL, NULL, offsetof(Future_type, fp_Cancel), false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_State", NULL, (void*)Future__get_State_fn, 0, false, ::g::Uno::Threading::FutureState_typeof(), 0),
        new uFunction("Wait", NULL, NULL, offsetof(Future_type, fp_Wait), false, uVoid_typeof(), 0));
    return type;
}

// protected generated Future() :9
void Future__ctor__fn(Future* __this)
{
    __this->ctor_();
}

// public generated Uno.Threading.FutureState get_State() :11
void Future__get_State_fn(Future* __this, int* __retval)
{
    *__retval = __this->State();
}

// protected generated void set_State(Uno.Threading.FutureState value) :11
void Future__set_State_fn(Future* __this, int* value)
{
    __this->State(*value);
}

// protected generated Future() [instance] :9
void Future::ctor_()
{
}

// public generated Uno.Threading.FutureState get_State() [instance] :11
int Future::State()
{
    return _State;
}

// protected generated void set_State(Uno.Threading.FutureState value) [instance] :11
void Future::State(int value)
{
    _State = value;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Threading\0.19.6\$.uno(16)
// ----------------------------------------------------------

// public abstract class Future<T> :16
// {
::g::Uno::Threading::Future_type* Future1_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.MethodTypeCount = 1;
    options.PrecalcCount = 6;
    options.ObjectSize = sizeof(Future1);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Uno.Threading.Future`1", options);
    type->SetBase(::g::Uno::Threading::Future_typeof());
    type->fp_Cancel = (void(*)(::g::Uno::Threading::Future*, bool*))Future1__Cancel_fn;
    type->fp_Wait = (void(*)(::g::Uno::Threading::Future*))Future1__Wait_fn;
    ::STRINGS[0] = uString::Const("dispatcher");
    ::STRINGS[1] = uString::Const("Not implemented");
    ::STRINGS[2] = uString::Const("This promise is already resolved or rejected");
    ::TYPES[2] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[3] = ::g::Uno::Threading::Future_typeof();
    ::TYPES[4] = ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof()));
    ::TYPES[1] = ::g::Uno::Collections::Queue_typeof();
    ::TYPES[5] = ::g::Uno::Threading::Promise_typeof();
    ::TYPES[0] = ::g::Uno::Action1_typeof();
    ::TYPES[6] = ::g::Uno::Int_typeof();
    ::TYPES[7] = ::g::Uno::Exception_typeof();
    ::TYPES[8] = ::g::Uno::Action_typeof();
    ::TYPES[9] = Future1__Closure_typeof();
    ::TYPES[10] = ::g::Uno::Delegate_typeof();
    type->SetPrecalc(
        ::TYPES[1/*Uno.Collections.Queue`1*/]->MakeType(::TYPES[5/*Uno.Threading.Promise`1*/]->MakeType(type->T(0))),
        ::TYPES[5/*Uno.Threading.Promise`1*/]->MakeType(type->T(0)),
        ::TYPES[1/*Uno.Collections.Queue`1*/]->MakeType(::TYPES[0/*Uno.Action`1*/]->MakeType(type->T(0))),
        ::TYPES[0/*Uno.Action`1*/]->MakeType(type->T(0)),
        type->MakeMethod(1, ::TYPES[7/*Uno.Exception*/]),
        type->MakeMethod(1, type->T(0)));
    type->SetFields(1,
        ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof())), offsetof(::g::Uno::Threading::Future1, _catchables), 0,
        ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0))), offsetof(::g::Uno::Threading::Future1, _chainables), 0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(::g::Uno::Threading::Future1, _dispatcher), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Uno::Threading::Future1, _mutex), 0,
        ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(type->T(0))), offsetof(::g::Uno::Threading::Future1, _thenables), 0,
        ::g::Uno::Exception_typeof(), offsetof(::g::Uno::Threading::Future1, Reason), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("Catch", NULL, (void*)Future1__Catch_fn, 0, false, type, 1, ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof())),
        new uFunction("Then", NULL, (void*)Future1__Then_fn, 0, false, type, 1, ::g::Uno::Action1_typeof()->MakeType(type->T(0))),
        new uFunction("Then", NULL, (void*)Future1__Then1_fn, 0, false, type, 2, ::g::Uno::Action1_typeof()->MakeType(type->T(0)), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof())));
    return type;
}

// protected Future() :39
void Future1__ctor_1_fn(Future1* __this)
{
    __this->ctor_1();
}

// protected Future(Uno.Threading.IDispatcher dispatcher) :27
void Future1__ctor_2_fn(Future1* __this, uObject* dispatcher)
{
    __this->ctor_2(dispatcher);
}

// public override sealed void Cancel([bool shutdownGracefully]) :46
void Future1__Cancel_fn(Future1* __this, bool* shutdownGracefully)
{
    U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"Not impleme...*/]));
}

// public Uno.Threading.Future<T> Catch(Uno.Action<Uno.Exception> failure) :154
void Future1__Catch_fn(Future1* __this, uDelegate* failure, Future1** __retval)
{
    *__retval = __this->Catch(failure);
}

// protected void InternalReject(Uno.Exception reason) :80
void Future1__InternalReject_fn(Future1* __this, ::g::Uno::Exception* reason)
{
    __this->InternalReject(reason);
}

// protected void InternalResolve(T result) :51
void Future1__InternalResolve_fn(Future1* __this, void* result)
{
    uType* __types[] = {
        __this->__type->GetBase(Future1_typeof())->T(0),
        __this->__type->GetBase(Future1_typeof())->Precalced(2/*Uno.Collections.Queue<Uno.Action<T>>*/),
        __this->__type->GetBase(Future1_typeof())->Precalced(3/*Uno.Action<T>*/),
        __this->__type->GetBase(Future1_typeof())->Precalced(5/*Uno.Threading.Future<T>.Invoke<T>*/),
        __this->__type->GetBase(Future1_typeof())->Precalced(0/*Uno.Collections.Queue<Uno.Threading.Promise<T>>*/),
        __this->__type->GetBase(Future1_typeof())->Precalced(1/*Uno.Threading.Promise<T>*/),
    };
    uDelegate* ret4;
    ::g::Uno::Threading::Promise* ret5;
    ::g::Uno::Threading::Promise* ret6;
    uPtr(__this->_mutex)->Lock();

    if (__this->State() != 0)
    {
        uPtr(__this->_mutex)->Unlock();
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"This promis...*/]));
    }

    __this->State(1);
    __this->Result() = result;

    try
    {
        while (uPtr(__this->_thenables)->Count() != 0)
            Future1__Invoke_fn(__this, __types[3], (::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_thenables), &ret4), ret4), result);

        while (uPtr(__this->_chainables)->Count() != 0)
            ::g::Uno::Threading::Promise__Resolve_fn(uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_chainables), &ret5), ret5)), result);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception = __t.Exception;

        while (uPtr(__this->_chainables)->Count() != 0)
            uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_chainables), &ret6), ret6))->Reject(exception);
    }

    uPtr(__this->_mutex)->Unlock();
}

// private void Invoke<T1>(Uno.Action<T1> action, T1 arg) :109
void Future1__Invoke_fn(Future1* __this, uType* __type, uDelegate* action, void* arg)
{
    uType* __types[] = {
        __type->U(0),
        ::TYPES[9/*Uno.Threading.Future`1.Closure`1*/]->MakeType(__this->__type->GetBase(Future1_typeof())->T(0), __type->U(0)),
        __this->__type->GetBase(Future1_typeof())->T(0),
    };
    Future1__Closure* ret7;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(__this->_dispatcher), ::TYPES[2/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[8/*Uno.Action*/], (void*)Future1__Closure__Run_fn, (Future1__Closure__New1_fn(__types[1], action, arg, &ret7), ret7)));
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> action) :114
void Future1__Then_fn(Future1* __this, uDelegate* action, Future1** __retval)
{
    *__retval = __this->Then(action);
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> fulfilled, Uno.Action<Uno.Exception> rejected) :119
void Future1__Then1_fn(Future1* __this, uDelegate* fulfilled, uDelegate* rejected, Future1** __retval)
{
    *__retval = __this->Then1(fulfilled, rejected);
}

// public override sealed void Wait() :41
void Future1__Wait_fn(Future1* __this)
{
    U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"Not impleme...*/]));
}

// protected Future() [instance] :39
void Future1::ctor_1()
{
    _mutex = ::g::Uno::Threading::Mutex::Create();
    ctor_2((uObject*)::g::Uno::Threading::SyncDispatcher::New1());
}

// protected Future(Uno.Threading.IDispatcher dispatcher) [instance] :27
void Future1::ctor_2(uObject* dispatcher)
{
    uType* __types[] = {
        __type->GetBase(Future1_typeof())->Precalced(0/*Uno.Collections.Queue<Uno.Threading.Promise<T>>*/),
        __type->GetBase(Future1_typeof())->Precalced(1/*Uno.Threading.Promise<T>*/),
        __type->GetBase(Future1_typeof())->T(0),
        __type->GetBase(Future1_typeof())->Precalced(2/*Uno.Collections.Queue<Uno.Action<T>>*/),
        __type->GetBase(Future1_typeof())->Precalced(3/*Uno.Action<T>*/),
    };
    _mutex = ::g::Uno::Threading::Mutex::Create();
    ctor_();

    if (dispatcher == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"dispatcher"*/]));

    _dispatcher = dispatcher;
    State(0);
    _catchables = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(::TYPES[4/*Uno.Collections.Queue<Uno.Action<Uno.Exception>>*/]));
    _chainables = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[0]));
    _thenables = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[3]));
}

// public Uno.Threading.Future<T> Catch(Uno.Action<Uno.Exception> failure) [instance] :154
Future1* Future1::Catch(uDelegate* failure)
{
    return Then1(NULL, failure);
}

// protected void InternalReject(Uno.Exception reason) [instance] :80
void Future1::InternalReject(::g::Uno::Exception* reason)
{
    uType* __types[] = {
        __type->GetBase(Future1_typeof())->Precalced(4/*Uno.Threading.Future<T>.Invoke<Uno.Exception>*/),
        __type->GetBase(Future1_typeof())->T(0),
        __type->GetBase(Future1_typeof())->Precalced(0/*Uno.Collections.Queue<Uno.Threading.Promise<T>>*/),
        __type->GetBase(Future1_typeof())->Precalced(1/*Uno.Threading.Promise<T>*/),
    };
    uDelegate* ret1;
    ::g::Uno::Threading::Promise* ret2;
    ::g::Uno::Threading::Promise* ret3;
    uPtr(_mutex)->Lock();

    if (State() != 0)
    {
        uPtr(_mutex)->Unlock();
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"This promis...*/]));
    }

    State(2);
    Reason = reason;

    try
    {
        while (uPtr(_catchables)->Count() != 0)
            Future1__Invoke_fn(this, __types[0], (::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_catchables), &ret1), ret1), reason);

        while (uPtr(_chainables)->Count() != 0)
            uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_chainables), &ret2), ret2))->Reject(reason);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception = __t.Exception;

        while (uPtr(_chainables)->Count() != 0)
            uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_chainables), &ret3), ret3))->Reject(exception);
    }

    uPtr(_mutex)->Unlock();
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> action) [instance] :114
Future1* Future1::Then(uDelegate* action)
{
    return Then1(action, NULL);
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> fulfilled, Uno.Action<Uno.Exception> rejected) [instance] :119
Future1* Future1::Then1(uDelegate* fulfilled, uDelegate* rejected)
{
    uType* __types[] = {
        __type->GetBase(Future1_typeof())->Precalced(1/*Uno.Threading.Promise<T>*/),
        __type->GetBase(Future1_typeof())->T(0),
        __type->GetBase(Future1_typeof())->Precalced(5/*Uno.Threading.Future<T>.Invoke<T>*/),
        __type->GetBase(Future1_typeof())->Precalced(4/*Uno.Threading.Future<T>.Invoke<Uno.Exception>*/),
    };
    ::g::Uno::Threading::Promise* chainable = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(__types[0]);
    uPtr(_mutex)->Lock();

    try
    {
        if (State() == 1)
        {
            if (::g::Uno::Delegate::op_Inequality(fulfilled, NULL))
                Future1__Invoke_fn(this, __types[2], fulfilled, Result());
        }
        else if (State() == 2)
        {
            if (::g::Uno::Delegate::op_Inequality(rejected, NULL))
                Future1__Invoke_fn(this, __types[3], rejected, Reason);
        }
        else
        {
            ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_chainables), chainable);

            if (::g::Uno::Delegate::op_Inequality(fulfilled, NULL))
                ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_thenables), fulfilled);

            if (::g::Uno::Delegate::op_Inequality(rejected, NULL))
                ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_catchables), rejected);
        }
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception = __t.Exception;
        uPtr(chainable)->Reject(exception);
    }

    uPtr(_mutex)->Unlock();
    return chainable;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Threading\0.19.6\$.uno(183)
// -----------------------------------------------------------

// public enum FutureState :183
uEnumType* FutureState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Threading.FutureState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Pending", 0LL,
        "Resolved", 1LL,
        "Rejected", 2LL);
    return type;
}

// C:\ProgramData\Uno\Packages\Uno.Threading\0.19.6\$.uno(197)
// -----------------------------------------------------------

// public abstract interface IDispatcher :197
// {
uInterfaceType* IDispatcher_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Threading.IDispatcher", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Invoke", NULL, NULL, offsetof(IDispatcher, fp_Invoke), false, uVoid_typeof(), 1, ::g::Uno::Action_typeof()));
    return type;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Threading\0.19.6\$.uno(512)
// -----------------------------------------------------------

// public sealed class LockGuard :512
// {
LockGuard_type* LockGuard_typeof()
{
    static uSStrong<LockGuard_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LockGuard);
    options.TypeSize = sizeof(LockGuard_type);
    type = (LockGuard_type*)uClassType::New("Uno.Threading.LockGuard", options);
    type->interface0.fp_Dispose = (void(*)(uObject*))LockGuard__Uno_IDisposable_Dispose_fn;
    ::TYPES[11] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(LockGuard_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Uno::Threading::LockGuard, _mutex), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Acquire", NULL, (void*)LockGuard__Acquire_fn, 0, true, ::g::Uno::IDisposable_typeof(), 1, ::g::Uno::Threading::Mutex_typeof()));
    return type;
}

// private LockGuard(Uno.Threading.Mutex mutex) :516
void LockGuard__ctor__fn(LockGuard* __this, ::g::Uno::Threading::Mutex* mutex)
{
    __this->ctor_(mutex);
}

// public static Uno.IDisposable Acquire(Uno.Threading.Mutex mutex) :522
void LockGuard__Acquire_fn(::g::Uno::Threading::Mutex* mutex, uObject** __retval)
{
    *__retval = LockGuard::Acquire(mutex);
}

// private LockGuard New(Uno.Threading.Mutex mutex) :516
void LockGuard__New1_fn(::g::Uno::Threading::Mutex* mutex, LockGuard** __retval)
{
    *__retval = LockGuard::New1(mutex);
}

// private void Uno.IDisposable.Dispose() :527
void LockGuard__Uno_IDisposable_Dispose_fn(LockGuard* __this)
{
    uPtr(__this->_mutex)->Unlock();
}

// private LockGuard(Uno.Threading.Mutex mutex) [instance] :516
void LockGuard::ctor_(::g::Uno::Threading::Mutex* mutex)
{
    _mutex = mutex;
    uPtr(_mutex)->Lock();
}

// public static Uno.IDisposable Acquire(Uno.Threading.Mutex mutex) [static] :522
uObject* LockGuard::Acquire(::g::Uno::Threading::Mutex* mutex)
{
    return (uObject*)LockGuard::New1(mutex);
}

// private LockGuard New(Uno.Threading.Mutex mutex) [static] :516
LockGuard* LockGuard::New1(::g::Uno::Threading::Mutex* mutex)
{
    LockGuard* obj1 = (LockGuard*)uNew(LockGuard_typeof());
    obj1->ctor_(mutex);
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Threading\0.19.6\$.uno(264)
// -----------------------------------------------------------

// public abstract class Mutex :264
// {
Mutex_type* Mutex_typeof()
{
    static uSStrong<Mutex_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Mutex);
    options.TypeSize = sizeof(Mutex_type);
    type = (Mutex_type*)uClassType::New("Uno.Threading.Mutex", options);
    ::STRINGS[3] = uString::Const("Feature not supported in this backend");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Mutex_type, interface0));
    type->Reflection.SetFunctions(4,
        new uFunction("Create", NULL, (void*)Mutex__Create_fn, 0, true, Mutex_typeof(), 0),
        new uFunction("Dispose", NULL, NULL, offsetof(Mutex_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("Lock", NULL, NULL, offsetof(Mutex_type, fp_Lock), false, uVoid_typeof(), 0),
        new uFunction("Unlock", NULL, NULL, offsetof(Mutex_type, fp_Unlock), false, uVoid_typeof(), 0));
    return type;
}

// protected generated Mutex() :264
void Mutex__ctor__fn(Mutex* __this)
{
    __this->ctor_();
}

// public static Uno.Threading.Mutex Create() :266
void Mutex__Create_fn(Mutex** __retval)
{
    *__retval = Mutex::Create();
}

// protected generated Mutex() [instance] :264
void Mutex::ctor_()
{
}

// public static Uno.Threading.Mutex Create() [static] :266
Mutex* Mutex::Create()
{
    return ::g::Uno::Threading::POSIXMutex::New1();
    U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"Feature not...*/]));
}
// }

// C:\ProgramData\Uno\Packages\Uno.Threading\0.19.6\Implementation\Cpp\$.uno(76)
// -----------------------------------------------------------------------------

// internal sealed extern class POSIXMutex :76
// {
::g::Uno::Threading::Mutex_type* POSIXMutex_typeof()
{
    static uSStrong< ::g::Uno::Threading::Mutex_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(POSIXMutex);
    options.TypeSize = sizeof(::g::Uno::Threading::Mutex_type);
    type = (::g::Uno::Threading::Mutex_type*)uClassType::New("Uno.Threading.POSIXMutex", options);
    type->SetBase(::g::Uno::Threading::Mutex_typeof());
    type->fp_ctor_ = (void*)POSIXMutex__New1_fn;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Mutex*))POSIXMutex__Dispose_fn;
    type->fp_Lock = (void(*)(::g::Uno::Threading::Mutex*))POSIXMutex__Lock_fn;
    type->fp_Unlock = (void(*)(::g::Uno::Threading::Mutex*))POSIXMutex__Unlock_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))POSIXMutex__Dispose_fn;
    ::TYPES[12] = ::g::Uno::IntPtr_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Mutex_type, interface0));
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Uno::Threading::POSIXMutex, _handle), 0);
    return type;
}

// public POSIXMutex() :80
void POSIXMutex__ctor_1_fn(POSIXMutex* __this)
{
    __this->ctor_1();
}

// public override sealed void Dispose() :101
void POSIXMutex__Dispose_fn(POSIXMutex* __this)
{
    if (::g::Uno::IntPtr::op_Inequality(__this->_handle, ::g::Uno::IntPtr::Zero()))
    {
        free_mutex(__this->_handle);
        __this->_handle = ::g::Uno::IntPtr::Zero();
    }
}

// public override sealed void Lock() :85
void POSIXMutex__Lock_fn(POSIXMutex* __this)
{
    if (::g::Uno::IntPtr::op_Equality(__this->_handle, ::g::Uno::IntPtr::Zero()))
        U_THROW(::g::Uno::Exception::New1());

    pthread_mutex_lock( (pthread_mutex_t*)__this->_handle );
}

// public POSIXMutex New() :80
void POSIXMutex__New1_fn(POSIXMutex** __retval)
{
    *__retval = POSIXMutex::New1();
}

// public override sealed void Unlock() :93
void POSIXMutex__Unlock_fn(POSIXMutex* __this)
{
    if (::g::Uno::IntPtr::op_Equality(__this->_handle, ::g::Uno::IntPtr::Zero()))
        U_THROW(::g::Uno::Exception::New1());

    pthread_mutex_unlock( (pthread_mutex_t*)__this->_handle );
}

// public POSIXMutex() [instance] :80
void POSIXMutex::ctor_1()
{
    ctor_();
    _handle = init_mutex();
}

// public POSIXMutex New() [static] :80
POSIXMutex* POSIXMutex::New1()
{
    POSIXMutex* obj1 = (POSIXMutex*)uNew(POSIXMutex_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Threading\0.19.6\Implementation\Cpp\$.uno(250)
// ------------------------------------------------------------------------------

// internal sealed extern class POSIXThread :250
// {
// static POSIXThread() :250
static void POSIXThread__cctor__fn(uType* __type)
{
    POSIXThread::_callbacks_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[13/*Uno.Collections.List<Uno.Action>*/]));
}

//  ~POSIXThread() :261
static void POSIXThread__Finalize_fn(POSIXThread* __this)
{
}

::g::Uno::Threading::Thread_type* POSIXThread_typeof()
{
    static uSStrong< ::g::Uno::Threading::Thread_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(POSIXThread);
    options.TypeSize = sizeof(::g::Uno::Threading::Thread_type);
    type = (::g::Uno::Threading::Thread_type*)uClassType::New("Uno.Threading.POSIXThread", options);
    type->SetBase(::g::Uno::Threading::Thread_typeof());
    type->fp_cctor_ = POSIXThread__cctor__fn;
    type->fp_Finalize = (void(*)(uObject*))POSIXThread__Finalize_fn;
    type->fp_Join = (void(*)(::g::Uno::Threading::Thread*))POSIXThread__Join_fn;
    type->fp_Start = (void(*)(::g::Uno::Threading::Thread*))POSIXThread__Start_fn;
    ::STRINGS[4] = uString::Const("Cannot join unstarted thread");
    ::STRINGS[5] = uString::Const("Cannot start throw more than once");
    ::TYPES[13] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof());
    ::TYPES[14] = ::g::Uno::ULong_typeof();
    ::TYPES[15] = ::g::Uno::Threading::Thread_typeof();
    type->SetFields(1,
        ::g::Uno::ULong_typeof(), offsetof(::g::Uno::Threading::POSIXThread, _posixHandle), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof()), (uintptr_t)&::g::Uno::Threading::POSIXThread::_callbacks_, uFieldFlagsStatic);
    return type;
}

// public POSIXThread(Uno.Action callback) :255
void POSIXThread__ctor_1_fn(POSIXThread* __this, uDelegate* callback)
{
    __this->ctor_1(callback);
}

// public override sealed void Join() :291
void POSIXThread__Join_fn(POSIXThread* __this)
{
    if (__this->_posixHandle == 0ULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"Cannot join...*/]));

    __this->JoinImpl(__this->_posixHandle);
}

// private void JoinImpl(ulong handle) :299
void POSIXThread__JoinImpl_fn(POSIXThread* __this, uint64_t* handle)
{
    __this->JoinImpl(*handle);
}

// public POSIXThread New(Uno.Action callback) :255
void POSIXThread__New1_fn(uDelegate* callback, POSIXThread** __retval)
{
    *__retval = POSIXThread::New1(callback);
}

// public static void Sleep(int millis) :318
void POSIXThread__Sleep1_fn(int* millis)
{
    POSIXThread::Sleep1(*millis);
}

// private static void SleepImpl(ulong microSeconds) :324
void POSIXThread__SleepImpl_fn(uint64_t* microSeconds)
{
    POSIXThread::SleepImpl(*microSeconds);
}

// public override sealed void Start() :272
void POSIXThread__Start_fn(POSIXThread* __this)
{
    __this->StartImpl(&__this->_posixHandle, __this->_callback);
}

// private void StartImpl(ulong& handle, Uno.Action callback) :280
void POSIXThread__StartImpl_fn(POSIXThread* __this, uint64_t* handle, uDelegate* callback)
{
    __this->StartImpl(handle, callback);
}

uSStrong< ::g::Uno::Collections::List*> POSIXThread::_callbacks_;

// public POSIXThread(Uno.Action callback) [instance] :255
void POSIXThread::ctor_1(uDelegate* callback)
{
    _posixHandle = 0ULL;
    ctor_(callback);
}

// private void JoinImpl(ulong handle) [instance] :299
void POSIXThread::JoinImpl(uint64_t handle)
{
    int result = pthread_join(((pthread_t)handle), NULL);
}

// private void StartImpl(ulong& handle, Uno.Action callback) [instance] :280
void POSIXThread::StartImpl(uint64_t* handle, uDelegate* callback)
{
    if (*handle != 0ULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[5/*"Cannot star...*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(POSIXThread::_callbacks()), callback);
    int result = thread_start(handle, callback);
}

// public POSIXThread New(Uno.Action callback) [static] :255
POSIXThread* POSIXThread::New1(uDelegate* callback)
{
    POSIXThread* obj1 = (POSIXThread*)uNew(POSIXThread_typeof());
    obj1->ctor_1(callback);
    return obj1;
}

// public static void Sleep(int millis) [static] :318
void POSIXThread::Sleep1(int millis)
{
    POSIXThread_typeof()->Init();
    uint64_t microSeconds = (uint64_t)millis * 1000ULL;
    POSIXThread::SleepImpl(microSeconds);
}

// private static void SleepImpl(ulong microSeconds) [static] :324
void POSIXThread::SleepImpl(uint64_t microSeconds)
{
    POSIXThread_typeof()->Init();
    thread_sleep(microSeconds);
}
// }

// C:\ProgramData\Uno\Packages\Uno.Threading\0.19.6\$.uno(228)
// -----------------------------------------------------------

// public sealed class Promise<T> :228
// {
::g::Uno::Threading::Future_type* Promise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Promise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Uno.Threading.Promise`1", options);
    type->SetBase(::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0)));
    type->fp_ctor_ = (void*)Promise__New1_fn;
    type->SetFields(8);
    type->Reflection.SetFunctions(6,
        new uFunction(".ctor", type, (void*)Promise__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", type, (void*)Promise__New2_fn, 0, true, type, 1, type->T(0)),
        new uFunction(".ctor", type, (void*)Promise__New3_fn, 0, true, type, 1, ::g::Uno::Threading::IDispatcher_typeof()),
        new uFunction(".ctor", type, (void*)Promise__New4_fn, 0, true, type, 2, ::g::Uno::Threading::IDispatcher_typeof(), type->T(0)),
        new uFunction("Reject", NULL, (void*)Promise__Reject_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Exception_typeof()),
        new uFunction("Resolve", NULL, (void*)Promise__Resolve_fn, 0, false, uVoid_typeof(), 1, type->T(0)));
    return type;
}

// public Promise() :242
void Promise__ctor_3_fn(Promise* __this)
{
    __this->ctor_3();
}

// public Promise(T result) :230
void Promise__ctor_4_fn(Promise* __this, void* result)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->ctor_1();
    Promise__Resolve_fn(__this, result);
}

// public Promise(Uno.Threading.IDispatcher dispatcher) :240
void Promise__ctor_5_fn(Promise* __this, uObject* dispatcher)
{
    __this->ctor_5(dispatcher);
}

// public Promise(Uno.Threading.IDispatcher dispatcher, T result) :235
void Promise__ctor_6_fn(Promise* __this, uObject* dispatcher, void* result)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    __this->ctor_2(dispatcher);
    Promise__Resolve_fn(__this, result);
}

// public Promise New() :242
void Promise__New1_fn(uType* __type, Promise** __retval)
{
    *__retval = Promise::New1(__type);
}

// public Promise New(T result) :230
void Promise__New2_fn(uType* __type, void* result, Promise** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    Promise* obj1 = (Promise*)uNew(__type);
    Promise__ctor_4_fn(obj1, result);
    return *__retval = obj1, void();
}

// public Promise New(Uno.Threading.IDispatcher dispatcher) :240
void Promise__New3_fn(uType* __type, uObject* dispatcher, Promise** __retval)
{
    *__retval = Promise::New3(__type, dispatcher);
}

// public Promise New(Uno.Threading.IDispatcher dispatcher, T result) :235
void Promise__New4_fn(uType* __type, uObject* dispatcher, void* result, Promise** __retval)
{
    uType* __types[] = {
        __type->T(0),
    };
    Promise* obj2 = (Promise*)uNew(__type);
    Promise__ctor_6_fn(obj2, dispatcher, result);
    return *__retval = obj2, void();
}

// public void Reject(Uno.Exception reason) :249
void Promise__Reject_fn(Promise* __this, ::g::Uno::Exception* reason)
{
    __this->Reject(reason);
}

// public void Resolve(T result) :244
void Promise__Resolve_fn(Promise* __this, void* result)
{
    uType* __types[] = {
        __this->__type->T(0),
    };
    ::g::Uno::Threading::Future1__InternalResolve_fn(__this, result);
}

// public Promise() [instance] :242
void Promise::ctor_3()
{
    ctor_1();
}

// public Promise(Uno.Threading.IDispatcher dispatcher) [instance] :240
void Promise::ctor_5(uObject* dispatcher)
{
    ctor_2(dispatcher);
}

// public void Reject(Uno.Exception reason) [instance] :249
void Promise::Reject(::g::Uno::Exception* reason)
{
    InternalReject(reason);
}

// public Promise New() [static] :242
Promise* Promise::New1(uType* __type)
{
    Promise* obj4 = (Promise*)uNew(__type);
    obj4->ctor_3();
    return obj4;
}

// public Promise New(Uno.Threading.IDispatcher dispatcher) [static] :240
Promise* Promise::New3(uType* __type, uObject* dispatcher)
{
    Promise* obj3 = (Promise*)uNew(__type);
    obj3->ctor_5(dispatcher);
    return obj3;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Threading\0.19.6\$.uno(211)
// -----------------------------------------------------------

// internal sealed class SyncDispatcher :211
// {
SyncDispatcher_type* SyncDispatcher_typeof()
{
    static uSStrong<SyncDispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SyncDispatcher);
    options.TypeSize = sizeof(SyncDispatcher_type);
    type = (SyncDispatcher_type*)uClassType::New("Uno.Threading.SyncDispatcher", options);
    type->fp_ctor_ = (void*)SyncDispatcher__New1_fn;
    type->interface0.fp_Invoke = (void(*)(uObject*, uDelegate*))SyncDispatcher__Invoke_fn;
    ::TYPES[8] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(SyncDispatcher_type, interface0));
    return type;
}

// public generated SyncDispatcher() :211
void SyncDispatcher__ctor__fn(SyncDispatcher* __this)
{
    __this->ctor_();
}

// public void Invoke(Uno.Action action) :213
void SyncDispatcher__Invoke_fn(SyncDispatcher* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public generated SyncDispatcher New() :211
void SyncDispatcher__New1_fn(SyncDispatcher** __retval)
{
    *__retval = SyncDispatcher::New1();
}

// public generated SyncDispatcher() [instance] :211
void SyncDispatcher::ctor_()
{
}

// public void Invoke(Uno.Action action) [instance] :213
void SyncDispatcher::Invoke(uDelegate* action)
{
    uPtr(action)->InvokeVoid();
}

// public generated SyncDispatcher New() [static] :211
SyncDispatcher* SyncDispatcher::New1()
{
    SyncDispatcher* obj1 = (SyncDispatcher*)uNew(SyncDispatcher_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\ProgramData\Uno\Packages\Uno.Threading\0.19.6\$.uno(305)
// -----------------------------------------------------------

// public abstract class Thread :305
// {
Thread_type* Thread_typeof()
{
    static uSStrong<Thread_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Thread);
    options.TypeSize = sizeof(Thread_type);
    type = (Thread_type*)uClassType::New("Uno.Threading.Thread", options);
    ::STRINGS[3] = uString::Const("Feature not supported in this backend");
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Uno::Threading::Thread, _callback), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("Create", NULL, (void*)Thread__Create_fn, 0, true, Thread_typeof(), 1, ::g::Uno::Action_typeof()),
        new uFunction("Join", NULL, NULL, offsetof(Thread_type, fp_Join), false, uVoid_typeof(), 0),
        new uFunction("Sleep", NULL, (void*)Thread__Sleep_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Start", NULL, NULL, offsetof(Thread_type, fp_Start), false, uVoid_typeof(), 0));
    return type;
}

// protected Thread(Uno.Action callback) :333
void Thread__ctor__fn(Thread* __this, uDelegate* callback)
{
    __this->ctor_(callback);
}

// public static Uno.Threading.Thread Create(Uno.Action callback) :308
void Thread__Create_fn(uDelegate* callback, Thread** __retval)
{
    *__retval = Thread::Create(callback);
}

// public static void Sleep(int millis) :342
void Thread__Sleep_fn(int* millis)
{
    Thread::Sleep(*millis);
}

// protected Thread(Uno.Action callback) [instance] :333
void Thread::ctor_(uDelegate* callback)
{
    _callback = callback;
}

// public static Uno.Threading.Thread Create(Uno.Action callback) [static] :308
Thread* Thread::Create(uDelegate* callback)
{
    return ::g::Uno::Threading::POSIXThread::New1(callback);
    U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"Feature not...*/]));
}

// public static void Sleep(int millis) [static] :342
void Thread::Sleep(int millis)
{
    ::g::Uno::Threading::POSIXThread::Sleep1(millis);
    return;
    U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"Feature not...*/]));
}
// }

}}} // ::g::Uno::Threading
